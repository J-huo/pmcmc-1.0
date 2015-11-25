set moduleName fetch_data_parameters
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName fetch_data_parameters
set C_modelType { int 352 }
set C_modelArgList { 
	{ t int 32 regular  }
	{ state_parameters float 32 regular {array 16385 { 1 1 } 1 1 }  }
	{ obs_parameters_fixed float 32 regular {array 65536 { 1 3 } 1 1 }  }
	{ obs_parameters_rand_0_read float 32 regular  }
	{ data float 32 regular {array 65536 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "t", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "state_parameters", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "obs_parameters_fixed", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "obs_parameters_rand_0_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "data", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 352} ]}
# RTL Port declarations: 
set portNum 31
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ t sc_in sc_lv 32 signal 0 } 
	{ state_parameters_address0 sc_out sc_lv 15 signal 1 } 
	{ state_parameters_ce0 sc_out sc_logic 1 signal 1 } 
	{ state_parameters_q0 sc_in sc_lv 32 signal 1 } 
	{ state_parameters_address1 sc_out sc_lv 15 signal 1 } 
	{ state_parameters_ce1 sc_out sc_logic 1 signal 1 } 
	{ state_parameters_q1 sc_in sc_lv 32 signal 1 } 
	{ obs_parameters_fixed_address0 sc_out sc_lv 16 signal 2 } 
	{ obs_parameters_fixed_ce0 sc_out sc_logic 1 signal 2 } 
	{ obs_parameters_fixed_q0 sc_in sc_lv 32 signal 2 } 
	{ obs_parameters_rand_0_read sc_in sc_lv 32 signal 3 } 
	{ data_address0 sc_out sc_lv 16 signal 4 } 
	{ data_ce0 sc_out sc_logic 1 signal 4 } 
	{ data_q0 sc_in sc_lv 32 signal 4 } 
	{ ap_return_0 sc_out sc_lv 32 signal -1 } 
	{ ap_return_1 sc_out sc_lv 32 signal -1 } 
	{ ap_return_2 sc_out sc_lv 32 signal -1 } 
	{ ap_return_3 sc_out sc_lv 32 signal -1 } 
	{ ap_return_4 sc_out sc_lv 32 signal -1 } 
	{ ap_return_5 sc_out sc_lv 32 signal -1 } 
	{ ap_return_6 sc_out sc_lv 32 signal -1 } 
	{ ap_return_7 sc_out sc_lv 32 signal -1 } 
	{ ap_return_8 sc_out sc_lv 32 signal -1 } 
	{ ap_return_9 sc_out sc_lv 32 signal -1 } 
	{ ap_return_10 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "t", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "t", "role": "default" }} , 
 	{ "name": "state_parameters_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "state_parameters", "role": "address0" }} , 
 	{ "name": "state_parameters_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state_parameters", "role": "ce0" }} , 
 	{ "name": "state_parameters_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "state_parameters", "role": "q0" }} , 
 	{ "name": "state_parameters_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "state_parameters", "role": "address1" }} , 
 	{ "name": "state_parameters_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "state_parameters", "role": "ce1" }} , 
 	{ "name": "state_parameters_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "state_parameters", "role": "q1" }} , 
 	{ "name": "obs_parameters_fixed_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "obs_parameters_fixed", "role": "address0" }} , 
 	{ "name": "obs_parameters_fixed_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "obs_parameters_fixed", "role": "ce0" }} , 
 	{ "name": "obs_parameters_fixed_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "obs_parameters_fixed", "role": "q0" }} , 
 	{ "name": "obs_parameters_rand_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "obs_parameters_rand_0_read", "role": "default" }} , 
 	{ "name": "data_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "data", "role": "address0" }} , 
 	{ "name": "data_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "data", "role": "ce0" }} , 
 	{ "name": "data_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "data", "role": "q0" }} , 
 	{ "name": "ap_return_0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_0", "role": "default" }} , 
 	{ "name": "ap_return_1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_1", "role": "default" }} , 
 	{ "name": "ap_return_2", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_2", "role": "default" }} , 
 	{ "name": "ap_return_3", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_3", "role": "default" }} , 
 	{ "name": "ap_return_4", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_4", "role": "default" }} , 
 	{ "name": "ap_return_5", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_5", "role": "default" }} , 
 	{ "name": "ap_return_6", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_6", "role": "default" }} , 
 	{ "name": "ap_return_7", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_7", "role": "default" }} , 
 	{ "name": "ap_return_8", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_8", "role": "default" }} , 
 	{ "name": "ap_return_9", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_9", "role": "default" }} , 
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }}  ]}
set Spec2ImplPortList { 
	t { ap_none {  { t in_data 0 32 } } }
	state_parameters { ap_memory {  { state_parameters_address0 mem_address 1 15 }  { state_parameters_ce0 mem_ce 1 1 }  { state_parameters_q0 mem_dout 0 32 }  { state_parameters_address1 mem_address 1 15 }  { state_parameters_ce1 mem_ce 1 1 }  { state_parameters_q1 mem_dout 0 32 } } }
	obs_parameters_fixed { ap_memory {  { obs_parameters_fixed_address0 mem_address 1 16 }  { obs_parameters_fixed_ce0 mem_ce 1 1 }  { obs_parameters_fixed_q0 mem_dout 0 32 } } }
	obs_parameters_rand_0_read { ap_none {  { obs_parameters_rand_0_read in_data 0 32 } } }
	data { ap_memory {  { data_address0 mem_address 1 16 }  { data_ce0 mem_ce 1 1 }  { data_q0 mem_dout 0 32 } } }
}
