#include "foo_data.h"
#include "foo_mem_parameters.h"
#include "gauss.h"

//using namespace hls;

void resampling(data_t *particles, data_t *particles_temp, uint32_t P, data_t *weights, data_t weights_sum, data_t *weights_partial_sums, uint_resampling *resampling_indexes, uint_resampling *replication_factors, uint32_t state_dim, data_t rn_resampling){
	
	uint32_t chunk_size_true = (P*state_dim)/M_ti_int;
	uint32_t chunk_size_particles_true = P/M_ti_int;

		data_t_fixed temp_res, temp_res_1, fact, r, U[M_ti_int], mask_int, mask_1, mask_0, rep;
		mask_int(WORDLENGTH_FIX-1,0) = mask_int_pre(WORDLENGTH_FIX-1,0);
		mask_1(WORDLENGTH_FIX-1,0) = mask_1_pre(WORDLENGTH_FIX-1,0);
		mask_0(WORDLENGTH_FIX-1,0) = mask_0_pre(WORDLENGTH_FIX-1,0);

		data_t_fixed rn_resampling_fixed = (data_t_fixed)rn_resampling;

		U[0] = rn_resampling_fixed;

		U_init_loop: for (unsigned int i=1; i<M_ti_int; i++){
			r = (data_t_fixed)((P*weights_partial_sums[i])/weights_sum);
			temp_res_1 = r - rn_resampling_fixed;
			if (temp_res_1 > 0){
				U[i] = (temp_res_1 & mask_int) + mask_1 - temp_res_1;
			}
			else{
				U[i] = - temp_res_1;
			}
		}


		#ifndef __SYNTHESIS__
		uint_resampling sum_test = (uint_resampling)0;
		#endif

 		resampling_main_loop: for (uint32_t j=0; j<chunk_size_particles_true; j++){

			resampling_parallelism_loop: for (uint32_t k=0; k<M_ti_int; k++){

		    	temp_res = (data_t_fixed)(P*weights[k*chunk_size_particles_max+j]/weights_sum);
		    	fixed_point:{
	    			fact = temp_res - U[k];
	    			if (fact > 0){
	    				rep = (fact & mask_int) + mask_1;
	    				U[k] = rep - fact;
	    			}
	    			else{
	    				rep = mask_0;
	    				U[k] = - fact;
	    			}
		    	}

		    	replication_factors[k*chunk_size_particles_max+j] = rep.to_uint();
				#ifndef __SYNTHESIS__
		    	sum_test += replication_factors[k*chunk_size_particles_max+j];
				#endif

		    }

		}



		#ifndef __SYNTHESIS__
		if(sum_test!=uint_resampling(P)){
			printf("\nOutput numbers unequal: %d, %d", P, uint32_t(sum_test));
		}
		#endif



		//update particle set
		uint32_t replicated = 0, o;
		uint32_t block = 0;
		int32_t index = -state_dim;

		resampling_1st_update_loop: for(uint32_t k=0; k<M_ti_int; k++){
			resampling_1st_update_inner_loop: for(uint32_t i=0; i<chunk_size_particles_true; i++){

				o = uint32_t(replication_factors[k*chunk_size_particles_max + i]);

				//replication_factors_outer_loop:for(uint32_t i=0; i<state_dim; i++){
					replication_factors_inner_loop: for (uint32_t j=0; j<o; j++){
						#pragma HLS LOOP_TRIPCOUNT min=0 max=100 avg=1

						index += state_dim;
						if ( index > ( chunk_size_true - 1 ) ){
							block++;
							index = 0;
						}

						for (uint32_t l=0;l<state_dim;l++){
							particles_temp[block*chunk_size_max + index + l]=particles[k*chunk_size_max + i*state_dim + l];
						}
					}
				//}

				//replicated += o;
			}

		}

		resampling_2nd_update_loop: for(uint32_t j=0; j<chunk_size_true; j++){
			resampling_2nd_update_parallelism_loop: for(uint32_t k=0; k<M_ti_int; k++){
				particles[k*chunk_size_max+j]=particles_temp[k*chunk_size_max+j];
			}
		}



}

