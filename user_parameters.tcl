# USER PARAMETERS (modify according to requirements) 
# set model, particle filter, architecture and implementation parameters
# Grigorios Mingas
# October - 2015


# ############# MODEL AND MCMC PARAMETERS ##############
# SSM parameters
set state_dimension 1
set observation_dimension 4
set transition_parameters_unknown 1
set observation_parameters_unknown 1
set transition_parameters_known 1
set observation_parameters_known 4

# Numbers of random values needed for one transition and one observation step (per particle)
set transition_normals 1
set transition_uniforms 0
set observation_normals 4
set observation_uniforms 0

# Which unknown parameters are positive-only? 1 if positive-only, 0 if positive/negative (first for transition, then for observation) 
set positive_only [list 1 1]

# Number of prior parameters (hyper-parameters) - considered known
set prior_parameters 5



# ############# ARCHITECTURE AND MEMORY PARAMETERS ##############

# Architecture parallelism
set par 2

# Maximum problem sizes
set max_particles 16384
set max_state_sequence 16384

# RNG initialization cycles (do not change if not familiar with architecture)
set rng_init_cycles 1000



# ############# IMPLEMENTATION PARAMETERS ##############

# FPGA design clock frequency [MHz]
set fclk 150; 

# Set FPGA device name according to your target FPGA. 
# All Xilinx 7 Series and Zynq®-7000 chips are supported
# If the purpose is to prototype the designed IP with a supported Evaluation board, please set the FPGA device name according to the choosen evaluation board.
# Supported evaluation boards for the prototyping phase:
#  -  ZedBoard  Zynq™-7000 Development Board  with  Zynq XC7Z020 (http://www.zedboard.org/product/zedboard)
#  -  MicroZed System-On-Module with  Zynq XC7Z020 (http://www.zedboard.org/product/microzed)
#  -  Xilinx Zynq-7000 All Programmable SoC ZC706 Evaluation Kit with Zynq XC7Z045 (http://www.xilinx.com/products/boards-and-kits/EK-Z7-ZC706-G.htm)
#  -  Xilinx Zynq-7000 All Programmable SoC ZC702 Evaluation Kit with Zynq XC7Z020  (http://www.xilinx.com/products/boards-and-kits/EK-Z7-ZC702-G.htm)
# FPGA device name if prototype with zedboard should be {xc7z020clg484-1}
# FPGA device name if prototype with microzedboard should be {xc7z020clg400-1}
# FPGA device name if prototype with zc702 should be {xc7z020clg484-1}
# FPGA device name if prototype with zc706 should be {xc7z045ffg900-2}
set FPGA_name "{xc7z045ffg900-2}" 
# Set the target evaluation board (zedboard,  microzedboard, zc702, zc706) ONLY if the purpose is to prototype the designed IP
set board_name "zc706"
