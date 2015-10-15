/*
* This file is part of ICL SDK4FPGA.
*
* ICL SDK4FPGA -- A framework to optimal design, easy validate
* and fast prototype mathematical algorithms on FPGA based systems.
* Copyright (C) 2014 by Andrea Suardi, Imperial College London.
* Supported by the EPSRC Impact Acceleration grant number EP/K503733/1
*
* ICL SDK4FPGA is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers
* to build their own mathematical algorithms into FPGA.
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* It is the user's responsibility in assessing the correctness of the algorithm
* and software implementation before putting it to use in their own research
* or exploiting the results commercially.
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with ICL SDK4FPGA; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*
*/


#include "foo_data.h"
#include "foo_mem_parameters.h"
#include "gauss.h"

//using namespace hls;


void particle_filter(data_t *log_lik_out, data_t *particles_saved_out, uint32_t P, data_t *init_particles,
		data_t *particles, data_t *particles_temp, data_t *log_lik_particle, data_t *weights, data_t *weights_partial_sums, uint_resampling *resampling_indexes, uint_resampling *replication_factors,
		uint32_t state_count, uint32_t state_dim, uint32_t obs_dim, uint32_t state_param_fixed_dim, uint32_t state_param_rand_dim,
		uint32_t obs_param_fixed_dim_one_element, uint32_t obs_param_fixed_dim, uint32_t obs_param_rand_dim, data_t *state_parameters,
		data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, rng_state_t *rng_state, uint32_t seeds_dim);


data_t log_lognpdf(data_t x, data_t mu, data_t s){

	//data_t a = logf(x);
	data_t b = x - mu;
	data_t a = -0.918938533204673f - x - logf(s) - ((b*b)/(2*s*s));
	return a;

}

/* natural log of the gamma function
   gammln as implemented in the
 * first edition of Numerical Recipes in C */
data_t gammln(data_t xx)
{
    data_t x, tmp, ser;
    const data_t cof[6]={76.18009172947146f,    -86.50532032941677f,
                                24.01409824083091f,    -1.231739572450155f,
                                0.1208650973866179e-2f,-0.5395239384953e-5f};
    int j;

    x=xx-1.0f;
    tmp=x+5.5f;
    tmp -= (x+0.5f)*logf(tmp);
    ser=1.000000000190015f;
    for (j=0;j<=5;j++) {
        x += 1.0f;
        ser += cof[j]/x;
    }
    return -tmp+logf(2.5066282746310005f*ser);
}

// natural log of the gamma distribution PDF
data_t gammalog(data_t x, data_t a, data_t b)
{
    if (x < 0.0f || a < 0.0f || b <= 0.0f){
		#ifndef __SYNTHESIS__
			printf("NaN gammalog\n");
		#endif
        return FP_inf_neg;
    }
    else if (x == 0.0f && a==1.0f && b>0.0f ){
    	return -logf(b);
    }
    else if (x==0.0f && a<1.0f && b>0.0f){
    	return FP_inf_pos;
    }
    else
        return -x / b + (a - 1.0f) * logf(x) - a * logf(b) - gammln(a);
}

data_t log_prior(data_t *theta, data_t *prior_parameters){

	if ( ((uint32_t)prior_parameters[0]) == 0 ){
		return 0.0f;
	}
	else if ( ((uint32_t)prior_parameters[0]) == 1 ){
		data_t prior_value = 0.0f;
		for (int i=0; i<theta_dim; i++){
			prior_value += gammalog(theta[i],prior_parameters[1+i*2],prior_parameters[1+i*2+1]);
		}
		return prior_value;

	}
	else{
		return FP_inf_neg;
	}



}



void mcmc_iteration(data_t *current_mcmc_state, data_t *proposed_mcmc_state, data_t *current_mcmc_state_exp, data_t *proposed_mcmc_state_exp, unsigned int iter, data_t *initial_theta, data_t *u, data_t *u_comp, data_t *rn_prop, data_t *cov,
		uint32_t *acc, data_t *prior_parameters, uint32_t P, data_t *init_particles,
		data_t *particles, data_t *particles_temp, data_t *log_lik_particle, data_t *weights, data_t *weights_partial_sums,
		uint_resampling *resampling_indexes, uint_resampling *replication_factors,
		uint32_t state_count, uint32_t state_dim, uint32_t obs_dim, uint32_t state_param_fixed_dim, uint32_t state_param_rand_dim,
		uint32_t obs_param_fixed_dim_one_element, uint32_t obs_param_fixed_dim, uint32_t obs_param_rand_dim, data_t *state_parameters,
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
						particles, particles_temp, log_lik_particle, weights, weights_partial_sums, resampling_indexes, replication_factors, state_count, state_dim, obs_dim, state_param_fixed_dim,
						state_param_rand_dim, obs_param_fixed_dim_one_element, obs_param_fixed_dim, obs_param_rand_dim,
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


void foo	(	volatile data_t_memory *memory_inout,
				uint32_t byte_inputs_in_offset,
				uint32_t byte_outputs_out_offset)
{

	//ap_bus is the only valid nativeVivado HLSinterface for memory mapped master ports
	#pragma HLS INTERFACE ap_bus port=memory_inout depth=2097152 //used only for RTL simulation

	//Port memory_inout is assigned to an AXI4-master interface
	#pragma HLS RESOURCE variable=memory_inout core=AXI4M

	//Foo function return is assigned to an AXI4-slave interface named BUS_A
	#pragma HLS RESOURCE variable=return core=AXI4LiteS metadata="-bus_bundle BUS_A"

	
	#pragma HLS INTERFACE ap_none register     port=byte_inputs_in_offset
	#pragma HLS RESOURCE core=AXI4LiteS    variable=byte_inputs_in_offset metadata="-bus_bundle BUS_A"

	#pragma HLS INTERFACE ap_none register     port=byte_outputs_out_offset
	#pragma HLS RESOURCE core=AXI4LiteS    variable=byte_outputs_out_offset metadata="-bus_bundle BUS_A"

	

	#ifndef __SYNTHESIS__
	//Any system calls which manage memory allocation within the system, for example malloc(), alloc() and free(), must be removed from the design code prior to synthesis. 

	// input BRAMS
	data_t *dimensions = (data_t *)malloc(15 * sizeof (data_t));
    data_t *initial_theta = (data_t *)malloc(theta_dim * sizeof (data_t));
    data_t *cov = (data_t *)malloc(theta_dim * sizeof (data_t));
    data_t *prior_parameters = (data_t *)malloc(prior_parameters_dim * sizeof (data_t));
    //data_t *MCMC_proposal_rn = (data_t *)malloc(theta_dim * sizeof (data_t));
    //data_t *MCMC_update_rn = (data_t *)malloc(sizeof (data_t));
    data_t *init_particles = (data_t *)malloc(particles_max_size * state_dim * sizeof (data_t));
    data_t *state_parameters = (data_t *)malloc(state_param_dim_max_size * sizeof (data_t));
    data_t *obs_parameters_fixed = (data_t *)malloc(obs_param_fixed_dim_max_size * sizeof (data_t));
    data_t *obs_parameters_rand = (data_t *)malloc(obs_param_rand_dim * sizeof (data_t));
    //data_t *obs_parameters = (data_t *)malloc(obs_param_dim_max_size * sizeof (data_t));
    data_t *data = (data_t *)malloc(data_dim_max_size * sizeof (data_t));
    data_t *seeds = (data_t *)malloc(seeds_dim * sizeof (data_t));

    // internal/output BRAMS
    data_t *particles = (data_t *)malloc(particles_max_size * state_dim * sizeof (data_t));
    data_t *particles_temp = (data_t *)malloc(particles_max_size*state_dim * sizeof (data_t));
    data_t *log_lik_particle = (data_t *)malloc(particles_max_size * sizeof (data_t));
    data_t *weights = (data_t *)malloc(particles_max_size * sizeof (data_t));
    data_t *weights_partial_sums = (data_t *)malloc(M_ti_int * sizeof (data_t));
    uint_resampling *resampling_indexes = (uint_resampling *)malloc(particles_max_size * sizeof (uint_resampling));
    uint_resampling *replication_factors = (uint_resampling *)malloc(particles_max_size * sizeof (uint_resampling));
    data_t *current_mcmc_state = (data_t *)malloc((theta_dim+3+state_count_max_size*state_dim) * sizeof (data_t));
    data_t *proposed_mcmc_state = (data_t *)malloc((theta_dim+3+state_count_max_size*state_dim) * sizeof (data_t));
    data_t *current_mcmc_state_exp = (data_t *)malloc((theta_dim) * sizeof (data_t));
    data_t *proposed_mcmc_state_exp = (data_t *)malloc((theta_dim) * sizeof (data_t));


	#else

	//for synthesis
	
	// input BRAMS
	data_t dimensions[15];
    data_t initial_theta[theta_dim];
    data_t cov[theta_dim];
    data_t prior_parameters[prior_parameters_dim];
    data_t init_particles[particles_max_size*state_dim];
    data_t state_parameters[state_param_dim_max_size];
    data_t obs_parameters_fixed[obs_param_fixed_dim_max_size];
    data_t obs_parameters_rand[obs_param_rand_dim];
    data_t data[data_dim_max_size];
    data_t seeds[seeds_dim];

    // internal/output BRAMS
    data_t particles[particles_max_size*state_dim];
    data_t particles_temp[particles_max_size*state_dim];
    data_t log_lik_particle[particles_max_size];
    data_t weights[particles_max_size];
    data_t weights_partial_sums[M_ti_int];
    uint_resampling resampling_indexes[particles_max_size];
    uint_resampling replication_factors[particles_max_size];
    data_t current_mcmc_state[theta_dim+3+state_count_max_size*state_dim];
    data_t proposed_mcmc_state[theta_dim+3+state_count_max_size*state_dim];
    data_t current_mcmc_state_exp[theta_dim];
    data_t proposed_mcmc_state_exp[theta_dim];
    //data_t current_particles_saved[state_count_max_size*state_dim];
    //data_t proposed_particles_saved[state_count_max_size*state_dim];

	#endif

    PRAGMA_HLS(HLS array_partition variable=particles block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=init_particles block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=weights block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=log_lik_particle block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=data block factor=M_data dim=1)
    PRAGMA_HLS(HLS array_partition variable=particles_temp block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=replication_factors block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=resampling_indexes block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=obs_parameters_fixed block factor=M_data dim=1)

	//read dimension array and decode it
	//ap_wait();
	memcpy(dimensions,(const data_t_memory*)(memory_inout+byte_inputs_in_offset/4),15*sizeof(data_t_memory));
	//ap_wait();

	uint32_t iterations = (uint32_t)dimensions[0];
	uint32_t P = (uint32_t)dimensions[1];
	uint32_t state_count = (uint32_t)dimensions[2];
	uint32_t state_dim_1 = (uint32_t)dimensions[3];
	uint32_t state_param_fixed_1 = (uint32_t)dimensions[4];
	uint32_t state_param_fixed_dim = state_count*state_dim;
	uint32_t state_param_rand_dim_1 = (uint32_t)dimensions[5];
	uint32_t obs_dim = (uint32_t)dimensions[6];
	//uint32_t obs_param_fixed_dim_1 = (uint32_t)dimensions[7];
	uint32_t obs_param_fixed_dim_one_element = (uint32_t)dimensions[7];
	uint32_t obs_param_fixed_dim = obs_param_fixed_dim_one_element * state_count;
	uint32_t obs_param_rand_dim_1 = (uint32_t)dimensions[8];
	uint32_t theta_dim_1 = (uint32_t)dimensions[9];
	uint32_t seeds_dim_1 = (uint32_t)dimensions[10];
	uint32_t rng_init_cycles_1 = (uint32_t)dimensions[11];
	//ap_wait();

	//input offsets
	uint32_t initial_theta_offset = 15;
	uint32_t cov_offset = initial_theta_offset + theta_dim;
	uint32_t init_particles_offset = cov_offset + theta_dim;
	uint32_t state_parameters_offset = init_particles_offset + particles_max_size*state_dim;
	uint32_t obs_parameters_fixed_offset = state_parameters_offset + state_param_fixed_dim + state_param_rand_dim;
	uint32_t obs_parameters_rand_offset = obs_parameters_fixed_offset + obs_param_fixed_dim_max_size;
	uint32_t data_offset = obs_parameters_rand_offset + obs_param_rand_dim;
	uint32_t seeds_offset = data_offset + data_dim_max_size;
	uint32_t prior_parameters_offset = seeds_offset + seeds_dim;

	//output_offsets
	uint32_t mcmc_state_out_offset = 0;

	#ifndef __SYNTHESIS__
	uint32_t acceptance_rate_out_offset = mcmc_state_out_offset + iterations * theta_dim + 3*iterations + iterations * state_count * state_dim;
	uint32_t proposed_thetas_out_offset = acceptance_rate_out_offset + 1;
	uint32_t proposed_liks_out_offset = proposed_thetas_out_offset + iterations*theta_dim;
	uint32_t proposed_priors_out_offset = proposed_liks_out_offset + iterations;
	uint32_t proposed_posteriors_out_offset = proposed_priors_out_offset + iterations;
	uint32_t urnd_out_offset = proposed_posteriors_out_offset + iterations;
	uint32_t urnd_comp_out_offset = urnd_out_offset + iterations;
	uint32_t grnd_out_offset = urnd_comp_out_offset + iterations;
	#endif

	//ap_wait();
	#ifdef __SYNTHESIS__
	//iterations = 10;
	//P = 128;
	//state_count = 10;
	//state_dim = 1;
	//state_param_fixed = 100;
	//state_param_rand_dim = 1;
	//obs_dim = 4;
	//obs_param_fixed_dim = 400;
	//obs_param_rand_dim = 1;
	//theta_dim = 2;
	//seeds_dim = 50;
	//rng_init_cycles = 1000;
	#endif

	//ap_wait();
	memcpy(initial_theta,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + initial_theta_offset ),theta_dim*sizeof(data_t_memory));
	memcpy(cov,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + cov_offset ),theta_dim*sizeof(data_t_memory));
	memcpy(init_particles,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + init_particles_offset ),particles_max_size*state_dim*sizeof(data_t_memory));
	memcpy(state_parameters,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + state_parameters_offset ),(state_param_fixed_dim)*sizeof(data_t_memory));
	memcpy(obs_parameters_fixed,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + obs_parameters_fixed_offset ),(obs_param_fixed_dim_max_size)*sizeof(data_t_memory));
	//memcpy(obs_parameters_rand,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + obs_parameters_rand_offset ),(obs_param_rand_dim)*sizeof(data_t_memory));
	memcpy(data,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + data_offset ), data_dim_max_size * sizeof(data_t_memory));
	memcpy(seeds,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + seeds_offset ), seeds_dim * sizeof(data_t_memory));
	memcpy(prior_parameters,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + prior_parameters_offset ), prior_parameters_dim * sizeof(data_t_memory));

	//ap_wait();

	for (uint32_t i=0;i<theta_dim;i++){
		initial_theta[i] = logf(initial_theta[i]);
	}

	// Registers
	uint32_t acc = 0;
	data_t acceptance_rate;

	//rng registers
	rng_state_t rng_state[seeds_dim];
	data_t rn_prop[theta_dim], rn_update;
	data_t  u, u_comp;

	//ap_wait();

	//rng initialization
	rng_init: for (uint32_t i=0; i<seeds_dim; i++)
		ctrng_seed(rng_init_cycles, (uint32_t)seeds[i], &rng_state[i]);
	//ap_wait();


	//MCMC iterations (main loop)
	mcmc_loop: for (unsigned int j=0;j<iterations;j++){


		mcmc_iteration( current_mcmc_state, proposed_mcmc_state, current_mcmc_state_exp, proposed_mcmc_state_exp, j, initial_theta, &u, &u_comp, rn_prop, cov, &acc, prior_parameters, P, init_particles,
						particles, particles_temp, log_lik_particle, weights, weights_partial_sums, resampling_indexes, replication_factors,
						state_count, state_dim, obs_dim, state_param_fixed_dim, state_param_rand_dim,
						obs_param_fixed_dim_one_element, obs_param_fixed_dim, obs_param_rand_dim, state_parameters,
						obs_parameters_fixed, obs_parameters_rand, data, rng_state, seeds_dim);

				//ap_wait();
		#if MEM_CPY
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + mcmc_state_out_offset + j*(theta_dim+3+state_count*state_dim) ), current_mcmc_state, (theta_dim+3+state_dim*state_count) * sizeof(data_t) );
				//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + thetas_out_offset + j*theta_dim ), current_theta, theta_dim * sizeof(data_t) );
				//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + liks_out_offset + j ), &current_lik, sizeof(data_t) );
				//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + particles_out_offset + j*state_count*state_dim ), current_particles_saved, state_dim * state_count * sizeof(data_t) );
		#endif

		#ifndef __SYNTHESIS__
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_thetas_out_offset + j*theta_dim ), proposed_mcmc_state, theta_dim * sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_liks_out_offset + j ), &proposed_mcmc_state[theta_dim], sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_priors_out_offset + j ), &proposed_mcmc_state[theta_dim+1], sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_posteriors_out_offset + j ), &proposed_mcmc_state[theta_dim+2], sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + urnd_out_offset + j ), &u, sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + urnd_comp_out_offset + j ), &u_comp, sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + grnd_out_offset + j ), &rn_prop[0], sizeof(data_t) );

				//ap_wait();
		#endif

	}


	//ap_wait();
	//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + thetas_out_offset+P*state_dim ), rn, P*state_dim*sizeof(data_t) );
	//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + thetas_out_offset ), current_theta, theta_dim*iterations * sizeof(data_t) );
	//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + liks_out_offset ), &current_lik, sizeof(data_t)*iterations );
	//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + particles_out_offset), current_particles_saved, state_dim * state_count *iterations * sizeof(data_t) );

#ifndef __SYNTHESIS__
	acceptance_rate = ((float)(acc))/((float)iterations);
	memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + acceptance_rate_out_offset), &acceptance_rate, sizeof(data_t) );
#else
	//ap_wait();
	//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + particles_out_offset ), particles, particles_max_size*state_dim*sizeof(data_t) );
#endif

	
	#ifndef __SYNTHESIS__	
	
	free(dimensions);
	free(initial_theta);
	free(cov);
	free(prior_parameters);
	free(init_particles);
	free(state_parameters);
	free(obs_parameters_fixed);
	free(obs_parameters_rand);
	free(data);
	free(seeds);
	free(particles);
	free(particles_temp);
	free(weights);
	free(weights_partial_sums);
	free(resampling_indexes);
	free(replication_factors);
	free(current_mcmc_state);
	free(proposed_mcmc_state);
	free(current_mcmc_state_exp);
	free(proposed_mcmc_state_exp);
	//free(current_particles_saved);
	//free(proposed_particles_saved);
	
	#endif

}
