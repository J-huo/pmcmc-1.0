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


set file [open  ip_design/src/set_static_parameters.m w]


puts $file "%SSM and MCMC parameters"
append tmp_line "state_dimension = " $state_dimension "; %state dimension"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_dimension = " $observation_dimension "; %observation dimension"
puts $file $tmp_line
unset tmp_line
append tmp_line "transition_parameters_unknown = " $transition_parameters_unknown "; %number of random parameters in state transition"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_parameters_unknown = " $observation_parameters_unknown "; %number of random parameters in observation"
puts $file $tmp_line
unset tmp_line
append tmp_line "transition_parameters_known = " $transition_parameters_known "; %number of fixed parameters in state transition"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_parameters_known = " $observation_parameters_known "; %number of fixed parameters in observation"
puts $file $tmp_line
unset tmp_line

puts $file ""
append tmp_line "transition_normals = " $transition_normals ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "transition_uniforms = " $transition_uniforms ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_normals = " $observation_normals ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_uniforms = " $observation_uniforms ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
append tmp_line "prior_parameters = " $prior_parameters ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "%FPGA architecture parameters"
append tmp_line "par = " $par ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "max_particles = " $max_particles ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "max_state_sequence = " $max_state_sequence ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "rng_init_cycles = " $rng_init_cycles ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "%do not change
theta_dimension = transition_parameters_unknown + observation_parameters_unknown; % total number of unknown parameters
seeds_dim = transition_normals*par*2 + observation_normals*par*2 + transition_uniforms*par + observation_uniforms*par + 1 + 1;

save('static_parameters.mat');"

close $file





set file [open  ip_prototype/src/set_static_parameters.m w]


puts $file "%SSM and MCMC parameters"
append tmp_line "state_dimension = " $state_dimension "; %state dimension"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_dimension = " $observation_dimension "; %observation dimension"
puts $file $tmp_line
unset tmp_line
append tmp_line "transition_parameters_unknown = " $transition_parameters_unknown "; %number of random parameters in state transition"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_parameters_unknown = " $observation_parameters_unknown "; %number of random parameters in observation"
puts $file $tmp_line
unset tmp_line
append tmp_line "transition_parameters_known = " $transition_parameters_known "; %number of fixed parameters in state transition"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_parameters_known = " $observation_parameters_known "; %number of fixed parameters in observation"
puts $file $tmp_line
unset tmp_line

puts $file ""
append tmp_line "transition_normals = " $transition_normals ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "transition_uniforms = " $transition_uniforms ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_normals = " $observation_normals ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "observation_uniforms = " $observation_uniforms ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
append tmp_line "prior_parameters = " $prior_parameters ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "%FPGA architecture parameters"
append tmp_line "par = " $par ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "max_particles = " $max_particles ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "max_state_sequence = " $max_state_sequence ";"
puts $file $tmp_line
unset tmp_line
append tmp_line "rng_init_cycles = " $rng_init_cycles ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "%do not change
theta_dimension = transition_parameters_unknown + observation_parameters_unknown; % total number of unknown parameters
seeds_dim = transition_normals*par*2 + observation_normals*par*2 + transition_uniforms*par + observation_uniforms*par + 1 + 1;

save('static_parameters.mat');"

close $file



