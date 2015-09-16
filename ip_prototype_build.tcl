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




#  FPGA ip prototype build Vivado project
#  Suardi Andrea [a.suardi@imperial.ac.uk]
#  July - 2014

# Minimum Required tools:
# Vivado (minimum release 2014.1)

# Supported hardware:
#  -  ZedBoard  Zynq™-7000 Development Board  with  Zynq XC7Z020 (http://www.zedboard.org/product/zedboard)
#  -  MicroZed System-On-Module with  Zynq XC7Z020 (http://www.zedboard.org/product/microzed)
#  -  Xilinx Zynq-7000 All Programmable SoC ZC706 Evaluation Kit with Zynq XC7Z045 (http://www.xilinx.com/products/boards-and-kits/EK-Z7-ZC706-G.htm)
#  -  Xilinx Zynq-7000 All Programmable SoC ZC702 Evaluation Kit with Zynq XC7Z020  (http://www.xilinx.com/products/boards-and-kits/EK-Z7-ZC702-G.htm)

#to execute the script:
# 1) set configuration parameters in "configuration_parameters.tcl"
# 2) open Command Prompt window
# 3) Type: "vivado -mode tcl -source ip_prototype_build.tcl" (without "")


# ####################################################################################################################
# #################################################################################################################### 
#  PROCEDURES
# #################################################################################################################### 
# #################################################################################################################### 


# ############################# 
# procedure used to pass arguments to a tcl script (source: http://wiki.tcl.tk/10025)
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


# ####################################################################################################################
# #################################################################################################################### 
#  IMPLEMENTATION
# #################################################################################################################### 
# #################################################################################################################### 


# ############################# 
# #############################   
# Load configuration parameters
set file "configuration_parameters.tcl"
src $file

# Update interface_library.h header file
set file "make_template/make_interface_library_h.tcl"
src $file $float_fix $bits_word_integer_length $bits_word_fraction_length $input_vectors $output_vectors $tcp_udp $mem_base_address


# ############################# 
# #############################   
# Update ip_prototype\doc\readme.txt  file
set file "make_template/make_ip_prototype_readme_txt.tcl"
src $file $input_vectors $output_vectors $max_vector_length $float_fix $bits_word_integer_length $bits_word_fraction_length $mem_base_address
unset file

# ############################# 
# ############################# 
#  Run Vivado

append source_dir "../../../../ip_design/build/prj/" $project_name "/solution1/impl/ip"
append target_dir "ip_prototype/build/prj/" $project_name "." $board_name

file delete -force $target_dir

file mkdir $target_dir
cd $target_dir

set vivado_version [version -short]

create_project prototype


if {$board_name == "zedboard"} {

	# set FPGA
	set_property board_part em.avnet.com:zed:part0:1.0 [current_project]
	
	#create block diagram
	create_bd_design "design_1"

	#Add Zynq IP
	startgroup
	create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.4 processing_system7_0
	endgroup
	
	# configure Zynq
	startgroup
	set_property -dict [list CONFIG.PCW_SDIO_PERIPHERAL_FREQMHZ {50} CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ {100} CONFIG.PCW_UIPARAM_DDR_PARTNO {MT41J128M16 HA-15E} CONFIG.PCW_QSPI_PERIPHERAL_ENABLE {1} CONFIG.PCW_QSPI_GRP_FBCLK_ENABLE {1} CONFIG.PCW_ENET0_PERIPHERAL_ENABLE {1} CONFIG.PCW_ENET0_ENET0_IO {MIO 16 .. 27} CONFIG.PCW_SD0_PERIPHERAL_ENABLE {1} CONFIG.PCW_UART1_PERIPHERAL_ENABLE {1} CONFIG.PCW_TTC0_PERIPHERAL_ENABLE {1} CONFIG.PCW_USB0_PERIPHERAL_ENABLE {1} CONFIG.PCW_GPIO_MIO_GPIO_ENABLE {1}] [get_bd_cells processing_system7_0]
	endgroup

	# configure Zynq
	startgroup
	set_property -dict [list CONFIG.PCW_PRESET_BANK1_VOLTAGE {LVCMOS 1.8V} CONFIG.PCW_ENET0_GRP_MDIO_ENABLE {1} CONFIG.PCW_SD0_GRP_CD_ENABLE {1} CONFIG.PCW_SD0_GRP_CD_IO {MIO 47} CONFIG.PCW_SD0_GRP_WP_ENABLE {1} CONFIG.PCW_SD0_GRP_WP_IO {MIO 46} CONFIG.PCW_MIO_16_SLEW {fast} CONFIG.PCW_MIO_17_SLEW {fast} CONFIG.PCW_MIO_18_SLEW {fast} CONFIG.PCW_MIO_19_SLEW {fast} CONFIG.PCW_MIO_20_SLEW {fast} CONFIG.PCW_MIO_21_SLEW {fast} CONFIG.PCW_MIO_22_SLEW {fast} CONFIG.PCW_MIO_23_SLEW {fast} CONFIG.PCW_MIO_24_SLEW {fast} CONFIG.PCW_MIO_25_SLEW {fast} CONFIG.PCW_MIO_26_SLEW {fast} CONFIG.PCW_MIO_27_SLEW {fast} CONFIG.PCW_MIO_28_SLEW {fast} CONFIG.PCW_MIO_29_SLEW {fast} CONFIG.PCW_MIO_30_SLEW {fast} CONFIG.PCW_MIO_31_SLEW {fast} CONFIG.PCW_MIO_32_SLEW {fast} CONFIG.PCW_MIO_33_SLEW {fast} CONFIG.PCW_MIO_34_SLEW {fast} CONFIG.PCW_MIO_35_SLEW {fast} CONFIG.PCW_MIO_36_SLEW {fast} CONFIG.PCW_MIO_37_SLEW {fast} CONFIG.PCW_MIO_38_SLEW {fast} CONFIG.PCW_MIO_39_SLEW {fast} CONFIG.PCW_MIO_40_SLEW {fast} CONFIG.PCW_MIO_41_SLEW {fast} CONFIG.PCW_MIO_42_SLEW {fast} CONFIG.PCW_MIO_43_SLEW {fast} CONFIG.PCW_MIO_44_SLEW {fast} CONFIG.PCW_MIO_45_SLEW {fast} CONFIG.PCW_MIO_52_SLEW {slow} CONFIG.PCW_MIO_53_SLEW {slow}] [get_bd_cells processing_system7_0]
	endgroup

	# save design
	save_bd_design

	#set  IP repository
	set_property ip_repo_paths  $source_dir [current_fileset]
	update_ip_catalog

	#open block diagram
	open_bd_design {prototype.srcs/sources_1/bd/design_1/design_1.bd}

	#connect FPGA pins
	apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 -config {make_external "FIXED_IO, DDR" apply_board_preset "1" Master "Disable" Slave "Disable" }  [get_bd_cells processing_system7_0]
	
	#add designed IP
	startgroup
	create_bd_cell -type ip -vlnv icl.ac.uk:hls:foo:1.0 foo_0
	endgroup

	#connect IP to ARM processor (AXI slave interface)
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins foo_0/S_AXI_BUS_A]

	#expose ARM core S_AXI_HP0 port
	startgroup
	set_property -dict [list CONFIG.PCW_USE_S_AXI_HP0 {1} CONFIG.PCW_S_AXI_HP0_DATA_WIDTH {32}] [get_bd_cells processing_system7_0]
	endgroup

	#connect IP to ARM processor (AXI master interface to ARM S_AXI_HP0 )
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/foo_0/M_AXI_MEMORY_INOUT" Clk "Auto" }  [get_bd_intf_pins processing_system7_0/S_AXI_HP0]
	
	#set PL clock at fclk
	startgroup
	set_property -dict [list CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ $fclk CONFIG.PCW_EN_CLK0_PORT {1} ] [get_bd_cells processing_system7_0]
	endgroup

	#reset project
	reset_target all [get_files  prototype.srcs/sources_1/bd/design_1/design_1.bd]

	#update IP
	report_ip_status -name ip_status_1 
	open_bd_design {prototype.srcs/sources_1/bd/design_1/design_1.bd}
	current_bd_design design_1
	upgrade_bd_cells [get_bd_cells [list /foo_0 ] ]
	report_ip_status -name ip_status_1 
	validate_bd_design
	save_bd_design

	#make Verilog top layer wrapp
	make_wrapper -files [get_files prototype.srcs/sources_1/bd/design_1/design_1.bd] -top
	add_files -norecurse -force prototype.srcs/sources_1/bd/design_1/hdl/design_1_wrapper.v
	update_compile_order -fileset sources_1
	update_compile_order -fileset sim_1
	save_bd_design
	


} elseif {$board_name == "microzedboard"} {

	# set FPGA
	set_property board_part em.avnet.com:microzed:part0:1.0 [current_project]
	set_property part xc7z020clg400-1 [current_project]
	
	#create block diagram
	create_bd_design "design_1"

	#Add Zynq IP
	startgroup
	create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.4 processing_system7_0
	endgroup
	
	# configure Zynq
	source "../../../src/MicroZed_PS_properties_v02.tcl"
	
	# save design
	save_bd_design

	#set  IP repository
	set_property ip_repo_paths  $source_dir [current_fileset]
	update_ip_catalog

	#open block diagram
	open_bd_design {prototype.srcs/sources_1/bd/design_1/design_1.bd}
	#connect FPGA pins
	apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 -config {make_external "FIXED_IO, DDR" Master "Disable" Slave "Disable" }  [get_bd_cells processing_system7_0]

	#add designed IP
	startgroup
	create_bd_cell -type ip -vlnv icl.ac.uk:hls:foo:1.0 foo_0
	endgroup

	#expose ARM core M_AXI_GP0 port
	startgroup
	set_property -dict [list CONFIG.PCW_USE_M_AXI_GP0 {1}] [get_bd_cells processing_system7_0]
	endgroup

	#connect IP to ARM processor (AXI slave interface)
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins foo_0/S_AXI_BUS_A]

	#expose ARM core S_AXI_HP0 port
	startgroup
	set_property -dict [list CONFIG.PCW_USE_S_AXI_HP0 {1} CONFIG.PCW_S_AXI_HP0_DATA_WIDTH {32}] [get_bd_cells processing_system7_0]
	endgroup

	#connect IP to ARM processor (AXI master interface to ARM S_AXI_HP0 )
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/foo_0/M_AXI_MEMORY_INOUT" Clk "Auto" }  [get_bd_intf_pins processing_system7_0/S_AXI_HP0]
	
	#set PL clock at fclk
	startgroup
	set_property -dict [list CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ $fclk CONFIG.PCW_EN_CLK0_PORT {1} ] [get_bd_cells processing_system7_0]
	endgroup

	#reset project
	reset_target all [get_files  prototype.srcs/sources_1/bd/design_1/design_1.bd]

	#update IP
	report_ip_status -name ip_status_1 
	open_bd_design {prototype.srcs/sources_1/bd/design_1/design_1.bd}
	current_bd_design design_1
	upgrade_bd_cells [get_bd_cells [list /foo_0 ] ]
	report_ip_status -name ip_status_1 
	validate_bd_design
	save_bd_design

	#make Verilog top layer wrapp
	make_wrapper -files [get_files prototype.srcs/sources_1/bd/design_1/design_1.bd] -top
	add_files -norecurse -force prototype.srcs/sources_1/bd/design_1/hdl/design_1_wrapper.v
	update_compile_order -fileset sources_1
	update_compile_order -fileset sim_1
	save_bd_design
	
} elseif {$board_name == "zc706"} {

	# set FPGA
	set_property board_part xilinx.com:zc706:part0:1.0 [current_project]
	set_property part xc7z045ffg900-2 [current_project]
	
	#create block diagram
	create_bd_design "design_1"

	# Create interface ports
	set DDR [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddrx_rtl:1.0 DDR ]
	set FIXED_IO [ create_bd_intf_port -mode Master -vlnv xilinx.com:display_processing_system7:fixedio_rtl:1.0 FIXED_IO ]
	  
	# Create instance: proc_sys_reset, and set properties
	set proc_sys_reset [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 proc_sys_reset ]

	# Create instance: processing_system7_0, and set properties
	set processing_system7_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.4 processing_system7_0 ]
	set_property -dict [ list CONFIG.PCW_TTC1_PERIPHERAL_ENABLE {1} CONFIG.PCW_WDT_PERIPHERAL_ENABLE {1} CONFIG.preset {ZC706*}  ] $processing_system7_0
	
	connect_bd_intf_net -intf_net processing_system7_0_ddr [get_bd_intf_ports DDR] [get_bd_intf_pins processing_system7_0/DDR]
	connect_bd_intf_net -intf_net processing_system7_0_fixed_io [get_bd_intf_ports FIXED_IO] [get_bd_intf_pins processing_system7_0/FIXED_IO]
	
	# save design
	save_bd_design

	#set  IP repository
	set_property ip_repo_paths  $source_dir [current_fileset]
	update_ip_catalog

	#add designed IP
	startgroup
	create_bd_cell -type ip -vlnv icl.ac.uk:hls:foo:1.0 foo_0
	endgroup
	#connect IP to ARM processor (AXI slave interface)
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins foo_0/S_AXI_BUS_A]

	#expose ARM core S_AXI_HP0 port
	startgroup
	set_property -dict [list CONFIG.PCW_USE_S_AXI_HP0 {1} CONFIG.PCW_S_AXI_HP0_DATA_WIDTH {32}] [get_bd_cells processing_system7_0]
	endgroup

	#connect IP to ARM processor (AXI master interface to ARM S_AXI_HP0 )
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/foo_0/M_AXI_MEMORY_INOUT" Clk "Auto" }  [get_bd_intf_pins processing_system7_0/S_AXI_HP0]
		
	#set PL clock at fclk
	startgroup
	set_property -dict [list CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ $fclk CONFIG.PCW_EN_CLK0_PORT {1} ] [get_bd_cells processing_system7_0]
	endgroup

	#reset project
	reset_target all [get_files  prototype.srcs/sources_1/bd/design_1/design_1.bd]

	#update IP
	report_ip_status -name ip_status_1 
	open_bd_design {prototype.srcs/sources_1/bd/design_1/design_1.bd}
	current_bd_design design_1
	upgrade_bd_cells [get_bd_cells [list /foo_0 ] ]
	report_ip_status -name ip_status_1 
	validate_bd_design
	save_bd_design

	#make Verilog top layer wrapp
	make_wrapper -files [get_files prototype.srcs/sources_1/bd/design_1/design_1.bd] -top
	add_files -norecurse -force prototype.srcs/sources_1/bd/design_1/hdl/design_1_wrapper.v
	update_compile_order -fileset sources_1
	update_compile_order -fileset sim_1
	save_bd_design
	
} elseif {$board_name == "zc702"} {

	# set FPGA
	set_property BOARD_PART xilinx.com:zc702:part0:1.0 [current_project]
	set_property part xc7z020clg484-1 [current_project]

	#create block diagram
	create_bd_design "design_1"
	
	#set  IP repository
	set_property ip_repo_paths  $source_dir [current_fileset]
	update_ip_catalog

	#open block diagram
	open_bd_design {prototype.srcs/sources_1/bd/design_1/design_1.bd}

	#Add Zynq IP
	startgroup
		create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.4 processing_system7_0
	endgroup
	
	startgroup
	set_property -dict [list CONFIG.PCW_UIPARAM_DDR_DQS_TO_CLK_DELAY_0 {0.217} CONFIG.PCW_UIPARAM_DDR_DQS_TO_CLK_DELAY_1 {0.133} CONFIG.PCW_UIPARAM_DDR_DQS_TO_CLK_DELAY_2 {0.089} CONFIG.PCW_UIPARAM_DDR_DQS_TO_CLK_DELAY_3 {0.248} CONFIG.PCW_UIPARAM_DDR_BOARD_DELAY0 {0.537} CONFIG.PCW_UIPARAM_DDR_BOARD_DELAY1 {0.442} CONFIG.PCW_UIPARAM_DDR_BOARD_DELAY2 {0.464} CONFIG.PCW_UIPARAM_DDR_BOARD_DELAY3 {0.521} CONFIG.PCW_SDIO_PERIPHERAL_FREQMHZ {50} CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ {100} CONFIG.PCW_USE_S_AXI_HP0 {0} CONFIG.PCW_S_AXI_HP0_DATA_WIDTH {64} CONFIG.PCW_PRESET_BANK0_VOLTAGE {LVCMOS 1.8V} CONFIG.PCW_PRESET_BANK1_VOLTAGE {LVCMOS 1.8V} CONFIG.PCW_UIPARAM_DDR_PARTNO {MT41J256M8 HX-15E} CONFIG.PCW_UIPARAM_DDR_TRAIN_WRITE_LEVEL {1} CONFIG.PCW_UIPARAM_DDR_TRAIN_READ_GATE {1} CONFIG.PCW_UIPARAM_DDR_TRAIN_DATA_EYE {1} CONFIG.PCW_QSPI_PERIPHERAL_ENABLE {1} CONFIG.PCW_QSPI_GRP_FBCLK_ENABLE {1} CONFIG.PCW_ENET0_PERIPHERAL_ENABLE {1} CONFIG.PCW_ENET0_ENET0_IO {MIO 16 .. 27} CONFIG.PCW_ENET0_RESET_ENABLE {1} CONFIG.PCW_ENET0_RESET_IO {MIO 11} CONFIG.PCW_SD0_PERIPHERAL_ENABLE {1} CONFIG.PCW_UART1_PERIPHERAL_ENABLE {1} CONFIG.PCW_CAN0_PERIPHERAL_ENABLE {1} CONFIG.PCW_CAN0_CAN0_IO {MIO 46 .. 47} CONFIG.PCW_WDT_PERIPHERAL_ENABLE {1} CONFIG.PCW_TTC0_PERIPHERAL_ENABLE {1} CONFIG.PCW_USB0_PERIPHERAL_ENABLE {1} CONFIG.PCW_USB0_RESET_ENABLE {1} CONFIG.PCW_USB0_RESET_IO {MIO 7} CONFIG.PCW_I2C0_PERIPHERAL_ENABLE {1} CONFIG.PCW_I2C0_I2C0_IO {MIO 50 .. 51} CONFIG.PCW_I2C0_RESET_ENABLE {1} CONFIG.PCW_I2C0_RESET_IO {MIO 13} CONFIG.PCW_GPIO_MIO_GPIO_ENABLE {1} CONFIG.PCW_ENET0_PERIPHERAL_FREQMHZ {100 Mbps}] [get_bd_cells processing_system7_0]
	endgroup

	

	#connect FPGA pins
	apply_bd_automation -rule xilinx.com:bd_rule:processing_system7 -config {make_external "FIXED_IO, DDR" Master "Disable" Slave "Disable" }  [get_bd_cells processing_system7_0]

	#add designed IP
	startgroup
	create_bd_cell -type ip -vlnv icl.ac.uk:hls:foo:1.0 foo_0
	endgroup

	#connect IP to ARM processor (AXI slave interface)
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/processing_system7_0/M_AXI_GP0" Clk "Auto" }  [get_bd_intf_pins foo_0/S_AXI_BUS_A]

	#expose ARM core S_AXI_HP0 port
	startgroup
	set_property -dict [list CONFIG.PCW_USE_S_AXI_HP0 {1} CONFIG.PCW_S_AXI_HP0_DATA_WIDTH {32}] [get_bd_cells processing_system7_0]
	endgroup

	#connect IP to ARM processor (AXI master interface to ARM S_AXI_HP0 )
	apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config {Master "/foo_0/M_AXI_MEMORY_INOUT" Clk "Auto" }  [get_bd_intf_pins processing_system7_0/S_AXI_HP0]
	
	#set PL clock at fclk
	startgroup
	set_property -dict [list CONFIG.PCW_FPGA0_PERIPHERAL_FREQMHZ $fclk CONFIG.PCW_EN_CLK0_PORT {1} ] [get_bd_cells processing_system7_0]
	endgroup

	#reset project
	reset_target all [get_files  prototype.srcs/sources_1/bd/design_1/design_1.bd]

	#update IP
	report_ip_status -name ip_status_1 
	open_bd_design {prototype.srcs/sources_1/bd/design_1/design_1.bd}
	current_bd_design design_1
	upgrade_bd_cells [get_bd_cells [list /foo_0 ] ]
	report_ip_status -name ip_status_1 
	validate_bd_design
	save_bd_design

	#make Verilog top layer wrapp
	make_wrapper -files [get_files prototype.srcs/sources_1/bd/design_1/design_1.bd] -top
	add_files -norecurse -force prototype.srcs/sources_1/bd/design_1/hdl/design_1_wrapper.v
	update_compile_order -fileset sources_1
	update_compile_order -fileset sim_1
	save_bd_design
	
}



#synthesis
launch_runs synth_1
wait_on_run synth_1

#implementation
launch_runs impl_1
wait_on_run impl_1

#bitsream
launch_runs impl_1 -to_step write_bitstream
wait_on_run impl_1

open_run impl_1


# #############################  
# clear previous csim results
set target_file_dir ""
append target_file_dir "../../reports/" $project_name "." $board_name
file delete -force $target_file_dir
file mkdir $target_file_dir




if {$vivado_version == "2014.1"} {

	export_hardware [get_files prototype.srcs/sources_1/bd/design_1/design_1.bd] [get_runs impl_1] -bitstream
	launch_sdk -bit prototype.sdk/SDK/SDK_Export/hw/design_1_wrapper.bit -workspace prototype.sdk/SDK/SDK_Export -hwspec prototype.sdk/SDK/SDK_Export/hw/design_1.xml
    
} elseif {$vivado_version == "2014.2"} {

	file mkdir prototype.sdk
	file copy -force prototype.runs/impl_1/design_1_wrapper.sysdef prototype.sdk/design_1_wrapper.hdf
	launch_sdk -workspace prototype.sdk -hwspec prototype.sdk/design_1_wrapper.hdf
	
}




close_project

cd ..
cd ..
cd ..
cd ..

set file "make_template/parse_ip_prototype_report.tcl"
src $file $project_name $board_name

exit

unset source_dir
unset target_dir



