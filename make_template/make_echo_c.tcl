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




#  make echo.c template file
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  May - 2014




set input_vectors [lindex $argv 0]
set output_vectors [lindex $argv 1]


proc addlines {file_read file_write insert_key new_lines} {
	#Read lines of file echo_original.c into variable “lines”
	set f [open $file_read "r"]
	set lines [split [read $f] "\n"]
	close $f

	#Find the insertion index in the reversed list
	set idx [lsearch -regexp [lreverse $lines] $insert_key]
	if {$idx < 0} {
		error "did not find insertion point in $filename"
	}

	#Insert the lines (I'm assuming they're listed in the variable “linesToInsert”)
	set lines [linsert $lines end-$idx {*}$new_lines]

	#Write the lines back to the file
	set f [open $file_write "w"]
	puts $f [join $lines "\n"]
	close $f
}



# ######################################
# ADD memory pointers
set file_read "make_template/echo.c"
set file_write "ip_prototype/src/echo.c"
set insert_key "//ADD memory pointers here below:"
set new_lines ""

foreach i $input_vectors {

	set tmp_line ""
	append tmp_line "Xint32 *" $i "_in_ptr_ddr = (Xint32 *) " $i "_IN_DEFINED_MEM_ADDRESS;"
	lappend new_lines $tmp_line
}

foreach i $output_vectors {

	set tmp_line ""
	append tmp_line "Xint32 *" $i "_out_ptr_ddr = (Xint32 *) " $i "_OUT_DEFINED_MEM_ADDRESS;"
	lappend new_lines $tmp_line
}

addlines $file_read $file_write $insert_key $new_lines


# ######################################
# ADD UDP memory map configuration
set file_read "ip_prototype/src/echo.c"
set file_write "ip_prototype/src/echo.c"
set insert_key "//ADD UDP memory map configuration here below:"
set new_lines ""

foreach i $input_vectors {

	set tmp_line ""
	append tmp_line "								XFoo_SetByte_" $i "_in_offset(&xcore," $i "_IN_DEFINED_MEM_ADDRESS);"
	lappend new_lines $tmp_line

}
foreach i $output_vectors {

	set tmp_line ""
	append tmp_line "								XFoo_SetByte_" $i "_out_offset(&xcore," $i "_OUT_DEFINED_MEM_ADDRESS);"
	lappend new_lines $tmp_line

}

addlines $file_read $file_write $insert_key $new_lines

# ######################################
# ADD UDP write data DDR
set file_read "ip_prototype/src/echo.c"
set file_write "ip_prototype/src/echo.c"
set insert_key "//ADD UDP write data DDR here below:"
set new_lines ""

set m 0
foreach i $input_vectors {

	set tmp_line ""
	append tmp_line "							case " $m ": //" $i "_in"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							if (DEBUG)"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "								printf(\"write " $i "_in\\n\\r\");"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							memcpy(" $i "_in_ptr_ddr+(ETH_PACKET_LENGTH-2)*packet_internal_ID_offset,inputvec,sizeof(inputvec));"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							break;"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							"
	lappend new_lines $tmp_line
	
	incr m
}

addlines $file_read $file_write $insert_key $new_lines


# ######################################
# ADD UDP read data DDR
set file_read "ip_prototype/src/echo.c"
set file_write "ip_prototype/src/echo.c"
set insert_key "//ADD UDP read data DDR here below:"
set new_lines ""

set m 0
foreach i $output_vectors {

	set tmp_line ""
	append tmp_line "							case " $m ": //" $i "_in"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							if (DEBUG)"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "								printf(\"read " $i "_out\\n\\r\");"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							memcpy(outvec," $i "_out_ptr_ddr+(ETH_PACKET_LENGTH_RECV-2)*packet_internal_ID_offset,(ETH_PACKET_LENGTH_RECV-2)*4);"
	lappend new_lines $tmp_line

	set tmp_line ""
	append tmp_line "							break;"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							"
	lappend new_lines $tmp_line
	
	incr m
}

addlines $file_read $file_write $insert_key $new_lines


# ######################################
# ADD TCP memory map configuration
set file_read "ip_prototype/src/echo.c"
set file_write "ip_prototype/src/echo.c"
set insert_key "//ADD TCP memory map configuration here below:"
set new_lines ""

foreach i $input_vectors {

	set tmp_line ""
	append tmp_line "					XFoo_SetByte_" $i "_in_offset(&xcore," $i "_IN_DEFINED_MEM_ADDRESS);"
	lappend new_lines $tmp_line

}
foreach i $output_vectors {

	set tmp_line ""
	append tmp_line "					XFoo_SetByte_" $i "_out_offset(&xcore," $i "_OUT_DEFINED_MEM_ADDRESS);"
	lappend new_lines $tmp_line

}

addlines $file_read $file_write $insert_key $new_lines

# ######################################
# ADD TCP write data DDR
set file_read "ip_prototype/src/echo.c"
set file_write "ip_prototype/src/echo.c"
set insert_key "//ADD TCP write data DDR here below:"
set new_lines ""

set m 0
foreach i $input_vectors {

	set tmp_line ""
	append tmp_line "			case " $m ": //" $i "_in"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "			if (DEBUG)"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "				printf(\"write " $i "_in\\n\\r\");"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "			memcpy(" $i "_in_ptr_ddr+(ETH_PACKET_LENGTH-2)*packet_internal_ID_offset,inputvec,sizeof(inputvec));"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "			break;"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							"
	lappend new_lines $tmp_line
	
	incr m
}

addlines $file_read $file_write $insert_key $new_lines


# ######################################
# ADD TCP read data DDR
set file_read "ip_prototype/src/echo.c"
set file_write "ip_prototype/src/echo.c"
set insert_key "//ADD TCP read data DDR here below:"
set new_lines ""

set m 0
foreach i $output_vectors {

	set tmp_line ""
	append tmp_line "				case " $m ": //" $i "_in"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "				if (DEBUG)"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "					printf(\"read " $i "_out\\n\\r\");"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "				memcpy(outvec," $i "_out_ptr_ddr+(ETH_PACKET_LENGTH_RECV-2)*packet_internal_ID_offset,(ETH_PACKET_LENGTH_RECV-2)*4);"
	lappend new_lines $tmp_line

	set tmp_line ""
	append tmp_line "				break;"
	lappend new_lines $tmp_line
	
	set tmp_line ""
	append tmp_line "							"
	lappend new_lines $tmp_line
	
	incr m
}

addlines $file_read $file_write $insert_key $new_lines












