clear all;

global problem;
problem=1;

rng('shuffle');

    state_count=50; %T --> number of observations/states
    N=50; %number of particles
    iterations = 5000; %number of MCMC iterations
particles_max_size = 8192;
state_count_max_size = 8192;
    seeds_dim = 30;
M=2;


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% generate random stimulus vector inputs_in. (-5<=inputs_in <=5)
    init_state_param_dim=2; %number of parameters in prior
    state_dim=1; %state dimension
    state_param_fixed_dim=state_count; %number of fixed parameters in state transition
    state_param_rand_dim=1; %number of random parameters in state transition
    obs_dim=4; %observation dimension, number of iid data
    obs_param_fixed_dim=obs_dim*state_count; %number of fixed parameters in observation
    obs_param_rand_dim=1; %number of random parameters in observation

    %parameters - prior
    init_state_parameters=[0 1]; %mean and variance

    %parameters - state
    deltas=ones(state_count,1);%unifrnd(0,5,state_count,1); %deltas as described in proposal - randomly generated with max=5
    sigma_t=5; %common unknown parameter for state transitions
    state_parameters=[deltas' sigma_t];

    %parameters - observation
    sigma_o=0.001; %unknown parameter for observation equation
    n=unidrnd(15,state_count,obs_dim);%unidrnd(15,state_count,obs_dim); %number of trials for all time steps and all replicates, randomly generated with max=10
    n_new=reshape(n',1,state_count*obs_dim);
    obs_parameters=[n_new sigma_o];

    %other model parameters
    %model=0; %binomial=0
    %strains=2; %mouse strains - not used

    %PF parameters
    init_states=zeros(state_dim,N);
    for i=1:1:N
        init_states(:,i)=state_prior_equation(state_dim,...
            init_state_param_dim, init_state_parameters);
    end    
    %initial_state=0; %initial state (time 0)

    %MCMC parameters
    theta_dim = state_param_rand_dim + obs_param_rand_dim; % total number of unknown parameters
    initial_theta = [2, 0.001]; % initial theta values
    fix_cov_std=1;%0.05/theta_dim;
    ad_cov_std=1;%0.05/theta_dim;%0.056644;
    
    %data generation for our model with binomial distribution - state_tt
    %contains the true transition sigmas, mu contains the true states, x contains
    %the successes, p contains the true binomial probabilities

    rng_init_cycles = 1000;    
    seeds = [145351251, 154321360, 84509999, 211114581, 154451360,127451251, 154321360, 85909999, 211111381, 154321360, 127444251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 211111381, 195970389, 85909999, 211111381, 211111381, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360,127351251, 195970389, 85909999, 154321360, 154321360,127351251, 154321360, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 195970389, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360 ];
    
    %[sigma_tt, mu, x, p] = gendata_new(obs_dim, strains, state_count, sigma_t, deltas, initial_state, sigma_o, n);
    [states, observations]=generate_data(state_dim,state_count,...
        state_param_fixed_dim,state_param_rand_dim,state_parameters,...
        obs_dim,obs_param_fixed_dim,obs_param_rand_dim,obs_parameters,...
        init_state_param_dim,init_state_parameters);
    %mu=states';
    %x=observations';
       
    %Random numbers
    %MCMC_proposal_rn = randn(theta_dim,iterations);
    %MCMC_update_rn = rand(1,iterations);
    %PF_transition_rn = randn(state_dim,N*state_count*iterations);
    %PF_likelihood_rn = randn(obs_dim,N*state_count*iterations);
    %PF_resampling_rn = rand(1,state_count*iterations);    
       
    
    %prior parameters - not used
    alpha_prior = 0.001;
    beta_prior =  0.001;

 
state_param_fixed_dim_max_size = state_count_max_size*state_dim;
obs_param_fixed_dim_max_size = state_count_max_size*obs_dim*state_dim;
state_param_dim_max_size = state_param_fixed_dim_max_size + state_param_rand_dim;
obs_param_dim_max_size = obs_param_fixed_dim_max_size + obs_param_rand_dim;
chunk_size_max = (particles_max_size*state_dim)/M;    
chunk_size_true = (N*state_dim)/M;
  

init_particles=reshape(init_states,1,state_dim*N);
init_particles_2 = zeros(1,particles_max_size*state_dim);
for i=1:1:M
    init_particles_2(((i-1)*chunk_size_max+1):((i-1)*chunk_size_max+chunk_size_true)) = init_particles(((i-1)*chunk_size_true+1):(i*chunk_size_true));
end
cov=[fix_cov_std ad_cov_std];
dimensions=[iterations, N, state_count, state_dim, state_param_fixed_dim,...
    state_param_rand_dim, obs_dim, obs_param_fixed_dim, obs_param_rand_dim, theta_dim, seeds_dim, rng_init_cycles, 0, 0, 0];
data=reshape(observations,1,obs_dim*state_count);
data_2 = zeros(1,obs_dim*state_count_max_size);
for i=1:1:obs_dim
    data_2(((i-1)*state_count_max_size+1):((i-1)*state_count_max_size+state_count)) = observations(i,:);
end
obs_parameters_2 = zeros(1,obs_dim*state_count_max_size+obs_param_rand_dim);
for i=1:1:obs_dim
    obs_parameters_2(((i-1)*state_count_max_size+1):((i-1)*state_count_max_size+state_count)) = n(:,i)';
end
obs_parameters_2((obs_dim*state_count_max_size+1):(obs_dim*state_count_max_size+obs_param_rand_dim)) = obs_parameters((state_count*obs_dim+1):(state_count*obs_dim+obs_param_rand_dim));
%MCMC_proposal_rn_in = reshape(MCMC_proposal_rn,1,theta_dim*iterations);
%PF_transition_rn_in = reshape(PF_transition_rn,1,state_dim*N*state_count*iterations);
%PF_likelihood_rn_in = reshape(PF_likelihood_rn,1,obs_dim*N*state_count*iterations);

inputs_in = [ dimensions, initial_theta, cov, init_particles_2, state_parameters, obs_parameters_2, data_2, seeds(1:seeds_dim) ];



	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% write inputs_in.dat to file
filename = strcat('inputs_in_mat_only.dat');
fid = fopen(filename, 'w+');
   
for j=1:length(inputs_in)
	fprintf(fid, '%2.18f\n',inputs_in(j));
end

fclose(fid);


[thetas_matlab, liks_matlab, particles_matlab, acceptance_rate_matlab, prop_thetas_matlab, prop_liks_matlab, urnd_matlab] = adpmcmc_new(single(theta_dim),...
    single(initial_theta),single(iterations),single(fix_cov_std),single(ad_cov_std),single(N),single(init_states),...
    single(state_count),single(state_dim),single(obs_dim),single(state_param_fixed_dim),...
    single(state_param_rand_dim),single(obs_param_fixed_dim),single(obs_param_rand_dim),...
    single(state_parameters),single(obs_parameters),single(alpha_prior),single(beta_prior),single(observations),single(states));

matlab_outputs_out = [reshape(thetas_matlab,1,theta_dim*iterations), reshape(liks_matlab,1,iterations), reshape(particles_matlab,1,state_count*state_dim*iterations), reshape(acceptance_rate_matlab,1,1), reshape(prop_thetas_matlab,1,theta_dim*iterations), reshape(prop_liks_matlab,1,iterations), reshape(urnd_matlab,1,iterations)];


%save outputs_in_log
	filename = strcat('matlab_outputs_out_log_mat_only.dat');
	fid = fopen(filename, 'a+');
   
	for j=1:length(matlab_outputs_out)
		fprintf(fid, '%2.18f,',matlab_outputs_out(j));
	end
	fprintf(fid, '\n');

	fclose(fid);
   
    gap = theta_dim + 1 + state_count*state_dim;
    full = iterations * (theta_dim + 1 + state_count*state_dim);
    
thetas_log_matlab = reshape(matlab_outputs_out(1:theta_dim*iterations),theta_dim,iterations);
    save('thetas_log_matlab_mat_only.mat','thetas_log_matlab');
    
    liks_log_matlab = matlab_outputs_out((theta_dim*iterations+1):(theta_dim*iterations+iterations));
    save('liks_log_matlab_mat_only.mat','liks_log_matlab');
    
    particles_log_matlab = reshape(matlab_outputs_out((theta_dim*iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations)),state_count,iterations);
    save('particles_log_matlab_mat_only.mat','particles_log_matlab');
    
    acc_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1));
    save('acc_log_matlab_mat_only.mat','acc_log_matlab');
	
    prop_thetas_log_matlab = reshape(matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+2):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations)),theta_dim,iterations);
    save('prop_thetas_matlab_mat_only.mat','prop_thetas_log_matlab');
    
    prop_liks_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations));
    save('prop_liks_log_matlab_mat_only.mat','prop_liks_log_matlab');
    
    urnd_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations));
    save('urnd_log_matlab_mat_only.mat','urnd_log_matlab');   
