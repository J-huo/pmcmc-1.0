function read_results(num_simulation,sim_type)

global problem;
problem=1;


tmp_str=strcat('Reading simulation result set  ', num2str(num_simulation));
disp(tmp_str);


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% read random stimulus vector inputs_in.
load inputs_in.dat;



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% read simulation results outputs_out.
load outputs_out.dat;

	%save outputs_out_log
	filename = strcat('../', sim_type, '/results/fpga_outputs_out_log.dat');
	fid = fopen(filename, 'a+');
   
	for j=1:length(outputs_out)
		fprintf(fid, '%2.18f,',outputs_out(j));
	end
	fprintf(fid, '\n');

	fclose(fid);



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% compute with Matlab and save in a file simulation results outputs_out

load workspace_write.mat;

if (software_sim == 1)

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

        matlab_outputs_out = [reshape(thetas_matlab,1,theta_dimension*mcmc_iterations),...
            reshape(liks_matlab,1,mcmc_iterations), reshape(priors_matlab,1,mcmc_iterations),...
            reshape(posteriors_matlab,1,mcmc_iterations),...
            reshape(particles_matlab,1,state_sequence*state_dimension*mcmc_iterations),...
            reshape(acceptance_rate_matlab,1,1),...
            reshape(prop_thetas_matlab,1,theta_dimension*mcmc_iterations),...
            reshape(prop_liks_matlab,1,mcmc_iterations), reshape(prop_priors_matlab,1,mcmc_iterations),...
            reshape(prop_posteriors_matlab,1,mcmc_iterations), reshape(urnd_matlab,1,mcmc_iterations)];

        toc

end

	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
	%save outputs_in_log
	filename = strcat('../', sim_type, '/results/matlab_outputs_out_log.dat');
	fid = fopen(filename, 'a+');
   
	for j=1:length(matlab_outputs_out)
		fprintf(fid, '%2.18f,',matlab_outputs_out(j));
	end
	fprintf(fid, '\n');

	fclose(fid);
   
    gap = theta_dimension + 3 + state_sequence*state_dimension;
    full = mcmc_iterations * (theta_dimension + 3 + state_sequence*state_dimension);
    
    thetas_log_fpga = NaN(theta_dimension,mcmc_iterations);
    for i=1:1:theta_dimension
    thetas_log_fpga(i,:) = outputs_out(i:gap:full);
    end
    filename = strcat('../', sim_type, '/results/thetas_log_fpga.mat');
    save(filename,'thetas_log_fpga');
    
    liks_log_fpga = outputs_out((theta_dimension+1):gap:full);
    filename = strcat('../', sim_type, '/results/liks_log_fpga.mat');
    save(filename,'liks_log_fpga');
    
    priors_log_fpga = outputs_out((theta_dimension+2):gap:full);
    filename = strcat('../', sim_type, '/results/priors_log_fpga.mat');
    save(filename,'priors_log_fpga');
    
    posteriors_log_fpga = outputs_out((theta_dimension+3):gap:full);
    filename = strcat('../', sim_type, '/results/posteriors_log_fpga.mat');
    save(filename,'posteriors_log_fpga');
       
    particles_log_fpga = NaN(state_sequence,mcmc_iterations);
    for i=1:1:state_sequence
    particles_log_fpga(i,:) = outputs_out((theta_dimension+3+i):gap:full);
    end
    filename = strcat('../', sim_type, '/results/particles_log_fpga.mat');
    save(filename,'particles_log_fpga');
    
    acc_log_fpga = outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+2*mcmc_iterations+1));
    filename = strcat('../', sim_type, '/results/acc_log_fpga.mat');
    save(filename,'acc_log_fpga');
    
    prop_thetas_log_fpga = reshape(outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+2*mcmc_iterations+2):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+2*mcmc_iterations)),theta_dimension,mcmc_iterations);
    filename = strcat('../', sim_type, '/results/prop_thetas_fpga.mat');
    save(filename,'prop_thetas_log_fpga');
    
    prop_liks_log_fpga = outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+2*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/prop_liks_log_fpga.mat');
    save(filename,'prop_liks_log_fpga');
    
    prop_priors_log_fpga = outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+2*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/prop_priors_log_fpga.mat');
    save(filename,'prop_priors_log_fpga');
    
    prop_posteriors_log_fpga = outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/prop_posteriors_log_fpga.mat');
    save(filename,'prop_posteriors_log_fpga');
    
    urnd_log_fpga = outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/urnd_log_fpga.mat');
    save(filename,'urnd_log_fpga'); 
    
    urnd_comp_log_fpga = outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/urnd_comp_log_fpga.mat');
    save(filename,'urnd_comp_log_fpga'); 
    
    grnd_log_fpga = outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/grnd_log_fpga.mat');
    save(filename,'grnd_log_fpga'); 
    
    thetas_log_matlab = reshape(matlab_outputs_out(1:theta_dimension*mcmc_iterations),theta_dimension,mcmc_iterations);
    filename = strcat('../', sim_type, '/results/thetas_log_matlab.mat');
    save(filename,'thetas_log_matlab');
    
    liks_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/liks_log_matlab.mat');
    save(filename,'liks_log_matlab');
    
    priors_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/priors_log_matlab.mat');
    save(filename,'priors_log_matlab');
    
    posteriors_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/posteriors_log_matlab.mat');
    save(filename,'posteriors_log_matlab');
    
    particles_log_matlab = reshape(matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+2*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+2*mcmc_iterations+state_sequence*mcmc_iterations)),state_sequence,mcmc_iterations);
    filename = strcat('../', sim_type, '/results/particles_log_matlab.mat');
    save(filename,'particles_log_matlab');
    
    acc_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+2*mcmc_iterations+1));
    filename = strcat('../', sim_type, '/results/acc_log_matlab.mat');
    save(filename,'acc_log_matlab');
	
    prop_thetas_log_matlab = reshape(matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+2*mcmc_iterations+2):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+2*mcmc_iterations+theta_dimension*mcmc_iterations)),theta_dimension,mcmc_iterations);
    filename = strcat('../', sim_type, '/results/prop_thetas_matlab.mat');
    save(filename,'prop_thetas_log_matlab');
    
    prop_liks_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+2*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+2*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/prop_liks_log_matlab.mat');
    save(filename,'prop_liks_log_matlab');
    
    prop_priors_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+3*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+3*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/prop_priors_log_matlab.mat');
    save(filename,'prop_priors_log_matlab');
    
    prop_posteriors_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+4*mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+4*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/prop_posteriors_log_matlab.mat');
    save(filename,'prop_posteriors_log_matlab');
    
    urnd_log_matlab = matlab_outputs_out((theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+4*mcmc_iterations+mcmc_iterations+1):(theta_dimension*mcmc_iterations+mcmc_iterations+state_sequence*mcmc_iterations+1+theta_dimension*mcmc_iterations+mcmc_iterations+4*mcmc_iterations+mcmc_iterations));
    filename = strcat('../', sim_type, '/results/urnd_log_matlab.mat');
    save(filename,'urnd_log_matlab');    
    
 
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%write a dummy file to tell tcl script to continue with the execution

filename = strcat('_locked');
fid = fopen(filename, 'w');
fprintf(fid, 'locked write\n');
fclose(fid);

quit;

end
