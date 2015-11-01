# ############################# 
# procedure used to pass arguments to a tcl script (source: http://wiki.tcl.tk/10025)
proc src {file args} {
  set argv $::argv
  set argc $::argc
  set ::argv $args
  set ::argc [llength $args]
  set code [catch {uplevel [list source $file]} return]
  set ::argv $argv
  set ::argc $argc
  return -code $code $return
}

# Load configuration parameters

set file "configuration_parameters.tcl"
src $file

# ############################# 
# #############################   
# Update funeval_data.h header file

#set file "make_template/make_foo_data_h.tcl"
#src $file $max_vector_length $float_fix $bits_word_integer_length $bits_word_fraction_length
#unset file

# #############################   
# Load user parameters
set file "user_parameters.tcl"
src $file
unset file

# #############################    
# Update foo_mem_parameters.h header file
set file "make_foo_mem_parameters_h.tcl"
src $file $state_dimension $observation_dimension $transition_parameters_unknown $observation_parameters_unknown $transition_parameters_known $observation_parameters_known $positive_only $prior_parameters $max_particles $max_state_sequence $par $transition_normals $transition_uniforms $observation_normals $observation_uniforms $rng_init_cycles
unset file

set file "make_set_static_parameters_m.tcl"
src $file $state_dimension $observation_dimension $transition_parameters_unknown $observation_parameters_unknown $transition_parameters_known $observation_parameters_known $positive_only $prior_parameters $max_particles $max_state_sequence $par $transition_normals $transition_uniforms $observation_normals $observation_uniforms $rng_init_cycles
unset file

set file "make_set_dynamic_parameters_m_example.tcl"
src $file $state_dimension $observation_dimension $transition_parameters_unknown $observation_parameters_unknown $transition_parameters_known $observation_parameters_known $positive_only $prior_parameters $max_particles $max_state_sequence $par $transition_normals $transition_uniforms $observation_normals $observation_uniforms $rng_init_cycles
unset file

set file "make_state_prior_equation_m_example.tcl"
src $file $state_dimension $observation_dimension $transition_parameters_unknown $observation_parameters_unknown $transition_parameters_known $observation_parameters_known $positive_only $prior_parameters $max_particles $max_state_sequence $par $transition_normals $transition_uniforms $observation_normals $observation_uniforms $rng_init_cycles
unset file

exit



