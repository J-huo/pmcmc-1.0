############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 2014 Xilinx Inc. All rights reserved.
############################################################
open_project my_project0
set_top foo
add_files ../../src/foo.cpp
add_files ../../src/foo.h
add_files ../../src/mcmc_iteration.cpp
add_files ../../src/mcmc_iteration.h
add_files ../../src/prior.cpp
add_files ../../src/prior.h
add_files ../../src/particle_filter.cpp
add_files ../../src/observation_density.cpp
add_files ../../src/observation_density.h
add_files ../../src/transition_density.cpp
add_files ../../src/transition_density.h
add_files ../../src/fetch.cpp
add_files ../../src/fetch.h
add_files ../../src/rngs.cpp
add_files ../../src/rngs.h
add_files ../../src/foo_mem_parameters.h
add_files ../../src/foo_data.h
add_files -tb ../../src/inputs_in.dat
add_files -tb ../../src/foo_test.cpp
open_solution "solution1"
set_part {xc7z045ffg900-2}
create_clock -period 6 -name default
source "./my_project0/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -trace_level none -rtl verilog -tool auto
export_design -format ip_catalog
