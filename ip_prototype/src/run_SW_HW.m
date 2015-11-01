function run_SW_HW()

%clear all;
%clc;
%close all;

global problem;
problem=1;

copyfile('../../matlab/state_prior_equation.m','state_prior_equation.m');
set_static_parameters;
run('../../matlab/set_dynamic_parameters');
%load static_parameters.mat;
%load '../../matlab/dynamic_parameters.mat';

rng(user_seed);

%transition_parameters_known_max_size = max_state_sequence*state_dimension;
%observation_parameters_known_max_size = max_state_sequence*observation_dimension*state_dimension;
%state_param_dim_max_size = transition_parameters_known_max_size + transition_parameters_unknown;
%obs_param_dim_max_size = observation_parameters_known_max_size + observation_parameters_unknown;
chunk_size_max = (max_particles*state_dimension)/par;

chunk = 30000;

cov=proposal_std;

dimensions=[mcmc_iterations, particles, state_sequence, state_dimension, transition_parameters_known,...
    transition_parameters_unknown, observation_dimension, observation_parameters_known, observation_parameters_unknown, theta_dimension, seeds_dim, rng_init_cycles, 0, 0, 0];

state_parameters_2 = zeros(1,transition_parameters_known*max_state_sequence+transition_parameters_unknown);
for l=1:1:transition_parameters_known
    state_parameters_2(((l-1)*max_state_sequence+1):((l-1)*max_state_sequence+state_sequence)) = transition_parameters_known_values(:,l)';
end
state_parameters_2((transition_parameters_known*max_state_sequence+1):(transition_parameters_known*max_state_sequence+transition_parameters_unknown)) = initial_mcmc_sample(1,1:transition_parameters_unknown); 

%n_new=reshape(n',1,state_sequence*obs_dim);
%obs_parameters=[reshape(observation_parameters_known_values',1,state_sequence*observation_dimension) sigma_o];

obs_parameters_2 = zeros(1,observation_parameters_known*max_state_sequence+observation_parameters_unknown);
for l=1:1:observation_parameters_known
    obs_parameters_2(((l-1)*max_state_sequence+1):((l-1)*max_state_sequence+state_sequence)) = observation_parameters_known_values(:,l)';
end
obs_parameters_2((observation_parameters_known*max_state_sequence+1):(observation_parameters_known*max_state_sequence+observation_parameters_unknown)) = initial_mcmc_sample(1,transition_parameters_unknown+1:transition_parameters_unknown+observation_parameters_unknown); %obs_parameters((state_sequence*observation_dimension+1):(state_sequence*observation_dimension+observation_parameters_unknown));

%data=reshape(observations,1,observation_dimension*state_sequence);
data_2 = zeros(1,observation_dimension*max_state_sequence);
for l=1:1:observation_dimension
    data_2(((l-1)*max_state_sequence+1):((l-1)*max_state_sequence+state_sequence)) = data(:,l)';
end

    
for i=1:num_runs
        
    init_states=zeros(state_dimension,particles);
    for l=1:1:particles
        init_states(:,l)=state_prior_equation();
    end

    chunk_size_true = (particles*state_dimension)/par;
    init_particles=reshape(init_states,1,state_dimension*particles);
    init_particles_2 = zeros(1,max_particles*state_dimension);
    for l=1:1:par
        init_particles_2(((l-1)*chunk_size_max+1):((l-1)*chunk_size_max+chunk_size_true)) = init_particles(((l-1)*chunk_size_true+1):(l*chunk_size_true));
    end

    seeds = 100000000 + unidrnd(400000000,1,seeds_dim); %[145351251, 154321360, 84509999, 211114581, 154451360,127451251, 154321360, 85909999, 211111381, 154321360, 127444251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 211111381, 195970389, 85909999, 211111381, 211111381, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360,127351251, 195970389, 85909999, 154321360, 154321360,127351251, 154321360, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 195970389, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360 ];

    inputs_in = [ dimensions, initial_mcmc_sample, cov, init_particles_2, state_parameters_2, obs_parameters_2, data_2, seeds(1:seeds_dim), prior_parameter_values ];

    %save inputs_in_log
    filename = strcat('../test_hil/results/inputs_in_log.dat');
    fid = fopen(filename, 'a+');

    for j=1:length(inputs_in)
        fprintf(fid, '%2.18f,',inputs_in(j));
    end
    fprintf(fid, '\n');

    fclose(fid);


    if (fpga_runs ==1)    

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
        tic
        
        for inputs_chunk_id=0:1:(floor(size(inputs_in,2)/chunk)-1)
            Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
            packet_internal_ID=inputs_chunk_id;
            packet_output_size=1;
            data_to_send=inputs_in((inputs_chunk_id*chunk+1):((inputs_chunk_id+1)*chunk));
            FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);    
            pause(2)
            inputs_chunk_id
        end

        inputs_chunk_id = floor(size(inputs_in,2)/chunk);
        Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
        packet_internal_ID=inputs_chunk_id;
        packet_output_size=1;
        data_to_send=inputs_in((inputs_chunk_id*chunk+1):end);
        FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);    
        pause(2)
        
        toc

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
        
        % read data from FPGA        
        Packet_type=4; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size
        packet_internal_ID=0;
        packet_output_size=mcmc_iterations*(theta_dimension+3+state_sequence*state_dimension);%115000000;
        data_to_send=0;
        [output_FPGA, ~, ~] = FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);
        fpga_outputs_out(i,:)=output_FPGA;
                
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

    if (software_runs == 1)

        tic
        
        [thetas_matlab, liks_matlab, priors_matlab, posteriors_matlab, particles_matlab, ...
            acceptance_rate_matlab, prop_thetas_matlab, prop_liks_matlab, prop_priors_matlab, ...
            prop_posteriors_matlab, urnd_matlab] = ...
            adpmcmc_new_single(single(theta_dimension), single(initial_mcmc_sample), ...
            single(mcmc_iterations),single(proposal_std),1,single(particles),single(init_states),...
            single(state_sequence),single(state_dimension),single(observation_dimension), ...
            single((state_sequence*transition_parameters_known)), single((transition_parameters_unknown)), ...
            single((state_sequence*observation_parameters_known)),single(observation_parameters_unknown), ...
            single(state_parameters_2), single(obs_parameters_2),1 ,1 ,single(data), ...
            single(prior_parameter_values), max_state_sequence);
        
        matlab_outputs_out(i,:) = [reshape(thetas_matlab,1,theta_dimension*mcmc_iterations),...
            reshape(liks_matlab,1,mcmc_iterations), reshape(priors_matlab,1,mcmc_iterations),...
            reshape(posteriors_matlab,1,mcmc_iterations),...
            reshape(particles_matlab,1,state_sequence*state_dimension*mcmc_iterations),...
            reshape(acceptance_rate_matlab,1,1),...
            reshape(prop_thetas_matlab,1,theta_dimension*mcmc_iterations),...
            reshape(prop_liks_matlab,1,mcmc_iterations), reshape(prop_priors_matlab,1,mcmc_iterations),...
            reshape(prop_posteriors_matlab,1,mcmc_iterations), reshape(urnd_matlab,1,mcmc_iterations)];
                
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

    gap = theta_dimension + 3 + state_sequence*state_dimension;
    full = mcmc_iterations * (theta_dimension + 3 + state_sequence*state_dimension);
    
    if (fpga_runs ==1)    
        %thetas_log_fpga = NaN(theta_dim,iterations);
        for l=1:1:theta_dimension
            thetas_log_fpga(l,:,i) = fpga_outputs_out(i,l:gap:full);
        end

        liks_log_fpga(i,:) = fpga_outputs_out(i,(theta_dimension+1):gap:full);
        
        priors_log_fpga(i,:) = fpga_outputs_out(i,(theta_dimension+2):gap:full);

        posteriors_log_fpga(i,:) = fpga_outputs_out(i,(theta_dimension+3):gap:full);
        
        %particles_log_fpga = NaN(state_sequence,iterations,num_runs);
        for l=1:1:state_sequence
            particles_log_fpga(l,:,i) = fpga_outputs_out(i,(theta_dimension+3+l):gap:full);
        end
        
        for k=1:1:mcmc_iterations
%            mse_log_fpga(i,k) = mean(power(exp((particles_log_fpga(:,k,i)'))./(exp((particles_log_fpga(:,k,i)'))+1) - mean(probs),2));
        end
    end

        %acc_log_fpga = fpga_outputs_out((theta_dimension*iterations+iterations+state_sequence*iterations+1));
        %save('acc_log_fpga.mat','acc_log_fpga');

    %     prop_thetas_log_fpga = reshape(outputs_out((theta_dimension*iterations+iterations+state_sequence*iterations+2):(theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations)),theta_dimension,iterations);
    %     save('prop_thetas_fpga.mat','prop_thetas_log_fpga');
    %     
    %     prop_liks_log_fpga = outputs_out((theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+1):(theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+iterations));
    %     save('prop_liks_log_fpga.mat','prop_liks_log_fpga');
    %     
    %     urnd_log_fpga = outputs_out((theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+iterations+1):(theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+iterations+iterations));
    %     save('urnd_log_fpga.mat','urnd_log_fpga'); 
    %     
    %     urnd_comp_log_fpga = outputs_out((theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+iterations+iterations+1):(theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+iterations+iterations+iterations));
    %     save('urnd_comp_log_fpga.mat','urnd_comp_log_fpga'); 
    %     
    %     grnd_log_fpga = outputs_out((theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+iterations+iterations+iterations+1):(theta_dimension*iterations+iterations+state_sequence*iterations+1+theta_dimension*iterations+iterations+iterations+iterations+iterations));
    %     save('grnd_log_fpga.mat','grnd_log_fpga'); 


    if (software_runs == 1)
        thetas_log_matlab(:,:,i) = reshape(matlab_outputs_out(i,1:theta_dimension*mcmc_iterations),theta_dimension,mcmc_iterations);

        liks_log_matlab(i,:) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations));

        priors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations));
        
        posteriors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+2*mcmc_iterations+1):(theta_dimension*mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
        
        particles_log_matlab(:,:,i) = reshape(matlab_outputs_out(i,(theta_dimension*mcmc_iterations+3*mcmc_iterations+1):(theta_dimension*mcmc_iterations+3*mcmc_iterations+state_sequence*mcmc_iterations)),state_sequence,mcmc_iterations);

        acc_log_matlab(i) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+3*mcmc_iterations+state_sequence*mcmc_iterations+1));

        prop_thetas_log_matlab(:,:,i) = reshape(matlab_outputs_out(i,(theta_dimension*mcmc_iterations+3*mcmc_iterations+state_sequence*mcmc_iterations+2):(theta_dimension*mcmc_iterations+3*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations)),theta_dimension,mcmc_iterations);

        prop_liks_log_matlab(i,:) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+3*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+1):(theta_dimension*mcmc_iterations+3*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations));

        prop_priors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+4*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+1):(theta_dimension*mcmc_iterations+4*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations));

        prop_posteriors_log_matlab(i,:) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+5*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+1):(theta_dimension*mcmc_iterations+5*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations));
        
        urnd_log_matlab(i,:) = matlab_outputs_out(i,(theta_dimension*mcmc_iterations+5*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+1):(theta_dimension*mcmc_iterations+5*mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations));
    
        for k=1:1:mcmc_iterations
 %           mse_log_matlab(i,k) = mean(power(exp((particles_log_matlab(:,k,i)'))./(exp((particles_log_matlab(:,k,i)'))+1) - mean(probs),2));
        end
        
    end

end

if (fpga_runs == 1)
    filename = strcat('../test_hil/results/thetas_log_fpga.mat');    
    save(filename,'thetas_log_fpga');
    filename = strcat('../test_hil/results/liks_log_fpga.mat');  
    save(filename,'liks_log_fpga');
    filename = strcat('../test_hil/results/priors_log_fpga.mat');  
    save(filename,'priors_log_fpga');
    filename = strcat('../test_hil/results/posteriors_log_fpga.mat');  
    save(filename,'posteriors_log_fpga');
    filename = strcat('../test_hil/results/particles_log_fpga.mat');  
    save(filename,'particles_log_fpga');
    %save('mse_log_fpga.mat','mse_log_fpga');
end

if (software_runs == 1)

    filename = strcat('../test_hil/results/thetas_log_matlab.mat');  
    save(filename,'thetas_log_matlab');
    filename = strcat('../test_hil/results/liks_log_matlab.mat');  
    save(filename,'liks_log_matlab');
    filename = strcat('../test_hil/results/priors_log_matlab.mat');  
    save(filename,'priors_log_matlab');
    filename = strcat('../test_hil/results/posteriors_log_matlab.mat');  
    save(filename,'posteriors_log_matlab');
    filename = strcat('../test_hil/results/particles_log_matlab.mat');  
    save(filename,'particles_log_matlab');
    filename = strcat('../test_hil/results/acc_log_matlab.mat');  
    save(filename,'acc_log_matlab');
    filename = strcat('../test_hil/results/prop_thetas_matlab.mat');  
    save(filename,'prop_thetas_log_matlab');
    filename = strcat('../test_hil/results/prop_liks_log_matlab.mat');  
    save(filename,'prop_liks_log_matlab');
    filename = strcat('../test_hil/results/prop_priors_log_matlab.mat');  
    save(filename,'prop_priors_log_matlab');
    filename = strcat('../test_hil/results/prop_posteriors_log_matlab.mat');  
    save(filename,'prop_posteriors_log_matlab');
    filename = strcat('../test_hil/results/urnd_log_matlab.mat');  
    save(filename,'urnd_log_matlab'); 
    %save('mse_log_matlab.mat','mse_log_matlab');
end

save(strcat('../test_hil/results/',filename_save));

end
