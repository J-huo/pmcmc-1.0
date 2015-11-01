set sim_type "'ip_run'"
set Matlab "matlab.exe"

# #############################  
# clear previous csim results
file delete -force ip_prototype/test_hil/results
file mkdir ip_prototype/test_hil/results


	# #############################  
	# Call Matlab to make *.dat files which will be loaded by the c-simulation (funeval_test.cpp)

	cd ip_prototype/src
	file delete -force _locked
	 
	# Call Matlab function write_testbench.m to generate the *.dat files used by foo_test.cpp
	set status [ catch { exec $Matlab --nospash -nodesktop -r batch_PF($sim_type)} output ]

	# Wait until the Matlab has finished
	while {true} {
		if { [file exists _locked] == 1} {  
			after 1000
			break
		}
	}

	
	cd ..
	cd ..



exit



