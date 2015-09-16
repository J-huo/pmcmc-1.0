# ##############################################################################################
#This file is part of ICL SDK4FPGA.
#
#ICL SDK4FPGA -- A framework to optimal design, easy validate
#and fast prototype mathematical algorithms on FPGA based systems.
#Copyright (C) 2014 by Andrea Suardi, Imperial College London.
#Supported by the EPSRC Impact Acceleration grant number EP/K503733/1
#
#ICL SDK4FPGA is free software; you can redistribute it and/or
#modify it under the terms of the GNU Lesser General Public
#License as published by the Free Software Foundation; either
#version 3 of the License, or (at your option) any later version.
#
#ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers
#to build their own mathematical algorithms into FPGA.
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
#It is the user's responsibility in assessing the correctness of the algorithm
#and software implementation before putting it to use in their own research
#or exploiting the results commercially.
#Lesser General Public License for more details.
#
#You should have received a copy of the GNU Lesser General Public
#License along with ICL SDK4FPGA; if not, write to the Free Software
#Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
# ##############################################################################################



# ############################# 
# Directives used by Vivado HLS

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
