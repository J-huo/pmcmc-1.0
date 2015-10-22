# ##############################
# Define the IP inputs and output  names
# The IP input and outputs are VECTORS ONLY of any size.
# IMPORTANT NOTICE: It HAS To be set up before running make_template.tcl script and DO NOT modify it during the following design phases.

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

# #############################   
# Load configuration parameters
set file "user_parameters.tcl"
src $file
unset file


# Set the NAME of the INPUT vectors
set input_vectors [list "inputs"]
# Set the NAME of the OUTPUT vectors
set output_vectors [list "outputs"]
# Set the maximum vector size (number of data) among the input and output vectros
# Note that the user design can use input and ouput vector of smaller size if required  
set max_vector_length 115000000
#if [expr $board_name == "zc706"] {
 #        set max_vector_length 115000000         
 #} elseif [expr $board_name == "zc702"] {
 #        set max_vector_length 115000000  
 #} elseif [expr $board_name == "microzedboard"] {
 #        set max_vector_length 115000000            
 #} else {
 #        set max_vector_length 57500000     
 #}

 
# ##############################
# Set the project name (a project folder with this name will be created)
set project_name "my_project0"


# ##############################
# Define the IP arithmetic precision
# Every input/output and IP variable is represented with the same precision

# Set 0=FLOAT (floating-point single precision), 1=FIX (fixed-point up to 32 bits word length)
set float_fix 0; 

#ONLY if FIXED-POINT, define how many bit to use for
#representing the integer and the fraction part  
#REMARK1: make attention when choosing the integer length because overflow can occur.
#REMARK2: maximum word length size (bits_word_integer_length+bits_word_fraction_length) is 32, minimum integer length size is 1
set bits_word_integer_length 4; 
set bits_word_fraction_length 4;

# Set Ethernet communication protocol. Set 0 for UDP/IP or 1 for  TCP/IP  
set tcp_udp 0

# for PROTOTYPE ONLY: set the DDR memory region  (region base address in Bytes) that you want to allocate for storing input and output vectors
set mem_base_address 33554432; #32 MB

# ##############################
# Number of time to repeat an ip_design test (test_csim or test_rtlsim) or prototype test(test_hil) using a different stimulus data set.
set num_simulation 1

# If rtl simulation is used, set the RTL simulator. The supported simulators are: modelsim, xsim
set rtl_simulator "xsim"