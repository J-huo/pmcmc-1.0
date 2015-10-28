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


set file [open  ip_design/src/foo_mem_parameters.h w]

puts $file "#ifndef MEM_H"
puts $file "#define MEM_H"

puts $file ""
puts $file "#include <stdint.h>"
puts $file "#include <cstdlib>"
puts $file "#include \"ap_int.h\""
puts $file "#include \"hls_math.h\""
puts $file "#include <hls_math.h>"
puts $file "#include \"ap_utils.h\""

puts $file ""
puts $file "#define MEM_CPY 1 //use only for simulation"
puts $file "#define PRAGMA_SUB(x) _Pragma (#x)"
puts $file "#define PRAGMA_HLS(x) PRAGMA_SUB(x)"

puts $file ""
puts $file "//////////////////////////////////////////////////////////////////////////////////////////////////////////"
puts $file "//Static parameters set by user (set before compilation)/////////////////////////////////////////////////"
puts $file "//////////////////////////////////////////////////////////////////////////////////////////////////////////"
puts $file ""
puts $file "//SSM parameters"
append tmp_line "#define state_dim_def " $state_dimension
puts $file $tmp_line
unset tmp_line
append tmp_line "#define state_param_fixed_dim_one_element_def " $transition_parameters_known
puts $file $tmp_line
unset tmp_line
append tmp_line "#define state_param_rand_dim_def " $transition_parameters_unknown
puts $file $tmp_line
unset tmp_line
append tmp_line "#define obs_dim_def " $observation_dimension
puts $file $tmp_line
unset tmp_line
append tmp_line "#define obs_param_fixed_dim_one_element_def " $observation_parameters_known
puts $file $tmp_line
unset tmp_line
append tmp_line "#define obs_param_rand_dim_def " $observation_parameters_unknown
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "//positive only unknown parameters"
append tmp_line "const uint32_t positive_only\[\] = \{"
set index -1
foreach i $positive_only {
		incr index
		if {$index > 0} {
			append tmp_line "," 
		} 
		
		append tmp_line $i
			
}
append tmp_line "\};"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "//prior parameters (number of constants)"
append tmp_line "const uint32_t prior_parameters_dim = " $prior_parameters ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "//maximum problem sizes"
append tmp_line "const uint32_t particles_max_size = " $max_particles ";" " //do not set to more than 64K"
puts $file $tmp_line
unset tmp_line
append tmp_line "const uint32_t state_count_max_size = " $max_state_sequence ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "//architecture parallelism"
append tmp_line "#define M_ti " $par
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "//numbers of random values needed"
append tmp_line "#define trans_nrnd_def " $transition_normals
puts $file $tmp_line
unset tmp_line
append tmp_line "#define trans_urnd_def " $transition_uniforms
puts $file $tmp_line
unset tmp_line
append tmp_line "#define obs_nrnd_def " $observation_normals
puts $file $tmp_line
unset tmp_line
append tmp_line "#define obs_urnd_def " $observation_uniforms
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "//RNG initialization cycles"
append tmp_line "const uint32_t rng_init_cycles = " $rng_init_cycles ";"
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file "//precision-related constants (do not change unless familiar with code)
const data_t FP_inf_neg = -1e30;
const data_t FP_inf_pos = 1e30;
const data_t FP_power_min = -68.0f;
const data_t FP_power_max = 68.0f;



////////////////////////////////////////////////////////////////////////////////////////////////////////// 
//(DO NOT CHANGE) Static parameters set based on previous parameters //////////////////////////////////// 
////////////////////////////////////////////////////////////////////////////////////////////////////////// 
 
//SSM parameters 
const uint32_t state_dim = (uint32_t)state_dim_def; 
const uint32_t state_param_fixed_dim_one_element = (uint32_t)state_param_fixed_dim_one_element_def; 
const uint32_t state_param_rand_dim = (uint32_t)state_param_rand_dim_def; 
const uint32_t obs_dim = (uint32_t)obs_dim_def; 
const uint32_t obs_param_fixed_dim_one_element = (uint32_t)obs_param_fixed_dim_one_element_def; 
const uint32_t obs_param_rand_dim = (uint32_t)obs_param_rand_dim_def; 
 
//dimension of theta 
const uint32_t theta_dim = state_param_rand_dim + obs_param_rand_dim; 
 
//architecture parallelism 
const uint32_t M_ti_int = (uint32_t)M_ti; 
 
//maximum problem sizes 
const uint32_t state_param_fixed_dim_max_size = state_count_max_size*state_param_fixed_dim_one_element; 
const uint32_t state_param_dim_max_size = state_param_fixed_dim_max_size + state_param_rand_dim; 
const uint32_t obs_param_fixed_dim_max_size = state_count_max_size*obs_param_fixed_dim_one_element; 
const uint32_t obs_param_dim_max_size = obs_param_fixed_dim_max_size + obs_param_rand_dim; //2050; //fixed: n for all observations, random: 1 
const uint32_t data_dim_max_size = state_count_max_size * obs_dim; //*state_dim 
 
//maximum chunk sizes 
const uint32_t chunk_size_max = (particles_max_size*state_dim)/(M_ti_int); //block partitioning 
const uint32_t chunk_size_particles_max = (particles_max_size)/(M_ti_int); //block partitioning 
const uint32_t chunk_size_data_max = (data_dim_max_size)/(obs_dim);
const uint32_t chunk_size_obs_param_fixed_max = (obs_param_fixed_dim_max_size)/(obs_param_fixed_dim_one_element);
const uint32_t chunk_size_state_param_fixed_max = (state_param_fixed_dim_max_size)/(state_param_fixed_dim_one_element);

//numbers of random values needed 
const uint32_t trans_nrnd = (uint32_t)trans_nrnd_def; 
const uint32_t trans_urnd = (uint32_t)trans_urnd_def; 
const uint32_t obs_nrnd = (uint32_t)obs_nrnd_def; 
const uint32_t obs_urnd = (uint32_t)obs_urnd_def; 

//RNGs seed dimension 
const uint32_t seeds_dim = trans_nrnd*M_ti_int*2 + obs_nrnd*M_ti_int*2 + trans_urnd*M_ti_int + obs_urnd*M_ti_int + 1 + 1; 



////////////////////////////////////////////////////////////////////////////////////////////////////////// 
//(DO NOT CHANGE) Other constants //////////////////////////////////// 
////////////////////////////////////////////////////////////////////////////////////////////////////////// 

//type definitions 
//typedef ap_uint<log2_particles_max_size> uint_resampling; 
typedef ap_uint<9> data_t_integers; 
const ap_uint<9> mask_lik_0 = 0x000; 
const ap_uint<9> mask_lik_1 = 0x001; 
typedef int uint_resampling; 
 
//parameters related to resampling 
const uint32_t log2_particles_max_size = 16; // maximum amount of particles supported = 64K 
#define INTEGERLENGTH_FIX log2_particles_max_size 
#define WORDLENGTH_FIX 28 
#define WORDLENGTH_FIX_M_1 27 
#define INTEGERLENGTH_FIX_REDUCED 2 
#define WORDLENGTH_FIX_REDUCED 14 
#define WORDLENGTH_FIX_REDUCED_M_1 13 
typedef ap_fixed<WORDLENGTH_FIX,INTEGERLENGTH_FIX,AP_TRN_ZERO,AP_SAT> data_t_fixed; 
typedef ap_fixed<WORDLENGTH_FIX_REDUCED,INTEGERLENGTH_FIX_REDUCED,AP_TRN_ZERO,AP_SAT> data_t_fixed_reduced; 
 
const ap_uint<WORDLENGTH_FIX> mask_int_pre = 0xFFFF000; 
const ap_uint<WORDLENGTH_FIX> mask_1_pre = 0x0001000; 
const ap_uint<WORDLENGTH_FIX> mask_0_pre = 0x0000000; 
const ap_uint<WORDLENGTH_FIX> mask_frac_pre = 0x0000FFF; 
 
const ap_uint<WORDLENGTH_FIX_REDUCED> mask_1_reduced_pre = 0x1000; 
 
const uint32_t mask_ones = 0xFFFFFFFF; 
 
const uint32_t const_offset = 0; 
 
#endif"

close $file


