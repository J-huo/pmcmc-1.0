set moduleName foo
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName foo
set C_modelType { void 0 }
set C_modelArgList { 
	{ memory_inout float 32 regular {bus 2}  }
	{ byte_inputs_in_offset int 32 regular  }
	{ byte_outputs_out_offset int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "memory_inout", "interface" : "bus", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "memory_inout","cData": "float","cArray": [{"low" : 0,"up" : 2097151,"step" : 1}]}]}]} , 
 	{ "Name" : "byte_inputs_in_offset", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "byte_inputs_in_offset","cData": "unsigned int","cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} , 
 	{ "Name" : "byte_outputs_out_offset", "interface" : "wire", "bitwidth" : 32,"bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "byte_outputs_out_offset","cData": "unsigned int","cArray": [{"low" : 0,"up" : 0,"step" : 0}]}]}]} ]}
# RTL Port declarations: 
set portNum 17
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ memory_inout_req_din sc_out sc_logic 1 signal 0 } 
	{ memory_inout_req_full_n sc_in sc_logic 1 signal 0 } 
	{ memory_inout_req_write sc_out sc_logic 1 signal 0 } 
	{ memory_inout_rsp_empty_n sc_in sc_logic 1 signal 0 } 
	{ memory_inout_rsp_read sc_out sc_logic 1 signal 0 } 
	{ memory_inout_address sc_out sc_lv 32 signal 0 } 
	{ memory_inout_datain sc_in sc_lv 32 signal 0 } 
	{ memory_inout_dataout sc_out sc_lv 32 signal 0 } 
	{ memory_inout_size sc_out sc_lv 32 signal 0 } 
	{ byte_inputs_in_offset sc_in sc_lv 32 signal 1 } 
	{ byte_outputs_out_offset sc_in sc_lv 32 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "memory_inout_req_din", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memory_inout", "role": "req_din" }} , 
 	{ "name": "memory_inout_req_full_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memory_inout", "role": "req_full_n" }} , 
 	{ "name": "memory_inout_req_write", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memory_inout", "role": "req_write" }} , 
 	{ "name": "memory_inout_rsp_empty_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memory_inout", "role": "rsp_empty_n" }} , 
 	{ "name": "memory_inout_rsp_read", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "memory_inout", "role": "rsp_read" }} , 
 	{ "name": "memory_inout_address", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memory_inout", "role": "address" }} , 
 	{ "name": "memory_inout_datain", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memory_inout", "role": "datain" }} , 
 	{ "name": "memory_inout_dataout", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memory_inout", "role": "dataout" }} , 
 	{ "name": "memory_inout_size", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "memory_inout", "role": "size" }} , 
 	{ "name": "byte_inputs_in_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "byte_inputs_in_offset", "role": "default" }} , 
 	{ "name": "byte_outputs_out_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "byte_outputs_out_offset", "role": "default" }}  ]}
set Spec2ImplPortList { 
	memory_inout { ap_bus {  { memory_inout_req_din fifo_data 1 1 }  { memory_inout_req_full_n fifo_status 0 1 }  { memory_inout_req_write fifo_update 1 1 }  { memory_inout_rsp_empty_n fifo_status 0 1 }  { memory_inout_rsp_read fifo_update 1 1 }  { memory_inout_address unknown 1 32 }  { memory_inout_datain unknown 0 32 }  { memory_inout_dataout unknown 1 32 }  { memory_inout_size unknown 1 32 } } }
	byte_inputs_in_offset { ap_none {  { byte_inputs_in_offset in_data 0 32 } } }
	byte_outputs_out_offset { ap_none {  { byte_outputs_out_offset in_data 0 32 } } }
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
