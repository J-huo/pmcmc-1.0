############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2014 Xilinx Inc. All rights reserved.
############################################################
set_directive_inline "log_factorial"
set_directive_array_partition -type complete -dim 1 "particle_filter" temp3
set_directive_array_partition -type complete -dim 1 "particle_filter" sum
set_directive_array_partition -type complete -dim 1 "particle_filter" weights_chunk_sums
set_directive_pipeline "particle_filter/particles_init_loop"
set_directive_pipeline "particle_filter/main_loop"
set_directive_array_partition -type complete -dim 1 "particle_filter/main_loop" log_lik_particle_max_temp
set_directive_array_partition -type complete -dim 1 "particle_filter/main_loop" index_saved_temp
set_directive_pipeline "particle_filter/sum_main_loop"
set_directive_unroll "particle_filter/chunk_sums_init_loop"
set_directive_inline -off "approx"
set_directive_array_partition -type complete -dim 1 "resampling" U
set_directive_pipeline -II 2 "resampling/U_init_loop"
set_directive_pipeline "resampling/resampling_main_loop"
set_directive_pipeline "resampling/replication_factors_inner_loop"
set_directive_pipeline "resampling/resampling_2nd_update_loop"
set_directive_array_partition -type complete -dim 1 "foo" weights_partial_sums
set_directive_array_partition -type complete -dim 1 "foo" rng_state
set_directive_array_partition -type complete -dim 1 "foo" current_mcmc_state_exp
set_directive_array_partition -type complete -dim 1 "foo" proposed_mcmc_state_exp
set_directive_pipeline -off "__random32"
set_directive_inline "__random32"
set_directive_array_partition -type complete -dim 1 "particle_filter" U
set_directive_pipeline -II 2 "particle_filter/U_init_loop"
set_directive_pipeline -II 1 "particle_filter/resampling_main_loop"
set_directive_pipeline "particle_filter/replication_factors_inner_loop"
set_directive_pipeline "particle_filter/resampling_2nd_update_loop"
set_directive_array_partition -type complete -dim 1 "particle_filter/time_loop" weights_chunk_sums_part
set_directive_array_partition -type complete -dim 1 "particle_filter/time_loop" weights_chunk_sums_part_b
set_directive_loop_flatten -off "particle_filter/loop_2"
set_directive_loop_flatten -off "particle_filter/loop_1"
set_directive_array_partition -type complete -dim 1 "particle_filter" n_full
set_directive_array_partition -type complete -dim 1 "particle_filter" x_full
set_directive_unroll "particle_filter/n_x_loop"
set_directive_inline "transition_density"
set_directive_array_partition -type complete -dim 1 "particle_filter" proposed_particle
set_directive_array_partition -type complete -dim 1 "particle_filter" previous_particle
