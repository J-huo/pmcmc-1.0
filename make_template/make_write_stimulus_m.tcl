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




#  make foo_test.cpp template file
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014


set input_vectors [lindex $argv 0]
set output_vectors [lindex $argv 1]
set max_vector_length [lindex $argv 2]


set file [open  ip_design/src/write_stimulus.m w]


puts $file "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
puts $file "%This file is part of ICL SDK4FPGA."
puts $file "%"
puts $file "%ICL SDK4FPGA -- A framework to optimal design, easy validate"
puts $file "%and fast prototype mathematical algorithms on FPGA based systems."
puts $file "%Copyright (C) 2014 by Andrea Suardi, Imperial College London."
puts $file "%Supported by the EPSRC Impact Acceleration grant number EP/K503733/1"
puts $file "%"
puts $file "%ICL SDK4FPGA is free software; you can redistribute it and/or"
puts $file "%modify it under the terms of the GNU Lesser General Public"
puts $file "%License as published by the Free Software Foundation; either"
puts $file "%version 3 of the License, or (at your option) any later version."
puts $file "%"
puts $file "%ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers"
puts $file "%to build their own mathematical algorithms into FPGA."
puts $file "%but WITHOUT ANY WARRANTY; without even the implied warranty of"
puts $file "%MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE."
puts $file "%It is the user's responsibility in assessing the correctness of the algorithm"
puts $file "%and software implementation before putting it to use in their own research"
puts $file "%or exploiting the results commercially."
puts $file "%Lesser General Public License for more details."
puts $file "%"
puts $file "%You should have received a copy of the GNU Lesser General Public"
puts $file "%License along with ICL SDK4FPGA; if not, write to the Free Software"
puts $file "%Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA"
puts $file "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
puts $file ""
puts $file ""
puts $file ""


puts $file "function write_testbench(num_simulation,sim_type)"
puts $file ""
puts $file ""
puts $file "tmp_str=strcat('Writing stimulus files set ', num2str(num_simulation));"
puts $file "disp(tmp_str);"
puts $file ""
puts $file ""
puts $file "rng('shuffle');"


# generate random stimulus vectors
foreach i $input_vectors {

	puts $file ""
	puts $file "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
	append tmp_line "% generate random stimulus vector " $i "_in. (-5<=" $i "_in <=5)"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line $i "_in=rand(1," $max_vector_length ")*10-5;"
	puts $file $tmp_line
	unset tmp_line
	

}

puts $file ""
puts $file ""
puts $file ""
puts $file ""

# save the random stimulus vectors
foreach i $input_vectors {

	# save generated random stimulus vectors. This vector will be loaded by the simulator
	puts $file ""
	puts $file ""
	puts $file "	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
	append tmp_line "% write " $i "_in.dat to file"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "filename = strcat('" $i "_in.dat');"
	puts $file $tmp_line
	unset tmp_line
	puts $file "fid = fopen(filename, 'w+');"
	puts $file "   "
	append tmp_line "for j=1:length(" $i "_in)"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	fprintf(fid, '%2.18f\\n'," $i "_in(j));"
	puts $file $tmp_line
	unset tmp_line
	puts $file "end"
	puts $file ""
	puts $file "fclose(fid);"
	
	# save generated random stimulus vectors logs
	puts $file ""
	puts $file "	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
	append tmp_line "%save " $i "_in_log"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "filename = strcat('../', sim_type, '/results/" $i "_in_log.dat');"
	puts $file $tmp_line
	unset tmp_line
	puts $file "fid = fopen(filename, 'a+');"
	puts $file "   "
	append tmp_line "for j=1:length(" $i "_in)"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	fprintf(fid, '%2.18f,'," $i "_in(j));"
	puts $file $tmp_line
	unset tmp_line
	puts $file "end"
	puts $file "	fprintf(fid, '\\n');"
	puts $file ""
	puts $file "fclose(fid);"

}



puts $file ""
puts $file ""
puts $file ""
puts $file "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
puts $file "%write a dummy file to tell tcl script to continue with the execution"
puts $file ""
puts $file "filename = strcat('_locked');"
puts $file "fid = fopen(filename, 'w');"
puts $file "fprintf(fid, 'locked write\\n');"
puts $file "fclose(fid);"
puts $file ""
puts $file "quit;"
puts $file ""
puts $file "end"

close $file