
state_sequence = 256;
particles = 1024;
prior_parameter_values = [1.2, 100, 1, 100, 0];
mcmc_iterations = 300; %number of MCMC iterations
initial_mcmc_sample = [9, 1];%[3.2680 1.3049];%[8, 3]; % initial theta values
proposal_std = [0.04, 0.04];
user_seed = 235678; %non-negative integer


%data and known parameters

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
transition_parameters_known_values = zeros(state_sequence, transition_parameters_known);
observation_parameters_known_values = zeros(state_sequence, observation_parameters_known);
data = zeros(state_sequence, observation_dimension);
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


if (state_sequence == 1000)
    filename = strcat('data_1000.txt');
elseif (state_sequence == 2000)
    filename = strcat('data_2000.txt');
elseif (state_sequence == 4000)
    filename = strcat('data_4000.txt');
elseif (state_sequence == 8000)
    filename = strcat('data_8000.txt');
elseif (state_sequence == 16000)
    filename = strcat('data_16000.txt');
end

if (state_sequence == 1000 || state_sequence == 2000 ||state_sequence == 4000 ||state_sequence == 8000 ||state_sequence == 16000)
    
    strain = 1;
    positions = zeros(state_sequence,1);
    bases = zeros(state_sequence,1);
    methylated = zeros(state_sequence,observation_dimension,2);
    non_methylated = zeros(state_sequence,observation_dimension,2);
    probabilities = zeros(state_sequence,observation_dimension,2);
    total = zeros(state_sequence,observation_dimension,2);
    
    [positions(:,1),bases(:,1),...
        methylated(:,1,1),non_methylated(:,1,1),total(:,1,1),probabilities(:,1,1),...
        methylated(:,2,1),non_methylated(:,2,1),total(:,2,1),probabilities(:,2,1),...
        methylated(:,3,1),non_methylated(:,3,1),total(:,3,1),probabilities(:,3,1),...
        methylated(:,4,1),non_methylated(:,4,1),total(:,4,1),probabilities(:,4,1),...
        methylated(:,1,2),non_methylated(:,1,2),total(:,1,2),probabilities(:,1,2),...
        methylated(:,2,2),non_methylated(:,2,2),total(:,2,2),probabilities(:,2,2),...
        methylated(:,3,2),non_methylated(:,3,2),total(:,3,2),probabilities(:,3,2),...
        methylated(:,4,2),non_methylated(:,4,2),total(:,4,2),probabilities(:,4,2)] =...    
        importfile1(filename,2,state_sequence+1);

    
    transition_parameters_known_values(2:state_sequence,1) = positions(2:state_sequence) - positions(1:(state_sequence-1));
    observation_parameters_known_values = total(:,:,strain);%unidrnd(15,state_sequence,observation_dimension);%unidrnd(15,state_sequence,observation_dimension); %number of trials for all time steps and all replicates, randomly generated with max=10
    data = methylated(:,:,strain);
    probs = probabilities(:,:,strain)';
	states = zeros(state_sequence,1);
    
else
    sigma_t=2; %common unknown parameter for state transitions
    sigma_o=0.2; %unknown parameter for observation equation
    transition_parameters_known_values=ones(state_sequence,1);%unifrnd(0,5,state_sequence,1); %deltas as described in proposal - randomly generated with max=5
    observation_parameters_known_values=unidrnd(15,state_sequence,observation_parameters_known);%unidrnd(15,state_sequence,observation_dimension); %number of trials for all time steps and all replicates, randomly generated with max=10
    observation_parameters_known_values_new=reshape(observation_parameters_known_values',1,state_sequence*observation_parameters_known);
      
    [states, data_temp]=generate_data(state_dimension,state_sequence,...
            transition_parameters_known,transition_parameters_unknown,[transition_parameters_known_values' sigma_t],...
            observation_dimension,observation_parameters_known,observation_parameters_unknown,[observation_parameters_known_values_new sigma_o],...
            1,1);

        data = data_temp';
end

software_sim = 1; %is software simulation performed after fpga simulation?
num_runs = 1; %number of runs for final design (both for sw and for fpga)
fpga_runs = 1; %are fpga runs performed?
software_runs = 1; %are software runs performed?
filename_save = 'results_test_3.mat'; %.mat filename where results from runs are saved


save('dynamic_parameters.mat');
