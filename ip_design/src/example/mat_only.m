clear all;

global problem;
problem=1;

rng('shuffle');

%do not change
init_state_param_dim=2; %number of parameters in prior
state_dim=1; %state dimension    
obs_dim=4; %observation dimension, number of iid data

%PF
state_count=128; %T --> number of states
N=256; %number of particles
sigma_t=1; %common unknown parameter for state transitions
sigma_o=1; %unknown parameter for observation equation
deltas=ones(state_count,1);%unifrnd(0,5,state_count,1); %deltas as described in proposal - randomly generated with max=5
init_state_parameters=[0 1]; %mean and variance of initial particle set
n=unidrnd(15,state_count,obs_dim);%unidrnd(15,state_count,obs_dim); %number of trials for all time steps and all replicates, randomly generated with max=10

%MCMC
iterations = 500; %number of MCMC iterations
initial_theta = [5, 0.1]; % initial theta values
fix_cov_std=[0.05 0.05];%0.05/theta_dim;
ad_cov_std=[0.05 0.05];%0.05/theta_dim;%0.056644;
prior_type = 1;
prior_parameters = [prior_type 1.2 100 1 100];

%FPGA architecture parameters
M=2;
particles_max_size = 16384;
state_count_max_size = 16384;
seeds_dim = 30;
rng_init_cycles = 1000; 
chunk = 30000;

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
state_param_fixed_dim=state_count; %number of fixed parameters in state transition
state_param_rand_dim=1; %number of random parameters in state transition
obs_param_fixed_dim=obs_dim*state_count; %number of fixed parameters in observation
obs_param_rand_dim=1; %number of random parameters in observation
state_parameters=[deltas' sigma_t];

n_new=reshape(n',1,state_count*obs_dim);
obs_parameters=[n_new sigma_o];
   
theta_dim = state_param_rand_dim + obs_param_rand_dim; % total number of unknown parameters

[states, observations]=generate_data(state_dim,state_count,...
        state_param_fixed_dim,state_param_rand_dim,state_parameters,...
        obs_dim,obs_param_fixed_dim,obs_param_rand_dim,obs_parameters,...
        init_state_param_dim,init_state_parameters);
    
    
%prior parameters - not used
alpha_prior = 0.001;
beta_prior =  0.001;

state_param_fixed_dim_max_size = state_count_max_size*state_dim;
obs_param_fixed_dim_max_size = state_count_max_size*obs_dim*state_dim;
state_param_dim_max_size = state_param_fixed_dim_max_size + state_param_rand_dim;
obs_param_dim_max_size = obs_param_fixed_dim_max_size + obs_param_rand_dim;
chunk_size_max = (particles_max_size*state_dim)/M;    
chunk_size_true = (N*state_dim)/M;


init_states=zeros(state_dim,N);
for l=1:1:N
    init_states(:,l)=state_prior_equation(state_dim,...
        init_state_param_dim, init_state_parameters);
end

init_particles=reshape(init_states,1,state_dim*N);
init_particles_2 = zeros(1,particles_max_size*state_dim);
for l=1:1:M
    init_particles_2(((l-1)*chunk_size_max+1):((l-1)*chunk_size_max+chunk_size_true)) = init_particles(((l-1)*chunk_size_true+1):(l*chunk_size_true));
end

%save('workspace_write.mat');

%others
seeds = 100000000 + unidrnd(400000000,1,seeds_dim); %[145351251, 154321360, 84509999, 211114581, 154451360,127451251, 154321360, 85909999, 211111381, 154321360, 127444251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 211111381, 195970389, 85909999, 211111381, 211111381, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360,127351251, 195970389, 85909999, 154321360, 154321360,127351251, 154321360, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 195970389, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360 ];
%seeds = [145351251, 154321360, 84509999, 211114581, 154451360,127451251, 154321360, 85909999, 211111381, 154321360, 127444251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 211111381, 195970389, 85909999, 211111381, 211111381, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360,127351251, 195970389, 85909999, 154321360, 154321360,127351251, 154321360, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 195970389, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360 ];

cov=fix_cov_std;
dimensions=[iterations, N, state_count, state_dim, state_param_fixed_dim,...
    state_param_rand_dim, obs_dim, obs_param_fixed_dim, obs_param_rand_dim, theta_dim, seeds_dim, rng_init_cycles, 0, 0, 0];
data=reshape(observations,1,obs_dim*state_count);
data_2 = zeros(1,obs_dim*state_count_max_size);
for l=1:1:obs_dim
    data_2(((l-1)*state_count_max_size+1):((l-1)*state_count_max_size+state_count)) = observations(l,:);
end
obs_parameters_2 = zeros(1,obs_dim*state_count_max_size+obs_param_rand_dim);
for l=1:1:obs_dim
    obs_parameters_2(((l-1)*state_count_max_size+1):((l-1)*state_count_max_size+state_count)) = n(:,l)';
end
obs_parameters_2((obs_dim*state_count_max_size+1):(obs_dim*state_count_max_size+obs_param_rand_dim)) = obs_parameters((state_count*obs_dim+1):(state_count*obs_dim+obs_param_rand_dim));

save('workspace_write.mat');

inputs_in = [ dimensions, initial_theta, cov, init_particles_2, state_parameters, obs_parameters_2, data_2, seeds(1:seeds_dim), prior_parameters ];


	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% write inputs_in.dat to file
filename = strcat('inputs_in.dat');
fid = fopen(filename, 'w+');
   
for j=1:length(inputs_in)
	fprintf(fid, '%2.18f\n',inputs_in(j));
end

fclose(fid);


 tic
        
        [thetas_matlab, liks_matlab, priors_matlab, posteriors_matlab, particles_matlab, acceptance_rate_matlab, prop_thetas_matlab, prop_liks_matlab, prop_priors_matlab, prop_posteriors_matlab, urnd_matlab] = adpmcmc_new_single(single(theta_dim),...
        single(initial_theta),single(iterations),single(fix_cov_std),single(ad_cov_std),single(N),single(init_states),...
        single(state_count),single(state_dim),single(obs_dim),single(state_param_fixed_dim),...
        single(state_param_rand_dim),single(obs_param_fixed_dim),single(obs_param_rand_dim),...
        single(state_parameters),single(obs_parameters),single(alpha_prior),single(beta_prior),single(observations),single(states), single(prior_parameters));

        matlab_outputs_out = [reshape(thetas_matlab,1,theta_dim*iterations), reshape(liks_matlab,1,iterations), reshape(priors_matlab,1,iterations), reshape(posteriors_matlab,1,iterations), reshape(particles_matlab,1,state_count*state_dim*iterations), reshape(acceptance_rate_matlab,1,1), reshape(prop_thetas_matlab,1,theta_dim*iterations), reshape(prop_liks_matlab,1,iterations), reshape(prop_priors_matlab,1,iterations), reshape(prop_posteriors_matlab,1,iterations), reshape(urnd_matlab,1,iterations)];

        toc
        
       gap = theta_dim + 3 + state_count*state_dim;
    full = iterations * (theta_dim + 3 + state_count*state_dim);
    
    
    thetas_log_matlab = reshape(matlab_outputs_out(1:theta_dim*iterations),theta_dim,iterations);
    save('thetas_log_matlab.mat','thetas_log_matlab');
    
    liks_log_matlab = matlab_outputs_out((theta_dim*iterations+1):(theta_dim*iterations+iterations));
    save('liks_log_matlab.mat','liks_log_matlab');
    
    priors_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+1):(theta_dim*iterations+iterations+iterations));
    save('priors_log_matlab.mat','priors_log_matlab');
    
    posteriors_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+iterations+1):(theta_dim*iterations+iterations+iterations+iterations));
    save('posteriors_log_matlab.mat','posteriors_log_matlab');
    
    particles_log_matlab = reshape(matlab_outputs_out((theta_dim*iterations+iterations+2*iterations+1):(theta_dim*iterations+iterations+2*iterations+state_count*iterations)),state_count,iterations);
    save('particles_log_matlab.mat','particles_log_matlab');
    
    acc_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+2*iterations+1));
    save('acc_log_matlab.mat','acc_log_matlab');
	
    prop_thetas_log_matlab = reshape(matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+2*iterations+2):(theta_dim*iterations+iterations+state_count*iterations+1+2*iterations+theta_dim*iterations)),theta_dim,iterations);
    save('prop_thetas_matlab.mat','prop_thetas_log_matlab');
    
    prop_liks_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+2*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+2*iterations+iterations));
    save('prop_liks_log_matlab.mat','prop_liks_log_matlab');
    
    prop_priors_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+3*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+3*iterations+iterations));
    save('prop_priors_log_matlab.mat','prop_priors_log_matlab');
    
    prop_posteriors_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+4*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+4*iterations+iterations));
    save('prop_posteriors_log_matlab.mat','prop_posteriors_log_matlab');
    
    urnd_log_matlab = matlab_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+4*iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+4*iterations+iterations));
    save('urnd_log_matlab.mat','urnd_log_matlab');  