# ########################################################################################
# This file is part of ICL SDK4FPGA.

# ICL SDK4FPGA -- A framework to optimal design, easy validate
# and fast prototype mathematical algorithms on FPGA based systems.
# Copyright (C) 2014 by Andrea Suardi, Imperial College London.
# Supported by the EPSRC Impact Acceleration grant number EP/K503733/1

# ICL SDK4FPGA is free software; you can redistribute it and/or
# modify it under the terms of the GNU Lesser General Public
# License as published by the Free Software Foundation; either
# version 3 of the License, or (at your option) any later version.

# ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers
# to build their own mathematical algorithms into FPGA.
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
# It is the user's responsibility in assessing the correctness of the algorithm
# and software implementation before putting it to use in their own research
# or exploiting the results commercially.
# Lesser General Public License for more details.

# You should have received a copy of the GNU Lesser General Public
# License along with ICL SDK4FPGA; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
# ########################################################################################



#  Make SDK4FPGA template
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014

# Required tools:
# Vivado_HLS 2014.1

#to execute the script:
# 1) set configuration parameters in "configuration_parameters.tcl"
# 2) open Command Prompt window
# 2) type: "vivado_hls -f make_template.tcl" (without "")


# ####################################################################################################################
# #################################################################################################################### 
#  PROCEDURES
# #################################################################################################################### 
# #################################################################################################################### 


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


# ####################################################################################################################
# #################################################################################################################### 
#  MAKE FRAMEWORK ROUTINES
# #################################################################################################################### 
# #################################################################################################################### 



# #############################   
# Load configuration parameters
set file "configuration_parameters.tcl"
src $file


# ############################# 
#make project directory structure

file mkdir ip_design/doc
file mkdir ip_design/src
file mkdir ip_design/test_csim/prj
file mkdir ip_design/test_csim/results
file mkdir ip_design/test_rtlsim/prj
file mkdir ip_design/test_rtlsim/results
file mkdir ip_design/build/prj
file mkdir ip_design/build/reports

file mkdir ip_prototype/doc
file mkdir ip_prototype/src
file mkdir ip_prototype/test_hil/results
file mkdir ip_prototype/build/prj
file mkdir ip_prototype/build/reports



#make design template source files

set file "make_template/make_foo_cpp.tcl"
src $file $input_vectors $output_vectors $max_vector_length
unset file
set file "make_template/make_foo_user_cpp.tcl"
src $file $input_vectors $output_vectors $max_vector_length
unset file
set file "make_template/make_foo_data_h.tcl"
src $file $max_vector_length $float_fix $bits_word_integer_length $bits_word_fraction_length
unset file
set file "make_template/make_directives.tcl"
src $file
unset file



#make validation templates source files
set file "make_template/make_foo_test_cpp.tcl"
src $file $input_vectors $output_vectors $max_vector_length
unset file
set file "make_template/make_write_stimulus_m.tcl"
src $file $input_vectors $output_vectors $max_vector_length
unset file
set file "make_template/make_read_results_m.tcl"
src $file $input_vectors $output_vectors
unset file
set file "make_template/make_ip_design_readme_txt.tcl"
src $file $input_vectors $output_vectors $max_vector_length $float_fix $bits_word_integer_length $bits_word_fraction_length
unset file


#make prototype templates source files
set file "make_template/make_interface_library_h.tcl"
src $file $float_fix $bits_word_integer_length $bits_word_fraction_length $input_vectors $output_vectors $tcp_udp $mem_base_address
unset file
set file "make_template/make_test_HIL_m.tcl"
src $file $float_fix $bits_word_integer_length $bits_word_fraction_length $input_vectors $output_vectors $max_vector_length
unset file
set file "make_template/make_echo_c.tcl"
src $file $input_vectors $output_vectors
unset file
set file "make_template/make_ip_prototype_readme_txt.tcl"
src $file $input_vectors $output_vectors $max_vector_length $float_fix $bits_word_integer_length $bits_word_fraction_length $mem_base_address
unset file
file copy -force  make_template/main.c ip_prototype/src
file copy -force  make_template/MicroZed_PS_properties_v02.tcl ip_prototype/src
file copy -force  make_template/FPGAclientMATLAB.c ip_prototype/src
file copy -force  make_template/FPGAclientMATLAB.m ip_prototype/src






