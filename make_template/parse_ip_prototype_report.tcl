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
set board_name [lindex $argv 1]

			
			
			

			
			# #######################################  
			# #######################################  
			# Extract post implementation information (resources and power consumption)
			
			
			# #######################################  
			# Extract the resource utilization
			
			set target_file ""
			append target_file "ip_prototype/build/prj/" $project_name "." $board_name "/prototype.runs/impl_1/design_1_wrapper_utilization_placed.rpt"
			
			# #######################################  
			# Extract the LUT_impl utilization
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Slice LUTs} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" LUT_impl
			#if the LUT_impl is not available, set it to 0
			if {$LUT_impl == ""} {
				set LUT_impl 0
			}
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" LUT_available
			#if the LUT_available is not available, set it to 0
			if {$LUT_available == ""} {
				set LUT_available 0
			}
			
			
			# #######################################  
			# Extract the FF_impl utilization
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Slice Registers} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" FF_impl
			#if the FF_impl is not available, set it to 0
			if {$FF_impl == ""} {
				set FF_impl 0
			}
			
			
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" FF_available
			#if the FF_available is not available, set it to 0
			if {$FF_available == ""} {
				set FF_available 0
			}
			
			
			
			
			# #######################################  
			# Extract the BRAM_impl utilization
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Block RAM Tile} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" BRAM_impl
			#if the BRAM_imp is not available, set it to 0
			if {$BRAM_impl == ""} {
				set BRAM_impl 0
			}
			#convert to BRAM18k
			set BRAM_impl [ expr $BRAM_impl * 2]

			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" BRAM_available
			#if the BRAM_available is not available, set it to 0
			if {$BRAM_available == ""} {
				set BRAM_available 0
			}
			
			#convert to BRAM18k
			set BRAM_available [ expr $BRAM_available * 2]
			
			
			
			# #######################################  
			# Extract the DSP48E_impl utilization
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {DSPs} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" DSP48E_impl
			#if the DSP48E_impl is not available, set it to 0
			if {$DSP48E_impl == ""} {
				set DSP48E_impl 0
			}

			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" DSP48E_available
			#if the DSP48E_available is not available, set it to 0
			if {$DSP48E_available == ""} {
				set DSP48E_available 0
			}
			
			
			# #######################################  
			# Extract timing information
			
			set target_file ""
			append target_file "ip_prototype/build/prj/" $project_name "." $board_name "/prototype.runs/impl_1/design_1_wrapper_timing_summary_routed.rpt"
			
			
			# #######################################  
			# Extract the clock target
			set f [open $target_file]
			set file_data [read $f]
			close $f
			
			set data [split $file_data "\n"]
			set count_line 0;
			foreach line $data {
				incr count_line
				if {[regexp {Clock Summary} $line all value]} {
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
			set index_pipe [expr [string first "}" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			set line [string range $line 1 11]
			regsub -all -- {[^0-9.-]} $line "" clock_target
			#if the clock_target is not available, set it to 0
			if {$clock_target == ""} {
				set clock_target 0
			}
			

			# #######################################  
			# Extract the clock achieved
			set f [open $target_file]
			set file_data [read $f]
			close $f
			
			set data [split $file_data "\n"]
			set count_line 0;
			foreach line $data {
				incr count_line
				if {[regexp {Intra Clock Table} $line all value]} {
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
			
			set line [string range $line 15 30]
			regsub -all -- {[^0-9.-]} $line "" clk_achieved
			#if the clk_achieved is not available, set it to 0
			if {$clk_achieved == ""} {
				set clk_achieved 0
			}
			
			
			
			
			# #######################################  
			# Extract the power utilization
			
			set target_file ""
			append target_file "ip_prototype/build/prj/" $project_name "." $board_name "/prototype.runs/impl_1/design_1_wrapper_power_routed.rpt"
			
			# #######################################  
			# Extract the PW_total
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Total On-Chip Power} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" PW_total
			#if the PW_total is not available, set it to 0
			if {$PW_total == ""} {
				set PW_total 0
			}

			
			
			# #######################################  
			# Extract the PW_dyn
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Dynamic} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" PW_dyn
			#if the PW_dyn is not available, set it to 0
			if {$PW_dyn == ""} {
				set PW_dyn 0
			}

			
			# #######################################  
			# Extract the PW_sta
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {Device Static} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" PW_sta
			#if the PW_sta is not available, set it to 0
			if {$PW_sta == ""} {
				set PW_sta 0
			}

			
			# #######################################  
			# Extract the PW_PS7
			set f [open $target_file]
			while {[gets $f line] != -1} {
			    if {[regexp {PS7} $line all value]} {
				break
			    }
			}
			close $f
			
			set line_size [expr [ string length $line]-1]
			set line [string range $line 1 $line_size]
			set index_pipe [expr [string first "|" $line ] +1]
			set line [string range $line $index_pipe $line_size]
			
			set index_pipe [expr [string first "|" $line ] +1]
			set tmp_str  [string range $line 0 $index_pipe]
			set line [string range $line $index_pipe $line_size]
			regsub -all -- {[^0-9.-]} $tmp_str "" PW_PS7
			#if the PW_PS7 is not available, set it to 0
			if {$PW_PS7 == ""} {
				set PW_PS7 0
			}

			set PW_logic [expr $PW_total - $PW_PS7]
			
			

		# ####################################### 
			# Write report file
			set target_file ""
			append target_file "ip_prototype/build/reports/" $project_name "." $board_name "/report.txt"
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
			append tmp_line "FPGA prototype report: " $project_name "." $board_name
			puts $f $tmp_line
			puts $f "---------------------------"
			puts $f ""
			puts $f ""
			set tmp_line ""
			append tmp_line "clock target (ns): " $clock_target
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "clock achieved (ns): " $clk_achieved
			puts $f $tmp_line
			
			if [expr $clock_target < $clk_achieved] {
				puts $f "Time constraints NOT met during IP prototyping. You have to increase clock target period to met time constraints."	
			} else {
				puts $f "Time constraints met during IP prototyping. You might reduce clock target period to build a faster design."
			}


			puts $f ""
			if [expr $BRAM_impl <= $BRAM_available] { 
				set tmp_line ""
				append tmp_line "BRAM_18K: " $BRAM_impl " (" [expr $BRAM_impl * 100 / $BRAM_available] "%) used out off " $BRAM_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "BRAM_18K: " $BRAM_impl " (" [expr $BRAM_impl * 100 / $BRAM_available] "%) used out off " $BRAM_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $DSP48E_impl <= $DSP48E_available] { 
				set tmp_line ""
				append tmp_line "DSP48E: " $DSP48E_impl  " (" [expr $DSP48E_impl * 100 / $DSP48E_available] "%) used out off " $DSP48E_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "DSP48E: " $DSP48E_impl  " (" [expr $DSP48E_impl * 100 / $DSP48E_available] "%) used out off " $DSP48E_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $FF_impl <= $FF_available] { 
				set tmp_line ""
				append tmp_line "FF: " $FF_impl " (" [expr $FF_impl * 100 / $FF_available] "%) used out off " $FF_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "FF: " $FF_impl " (" [expr $FF_impl * 100 / $FF_available] "%) used out off " $FF_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $LUT_impl <= $LUT_available] { 
				set tmp_line ""
				append tmp_line "LUT: " $LUT_impl " (" [expr $LUT_impl * 100 / $LUT_available] "%)  used out off " $LUT_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "LUT: " $LUT_impl " (" [expr $LUT_impl * 100 / $LUT_available] "%)  used out off " $LUT_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			set tmp_line ""
			
						
			puts $f ""
			set tmp_line ""
			append tmp_line "Power total on-chip (W): " $PW_total
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "Power dynamic (W): " $PW_dyn
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "Power device static (W) " $PW_sta
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "Power ARM Cortex-A9 (W): " $PW_PS7
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "Power programmable logic (W): " $PW_logic
			puts $f $tmp_line
			
			
			close $f