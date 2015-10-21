#ifndef PARTICLE_H
#define PARTICLE_H

#include "fetch.h"
#include "transition_density.h"
#include "observation_density.h"
#include "rngs.h"
#include "foo_data.h"
#include "foo_mem_parameters.h"


//using namespace hls;

void particle_filter(data_t *log_lik_out, data_t *particles_saved_out, uint32_t P, data_t *init_particles,
		data_t *particles, data_t *particles_temp, data_t *log_lik_particle, data_t *weights, data_t *weights_partial_sums, uint_resampling *resampling_indexes,
		uint_resampling *replication_factors, uint32_t state_count, uint32_t state_dim, uint32_t state_param_fixed_dim,
		uint32_t state_param_rand_dim,	uint32_t obs_param_fixed_dim, uint32_t obs_param_rand_dim,
		data_t *state_parameters, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, rng_state_t *rng_state, uint32_t seeds_dim);

#endif

