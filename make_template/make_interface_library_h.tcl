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




#  make FPGA_interface_library.h template file
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014


set float_fix [lindex $argv 0]
set bits_word_integer_length [lindex $argv 1]
set bits_word_fraction_length [lindex $argv 2]
set input_vectors [lindex $argv 3]
set output_vectors [lindex $argv 4]
set tcp_udp [lindex $argv 5]
set mem_base_address [lindex $argv 6]

set file [open ip_prototype/src/interface_library.h w]

puts $file "/*"
puts $file "* This file is part of ICL SDK4FPGA."
puts $file "*"
puts $file "* ICL SDK4FPGA -- A framework to optimal design, easy validate"
puts $file "* and fast prototype mathematical algorithms on FPGA based systems."
puts $file "* Copyright (C) 2014 by Andrea Suardi, Imperial College London."
puts $file "* Supported by the EPSRC Impact Acceleration grant number EP/K503733/1"
puts $file "*"
puts $file "* ICL SDK4FPGA is free software; you can redistribute it and/or"
puts $file "* modify it under the terms of the GNU Lesser General Public"
puts $file "* License as published by the Free Software Foundation; either"
puts $file "* version 3 of the License, or (at your option) any later version."
puts $file "*"
puts $file "* ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers"
puts $file "* to build their own mathematical algorithms into FPGA."
puts $file "* but WITHOUT ANY WARRANTY; without even the implied warranty of"
puts $file "* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE."
puts $file "* It is the user's responsibility in assessing the correctness of the algorithm"
puts $file "* and software implementation before putting it to use in their own research"
puts $file "* or exploiting the results commercially."
puts $file "* Lesser General Public License for more details."
puts $file "*"
puts $file "* You should have received a copy of the GNU Lesser General Public"
puts $file "* License along with ICL SDK4FPGA; if not, write to the Free Software"
puts $file "* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA"
puts $file "*"
puts $file "*/"
puts $file ""
puts $file ""

puts $file ""
puts $file "////////////////////////////////////////////////////////////"
puts $file "//Ethernet interface configuration (UDP or TCP)"
if { $tcp_udp == 1} { 
puts $file "#define MY_TCP_UDP 1 //1 for TCP, 0 for UDP"
} elseif  { $tcp_udp == 0} { 
puts $file "#define MY_TCP_UDP 0 //1 for TCP, 0 for UDP"
}
puts $file "#define FPGA_IP \"192.168.1.10\" //FPGA IP"
puts $file "#define FPGA_NM \"255.255.255.0\" //Netmask"
puts $file "#define FPGA_GW \"192.168.1.1\" //Gateway"
puts $file "#define FPGA_PORT 2007"
puts $file "#define DEBUG 0 //1 to enable debug printf, 0 to disable debug printf"
puts $file ""
puts $file "//Set design arithmetic precision (every variable is represented with the same precision)"
append tmp_line "#define FLOAT_FIX " $float_fix "// set 0=FLOAT (floating-point single precision), 1=FIX (fixed-point up to 32 bits word length)"
puts $file $tmp_line
unset tmp_line
puts $file ""
puts $file "//ONLY if FIXED-POINT, define how many bit to use to"
puts $file "//represent the integer and the fraction part  "
puts $file "//REMARK1: make attention when choosing the integer length because overflow can occur."
puts $file "//REMARK2: maximum word length size (bits_word_integer_length+bits_word_fraction_length) is 32, minimum integer length size is 1"
append tmp_line "#define INTEGERLENGTH " $bits_word_integer_length
puts $file $tmp_line
unset tmp_line
append tmp_line "#define FRACTIONLENGTH " $bits_word_fraction_length
puts $file $tmp_line
unset tmp_line
puts $file ""
puts $file "//FPGA vectors memory maps"
set m 0
foreach i $input_vectors {
	append tmp_line "#define " $i "_IN_DEFINED_MEM_ADDRESS "  [expr ($mem_base_address/256)*256+$m*$max_vector_length*4]
	puts $file $tmp_line
	unset tmp_line
	incr m
}
foreach i $output_vectors {
	append tmp_line "#define " $i "_OUT_DEFINED_MEM_ADDRESS " [expr ($mem_base_address/256)*256+$m*$max_vector_length*4]
	puts $file $tmp_line
	unset tmp_line
	incr m
}
puts $file ""
puts $file ""
puts $file "///////////////////////////////////////////////////////////////"
puts $file "//////////////////DO NOT EDIT HERE BELOW///////////////////////"
puts $file "//FPGA interface data specification:"
puts $file "#define ETH_PACKET_LENGTH 256+2 //Ethernet packet length in double words (32 bits) (from Matlab to  FPGA)"
puts $file "#define ETH_PACKET_LENGTH_RECV 64+2 //Ethernet packet length in double words (32 bits) (from FPGA to Matlab)"


