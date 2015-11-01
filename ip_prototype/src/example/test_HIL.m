
clear all;
%clc;
close all;

global problem;
problem=1;

rng('shuffle');

num_simulation = 1;
fpga_sim = 1;
software_sim = 0;

%do not change
init_state_param_dim=2; %number of parameters in prior
state_dim=1; %state dimension    
obs_dim=4; %observation dimension, number of iid data

%PF
state_count=1024; %T --> number of states
N=1024; %number of particles
sigma_t=2; %common unknown parameter for state transitions
sigma_o=0.1; %unknown parameter for observation equation
deltas=ones(state_count,1);%unifrnd(0,5,state_count,1); %deltas as described in proposal - randomly generated with max=5
init_state_parameters=[0 1]; %mean and variance of initial particle set
n=unidrnd(15,state_count,obs_dim);%unidrnd(15,state_count,obs_dim); %number of trials for all time steps and all replicates, randomly generated with max=10

%MCMC
iterations = 1000; %number of MCMC iterations
initial_theta = [4, 0.9]; % initial theta values
fix_cov_std=[0.03 0.03];%0.05/theta_dim;
ad_cov_std=[0.03 0.03];%0.05/theta_dim;%0.056644;
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

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    
    
for i=1:num_simulation
       
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

    inputs_in = [ dimensions, initial_theta, cov, init_particles_2, state_parameters, obs_parameters_2, data_2, seeds, prior_parameters ];

    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
    %save inputs_in_log
    filename = strcat('../test_hil/results/inputs_in_log.dat');
    fid = fopen(filename, 'a+');

    for j=1:length(inputs_in)
        fprintf(fid, '%2.18f,',inputs_in(j));
    end
    fprintf(fid, '\n');

    fclose(fid);


    if (fpga_sim ==1)    

        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        %% send the stimulus to the FPGA, execute the algorithm and read back the results
        % reset IP
        if (i == 1)
            Packet_type=1; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
            packet_internal_ID=0;
            packet_output_size=1;
            data_to_send=1;
            FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);
        end

            % send data to FPGA
        % send inputs_in

        for id=0:1:(floor(size(inputs_in,2)/chunk)-1)
            Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
            packet_internal_ID=id;
            packet_output_size=1;
            data_to_send=inputs_in((id*chunk+1):((id+1)*chunk));
            FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);    
            pause(2)
        end

        id = floor(size(inputs_in,2)/chunk);
        Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
        packet_internal_ID=id;
        packet_output_size=1;
        data_to_send=inputs_in((id*chunk+1):end);
        FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);    
        pause(2)


    %     
    %         	% send data to FPGA
    % 	% send inputs_in
    % 	Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
    % 	packet_internal_ID=1;
    % 	packet_output_size=1;
    % 	data_to_send=inputs_in((30000*1+1):(30000*2));
    % 	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);
    %     pause(2)
    % 
    %         	% send data to FPGA
    % 	% send inputs_in
    % 	Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
    % 	packet_internal_ID=2;
    % 	packet_output_size=1;
    % 	data_to_send=inputs_in((30000*2+1):(30000*3));
    % 	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);
    % 
    %     pause(2)
    %     % send data to FPGA
    % 	% send inputs_in
    % 	Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
    % 	packet_internal_ID=3;
    % 	packet_output_size=1;
    % 	data_to_send=inputs_in((30000*3+1):(30000*4));
    % 	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);
    %     
    %     pause(2)
    %     % send data to FPGA
    % 	% send inputs_in
    % 	Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
    % 	packet_internal_ID=4;
    % 	packet_output_size=1;
    % 	data_to_send=inputs_in((30000*4+1):end);
    % 	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);
    %     
    %     pause(2)

    %     	% send data to FPGA
    % 	% send inputs_in
    % 	Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
    % 	packet_internal_ID=0;
    % 	packet_output_size=1;
    % 	data_to_send=inputs_in;
    % 	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);


    % 	% send data to FPGA
    % 	% send inputs_in
    % 	Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
    % 	packet_internal_ID=0;
    % 	packet_output_size=1;
    % 	data_to_send=inputs_in;
    % 	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);

    tic
        % start FPGA
        Packet_type=2; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
        packet_internal_ID=0;
        packet_output_size=1;
        data_to_send=0;
        FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);

        %pause(60)
        

        % read data from FPGA
        % read outputs_out
        Packet_type=4; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
        packet_internal_ID=0;
        packet_output_size=iterations*(theta_dim+3+state_count*state_dim);%115000000;
        data_to_send=0;
        [output_FPGA, ~, ~] = FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);
        fpga_outputs_out(i,:)=output_FPGA;

        %pause(60)
        
    toc
        %save outputs_out_log
    % 	filename = strcat('../test_hil/results/fpga_outputs_out_log.dat');
    % 	fid = fopen(filename, 'a+');
    %    
    % 	for j=1:length(fpga_outputs_out)
    % 		fprintf(fid, '%2.18f,',fpga_outputs_out(j));
    % 	end
    % 	fprintf(fid, '\n');
    % 
    % 	fclose(fid);

    end


        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        %% compute with Matlab and save in a file simulation results

        % Simulation results outputs_out
    %load workspace_write.mat;

    if (software_sim == 1)

        tic
        
        [thetas_matlab, liks_matlab, priors_matlab, posteriors_matlab, particles_matlab, acceptance_rate_matlab, prop_thetas_matlab, prop_liks_matlab, prop_priors_matlab, prop_posteriors_matlab, urnd_matlab] = adpmcmc_new_single(single(theta_dim),...
        single(initial_theta),single(iterations),single(fix_cov_std),single(ad_cov_std),single(N),single(init_states),...
        single(state_count),single(state_dim),single(obs_dim),single(state_param_fixed_dim),...
        single(state_param_rand_dim),single(obs_param_fixed_dim),single(obs_param_rand_dim),...
        single(state_parameters),single(obs_parameters),single(alpha_prior),single(beta_prior),single(observations),single(states), single(prior_parameters));

        matlab_outputs_out(i,:) = [reshape(thetas_matlab,1,theta_dim*iterations), reshape(liks_matlab,1,iterations), reshape(priors_matlab,1,iterations), reshape(posteriors_matlab,1,iterations), reshape(particles_matlab,1,state_count*state_dim*iterations), reshape(acceptance_rate_matlab,1,1), reshape(prop_thetas_matlab,1,theta_dim*iterations), reshape(prop_liks_matlab,1,iterations), reshape(prop_priors_matlab,1,iterations), reshape(prop_posteriors_matlab,1,iterations), reshape(urnd_matlab,1,iterations)];

        toc
    % liks_matlab(1)
    % output_FPGA(3)
        %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
        %save outputs_in_log
    %     filename = strcat('../test_hil/results/matlab_outputs_out_log.dat');
    % 	fid = fopen(filename, 'a+');
    %    
    % 	for j=1:length(matlab_outputs_out)
    % 		fprintf(fid, '%2.18f,',matlab_outputs_out(j));
    % 	end
    % 	fprintf(fid, '\n');
    % 
    % 	fclose(fid);

    end

    gap = theta_dim + 3 + state_count*state_dim;
    full = (iterations) * (theta_dim + 3 + state_count*state_dim);

    if (fpga_sim ==1)    
        %thetas_log_fpga = NaN(theta_dim,iterations);
        for l=1:1:theta_dim
            thetas_log_fpga(l,:,i) = fpga_outputs_out(i,l:gap:full);
        end

        liks_log_fpga(i,:) = fpga_outputs_out(i,(theta_dim+1):gap:full);
        
        priors_log_fpga(i,:) = fpga_outputs_out(i,(theta_dim+2):gap:full);

        posteriors_log_fpga(i,:) = fpga_outputs_out(i,(theta_dim+3):gap:full);
        
        %particles_log_fpga = NaN(state_count,iterations,num_simulation);
        for l=1:1:state_count
            particles_log_fpga(l,:,i) = fpga_outputs_out(i,(theta_dim+3+l):gap:full);
        end
    end

        %acc_log_fpga = fpga_outputs_out((theta_dim*iterations+iterations+state_count*iterations+1));
        %save('acc_log_fpga.mat','acc_log_fpga');

    %     prop_thetas_log_fpga = reshape(outputs_out((theta_dim*iterations+iterations+state_count*iterations+2):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations)),theta_dim,iterations);
    %     save('prop_thetas_fpga.mat','prop_thetas_log_fpga');
    %     
    %     prop_liks_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations));
    %     save('prop_liks_log_fpga.mat','prop_liks_log_fpga');
    %     
    %     urnd_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations));
    %     save('urnd_log_fpga.mat','urnd_log_fpga'); 
    %     
    %     urnd_comp_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations));
    %     save('urnd_comp_log_fpga.mat','urnd_comp_log_fpga'); 
    %     
    %     grnd_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations+iterations));
    %     save('grnd_log_fpga.mat','grnd_log_fpga'); 


    if (software_sim == 1)
        thetas_log_matlab(:,:,i) = reshape(matlab_outputs_out(i,1:theta_dim*iterations),theta_dim,iterations);

        liks_log_matlab(i,:) = matlab_outputs_out(i,(theta_dim*iterations+1):(theta_dim*iterations+iterations));

        priors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dim*iterations+iterations+1):(theta_dim*iterations+iterations+iterations));
        
        posteriors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dim*iterations+2*iterations+1):(theta_dim*iterations+2*iterations+iterations));
        
        particles_log_matlab(:,:,i) = reshape(matlab_outputs_out(i,(theta_dim*iterations+3*iterations+1):(theta_dim*iterations+3*iterations+state_count*iterations)),state_count,iterations);

        acc_log_matlab(i) = matlab_outputs_out(i,(theta_dim*iterations+3*iterations+state_count*iterations+1));

        prop_thetas_log_matlab(:,:,i) = reshape(matlab_outputs_out(i,(theta_dim*iterations+3*iterations+state_count*iterations+2):(theta_dim*iterations+3*iterations+state_count*iterations+1+theta_dim*iterations)),theta_dim,iterations);

        prop_liks_log_matlab(i,:) = matlab_outputs_out(i,(theta_dim*iterations+3*iterations+state_count*iterations+1+theta_dim*iterations+1):(theta_dim*iterations+3*iterations+state_count*iterations+1+theta_dim*iterations+iterations));

        prop_priors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dim*iterations+4*iterations+state_count*iterations+1+theta_dim*iterations+1):(theta_dim*iterations+4*iterations+state_count*iterations+1+theta_dim*iterations+iterations));

        prop_posteriors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dim*iterations+5*iterations+state_count*iterations+1+theta_dim*iterations+1):(theta_dim*iterations+5*iterations+state_count*iterations+1+theta_dim*iterations+iterations));
        
        urnd_log_matlab(i,:) = matlab_outputs_out(i,(theta_dim*iterations+5*iterations+state_count*iterations+1+theta_dim*iterations+iterations+1):(theta_dim*iterations+5*iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations));
    end

end

if (fpga_sim == 1)
save('thetas_log_fpga.mat','thetas_log_fpga');
save('liks_log_fpga.mat','liks_log_fpga');
save('priors_log_fpga.mat','priors_log_fpga');
save('posteriors_log_fpga.mat','posteriors_log_fpga');
save('particles_log_fpga.mat','particles_log_fpga');
end

if (software_sim == 1)
save('thetas_log_matlab.mat','thetas_log_matlab');
save('liks_log_matlab.mat','liks_log_matlab');
save('priors_log_matlab.mat','priors_log_matlab');
save('posteriors_log_matlab.mat','posteriors_log_matlab');
save('particles_log_matlab.mat','particles_log_matlab');
save('acc_log_matlab.mat','acc_log_matlab');
save('prop_thetas_matlab.mat','prop_thetas_log_matlab');
save('prop_liks_log_matlab.mat','prop_liks_log_matlab');
save('prop_priors_log_matlab.mat','prop_priors_log_matlab');
save('prop_posteriors_log_matlab.mat','prop_posteriors_log_matlab');
save('urnd_log_matlab.mat','urnd_log_matlab'); 
end
