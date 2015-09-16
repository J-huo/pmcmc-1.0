%mex -v bootstrap_filter.cpp
clear all;

global problem;
problem=1; 

if (problem==0)
        
    %tracking

    %dimensions
    init_state_param_dim=2; %number of parameters in prior
    state_dim=4; %state dimension (position+velocity)
    state_count=50; %Tf --> number of observations/states
    state_param_fixed_dim=1; %number of fixed parameters in state transition
    state_param_rand_dim=1; %number of random parameters in state transition
    obs_dim=5; %(J) --> observation dimension, number of sensors
    obs_param_fixed_dim=3+obs_dim*2; %number of fixed parameters in observation
    obs_param_rand_dim=1; %number of random parameters in observation

    %parameters - prior
    s2r0 = 10;                      % a priori variance for the position
    s2v0 = 0.05;                    % a priori variance for the velocity
    init_state_parameters=[s2r0 s2v0]; 

    %parameters - state
    T = 0.1;                          % observation period
    s2u = 1;                        % variance of the state eq.
    state_parameters=[T s2u];

    %parameters - observation
    P0 = 1;                         % transmitted power
    ss = 1e+4;                      % side of the square area monitored by the sensor network [centered at (0,0)]
    alpha = 2;                      % power-decay exponent
    const_rand=rand([2 obs_dim]);
    S = -(ss/2) + ss*const_rand;   % sensor positions (uniformly spread over the monitored area)
    s2g = 0.05;                        % variance of the sensor measurements
    obs_parameters=[P0 ss alpha S(1,:) S(2,:) s2g];

    %PF parameters
    N=100; %number of particles        
    %initial_state=0; %initial state (time 0)
    init_states=zeros(state_dim,N);
    for i=1:1:N
        init_states(:,i)=state_prior_equation(state_dim,...
            init_state_param_dim, init_state_parameters);
    end    
    
    
    %MCMC parameters
    iterations = 100; %number of MCMC iterations
    theta_dim = state_param_rand_dim + obs_param_rand_dim; % total number of unknown parameters
    initial_theta = [1, 0.05]; % initial theta values
    fix_cov_std=0.1/theta_dim;
    ad_cov_std=1/theta_dim;%0.056644;    
    
    [states, observations]=generate_data(state_dim,state_count,state_param_fixed_dim,...
        state_param_rand_dim,state_parameters,obs_dim,obs_param_fixed_dim,...
        obs_param_rand_dim,obs_parameters,init_state_param_dim,...
        init_state_parameters);

    %Random numbers
    MCMC_proposal_rn = randn(theta_dim,iterations);
    MCMC_update_rn = rand(1,iterations);
    PF_transition_rn = randn(state_dim,N*state_count*iterations);
    PF_resampling_rn = rand(1,state_count*iterations);    
    
    
    
    %Write to .dat files   
    filename = strcat('init_theta_in.dat');
    fid = fopen(filename, 'w+'); 
    for j=1:length(initial_theta)
        fprintf(fid, '%2.18f\n',initial_theta(j));
    end
    fclose(fid);    
    
    init_particles=reshape(init_states,1,state_dim*N);
    filename = strcat('init_particle_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(init_particles)
        fprintf(fid, '%2.18f\n',init_particles(j));
    end
    fclose(fid);
    
    cov=[fix_cov_std ad_cov_std];
    filename = strcat('cov_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(cov)
        fprintf(fid, '%2.18f\n',cov(j));
    end
    fclose(fid);
    
    dimensions=[state_count, state_dim, state_param_fixed_dim,...
        state_param_rand_dim, obs_dim, obs_param_fixed_dim, obs_param_rand_dim];
    filename = strcat('dimensions_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(dimensions)
        fprintf(fid, '%2.18f\n',dimensions(j));
    end
    fclose(fid);
    
    filename = strcat('state_params_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(state_parameters)
        fprintf(fid, '%2.18f\n',state_parameters(j));
    end
    fclose(fid);
    
    filename = strcat('obs_params_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(obs_parameters)
        fprintf(fid, '%2.18f\n',obs_parameters(j));
    end
    fclose(fid);
    
    data=reshape(observations,1,obs_dim*state_count);
    filename = strcat('data.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(data)
        fprintf(fid, '%2.18f\n',data(j));
    end
    fclose(fid);
    
    MCMC_proposal_rn_in = reshape(MCMC_proposal_rn,1,theta_dim*iterations);    
    filename = strcat('MCMC_proposal_rn_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(MCMC_proposal_rn_in)
        fprintf(fid, '%2.18f\n',MCMC_proposal_rn_in(j));
    end
    fclose(fid);
    
    filename = strcat('MCMC_update_rn_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(MCMC_update_rn)
        fprintf(fid, '%2.18f\n',MCMC_update_rn(j));
    end
    fclose(fid);
    
    PF_transition_rn_in = reshape(PF_transition_rn,1,state_dim*N*state_count*iterations);    
    filename = strcat('PF_transition_rn_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(PF_transition_rn_in)
        fprintf(fid, '%2.18f\n',PF_transition_rn_in(j));
    end
    fclose(fid);
        
    filename = strcat('PF_resampling_rn_in.dat');
    fid = fopen(filename, 'w+');
    for j=1:length(PF_resampling_rn)
        fprintf(fid, '%2.18f\n',PF_resampling_rn(j));
    end
    fclose(fid);
    
        
    alpha_prior=0;
    beta_prior=0;
%    tic

%     [thetas, liks, particles, acceptance_rate] = adpmcmc_new(theta_dim,...
%         initial_theta,iterations,fix_cov_std,ad_cov_std,N,init_states,...
%         state_count,state_dim,obs_dim,state_param_fixed_dim,...
%         state_param_rand_dim,obs_param_fixed_dim,obs_param_rand_dim,...
%         state_parameters,obs_parameters,alpha_prior,beta_prior,observations,states);
% 
%     toc
    
    
    
elseif (problem==1)
    
    %genome

    %dimensions
    init_state_param_dim=2; %number of parameters in prior
    state_dim=1; %state dimension
    state_count=10; %T --> number of observations/states
    state_param_fixed_dim=state_count; %number of fixed parameters in state transition
    state_param_rand_dim=1; %number of random parameters in state transition
    obs_dim=4; %observation dimension, number of iid data
    obs_param_fixed_dim=obs_dim*state_count; %number of fixed parameters in observation
    obs_param_rand_dim=1; %number of random parameters in observation

    %parameters - prior
    init_state_parameters=[0 1]; %mean and variance

    %parameters - state
    deltas=unifrnd(0,5,state_count,1); %deltas as described in proposal - randomly generated with max=5
    sigma_t=0.1; %common unknown parameter for state transitions
    state_parameters=[deltas' sigma_t];

    %parameters - observation
    sigma_o=0.01; %unknown parameter for observation equation
    n=unidrnd(15,state_count,obs_dim); %number of trials for all time steps and all replicates, randomly generated with max=10
    n_new=reshape(n',1,state_count*obs_dim);
    obs_parameters=[n_new sigma_o];

    %other model parameters
    %model=0; %binomial=0
    %strains=2; %mouse strains - not used

    %PF parameters
    N=50; %number of particles
    init_states=zeros(state_dim,N);
    for i=1:1:N
        init_states(:,i)=state_prior_equation(state_dim,...
            init_state_param_dim, init_state_parameters);
    end    
    %initial_state=0; %initial state (time 0)

    %MCMC parameters
    iterations = 500; %number of MCMC iterations
    theta_dim = state_param_rand_dim + obs_param_rand_dim; % total number of unknown parameters
    initial_theta = [0.1, 0.01]; % initial theta values
    fix_cov_std=0.05/theta_dim;
    ad_cov_std=0.05/theta_dim;%0.056644;
    
    %data generation for our model with binomial distribution - state_tt
    %contains the true transition sigmas, mu contains the true states, x contains
    %the successes, p contains the true binomial probabilities

    %[sigma_tt, mu, x, p] = gendata_new(obs_dim, strains, state_count, sigma_t, deltas, initial_state, sigma_o, n);
    [states, observations]=generate_data(state_dim,state_count,...
        state_param_fixed_dim,state_param_rand_dim,state_parameters,...
        obs_dim,obs_param_fixed_dim,obs_param_rand_dim,obs_parameters,...
        init_state_param_dim,init_state_parameters);
    %mu=states';
    %x=observations';
       
    %Random numbers
    MCMC_proposal_rn = randn(theta_dim,iterations);
    MCMC_update_rn = rand(1,iterations);
    PF_transition_rn = randn(state_dim,N*state_count*iterations);
    PF_resampling_rn = rand(1,state_count*iterations);    
       
    %prior parameters - not used
    alpha_prior = 0.001;
    beta_prior =  0.001;

    % %
    % %  Get MLE - Aggelos' code, not done yet for our model
    % %
    % [beta,var,fv,pr]=preg_mle([y DesignRE DesignFE]);
    % %

    %Data reformating
    %OneRowData_int = [x(:)', n(:)'];
    %OneRowData_float = deltas(:)';
     
    
   
end


%% Write to .dat files
filename = strcat('init_theta_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(initial_theta)
    fprintf(fid, '%2.18f\n',initial_theta(j));
end
fclose(fid);

init_particles=reshape(init_states,1,state_dim*N);
filename = strcat('init_particles_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(init_particles)
    fprintf(fid, '%2.18f\n',init_particles(j));
end
fclose(fid);

cov=[fix_cov_std ad_cov_std];
filename = strcat('cov_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(cov)
    fprintf(fid, '%2.18f\n',cov(j));
end
fclose(fid);

dimensions=[iterations, N, state_count, state_dim, state_param_fixed_dim,...
    state_param_rand_dim, obs_dim, obs_param_fixed_dim, obs_param_rand_dim];
filename = strcat('dimensions_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(dimensions)
    fprintf(fid, '%2.18f\n',dimensions(j));
end
fclose(fid);

filename = strcat('state_params_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(state_parameters)
    fprintf(fid, '%2.18f\n',state_parameters(j));
end
fclose(fid);

filename = strcat('obs_params_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(obs_parameters)
    fprintf(fid, '%2.18f\n',obs_parameters(j));
end
fclose(fid);


data=reshape(observations,1,obs_dim*state_count);
filename = strcat('data.dat');
fid = fopen(filename, 'w+');
for j=1:length(data)
    fprintf(fid, '%2.18f\n',data(j));
end
fclose(fid);

MCMC_proposal_rn_in = reshape(MCMC_proposal_rn,1,theta_dim*iterations);
filename = strcat('MCMC_proposal_rn_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(MCMC_proposal_rn_in)
    fprintf(fid, '%2.18f\n',MCMC_proposal_rn_in(j));
end
fclose(fid);

filename = strcat('MCMC_update_rn_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(MCMC_update_rn)
    fprintf(fid, '%2.18f\n',MCMC_update_rn(j));
end
fclose(fid);

PF_transition_rn_in = reshape(PF_transition_rn,1,state_dim*N*state_count*iterations);
filename = strcat('PF_transition_rn_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(PF_transition_rn_in)
%    fprintf(fid, '%2.18f\n',PF_transition_rn_in(j));
end
fclose(fid);

filename = strcat('PF_resampling_rn_in.dat');
fid = fopen(filename, 'w+');
for j=1:length(PF_resampling_rn)
    fprintf(fid, '%2.18f\n',PF_resampling_rn(j));
end
fclose(fid);


%%    
%call PMCMC - returns theta samples, likelihoods of samples, particles at
%time state_count and MCMC acceptance rate
           
tic

[thetas, liks, particles, acceptance_rate] = adpmcmc_new(theta_dim,...
        initial_theta,iterations,fix_cov_std,ad_cov_std,N,init_states,...
        state_count,state_dim,obs_dim,state_param_fixed_dim,...
        state_param_rand_dim,obs_param_fixed_dim,obs_param_rand_dim,...
        state_parameters,obs_parameters,alpha_prior,beta_prior,observations,states);

toc
    
    
