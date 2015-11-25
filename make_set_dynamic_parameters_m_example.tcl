#  make foo_mem_parameters.h template file
#  Grigorios Mingas
#  October - 2015

set state_dimension [lindex $argv 0]
set observation_dimension [lindex $argv 1]
set transition_parameters_unknown [lindex $argv 2]
set observation_parameters_unknown [lindex $argv 3]
set transition_parameters_known [lindex $argv 4]
set observation_parameters_known [lindex $argv 5]
set positive_only [lindex $argv 6]
set prior_parameters [lindex $argv 7]
set max_particles [lindex $argv 8]
set max_state_sequence [lindex $argv 9]
set par [lindex $argv 10]
set transition_normals [lindex $argv 11]
set transition_uniforms [lindex $argv 12]
set observation_normals [lindex $argv 13]
set observation_uniforms [lindex $argv 14]
set rng_init_cycles [lindex $argv 15]


set file [open  matlab/set_dynamic_parameters.m w]


puts $file "%dynamic parameters

%load static parameters (they can be used when defining dynamic paramaters)
%load static_parameters.mat

%dynamic parameters
state_sequence = 100; %fill in the size of the state sequence (non-zero integer)
particles = 128; %fill in the number of particles to be used in the particle filter (non-zero integer)"

append tmp_line "prior_parameter_values = \["
#set index -1
for {set index 0} {$index < $prior_parameters} {incr index} {
		#incr index
		if {$index > 0} {
			append tmp_line "," 
		} 		
		append tmp_line $index
			
}
append tmp_line "\]; %fill in the prior parameters (floating point values)"
puts $file $tmp_line
unset tmp_line

puts $file "mcmc_iterations = 300; %fill in the number of MCMC iterations (non-zero integer)"

append tmp_line "initial_mcmc_sample = \["
#set index -1
for {set index 0} {$index < [expr $transition_parameters_unknown + $observation_parameters_unknown]} {incr index} {
		#incr index
		if {$index > 0} {
			append tmp_line "," 
		} 		
		append tmp_line $index
			
}
append tmp_line "\]; %fill in the initial MCMC sample (floating point values - some might be positive-only)"
puts $file $tmp_line
unset tmp_line


append tmp_line "proposal_std = \["
#set index -1
for {set index 0} {$index < [expr $transition_parameters_unknown + $observation_parameters_unknown]} {incr index} {
		#incr index
		if {$index > 0} {
			append tmp_line "," 
		} 		
		append tmp_line "1"
			
}
append tmp_line "\]; %fill in the standard deviation of the MCMC proposal (floating point values - non-negative)"
puts $file $tmp_line
unset tmp_line

puts $file "user_seed = 235678; %fill in the RNG seed for the hardware run (non-negative integer)"

puts $file ""
puts $file "%data and transition/observation known parameters
transition_parameters_known_values = zeros(state_sequence, transition_parameters_known); %set values of known transition parameters (matrix \[state_sequence x transition_parameters_known\])
observation_parameters_known_values = zeros(state_sequence, observation_parameters_known); %set values of known observation parameters (matrix \[state_sequence x observation_parameters_known\])
data = zeros(state_sequence, observation_dimension); %set values of data (matrix \[state_sequence x observation_dimension\])"

puts $file ""
puts $file "software_sim = 0; %is software simulation performed after fpga simulation? (only set to 1 if matlab pmcmc version is available)
num_runs = 1; %number of runs for final design (both for sw and for fpga)
fpga_runs = 1; %are fpga runs performed?
software_runs = 0; %are software runs performed? (only set to 1 if matlab pmcmc version is available)
filename_save = 'results_test.mat'; %.mat filename where results from runs are saved"

puts $file ""
puts $file "save('dynamic_parameters.mat');"

close $file


