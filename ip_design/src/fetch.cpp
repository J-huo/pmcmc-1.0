#include "fetch.h"

void fetch_data_parameters(data_t *fetched_state_parameters_fixed, data_t *fetched_state_parameters_rand, data_t *fetched_obs_parameters_fixed, data_t *fetched_obs_parameters_rand, data_t *fetched_data, uint32_t t, data_t *state_parameters, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, uint32_t state_param_fixed_dim){

	#if state_param_fixed_dim_one_element_def>0
		for (uint32_t q=0; q<state_param_fixed_dim_one_element; q++){
			fetched_state_parameters_fixed[q] = state_parameters[q*chunk_size_state_param_fixed_max+t];
		}
	#endif

	#if state_param_rand_dim_def>0
		for (uint32_t q=0; q<state_param_rand_dim; q++){
			fetched_state_parameters_rand[q] = state_parameters[state_param_fixed_dim_max_size+q];
		}
	#endif

	#if obs_param_fixed_dim_one_element_def>0
		for (uint32_t q=0;q<obs_param_fixed_dim_one_element;q++){
			fetched_obs_parameters_fixed[q] = obs_parameters_fixed[q*chunk_size_obs_param_fixed_max + t];
		}
	#endif

	#if obs_param_rand_dim_def>0
		for (uint32_t q=0; q<obs_param_rand_dim; q++){
			fetched_obs_parameters_rand[q] = obs_parameters_rand[q];
		}
	#endif

	#if obs_dim_def>0
		for (uint32_t q=0; q<obs_dim; q++){
			fetched_data[q] = data[q*chunk_size_data_max + t];
		}
	#endif

}
