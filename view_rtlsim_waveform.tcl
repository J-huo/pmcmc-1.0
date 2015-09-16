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



#  open simulation waveform 
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014

# Required tools:
# Vivado (minimum release 2014.1) (if simulation with xsim)
# Modesim (if simulation with modesim)

#to execute the script:
# 1) set configuration parameters in "configuration_parameters.tcl"
# 2) open Command Prompt window
# 3) Type: "vivado -mode gui -source view_rtlsim_waveform.tcl" (without "")


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
#  C-SIMULATION
# #################################################################################################################### 
# #################################################################################################################### 


# #############################   
# Load configuration parameters
set file "configuration_parameters.tcl"
src $file


# ############################# 
# Copy waveform to results folder
if {$rtl_simulator=="modelsim"} {  

	puts "##########################################"
	puts "#### 1) To view waveform in Modelsim: "
	puts "#### 2) Run Modesim GUI "							
	puts "#### 3) Open file: ip_design/test_rtlsim/results/foo.wlf"
	puts "#### 4) Type \"add wave *\" (without quotes)  "
	puts "##########################################"
	
} elseif {$rtl_simulator=="xsim"} {
	
	cd ip_design/test_rtlsim/results 
	current_fileset
	open_wave_database foo.wdb
	open_wave_config foo.wcfg

}
