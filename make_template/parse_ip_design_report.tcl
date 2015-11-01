proc src {file args} {
  set argv $::argv
  set argc $::argc
  set ::argv $args
  set ::argc [llength $args]
  set code [catch {uplevel [list source $file]} return]
  set ::argv $argv
  set ::argc $argc
  return -code $code $return
}

set project_name [lindex $argv 0]
#set project_name "my_project0"

			#cd ..
			set file "configuration_parameters.tcl"
			src $file			

			set file "user_parameters.tcl"
			src $file
			unset file


			# set project_name ""
			# append project_name $project_name_tmp1 $bits_word_fraction_length $project_name_tmp2 $fft_arch $project_name_tmp4 $fclk
			
			# #######################################  
			# #######################################  
			# Extract pre implementation information (resources and latency)
			
			set target_file ""
			append target_file "ip_design/build/prj/"  $project_name "/solution1/syn/report/foo_csynth.rpt"
			
			set target_file_mcmc ""
			append target_file_mcmc "ip_design/build/prj/"  $project_name "/solution1/syn/report/mcmc_iteration_csynth.rpt"
			
			set target_file_pf ""
			append target_file_pf "ip_design/build/prj/"  $project_name "/solution1/syn/report/particle_filter_csynth.rpt"
			
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
			# Extract latency information - mcmc_iteration
			
			set f [open $target_file_mcmc]
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
			regsub -all -- {[^0-9.-]} $tmp_str "" latency_mcmc	
			#if the latency is not available, set it to 0
			if {$latency_mcmc == ""} {
				set latency_mcmc 0
			}
			
			
			
			
			
			
			
			
						# #######################################  
			# Extract latency information - particle_filter
			
			set f [open $target_file_pf]
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
			regsub -all -- {[^0-9.-]} $tmp_str "" latency_pf	
			#if the latency is not available, set it to 0
			if {$latency_pf == ""} {
				set latency_pf 0
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
			append tmp_line "Time for one pMCMC iteration (clock cycles): " [expr $latency_mcmc - $latency_pf + 100 + $latency_pf / $par]
			puts $f $tmp_line
			set tmp_line ""
			append tmp_line "Time for one pMCMC iteration (ms): " [expr $clock_target * ($latency_mcmc - $latency_pf + 100 + $latency_pf / $par) / 1000000]  			
			puts $f $tmp_line
			puts $f "Notes: 1) Time estimates assume that particles = 1000 and state_sequence = 1000. 2) Time increases approximately proportionately to the number of particles and to the size of the state sequence. 3) Time for initialization and data transfers is not included."
			#puts $f $tmp_line
			
				puts $f ""
			if [expr $BRAM <= $BRAM_available] { 
				set tmp_line ""
				append tmp_line "BRAM_18K: " $BRAM " (" [expr $BRAM * 100 / $BRAM_available] "%) used out of " $BRAM_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "BRAM_18K: " $BRAM " (" [expr $BRAM * 100 / $BRAM_available] "%) used out of " $BRAM_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $DSP48E <= $DSP48E_available] { 
				set tmp_line ""
				append tmp_line "DSP48E: " $DSP48E  " (" [expr $DSP48E * 100 / $DSP48E_available] "%) used out of " $DSP48E_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "DSP48E: " $DSP48E  " (" [expr $DSP48E * 100 / $DSP48E_available] "%) used out of " $DSP48E_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $FF <= $FF_available] { 
				set tmp_line ""
				append tmp_line "FF: " $FF " (" [expr $FF * 100 / $FF_available] "%) used out of " $FF_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "FF: " $FF " (" [expr $FF * 100 / $FF_available] "%) used out of " $FF_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			if [expr $LUT <= $LUT_available] { 
				set tmp_line ""
				append tmp_line "LUT: " $LUT " (" [expr $LUT * 100 / $LUT_available] "%) used out of " $LUT_available " available."
				puts $f $tmp_line
			} else {
				set tmp_line ""
				append tmp_line "LUT: " $LUT " (" [expr $LUT * 100 / $LUT_available] "%) used out of " $LUT_available " available. The design does NOT fit into the selected FPGA. Consider to use a bigger FPGA or reduce the design size."
				puts $f $tmp_line
			}
			set tmp_line ""
			

			close $f
			
		