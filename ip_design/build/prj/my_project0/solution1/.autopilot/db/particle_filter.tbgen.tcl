set moduleName particle_filter
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set C_modelName particle_filter
set C_modelType { int 2784 }
set C_modelArgList { 
	{ particles_saved_out float 32 regular {array 16389 { 0 3 } 0 1 }  }
	{ P int 32 regular  }
	{ init_particles_0 float 32 regular {array 8192 { 1 3 } 1 1 }  }
	{ init_particles_1 float 32 regular {array 8192 { 1 3 } 1 1 }  }
	{ particles_0 float 32 regular {array 8192 { 2 0 } 1 1 }  }
	{ particles_1 float 32 regular {array 8192 { 2 0 } 1 1 }  }
	{ particles_temp_0 float 32 regular {array 8192 { 2 2 } 1 1 }  }
	{ particles_temp_1 float 32 regular {array 8192 { 2 0 } 1 1 }  }
	{ log_lik_particle_0 float 32 regular {array 8192 { 2 0 } 1 1 }  }
	{ log_lik_particle_1 float 32 regular {array 8192 { 2 0 } 1 1 }  }
	{ weights_0 float 32 regular {array 8192 { 2 3 } 1 1 }  }
	{ weights_1 float 32 regular {array 8192 { 2 3 } 1 1 }  }
	{ weights_partial_sums_0_read float 32 regular  }
	{ weights_partial_sums_1_read float 32 regular  }
	{ replication_factors_0 int 16 regular {array 8192 { 2 0 } 1 1 }  }
	{ replication_factors_1 int 16 regular {array 8192 { 2 0 } 1 1 }  }
	{ state_count int 32 regular  }
	{ state_param_fixed_dim int 32 regular  }
	{ state_parameters float 32 regular {array 16385 { 1 1 } 1 1 }  }
	{ obs_parameters_fixed float 32 regular {array 65536 { 1 3 } 1 1 }  }
	{ obs_parameters_rand_0_read float 32 regular  }
	{ data float 32 regular {array 65536 { 1 3 } 1 1 }  }
	{ rng_state_0_s1_read int 32 regular  }
	{ rng_state_1_s1_read int 32 regular  }
	{ rng_state_2_s1_read int 32 regular  }
	{ rng_state_3_s1_read int 32 regular  }
	{ rng_state_4_s1_read int 32 regular  }
	{ rng_state_5_s1_read int 32 regular  }
	{ rng_state_6_s1_read int 32 regular  }
	{ rng_state_7_s1_read int 32 regular  }
	{ rng_state_8_s1_read int 32 regular  }
	{ rng_state_9_s1_read int 32 regular  }
	{ rng_state_10_s1_read int 32 regular  }
	{ rng_state_11_s1_read int 32 regular  }
	{ rng_state_12_s1_read int 32 regular  }
	{ rng_state_13_s1_read int 32 regular  }
	{ rng_state_14_s1_read int 32 regular  }
	{ rng_state_15_s1_read int 32 regular  }
	{ rng_state_16_s1_read int 32 regular  }
	{ rng_state_17_s1_read int 32 regular  }
	{ rng_state_18_s1_read int 32 regular  }
	{ rng_state_19_s1_read int 32 regular  }
	{ rng_state_20_s1_read int 32 regular  }
	{ rng_state_0_s2_read int 32 regular  }
	{ rng_state_1_s2_read int 32 regular  }
	{ rng_state_2_s2_read int 32 regular  }
	{ rng_state_3_s2_read int 32 regular  }
	{ rng_state_4_s2_read int 32 regular  }
	{ rng_state_5_s2_read int 32 regular  }
	{ rng_state_6_s2_read int 32 regular  }
	{ rng_state_7_s2_read int 32 regular  }
	{ rng_state_8_s2_read int 32 regular  }
	{ rng_state_9_s2_read int 32 regular  }
	{ rng_state_10_s2_read int 32 regular  }
	{ rng_state_11_s2_read int 32 regular  }
	{ rng_state_12_s2_read int 32 regular  }
	{ rng_state_13_s2_read int 32 regular  }
	{ rng_state_14_s2_read int 32 regular  }
	{ rng_state_15_s2_read int 32 regular  }
	{ rng_state_16_s2_read int 32 regular  }
	{ rng_state_17_s2_read int 32 regular  }
	{ rng_state_18_s2_read int 32 regular  }
	{ rng_state_19_s2_read int 32 regular  }
	{ rng_state_20_s2_read int 32 regular  }
	{ rng_state_0_s3_read int 32 regular  }
	{ rng_state_1_s3_read int 32 regular  }
	{ rng_state_2_s3_read int 32 regular  }
	{ rng_state_3_s3_read int 32 regular  }
	{ rng_state_4_s3_read int 32 regular  }
	{ rng_state_5_s3_read int 32 regular  }
	{ rng_state_6_s3_read int 32 regular  }
	{ rng_state_7_s3_read int 32 regular  }
	{ rng_state_8_s3_read int 32 regular  }
	{ rng_state_9_s3_read int 32 regular  }
	{ rng_state_10_s3_read int 32 regular  }
	{ rng_state_11_s3_read int 32 regular  }
	{ rng_state_12_s3_read int 32 regular  }
	{ rng_state_13_s3_read int 32 regular  }
	{ rng_state_14_s3_read int 32 regular  }
	{ rng_state_15_s3_read int 32 regular  }
	{ rng_state_16_s3_read int 32 regular  }
	{ rng_state_17_s3_read int 32 regular  }
	{ rng_state_18_s3_read int 32 regular  }
	{ rng_state_19_s3_read int 32 regular  }
	{ rng_state_20_s3_read int 32 regular  }
	{ rng_state_0_offset_read int 32 regular  }
	{ rng_state_1_offset_read int 32 regular  }
	{ rng_state_2_offset_read int 32 regular  }
	{ rng_state_3_offset_read int 32 regular  }
	{ rng_state_4_offset_read int 32 regular  }
	{ rng_state_5_offset_read int 32 regular  }
	{ rng_state_6_offset_read int 32 regular  }
	{ rng_state_7_offset_read int 32 regular  }
	{ rng_state_8_offset_read int 32 regular  }
	{ rng_state_9_offset_read int 32 regular  }
	{ rng_state_10_offset_read int 32 regular  }
	{ rng_state_11_offset_read int 32 regular  }
	{ rng_state_12_offset_read int 32 regular  }
	{ rng_state_13_offset_read int 32 regular  }
	{ rng_state_14_offset_read int 32 regular  }
	{ rng_state_15_offset_read int 32 regular  }
	{ rng_state_16_offset_read int 32 regular  }
	{ rng_state_17_offset_read int 32 regular  }
	{ rng_state_18_offset_read int 32 regular  }
	{ rng_state_19_offset_read int 32 regular  }
	{ rng_state_20_offset_read int 32 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "particles_saved_out", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "P", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "init_particles_0", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "init_particles_1", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "particles_0", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "particles_1", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "particles_temp_0", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "particles_temp_1", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "log_lik_particle_0", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "log_lik_particle_1", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "weights_0", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "weights_1", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "weights_partial_sums_0_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "weights_partial_sums_1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "replication_factors_0", "interface" : "memory", "bitwidth" : 16} , 
 	{ "Name" : "replication_factors_1", "interface" : "memory", "bitwidth" : 16} , 
 	{ "Name" : "state_count", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "state_param_fixed_dim", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "state_parameters", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "obs_parameters_fixed", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "obs_parameters_rand_0_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "data", "interface" : "memory", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_0_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_1_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_2_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_3_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_4_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_5_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_6_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_7_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_8_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_9_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_10_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_11_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_12_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_13_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_14_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_15_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_16_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_17_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_18_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_19_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_20_s1_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_0_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_1_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_2_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_3_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_4_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_5_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_6_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_7_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_8_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_9_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_10_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_11_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_12_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_13_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_14_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_15_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_16_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_17_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_18_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_19_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_20_s2_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_0_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_1_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_2_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_3_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_4_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_5_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_6_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_7_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_8_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_9_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_10_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_11_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_12_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_13_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_14_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_15_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_16_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_17_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_18_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_19_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_20_s3_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_0_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_1_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_2_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_3_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_4_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_5_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_6_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_7_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_8_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_9_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_10_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_11_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_12_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_13_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_14_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_15_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_16_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_17_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_18_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_19_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "rng_state_20_offset_read", "interface" : "wire", "bitwidth" : 32} , 
 	{ "Name" : "ap_return", "interface" : "wire", "bitwidth" : 2784} ]}
# RTL Port declarations: 
set portNum 288
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ particles_saved_out_address0 sc_out sc_lv 15 signal 0 } 
	{ particles_saved_out_ce0 sc_out sc_logic 1 signal 0 } 
	{ particles_saved_out_we0 sc_out sc_logic 1 signal 0 } 
	{ particles_saved_out_d0 sc_out sc_lv 32 signal 0 } 
	{ P sc_in sc_lv 32 signal 1 } 
	{ init_particles_0_address0 sc_out sc_lv 13 signal 2 } 
	{ init_particles_0_ce0 sc_out sc_logic 1 signal 2 } 
	{ init_particles_0_q0 sc_in sc_lv 32 signal 2 } 
	{ init_particles_1_address0 sc_out sc_lv 13 signal 3 } 
	{ init_particles_1_ce0 sc_out sc_logic 1 signal 3 } 
	{ init_particles_1_q0 sc_in sc_lv 32 signal 3 } 
	{ particles_0_address0 sc_out sc_lv 13 signal 4 } 
	{ particles_0_ce0 sc_out sc_logic 1 signal 4 } 
	{ particles_0_we0 sc_out sc_logic 1 signal 4 } 
	{ particles_0_d0 sc_out sc_lv 32 signal 4 } 
	{ particles_0_q0 sc_in sc_lv 32 signal 4 } 
	{ particles_0_address1 sc_out sc_lv 13 signal 4 } 
	{ particles_0_ce1 sc_out sc_logic 1 signal 4 } 
	{ particles_0_we1 sc_out sc_logic 1 signal 4 } 
	{ particles_0_d1 sc_out sc_lv 32 signal 4 } 
	{ particles_1_address0 sc_out sc_lv 13 signal 5 } 
	{ particles_1_ce0 sc_out sc_logic 1 signal 5 } 
	{ particles_1_we0 sc_out sc_logic 1 signal 5 } 
	{ particles_1_d0 sc_out sc_lv 32 signal 5 } 
	{ particles_1_q0 sc_in sc_lv 32 signal 5 } 
	{ particles_1_address1 sc_out sc_lv 13 signal 5 } 
	{ particles_1_ce1 sc_out sc_logic 1 signal 5 } 
	{ particles_1_we1 sc_out sc_logic 1 signal 5 } 
	{ particles_1_d1 sc_out sc_lv 32 signal 5 } 
	{ particles_temp_0_address0 sc_out sc_lv 13 signal 6 } 
	{ particles_temp_0_ce0 sc_out sc_logic 1 signal 6 } 
	{ particles_temp_0_we0 sc_out sc_logic 1 signal 6 } 
	{ particles_temp_0_d0 sc_out sc_lv 32 signal 6 } 
	{ particles_temp_0_q0 sc_in sc_lv 32 signal 6 } 
	{ particles_temp_0_address1 sc_out sc_lv 13 signal 6 } 
	{ particles_temp_0_ce1 sc_out sc_logic 1 signal 6 } 
	{ particles_temp_0_we1 sc_out sc_logic 1 signal 6 } 
	{ particles_temp_0_d1 sc_out sc_lv 32 signal 6 } 
	{ particles_temp_0_q1 sc_in sc_lv 32 signal 6 } 
	{ particles_temp_1_address0 sc_out sc_lv 13 signal 7 } 
	{ particles_temp_1_ce0 sc_out sc_logic 1 signal 7 } 
	{ particles_temp_1_we0 sc_out sc_logic 1 signal 7 } 
	{ particles_temp_1_d0 sc_out sc_lv 32 signal 7 } 
	{ particles_temp_1_q0 sc_in sc_lv 32 signal 7 } 
	{ particles_temp_1_address1 sc_out sc_lv 13 signal 7 } 
	{ particles_temp_1_ce1 sc_out sc_logic 1 signal 7 } 
	{ particles_temp_1_we1 sc_out sc_logic 1 signal 7 } 
	{ particles_temp_1_d1 sc_out sc_lv 32 signal 7 } 
	{ log_lik_particle_0_address0 sc_out sc_lv 13 signal 8 } 
	{ log_lik_particle_0_ce0 sc_out sc_logic 1 signal 8 } 
	{ log_lik_particle_0_we0 sc_out sc_logic 1 signal 8 } 
	{ log_lik_particle_0_d0 sc_out sc_lv 32 signal 8 } 
	{ log_lik_particle_0_q0 sc_in sc_lv 32 signal 8 } 
	{ log_lik_particle_0_address1 sc_out sc_lv 13 signal 8 } 
	{ log_lik_particle_0_ce1 sc_out sc_logic 1 signal 8 } 
	{ log_lik_particle_0_we1 sc_out sc_logic 1 signal 8 } 
	{ log_lik_particle_0_d1 sc_out sc_lv 32 signal 8 } 
	{ log_lik_particle_1_address0 sc_out sc_lv 13 signal 9 } 
	{ log_lik_particle_1_ce0 sc_out sc_logic 1 signal 9 } 
	{ log_lik_particle_1_we0 sc_out sc_logic 1 signal 9 } 
	{ log_lik_particle_1_d0 sc_out sc_lv 32 signal 9 } 
	{ log_lik_particle_1_q0 sc_in sc_lv 32 signal 9 } 
	{ log_lik_particle_1_address1 sc_out sc_lv 13 signal 9 } 
	{ log_lik_particle_1_ce1 sc_out sc_logic 1 signal 9 } 
	{ log_lik_particle_1_we1 sc_out sc_logic 1 signal 9 } 
	{ log_lik_particle_1_d1 sc_out sc_lv 32 signal 9 } 
	{ weights_0_address0 sc_out sc_lv 13 signal 10 } 
	{ weights_0_ce0 sc_out sc_logic 1 signal 10 } 
	{ weights_0_we0 sc_out sc_logic 1 signal 10 } 
	{ weights_0_d0 sc_out sc_lv 32 signal 10 } 
	{ weights_0_q0 sc_in sc_lv 32 signal 10 } 
	{ weights_1_address0 sc_out sc_lv 13 signal 11 } 
	{ weights_1_ce0 sc_out sc_logic 1 signal 11 } 
	{ weights_1_we0 sc_out sc_logic 1 signal 11 } 
	{ weights_1_d0 sc_out sc_lv 32 signal 11 } 
	{ weights_1_q0 sc_in sc_lv 32 signal 11 } 
	{ weights_partial_sums_0_read sc_in sc_lv 32 signal 12 } 
	{ weights_partial_sums_1_read sc_in sc_lv 32 signal 13 } 
	{ replication_factors_0_address0 sc_out sc_lv 13 signal 14 } 
	{ replication_factors_0_ce0 sc_out sc_logic 1 signal 14 } 
	{ replication_factors_0_we0 sc_out sc_logic 1 signal 14 } 
	{ replication_factors_0_d0 sc_out sc_lv 16 signal 14 } 
	{ replication_factors_0_q0 sc_in sc_lv 16 signal 14 } 
	{ replication_factors_0_address1 sc_out sc_lv 13 signal 14 } 
	{ replication_factors_0_ce1 sc_out sc_logic 1 signal 14 } 
	{ replication_factors_0_we1 sc_out sc_logic 1 signal 14 } 
	{ replication_factors_0_d1 sc_out sc_lv 16 signal 14 } 
	{ replication_factors_1_address0 sc_out sc_lv 13 signal 15 } 
	{ replication_factors_1_ce0 sc_out sc_logic 1 signal 15 } 
	{ replication_factors_1_we0 sc_out sc_logic 1 signal 15 } 
	{ replication_factors_1_d0 sc_out sc_lv 16 signal 15 } 
	{ replication_factors_1_q0 sc_in sc_lv 16 signal 15 } 
	{ replication_factors_1_address1 sc_out sc_lv 13 signal 15 } 
	{ replication_factors_1_ce1 sc_out sc_logic 1 signal 15 } 
	{ replication_factors_1_we1 sc_out sc_logic 1 signal 15 } 
	{ replication_factors_1_d1 sc_out sc_lv 16 signal 15 } 
	{ state_count sc_in sc_lv 32 signal 16 } 
	{ state_param_fixed_dim sc_in sc_lv 32 signal 17 } 
	{ state_parameters_address0 sc_out sc_lv 15 signal 18 } 
	{ state_parameters_ce0 sc_out sc_logic 1 signal 18 } 
	{ state_parameters_q0 sc_in sc_lv 32 signal 18 } 
	{ state_parameters_address1 sc_out sc_lv 15 signal 18 } 
	{ state_parameters_ce1 sc_out sc_logic 1 signal 18 } 
	{ state_parameters_q1 sc_in sc_lv 32 signal 18 } 
	{ obs_parameters_fixed_address0 sc_out sc_lv 16 signal 19 } 
	{ obs_parameters_fixed_ce0 sc_out sc_logic 1 signal 19 } 
	{ obs_parameters_fixed_q0 sc_in sc_lv 32 signal 19 } 
	{ obs_parameters_rand_0_read sc_in sc_lv 32 signal 20 } 
	{ data_address0 sc_out sc_lv 16 signal 21 } 
	{ data_ce0 sc_out sc_logic 1 signal 21 } 
	{ data_q0 sc_in sc_lv 32 signal 21 } 
	{ rng_state_0_s1_read sc_in sc_lv 32 signal 22 } 
	{ rng_state_1_s1_read sc_in sc_lv 32 signal 23 } 
	{ rng_state_2_s1_read sc_in sc_lv 32 signal 24 } 
	{ rng_state_3_s1_read sc_in sc_lv 32 signal 25 } 
	{ rng_state_4_s1_read sc_in sc_lv 32 signal 26 } 
	{ rng_state_5_s1_read sc_in sc_lv 32 signal 27 } 
	{ rng_state_6_s1_read sc_in sc_lv 32 signal 28 } 
	{ rng_state_7_s1_read sc_in sc_lv 32 signal 29 } 
	{ rng_state_8_s1_read sc_in sc_lv 32 signal 30 } 
	{ rng_state_9_s1_read sc_in sc_lv 32 signal 31 } 
	{ rng_state_10_s1_read sc_in sc_lv 32 signal 32 } 
	{ rng_state_11_s1_read sc_in sc_lv 32 signal 33 } 
	{ rng_state_12_s1_read sc_in sc_lv 32 signal 34 } 
	{ rng_state_13_s1_read sc_in sc_lv 32 signal 35 } 
	{ rng_state_14_s1_read sc_in sc_lv 32 signal 36 } 
	{ rng_state_15_s1_read sc_in sc_lv 32 signal 37 } 
	{ rng_state_16_s1_read sc_in sc_lv 32 signal 38 } 
	{ rng_state_17_s1_read sc_in sc_lv 32 signal 39 } 
	{ rng_state_18_s1_read sc_in sc_lv 32 signal 40 } 
	{ rng_state_19_s1_read sc_in sc_lv 32 signal 41 } 
	{ rng_state_20_s1_read sc_in sc_lv 32 signal 42 } 
	{ rng_state_0_s2_read sc_in sc_lv 32 signal 43 } 
	{ rng_state_1_s2_read sc_in sc_lv 32 signal 44 } 
	{ rng_state_2_s2_read sc_in sc_lv 32 signal 45 } 
	{ rng_state_3_s2_read sc_in sc_lv 32 signal 46 } 
	{ rng_state_4_s2_read sc_in sc_lv 32 signal 47 } 
	{ rng_state_5_s2_read sc_in sc_lv 32 signal 48 } 
	{ rng_state_6_s2_read sc_in sc_lv 32 signal 49 } 
	{ rng_state_7_s2_read sc_in sc_lv 32 signal 50 } 
	{ rng_state_8_s2_read sc_in sc_lv 32 signal 51 } 
	{ rng_state_9_s2_read sc_in sc_lv 32 signal 52 } 
	{ rng_state_10_s2_read sc_in sc_lv 32 signal 53 } 
	{ rng_state_11_s2_read sc_in sc_lv 32 signal 54 } 
	{ rng_state_12_s2_read sc_in sc_lv 32 signal 55 } 
	{ rng_state_13_s2_read sc_in sc_lv 32 signal 56 } 
	{ rng_state_14_s2_read sc_in sc_lv 32 signal 57 } 
	{ rng_state_15_s2_read sc_in sc_lv 32 signal 58 } 
	{ rng_state_16_s2_read sc_in sc_lv 32 signal 59 } 
	{ rng_state_17_s2_read sc_in sc_lv 32 signal 60 } 
	{ rng_state_18_s2_read sc_in sc_lv 32 signal 61 } 
	{ rng_state_19_s2_read sc_in sc_lv 32 signal 62 } 
	{ rng_state_20_s2_read sc_in sc_lv 32 signal 63 } 
	{ rng_state_0_s3_read sc_in sc_lv 32 signal 64 } 
	{ rng_state_1_s3_read sc_in sc_lv 32 signal 65 } 
	{ rng_state_2_s3_read sc_in sc_lv 32 signal 66 } 
	{ rng_state_3_s3_read sc_in sc_lv 32 signal 67 } 
	{ rng_state_4_s3_read sc_in sc_lv 32 signal 68 } 
	{ rng_state_5_s3_read sc_in sc_lv 32 signal 69 } 
	{ rng_state_6_s3_read sc_in sc_lv 32 signal 70 } 
	{ rng_state_7_s3_read sc_in sc_lv 32 signal 71 } 
	{ rng_state_8_s3_read sc_in sc_lv 32 signal 72 } 
	{ rng_state_9_s3_read sc_in sc_lv 32 signal 73 } 
	{ rng_state_10_s3_read sc_in sc_lv 32 signal 74 } 
	{ rng_state_11_s3_read sc_in sc_lv 32 signal 75 } 
	{ rng_state_12_s3_read sc_in sc_lv 32 signal 76 } 
	{ rng_state_13_s3_read sc_in sc_lv 32 signal 77 } 
	{ rng_state_14_s3_read sc_in sc_lv 32 signal 78 } 
	{ rng_state_15_s3_read sc_in sc_lv 32 signal 79 } 
	{ rng_state_16_s3_read sc_in sc_lv 32 signal 80 } 
	{ rng_state_17_s3_read sc_in sc_lv 32 signal 81 } 
	{ rng_state_18_s3_read sc_in sc_lv 32 signal 82 } 
	{ rng_state_19_s3_read sc_in sc_lv 32 signal 83 } 
	{ rng_state_20_s3_read sc_in sc_lv 32 signal 84 } 
	{ rng_state_0_offset_read sc_in sc_lv 32 signal 85 } 
	{ rng_state_1_offset_read sc_in sc_lv 32 signal 86 } 
	{ rng_state_2_offset_read sc_in sc_lv 32 signal 87 } 
	{ rng_state_3_offset_read sc_in sc_lv 32 signal 88 } 
	{ rng_state_4_offset_read sc_in sc_lv 32 signal 89 } 
	{ rng_state_5_offset_read sc_in sc_lv 32 signal 90 } 
	{ rng_state_6_offset_read sc_in sc_lv 32 signal 91 } 
	{ rng_state_7_offset_read sc_in sc_lv 32 signal 92 } 
	{ rng_state_8_offset_read sc_in sc_lv 32 signal 93 } 
	{ rng_state_9_offset_read sc_in sc_lv 32 signal 94 } 
	{ rng_state_10_offset_read sc_in sc_lv 32 signal 95 } 
	{ rng_state_11_offset_read sc_in sc_lv 32 signal 96 } 
	{ rng_state_12_offset_read sc_in sc_lv 32 signal 97 } 
	{ rng_state_13_offset_read sc_in sc_lv 32 signal 98 } 
	{ rng_state_14_offset_read sc_in sc_lv 32 signal 99 } 
	{ rng_state_15_offset_read sc_in sc_lv 32 signal 100 } 
	{ rng_state_16_offset_read sc_in sc_lv 32 signal 101 } 
	{ rng_state_17_offset_read sc_in sc_lv 32 signal 102 } 
	{ rng_state_18_offset_read sc_in sc_lv 32 signal 103 } 
	{ rng_state_19_offset_read sc_in sc_lv 32 signal 104 } 
	{ rng_state_20_offset_read sc_in sc_lv 32 signal 105 } 
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
	{ ap_return_11 sc_out sc_lv 32 signal -1 } 
	{ ap_return_12 sc_out sc_lv 32 signal -1 } 
	{ ap_return_13 sc_out sc_lv 32 signal -1 } 
	{ ap_return_14 sc_out sc_lv 32 signal -1 } 
	{ ap_return_15 sc_out sc_lv 32 signal -1 } 
	{ ap_return_16 sc_out sc_lv 32 signal -1 } 
	{ ap_return_17 sc_out sc_lv 32 signal -1 } 
	{ ap_return_18 sc_out sc_lv 32 signal -1 } 
	{ ap_return_19 sc_out sc_lv 32 signal -1 } 
	{ ap_return_20 sc_out sc_lv 32 signal -1 } 
	{ ap_return_21 sc_out sc_lv 32 signal -1 } 
	{ ap_return_22 sc_out sc_lv 32 signal -1 } 
	{ ap_return_23 sc_out sc_lv 32 signal -1 } 
	{ ap_return_24 sc_out sc_lv 32 signal -1 } 
	{ ap_return_25 sc_out sc_lv 32 signal -1 } 
	{ ap_return_26 sc_out sc_lv 32 signal -1 } 
	{ ap_return_27 sc_out sc_lv 32 signal -1 } 
	{ ap_return_28 sc_out sc_lv 32 signal -1 } 
	{ ap_return_29 sc_out sc_lv 32 signal -1 } 
	{ ap_return_30 sc_out sc_lv 32 signal -1 } 
	{ ap_return_31 sc_out sc_lv 32 signal -1 } 
	{ ap_return_32 sc_out sc_lv 32 signal -1 } 
	{ ap_return_33 sc_out sc_lv 32 signal -1 } 
	{ ap_return_34 sc_out sc_lv 32 signal -1 } 
	{ ap_return_35 sc_out sc_lv 32 signal -1 } 
	{ ap_return_36 sc_out sc_lv 32 signal -1 } 
	{ ap_return_37 sc_out sc_lv 32 signal -1 } 
	{ ap_return_38 sc_out sc_lv 32 signal -1 } 
	{ ap_return_39 sc_out sc_lv 32 signal -1 } 
	{ ap_return_40 sc_out sc_lv 32 signal -1 } 
	{ ap_return_41 sc_out sc_lv 32 signal -1 } 
	{ ap_return_42 sc_out sc_lv 32 signal -1 } 
	{ ap_return_43 sc_out sc_lv 32 signal -1 } 
	{ ap_return_44 sc_out sc_lv 32 signal -1 } 
	{ ap_return_45 sc_out sc_lv 32 signal -1 } 
	{ ap_return_46 sc_out sc_lv 32 signal -1 } 
	{ ap_return_47 sc_out sc_lv 32 signal -1 } 
	{ ap_return_48 sc_out sc_lv 32 signal -1 } 
	{ ap_return_49 sc_out sc_lv 32 signal -1 } 
	{ ap_return_50 sc_out sc_lv 32 signal -1 } 
	{ ap_return_51 sc_out sc_lv 32 signal -1 } 
	{ ap_return_52 sc_out sc_lv 32 signal -1 } 
	{ ap_return_53 sc_out sc_lv 32 signal -1 } 
	{ ap_return_54 sc_out sc_lv 32 signal -1 } 
	{ ap_return_55 sc_out sc_lv 32 signal -1 } 
	{ ap_return_56 sc_out sc_lv 32 signal -1 } 
	{ ap_return_57 sc_out sc_lv 32 signal -1 } 
	{ ap_return_58 sc_out sc_lv 32 signal -1 } 
	{ ap_return_59 sc_out sc_lv 32 signal -1 } 
	{ ap_return_60 sc_out sc_lv 32 signal -1 } 
	{ ap_return_61 sc_out sc_lv 32 signal -1 } 
	{ ap_return_62 sc_out sc_lv 32 signal -1 } 
	{ ap_return_63 sc_out sc_lv 32 signal -1 } 
	{ ap_return_64 sc_out sc_lv 32 signal -1 } 
	{ ap_return_65 sc_out sc_lv 32 signal -1 } 
	{ ap_return_66 sc_out sc_lv 32 signal -1 } 
	{ ap_return_67 sc_out sc_lv 32 signal -1 } 
	{ ap_return_68 sc_out sc_lv 32 signal -1 } 
	{ ap_return_69 sc_out sc_lv 32 signal -1 } 
	{ ap_return_70 sc_out sc_lv 32 signal -1 } 
	{ ap_return_71 sc_out sc_lv 32 signal -1 } 
	{ ap_return_72 sc_out sc_lv 32 signal -1 } 
	{ ap_return_73 sc_out sc_lv 32 signal -1 } 
	{ ap_return_74 sc_out sc_lv 32 signal -1 } 
	{ ap_return_75 sc_out sc_lv 32 signal -1 } 
	{ ap_return_76 sc_out sc_lv 32 signal -1 } 
	{ ap_return_77 sc_out sc_lv 32 signal -1 } 
	{ ap_return_78 sc_out sc_lv 32 signal -1 } 
	{ ap_return_79 sc_out sc_lv 32 signal -1 } 
	{ ap_return_80 sc_out sc_lv 32 signal -1 } 
	{ ap_return_81 sc_out sc_lv 32 signal -1 } 
	{ ap_return_82 sc_out sc_lv 32 signal -1 } 
	{ ap_return_83 sc_out sc_lv 32 signal -1 } 
	{ ap_return_84 sc_out sc_lv 32 signal -1 } 
	{ ap_return_85 sc_out sc_lv 32 signal -1 } 
	{ ap_return_86 sc_out sc_lv 32 signal -1 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "particles_saved_out_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "particles_saved_out", "role": "address0" }} , 
 	{ "name": "particles_saved_out_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_saved_out", "role": "ce0" }} , 
 	{ "name": "particles_saved_out_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_saved_out", "role": "we0" }} , 
 	{ "name": "particles_saved_out_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_saved_out", "role": "d0" }} , 
 	{ "name": "P", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "P", "role": "default" }} , 
 	{ "name": "init_particles_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "init_particles_0", "role": "address0" }} , 
 	{ "name": "init_particles_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "init_particles_0", "role": "ce0" }} , 
 	{ "name": "init_particles_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "init_particles_0", "role": "q0" }} , 
 	{ "name": "init_particles_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "init_particles_1", "role": "address0" }} , 
 	{ "name": "init_particles_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "init_particles_1", "role": "ce0" }} , 
 	{ "name": "init_particles_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "init_particles_1", "role": "q0" }} , 
 	{ "name": "particles_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_0", "role": "address0" }} , 
 	{ "name": "particles_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_0", "role": "ce0" }} , 
 	{ "name": "particles_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_0", "role": "we0" }} , 
 	{ "name": "particles_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_0", "role": "d0" }} , 
 	{ "name": "particles_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_0", "role": "q0" }} , 
 	{ "name": "particles_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_0", "role": "address1" }} , 
 	{ "name": "particles_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_0", "role": "ce1" }} , 
 	{ "name": "particles_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_0", "role": "we1" }} , 
 	{ "name": "particles_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_0", "role": "d1" }} , 
 	{ "name": "particles_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_1", "role": "address0" }} , 
 	{ "name": "particles_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_1", "role": "ce0" }} , 
 	{ "name": "particles_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_1", "role": "we0" }} , 
 	{ "name": "particles_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_1", "role": "d0" }} , 
 	{ "name": "particles_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_1", "role": "q0" }} , 
 	{ "name": "particles_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_1", "role": "address1" }} , 
 	{ "name": "particles_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_1", "role": "ce1" }} , 
 	{ "name": "particles_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_1", "role": "we1" }} , 
 	{ "name": "particles_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_1", "role": "d1" }} , 
 	{ "name": "particles_temp_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "address0" }} , 
 	{ "name": "particles_temp_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "ce0" }} , 
 	{ "name": "particles_temp_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "we0" }} , 
 	{ "name": "particles_temp_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "d0" }} , 
 	{ "name": "particles_temp_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "q0" }} , 
 	{ "name": "particles_temp_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "address1" }} , 
 	{ "name": "particles_temp_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "ce1" }} , 
 	{ "name": "particles_temp_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "we1" }} , 
 	{ "name": "particles_temp_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "d1" }} , 
 	{ "name": "particles_temp_0_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_temp_0", "role": "q1" }} , 
 	{ "name": "particles_temp_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "address0" }} , 
 	{ "name": "particles_temp_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "ce0" }} , 
 	{ "name": "particles_temp_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "we0" }} , 
 	{ "name": "particles_temp_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "d0" }} , 
 	{ "name": "particles_temp_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "q0" }} , 
 	{ "name": "particles_temp_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "address1" }} , 
 	{ "name": "particles_temp_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "ce1" }} , 
 	{ "name": "particles_temp_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "we1" }} , 
 	{ "name": "particles_temp_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "particles_temp_1", "role": "d1" }} , 
 	{ "name": "log_lik_particle_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "address0" }} , 
 	{ "name": "log_lik_particle_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "ce0" }} , 
 	{ "name": "log_lik_particle_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "we0" }} , 
 	{ "name": "log_lik_particle_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "d0" }} , 
 	{ "name": "log_lik_particle_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "q0" }} , 
 	{ "name": "log_lik_particle_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "address1" }} , 
 	{ "name": "log_lik_particle_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "ce1" }} , 
 	{ "name": "log_lik_particle_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "we1" }} , 
 	{ "name": "log_lik_particle_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "log_lik_particle_0", "role": "d1" }} , 
 	{ "name": "log_lik_particle_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "address0" }} , 
 	{ "name": "log_lik_particle_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "ce0" }} , 
 	{ "name": "log_lik_particle_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "we0" }} , 
 	{ "name": "log_lik_particle_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "d0" }} , 
 	{ "name": "log_lik_particle_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "q0" }} , 
 	{ "name": "log_lik_particle_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "address1" }} , 
 	{ "name": "log_lik_particle_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "ce1" }} , 
 	{ "name": "log_lik_particle_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "we1" }} , 
 	{ "name": "log_lik_particle_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "log_lik_particle_1", "role": "d1" }} , 
 	{ "name": "weights_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "weights_0", "role": "address0" }} , 
 	{ "name": "weights_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_0", "role": "ce0" }} , 
 	{ "name": "weights_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_0", "role": "we0" }} , 
 	{ "name": "weights_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_0", "role": "d0" }} , 
 	{ "name": "weights_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_0", "role": "q0" }} , 
 	{ "name": "weights_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "weights_1", "role": "address0" }} , 
 	{ "name": "weights_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_1", "role": "ce0" }} , 
 	{ "name": "weights_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "weights_1", "role": "we0" }} , 
 	{ "name": "weights_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_1", "role": "d0" }} , 
 	{ "name": "weights_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_1", "role": "q0" }} , 
 	{ "name": "weights_partial_sums_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_partial_sums_0_read", "role": "default" }} , 
 	{ "name": "weights_partial_sums_1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "weights_partial_sums_1_read", "role": "default" }} , 
 	{ "name": "replication_factors_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "address0" }} , 
 	{ "name": "replication_factors_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "ce0" }} , 
 	{ "name": "replication_factors_0_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "we0" }} , 
 	{ "name": "replication_factors_0_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "d0" }} , 
 	{ "name": "replication_factors_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "q0" }} , 
 	{ "name": "replication_factors_0_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "address1" }} , 
 	{ "name": "replication_factors_0_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "ce1" }} , 
 	{ "name": "replication_factors_0_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "we1" }} , 
 	{ "name": "replication_factors_0_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "replication_factors_0", "role": "d1" }} , 
 	{ "name": "replication_factors_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "address0" }} , 
 	{ "name": "replication_factors_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "ce0" }} , 
 	{ "name": "replication_factors_1_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "we0" }} , 
 	{ "name": "replication_factors_1_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "d0" }} , 
 	{ "name": "replication_factors_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "q0" }} , 
 	{ "name": "replication_factors_1_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "address1" }} , 
 	{ "name": "replication_factors_1_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "ce1" }} , 
 	{ "name": "replication_factors_1_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "we1" }} , 
 	{ "name": "replication_factors_1_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":16, "type": "signal", "bundle":{"name": "replication_factors_1", "role": "d1" }} , 
 	{ "name": "state_count", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "state_count", "role": "default" }} , 
 	{ "name": "state_param_fixed_dim", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "state_param_fixed_dim", "role": "default" }} , 
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
 	{ "name": "rng_state_0_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_0_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_1_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_1_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_2_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_2_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_3_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_3_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_4_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_4_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_5_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_5_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_6_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_6_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_7_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_7_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_8_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_8_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_9_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_9_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_10_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_10_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_11_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_11_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_12_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_12_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_13_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_13_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_14_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_14_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_15_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_15_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_16_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_16_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_17_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_17_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_18_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_18_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_19_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_19_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_20_s1_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_20_s1_read", "role": "default" }} , 
 	{ "name": "rng_state_0_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_0_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_1_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_1_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_2_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_2_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_3_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_3_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_4_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_4_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_5_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_5_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_6_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_6_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_7_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_7_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_8_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_8_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_9_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_9_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_10_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_10_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_11_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_11_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_12_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_12_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_13_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_13_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_14_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_14_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_15_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_15_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_16_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_16_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_17_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_17_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_18_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_18_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_19_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_19_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_20_s2_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_20_s2_read", "role": "default" }} , 
 	{ "name": "rng_state_0_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_0_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_1_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_1_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_2_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_2_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_3_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_3_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_4_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_4_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_5_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_5_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_6_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_6_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_7_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_7_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_8_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_8_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_9_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_9_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_10_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_10_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_11_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_11_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_12_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_12_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_13_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_13_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_14_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_14_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_15_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_15_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_16_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_16_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_17_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_17_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_18_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_18_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_19_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_19_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_20_s3_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_20_s3_read", "role": "default" }} , 
 	{ "name": "rng_state_0_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_0_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_1_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_1_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_2_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_2_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_3_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_3_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_4_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_4_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_5_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_5_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_6_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_6_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_7_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_7_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_8_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_8_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_9_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_9_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_10_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_10_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_11_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_11_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_12_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_12_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_13_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_13_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_14_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_14_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_15_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_15_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_16_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_16_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_17_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_17_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_18_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_18_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_19_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_19_offset_read", "role": "default" }} , 
 	{ "name": "rng_state_20_offset_read", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "rng_state_20_offset_read", "role": "default" }} , 
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
 	{ "name": "ap_return_10", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_10", "role": "default" }} , 
 	{ "name": "ap_return_11", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_11", "role": "default" }} , 
 	{ "name": "ap_return_12", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_12", "role": "default" }} , 
 	{ "name": "ap_return_13", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_13", "role": "default" }} , 
 	{ "name": "ap_return_14", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_14", "role": "default" }} , 
 	{ "name": "ap_return_15", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_15", "role": "default" }} , 
 	{ "name": "ap_return_16", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_16", "role": "default" }} , 
 	{ "name": "ap_return_17", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_17", "role": "default" }} , 
 	{ "name": "ap_return_18", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_18", "role": "default" }} , 
 	{ "name": "ap_return_19", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_19", "role": "default" }} , 
 	{ "name": "ap_return_20", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_20", "role": "default" }} , 
 	{ "name": "ap_return_21", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_21", "role": "default" }} , 
 	{ "name": "ap_return_22", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_22", "role": "default" }} , 
 	{ "name": "ap_return_23", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_23", "role": "default" }} , 
 	{ "name": "ap_return_24", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_24", "role": "default" }} , 
 	{ "name": "ap_return_25", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_25", "role": "default" }} , 
 	{ "name": "ap_return_26", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_26", "role": "default" }} , 
 	{ "name": "ap_return_27", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_27", "role": "default" }} , 
 	{ "name": "ap_return_28", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_28", "role": "default" }} , 
 	{ "name": "ap_return_29", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_29", "role": "default" }} , 
 	{ "name": "ap_return_30", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_30", "role": "default" }} , 
 	{ "name": "ap_return_31", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_31", "role": "default" }} , 
 	{ "name": "ap_return_32", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_32", "role": "default" }} , 
 	{ "name": "ap_return_33", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_33", "role": "default" }} , 
 	{ "name": "ap_return_34", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_34", "role": "default" }} , 
 	{ "name": "ap_return_35", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_35", "role": "default" }} , 
 	{ "name": "ap_return_36", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_36", "role": "default" }} , 
 	{ "name": "ap_return_37", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_37", "role": "default" }} , 
 	{ "name": "ap_return_38", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_38", "role": "default" }} , 
 	{ "name": "ap_return_39", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_39", "role": "default" }} , 
 	{ "name": "ap_return_40", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_40", "role": "default" }} , 
 	{ "name": "ap_return_41", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_41", "role": "default" }} , 
 	{ "name": "ap_return_42", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_42", "role": "default" }} , 
 	{ "name": "ap_return_43", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_43", "role": "default" }} , 
 	{ "name": "ap_return_44", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_44", "role": "default" }} , 
 	{ "name": "ap_return_45", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_45", "role": "default" }} , 
 	{ "name": "ap_return_46", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_46", "role": "default" }} , 
 	{ "name": "ap_return_47", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_47", "role": "default" }} , 
 	{ "name": "ap_return_48", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_48", "role": "default" }} , 
 	{ "name": "ap_return_49", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_49", "role": "default" }} , 
 	{ "name": "ap_return_50", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_50", "role": "default" }} , 
 	{ "name": "ap_return_51", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_51", "role": "default" }} , 
 	{ "name": "ap_return_52", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_52", "role": "default" }} , 
 	{ "name": "ap_return_53", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_53", "role": "default" }} , 
 	{ "name": "ap_return_54", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_54", "role": "default" }} , 
 	{ "name": "ap_return_55", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_55", "role": "default" }} , 
 	{ "name": "ap_return_56", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_56", "role": "default" }} , 
 	{ "name": "ap_return_57", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_57", "role": "default" }} , 
 	{ "name": "ap_return_58", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_58", "role": "default" }} , 
 	{ "name": "ap_return_59", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_59", "role": "default" }} , 
 	{ "name": "ap_return_60", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_60", "role": "default" }} , 
 	{ "name": "ap_return_61", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_61", "role": "default" }} , 
 	{ "name": "ap_return_62", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_62", "role": "default" }} , 
 	{ "name": "ap_return_63", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_63", "role": "default" }} , 
 	{ "name": "ap_return_64", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_64", "role": "default" }} , 
 	{ "name": "ap_return_65", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_65", "role": "default" }} , 
 	{ "name": "ap_return_66", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_66", "role": "default" }} , 
 	{ "name": "ap_return_67", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_67", "role": "default" }} , 
 	{ "name": "ap_return_68", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_68", "role": "default" }} , 
 	{ "name": "ap_return_69", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_69", "role": "default" }} , 
 	{ "name": "ap_return_70", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_70", "role": "default" }} , 
 	{ "name": "ap_return_71", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_71", "role": "default" }} , 
 	{ "name": "ap_return_72", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_72", "role": "default" }} , 
 	{ "name": "ap_return_73", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_73", "role": "default" }} , 
 	{ "name": "ap_return_74", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_74", "role": "default" }} , 
 	{ "name": "ap_return_75", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_75", "role": "default" }} , 
 	{ "name": "ap_return_76", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_76", "role": "default" }} , 
 	{ "name": "ap_return_77", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_77", "role": "default" }} , 
 	{ "name": "ap_return_78", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_78", "role": "default" }} , 
 	{ "name": "ap_return_79", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_79", "role": "default" }} , 
 	{ "name": "ap_return_80", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_80", "role": "default" }} , 
 	{ "name": "ap_return_81", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_81", "role": "default" }} , 
 	{ "name": "ap_return_82", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_82", "role": "default" }} , 
 	{ "name": "ap_return_83", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_83", "role": "default" }} , 
 	{ "name": "ap_return_84", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_84", "role": "default" }} , 
 	{ "name": "ap_return_85", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_85", "role": "default" }} , 
 	{ "name": "ap_return_86", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "ap_return_86", "role": "default" }}  ]}
set Spec2ImplPortList { 
	particles_saved_out { ap_memory {  { particles_saved_out_address0 mem_address 1 15 }  { particles_saved_out_ce0 mem_ce 1 1 }  { particles_saved_out_we0 mem_we 1 1 }  { particles_saved_out_d0 mem_din 1 32 } } }
	P { ap_none {  { P in_data 0 32 } } }
	init_particles_0 { ap_memory {  { init_particles_0_address0 mem_address 1 13 }  { init_particles_0_ce0 mem_ce 1 1 }  { init_particles_0_q0 mem_dout 0 32 } } }
	init_particles_1 { ap_memory {  { init_particles_1_address0 mem_address 1 13 }  { init_particles_1_ce0 mem_ce 1 1 }  { init_particles_1_q0 mem_dout 0 32 } } }
	particles_0 { ap_memory {  { particles_0_address0 mem_address 1 13 }  { particles_0_ce0 mem_ce 1 1 }  { particles_0_we0 mem_we 1 1 }  { particles_0_d0 mem_din 1 32 }  { particles_0_q0 mem_dout 0 32 }  { particles_0_address1 mem_address 1 13 }  { particles_0_ce1 mem_ce 1 1 }  { particles_0_we1 mem_we 1 1 }  { particles_0_d1 mem_din 1 32 } } }
	particles_1 { ap_memory {  { particles_1_address0 mem_address 1 13 }  { particles_1_ce0 mem_ce 1 1 }  { particles_1_we0 mem_we 1 1 }  { particles_1_d0 mem_din 1 32 }  { particles_1_q0 mem_dout 0 32 }  { particles_1_address1 mem_address 1 13 }  { particles_1_ce1 mem_ce 1 1 }  { particles_1_we1 mem_we 1 1 }  { particles_1_d1 mem_din 1 32 } } }
	particles_temp_0 { ap_memory {  { particles_temp_0_address0 mem_address 1 13 }  { particles_temp_0_ce0 mem_ce 1 1 }  { particles_temp_0_we0 mem_we 1 1 }  { particles_temp_0_d0 mem_din 1 32 }  { particles_temp_0_q0 mem_dout 0 32 }  { particles_temp_0_address1 mem_address 1 13 }  { particles_temp_0_ce1 mem_ce 1 1 }  { particles_temp_0_we1 mem_we 1 1 }  { particles_temp_0_d1 mem_din 1 32 }  { particles_temp_0_q1 mem_dout 0 32 } } }
	particles_temp_1 { ap_memory {  { particles_temp_1_address0 mem_address 1 13 }  { particles_temp_1_ce0 mem_ce 1 1 }  { particles_temp_1_we0 mem_we 1 1 }  { particles_temp_1_d0 mem_din 1 32 }  { particles_temp_1_q0 mem_dout 0 32 }  { particles_temp_1_address1 mem_address 1 13 }  { particles_temp_1_ce1 mem_ce 1 1 }  { particles_temp_1_we1 mem_we 1 1 }  { particles_temp_1_d1 mem_din 1 32 } } }
	log_lik_particle_0 { ap_memory {  { log_lik_particle_0_address0 mem_address 1 13 }  { log_lik_particle_0_ce0 mem_ce 1 1 }  { log_lik_particle_0_we0 mem_we 1 1 }  { log_lik_particle_0_d0 mem_din 1 32 }  { log_lik_particle_0_q0 mem_dout 0 32 }  { log_lik_particle_0_address1 mem_address 1 13 }  { log_lik_particle_0_ce1 mem_ce 1 1 }  { log_lik_particle_0_we1 mem_we 1 1 }  { log_lik_particle_0_d1 mem_din 1 32 } } }
	log_lik_particle_1 { ap_memory {  { log_lik_particle_1_address0 mem_address 1 13 }  { log_lik_particle_1_ce0 mem_ce 1 1 }  { log_lik_particle_1_we0 mem_we 1 1 }  { log_lik_particle_1_d0 mem_din 1 32 }  { log_lik_particle_1_q0 mem_dout 0 32 }  { log_lik_particle_1_address1 mem_address 1 13 }  { log_lik_particle_1_ce1 mem_ce 1 1 }  { log_lik_particle_1_we1 mem_we 1 1 }  { log_lik_particle_1_d1 mem_din 1 32 } } }
	weights_0 { ap_memory {  { weights_0_address0 mem_address 1 13 }  { weights_0_ce0 mem_ce 1 1 }  { weights_0_we0 mem_we 1 1 }  { weights_0_d0 mem_din 1 32 }  { weights_0_q0 mem_dout 0 32 } } }
	weights_1 { ap_memory {  { weights_1_address0 mem_address 1 13 }  { weights_1_ce0 mem_ce 1 1 }  { weights_1_we0 mem_we 1 1 }  { weights_1_d0 mem_din 1 32 }  { weights_1_q0 mem_dout 0 32 } } }
	weights_partial_sums_0_read { ap_none {  { weights_partial_sums_0_read in_data 0 32 } } }
	weights_partial_sums_1_read { ap_none {  { weights_partial_sums_1_read in_data 0 32 } } }
	replication_factors_0 { ap_memory {  { replication_factors_0_address0 mem_address 1 13 }  { replication_factors_0_ce0 mem_ce 1 1 }  { replication_factors_0_we0 mem_we 1 1 }  { replication_factors_0_d0 mem_din 1 16 }  { replication_factors_0_q0 mem_dout 0 16 }  { replication_factors_0_address1 mem_address 1 13 }  { replication_factors_0_ce1 mem_ce 1 1 }  { replication_factors_0_we1 mem_we 1 1 }  { replication_factors_0_d1 mem_din 1 16 } } }
	replication_factors_1 { ap_memory {  { replication_factors_1_address0 mem_address 1 13 }  { replication_factors_1_ce0 mem_ce 1 1 }  { replication_factors_1_we0 mem_we 1 1 }  { replication_factors_1_d0 mem_din 1 16 }  { replication_factors_1_q0 mem_dout 0 16 }  { replication_factors_1_address1 mem_address 1 13 }  { replication_factors_1_ce1 mem_ce 1 1 }  { replication_factors_1_we1 mem_we 1 1 }  { replication_factors_1_d1 mem_din 1 16 } } }
	state_count { ap_none {  { state_count in_data 0 32 } } }
	state_param_fixed_dim { ap_none {  { state_param_fixed_dim in_data 0 32 } } }
	state_parameters { ap_memory {  { state_parameters_address0 mem_address 1 15 }  { state_parameters_ce0 mem_ce 1 1 }  { state_parameters_q0 mem_dout 0 32 }  { state_parameters_address1 mem_address 1 15 }  { state_parameters_ce1 mem_ce 1 1 }  { state_parameters_q1 mem_dout 0 32 } } }
	obs_parameters_fixed { ap_memory {  { obs_parameters_fixed_address0 mem_address 1 16 }  { obs_parameters_fixed_ce0 mem_ce 1 1 }  { obs_parameters_fixed_q0 mem_dout 0 32 } } }
	obs_parameters_rand_0_read { ap_none {  { obs_parameters_rand_0_read in_data 0 32 } } }
	data { ap_memory {  { data_address0 mem_address 1 16 }  { data_ce0 mem_ce 1 1 }  { data_q0 mem_dout 0 32 } } }
	rng_state_0_s1_read { ap_none {  { rng_state_0_s1_read in_data 0 32 } } }
	rng_state_1_s1_read { ap_none {  { rng_state_1_s1_read in_data 0 32 } } }
	rng_state_2_s1_read { ap_none {  { rng_state_2_s1_read in_data 0 32 } } }
	rng_state_3_s1_read { ap_none {  { rng_state_3_s1_read in_data 0 32 } } }
	rng_state_4_s1_read { ap_none {  { rng_state_4_s1_read in_data 0 32 } } }
	rng_state_5_s1_read { ap_none {  { rng_state_5_s1_read in_data 0 32 } } }
	rng_state_6_s1_read { ap_none {  { rng_state_6_s1_read in_data 0 32 } } }
	rng_state_7_s1_read { ap_none {  { rng_state_7_s1_read in_data 0 32 } } }
	rng_state_8_s1_read { ap_none {  { rng_state_8_s1_read in_data 0 32 } } }
	rng_state_9_s1_read { ap_none {  { rng_state_9_s1_read in_data 0 32 } } }
	rng_state_10_s1_read { ap_none {  { rng_state_10_s1_read in_data 0 32 } } }
	rng_state_11_s1_read { ap_none {  { rng_state_11_s1_read in_data 0 32 } } }
	rng_state_12_s1_read { ap_none {  { rng_state_12_s1_read in_data 0 32 } } }
	rng_state_13_s1_read { ap_none {  { rng_state_13_s1_read in_data 0 32 } } }
	rng_state_14_s1_read { ap_none {  { rng_state_14_s1_read in_data 0 32 } } }
	rng_state_15_s1_read { ap_none {  { rng_state_15_s1_read in_data 0 32 } } }
	rng_state_16_s1_read { ap_none {  { rng_state_16_s1_read in_data 0 32 } } }
	rng_state_17_s1_read { ap_none {  { rng_state_17_s1_read in_data 0 32 } } }
	rng_state_18_s1_read { ap_none {  { rng_state_18_s1_read in_data 0 32 } } }
	rng_state_19_s1_read { ap_none {  { rng_state_19_s1_read in_data 0 32 } } }
	rng_state_20_s1_read { ap_none {  { rng_state_20_s1_read in_data 0 32 } } }
	rng_state_0_s2_read { ap_none {  { rng_state_0_s2_read in_data 0 32 } } }
	rng_state_1_s2_read { ap_none {  { rng_state_1_s2_read in_data 0 32 } } }
	rng_state_2_s2_read { ap_none {  { rng_state_2_s2_read in_data 0 32 } } }
	rng_state_3_s2_read { ap_none {  { rng_state_3_s2_read in_data 0 32 } } }
	rng_state_4_s2_read { ap_none {  { rng_state_4_s2_read in_data 0 32 } } }
	rng_state_5_s2_read { ap_none {  { rng_state_5_s2_read in_data 0 32 } } }
	rng_state_6_s2_read { ap_none {  { rng_state_6_s2_read in_data 0 32 } } }
	rng_state_7_s2_read { ap_none {  { rng_state_7_s2_read in_data 0 32 } } }
	rng_state_8_s2_read { ap_none {  { rng_state_8_s2_read in_data 0 32 } } }
	rng_state_9_s2_read { ap_none {  { rng_state_9_s2_read in_data 0 32 } } }
	rng_state_10_s2_read { ap_none {  { rng_state_10_s2_read in_data 0 32 } } }
	rng_state_11_s2_read { ap_none {  { rng_state_11_s2_read in_data 0 32 } } }
	rng_state_12_s2_read { ap_none {  { rng_state_12_s2_read in_data 0 32 } } }
	rng_state_13_s2_read { ap_none {  { rng_state_13_s2_read in_data 0 32 } } }
	rng_state_14_s2_read { ap_none {  { rng_state_14_s2_read in_data 0 32 } } }
	rng_state_15_s2_read { ap_none {  { rng_state_15_s2_read in_data 0 32 } } }
	rng_state_16_s2_read { ap_none {  { rng_state_16_s2_read in_data 0 32 } } }
	rng_state_17_s2_read { ap_none {  { rng_state_17_s2_read in_data 0 32 } } }
	rng_state_18_s2_read { ap_none {  { rng_state_18_s2_read in_data 0 32 } } }
	rng_state_19_s2_read { ap_none {  { rng_state_19_s2_read in_data 0 32 } } }
	rng_state_20_s2_read { ap_none {  { rng_state_20_s2_read in_data 0 32 } } }
	rng_state_0_s3_read { ap_none {  { rng_state_0_s3_read in_data 0 32 } } }
	rng_state_1_s3_read { ap_none {  { rng_state_1_s3_read in_data 0 32 } } }
	rng_state_2_s3_read { ap_none {  { rng_state_2_s3_read in_data 0 32 } } }
	rng_state_3_s3_read { ap_none {  { rng_state_3_s3_read in_data 0 32 } } }
	rng_state_4_s3_read { ap_none {  { rng_state_4_s3_read in_data 0 32 } } }
	rng_state_5_s3_read { ap_none {  { rng_state_5_s3_read in_data 0 32 } } }
	rng_state_6_s3_read { ap_none {  { rng_state_6_s3_read in_data 0 32 } } }
	rng_state_7_s3_read { ap_none {  { rng_state_7_s3_read in_data 0 32 } } }
	rng_state_8_s3_read { ap_none {  { rng_state_8_s3_read in_data 0 32 } } }
	rng_state_9_s3_read { ap_none {  { rng_state_9_s3_read in_data 0 32 } } }
	rng_state_10_s3_read { ap_none {  { rng_state_10_s3_read in_data 0 32 } } }
	rng_state_11_s3_read { ap_none {  { rng_state_11_s3_read in_data 0 32 } } }
	rng_state_12_s3_read { ap_none {  { rng_state_12_s3_read in_data 0 32 } } }
	rng_state_13_s3_read { ap_none {  { rng_state_13_s3_read in_data 0 32 } } }
	rng_state_14_s3_read { ap_none {  { rng_state_14_s3_read in_data 0 32 } } }
	rng_state_15_s3_read { ap_none {  { rng_state_15_s3_read in_data 0 32 } } }
	rng_state_16_s3_read { ap_none {  { rng_state_16_s3_read in_data 0 32 } } }
	rng_state_17_s3_read { ap_none {  { rng_state_17_s3_read in_data 0 32 } } }
	rng_state_18_s3_read { ap_none {  { rng_state_18_s3_read in_data 0 32 } } }
	rng_state_19_s3_read { ap_none {  { rng_state_19_s3_read in_data 0 32 } } }
	rng_state_20_s3_read { ap_none {  { rng_state_20_s3_read in_data 0 32 } } }
	rng_state_0_offset_read { ap_none {  { rng_state_0_offset_read in_data 0 32 } } }
	rng_state_1_offset_read { ap_none {  { rng_state_1_offset_read in_data 0 32 } } }
	rng_state_2_offset_read { ap_none {  { rng_state_2_offset_read in_data 0 32 } } }
	rng_state_3_offset_read { ap_none {  { rng_state_3_offset_read in_data 0 32 } } }
	rng_state_4_offset_read { ap_none {  { rng_state_4_offset_read in_data 0 32 } } }
	rng_state_5_offset_read { ap_none {  { rng_state_5_offset_read in_data 0 32 } } }
	rng_state_6_offset_read { ap_none {  { rng_state_6_offset_read in_data 0 32 } } }
	rng_state_7_offset_read { ap_none {  { rng_state_7_offset_read in_data 0 32 } } }
	rng_state_8_offset_read { ap_none {  { rng_state_8_offset_read in_data 0 32 } } }
	rng_state_9_offset_read { ap_none {  { rng_state_9_offset_read in_data 0 32 } } }
	rng_state_10_offset_read { ap_none {  { rng_state_10_offset_read in_data 0 32 } } }
	rng_state_11_offset_read { ap_none {  { rng_state_11_offset_read in_data 0 32 } } }
	rng_state_12_offset_read { ap_none {  { rng_state_12_offset_read in_data 0 32 } } }
	rng_state_13_offset_read { ap_none {  { rng_state_13_offset_read in_data 0 32 } } }
	rng_state_14_offset_read { ap_none {  { rng_state_14_offset_read in_data 0 32 } } }
	rng_state_15_offset_read { ap_none {  { rng_state_15_offset_read in_data 0 32 } } }
	rng_state_16_offset_read { ap_none {  { rng_state_16_offset_read in_data 0 32 } } }
	rng_state_17_offset_read { ap_none {  { rng_state_17_offset_read in_data 0 32 } } }
	rng_state_18_offset_read { ap_none {  { rng_state_18_offset_read in_data 0 32 } } }
	rng_state_19_offset_read { ap_none {  { rng_state_19_offset_read in_data 0 32 } } }
	rng_state_20_offset_read { ap_none {  { rng_state_20_offset_read in_data 0 32 } } }
}
