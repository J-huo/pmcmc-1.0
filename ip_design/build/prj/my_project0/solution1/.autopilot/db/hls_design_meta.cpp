#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("memory_inout_req_din", 1, hls_out, 0, "ap_bus", "fifo_data", 1),
	Port_Property("memory_inout_req_full_n", 1, hls_in, 0, "ap_bus", "fifo_status", 1),
	Port_Property("memory_inout_req_write", 1, hls_out, 0, "ap_bus", "fifo_update", 1),
	Port_Property("memory_inout_rsp_empty_n", 1, hls_in, 0, "ap_bus", "fifo_status", 1),
	Port_Property("memory_inout_rsp_read", 1, hls_out, 0, "ap_bus", "fifo_update", 1),
	Port_Property("memory_inout_address", 32, hls_out, 0, "ap_bus", "unknown", 1),
	Port_Property("memory_inout_datain", 32, hls_in, 0, "ap_bus", "unknown", 1),
	Port_Property("memory_inout_dataout", 32, hls_out, 0, "ap_bus", "unknown", 1),
	Port_Property("memory_inout_size", 32, hls_out, 0, "ap_bus", "unknown", 1),
	Port_Property("byte_inputs_in_offset", 32, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("byte_outputs_out_offset", 32, hls_in, 2, "ap_none", "in_data", 1),
};
const char* HLS_Design_Meta::dut_name = "foo";
