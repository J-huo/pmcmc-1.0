#ifndef TRANS_H
#define TRANS_H

#include "rngs.h"
#include "foo_data.h"
#include "foo_mem_parameters.h"

void transition_density(data_t *previous_particle, data_t *proposed_particle, rng_state_t *rng_state, uint32_t k, uint32_t t, data_t *state_parameters_fixed, data_t *state_parameters_rand, uint32_t stage);

#endif