#ifndef OBS_H
#define OBS_H

#include "rngs.h"

#include "foo_data.h"
#include "foo_mem_parameters.h"

void observation_density(data_t *particle, data_t *likelihood_value, rng_state_t *rng_state, uint32_t k, uint32_t t, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, int *counter_1);

#endif
