# This script segment is generated automatically by AutoPilot

set id 327
set name foo_fptrunc_64ns_32_3
set corename simcore_fptrunc
set op fptrunc
set stage_num 3
set registered_input 1
set in0_width 64
set in0_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fptrunc] == "ap_gen_simcore_fptrunc"} {
eval "ap_gen_simcore_fptrunc { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fptrunc, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fptrunc
set corename Double2Float
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 331
set name foo_dmul_64ns_64ns_64_9_max_dsp
set corename simcore_dmul
set op dmul
set stage_num 9
set registered_input 1
set impl_style max_dsp
set in0_width 64
set in0_signed 0
set in1_width 64
set in1_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_dmul] == "ap_gen_simcore_dmul"} {
eval "ap_gen_simcore_dmul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_dmul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op dmul
set corename DMul
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    registered_input ${registered_input} \
    style ${impl_style} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 332
set name foo_uitodp_32ns_64_7
set corename simcore_uitodp
set op uitodp
set stage_num 7
set registered_input 1
set in0_width 32
set in0_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_uitodp] == "ap_gen_simcore_uitodp"} {
eval "ap_gen_simcore_uitodp { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_uitodp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op uitodp
set corename Int2Double
if {${::AESL::PGuard_autocg_gen} && (${::AESL::PGuard_autocg_fpip} || ${::AESL::PGuard_autocg_fpv6en})} {
if {[info proc ::AESL_LIB_XILINX_FPV6::fpv6_gen] == "::AESL_LIB_XILINX_FPV6::fpv6_gen"} {
eval "::AESL_LIB_XILINX_FPV6::fpv6_gen { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    registered_input ${registered_input} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 333 \
    name current_mcmc_state \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename current_mcmc_state \
    op interface \
    ports { current_mcmc_state_address0 { O 15 vector } current_mcmc_state_ce0 { O 1 bit } current_mcmc_state_we0 { O 1 bit } current_mcmc_state_d0 { O 32 vector } current_mcmc_state_q0 { I 32 vector } current_mcmc_state_address1 { O 15 vector } current_mcmc_state_ce1 { O 1 bit } current_mcmc_state_we1 { O 1 bit } current_mcmc_state_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'current_mcmc_state'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 334 \
    name proposed_mcmc_state \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename proposed_mcmc_state \
    op interface \
    ports { proposed_mcmc_state_address0 { O 15 vector } proposed_mcmc_state_ce0 { O 1 bit } proposed_mcmc_state_we0 { O 1 bit } proposed_mcmc_state_d0 { O 32 vector } proposed_mcmc_state_q0 { I 32 vector } proposed_mcmc_state_address1 { O 15 vector } proposed_mcmc_state_ce1 { O 1 bit } proposed_mcmc_state_we1 { O 1 bit } proposed_mcmc_state_d1 { O 32 vector } proposed_mcmc_state_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'proposed_mcmc_state'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 346 \
    name prior_parameters \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename prior_parameters \
    op interface \
    ports { prior_parameters_address0 { O 3 vector } prior_parameters_ce0 { O 1 bit } prior_parameters_q0 { I 32 vector } prior_parameters_address1 { O 3 vector } prior_parameters_ce1 { O 1 bit } prior_parameters_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'prior_parameters'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 348 \
    name init_particles_0 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename init_particles_0 \
    op interface \
    ports { init_particles_0_address0 { O 13 vector } init_particles_0_ce0 { O 1 bit } init_particles_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'init_particles_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 349 \
    name init_particles_1 \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename init_particles_1 \
    op interface \
    ports { init_particles_1_address0 { O 13 vector } init_particles_1_ce0 { O 1 bit } init_particles_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'init_particles_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 350 \
    name particles_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename particles_0 \
    op interface \
    ports { particles_0_address0 { O 13 vector } particles_0_ce0 { O 1 bit } particles_0_we0 { O 1 bit } particles_0_d0 { O 32 vector } particles_0_q0 { I 32 vector } particles_0_address1 { O 13 vector } particles_0_ce1 { O 1 bit } particles_0_we1 { O 1 bit } particles_0_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'particles_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 351 \
    name particles_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename particles_1 \
    op interface \
    ports { particles_1_address0 { O 13 vector } particles_1_ce0 { O 1 bit } particles_1_we0 { O 1 bit } particles_1_d0 { O 32 vector } particles_1_q0 { I 32 vector } particles_1_address1 { O 13 vector } particles_1_ce1 { O 1 bit } particles_1_we1 { O 1 bit } particles_1_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'particles_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 352 \
    name particles_temp_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename particles_temp_0 \
    op interface \
    ports { particles_temp_0_address0 { O 13 vector } particles_temp_0_ce0 { O 1 bit } particles_temp_0_we0 { O 1 bit } particles_temp_0_d0 { O 32 vector } particles_temp_0_q0 { I 32 vector } particles_temp_0_address1 { O 13 vector } particles_temp_0_ce1 { O 1 bit } particles_temp_0_we1 { O 1 bit } particles_temp_0_d1 { O 32 vector } particles_temp_0_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'particles_temp_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 353 \
    name particles_temp_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename particles_temp_1 \
    op interface \
    ports { particles_temp_1_address0 { O 13 vector } particles_temp_1_ce0 { O 1 bit } particles_temp_1_we0 { O 1 bit } particles_temp_1_d0 { O 32 vector } particles_temp_1_q0 { I 32 vector } particles_temp_1_address1 { O 13 vector } particles_temp_1_ce1 { O 1 bit } particles_temp_1_we1 { O 1 bit } particles_temp_1_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'particles_temp_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 354 \
    name log_lik_particle_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename log_lik_particle_0 \
    op interface \
    ports { log_lik_particle_0_address0 { O 13 vector } log_lik_particle_0_ce0 { O 1 bit } log_lik_particle_0_we0 { O 1 bit } log_lik_particle_0_d0 { O 32 vector } log_lik_particle_0_q0 { I 32 vector } log_lik_particle_0_address1 { O 13 vector } log_lik_particle_0_ce1 { O 1 bit } log_lik_particle_0_we1 { O 1 bit } log_lik_particle_0_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'log_lik_particle_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 355 \
    name log_lik_particle_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename log_lik_particle_1 \
    op interface \
    ports { log_lik_particle_1_address0 { O 13 vector } log_lik_particle_1_ce0 { O 1 bit } log_lik_particle_1_we0 { O 1 bit } log_lik_particle_1_d0 { O 32 vector } log_lik_particle_1_q0 { I 32 vector } log_lik_particle_1_address1 { O 13 vector } log_lik_particle_1_ce1 { O 1 bit } log_lik_particle_1_we1 { O 1 bit } log_lik_particle_1_d1 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'log_lik_particle_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 356 \
    name weights_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename weights_0 \
    op interface \
    ports { weights_0_address0 { O 13 vector } weights_0_ce0 { O 1 bit } weights_0_we0 { O 1 bit } weights_0_d0 { O 32 vector } weights_0_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 357 \
    name weights_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename weights_1 \
    op interface \
    ports { weights_1_address0 { O 13 vector } weights_1_ce0 { O 1 bit } weights_1_we0 { O 1 bit } weights_1_d0 { O 32 vector } weights_1_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'weights_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 360 \
    name replication_factors_0 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename replication_factors_0 \
    op interface \
    ports { replication_factors_0_address0 { O 13 vector } replication_factors_0_ce0 { O 1 bit } replication_factors_0_we0 { O 1 bit } replication_factors_0_d0 { O 16 vector } replication_factors_0_q0 { I 16 vector } replication_factors_0_address1 { O 13 vector } replication_factors_0_ce1 { O 1 bit } replication_factors_0_we1 { O 1 bit } replication_factors_0_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'replication_factors_0'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 361 \
    name replication_factors_1 \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename replication_factors_1 \
    op interface \
    ports { replication_factors_1_address0 { O 13 vector } replication_factors_1_ce0 { O 1 bit } replication_factors_1_we0 { O 1 bit } replication_factors_1_d0 { O 16 vector } replication_factors_1_q0 { I 16 vector } replication_factors_1_address1 { O 13 vector } replication_factors_1_ce1 { O 1 bit } replication_factors_1_we1 { O 1 bit } replication_factors_1_d1 { O 16 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'replication_factors_1'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 363 \
    name state_parameters \
    reset_level 1 \
    sync_rst true \
    dir IO \
    corename state_parameters \
    op interface \
    ports { state_parameters_address0 { O 15 vector } state_parameters_ce0 { O 1 bit } state_parameters_we0 { O 1 bit } state_parameters_d0 { O 32 vector } state_parameters_q0 { I 32 vector } state_parameters_address1 { O 15 vector } state_parameters_ce1 { O 1 bit } state_parameters_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'state_parameters'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 364 \
    name obs_parameters_fixed \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename obs_parameters_fixed \
    op interface \
    ports { obs_parameters_fixed_address0 { O 16 vector } obs_parameters_fixed_ce0 { O 1 bit } obs_parameters_fixed_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'obs_parameters_fixed'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 365 \
    name data \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename data \
    op interface \
    ports { data_address0 { O 16 vector } data_ce0 { O 1 bit } data_q0 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'data'"
}
}


# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 335 \
    name current_mcmc_state_exp_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_current_mcmc_state_exp_0_read \
    op interface \
    ports { current_mcmc_state_exp_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 336 \
    name current_mcmc_state_exp_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_current_mcmc_state_exp_1_read \
    op interface \
    ports { current_mcmc_state_exp_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 337 \
    name proposed_mcmc_state_exp_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_proposed_mcmc_state_exp_0_read \
    op interface \
    ports { proposed_mcmc_state_exp_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 338 \
    name proposed_mcmc_state_exp_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_proposed_mcmc_state_exp_1_read \
    op interface \
    ports { proposed_mcmc_state_exp_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 339 \
    name iter \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_iter \
    op interface \
    ports { iter { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 340 \
    name initial_theta_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_initial_theta_0_read \
    op interface \
    ports { initial_theta_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 341 \
    name initial_theta_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_initial_theta_1_read \
    op interface \
    ports { initial_theta_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 342 \
    name rn_prop_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rn_prop_0_read \
    op interface \
    ports { rn_prop_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 343 \
    name rn_prop_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rn_prop_1_read \
    op interface \
    ports { rn_prop_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 344 \
    name cov_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_cov_0_read \
    op interface \
    ports { cov_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 345 \
    name cov_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_cov_1_read \
    op interface \
    ports { cov_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 347 \
    name P \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_P \
    op interface \
    ports { P { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 358 \
    name weights_partial_sums_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_partial_sums_0_read \
    op interface \
    ports { weights_partial_sums_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 359 \
    name weights_partial_sums_1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_weights_partial_sums_1_read \
    op interface \
    ports { weights_partial_sums_1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 362 \
    name state_count \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_state_count \
    op interface \
    ports { state_count { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 366 \
    name rng_state_0_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_0_s1_read \
    op interface \
    ports { rng_state_0_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 367 \
    name rng_state_1_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_1_s1_read \
    op interface \
    ports { rng_state_1_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 368 \
    name rng_state_2_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_2_s1_read \
    op interface \
    ports { rng_state_2_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 369 \
    name rng_state_3_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_3_s1_read \
    op interface \
    ports { rng_state_3_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 370 \
    name rng_state_4_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_4_s1_read \
    op interface \
    ports { rng_state_4_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 371 \
    name rng_state_5_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_5_s1_read \
    op interface \
    ports { rng_state_5_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 372 \
    name rng_state_6_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_6_s1_read \
    op interface \
    ports { rng_state_6_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 373 \
    name rng_state_7_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_7_s1_read \
    op interface \
    ports { rng_state_7_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 374 \
    name rng_state_8_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_8_s1_read \
    op interface \
    ports { rng_state_8_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 375 \
    name rng_state_9_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_9_s1_read \
    op interface \
    ports { rng_state_9_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 376 \
    name rng_state_10_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_10_s1_read \
    op interface \
    ports { rng_state_10_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 377 \
    name rng_state_11_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_11_s1_read \
    op interface \
    ports { rng_state_11_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 378 \
    name rng_state_12_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_12_s1_read \
    op interface \
    ports { rng_state_12_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 379 \
    name rng_state_13_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_13_s1_read \
    op interface \
    ports { rng_state_13_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 380 \
    name rng_state_14_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_14_s1_read \
    op interface \
    ports { rng_state_14_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 381 \
    name rng_state_15_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_15_s1_read \
    op interface \
    ports { rng_state_15_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 382 \
    name rng_state_16_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_16_s1_read \
    op interface \
    ports { rng_state_16_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 383 \
    name rng_state_17_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_17_s1_read \
    op interface \
    ports { rng_state_17_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 384 \
    name rng_state_18_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_18_s1_read \
    op interface \
    ports { rng_state_18_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 385 \
    name rng_state_19_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_19_s1_read \
    op interface \
    ports { rng_state_19_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 386 \
    name rng_state_20_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_20_s1_read \
    op interface \
    ports { rng_state_20_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 387 \
    name rng_state_21_s1_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_21_s1_read \
    op interface \
    ports { rng_state_21_s1_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 388 \
    name rng_state_0_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_0_s2_read \
    op interface \
    ports { rng_state_0_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 389 \
    name rng_state_1_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_1_s2_read \
    op interface \
    ports { rng_state_1_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 390 \
    name rng_state_2_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_2_s2_read \
    op interface \
    ports { rng_state_2_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 391 \
    name rng_state_3_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_3_s2_read \
    op interface \
    ports { rng_state_3_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 392 \
    name rng_state_4_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_4_s2_read \
    op interface \
    ports { rng_state_4_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 393 \
    name rng_state_5_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_5_s2_read \
    op interface \
    ports { rng_state_5_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 394 \
    name rng_state_6_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_6_s2_read \
    op interface \
    ports { rng_state_6_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 395 \
    name rng_state_7_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_7_s2_read \
    op interface \
    ports { rng_state_7_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 396 \
    name rng_state_8_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_8_s2_read \
    op interface \
    ports { rng_state_8_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 397 \
    name rng_state_9_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_9_s2_read \
    op interface \
    ports { rng_state_9_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 398 \
    name rng_state_10_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_10_s2_read \
    op interface \
    ports { rng_state_10_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 399 \
    name rng_state_11_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_11_s2_read \
    op interface \
    ports { rng_state_11_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 400 \
    name rng_state_12_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_12_s2_read \
    op interface \
    ports { rng_state_12_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 401 \
    name rng_state_13_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_13_s2_read \
    op interface \
    ports { rng_state_13_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 402 \
    name rng_state_14_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_14_s2_read \
    op interface \
    ports { rng_state_14_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 403 \
    name rng_state_15_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_15_s2_read \
    op interface \
    ports { rng_state_15_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 404 \
    name rng_state_16_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_16_s2_read \
    op interface \
    ports { rng_state_16_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 405 \
    name rng_state_17_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_17_s2_read \
    op interface \
    ports { rng_state_17_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 406 \
    name rng_state_18_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_18_s2_read \
    op interface \
    ports { rng_state_18_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 407 \
    name rng_state_19_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_19_s2_read \
    op interface \
    ports { rng_state_19_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 408 \
    name rng_state_20_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_20_s2_read \
    op interface \
    ports { rng_state_20_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 409 \
    name rng_state_21_s2_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_21_s2_read \
    op interface \
    ports { rng_state_21_s2_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 410 \
    name rng_state_0_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_0_s3_read \
    op interface \
    ports { rng_state_0_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 411 \
    name rng_state_1_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_1_s3_read \
    op interface \
    ports { rng_state_1_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 412 \
    name rng_state_2_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_2_s3_read \
    op interface \
    ports { rng_state_2_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 413 \
    name rng_state_3_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_3_s3_read \
    op interface \
    ports { rng_state_3_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 414 \
    name rng_state_4_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_4_s3_read \
    op interface \
    ports { rng_state_4_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 415 \
    name rng_state_5_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_5_s3_read \
    op interface \
    ports { rng_state_5_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 416 \
    name rng_state_6_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_6_s3_read \
    op interface \
    ports { rng_state_6_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 417 \
    name rng_state_7_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_7_s3_read \
    op interface \
    ports { rng_state_7_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 418 \
    name rng_state_8_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_8_s3_read \
    op interface \
    ports { rng_state_8_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 419 \
    name rng_state_9_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_9_s3_read \
    op interface \
    ports { rng_state_9_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 420 \
    name rng_state_10_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_10_s3_read \
    op interface \
    ports { rng_state_10_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 421 \
    name rng_state_11_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_11_s3_read \
    op interface \
    ports { rng_state_11_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 422 \
    name rng_state_12_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_12_s3_read \
    op interface \
    ports { rng_state_12_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 423 \
    name rng_state_13_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_13_s3_read \
    op interface \
    ports { rng_state_13_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 424 \
    name rng_state_14_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_14_s3_read \
    op interface \
    ports { rng_state_14_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 425 \
    name rng_state_15_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_15_s3_read \
    op interface \
    ports { rng_state_15_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 426 \
    name rng_state_16_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_16_s3_read \
    op interface \
    ports { rng_state_16_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 427 \
    name rng_state_17_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_17_s3_read \
    op interface \
    ports { rng_state_17_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 428 \
    name rng_state_18_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_18_s3_read \
    op interface \
    ports { rng_state_18_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 429 \
    name rng_state_19_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_19_s3_read \
    op interface \
    ports { rng_state_19_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 430 \
    name rng_state_20_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_20_s3_read \
    op interface \
    ports { rng_state_20_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 431 \
    name rng_state_21_s3_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_21_s3_read \
    op interface \
    ports { rng_state_21_s3_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 432 \
    name rng_state_0_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_0_offset_read \
    op interface \
    ports { rng_state_0_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 433 \
    name rng_state_1_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_1_offset_read \
    op interface \
    ports { rng_state_1_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 434 \
    name rng_state_2_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_2_offset_read \
    op interface \
    ports { rng_state_2_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 435 \
    name rng_state_3_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_3_offset_read \
    op interface \
    ports { rng_state_3_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 436 \
    name rng_state_4_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_4_offset_read \
    op interface \
    ports { rng_state_4_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 437 \
    name rng_state_5_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_5_offset_read \
    op interface \
    ports { rng_state_5_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name rng_state_6_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_6_offset_read \
    op interface \
    ports { rng_state_6_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name rng_state_7_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_7_offset_read \
    op interface \
    ports { rng_state_7_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 440 \
    name rng_state_8_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_8_offset_read \
    op interface \
    ports { rng_state_8_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 441 \
    name rng_state_9_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_9_offset_read \
    op interface \
    ports { rng_state_9_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 442 \
    name rng_state_10_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_10_offset_read \
    op interface \
    ports { rng_state_10_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 443 \
    name rng_state_11_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_11_offset_read \
    op interface \
    ports { rng_state_11_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 444 \
    name rng_state_12_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_12_offset_read \
    op interface \
    ports { rng_state_12_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 445 \
    name rng_state_13_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_13_offset_read \
    op interface \
    ports { rng_state_13_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 446 \
    name rng_state_14_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_14_offset_read \
    op interface \
    ports { rng_state_14_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 447 \
    name rng_state_15_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_15_offset_read \
    op interface \
    ports { rng_state_15_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name rng_state_16_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_16_offset_read \
    op interface \
    ports { rng_state_16_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name rng_state_17_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_17_offset_read \
    op interface \
    ports { rng_state_17_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 450 \
    name rng_state_18_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_18_offset_read \
    op interface \
    ports { rng_state_18_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 451 \
    name rng_state_19_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_19_offset_read \
    op interface \
    ports { rng_state_19_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 452 \
    name rng_state_20_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_20_offset_read \
    op interface \
    ports { rng_state_20_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 453 \
    name rng_state_21_offset_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_rng_state_21_offset_read \
    op interface \
    ports { rng_state_21_offset_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


