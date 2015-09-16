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



#  Set configuration parameters:
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014


# ##############################
# Define the IP inputs and output  names
# The IP input and outputs are VECTORS ONLY of any size.
# IMPORTANT NOTICE: It HAS To be set up before running make_template.tcl script and DO NOT modify it during the following design phases.

# Set the NAME of the INPUT vectors
set input_vectors [list "inputs"]
# Set the NAME of the OUTPUT vectors
set output_vectors [list "outputs"]
# Set the maximum vector size (number of data) among the input and output vectros
# Note that the user design can use input and ouput vector of smaller size if required 
set max_vector_length 115000000


# ##############################
# Set the project name (a project folder with this name will be created)
set project_name "my_project0"


# ##############################
# Define the IP arithmetic precision
# Every input/output and IP variable is represented with the same precision

# Set 0=FLOAT (floating-point single precision), 1=FIX (fixed-point up to 32 bits word length)
set float_fix 0; 

#ONLY if FIXED-POINT, define how many bit to use for
#representing the integer and the fraction part  
#REMARK1: make attention when choosing the integer length because overflow can occur.
#REMARK2: maximum word length size (bits_word_integer_length+bits_word_fraction_length) is 32, minimum integer length size is 1
set bits_word_integer_length 4; 
set bits_word_fraction_length 4;

# ##############################
# FPGA design clock frequency [MHz]
set fclk 150; 

# ##############################
# Set FPGA device name according to your target FPGA. 
# It suppots all Xilinx 7 Series and Zynq®-7000
# If the purpose is to prototype the designed IP with a supported Evaluation board, please set the FPGA device name according to the choosen evaluation board.
# Supported evaluation board for the prototyping phase:
#  -  ZedBoard  Zynq™-7000 Development Board  with  Zynq XC7Z020 (http://www.zedboard.org/product/zedboard)
#  -  MicroZed System-On-Module with  Zynq XC7Z020 (http://www.zedboard.org/product/microzed)
#  -  Xilinx Zynq-7000 All Programmable SoC ZC706 Evaluation Kit with Zynq XC7Z045 (http://www.xilinx.com/products/boards-and-kits/EK-Z7-ZC706-G.htm)
#  -  Xilinx Zynq-7000 All Programmable SoC ZC702 Evaluation Kit with Zynq XC7Z020  (http://www.xilinx.com/products/boards-and-kits/EK-Z7-ZC702-G.htm)
# FPGA device name if prototype with zedboard should be {xc7z020clg484-1}
# FPGA device name if prototype with microzedboard should be {xc7z020clg400-1}
# FPGA device name if prototype with zc702 should be {xc7z020clg484-1}
# FPGA device name if prototype with zc706 should be {xc7z045ffg900-2}

# set FPGA device name
set FPGA_name "{xc7z045ffg900-2}" 

# Set the target evaluation board (zedboard,  microzedboard, zc702, zc706) ONLY if the purpose is to prototype the designed IP
set board_name "zc706"

# Set Ethernet communication protocol. Set 0 for UDP/IP or 1 for  TCP/IP  
set tcp_udp 0

# for PROTOTYPE ONLY: set the DDR memory region  (region base address in Bytes) that you want to allocate for storing input and output vectors
set mem_base_address 33554432; #32 MB

# ##############################
# Number of time to repeat an ip_design test (test_csim or test_rtlsim) or prototype test(test_hil) using a different stimulus data set.
set num_simulation 1

# If rtl simulation is used, set the RTL simulator. The supported simulators are: modelsim, xsim
set rtl_simulator "xsim"