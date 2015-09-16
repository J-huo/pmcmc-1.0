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




#  make foo_data.h template file
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014



set max_vector_length [lindex $argv 0]
set float_fix [lindex $argv 1]
set bits_word_integer_length [lindex $argv 2]
set bits_word_fraction_length [lindex $argv 3]




set file [open  ip_design/src/foo_data.h w]


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

puts $file "#include <vector>"
puts $file "#include <iostream>"
puts $file "#include <stdio.h>"
puts $file "#include \"math.h\""
puts $file "#include \"ap_fixed.h\""
puts $file "#include <stdint.h>"
puts $file "#include <cstdlib>"
puts $file "#include <cstring>"
puts $file "#include <stdio.h>"
puts $file "#include <math.h>"
puts $file "#include <fstream>"
puts $file "#include <string>"
puts $file "#include <sstream>"
puts $file "#include <vector>"
puts $file ""
puts $file ""
puts $file "// Define FIX_IMPLEMENTATION to enable  fixed-point (up to 32 bits word length) arithmetic precision or "
puts $file "// FLOAT_IMPLEMENTATION to enable floating-point single arithmetic precision."
if { $float_fix == 1} {  
	puts $file "#define FIX_IMPLEMENTATION"
} elseif  { $float_fix == 0} {  
	puts $file "#define FLOAT_IMPLEMENTATION"
}
puts $file ""
append tmp_line "#define INTEGERLENGTH " $bits_word_integer_length
puts $file $tmp_line
unset tmp_line
append tmp_line "#define FRACTIONLENGTH " $bits_word_fraction_length
puts $file $tmp_line
unset tmp_line

puts $file ""
puts $file ""
append tmp_line "const unsigned N=" $max_vector_length "; //input and output vector length"
puts $file $tmp_line
unset tmp_line
puts $file ""
puts $file ""




puts $file "#ifdef FIX_IMPLEMENTATION"
puts $file "	typedef ap_fixed<INTEGERLENGTH+FRACTIONLENGTH,INTEGERLENGTH,AP_TRN_ZERO,AP_SAT> data_t;"
puts $file "	typedef ap_fixed<32,32-FRACTIONLENGTH,AP_TRN_ZERO,AP_SAT> data_t_interface;"
puts $file "	typedef uint32_t data_t_memory;"
puts $file "#endif"
puts $file ""
puts $file "#ifdef FLOAT_IMPLEMENTATION"
puts $file "	typedef float data_t;"
puts $file "	typedef float data_t_interface;"
puts $file "	typedef float data_t_memory;"
puts $file "#endif"



close $file


