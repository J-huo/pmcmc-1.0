# This script segment is generated automatically by AutoPilot

set id 17
set name foo_faddfsub_32ns_32ns_32_8_full_dsp
set corename simcore_faddfsub
set op faddfsub
set stage_num 8
set registered_input 1
set impl_style full_dsp
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_faddfsub] == "ap_gen_simcore_faddfsub"} {
eval "ap_gen_simcore_faddfsub { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_faddfsub, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op faddfsub
set corename FAddSub
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


set id 35
set name foo_fsub_32ns_32ns_32_8_full_dsp
set corename simcore_fsub
set op fsub
set stage_num 8
set registered_input 1
set impl_style full_dsp
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fsub] == "ap_gen_simcore_fsub"} {
eval "ap_gen_simcore_fsub { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fsub, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fsub
set corename FAddSub
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


set id 107
set name foo_fdiv_32ns_32ns_32_16
set corename simcore_fdiv
set op fdiv
set stage_num 16
set registered_input 1
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fdiv] == "ap_gen_simcore_fdiv"} {
eval "ap_gen_simcore_fdiv { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fdiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fdiv
set corename FDiv
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 131
set name foo_fpext_32ns_64_3
set corename simcore_fpext
set op fpext
set stage_num 3
set registered_input 1
set in0_width 32
set in0_signed 0
set out_width 64
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fpext] == "ap_gen_simcore_fpext"} {
eval "ap_gen_simcore_fpext { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fpext, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fpext
set corename Float2Double
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


set id 133
set name foo_fcmp_32ns_32ns_1_3
set corename simcore_fcmp
set op fcmp
set stage_num 3
set registered_input 1
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 1
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fcmp] == "ap_gen_simcore_fcmp"} {
eval "ap_gen_simcore_fcmp { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fcmp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fcmp
set corename FCmp
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 176
set name foo_fsqrt_32ns_32ns_32_17
set corename simcore_fsqrt
set op fsqrt
set stage_num 17
set registered_input 1
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fsqrt] == "ap_gen_simcore_fsqrt"} {
eval "ap_gen_simcore_fsqrt { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fsqrt, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fsqrt
set corename FSqrt
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_XILINX_FPV6::fpv6_gen, check your platform lib"
}
}


set id 177
set name foo_flog_32ns_32ns_32_14_full_dsp
set corename simcore_flog
set op flog
set stage_num 14
set registered_input 1
set impl_style full_dsp
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_flog] == "ap_gen_simcore_flog"} {
eval "ap_gen_simcore_flog { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_flog, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op flog
set corename FLog
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


set id 193
set name foo_fexp_32ns_32ns_32_13_full_dsp
set corename simcore_fexp
set op fexp
set stage_num 13
set registered_input 1
set impl_style full_dsp
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_fexp] == "ap_gen_simcore_fexp"} {
eval "ap_gen_simcore_fexp { \
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
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_fexp, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op fexp
set corename FExp
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


set id 201
set name foo_mul_31ns_32s_32_6
set corename simcore_mul
set op mul
set stage_num 6
set registered_input 1
set in0_width 31
set in0_signed 0
set in1_width 32
set in1_signed 1
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename MulnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul] == "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul"} {
eval "::AESL_LIB_VIRTEX::xil_gen_multicycle_mul { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_multicycle_mul, check your platform lib"
}
}


set id 202
set name foo_udiv_32ns_32ns_32_35
set corename simcore_udiv
set op udiv
set stage_num 35
set registered_input 1
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_udiv] == "ap_gen_simcore_udiv"} {
eval "ap_gen_simcore_udiv { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_udiv, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op udiv
set corename DivnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


set id 203
set name foo_urem_32ns_32ns_32_35
set corename simcore_urem
set op urem
set stage_num 35
set registered_input 1
set in0_width 32
set in0_signed 0
set in1_width 32
set in1_signed 0
set out_width 32
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_urem] == "ap_gen_simcore_urem"} {
eval "ap_gen_simcore_urem { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_urem, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op urem
set corename DivnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_div] == "::AESL_LIB_VIRTEX::xil_gen_div"} {
eval "::AESL_LIB_VIRTEX::xil_gen_div { \
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
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    out_width ${out_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_div, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 204
set MemName particle_filter_mask_table9
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 23
set AddrRange 32
set AddrWd 5
set TrueReset 0
set IsROM 1
set ROMData { "01111111111111111111111" "00111111111111111111111" "00011111111111111111111" "00001111111111111111111" "00000111111111111111111" "00000011111111111111111" "00000001111111111111111" "00000000111111111111111" "00000000011111111111111" "00000000001111111111111" "00000000000111111111111" "00000000000011111111111" "00000000000001111111111" "00000000000000111111111" "00000000000000011111111" "00000000000000001111111" "00000000000000000111111" "00000000000000000011111" "00000000000000000001111" "00000000000000000000111" "00000000000000000000011" "00000000000000000000001" "00000000000000000000000" "00000000000000000000000" "00000000000000000000000" "00000000000000000000000" "00000000000000000000000" "00000000000000000000000" "00000000000000000000000" "00000000000000000000000" "11111111111111111111111" "11111111111111111111111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set DelayBudget 2.39
set ClkPeriod 6
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num 2 \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    reset_level 1 \
    sync_rst true \
    stage_num 2 \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
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
    id 205 \
    name particles_saved_out \
    reset_level 1 \
    sync_rst true \
    dir O \
    corename particles_saved_out \
    op interface \
    ports { particles_saved_out_address0 { O 15 vector } particles_saved_out_ce0 { O 1 bit } particles_saved_out_we0 { O 1 bit } particles_saved_out_d0 { O 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'particles_saved_out'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 207 \
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
    id 208 \
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
    id 209 \
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
    id 210 \
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
    id 211 \
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
    id 212 \
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
    id 213 \
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
    id 214 \
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
    id 215 \
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
    id 216 \
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
    id 219 \
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
    id 220 \
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
    id 223 \
    name state_parameters \
    reset_level 1 \
    sync_rst true \
    dir I \
    corename state_parameters \
    op interface \
    ports { state_parameters_address0 { O 15 vector } state_parameters_ce0 { O 1 bit } state_parameters_q0 { I 32 vector } state_parameters_address1 { O 15 vector } state_parameters_ce1 { O 1 bit } state_parameters_q1 { I 32 vector } } \
} "
} else {
puts "@W \[IMPL-110\] Cannot find bus interface model in the library. Ignored generation of bus interface for 'state_parameters'"
}
}


# XIL_BRAM:
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc ::AESL_LIB_XILADAPTER::xil_bram_gen] == "::AESL_LIB_XILADAPTER::xil_bram_gen"} {
eval "::AESL_LIB_XILADAPTER::xil_bram_gen { \
    id 224 \
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
    id 226 \
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
    id 206 \
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
    id 217 \
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
    id 218 \
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
    id 221 \
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
    id 222 \
    name state_param_fixed_dim \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_state_param_fixed_dim \
    op interface \
    ports { state_param_fixed_dim { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 225 \
    name obs_parameters_rand_0_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_obs_parameters_rand_0_read \
    op interface \
    ports { obs_parameters_rand_0_read { I 32 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 227 \
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
    id 228 \
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
    id 229 \
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
    id 230 \
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
    id 231 \
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
    id 232 \
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
    id 233 \
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
    id 234 \
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
    id 235 \
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
    id 236 \
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
    id 237 \
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
    id 238 \
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
    id 239 \
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
    id 240 \
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
    id 241 \
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
    id 242 \
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
    id 243 \
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
    id 244 \
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
    id 245 \
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
    id 246 \
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
    id 247 \
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
    id 248 \
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
    id 249 \
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
    id 250 \
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
    id 251 \
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
    id 252 \
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
    id 253 \
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
    id 254 \
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
    id 255 \
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
    id 256 \
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
    id 257 \
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
    id 258 \
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
    id 259 \
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
    id 260 \
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
    id 261 \
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
    id 262 \
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
    id 263 \
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
    id 264 \
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
    id 265 \
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
    id 266 \
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
    id 267 \
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
    id 268 \
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
    id 269 \
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
    id 270 \
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
    id 271 \
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
    id 272 \
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
    id 273 \
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
    id 274 \
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
    id 275 \
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
    id 276 \
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
    id 277 \
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
    id 278 \
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
    id 279 \
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
    id 280 \
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
    id 281 \
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
    id 282 \
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
    id 283 \
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
    id 284 \
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
    id 285 \
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
    id 286 \
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
    id 287 \
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
    id 288 \
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
    id 289 \
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
    id 290 \
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
    id 291 \
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
    id 292 \
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
    id 293 \
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
    id 294 \
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
    id 295 \
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
    id 296 \
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
    id 297 \
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
    id 298 \
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
    id 299 \
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
    id 300 \
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
    id 301 \
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
    id 302 \
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
    id 303 \
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
    id 304 \
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
    id 305 \
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
    id 306 \
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
    id 307 \
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
    id 308 \
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
    id 309 \
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
    id 310 \
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


