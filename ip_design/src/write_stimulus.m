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



function write_testbench(num_simulation,sim_type)

global problem;
problem=1;


tmp_str=strcat('Writing stimulus files set ', num2str(num_simulation));
disp(tmp_str);


rng(235235);

%do not change
init_state_param_dim=2; %number of parameters in prior
state_dim=1; %state dimension    
obs_dim=4; %observation dimension, number of iid data

%PF
strain = 1;
state_count=1000; %T --> number of states
N=1024; %number of particles
sigma_t=9; %common unknown parameter for state transitions
sigma_o=0.2; %unknown parameter for observation equation
init_state_parameters=[0 1]; %mean and variance of initial particle set

if (state_count == 1000)
    filename = strcat('data_1000.txt');
elseif (state_count == 2000)
    filename = strcat('data_2000.txt');
elseif (state_count == 4000)
    filename = strcat('data_4000.txt');
elseif (state_count == 8000)
    filename = strcat('data_8000.txt');
elseif (state_count == 16000)
    filename = strcat('data_16000.txt');
end

if (state_count == 1000 || state_count == 2000 ||state_count == 4000 ||state_count == 8000 ||state_count == 16000)
    
    positions = zeros(state_count,1);
    bases = zeros(state_count,1);
    methylated = zeros(state_count,obs_dim,2);
    non_methylated = zeros(state_count,obs_dim,2);
    probabilities = zeros(state_count,obs_dim,2);
    total = zeros(state_count,obs_dim,2);
    
    [positions(:,1),bases(:,1),...
        methylated(:,1,1),non_methylated(:,1,1),total(:,1,1),probabilities(:,1,1),...
        methylated(:,2,1),non_methylated(:,2,1),total(:,2,1),probabilities(:,2,1),...
        methylated(:,3,1),non_methylated(:,3,1),total(:,3,1),probabilities(:,3,1),...
        methylated(:,4,1),non_methylated(:,4,1),total(:,4,1),probabilities(:,4,1),...
        methylated(:,1,2),non_methylated(:,1,2),total(:,1,2),probabilities(:,1,2),...
        methylated(:,2,2),non_methylated(:,2,2),total(:,2,2),probabilities(:,2,2),...
        methylated(:,3,2),non_methylated(:,3,2),total(:,3,2),probabilities(:,3,2),...
        methylated(:,4,2),non_methylated(:,4,2),total(:,4,2),probabilities(:,4,2)] =...    
        importfile1(filename,2,state_count+1);

    deltas = zeros(state_count,1);
    deltas(2:state_count,1) = positions(2:state_count) - positions(1:(state_count-1));
    n = zeros(state_count,obs_dim);
    n = total(:,:,strain);%unidrnd(15,state_count,obs_dim);%unidrnd(15,state_count,obs_dim); %number of trials for all time steps and all replicates, randomly generated with max=10

else
    deltas=ones(state_count,1);%unifrnd(0,5,state_count,1); %deltas as described in proposal - randomly generated with max=5
    n=unidrnd(15,state_count,obs_dim);%unidrnd(15,state_count,obs_dim); %number of trials for all time steps and all replicates, randomly generated with max=10
end

%MCMC
iterations = 100; %number of MCMC iterations
initial_theta = [9, 1];%[3.2680 1.3049];%[8, 3]; % initial theta values
fix_cov_std=[0.04 0.04];%0.05/theta_dim;
ad_cov_std=[0.1 0.1];%0.05/theta_dim;%0.056644;
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

if (state_count == 1000 || state_count == 2000 ||state_count == 4000 ||state_count == 8000 ||state_count == 16000)
    observations = methylated(:,:,strain)';
    probs = probabilities(:,:,strain)';
	states = zeros(state_count,1);
else
    [states, observations]=generate_data(state_dim,state_count,...
            state_param_fixed_dim,state_param_rand_dim,state_parameters,...
            obs_dim,obs_param_fixed_dim,obs_param_rand_dim,obs_parameters,...
            init_state_param_dim,init_state_parameters);
end      
    
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

	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%save inputs_in_log
filename = strcat('../', sim_type, '/results/inputs_in_log.dat');
fid = fopen(filename, 'a+');
   
for j=1:length(inputs_in)
	fprintf(fid, '%2.18f,',inputs_in(j));
end
	fprintf(fid, '\n');

fclose(fid);



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%write a dummy file to tell tcl script to continue with the execution

filename = strcat('_locked');
fid = fopen(filename, 'w');
fprintf(fid, 'locked write\n');
fclose(fid);

quit;

end
