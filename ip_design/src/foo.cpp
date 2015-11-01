#include "foo.h"
//using namespace hls;

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
	//software simulation only

	// input BRAMS
	data_t *dimensions = (data_t *)malloc(15 * sizeof (data_t));
    data_t *initial_theta = (data_t *)malloc(theta_dim * sizeof (data_t));
    data_t *cov = (data_t *)malloc(theta_dim * sizeof (data_t));
    data_t *prior_parameters = (data_t *)malloc(prior_parameters_dim * sizeof (data_t));
    data_t *init_particles = (data_t *)malloc(particles_max_size * state_dim * sizeof (data_t));
    data_t *state_parameters = (data_t *)malloc(state_param_dim_max_size * sizeof (data_t));
    data_t *obs_parameters_fixed = (data_t *)malloc(obs_param_fixed_dim_max_size * sizeof (data_t));
    data_t *obs_parameters_rand = (data_t *)malloc(obs_param_rand_dim * sizeof (data_t));
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

	#endif

    PRAGMA_HLS(HLS array_partition variable=particles block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=init_particles block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=weights block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=log_lik_particle block factor=M_ti dim=1)
    //PRAGMA_HLS(HLS array_partition variable=data block factor=M_data dim=1)
    PRAGMA_HLS(HLS array_partition variable=particles_temp block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=replication_factors block factor=M_ti dim=1)
    PRAGMA_HLS(HLS array_partition variable=resampling_indexes block factor=M_ti dim=1)
    //PRAGMA_HLS(HLS array_partition variable=obs_parameters_fixed block factor=M_data dim=1)

	//read dimension array and decode it
	memcpy(dimensions,(const data_t_memory*)(memory_inout+byte_inputs_in_offset/4),15*sizeof(data_t_memory));

	uint32_t iterations = (uint32_t)dimensions[0];
	uint32_t P = (uint32_t)dimensions[1];
	uint32_t state_count = (uint32_t)dimensions[2];
	uint32_t state_dim_1 = (uint32_t)dimensions[3];
	uint32_t state_param_fixed_1 = (uint32_t)dimensions[4];
	uint32_t state_param_fixed_dim = state_count*state_dim;
	uint32_t state_param_rand_dim_1 = (uint32_t)dimensions[5];
	uint32_t obs_dim_1 = (uint32_t)dimensions[6];
	uint32_t obs_param_fixed_dim_1 = (uint32_t)dimensions[7];
	uint32_t obs_param_fixed_dim = obs_dim * state_count;
	uint32_t obs_param_rand_dim_1 = (uint32_t)dimensions[8];
	uint32_t theta_dim_1 = (uint32_t)dimensions[9];
	uint32_t seeds_dim_1 = (uint32_t)dimensions[10];
	uint32_t rng_init_cycles_1 = (uint32_t)dimensions[11];

	//input offsets
	uint32_t initial_theta_offset = 15;
	uint32_t cov_offset = initial_theta_offset + theta_dim;
	uint32_t init_particles_offset = cov_offset + theta_dim;
	uint32_t state_parameters_offset = init_particles_offset + particles_max_size*state_dim;
	uint32_t obs_parameters_fixed_offset = state_parameters_offset + state_param_fixed_dim_max_size + state_param_rand_dim;
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

	memcpy(initial_theta,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + initial_theta_offset ),theta_dim*sizeof(data_t_memory));
	memcpy(cov,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + cov_offset ),theta_dim*sizeof(data_t_memory));
	memcpy(init_particles,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + init_particles_offset ),particles_max_size*state_dim*sizeof(data_t_memory));
	memcpy(state_parameters,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + state_parameters_offset ),(state_param_fixed_dim_max_size)*sizeof(data_t_memory));
	memcpy(obs_parameters_fixed,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + obs_parameters_fixed_offset ),(obs_param_fixed_dim_max_size)*sizeof(data_t_memory));
	memcpy(data,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + data_offset ), data_dim_max_size * sizeof(data_t_memory));
	memcpy(seeds,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + seeds_offset ), seeds_dim * sizeof(data_t_memory));
	memcpy(prior_parameters,(const data_t_memory*)( memory_inout + (byte_inputs_in_offset/4) + prior_parameters_offset ), prior_parameters_dim * sizeof(data_t_memory));

	for (uint32_t i=0;i<theta_dim;i++){
		initial_theta[i] = logf(initial_theta[i]);
	}

	//registers
	uint32_t acc = 0;
	data_t acceptance_rate;

	//rng registers
	rng_state_t rng_state[seeds_dim];
	data_t rn_prop[theta_dim], rn_update;
	data_t  u, u_comp;

	//rng initialization
	rng_init: for (uint32_t i=0; i<seeds_dim; i++)
		ctrng_seed(rng_init_cycles, (uint32_t)seeds[i], &rng_state[i]);


	//MCMC iterations (main loop)
	mcmc_loop: for (unsigned int j=0;j<iterations;j++){
		#pragma HLS LOOP_TRIPCOUNT min=10 max=10 avg=10
		//call iteration function
		mcmc_iteration( current_mcmc_state, proposed_mcmc_state, current_mcmc_state_exp, proposed_mcmc_state_exp, j, initial_theta, &u, &u_comp, rn_prop, cov, &acc, prior_parameters, P, init_particles,
						particles, particles_temp, log_lik_particle, weights, weights_partial_sums, resampling_indexes, replication_factors,
						state_count, state_dim, state_param_fixed_dim, state_param_rand_dim,
						obs_param_fixed_dim, obs_param_rand_dim, state_parameters,
						obs_parameters_fixed, obs_parameters_rand, data, rng_state, seeds_dim);

		//copy results from current iteration to off-chip memory
		#if MEM_CPY
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + mcmc_state_out_offset + j*(theta_dim+3+state_count*state_dim) ), current_mcmc_state, (theta_dim+3+state_dim*state_count) * sizeof(data_t) );
				//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + thetas_out_offset + j*theta_dim ), current_theta, theta_dim * sizeof(data_t) );
				//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + liks_out_offset + j ), &current_lik, sizeof(data_t) );
				//memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + particles_out_offset + j*state_count*state_dim ), current_particles_saved, state_dim * state_count * sizeof(data_t) );
		#endif

		//gor software simulation - transfer data for debugging purposes
		#ifndef __SYNTHESIS__
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_thetas_out_offset + j*theta_dim ), proposed_mcmc_state, theta_dim * sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_liks_out_offset + j ), &proposed_mcmc_state[theta_dim], sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_priors_out_offset + j ), &proposed_mcmc_state[theta_dim+1], sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + proposed_posteriors_out_offset + j ), &proposed_mcmc_state[theta_dim+2], sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + urnd_out_offset + j ), &u, sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + urnd_comp_out_offset + j ), &u_comp, sizeof(data_t) );
				memcpy( (data_t_memory *)( memory_inout + byte_outputs_out_offset/4 + grnd_out_offset + j ), &rn_prop[0], sizeof(data_t) );
		#endif

	}

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
		//software simulation only - free memories
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
	#endif

}
