
function write_testbench(num_simulation,sim_type)

global problem;
problem=1;

tmp_str=strcat('Writing stimulus files set ', num2str(num_simulation));
disp(tmp_str);

copyfile('../../matlab/state_prior_equation.m','state_prior_equation.m');
set_static_parameters;
run('../../matlab/set_dynamic_parameters');
%load static_parameters.mat;
%load '../../matlab/dynamic_parameters.mat'

rng(user_seed);

%transition_parameters_known_max_size = max_state_sequence*state_dimension;
%observation_parameters_known_max_size = max_state_sequence*observation_dimension*state_dimension;
%state_param_dim_max_size = transition_parameters_known_max_size + transition_parameters_unknown;
%obs_param_dim_max_size = observation_parameters_known_max_size + observation_parameters_unknown;
chunk_size_max = (max_particles*state_dimension)/par;

chunk = 30000;

seeds = 100000000 + unidrnd(400000000,1,seeds_dim); %[145351251, 154321360, 84509999, 211114581, 154451360,127451251, 154321360, 85909999, 211111381, 154321360, 127444251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 211111381, 195970389, 85909999, 211111381, 211111381, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360,127351251, 195970389, 85909999, 154321360, 154321360,127351251, 154321360, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 195970389, 127351251, 195970389, 154321360, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360, 127351251, 195970389, 85909999, 211111381, 154321360 ];

cov=proposal_std;

dimensions=[mcmc_iterations, particles, state_sequence, state_dimension, transition_parameters_known,...
    transition_parameters_unknown, observation_dimension, observation_parameters_known, observation_parameters_unknown, theta_dimension, seeds_dim, rng_init_cycles, 0, 0, 0];

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

%save('workspace_write.mat');

state_parameters_2 = zeros(1,transition_parameters_known*max_state_sequence+transition_parameters_unknown);
for l=1:1:transition_parameters_known
    state_parameters_2(((l-1)*max_state_sequence+1):((l-1)*max_state_sequence+state_sequence)) = transition_parameters_known_values(:,l)';
end
state_parameters_2((transition_parameters_known*max_state_sequence+1):(transition_parameters_known*max_state_sequence+transition_parameters_unknown)) = initial_mcmc_sample(1,1:transition_parameters_unknown); 

%n_new=reshape(n',1,state_count*obs_dim);
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

save('workspace_write.mat');

inputs_in = [ dimensions, initial_mcmc_sample, cov, init_particles_2, state_parameters_2, obs_parameters_2, data_2, seeds(1:seeds_dim), prior_parameter_values ];


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
