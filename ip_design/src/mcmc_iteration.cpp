
#include "mcmc_iteration.h"

//using namespace hls;

data_t log_lognpdf(data_t x, data_t mu, data_t s){

	//data_t a = logf(x);
	data_t b = x - mu;
	data_t a = -0.918938533204673f - x - logf(s) - ((b*b)/(2*s*s));
	return a;

}

void mcmc_iteration(data_t *current_mcmc_state, data_t *proposed_mcmc_state, data_t *current_mcmc_state_exp, data_t *proposed_mcmc_state_exp, unsigned int iter, data_t *initial_theta, data_t *u, data_t *u_comp, data_t *rn_prop, data_t *cov,
		uint32_t *acc, data_t *prior_parameters, uint32_t P, data_t *init_particles,
		data_t *particles, data_t *particles_temp, data_t *log_lik_particle, data_t *weights, data_t *weights_partial_sums,
		uint_resampling *resampling_indexes, uint_resampling *replication_factors,
		uint32_t state_count, uint32_t state_dim, uint32_t state_param_fixed_dim, uint32_t state_param_rand_dim,
		uint32_t obs_param_fixed_dim, uint32_t obs_param_rand_dim, data_t *state_parameters,
		data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, rng_state_t *rng_state, uint32_t seeds_dim){

	uint32_t u1=0, u2=0;

	//MCMC proposal
			if (iter==0){
				theta_prop_0_loop: for (unsigned int i=0;i<theta_dim;i++){
					proposed_mcmc_state[i] = initial_theta[i];
					proposed_mcmc_state_exp[i] = expf(initial_theta[i]);
				}
			}
			else{
				theta_prop_loop: for (unsigned int i=0;i<theta_dim;i++){
						//theta_prop_do_loop: do{
							//#pragma HLS LOOP_TRIPCOUNT min=1 max=20 avg=2

							u1 = __random32(&rng_state[seeds_dim-1]);
							u2 = __random32(&rng_state[seeds_dim-1]);
							rn_prop[i] = approx(u1, u2);
							proposed_mcmc_state[i] = current_mcmc_state[i] + rn_prop[i]*cov[i];
							proposed_mcmc_state_exp[i] = expf(proposed_mcmc_state[i]);
						//}
						//while (proposed_mcmc_state[i] < 0.0f);
							//proposed_theta[i] = -proposed_theta[i];
				}
			}
			//ap_wait();
			state_param_prop_loop: for (unsigned int i=0;i<state_param_rand_dim;i++)
					state_parameters[state_param_fixed_dim+i] = proposed_mcmc_state_exp[i];
			//ap_wait();
			obs_param_prop_loop: for (unsigned int i=0;i<obs_param_rand_dim;i++)
				obs_parameters_rand[i] = proposed_mcmc_state_exp[state_param_rand_dim+i];
			//ap_wait();
			//proposed likelihood
			proposed_mcmc_state[theta_dim]=0.0f;
			//ap_wait();
			// Run PF

			//likelihood
			pf_call_main: particle_filter(&proposed_mcmc_state[theta_dim], &proposed_mcmc_state[theta_dim+3], P, init_particles,
						particles, particles_temp, log_lik_particle, weights, weights_partial_sums, resampling_indexes,
						replication_factors, state_count, state_dim, state_param_fixed_dim,
						state_param_rand_dim, obs_param_fixed_dim, obs_param_rand_dim,
						state_parameters, obs_parameters_fixed, obs_parameters_rand, data, rng_state, seeds_dim);
			/*
					saturation_loop: for (unsigned int i=0;i<theta_dim;i++){
						if (proposed_theta[i]<0.0f){
							proposed_lik = FP_inf_neg;
							//break;
						}
					}
			*/

			//prior
			prior_call_main: data_t prior_value = log_prior(proposed_mcmc_state_exp, prior_parameters);
			proposed_mcmc_state[theta_dim+1] = prior_value;

			//posterior
			proposed_mcmc_state[theta_dim+2] = proposed_mcmc_state[theta_dim] + proposed_mcmc_state[theta_dim+1];


			//ap_wait();
			*u = (data_t)(u1/4294967296.0);
			*u_comp = (data_t)(u2/4294967296.0);
			data_t log_u = logf(*u_comp);
			//ap_wait();

			if (iter == 0){
				theta_update_0_loop: for (unsigned int i=0;i<theta_dim;i++){
						current_mcmc_state[i] = proposed_mcmc_state[i];
						current_mcmc_state_exp[i] = proposed_mcmc_state_exp[i];
				}

				particles_saved_update_0_loop: for (unsigned int i=0;i<state_count*state_dim;i++)
						current_mcmc_state[theta_dim+3+i] = proposed_mcmc_state[theta_dim+3+i];

				current_mcmc_state[theta_dim] = proposed_mcmc_state[theta_dim];
				current_mcmc_state[theta_dim+1] = proposed_mcmc_state[theta_dim+1];
				current_mcmc_state[theta_dim+2] = proposed_mcmc_state[theta_dim+2];

			}
			else{

					data_t ratio = (proposed_mcmc_state[theta_dim+2]-current_mcmc_state[theta_dim+2]) + log_lognpdf(current_mcmc_state[0],proposed_mcmc_state[0],cov[0]) + log_lognpdf(current_mcmc_state[1],proposed_mcmc_state[1],cov[1]) - log_lognpdf(proposed_mcmc_state[0],current_mcmc_state[0],cov[0]) - log_lognpdf(proposed_mcmc_state[1],current_mcmc_state[1],cov[1]);

					if ( ratio >  log_u ){

						theta_update_loop: for (unsigned int i=0;i<theta_dim;i++){
								current_mcmc_state[i] = proposed_mcmc_state[i];
								current_mcmc_state_exp[i] = proposed_mcmc_state_exp[i];
						}

						particles_saved_update_loop: for (unsigned int i=0;i<state_count*state_dim;i++)
								current_mcmc_state[theta_dim+3+i] = proposed_mcmc_state[theta_dim+3+i];

						current_mcmc_state[theta_dim] = proposed_mcmc_state[theta_dim];
						current_mcmc_state[theta_dim+1] = proposed_mcmc_state[theta_dim+1];
						current_mcmc_state[theta_dim+2] = proposed_mcmc_state[theta_dim+2];

						*acc = *acc + 1;

				}
			}


};
