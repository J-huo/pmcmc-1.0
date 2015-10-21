#include "particle_filter.h"



void particle_filter(data_t *log_lik_out, data_t *particles_saved_out, uint32_t P, data_t *init_particles,
		data_t *particles, data_t *particles_temp, data_t *log_lik_particle, data_t *weights, data_t *weights_partial_sums, uint_resampling *resampling_indexes,
		uint_resampling *replication_factors, uint32_t state_count, uint32_t state_dim, uint32_t state_param_fixed_dim,
		uint32_t state_param_rand_dim,	uint32_t obs_param_fixed_dim, uint32_t obs_param_rand_dim,
		data_t *state_parameters, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, rng_state_t *rng_state, uint32_t seeds_dim)
{

	//arrays to temporarily store parameters and data in each SSM time step - all of them are fully partitioned for parallel access

	data_t fetched_state_parameters_fixed[state_param_fixed_dim_one_element];
	#if state_param_fixed_dim_one_element_def>1
		#pragma HLS ARRAY_PARTITION variable=fetched_state_parameters_fixed complete dim=1
	#endif

	data_t fetched_state_parameters_rand[state_param_rand_dim];
	#if state_param_rand_dim_def>1
		#pragma HLS ARRAY_PARTITION variable=fetched_state_parameters_rand complete dim=1
	#endif

	data_t fetched_obs_parameters_fixed[obs_param_fixed_dim_one_element];
	#if obs_param_fixed_dim_one_element_def>1
		#pragma HLS ARRAY_PARTITION variable=fetched_obs_parameters_fixed complete dim=1
	#endif

	data_t fetched_obs_parameters_rand[obs_param_rand_dim];
	#if obs_param_rand_dim_def>1
		#pragma HLS ARRAY_PARTITION variable=fetched_obs_parameters_rand complete dim=1
	#endif

	data_t fetched_data[obs_dim];
	#if obs_dim_def>1
		#pragma HLS ARRAY_PARTITION variable=fetched_data complete dim=1
	#endif

	//variable declarations - transition and likelihood
	uint32_t index_saved, u5, u6, index_saved_keep = 0, block, index;
	int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0, counter_6 = 0;
	data_t rn_resampling, rn_particles_saved, weights_sum, weights_mean,
	log_lik_particle_max_keep, log_lik_particle_max = FP_inf_neg, weights_chunk_sums[M_ti_int],
	likelihood_value[M_ti_int];
	#if M_ti>1
		#pragma HLS ARRAY_PARTITION variable=weights_chunk_sums complete dim=1
		#pragma HLS ARRAY_PARTITION variable=likelihood_value complete dim=1
	#endif

	//variable declarations - resampling
	data_t_fixed temp_res, temp_res_1, fact, r, U[M_ti_int], mask_int, mask_1, mask_0, mask_frac,
	rep, rn_resampling_fixed;
	#if M_ti>1
		#pragma HLS ARRAY_PARTITION variable=U complete dim=1
	#endif
	data_t_fixed_reduced mask_1_reduced;
	uint32_t o, block_replicated;
	int32_t index_replicated;
	mask_int(WORDLENGTH_FIX_M_1,0) = mask_int_pre(WORDLENGTH_FIX_M_1,0);
	mask_1(WORDLENGTH_FIX_M_1,0) = mask_1_pre(WORDLENGTH_FIX_M_1,0);
	mask_0(WORDLENGTH_FIX_M_1,0) = mask_0_pre(WORDLENGTH_FIX_M_1,0);
	mask_frac(WORDLENGTH_FIX_M_1,0) = mask_frac_pre(WORDLENGTH_FIX_M_1,0);
	mask_1_reduced(WORDLENGTH_FIX_REDUCED_M_1,0) = mask_1_reduced_pre(WORDLENGTH_FIX_REDUCED_M_1,0);

	//chunk sizes declarations
	uint32_t chunk_size_true = (P*state_dim)/M_ti_int;
	uint32_t chunk_size_particles_true = (P)/M_ti_int;


	//Processing part

	//initialise particle set
	particles_init_loop: for (unsigned int i = 0; i < chunk_size_true; i++){
		#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128
		particles_init_parallelism_loop: for (unsigned int k = 0; k < M_ti_int; k++){
			particles_temp[k*chunk_size_max + i] = init_particles[k*chunk_size_max + i];
		}
	}

	//choose random particle from 1st time step
	index_saved = 0;
	block = index_saved / chunk_size_particles_true;
	index = index_saved % chunk_size_particles_true;
	particles_saved_1st_loop: for (unsigned int i = 0; i < state_dim; i++){
				particles_saved_out[i] = particles_temp[block*chunk_size_max + index*state_dim + i];
	}


	////IMPLIED
	////set likelihood of 1st time step = 0.0


	//time loop - for all time steps of SSM
	time_loop: for (unsigned int t = 1; t<state_count; t++){

		#pragma HLS LOOP_TRIPCOUNT min=1000 max=1000 avg=1000
		counter_1 = 0;
		counter_2 = 0;
		counter_3 = 0;
		counter_4 = 0;

		index_saved = 0;
		index_saved_keep = 0;
		log_lik_particle_max = FP_inf_neg;

		//fetch parameters and data for this time step
		fetch_data_parameters(fetched_state_parameters_fixed, fetched_state_parameters_rand, fetched_obs_parameters_fixed, fetched_obs_parameters_rand, fetched_data, t, state_parameters, obs_parameters_fixed, obs_parameters_rand, data, state_param_fixed_dim);

		/////////////////////////////////////////////////////////////////////////
		/////////////TRANSITION AND LIKELIHOOD///////////////////////////////////

		//execute the transition and likelihood steps of the particle filter for all particles (for time step t)
		main_loop: for (unsigned int i=0; i<chunk_size_particles_true; i++){
			//#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128

			parallelism_loop: for (unsigned int k=0; k<M_ti_int; k++){

				transition_density(&particles_temp[k*chunk_size_max + i*state_dim], &particles[k*chunk_size_max + i*state_dim], rng_state, k, t, fetched_state_parameters_fixed, fetched_state_parameters_rand,0);

				observation_density(&particles[k*chunk_size_max + i*state_dim], &likelihood_value[k], rng_state, k, t, fetched_obs_parameters_fixed, fetched_obs_parameters_rand, fetched_data, &counter_1);

				//check for NaN and saturate
				if (!(likelihood_value[k] > FP_inf_neg)){
					log_lik_particle[k*chunk_size_particles_max + i] = FP_inf_neg;
					#ifndef __SYNTHESIS__
						//printf("Negative Infinite sub-loglikelihood\n");
					#endif
					counter_2++;
				}
				else{
					log_lik_particle[k*chunk_size_particles_max + i] = likelihood_value[k];
				}



			}

			//Comparator tree to find maximum log-likelihood
			#if M_ti == 1

				log_lik_particle_max_keep = likelihood_value[0];
				index_saved_keep = 0*chunk_size_particles_max + i;

				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 2

				if (likelihood_value[0] > likelihood_value[1]){
					log_lik_particle_max_keep = likelihood_value[0];
					index_saved_keep = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_keep = likelihood_value[1];
					index_saved_keep = 1*chunk_size_particles_max + i;
				}

				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 4

				data_t log_lik_particle_max_temp[2];
				uint32_t index_saved_temp[2];

				if (likelihood_value[0] > likelihood_value[1]){
					log_lik_particle_max_temp[0] = likelihood_value[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = likelihood_value[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (likelihood_value[2] > likelihood_value[3]){
					log_lik_particle_max_temp[1] = likelihood_value[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = likelihood_value[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[0];
					index_saved_keep = index_saved_temp[0];
				}
				else{
					log_lik_particle_max_keep = log_lik_particle_max_temp[1];
					index_saved_keep = index_saved_temp[1];
				}

				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 5

				data_t log_lik_particle_max_temp[3];
				uint32_t index_saved_temp[3];

				if (likelihood_value[0] > likelihood_value[1]){
					log_lik_particle_max_temp[0] = likelihood_value[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = likelihood_value[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (likelihood_value[2] > likelihood_value[3]){
					log_lik_particle_max_temp[1] = likelihood_value[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = likelihood_value[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_temp[2] = log_lik_particle_max_temp[0];
					index_saved_temp[2] = index_saved_temp[0];
				}
				else{
					log_lik_particle_max_temp[2] = log_lik_particle_max_temp[1];
					index_saved_temp[2] = index_saved_temp[1];
				}

				if (log_lik_particle_max_temp[2] > likelihood_value[4]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[2];
					index_saved_keep = index_saved_temp[2];
				}
				else{
					log_lik_particle_max_keep = likelihood_value[4];
					index_saved_keep = 4*chunk_size_particles_max + i;
				}

				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 8

				data_t log_lik_particle_max_temp[6];
				uint32_t index_saved_temp[6];

				if (likelihood_value[0] > likelihood_value[1]){
					log_lik_particle_max_temp[0] = likelihood_value[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = likelihood_value[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (likelihood_value[2] > likelihood_value[3]){
					log_lik_particle_max_temp[1] = likelihood_value[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = likelihood_value[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (likelihood_value[4] > likelihood_value[5]){
					log_lik_particle_max_temp[2] = likelihood_value[4];
					index_saved_temp[2] = 4*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[2] = likelihood_value[5];
					index_saved_temp[2] = 5*chunk_size_particles_max + i;
				}

				if (likelihood_value[6] > likelihood_value[7]){
					log_lik_particle_max_temp[3] = likelihood_value[6];
					index_saved_temp[3] = 6*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[3] = likelihood_value[7];
					index_saved_temp[3] = 7*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_temp[4] = log_lik_particle_max_temp[0];
					index_saved_temp[4] = index_saved_temp[0];
				}
				else{
					log_lik_particle_max_temp[4] = log_lik_particle_max_temp[1];
					index_saved_temp[4] = index_saved_temp[1];
				}

				if (log_lik_particle_max_temp[2] > log_lik_particle_max_temp[3]){
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[2];
					index_saved_temp[5] = index_saved_temp[2];
				}
				else{
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[3];
					index_saved_temp[5] = index_saved_temp[3];
				}

				if (log_lik_particle_max_temp[4] > log_lik_particle_max_temp[5]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[4];
					index_saved_keep = index_saved_temp[4];
				}
				else{
					log_lik_particle_max_keep = log_lik_particle_max_temp[5];
					index_saved_keep = index_saved_temp[5];
				}

				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}


			#elif M_ti == 10

				data_t log_lik_particle_max_temp[8];
				uint32_t index_saved_temp[8];

				if (likelihood_value[0] > likelihood_value[1]){
					log_lik_particle_max_temp[0] = likelihood_value[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = likelihood_value[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (likelihood_value[2] > likelihood_value[3]){
					log_lik_particle_max_temp[1] = likelihood_value[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = likelihood_value[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (likelihood_value[4] > likelihood_value[5]){
					log_lik_particle_max_temp[2] = likelihood_value[4];
					index_saved_temp[2] = 4*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[2] = likelihood_value[5];
					index_saved_temp[2] = 5*chunk_size_particles_max + i;
				}

				if (likelihood_value[6] > likelihood_value[7]){
					log_lik_particle_max_temp[3] = likelihood_value[6];
					index_saved_temp[3] = 6*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[3] = likelihood_value[7];
					index_saved_temp[3] = 7*chunk_size_particles_max + i;
				}

				if (likelihood_value[8] > likelihood_value[9]){
					log_lik_particle_max_temp[4] = likelihood_value[8];
					index_saved_temp[4] = 8*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[4] = sum[9];
					index_saved_temp[4] = 9*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[0];
					index_saved_temp[5] = index_saved_temp[0];
				}
				else{
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[1];
					index_saved_temp[5] = index_saved_temp[1];
				}

				if (log_lik_particle_max_temp[2] > log_lik_particle_max_temp[3]){
					log_lik_particle_max_temp[6] = log_lik_particle_max_temp[2];
					index_saved_temp[6] = index_saved_temp[2];
				}
				else{
					log_lik_particle_max_temp[6] = log_lik_particle_max_temp[3];
					index_saved_temp[6] = index_saved_temp[3];
				}

				if (log_lik_particle_max_temp[5] > log_lik_particle_max_temp[6]){
					log_lik_particle_max_temp[7] = log_lik_particle_max_temp[5];
					index_saved_temp[7] = index_saved_temp[5];

				}
				else{
					log_lik_particle_max_temp[7] = log_lik_particle_max_temp[6];
					index_saved_temp[7] = index_saved_temp[6];
				}

				if (log_lik_particle_max_temp[7] > log_lik_particle_max_temp[4]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[7];
					index_saved_keep = index_saved_temp[7];
				}
				else{
					log_lik_particle_max_keep = log_lik_particle_max_temp[4];
					index_saved_keep = index_saved_temp[4];
				}

				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#endif

		} //end of main_loop

		log_lik_particle_max = log_lik_particle_max/2.0f;


		/////////////////////////////////////////////////////////////////////////////////////////////////
		////////////////////////SUMS AND MEAN LIKELIHOOD COMPUTATION/////////////////////////////////////

		weights_sum = 0.0f;

		//initialize accumulators
		chunk_sums_init_loop: for (unsigned int l=0;l<M_ti_int;l++){
			weights_chunk_sums[l] = 0.0f;
		}

		//compute weights from log-weights and then accumulate weights to form chunk sums
		sum_main_loop: for (unsigned int i=0; i<chunk_size_particles_true; i++){
				#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128

				sum_parallelism_loop: for (unsigned int k=0; k<M_ti_int; k++){

					//compute normalized weight (using maximum log-weight for normalization)
					weights[k*chunk_size_particles_max + i] = expf( log_lik_particle[k*chunk_size_particles_max + i] - log_lik_particle_max );

					//detect errors
					if (!(weights[k*chunk_size_particles_max + i] >= 0.0f && weights[k*chunk_size_particles_max + i] < FP_inf_pos)){
						weights[k*chunk_size_particles_max + i] = 0.0f;
						#ifndef __SYNTHESIS__
							printf("NaN or zero or Positive Infinite weight\n");
						#endif
							counter_4++;
					}

					weights_chunk_sums[k] += weights[k*chunk_size_particles_max + i];

				}

		 }


		//compute partial weight sums from chunk sums
		acc_final: for (int i = 0; i < M_ti_int; i++) {
			weights_partial_sums[i] = weights_sum;
			weights_sum += weights_chunk_sums[i];
		}


		//compute mean of weights
		weights_mean = weights_sum / P;

		//exceptional case - error correction
		if (weights_sum == 0.0f){
			#ifndef __SYNTHESIS__
				printf("Weights sum = 0, artificially setting to 1 (t=%d)\n",t);
			#endif
			counter_5++;
			weights_sum = 1.0f;
		}

		//de-normalize weight --> produce denormalized log-weight
		float a = logf( weights_mean ) + log_lik_particle_max;
		if (!(a > FP_inf_neg)){
			#ifndef __SYNTHESIS__
				printf("a = -inf (t=%d)\n",t);
			#endif
			counter_6++;
			a = FP_inf_neg;
		}

		//feed the computed log-weight into the accumulator --> when all time steps are processed this will contain the likelihood estimate
		*log_lik_out += a;//logf( weights_mean ) + log_lik_particle_max;
		#ifndef __SYNTHESIS__
			//printf("Step: %d,    Value: %f,    Wm: %E,     Counters: %d   %d   %d   %d\n", t, a, weights_mean, counter_1, counter_2, counter_3, counter_4);
		#endif



		//////////////////////////////////////////////////////////////
		/////////////////RESAMPLING///////////////////////////////////

		//generate random numbers for 1) use inside resampling, 2) selection of random particle
		u5 = __random32(&rng_state[trans_nrnd*M_ti_int*2 + obs_nrnd*M_ti_int*2 + trans_urnd*M_ti_int + obs_urnd*M_ti_int]);//trans_nrnd*M_ti_int*2 + obs_nrnd*M_ti_int*2 + trans_urnd*M_ti_int + k*obs_urnd + i
		u6 = __random32(&rng_state[trans_nrnd*M_ti_int*2 + obs_nrnd*M_ti_int*2 + trans_urnd*M_ti_int + obs_urnd*M_ti_int]);
		rn_particles_saved = (data_t)(u5/4294967296.0f);
		rn_resampling = (data_t)(u6/4294967296.0f);
		rn_resampling_fixed = (data_t_fixed)rn_resampling;

		U[0] = rn_resampling_fixed;

		//initialization of U numbers (see RSR paper)
		U_init_loop: for (unsigned int i=1; i<M_ti_int; i++){

			//conversion to fixed point for reduced latency
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

		//main resampling loop --> computes replication counts for all particles
		resampling_main_loop: for (uint32_t j=0; j<chunk_size_particles_true; j++){
			#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128

			resampling_parallelism_loop: for (uint32_t k=0; k<M_ti_int; k++){

				//conversion to fixed point for reduced latency
				temp_res = (data_t_fixed)((P*weights[k*chunk_size_particles_max+j]/weights_sum));
				fixed_point:{
					fact = temp_res - U[k];
					U[k] = (data_t_fixed)(mask_1_reduced - (data_t_fixed_reduced)(fact & mask_frac));

					if (fact > 0){
							rep = (fact & mask_int) + mask_1;
					}
					else{
							rep = mask_0;
					}

				}

				//number of replications for this particle
				replication_factors[k*chunk_size_particles_max+j] = rep.to_uint();
				#ifndef __SYNTHESIS__
				sum_test += replication_factors[k*chunk_size_particles_max+j];
				#endif

			}

		}

		#ifndef __SYNTHESIS__
		if(sum_test!=uint_resampling(P)){
			//printf("\nOutput numbers unequal: %d, %d\n", P, uint32_t(sum_test));
		}
		#endif

		block_replicated = 0;
		index_replicated = -state_dim;

		//update particle set using two particle memories
		resampling_1st_update_loop: for(uint32_t k=0; k<M_ti_int; k++){

			resampling_1st_update_inner_loop: for(uint32_t i=0; i<chunk_size_particles_true; i++){

				#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128

				//number of replications
				o = (uint32_t)replication_factors[k*chunk_size_particles_max + i];

					//loop with variable bound
					replication_factors_inner_loop: for (uint32_t j=0; j<o; j++){
						#pragma HLS LOOP_TRIPCOUNT min=1 max=1 avg=1

						index_replicated += state_dim;
						if ( index_replicated > ( chunk_size_true - 1 ) ){
							block_replicated++;
							index_replicated = 0;
						}

						for (uint32_t l=0;l<state_dim;l++){
							particles_temp[block_replicated*chunk_size_max + index_replicated + l]=particles[k*chunk_size_max + i*state_dim + l];
						}
					}

			}

		}

		//!!!if index_saved from likelihood func is used, it has to be converted to particle format (it is in particles max format)

		//choose random particle from time step t
		index_saved = (uint32_t)floorf(rn_particles_saved * P);
		block = index_saved / chunk_size_particles_true;
		index = index_saved % chunk_size_particles_true;
		particles_saved_main_loop: for (unsigned int i = 0; i < state_dim; i++){
					particles_saved_out[t*state_dim + i] = particles_temp[block*chunk_size_max + index*state_dim + i];
		}



	}//end of time_loop


	#ifndef __SYNTHESIS__
		//printf("Counter 5: %d\n", counter_5);
		//printf("Counter 6: %d\n", counter_6);
	#endif

	//check for errors in estimated likelihood
	if (!(*log_lik_out >= FP_inf_neg)){
		*log_lik_out = FP_inf_neg;
		#ifndef __SYNTHESIS__
			printf("Negative Infinite total loglikelihood\n");
		#endif
	}
	else if(*log_lik_out > 0.0f){
		*log_lik_out = 0.0f;
		#ifndef __SYNTHESIS__
			printf("Positive or NaN total loglikelihood\n");
		#endif
	}

}
