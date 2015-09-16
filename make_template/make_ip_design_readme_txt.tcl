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




#  make foo_user.cpp template file
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014


set input_vectors [lindex $argv 0]
set output_vectors [lindex $argv 1]
set max_vector_length [lindex $argv 2]
set float_fix [lindex $argv 3]
set bits_word_integer_length [lindex $argv 4]
set bits_word_fraction_length [lindex $argv 5]




set file [open  ip_design/doc/readme.txt w]

set tmp_line ""
unset tmp_line

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
puts $file ""
puts $file ""
puts $file ""
puts $file "The PL template has been customized to support an algorithm with the following input and output vectors:"
puts $file ""
puts $file "Name			| Direction		| Number of data | Data representation"
puts $file ""
foreach i $input_vectors {
	if { $float_fix == 1} {  
		append tmp_line $i "			 	| Input         | " $max_vector_length "			|data type \"data_t\" is fixed-point: " $bits_word_integer_length " bits integer length, " $bits_word_fraction_length " bits fraction length" 
		puts $file $tmp_line
		unset tmp_line
	} 
	if { $float_fix == 0} {  
		append tmp_line $i "			 	| Input         | " $max_vector_length "			|data type \"data_t\" is floating-point single precision (32 bits)"  
		puts $file $tmp_line
		unset tmp_line
	}
}
foreach i $output_vectors {
	if { $float_fix == 1} {  
		append tmp_line $i "			 	| Output		| " $max_vector_length "			|data type \"data_t\" is fixed-point: " $bits_word_integer_length " bits integer length, " $bits_word_fraction_length " bits fraction length" 
		puts $file $tmp_line
		unset tmp_line
	} 
	if { $float_fix == 0} {  
		append tmp_line $i "			 	| Output		| " $max_vector_length "			|data type \"data_t\" is floating-point single precision (32 bits)"  
		puts $file $tmp_line
		unset tmp_line
	}
}

puts $file ""
puts $file ""
puts $file ""
puts $file "Input and output vectors has been mapped to a virtual memory at the following addresses:"
puts $file ""
puts $file "Name			| Base address in Byte"
puts $file ""
set m 0
foreach i $input_vectors { 
		append tmp_line $i "			 	| 0x" [format %08X [expr $m*$max_vector_length*4]]
		puts $file $tmp_line
		unset tmp_line
		incr m
}
foreach i $output_vectors {
		append tmp_line $i "			 	| 0x" [format %08X [expr $m*$max_vector_length*4]]
		puts $file $tmp_line
		unset tmp_line
		incr m
}
puts $file ""
puts $file "The virtual memory is used by foo_testbench.cpp during the C/RTL simulation."



close $file


