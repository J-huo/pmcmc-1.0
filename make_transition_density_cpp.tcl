#  make transition_density.cpp template file
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


set file [open  ip_design/src/transition_density.cpp w]

puts $file "#include \"transition_density.h\""
puts $file ""
puts $file "
//USED-DEFINED
void transition_density(data_t *previous_particle, data_t *proposed_particle, rng_state_t *rng_state, uint32_t k, uint32_t t, data_t *state_parameters_fixed, data_t *state_parameters_rand, uint32_t stage)\{

//dummy code - write your own
		//variable declarations
		//data_t normal_rnd\[trans_nrnd\]; //uncomment if you want to use normal random numbers
		data_t s, delta;

		//read known and random parameters
		//s = state_parameters_rand\[0\]; //uncomment to read first random parameter (if any)
		//delta = state_parameters_fixed\[0\]; //uncomment to read first known parameter (if any)
		//data_t s_final = sqrtf( s * s * delta ); //dummy computation

		//generate random numbers
		//normal_rnd_trans(normal_rnd,rng_state,k);

		//transition equation
		*proposed_particle = *previous_particle + 1.0f;
		//*proposed_particle = *previous_particle + s_final * normal_rnd\[0\]; //uncomment if parameters and rnd are read

\}"

close $file


