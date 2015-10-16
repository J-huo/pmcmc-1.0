############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2014 Xilinx Inc. All rights reserved.
############################################################
set_directive_array_partition -type complete -dim 1 "foo" weights_partial_sums
set_directive_array_partition -type complete -dim 1 "foo" rng_state
set_directive_array_partition -type complete -dim 1 "foo" current_mcmc_state_exp
set_directive_array_partition -type complete -dim 1 "foo" proposed_mcmc_state_exp
set_directive_inline "log_factorial"
set_directive_pipeline -off "__random32"
set_directive_inline "__random32"
set_directive_inline -off "approx"
set_directive_inline "normal_rnd_trans"
set_directive_inline "normal_rnd_obs"
set_directive_inline "uni_rnd_trans"
set_directive_inline "uni_rnd_obs"
set_directive_inline "transition_density"
set_directive_inline "observation_density"
set_directive_array_partition -type complete -dim 1 "transition_density" normal_rnd
set_directive_array_partition -type complete -dim 1 "transition_density" uniform_rnd
set_directive_array_partition -type complete -dim 1 "observation_density" normal_rnd
set_directive_array_partition -type complete -dim 1 "observation_density" uniform_rnd
set_directive_pipeline "particle_filter/particles_init_loop"
set_directive_pipeline "particle_filter/main_loop"
set_directive_pipeline "particle_filter/sum_main_loop"
set_directive_unroll "particle_filter/chunk_sums_init_loop"
set_directive_pipeline -II 2 "particle_filter/U_init_loop"
set_directive_pipeline -II 1 "particle_filter/resampling_main_loop"
set_directive_pipeline "particle_filter/replication_factors_inner_loop"
