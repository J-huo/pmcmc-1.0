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
#  September - 2014

set project_name [lindex $argv 0]

			# set project_name ""
			# append project_name $project_name_tmp1 $bits_word_fraction_length $project_name_tmp2 $fft_arch $project_name_tmp4 $fclk
			
			# #######################################  
			# #######################################  
			# Extract pre implementation information (resources and latency)
			
			set target_file ""
			append target_file "ip_design/build/prj/"  $project_name "/solution1/syn/report/foo_csynth.rpt"
			
			# #######################################  
			# Extract timing information
			
			set f [open $target_file]
			set file_data [read $f]
			close $f
			
			set data [split $file_data "\n"]
			set count_line 0;
			foreach line $data {
				incr count_line
				if {[regexp {Timing} $line all value]} {
					set target_line [expr [incr count_line 5]]
					break
				}
			}
			
			set count_line 0;
			foreach line $data {
				incr count_line
				if {$count_line == $target_line} {
					break
				}
			}

			
			
			set line_size [expr [ string length $line]-1]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]

			set line_size [expr [ string length $line]-1]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]	
			regsub -all -- {[^0-9.-]} $tmp_str "" clock_target	
			#if the clock_traget is not available, set it to 0
			if {$clock_target == ""} {
				set clock_target 0
			}
			
			set line [string range $line $index_pipe $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]	
			regsub -all -- {[^0-9.-]} $tmp_str "" clock_estimated	
			#if the clock_traget is not available, set it to 0
			if {$clock_estimated == ""} {
				set clock_estimated 0
			}
			
			
			# #######################################  
			# Extract latency information
			
			set f [open $target_file]
			set file_data [read $f]
			close $f
			
			set data [split $file_data "\n"]
			set count_line 0;
			foreach line $data {
				incr count_line
				if {[regexp {Latency} $line all value]} {
					set target_line [expr [incr count_line 6]]
					break
				}
			}
			
			set count_line 0;
			foreach line $data {
				incr count_line
				if {$count_line == $target_line} {
					break
				}
			}

			
			
			set line_size [expr [ string length $line]-1]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]

			set line_size [expr [ string length $line]-1]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]	
			regsub -all -- {[^0-9.-]} $tmp_str "" latency	
			#if the latency is not available, set it to 0
			if {$latency == ""} {
				set latency 0
			}


			# #######################################  
			# Extract the resource utilization

			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Total} $line all value]} {
				break
			    }
			}
			close $f

			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]

			
			#extract BRAM_18K
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			

			
			regsub -all -- {[^0-9.-]} $tmp_str "" BRAM
			#if the BRAM is not available, set it to 0
			if {$BRAM == ""} {
				set BRAM 0
			}

			 
			# extract DSP48E
			 set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			 regsub -all -- {[^0-9.-]} $tmp_str "" DSP48E
			# if the DSP48E is not available, set it to 0
			if {$DSP48E == ""} {
				set DSP48E 0
			}

			 #extract FF
			 set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			 regsub -all -- {[^0-9.-]} $tmp_str "" FF
			 #if the FF is not available, set it to 0
			if {$FF == ""} {
				set FF 0
			}

			 
			# extract LUT
			 set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" LUT
			#if the LUT is not available, set it to 0
			if {$LUT == ""} {
				set LUT 0
			}
			
			
			# #######################################  
			# Extract the resource available

			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Available} $line all value]} {
				break
			    }
			}
			close $f

			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]

			
			#extract BRAM_18K
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			

			
			regsub -all -- {[^0-9.-]} $tmp_str "" BRAM_available
			#if the BRAM_available is not available, set it to 0
			if {$BRAM_available == ""} {
				set BRAM_available 0
			}

			 
			# extract DSP48E
			 set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			 regsub -all -- {[^0-9.-]} $tmp_str "" DSP48E_available
			# if the DSP48E_available is not available, set it to 0
			if {$DSP48E_available == ""} {
				set DSP48E_available 0
			}

			 #extract FF
			 set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			 regsub -all -- {[^0-9.-]} $tmp_str "" FF_available
			 #if the FF_available is not available, set it to 0
			if {$FF_available == ""} {
				set FF_available 0
			}

			 
			# extract LUT
			 set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" LUT_available
			#if the LUT_available is not available, set it to 0
			if {$LUT_available == ""} {
				set LUT_available 0
			}
			
			
			# ####################################### 
			# Write report file
			set target_file ""
			append target_file "ip_design/build/reports/"  $project_name "/report.txt"
			set f [open $target_file w+]
			
			
			puts $f "/*"
			puts $f "* This file is part of ICL SDK4FPGA."
			puts $f "*"
			puts $f "* ICL SDK4FPGA -- A framework to optimal design, easy validate"
			puts $f "* and fast prototype mathematical algorithms on FPGA based systems."
			puts $f "* Copyright (C) 2014 by Andrea Suardi, Imperial College London."
			puts $f "* Supported by the EPSRC Impact Acceleration grant number EP/K503733/1"
			puts $f "*"
			puts $f "* ICL SDK4FPGA is free software; you can redistribute it and/or"
			puts $f "* modify it under the terms of the GNU Lesser General Public"
			puts $f "* License as published by the Free Software Foundation; either"
			puts $f "* version 3 of the License, or (at your option) any later version."
			puts $f "*"
			puts $f "* ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers"
			puts $f "* to build their own mathematical algorithms into FPGA."
			puts $f "* but WITHOUT ANY WARRANTY; without even the implied warranty of"
			puts $f "* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE."
			puts $f "* It is the user's responsibility in assessing the correctness of the algorithm"
			puts $f "* and software implementation before putting it to use in their own research"
			puts $f "* or exploiting the results commercially."
			puts $f "* Lesser General Public License for more details."
			puts $f "*"
			puts $f "* You should have received a copy of the GNU Lesser General Public"
			puts $f "* License along with ICL SDK4FPGA; if not, write to the Free Software"
			puts $f "* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA"
			puts $f "*"
			puts $f "*/"
			puts $f ""
			puts $f ""
			puts $f ""
			puts $f ""

			puts $f "---------------------------"
			set tmp_line ""
			append tmp_line "IP report: " $project_name
			puts $f $tmp_line
			puts $f "---------------------------"
			puts $f ""
			puts $f ""
			set tmp_line ""
			append tmp_line "clock target (ns): " $clock_target
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "clock estimated (ns): " $clock_estimated
			puts $f $tmp_line
			
			if [expr $clock_target < $clock_estimated] {
				puts $f "Time constraints might NOT be met during IP prototyping. You have to increase clock target period to met time constraints."	
			} else {
				puts $f "Time constraints might be met during IP prototyping. You can reduce clock target period to build a faster design."
			}
			
			
			puts $f ""
			set tmp_line ""
			append tmp_line "latency (clock cycles): " $latency
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "latency (us): " [expr $clock_target * $latency / 1000]
			puts $f $tmp_line

				puts $f ""
			if [expr $BRAM <= $BRAM_available] { 
				set tmp_line ""
				append tmp_line "BRAM_18K: " $BRAM " (" [expr $BRAM * 100 / $BRAM_available] "%) used out off " $BRAM_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "BRAM_18K: " $BRAM " (" [expr $BRAM * 100 / $BRAM_available] "%) used out off " $BRAM_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $DSP48E <= $DSP48E_available] { 
				set tmp_line ""
				append tmp_line "DSP48E: " $DSP48E  " (" [expr $DSP48E * 100 / $DSP48E_available] "%) used out off " $DSP48E_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "DSP48E: " $DSP48E  " (" [expr $DSP48E * 100 / $DSP48E_available] "%) used out off " $DSP48E_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $FF <= $FF_available] { 
				set tmp_line ""
				append tmp_line "FF: " $FF " (" [expr $FF * 100 / $FF_available] "%) used out off " $FF_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "FF: " $FF " (" [expr $FF * 100 / $FF_available] "%) used out off " $FF_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $LUT <= $LUT_available] { 
				set tmp_line ""
				append tmp_line "LUT: " $LUT " (" [expr $LUT * 100 / $LUT_available] "%) used out off " $LUT_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "LUT: " $LUT " (" [expr $LUT * 100 / $LUT_available] "%) used out off " $LUT_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			set tmp_line ""
			

			close $f
			
		