#ifndef MCMC_H
#define MCMC_H

#include "foo_data.h"
#include "foo_mem_parameters.h"
#include "particle_filter.h"
#include "prior.h"
#include "rngs.h"

data_t log_lognpdf(data_t x, data_t mu, data_t s);

void mcmc_iteration(data_t *current_mcmc_state, data_t *proposed_mcmc_state, data_t *current_mcmc_state_exp, data_t *proposed_mcmc_state_exp, unsigned int iter, data_t *initial_theta, data_t *u, data_t *u_comp, data_t *rn_prop, data_t *cov,
		uint32_t *acc, data_t *prior_parameters, uint32_t P, data_t *init_particles,
		data_t *particles, data_t *particles_temp, data_t *log_lik_particle, data_t *weights, data_t *weights_partial_sums,
		uint_resampling *resampling_indexes, uint_resampling *replication_factors,
		uint32_t state_count, uint32_t state_dim, uint32_t state_param_fixed_dim, uint32_t state_param_rand_dim,
		uint32_t obs_param_fixed_dim, uint32_t obs_param_rand_dim, data_t *state_parameters,
		data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, rng_state_t *rng_state, uint32_t seeds_dim);
		
#endif
