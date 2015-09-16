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


set file [open  ip_design/src/foo_test.cpp w]

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
puts $file ""
puts $file "void foo	(	"

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

puts $file "				volatile data_t_memory *memory_inout);"
puts $file ""
puts $file ""
puts $file "using namespace std;"
puts $file "#define BUF_SIZE 64"
puts $file ""
set m 0
foreach i $input_vectors {
	append tmp_line "#define " $i "_IN_DEFINED_MEM_ADDRESS " [expr $m*$max_vector_length*4]
	puts $file $tmp_line
	unset tmp_line
	incr m
}
foreach i $output_vectors {
	append tmp_line "#define " $i "_OUT_DEFINED_MEM_ADDRESS " [expr $m*$max_vector_length*4]
	puts $file $tmp_line
	unset tmp_line
	incr m
}
puts $file ""
puts $file ""
puts $file "int main()"
puts $file "{"
puts $file ""
puts $file "	char filename\[BUF_SIZE\]={0};"
puts $file ""
puts $file "    int max_iter;"
puts $file ""
foreach i $input_vectors {
	append tmp_line "	uint32_t byte_" $i "_in_offset;"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "	uint32_t byte_" $i "_out_offset;"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
puts $file "	int32_t tmp_value;"
puts $file ""
puts $file "	//assign the input/output vectors base address in the DDR memory"
foreach i $input_vectors {
	append tmp_line "	byte_" $i "_in_offset=" $i "_IN_DEFINED_MEM_ADDRESS;"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "	byte_" $i "_out_offset=" $i "_OUT_DEFINED_MEM_ADDRESS;"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
puts $file "	//allocate a memory named address of uint32_t or float words. Number of words is 1024 * (number of inputs and outputs vectors)"
puts $file "	data_t_memory *memory_inout;"
append tmp_line "	memory_inout = (data_t_memory *)malloc(" $m "* 1048576 * sizeof (data_t_memory));	//malloc size should be max_vector_length * (number of inputs and outputs vectors)"
puts $file $tmp_line
unset tmp_line
puts $file ""
puts $file "	FILE *stimfile;"
puts $file "	FILE * pFile;"
puts $file "	int count_data;"
puts $file ""
#~ foreach i $input_vectors {
	#~ append tmp_line "	float " $i "_in\[N\];"
	#~ puts $file $tmp_line
	#~ unset tmp_line
#~ }
#~ foreach i $output_vectors {
	#~ append tmp_line "	float " $i "_out\[N\];"
	#~ puts $file $tmp_line
	#~ unset tmp_line
#~ }	
puts $file ""
foreach i $input_vectors {
	append tmp_line "	float *" $i "_in;"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	" $i "_in = (float *)malloc(N*sizeof (float));"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "	float *" $i "_out;"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	" $i "_out = (float *)malloc(N*sizeof (float));"
	puts $file $tmp_line
	unset tmp_line
}
puts $file ""
set m 0
foreach i $input_vectors {
	incr m
	puts $file ""
	puts $file "	////////////////////////////////////////"
	append tmp_line "	//read " $i "_in vector"
	puts $file $tmp_line
	unset tmp_line
	puts $file ""
	append tmp_line "	// Open stimulus " $i "_in.dat file for reading"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	sprintf(filename,\"" $i "_in.dat\");"
	puts $file $tmp_line
	unset tmp_line
	puts $file "	stimfile = fopen(filename, \"r\");"
	puts $file ""
	puts $file "	// read data from file"
	append tmp_line "	ifstream input" $m "(filename);"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	vector<float> myValues" $m ";"
	puts $file $tmp_line
	unset tmp_line
	puts $file ""
	puts $file "	count_data=0;"
	puts $file ""
	append tmp_line "	for (float f; input" $m " >> f; )"
	puts $file $tmp_line
	unset tmp_line
	puts $file "	{"
	append tmp_line "		myValues" $m ".push_back(f);"
	puts $file $tmp_line
	unset tmp_line
	puts $file "		count_data++;"
	puts $file "	}"
	
	puts $file ""
	puts $file "	//fill in input vector"
	puts $file "	for (int i = 0; (i < N || i<count_data); i++)"
	puts $file "	{"
	append tmp_line "		" $i "_in\[i\]=(float)myValues" $m "\[i]\;"
	puts $file $tmp_line
	unset tmp_line
	puts $file ""			
	puts $file "		#ifdef FIX_IMPLEMENTATION"
	append tmp_line "			tmp_value=(int32_t)(" $i "_in\[i\]*(float)pow(2,(FRACTIONLENGTH)));"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "			memory_inout\[i+byte_" $i "_in_offset/4\] = *(uint32_t*)&tmp_value;"
	puts $file $tmp_line
	unset tmp_line
	puts $file "		#endif"
	puts $file ""
	puts $file "		#ifdef FLOAT_IMPLEMENTATION"
	append tmp_line "			memory_inout\[i+byte_" $i "_in_offset/4\] = (float)" $i "_in\[i\];"
	puts $file $tmp_line
	unset tmp_line
	puts $file "		#endif"
	puts $file ""
	puts $file "	}"
	puts $file ""
}
puts $file ""
puts $file "	/////////////////////////////////////"
puts $file "	// foo c-simulation"
puts $file "	"
puts $file "	foo(	"
foreach i $input_vectors {
	append tmp_line "				byte_" $i "_in_offset,"
	puts $file $tmp_line
	unset tmp_line
}
foreach i $output_vectors {
	append tmp_line "				byte_" $i "_out_offset,"
	puts $file $tmp_line
	unset tmp_line
}
puts $file "				memory_inout);"
puts $file "	"
puts $file "	"
foreach i $output_vectors {
	puts $file "	/////////////////////////////////////"
	append tmp_line "	// read computed " $i "_out and store it as " $i "_out.dat"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "	pFile = fopen (\"../../../../../../src/" $i "_out.dat\",\"w+\");"
	puts $file $tmp_line
	unset tmp_line
	puts $file ""
	puts $file "	for (int i = 0; i < N; i++)"
	puts $file "	{"
	puts $file ""
	puts $file "		#ifdef FIX_IMPLEMENTATION"
	append tmp_line "			tmp_value=*(int32_t*)&memory_inout\[i+byte_" $i "_out_offset/4\];"
	puts $file $tmp_line
	unset tmp_line
	append tmp_line "			" $i "_out\[i\]=((float)tmp_value)/(float)pow(2,(FRACTIONLENGTH));"
	puts $file $tmp_line
	unset tmp_line
	puts $file "		#endif"
	puts $file "		"
	puts $file "		#ifdef FLOAT_IMPLEMENTATION"
	append tmp_line "			" $i "_out\[i\]=(float)memory_inout\[i+byte_" $i "_out_offset/4\];"
	puts $file $tmp_line
	unset tmp_line
	puts $file "		#endif"
	puts $file "		"
	append tmp_line "		fprintf(pFile,\"%f, \"," $i "_out\[i\]);"
	puts $file $tmp_line
	unset tmp_line
	puts $file ""
	puts $file "	}"
	puts $file "	fprintf(pFile,\"\\n\");"
	puts $file "	fclose (pFile);"
	puts $file "		"
}

puts $file ""
puts $file "	return 0;"
puts $file "}"

close $file