#  make prior.cpp template file
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


set file [open  ip_design/src/prior.cpp w]

puts $file "#include \"prior.h\""
puts $file ""
puts $file "//USED-DEFINED
//computes the (log-)sum of all prior densities (has to include all MCMC parameters)
data_t log_prior(data_t *theta, data_t *prior_parameters)\{

//dummy code - write your own
	data_t prior_sum;
	prior_sum = *theta + -1.0f - 2.0f;

	return prior_sum;

\}
"

close $file


