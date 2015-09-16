%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%This file is part of ICL SDK4FPGA.
%
%ICL SDK4FPGA -- A framework to optimal design, easy validate
%and fast prototype mathematical algorithms on FPGA based systems.
%Copyright (C) 2014 by Andrea Suardi, Imperial College London.
%Supported by the EPSRC Impact Acceleration grant number EP/K503733/1
%
%ICL SDK4FPGA is free software; you can redistribute it and/or
%modify it under the terms of the GNU Lesser General Public
%License as published by the Free Software Foundation; either
%version 3 of the License, or (at your option) any later version.
%
%ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers
%to build their own mathematical algorithms into FPGA.
%but WITHOUT ANY WARRANTY; without even the implied warranty of
%MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
%It is the user's responsibility in assessing the correctness of the algorithm
%and software implementation before putting it to use in their own research
%or exploiting the results commercially.
%Lesser General Public License for more details.
%
%You should have received a copy of the GNU Lesser General Public
%License along with ICL SDK4FPGA; if not, write to the Free Software
%Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%



function read_results(num_simulation,sim_type)

global problem;
problem=1;
software_sim = 1;

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
        
        [thetas_matlab, liks_matlab, priors_matlab, posteriors_matlab, particles_matlab, acceptance_rate_matlab, prop_thetas_matlab, prop_liks_matlab, prop_priors_matlab, prop_posteriors_matlab, urnd_matlab] = adpmcmc_new_single(single(theta_dim),...
        single(initial_theta),single(iterations),single(fix_cov_std),single(ad_cov_std),single(N),single(init_states),...
        single(state_count),single(state_dim),single(obs_dim),single(state_param_fixed_dim),...
        single(state_param_rand_dim),single(obs_param_fixed_dim),single(obs_param_rand_dim),...
        single(state_parameters),single(obs_parameters),single(alpha_prior),single(beta_prior),single(observations),single(states), single(prior_parameters));

        matlab_outputs_out = [reshape(thetas_matlab,1,theta_dim*iterations), reshape(liks_matlab,1,iterations), reshape(priors_matlab,1,iterations), reshape(posteriors_matlab,1,iterations), reshape(particles_matlab,1,state_count*state_dim*iterations), reshape(acceptance_rate_matlab,1,1), reshape(prop_thetas_matlab,1,theta_dim*iterations), reshape(prop_liks_matlab,1,iterations), reshape(prop_priors_matlab,1,iterations), reshape(prop_posteriors_matlab,1,iterations), reshape(urnd_matlab,1,iterations)];

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
   
    gap = theta_dim + 3 + state_count*state_dim;
    full = iterations * (theta_dim + 3 + state_count*state_dim);
    
    thetas_log_fpga = NaN(theta_dim,iterations);
    for i=1:1:theta_dim
    thetas_log_fpga(i,:) = outputs_out(i:gap:full);
    end
    save('thetas_log_fpga.mat','thetas_log_fpga');
    
    liks_log_fpga = outputs_out((theta_dim+1):gap:full);
    save('liks_log_fpga.mat','liks_log_fpga');
    
    priors_log_fpga = outputs_out((theta_dim+2):gap:full);
    save('priors_log_fpga.mat','priors_log_fpga');
    
    posteriors_log_fpga = outputs_out((theta_dim+3):gap:full);
    save('posteriors_log_fpga.mat','posteriors_log_fpga');
       
    particles_log_fpga = NaN(state_count,iterations);
    for i=1:1:state_count
    particles_log_fpga(i,:) = outputs_out((theta_dim+3+i):gap:full);
    end
    save('particles_log_fpga.mat','particles_log_fpga');
    
    acc_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+2*iterations+1));
    save('acc_log_fpga.mat','acc_log_fpga');
    
    prop_thetas_log_fpga = reshape(outputs_out((theta_dim*iterations+iterations+state_count*iterations+2*iterations+2):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+2*iterations)),theta_dim,iterations);
    save('prop_thetas_fpga.mat','prop_thetas_log_fpga');
    
    prop_liks_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+2*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+2*iterations+iterations));
    save('prop_liks_log_fpga.mat','prop_liks_log_fpga');
    
    prop_priors_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+2*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+2*iterations+iterations));
    save('prop_priors_log_fpga.mat','prop_priors_log_fpga');
    
    prop_posteriors_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+2*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+2*iterations+iterations));
    save('prop_posteriors_log_fpga.mat','prop_posteriors_log_fpga');
    
    urnd_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+2*iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations+2*iterations+iterations));
    save('urnd_log_fpga.mat','urnd_log_fpga'); 
    
    urnd_comp_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations+iterations+2*iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations+iterations+2*iterations+iterations));
    save('urnd_comp_log_fpga.mat','urnd_comp_log_fpga'); 
    
    grnd_log_fpga = outputs_out((theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations+iterations+2*iterations+iterations+1):(theta_dim*iterations+iterations+state_count*iterations+1+theta_dim*iterations+iterations+iterations+iterations+iterations+iterations+2*iterations+iterations));
    save('grnd_log_fpga.mat','grnd_log_fpga'); 
    
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
    
    
%%Compare results

%liks_fpga_print = outputs_out( (theta_dim*iterations + state_dim*iterations + 1) : (theta_dim*iterations + state_dim*state_count*iterations + iterations) );
%liks_matlab_print = matlab_outputs_out( (theta_dim*iterations + state_dim*iterations + 1) : (theta_dim*iterations + state_dim*state_count*iterations + iterations) );

%plot(liks_fpga_print-liks_matlab_print);
        
    

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%write a dummy file to tell tcl script to continue with the execution

filename = strcat('_locked');
fid = fopen(filename, 'w');
fprintf(fid, 'locked write\n');
fclose(fid);

quit;

end
