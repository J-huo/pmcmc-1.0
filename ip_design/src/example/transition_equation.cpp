#include "foo_data.h"
#include "foo_mem_parameters.h"
#include "gauss.h"

//using namespace hls;

void transition_equation(data_t *particles, uint32_t P, uint32_t state_dim, uint32_t state_param_fixed_dim,
		uint32_t state_param_rand_dim, data_t *state_parameters, uint32_t t, rng_state_t *rng_state, uint32_t seeds_dim){

	//methylation model

	uint32_t chunk_size_true = (P*state_dim)/M_ti_int;

    data_t delta = state_parameters[t];
    data_t s = state_parameters[state_param_fixed_dim];
    data_t s_t = sqrtf( s * s * delta );

	//rng
	data_t rn[particles_max_size*state_dim];
	uint32_t  u1, u2;
	//uint32_t a= chunk_size_true*5;
	transition_rng_main_loop: for (unsigned int i=0; i<chunk_size_true; i++){
		transition_rng_loop: for (uint32_t k = 0; k < M_ti_int; k++){

		  u1 = __random32(&rng_state[k*2]);
		  u2 = __random32(&rng_state[k*2+1]);
		  rn[k*chunk_size_max + i] = approx(u1, u2);

		}
	}
	
	transition_main_loop: for (unsigned int i=0; i<chunk_size_true; i++){

			transition_parallelism_loop: for (unsigned int k=0; k<M_ti_int; k++){

				 //u1 = __random32(&rng_state[(k*true_chunk_size+i) % (seeds_max_size)]);
				 //u2 = __random32(&rng_state[(k*true_chunk_size+i) % (seeds_max_size)]);
				 //rn = approx(u1, u2);

				particles[k*chunk_size_max + i] += s_t * rn[k*chunk_size_max + i];//* PF_transition_rn[t*P*state_dim + i*state_dim + j];
				//particles[i] = particles[i] + s_t * rn[i];//* PF_transition_rn[t*P*state_dim + i*state_dim + j];
				//particles[i+1] = particles[i+1] + s_t * rn[i+1];

			}
	 }


}
