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




#  make FPGA_HIL_simulation.m template file
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014


set float_fix [lindex $argv 0]
set bits_word_integer_length [lindex $argv 1]
set bits_word_fraction_length [lindex $argv 2]
set input_vectors [lindex $argv 3]
set output_vectors [lindex $argv 4]
set max_vector_length [lindex $argv 5]

set file [open ip_prototype/src/test_HIL.m w]

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

puts $file ""
puts $file "clear all;"
puts $file "clc;"
puts $file "close all;"
puts $file ""
puts $file ""
puts $file "% Set the number of simulations to run"
puts $file "num_simulation=1;"
puts $file ""
puts $file ""
puts $file "rng('shuffle');"
puts $file ""
puts $file "for i=1:num_simulation"

	# generate and save in a file the random stimulus vectors
	foreach i $input_vectors {

		puts $file ""
		puts $file ""
		puts $file "	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
		append tmp_line "	% generate random stimulus vector " $i "_in. (-5<=" $i "_in <=5)"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "	" $i "_in=rand(" $max_vector_length ",1)*10-5;"
		puts $file $tmp_line
		unset tmp_line
		
		# save generated random stimulus vectors logs
		puts $file ""
		puts $file "	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
		append tmp_line "	%save " $i "_in_log"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "	filename = strcat('../test_hil/results/" $i "_in_log.dat');"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	fid = fopen(filename, 'a+');"
		puts $file "   "
		append tmp_line "	for j=1:length(" $i "_in)"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "		fprintf(fid, '%2.18f,'," $i "_in(j));"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	end"
		puts $file "	fprintf(fid, '\\n');"
		puts $file ""
		puts $file "	fclose(fid);"
		
	}
	

	puts $file ""
	puts $file ""
	puts $file "	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
	puts $file "	%% send the stimulus to the FPGA, execute the algorithm and read back the results"
	
	# rest IP
	puts $file "	% reset IP"

	puts $file "	Packet_type=1; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size"
	puts $file "	packet_internal_ID=0;"
	puts $file "	packet_output_size=1;"
	puts $file "	data_to_send=1;"
	puts $file "	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);"

	# send input vectors to FPGA
	puts $file ""
	puts $file ""
	puts $file "	% send data to FPGA"
	set m 0
	foreach i $input_vectors {
		append tmp_line "	% send " $i "_in"
		puts $file $tmp_line
		unset tmp_line
		
		puts $file "	Packet_type=3; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size"
		append tmp_line "	packet_internal_ID=" $m ";"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	packet_output_size=1;"
		append tmp_line "	data_to_send=" $i "_in;"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);"
		incr m
		puts $file ""
	}
	
	# Start FPGA
	puts $file ""
	puts $file "	% start FPGA"

	puts $file "	Packet_type=2; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size"
	puts $file "	packet_internal_ID=0;"
	puts $file "	packet_output_size=1;"
	puts $file "	data_to_send=0;"
	puts $file "	FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);"

	# read data from FPGA
	puts $file ""
	puts $file ""
	puts $file "	% read data from FPGA"

	set m 0
	foreach i $output_vectors {
		append tmp_line "	% read " $i "_out"
		puts $file $tmp_line
		unset tmp_line
		
		puts $file "	Packet_type=4; % 1 for reset, 2 for start, 3 for write to IP vector packet_internal_ID, 4 for read from IP vector packet_internal_ID of size packet_output_size"
		append tmp_line "	packet_internal_ID=" $m ";"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "	packet_output_size=" $max_vector_length ";"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	data_to_send=0;"
		puts $file "	\[output_FPGA, ~, ~\] = FPGAclientMATLAB(data_to_send,Packet_type,packet_internal_ID,packet_output_size);"
		append tmp_line "	fpga_" $i "_out=output_FPGA;"
		puts $file $tmp_line
		unset tmp_line
		incr m
		
		# save FPGA simulation results logs
		puts $file ""
		append tmp_line "	%save " $i "_out_log"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "	filename = strcat('../test_hil/results/fpga_" $i "_out_log.dat');"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	fid = fopen(filename, 'a+');"
		puts $file "   "
		append tmp_line "	for j=1:length(fpga_" $i "_out)"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "		fprintf(fid, '%2.18f,',fpga_" $i "_out(j));"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	end"
		puts $file "	fprintf(fid, '\\n');"
		puts $file ""
		puts $file "	fclose(fid);"
		puts $file ""
		puts $file ""


	}
	
	
	puts $file "	%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"
	puts $file "	%% compute with Matlab and save in a file simulation results"
	
	# compute Matlab (floating point double precision) simulation results
	foreach i $output_vectors {

		puts $file ""
		append tmp_line "	% Simulation results " $i "_out"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "	matlab_" $i "_out="
		set m 1
		foreach j $input_vectors {
			if { $m == [llength $input_vectors]} {  
				append tmp_line $j "_in;"
			} else {
				append tmp_line $j "_in+"
			}
			incr m
		}
		puts $file $tmp_line
		unset tmp_line
		
		# save Matlab simulation results logs
		puts $file ""
		append tmp_line "	%save " $i "_out_log"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "	filename = strcat('../test_hil/results/matlab_" $i "_out_log.dat');"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	fid = fopen(filename, 'a+');"
		puts $file "   "
		append tmp_line "	for j=1:length(matlab_" $i "_out)"
		puts $file $tmp_line
		unset tmp_line
		append tmp_line "		fprintf(fid, '%2.18f,',matlab_" $i "_out(j));"
		puts $file $tmp_line
		unset tmp_line
		puts $file "	end"
		puts $file "	fprintf(fid, '\\n');"
		puts $file ""
		puts $file "	fclose(fid);"
		puts $file ""

	}
	
	
puts $file "end"






