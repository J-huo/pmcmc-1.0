#  make observation_density.cpp template file
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


set file [open  ip_design/src/observation_density.cpp w]

puts $file "#include \"observation_density.h\""
puts $file ""
puts $file "//USED-DEFINED
void observation_density(data_t *particle, data_t *likelihood_value, rng_state_t *rng_state, uint32_t k, uint32_t t, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, int *counter_1)\{

//dummy code - write your own
		//variable declarations
		//data_t normal_rnd\[obs_nrnd\]; //uncomment if you wnat to use normal random numbers
		data_t s, fixed;

		//read known/random parameters + data
		//s = obs_parameters_rand\[0\]; //uncomment to read first random parameter (if any)
		//fixed = obs_parameters_fixed\[0\]; //uncomment to read first known parameter (if any)
		//data_t s_final =  s + fixed; //dummy computation
		//data_t datum =  data\[0\]; //uncomment to read data 
		
		//generate random numbers
		//normal_rnd_obs(normal_rnd,rng_state,k);

		data_t particle_common = *particle;

		//likelihood computation (i.e. observation equation)
		*likelihood_value = log((*particle) * 0.1f);
		//*likelihood_value = log(s_final/10.0f + datum*normal_rnd\[0\]); //uncomment if parameters and rnd are read

\}"

close $file


