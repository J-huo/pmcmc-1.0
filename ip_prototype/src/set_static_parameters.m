%SSM and MCMC parameters
state_dimension = 1; %state dimension
observation_dimension = 4; %observation dimension
transition_parameters_unknown = 1; %number of random parameters in state transition
observation_parameters_unknown = 1; %number of random parameters in observation
transition_parameters_known = 1; %number of fixed parameters in state transition
observation_parameters_known = 4; %number of fixed parameters in observation

transition_normals = 1;
transition_uniforms = 0;
observation_normals = 4;
observation_uniforms = 0;

positive_only = [1,1];

prior_parameters = 5;

%FPGA architecture parameters
par = 2;
max_particles = 16384;
max_state_sequence = 16384;
rng_init_cycles = 1000;

%do not change
theta_dimension = transition_parameters_unknown + observation_parameters_unknown; % total number of unknown parameters
seeds_dim = transition_normals*par*2 + observation_normals*par*2 + transition_uniforms*par + observation_uniforms*par + 1 + 1;

save('static_parameters.mat');
