#include "transition_density.h"

//USED-DEFINED
void transition_density(data_t *previous_particle, data_t *proposed_particle, rng_state_t *rng_state, uint32_t k, uint32_t t, data_t *state_parameters_fixed, data_t *state_parameters_rand, uint32_t stage){

		//variable declarations
		data_t normal_rnd[trans_nrnd];
		data_t delta, s, s_t;

		//read fixed and random parameters
		s = state_parameters_rand[0];
		delta = state_parameters_fixed[0];
		s_t = sqrtf( s * s * delta );

		//generate random numbers
		normal_rnd_trans(normal_rnd,rng_state,k);

		//transition equation
		*proposed_particle = *previous_particle + s_t * normal_rnd[0];

}
