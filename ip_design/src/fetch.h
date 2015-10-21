#ifndef FETCH_H
#define FETCH_H

#include "foo_data.h"
#include "foo_mem_parameters.h"


void fetch_data_parameters(data_t *fetched_state_parameters_fixed, data_t *fetched_state_parameters_rand, data_t *fetched_obs_parameters_fixed, data_t *fetched_obs_parameters_rand, data_t *fetched_data, uint32_t t, data_t *state_parameters, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, uint32_t state_param_fixed_dim);

#endif