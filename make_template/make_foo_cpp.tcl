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




#  make foo.cpp template file
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014


set input_vectors [lindex $argv 0]
set output_vectors [lindex $argv 1]
set max_vector_length [lindex $argv 2]



set file [open ip_design/src/foo.cpp w]


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


puts $file "#include \"foo_data.h\""
puts $file ""
puts $file ""
set m 0
foreach i $input_vectors {
	incr m
	if { $m == 1} {  
		append tmp_line "void foo_user(  data_t " $i "_in_int\[N\],"
		puts $file $tmp_line
		unset tmp_line
	} else {
	append tmp_line "				data_t "	$i "_in_int\[N\],"
	puts $file $tmp_line
	unset tmp_line
	}
}
set m 0
foreach i $output_vectors {
	incr m
	if { $m == [llength $output_vectors]} {  
		append tmp_line "				data_t " 	$i "_out_int\[N\]);"
		puts $file $tmp_line
		unset tmp_line
	} else {
	append tmp_line "				data_t "	$i "_out_int\[N\],"
	puts $file $tmp_line
	unset tmp_line
	}
}
puts $file ""
puts $file ""
puts $file "void foo	("

foreach i $input_vectors {
	append tmp_line "				uint32_t byte_" $i "_in_offset,"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "				uint32_t byte_" $i "_out_offset,"
	puts $file $tmp_line
	unset tmp_line
}

set m 0
foreach i $input_vectors {
	incr m
	}
foreach i $output_vectors {
	incr m
	}

puts $file "				volatile data_t_memory *memory_inout)"
puts $file "{"
puts $file ""
puts $file "	//ap_bus is the only valid nativeVivado HLSinterface for memory mapped master ports"
append tmp_line "	#pragma HLS INTERFACE ap_bus port=memory_inout depth=" [expr $m*1048576] " //used only for RTL simulation"
puts $file $tmp_line
unset tmp_line
puts $file ""
puts $file "	//Port memory_inout is assigned to an AXI4-master interface"
puts $file "	#pragma HLS RESOURCE variable=memory_inout core=AXI4M"
puts $file ""
puts $file "	//Foo function return is assigned to an AXI4-slave interface named BUS_A"
puts $file "	#pragma HLS RESOURCE variable=return core=AXI4LiteS metadata=\"-bus_bundle BUS_A\""
puts $file ""

foreach i $input_vectors {
	puts $file ""
	append tmp_line "	#pragma HLS INTERFACE ap_none register     port=byte_" $i "_in_offset"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	#pragma HLS RESOURCE core=AXI4LiteS    variable=byte_" $i "_in_offset metadata=\"-bus_bundle BUS_A\""
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	puts $file ""
	append tmp_line "	#pragma HLS INTERFACE ap_none register     port=byte_" $i "_out_offset"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	#pragma HLS RESOURCE core=AXI4LiteS    variable=byte_" $i "_out_offset metadata=\"-bus_bundle BUS_A\""
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""


puts $file "	#ifndef __SYNTHESIS__"
puts $file "	//Any system calls which manage memory allocation within the system, for example malloc(), alloc() and free(), must be removed from the design code prior to synthesis. "
puts $file ""
foreach i $input_vectors {
	append tmp_line "	data_t_interface *" $i "_in;"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	" $i "_in = (data_t_interface *)malloc(N*sizeof (data_t_interface));"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "	data_t_interface *" $i "_out;"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	" $i "_out = (data_t_interface *)malloc(N*sizeof (data_t_interface));"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
foreach i $input_vectors {
	append tmp_line "	data_t *" $i "_in_int;"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	" $i "_in_int = (data_t *)malloc(N*sizeof (data_t));"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "	data_t *" $i "_out_int;"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	" $i "_out_int = (data_t *)malloc(N*sizeof (data_t));"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""

puts $file "	#else"
puts $file "	//for synthesis"
puts $file ""
foreach i $input_vectors {
	append tmp_line "	data_t_interface  " $i "_in\[N\];"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "	data_t_interface  " $i "_out\[N\];"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
foreach i $input_vectors {
	append tmp_line "	data_t  " $i "_in_int\[N\];"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "	data_t  " $i "_out_int\[N\];"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
puts $file "	#endif"



puts $file ""


puts $file "	#ifdef FIX_IMPLEMENTATION"
puts $file "	///////////////////////////////////////"
puts $file "	//load input vectors from memory (DDR)"
puts $file ""
foreach i $input_vectors {
	append tmp_line "	memcpy(" $i "_in,(const data_t_memory*)(memory_inout+byte_" $i "_in_offset/4),N*sizeof(data_t_memory));"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
puts $file ""
puts $file "    //Initialisation: cast to the precision used for the algorithm"
puts $file "	input_cast_loop:for (int i=0; i< N; i++)"
puts $file "	{"
foreach i $input_vectors {
	append tmp_line "		" $i "_in_int\[i\]=(data_t)" $i "_in\[i\];"
	puts $file $tmp_line
	unset tmp_line
}
puts $file "	}"
puts $file ""
puts $file "	#endif"
puts $file ""
puts $file "	#ifdef FLOAT_IMPLEMENTATION"
puts $file "	///////////////////////////////////////"
puts $file "	//load input vectors from memory (DDR)"
puts $file ""
foreach i $input_vectors {
	append tmp_line "	memcpy(" $i "_in_int,(const data_t_memory*)(memory_inout+byte_" $i "_in_offset/4),N*sizeof(data_t_memory));"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
puts $file "	#endif"


puts $file ""
puts $file "	///////////////////////////////////////"
puts $file "	//USER algorithm function (foo_user.cpp) call"
puts $file "	//Input vectors are:"
foreach i $input_vectors {
	append tmp_line "	//" $i "_in_int\[N\] -> data type is data_t"
	puts $file $tmp_line
	unset tmp_line
}
puts $file "	//Output vectors are:"
foreach i $output_vectors {
	append tmp_line "	//" $i "_out_int\[N\] -> data type is data_t"
	puts $file $tmp_line
	unset tmp_line
}

set m 0
foreach i $input_vectors {
	incr m
	if { $m == 1} {  
		append tmp_line "	foo_user_top: foo_user(	" 	$i "_in_int,"
		puts $file $tmp_line
		unset tmp_line
	} else {
	append tmp_line "							"	$i "_in_int,"
	puts $file $tmp_line
	unset tmp_line
	}
}
set m 0
foreach i $output_vectors {
	incr m
	if { $m == [llength $output_vectors]} {  
		append tmp_line "							" 	$i "_out_int);"
		puts $file $tmp_line
		unset tmp_line
	} else {
	append tmp_line "							"	$i "_out_int,"
	puts $file $tmp_line
	unset tmp_line
	}
}
puts $file ""
puts $file ""


puts $file "	#ifdef FIX_IMPLEMENTATION"
puts $file "	///////////////////////////////////////"
puts $file "	//store output vectors to memory (DDR)"
puts $file ""

puts $file "	output_cast_loop: for(int i = 0; i < N; i++)"
puts $file "	{"
foreach i $output_vectors {
	append tmp_line "		" $i "_out\[i\]=(data_t_interface)" $i "_out_int\[i\];"
	puts $file $tmp_line
	unset tmp_line
}
puts $file "	}"
puts $file ""
puts $file "	//write results vector y_out to DDR"
foreach i $output_vectors {
	append tmp_line "	memcpy((data_t_memory *)(memory_inout+byte_" $i "_out_offset/4)," $i "_out,N*sizeof(data_t_memory));"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
puts $file "	#endif"
puts $file ""
puts $file "	#ifdef FLOAT_IMPLEMENTATION"
puts $file "	///////////////////////////////////////"
puts $file "	//write results vector y_out to DDR"
foreach i $output_vectors {
	append tmp_line "	memcpy((data_t_memory *)(memory_inout+byte_" $i "_out_offset/4)," $i "_out_int,N*sizeof(data_t_memory));"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
puts $file "	#endif"


puts $file ""
puts $file ""
puts $file "}"
close $file

