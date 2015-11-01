#include "foo.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void foo::thread_ap_done() {
    if ((esl_seteq<1,6,6>(ap_ST_st111_fsm_47, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_4107_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void foo::thread_ap_idle() {
    if ((!esl_seteq<1,1,1>(ap_const_logic_1, ap_start.read()) && 
         esl_seteq<1,6,6>(ap_ST_st1_fsm_0, ap_CS_fsm.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void foo::thread_ap_ready() {
    if ((esl_seteq<1,6,6>(ap_ST_st111_fsm_47, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_4107_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void foo::thread_ap_sig_bdd_1217() {
    ap_sig_bdd_1217 = (esl_seteq<1,1,1>(memory_inout_req_full_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond12_reg_6565_pp9_it1.read()));
}

void foo::thread_ap_sig_bdd_157() {
    ap_sig_bdd_157 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_reg_ppstg_exitcond3_reg_4642_pp0_it5.read(), ap_const_lv1_0));
}

void foo::thread_ap_sig_bdd_204() {
    ap_sig_bdd_204 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond7_reg_4845_pp4_it5.read()));
}

void foo::thread_ap_sig_bdd_237() {
    ap_sig_bdd_237 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond8_reg_4864_pp5_it5.read()));
}

void foo::thread_ap_sig_bdd_270() {
    ap_sig_bdd_270 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond9_reg_4883_pp6_it5.read()));
}

void foo::thread_ap_sig_bdd_303() {
    ap_sig_bdd_303 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond10_reg_4902_pp7_it5.read()));
}

void foo::thread_ap_sig_bdd_336() {
    ap_sig_bdd_336 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond11_reg_4921_pp8_it5.read()));
}

void foo::thread_ap_sig_bdd_376() {
    ap_sig_bdd_376 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_4747_pp1_it5.read()));
}

void foo::thread_ap_sig_bdd_404() {
    ap_sig_bdd_404 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_4782_pp2_it5.read()));
}

void foo::thread_ap_sig_bdd_432() {
    ap_sig_bdd_432 = (esl_seteq<1,1,1>(memory_inout_rsp_empty_n.read(), ap_const_logic_0) && esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond6_reg_4817_pp3_it5.read()));
}

void foo::thread_byte_inputs_in_offset0ack_out() {
    if ((esl_seteq<1,6,6>(ap_ST_st111_fsm_47, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_4107_p2.read()))) {
        byte_inputs_in_offset0ack_out = ap_const_logic_1;
    } else {
        byte_inputs_in_offset0ack_out = ap_const_logic_0;
    }
}

void foo::thread_byte_outputs_out_offset0ack_out() {
    if ((esl_seteq<1,6,6>(ap_ST_st111_fsm_47, ap_CS_fsm.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_4107_p2.read()))) {
        byte_outputs_out_offset0ack_out = ap_const_logic_1;
    } else {
        byte_outputs_out_offset0ack_out = ap_const_logic_0;
    }
}

void foo::thread_cov_1_1_fu_2817_p3() {
    cov_1_1_fu_2817_p3 = (!ap_reg_ppstg_tmp_24_reg_4795_pp2_it6.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_24_reg_4795_pp2_it6.read()[0].to_bool())? reg_2348.read(): cov_1_s_reg_1013.read());
}

void foo::thread_cov_1_2_fu_2824_p3() {
    cov_1_2_fu_2824_p3 = (!ap_reg_ppstg_tmp_24_reg_4795_pp2_it6.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_24_reg_4795_pp2_it6.read()[0].to_bool())? cov_0_s_reg_1025.read(): reg_2348.read());
}

void foo::thread_current_mcmc_state_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it0.read()))) {
        current_mcmc_state_address0 =  (sc_lv<15>) (tmp_13_fu_4614_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        current_mcmc_state_address0 = grp_mcmc_iteration_fu_2112_current_mcmc_state_address0.read();
    } else {
        current_mcmc_state_address0 = "XXXXXXXXXXXXXXX";
    }
}

void foo::thread_current_mcmc_state_address1() {
    current_mcmc_state_address1 = grp_mcmc_iteration_fu_2112_current_mcmc_state_address1.read();
}

void foo::thread_current_mcmc_state_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it0.read()) && 
         !(ap_sig_bdd_1217.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read())))) {
        current_mcmc_state_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        current_mcmc_state_ce0 = grp_mcmc_iteration_fu_2112_current_mcmc_state_ce0.read();
    } else {
        current_mcmc_state_ce0 = ap_const_logic_0;
    }
}

void foo::thread_current_mcmc_state_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        current_mcmc_state_ce1 = grp_mcmc_iteration_fu_2112_current_mcmc_state_ce1.read();
    } else {
        current_mcmc_state_ce1 = ap_const_logic_0;
    }
}

void foo::thread_current_mcmc_state_d0() {
    current_mcmc_state_d0 = grp_mcmc_iteration_fu_2112_current_mcmc_state_d0.read();
}

void foo::thread_current_mcmc_state_d1() {
    current_mcmc_state_d1 = grp_mcmc_iteration_fu_2112_current_mcmc_state_d1.read();
}

void foo::thread_current_mcmc_state_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        current_mcmc_state_we0 = grp_mcmc_iteration_fu_2112_current_mcmc_state_we0.read();
    } else {
        current_mcmc_state_we0 = ap_const_logic_0;
    }
}

void foo::thread_current_mcmc_state_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        current_mcmc_state_we1 = grp_mcmc_iteration_fu_2112_current_mcmc_state_we1.read();
    } else {
        current_mcmc_state_we1 = ap_const_logic_0;
    }
}

void foo::thread_data_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it7.read()))) {
        data_address0 =  (sc_lv<16>) (tmp_5_fu_2998_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        data_address0 = grp_mcmc_iteration_fu_2112_data_address0.read();
    } else {
        data_address0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void foo::thread_data_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it7.read()) && 
         !(ap_sig_bdd_270.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read())))) {
        data_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        data_ce0 = grp_mcmc_iteration_fu_2112_data_ce0.read();
    } else {
        data_ce0 = ap_const_logic_0;
    }
}

void foo::thread_data_d0() {
    data_d0 = reg_2348.read();
}

void foo::thread_data_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it7.read()) && 
          !(ap_sig_bdd_270.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond9_reg_4883_pp6_it6.read())))) {
        data_we0 = ap_const_logic_1;
    } else {
        data_we0 = ap_const_logic_0;
    }
}

void foo::thread_dimensions_1_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()))) {
        dimensions_1_address0 =  (sc_lv<4>) (tmp_fu_2402_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st12_fsm_4, ap_CS_fsm.read())) {
        dimensions_1_address0 =  (sc_lv<4>) (ap_const_lv64_1);
    } else if (esl_seteq<1,6,6>(ap_ST_st11_fsm_3, ap_CS_fsm.read())) {
        dimensions_1_address0 =  (sc_lv<4>) (ap_const_lv64_0);
    } else {
        dimensions_1_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void foo::thread_dimensions_1_address1() {
    dimensions_1_address1 =  (sc_lv<4>) (ap_const_lv64_2);
}

void foo::thread_dimensions_1_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_st11_fsm_3, ap_CS_fsm.read()) || 
         esl_seteq<1,6,6>(ap_ST_st12_fsm_4, ap_CS_fsm.read()) || 
         (esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) && 
          !(ap_sig_bdd_157.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()))))) {
        dimensions_1_ce0 = ap_const_logic_1;
    } else {
        dimensions_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_dimensions_1_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st12_fsm_4, ap_CS_fsm.read())) {
        dimensions_1_ce1 = ap_const_logic_1;
    } else {
        dimensions_1_ce1 = ap_const_logic_0;
    }
}

void foo::thread_dimensions_1_d0() {
    dimensions_1_d0 = reg_2348.read();
}

void foo::thread_dimensions_1_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it7.read()) && 
          !(ap_sig_bdd_157.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_4642_pp0_it6.read())))) {
        dimensions_1_we0 = ap_const_logic_1;
    } else {
        dimensions_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_exitcond10_fu_3018_p2() {
    exitcond10_fu_3018_p2 = (!indvar7_phi_fu_1099_p4.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<1>(): sc_lv<1>(indvar7_phi_fu_1099_p4.read() == ap_const_lv5_16);
}

void foo::thread_exitcond11_fu_3056_p2() {
    exitcond11_fu_3056_p2 = (!indvar8_phi_fu_1111_p4.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(indvar8_phi_fu_1111_p4.read() == ap_const_lv3_5);
}

void foo::thread_exitcond12_fu_4597_p2() {
    exitcond12_fu_4597_p2 = (!indvar9_reg_2100.read().is_01() || !tmp_28_reg_6003.read().is_01())? sc_lv<1>(): sc_lv<1>(indvar9_reg_2100.read() == tmp_28_reg_6003.read());
}

void foo::thread_exitcond1_fu_3079_p2() {
    exitcond1_fu_3079_p2 = (!i_reg_1141.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_1141.read() == ap_const_lv2_2);
}

void foo::thread_exitcond2_fu_3379_p2() {
    exitcond2_fu_3379_p2 = (!i1_reg_1152.read().is_01() || !ap_const_lv5_16.is_01())? sc_lv<1>(): sc_lv<1>(i1_reg_1152.read() == ap_const_lv5_16);
}

void foo::thread_exitcond3_fu_2384_p2() {
    exitcond3_fu_2384_p2 = (!indvar_phi_fu_970_p4.read().is_01() || !ap_const_lv4_F.is_01())? sc_lv<1>(): sc_lv<1>(indvar_phi_fu_970_p4.read() == ap_const_lv4_F);
}

void foo::thread_exitcond4_fu_2744_p2() {
    exitcond4_fu_2744_p2 = (!indvar1_reg_1002.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(indvar1_reg_1002.read() == ap_const_lv2_2);
}

void foo::thread_exitcond5_fu_2795_p2() {
    exitcond5_fu_2795_p2 = (!indvar2_reg_1037.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(indvar2_reg_1037.read() == ap_const_lv2_2);
}

void foo::thread_exitcond6_fu_2846_p2() {
    exitcond6_fu_2846_p2 = (!indvar3_reg_1048.read().is_01() || !ap_const_lv15_4000.is_01())? sc_lv<1>(): sc_lv<1>(indvar3_reg_1048.read() == ap_const_lv15_4000);
}

void foo::thread_exitcond7_fu_2904_p2() {
    exitcond7_fu_2904_p2 = (!indvar4_phi_fu_1063_p4.read().is_01() || !ap_const_lv15_4000.is_01())? sc_lv<1>(): sc_lv<1>(indvar4_phi_fu_1063_p4.read() == ap_const_lv15_4000);
}

void foo::thread_exitcond8_fu_2942_p2() {
    exitcond8_fu_2942_p2 = (!indvar5_phi_fu_1075_p4.read().is_01() || !ap_const_lv17_10000.is_01())? sc_lv<1>(): sc_lv<1>(indvar5_phi_fu_1075_p4.read() == ap_const_lv17_10000);
}

void foo::thread_exitcond9_fu_2980_p2() {
    exitcond9_fu_2980_p2 = (!indvar6_phi_fu_1087_p4.read().is_01() || !ap_const_lv17_10000.is_01())? sc_lv<1>(): sc_lv<1>(indvar6_phi_fu_1087_p4.read() == ap_const_lv17_10000);
}

void foo::thread_exitcond_fu_4107_p2() {
    exitcond_fu_4107_p2 = (!j_reg_2088.read().is_01() || !result_V_reg_4724.read().is_01())? sc_lv<1>(): sc_lv<1>(j_reg_2088.read() == result_V_reg_4724.read());
}

void foo::thread_exitcond_i_fu_3535_p2() {
    exitcond_i_fu_3535_p2 = (!rng_state_offset_i_reg_1197.read().is_01() || !ap_const_lv10_3E8.is_01())? sc_lv<1>(): sc_lv<1>(rng_state_offset_i_reg_1197.read() == ap_const_lv10_3E8);
}

void foo::thread_grp_fu_2343_ce() {
    grp_fu_2343_ce = ap_const_logic_1;
}

void foo::thread_grp_fu_2343_p0() {
    grp_fu_2343_p0 = ap_const_lv32_0;
}

void foo::thread_grp_fu_2343_p1() {
    grp_fu_2343_p1 = initial_theta_load_phi_reg_4948.read();
}

void foo::thread_grp_fu_4150_ce() {
    if (((esl_seteq<1,6,6>(ap_ST_st111_fsm_47, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_4107_p2.read())) || 
         (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read()) && 
          !esl_seteq<1,1,1>(ap_const_logic_0, grp_mcmc_iteration_fu_2112_ap_done.read())) || 
         esl_seteq<1,6,6>(ap_ST_st116_fsm_52, ap_CS_fsm.read()) || 
         esl_seteq<1,6,6>(ap_ST_st113_fsm_49, ap_CS_fsm.read()) || 
         esl_seteq<1,6,6>(ap_ST_st114_fsm_50, ap_CS_fsm.read()) || 
         esl_seteq<1,6,6>(ap_ST_st115_fsm_51, ap_CS_fsm.read()))) {
        grp_fu_4150_ce = ap_const_logic_1;
    } else {
        grp_fu_4150_ce = ap_const_logic_0;
    }
}

void foo::thread_grp_fu_4150_p0() {
    grp_fu_4150_p0 = j_reg_2088.read();
}

void foo::thread_grp_fu_4150_p1() {
    grp_fu_4150_p1 = tmp_s_reg_5998.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_P() {
    grp_mcmc_iteration_fu_2112_P = result_V_1_reg_4729.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_ap_start() {
    grp_mcmc_iteration_fu_2112_ap_start = grp_mcmc_iteration_fu_2112_ap_start_ap_start_reg.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_cov_0_read() {
    grp_mcmc_iteration_fu_2112_cov_0_read = cov_0_s_reg_1025.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_cov_1_read() {
    grp_mcmc_iteration_fu_2112_cov_1_read = cov_1_s_reg_1013.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_current_mcmc_state_exp_0_read() {
    grp_mcmc_iteration_fu_2112_current_mcmc_state_exp_0_read = current_mcmc_state_exp_0_1_fu_778.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_current_mcmc_state_exp_1_read() {
    grp_mcmc_iteration_fu_2112_current_mcmc_state_exp_1_read = current_mcmc_state_exp_1_1_fu_782.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_current_mcmc_state_q0() {
    grp_mcmc_iteration_fu_2112_current_mcmc_state_q0 = current_mcmc_state_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_data_q0() {
    grp_mcmc_iteration_fu_2112_data_q0 = data_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_init_particles_0_q0() {
    grp_mcmc_iteration_fu_2112_init_particles_0_q0 = init_particles_0_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_init_particles_1_q0() {
    grp_mcmc_iteration_fu_2112_init_particles_1_q0 = init_particles_1_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_initial_theta_0_read() {
    grp_mcmc_iteration_fu_2112_initial_theta_0_read = initial_theta_0_2_reg_1130.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_initial_theta_1_read() {
    grp_mcmc_iteration_fu_2112_initial_theta_1_read = initial_theta_1_2_98_reg_1119.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_iter() {
    grp_mcmc_iteration_fu_2112_iter = j_reg_2088.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_log_lik_particle_0_q0() {
    grp_mcmc_iteration_fu_2112_log_lik_particle_0_q0 = log_lik_particle_0_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_log_lik_particle_1_q0() {
    grp_mcmc_iteration_fu_2112_log_lik_particle_1_q0 = log_lik_particle_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_obs_parameters_fixed_q0() {
    grp_mcmc_iteration_fu_2112_obs_parameters_fixed_q0 = obs_parameters_fixed_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_particles_0_q0() {
    grp_mcmc_iteration_fu_2112_particles_0_q0 = particles_0_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_particles_1_q0() {
    grp_mcmc_iteration_fu_2112_particles_1_q0 = particles_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_particles_temp_0_q0() {
    grp_mcmc_iteration_fu_2112_particles_temp_0_q0 = particles_temp_0_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_particles_temp_0_q1() {
    grp_mcmc_iteration_fu_2112_particles_temp_0_q1 = particles_temp_0_q1.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_particles_temp_1_q0() {
    grp_mcmc_iteration_fu_2112_particles_temp_1_q0 = particles_temp_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_prior_parameters_q0() {
    grp_mcmc_iteration_fu_2112_prior_parameters_q0 = prior_parameters_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_prior_parameters_q1() {
    grp_mcmc_iteration_fu_2112_prior_parameters_q1 = prior_parameters_1_q1.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_proposed_mcmc_state_exp_0_read() {
    grp_mcmc_iteration_fu_2112_proposed_mcmc_state_exp_0_read = proposed_mcmc_state_exp_0_1_fu_786.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_proposed_mcmc_state_exp_1_read() {
    grp_mcmc_iteration_fu_2112_proposed_mcmc_state_exp_1_read = proposed_mcmc_state_exp_1_1_fu_790.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_proposed_mcmc_state_q0() {
    grp_mcmc_iteration_fu_2112_proposed_mcmc_state_q0 = proposed_mcmc_state_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_proposed_mcmc_state_q1() {
    grp_mcmc_iteration_fu_2112_proposed_mcmc_state_q1 = proposed_mcmc_state_q1.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_replication_factors_0_q0() {
    grp_mcmc_iteration_fu_2112_replication_factors_0_q0 = replication_factors_0_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_replication_factors_1_q0() {
    grp_mcmc_iteration_fu_2112_replication_factors_1_q0 = replication_factors_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rn_prop_0_read() {
    grp_mcmc_iteration_fu_2112_rn_prop_0_read = rn_prop_0_1_fu_794.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rn_prop_1_read() {
    grp_mcmc_iteration_fu_2112_rn_prop_1_read = rn_prop_1_1_fu_798.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_0_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_0_offset_read = rng_state_offset_0_2_reg_1418.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_0_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_0_s1_read = rng_state_s1_0_2_reg_2078.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_0_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_0_s2_read = rng_state_s2_0_2_reg_1858.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_0_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_0_s3_read = rng_state_s3_0_2_reg_1638.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_10_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_10_offset_read = rng_state_offset_10_2_reg_1318.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_10_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_10_s1_read = rng_state_s1_10_2_reg_1978.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_10_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_10_s2_read = rng_state_s2_10_2_reg_1758.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_10_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_10_s3_read = rng_state_s3_10_2_reg_1538.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_11_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_11_offset_read = rng_state_offset_11_2_reg_1308.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_11_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_11_s1_read = rng_state_s1_11_2_reg_1968.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_11_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_11_s2_read = rng_state_s2_11_2_reg_1748.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_11_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_11_s3_read = rng_state_s3_11_2_reg_1528.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_12_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_12_offset_read = rng_state_offset_12_2_reg_1298.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_12_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_12_s1_read = rng_state_s1_12_2_reg_1958.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_12_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_12_s2_read = rng_state_s2_12_2_reg_1738.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_12_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_12_s3_read = rng_state_s3_12_2_reg_1518.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_13_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_13_offset_read = rng_state_offset_13_2_reg_1288.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_13_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_13_s1_read = rng_state_s1_13_2_reg_1948.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_13_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_13_s2_read = rng_state_s2_13_2_reg_1728.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_13_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_13_s3_read = rng_state_s3_13_2_reg_1508.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_14_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_14_offset_read = rng_state_offset_14_2_reg_1278.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_14_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_14_s1_read = rng_state_s1_14_2_reg_1938.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_14_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_14_s2_read = rng_state_s2_14_2_reg_1718.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_14_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_14_s3_read = rng_state_s3_14_2_reg_1498.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_15_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_15_offset_read = rng_state_offset_15_2_reg_1268.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_15_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_15_s1_read = rng_state_s1_15_2_reg_1928.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_15_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_15_s2_read = rng_state_s2_15_2_reg_1708.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_15_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_15_s3_read = rng_state_s3_15_2_reg_1488.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_16_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_16_offset_read = rng_state_offset_16_2_reg_1258.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_16_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_16_s1_read = rng_state_s1_16_2_reg_1918.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_16_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_16_s2_read = rng_state_s2_16_2_reg_1698.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_16_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_16_s3_read = rng_state_s3_16_2_reg_1478.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_17_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_17_offset_read = rng_state_offset_17_2_reg_1248.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_17_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_17_s1_read = rng_state_s1_17_2_reg_1908.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_17_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_17_s2_read = rng_state_s2_17_2_reg_1688.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_17_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_17_s3_read = rng_state_s3_17_2_reg_1468.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_18_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_18_offset_read = rng_state_offset_18_2_reg_1238.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_18_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_18_s1_read = rng_state_s1_18_2_reg_1898.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_18_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_18_s2_read = rng_state_s2_18_2_reg_1678.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_18_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_18_s3_read = rng_state_s3_18_2_reg_1458.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_19_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_19_offset_read = rng_state_offset_19_2_reg_1228.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_19_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_19_s1_read = rng_state_s1_19_2_reg_1888.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_19_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_19_s2_read = rng_state_s2_19_2_reg_1668.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_19_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_19_s3_read = rng_state_s3_19_2_reg_1448.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_1_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_1_offset_read = rng_state_offset_1_2_reg_1408.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_1_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_1_s1_read = rng_state_s1_1_2_reg_2068.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_1_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_1_s2_read = rng_state_s2_1_2_reg_1848.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_1_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_1_s3_read = rng_state_s3_1_2_reg_1628.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_20_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_20_offset_read = rng_state_offset_20_2_reg_1218.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_20_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_20_s1_read = rng_state_s1_20_2_reg_1878.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_20_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_20_s2_read = rng_state_s2_20_2_reg_1658.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_20_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_20_s3_read = rng_state_s3_20_2_reg_1438.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_21_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_21_offset_read = rng_state_offset_21_2_reg_1208.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_21_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_21_s1_read = rng_state_s1_21_2_reg_1868.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_21_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_21_s2_read = rng_state_s2_21_2_reg_1648.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_21_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_21_s3_read = rng_state_s3_21_2_reg_1428.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_2_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_2_offset_read = rng_state_offset_2_2_reg_1398.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_2_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_2_s1_read = rng_state_s1_2_2_reg_2058.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_2_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_2_s2_read = rng_state_s2_2_2_reg_1838.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_2_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_2_s3_read = rng_state_s3_2_2_reg_1618.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_3_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_3_offset_read = rng_state_offset_3_2_reg_1388.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_3_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_3_s1_read = rng_state_s1_3_2_reg_2048.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_3_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_3_s2_read = rng_state_s2_3_2_reg_1828.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_3_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_3_s3_read = rng_state_s3_3_2_reg_1608.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_4_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_4_offset_read = rng_state_offset_4_2_reg_1378.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_4_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_4_s1_read = rng_state_s1_4_2_reg_2038.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_4_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_4_s2_read = rng_state_s2_4_2_reg_1818.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_4_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_4_s3_read = rng_state_s3_4_2_reg_1598.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_5_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_5_offset_read = rng_state_offset_5_2_reg_1368.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_5_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_5_s1_read = rng_state_s1_5_2_reg_2028.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_5_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_5_s2_read = rng_state_s2_5_2_reg_1808.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_5_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_5_s3_read = rng_state_s3_5_2_reg_1588.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_6_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_6_offset_read = rng_state_offset_6_2_reg_1358.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_6_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_6_s1_read = rng_state_s1_6_2_reg_2018.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_6_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_6_s2_read = rng_state_s2_6_2_reg_1798.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_6_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_6_s3_read = rng_state_s3_6_2_reg_1578.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_7_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_7_offset_read = rng_state_offset_7_2_reg_1348.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_7_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_7_s1_read = rng_state_s1_7_2_reg_2008.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_7_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_7_s2_read = rng_state_s2_7_2_reg_1788.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_7_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_7_s3_read = rng_state_s3_7_2_reg_1568.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_8_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_8_offset_read = rng_state_offset_8_2_reg_1338.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_8_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_8_s1_read = rng_state_s1_8_2_reg_1998.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_8_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_8_s2_read = rng_state_s2_8_2_reg_1778.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_8_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_8_s3_read = rng_state_s3_8_2_reg_1558.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_9_offset_read() {
    grp_mcmc_iteration_fu_2112_rng_state_9_offset_read = rng_state_offset_9_2_reg_1328.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_9_s1_read() {
    grp_mcmc_iteration_fu_2112_rng_state_9_s1_read = rng_state_s1_9_2_reg_1988.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_9_s2_read() {
    grp_mcmc_iteration_fu_2112_rng_state_9_s2_read = rng_state_s2_9_2_reg_1768.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_rng_state_9_s3_read() {
    grp_mcmc_iteration_fu_2112_rng_state_9_s3_read = rng_state_s3_9_2_reg_1548.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_state_count() {
    grp_mcmc_iteration_fu_2112_state_count = result_V_2_reg_4734.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_state_param_fixed_dim() {
    grp_mcmc_iteration_fu_2112_state_param_fixed_dim = result_V_2_reg_4734.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_state_parameters_q0() {
    grp_mcmc_iteration_fu_2112_state_parameters_q0 = state_parameters_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_state_parameters_q1() {
    grp_mcmc_iteration_fu_2112_state_parameters_q1 = state_parameters_q1.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_weights_0_q0() {
    grp_mcmc_iteration_fu_2112_weights_0_q0 = weights_0_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_weights_1_q0() {
    grp_mcmc_iteration_fu_2112_weights_1_q0 = weights_1_q0.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_weights_partial_sums_0_read() {
    grp_mcmc_iteration_fu_2112_weights_partial_sums_0_read = weights_partial_sums_0_1_fu_770.read();
}

void foo::thread_grp_mcmc_iteration_fu_2112_weights_partial_sums_1_read() {
    grp_mcmc_iteration_fu_2112_weights_partial_sums_1_read = weights_partial_sums_1_1_fu_774.read();
}

void foo::thread_i_1_fu_3085_p2() {
    i_1_fu_3085_p2 = (!i_reg_1141.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(i_reg_1141.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void foo::thread_i_2_fu_3385_p2() {
    i_2_fu_3385_p2 = (!i1_reg_1152.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_bigint<5>(i1_reg_1152.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void foo::thread_i_3_fu_3541_p2() {
    i_3_fu_3541_p2 = (!rng_state_offset_i_reg_1197.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_bigint<10>(rng_state_offset_i_reg_1197.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void foo::thread_icmp_fu_2878_p2() {
    icmp_fu_2878_p2 = (!tmp_26_fu_2868_p4.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_26_fu_2868_p4.read() == ap_const_lv2_0);
}

void foo::thread_indvar4_phi_fu_1063_p4() {
    if ((esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4845.read()))) {
        indvar4_phi_fu_1063_p4 = indvar_next4_reg_4849.read();
    } else {
        indvar4_phi_fu_1063_p4 = indvar4_reg_1059.read();
    }
}

void foo::thread_indvar5_phi_fu_1075_p4() {
    if ((esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_reg_4864.read()))) {
        indvar5_phi_fu_1075_p4 = indvar_next5_reg_4868.read();
    } else {
        indvar5_phi_fu_1075_p4 = indvar5_reg_1071.read();
    }
}

void foo::thread_indvar6_phi_fu_1087_p4() {
    if ((esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_4883.read()))) {
        indvar6_phi_fu_1087_p4 = indvar_next6_reg_4887.read();
    } else {
        indvar6_phi_fu_1087_p4 = indvar6_reg_1083.read();
    }
}

void foo::thread_indvar7_phi_fu_1099_p4() {
    if ((esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_reg_4902.read()))) {
        indvar7_phi_fu_1099_p4 = indvar_next7_reg_4906.read();
    } else {
        indvar7_phi_fu_1099_p4 = indvar7_reg_1095.read();
    }
}

void foo::thread_indvar8_phi_fu_1111_p4() {
    if ((esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond11_reg_4921.read()))) {
        indvar8_phi_fu_1111_p4 = indvar_next8_reg_4925.read();
    } else {
        indvar8_phi_fu_1111_p4 = indvar8_reg_1107.read();
    }
}

void foo::thread_indvar_next1_fu_2750_p2() {
    indvar_next1_fu_2750_p2 = (!indvar1_reg_1002.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(indvar1_reg_1002.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void foo::thread_indvar_next2_fu_2801_p2() {
    indvar_next2_fu_2801_p2 = (!indvar2_reg_1037.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(indvar2_reg_1037.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void foo::thread_indvar_next3_fu_2852_p2() {
    indvar_next3_fu_2852_p2 = (!indvar3_reg_1048.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_bigint<15>(indvar3_reg_1048.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void foo::thread_indvar_next4_fu_2910_p2() {
    indvar_next4_fu_2910_p2 = (!indvar4_phi_fu_1063_p4.read().is_01() || !ap_const_lv15_1.is_01())? sc_lv<15>(): (sc_bigint<15>(indvar4_phi_fu_1063_p4.read()) + sc_biguint<15>(ap_const_lv15_1));
}

void foo::thread_indvar_next5_fu_2948_p2() {
    indvar_next5_fu_2948_p2 = (!indvar5_phi_fu_1075_p4.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_bigint<17>(indvar5_phi_fu_1075_p4.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void foo::thread_indvar_next6_fu_2986_p2() {
    indvar_next6_fu_2986_p2 = (!indvar6_phi_fu_1087_p4.read().is_01() || !ap_const_lv17_1.is_01())? sc_lv<17>(): (sc_bigint<17>(indvar6_phi_fu_1087_p4.read()) + sc_biguint<17>(ap_const_lv17_1));
}

void foo::thread_indvar_next7_fu_3024_p2() {
    indvar_next7_fu_3024_p2 = (!indvar7_phi_fu_1099_p4.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_bigint<5>(indvar7_phi_fu_1099_p4.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void foo::thread_indvar_next8_fu_3062_p2() {
    indvar_next8_fu_3062_p2 = (!indvar8_phi_fu_1111_p4.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_bigint<3>(indvar8_phi_fu_1111_p4.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void foo::thread_indvar_next9_fu_4602_p2() {
    indvar_next9_fu_4602_p2 = (!indvar9_reg_2100.read().is_01() || !ap_const_lv30_1.is_01())? sc_lv<30>(): (sc_bigint<30>(indvar9_reg_2100.read()) + sc_biguint<30>(ap_const_lv30_1));
}

void foo::thread_indvar_next_fu_2390_p2() {
    indvar_next_fu_2390_p2 = (!indvar_phi_fu_970_p4.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_bigint<4>(indvar_phi_fu_970_p4.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void foo::thread_indvar_phi_fu_970_p4() {
    if ((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
         esl_seteq<1,1,1>(exitcond3_reg_4642.read(), ap_const_lv1_0))) {
        indvar_phi_fu_970_p4 = indvar_next_reg_4646.read();
    } else {
        indvar_phi_fu_970_p4 = indvar_reg_966.read();
    }
}

void foo::thread_init_particles_0_1_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it7.read()))) {
        init_particles_0_1_address0 =  (sc_lv<13>) (newIndex1_fu_2884_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        init_particles_0_1_address0 = grp_mcmc_iteration_fu_2112_init_particles_0_address0.read();
    } else {
        init_particles_0_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void foo::thread_init_particles_0_1_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it7.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()))) {
        init_particles_0_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        init_particles_0_1_ce0 = grp_mcmc_iteration_fu_2112_init_particles_0_ce0.read();
    } else {
        init_particles_0_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_init_particles_0_1_d0() {
    init_particles_0_1_d0 = reg_2348.read();
}

void foo::thread_init_particles_0_1_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond6_reg_4817_pp3_it6.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_4835_pp3_it6.read())))) {
        init_particles_0_1_we0 = ap_const_logic_1;
    } else {
        init_particles_0_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_init_particles_1_1_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it7.read()))) {
        init_particles_1_1_address0 =  (sc_lv<13>) (newIndex1_fu_2884_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        init_particles_1_1_address0 = grp_mcmc_iteration_fu_2112_init_particles_1_address0.read();
    } else {
        init_particles_1_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void foo::thread_init_particles_1_1_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it7.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()))) {
        init_particles_1_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        init_particles_1_1_ce0 = grp_mcmc_iteration_fu_2112_init_particles_1_ce0.read();
    } else {
        init_particles_1_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_init_particles_1_1_d0() {
    init_particles_1_1_d0 = reg_2348.read();
}

void foo::thread_init_particles_1_1_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it7.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond6_reg_4817_pp3_it6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_4835_pp3_it6.read())))) {
        init_particles_1_1_we0 = ap_const_logic_1;
    } else {
        init_particles_1_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_initial_theta_1_1_fu_2766_p3() {
    initial_theta_1_1_fu_2766_p3 = (!ap_reg_ppstg_tmp_23_reg_4760_pp1_it6.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_23_reg_4760_pp1_it6.read()[0].to_bool())? reg_2348.read(): initial_theta_1_reg_978.read());
}

void foo::thread_initial_theta_1_2_fu_2773_p3() {
    initial_theta_1_2_fu_2773_p3 = (!ap_reg_ppstg_tmp_23_reg_4760_pp1_it6.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_23_reg_4760_pp1_it6.read()[0].to_bool())? initial_theta_reg_990.read(): reg_2348.read());
}

void foo::thread_initial_theta_1_4_fu_3103_p3() {
    initial_theta_1_4_fu_3103_p3 = (!tmp_27_reg_4942.read()[0].is_01())? sc_lv<32>(): ((tmp_27_reg_4942.read()[0].to_bool())? initial_theta_0_1_reg_5481.read(): initial_theta_1_2_98_reg_1119.read());
}

void foo::thread_initial_theta_1_5_fu_3109_p3() {
    initial_theta_1_5_fu_3109_p3 = (!tmp_27_reg_4942.read()[0].is_01())? sc_lv<32>(): ((tmp_27_reg_4942.read()[0].to_bool())? initial_theta_0_2_reg_1130.read(): initial_theta_0_1_reg_5481.read());
}

void foo::thread_initial_theta_load_phi_fu_3095_p3() {
    initial_theta_load_phi_fu_3095_p3 = (!tmp_27_fu_3091_p1.read()[0].is_01())? sc_lv<32>(): ((tmp_27_fu_3091_p1.read()[0].to_bool())? initial_theta_1_2_98_reg_1119.read(): initial_theta_0_2_reg_1130.read());
}

void foo::thread_isIter0_fu_2396_p2() {
    isIter0_fu_2396_p2 = (!indvar_phi_fu_970_p4.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar_phi_fu_970_p4.read() == ap_const_lv4_0);
}

void foo::thread_isIter1_fu_2807_p2() {
    isIter1_fu_2807_p2 = (!indvar2_reg_1037.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar2_reg_1037.read() == ap_const_lv2_0);
}

void foo::thread_isIter2_fu_2858_p2() {
    isIter2_fu_2858_p2 = (!indvar3_reg_1048.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar3_reg_1048.read() == ap_const_lv15_0);
}

void foo::thread_isIter3_fu_2916_p2() {
    isIter3_fu_2916_p2 = (!indvar4_phi_fu_1063_p4.read().is_01() || !ap_const_lv15_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar4_phi_fu_1063_p4.read() == ap_const_lv15_0);
}

void foo::thread_isIter4_fu_2954_p2() {
    isIter4_fu_2954_p2 = (!indvar5_phi_fu_1075_p4.read().is_01() || !ap_const_lv17_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar5_phi_fu_1075_p4.read() == ap_const_lv17_0);
}

void foo::thread_isIter5_fu_2992_p2() {
    isIter5_fu_2992_p2 = (!indvar6_phi_fu_1087_p4.read().is_01() || !ap_const_lv17_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar6_phi_fu_1087_p4.read() == ap_const_lv17_0);
}

void foo::thread_isIter6_fu_3030_p2() {
    isIter6_fu_3030_p2 = (!indvar7_phi_fu_1099_p4.read().is_01() || !ap_const_lv5_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar7_phi_fu_1099_p4.read() == ap_const_lv5_0);
}

void foo::thread_isIter7_fu_3068_p2() {
    isIter7_fu_3068_p2 = (!indvar8_phi_fu_1111_p4.read().is_01() || !ap_const_lv3_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar8_phi_fu_1111_p4.read() == ap_const_lv3_0);
}

void foo::thread_isIter8_fu_4608_p2() {
    isIter8_fu_4608_p2 = (!indvar9_reg_2100.read().is_01() || !ap_const_lv30_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar9_reg_2100.read() == ap_const_lv30_0);
}

void foo::thread_isIter_fu_2756_p2() {
    isIter_fu_2756_p2 = (!indvar1_reg_1002.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(indvar1_reg_1002.read() == ap_const_lv2_0);
}

void foo::thread_isNeg_1_fu_2487_p3() {
    isNeg_1_fu_2487_p3 = sh_assign_2_fu_2481_p2.read().range(8, 8);
}

void foo::thread_isNeg_2_fu_2541_p3() {
    isNeg_2_fu_2541_p3 = sh_assign_4_fu_2535_p2.read().range(8, 8);
}

void foo::thread_isNeg_3_fu_3450_p3() {
    isNeg_3_fu_3450_p3 = sh_assign_6_fu_3444_p2.read().range(8, 8);
}

void foo::thread_isNeg_fu_2434_p3() {
    isNeg_fu_2434_p3 = sh_assign_fu_2428_p2.read().range(8, 8);
}

void foo::thread_j_1_fu_4112_p2() {
    j_1_fu_4112_p2 = (!j_reg_2088.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(j_reg_2088.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void foo::thread_loc_V_1_fu_2421_p1() {
    loc_V_1_fu_2421_p1 = p_Val2_s_fu_2407_p1.read().range(23-1, 0);
}

void foo::thread_loc_V_2_fu_2463_p4() {
    loc_V_2_fu_2463_p4 = p_Val2_5_fu_2459_p1.read().range(30, 23);
}

void foo::thread_loc_V_3_fu_2473_p1() {
    loc_V_3_fu_2473_p1 = p_Val2_5_fu_2459_p1.read().range(23-1, 0);
}

void foo::thread_loc_V_4_fu_2517_p4() {
    loc_V_4_fu_2517_p4 = p_Val2_10_fu_2513_p1.read().range(30, 23);
}

void foo::thread_loc_V_5_fu_2527_p1() {
    loc_V_5_fu_2527_p1 = p_Val2_10_fu_2513_p1.read().range(23-1, 0);
}

void foo::thread_loc_V_6_fu_3426_p4() {
    loc_V_6_fu_3426_p4 = p_Val2_15_fu_3422_p1.read().range(30, 23);
}

void foo::thread_loc_V_7_fu_3436_p1() {
    loc_V_7_fu_3436_p1 = p_Val2_15_fu_3422_p1.read().range(23-1, 0);
}

void foo::thread_log_lik_particle_0_address0() {
    log_lik_particle_0_address0 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_address0.read();
}

void foo::thread_log_lik_particle_0_address1() {
    log_lik_particle_0_address1 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_address1.read();
}

void foo::thread_log_lik_particle_0_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_0_ce0 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_ce0.read();
    } else {
        log_lik_particle_0_ce0 = ap_const_logic_0;
    }
}

void foo::thread_log_lik_particle_0_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_0_ce1 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_ce1.read();
    } else {
        log_lik_particle_0_ce1 = ap_const_logic_0;
    }
}

void foo::thread_log_lik_particle_0_d0() {
    log_lik_particle_0_d0 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_d0.read();
}

void foo::thread_log_lik_particle_0_d1() {
    log_lik_particle_0_d1 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_d1.read();
}

void foo::thread_log_lik_particle_0_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_0_we0 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_we0.read();
    } else {
        log_lik_particle_0_we0 = ap_const_logic_0;
    }
}

void foo::thread_log_lik_particle_0_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_0_we1 = grp_mcmc_iteration_fu_2112_log_lik_particle_0_we1.read();
    } else {
        log_lik_particle_0_we1 = ap_const_logic_0;
    }
}

void foo::thread_log_lik_particle_1_address0() {
    log_lik_particle_1_address0 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_address0.read();
}

void foo::thread_log_lik_particle_1_address1() {
    log_lik_particle_1_address1 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_address1.read();
}

void foo::thread_log_lik_particle_1_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_1_ce0 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_ce0.read();
    } else {
        log_lik_particle_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_log_lik_particle_1_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_1_ce1 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_ce1.read();
    } else {
        log_lik_particle_1_ce1 = ap_const_logic_0;
    }
}

void foo::thread_log_lik_particle_1_d0() {
    log_lik_particle_1_d0 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_d0.read();
}

void foo::thread_log_lik_particle_1_d1() {
    log_lik_particle_1_d1 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_d1.read();
}

void foo::thread_log_lik_particle_1_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_1_we0 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_we0.read();
    } else {
        log_lik_particle_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_log_lik_particle_1_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        log_lik_particle_1_we1 = grp_mcmc_iteration_fu_2112_log_lik_particle_1_we1.read();
    } else {
        log_lik_particle_1_we1 = ap_const_logic_0;
    }
}

void foo::thread_memory_inout_address() {
    if ((esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond12_reg_6565_pp9_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()) && 
         !(ap_sig_bdd_1217.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read())) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_isIter8_reg_6574_pp9_it1.read()))) {
        memory_inout_address = memory_inout_addr_9_reg_6560.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it1.read()) && 
                !(ap_sig_bdd_336.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond11_reg_4921.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter7_reg_4930.read()))) {
        memory_inout_address = memory_inout_addr_8_reg_4915.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it1.read()) && 
                !(ap_sig_bdd_303.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_reg_4902.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter6_reg_4911.read()))) {
        memory_inout_address = memory_inout_addr_7_reg_4896.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it1.read()) && 
                !(ap_sig_bdd_270.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_4883.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter5_reg_4892.read()))) {
        memory_inout_address = memory_inout_addr_6_reg_4877.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
                !(ap_sig_bdd_237.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_reg_4864.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter4_reg_4873.read()))) {
        memory_inout_address = memory_inout_addr_5_reg_4858.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
                !(ap_sig_bdd_204.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4845.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter3_reg_4854.read()))) {
        memory_inout_address = memory_inout_addr_4_reg_4839.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4817.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter2_reg_4826.read()))) {
        memory_inout_address = memory_inout_addr_3_reg_4811.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp2_stg0_fsm_9, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it6.read()) && ap_sig_bdd_404.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4782.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter1_reg_4791.read()))) {
        memory_inout_address = memory_inout_addr_2_reg_4776.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp1_stg0_fsm_7, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()) && 
                !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it6.read()) && ap_sig_bdd_376.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4747.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter_reg_4756.read()))) {
        memory_inout_address = memory_inout_addr_1_reg_4741.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                !(ap_sig_bdd_157.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read())) && 
                esl_seteq<1,1,1>(exitcond3_reg_4642.read(), ap_const_lv1_0) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter0_reg_4651.read()))) {
        memory_inout_address = memory_inout_addr_reg_4636.read();
    } else {
        memory_inout_address =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void foo::thread_memory_inout_dataout() {
    memory_inout_dataout = current_mcmc_state_load_reg_6583.read();
}

void foo::thread_memory_inout_req_din() {
    if (((esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond12_reg_6565_pp9_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()) && 
          !(ap_sig_bdd_1217.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_isIter8_reg_6574_pp9_it1.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond12_reg_6565_pp9_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()) && 
          !(ap_sig_bdd_1217.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()))))) {
        memory_inout_req_din = ap_const_logic_1;
    } else if (((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                 !(ap_sig_bdd_157.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read())) && 
                 esl_seteq<1,1,1>(exitcond3_reg_4642.read(), ap_const_lv1_0) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter0_reg_4651.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp1_stg0_fsm_7, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it6.read()) && ap_sig_bdd_376.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4747.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter_reg_4756.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp2_stg0_fsm_9, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it6.read()) && ap_sig_bdd_404.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4782.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter1_reg_4791.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4817.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter2_reg_4826.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
                 !(ap_sig_bdd_204.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4845.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter3_reg_4854.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
                 !(ap_sig_bdd_237.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_reg_4864.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter4_reg_4873.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it1.read()) && 
                 !(ap_sig_bdd_270.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_4883.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter5_reg_4892.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it1.read()) && 
                 !(ap_sig_bdd_303.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_reg_4902.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter6_reg_4911.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it1.read()) && 
                 !(ap_sig_bdd_336.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond11_reg_4921.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter7_reg_4930.read())))) {
        memory_inout_req_din = ap_const_logic_0;
    } else {
        memory_inout_req_din = ap_const_logic_0;
    }
}

void foo::thread_memory_inout_req_write() {
    if (((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
          !(ap_sig_bdd_157.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read())) && 
          esl_seteq<1,1,1>(exitcond3_reg_4642.read(), ap_const_lv1_0) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter0_reg_4651.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp1_stg0_fsm_7, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it6.read()) && ap_sig_bdd_376.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4747.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter_reg_4756.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp2_stg0_fsm_9, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it6.read()) && ap_sig_bdd_404.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4782.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter1_reg_4791.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4817.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter2_reg_4826.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
          !(ap_sig_bdd_204.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4845.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter3_reg_4854.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
          !(ap_sig_bdd_237.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_reg_4864.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter4_reg_4873.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it1.read()) && 
          !(ap_sig_bdd_270.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_4883.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter5_reg_4892.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it1.read()) && 
          !(ap_sig_bdd_303.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_reg_4902.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter6_reg_4911.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it1.read()) && 
          !(ap_sig_bdd_336.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond11_reg_4921.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, isIter7_reg_4930.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond12_reg_6565_pp9_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()) && 
          !(ap_sig_bdd_1217.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read())) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_isIter8_reg_6574_pp9_it1.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond12_reg_6565_pp9_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()) && 
          !(ap_sig_bdd_1217.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()))))) {
        memory_inout_req_write = ap_const_logic_1;
    } else {
        memory_inout_req_write = ap_const_logic_0;
    }
}

void foo::thread_memory_inout_rsp_read() {
    if (((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_reg_ppstg_exitcond3_reg_4642_pp0_it5.read(), ap_const_lv1_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()) && 
          !(ap_sig_bdd_157.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read()))) || 
         (esl_seteq<1,6,6>(ap_ST_pp1_stg0_fsm_7, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_4747_pp1_it5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it6.read()) && ap_sig_bdd_376.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp2_stg0_fsm_9, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_4782_pp2_it5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it6.read()) && ap_sig_bdd_404.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond6_reg_4817_pp3_it5.read()) && 
          !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read())) || 
         (esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond7_reg_4845_pp4_it5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()) && 
          !(ap_sig_bdd_204.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()))) || 
         (esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond8_reg_4864_pp5_it5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read()) && 
          !(ap_sig_bdd_237.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read()))) || 
         (esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond9_reg_4883_pp6_it5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read()) && 
          !(ap_sig_bdd_270.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read()))) || 
         (esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond10_reg_4902_pp7_it5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read()) && 
          !(ap_sig_bdd_303.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read()))) || 
         (esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond11_reg_4921_pp8_it5.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read()) && 
          !(ap_sig_bdd_336.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read()))))) {
        memory_inout_rsp_read = ap_const_logic_1;
    } else {
        memory_inout_rsp_read = ap_const_logic_0;
    }
}

void foo::thread_memory_inout_size() {
    if ((esl_seteq<1,6,6>(ap_ST_pp9_stg0_fsm_54, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond12_reg_6565_pp9_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read()) && 
         !(ap_sig_bdd_1217.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp9_it2.read())) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_isIter8_reg_6574_pp9_it1.read()))) {
        memory_inout_size = tmp_26_add_i32_shr_cast_reg_6013.read();
    } else if ((esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it1.read()) && 
                !(ap_sig_bdd_336.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond11_reg_4921.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter7_reg_4930.read()))) {
        memory_inout_size = ap_const_lv32_5;
    } else if ((esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it1.read()) && 
                !(ap_sig_bdd_303.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read())) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_reg_4902.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter6_reg_4911.read()))) {
        memory_inout_size = ap_const_lv32_16;
    } else if (((esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
                 !(ap_sig_bdd_237.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond8_reg_4864.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter4_reg_4873.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp6_stg0_fsm_17, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it1.read()) && 
                 !(ap_sig_bdd_270.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp6_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_4883.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter5_reg_4892.read())))) {
        memory_inout_size = ap_const_lv32_10000;
    } else if (((esl_seteq<1,6,6>(ap_ST_pp3_stg0_fsm_11, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it6.read()) && ap_sig_bdd_432.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_4817.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter2_reg_4826.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it1.read()) && 
                 !(ap_sig_bdd_204.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond7_reg_4845.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter3_reg_4854.read())))) {
        memory_inout_size = ap_const_lv32_4000;
    } else if (((esl_seteq<1,6,6>(ap_ST_pp1_stg0_fsm_7, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it6.read()) && ap_sig_bdd_376.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond4_reg_4747.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter_reg_4756.read())) || 
                (esl_seteq<1,6,6>(ap_ST_pp2_stg0_fsm_9, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
                 !(esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it6.read()) && ap_sig_bdd_404.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, exitcond5_reg_4782.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, isIter1_reg_4791.read())))) {
        memory_inout_size = ap_const_lv32_2;
    } else if ((esl_seteq<1,6,6>(ap_ST_pp0_stg0_fsm_2, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it1.read()) && 
                !(ap_sig_bdd_157.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it6.read())) && 
                esl_seteq<1,1,1>(exitcond3_reg_4642.read(), ap_const_lv1_0) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, isIter0_reg_4651.read()))) {
        memory_inout_size = ap_const_lv32_F;
    } else {
        memory_inout_size =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void foo::thread_newIndex1_fu_2884_p1() {
    newIndex1_fu_2884_p1 = esl_zext<64,13>(ap_reg_ppstg_tmp_25_reg_4830_pp3_it6.read());
}

void foo::thread_obs_parameters_fixed_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it7.read()))) {
        obs_parameters_fixed_address0 =  (sc_lv<16>) (tmp_4_fu_2960_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        obs_parameters_fixed_address0 = grp_mcmc_iteration_fu_2112_obs_parameters_fixed_address0.read();
    } else {
        obs_parameters_fixed_address0 =  (sc_lv<16>) ("XXXXXXXXXXXXXXXX");
    }
}

void foo::thread_obs_parameters_fixed_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it7.read()) && 
         !(ap_sig_bdd_237.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read())))) {
        obs_parameters_fixed_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        obs_parameters_fixed_ce0 = grp_mcmc_iteration_fu_2112_obs_parameters_fixed_ce0.read();
    } else {
        obs_parameters_fixed_ce0 = ap_const_logic_0;
    }
}

void foo::thread_obs_parameters_fixed_d0() {
    obs_parameters_fixed_d0 = reg_2348.read();
}

void foo::thread_obs_parameters_fixed_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp5_stg0_fsm_15, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it7.read()) && 
          !(ap_sig_bdd_237.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond8_reg_4864_pp5_it6.read())))) {
        obs_parameters_fixed_we0 = ap_const_logic_1;
    } else {
        obs_parameters_fixed_we0 = ap_const_logic_0;
    }
}

void foo::thread_p_Result_4_fu_2621_p3() {
    p_Result_4_fu_2621_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_3_reg_4692.read());
}

void foo::thread_p_Result_5_fu_2675_p3() {
    p_Result_5_fu_2675_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_5_reg_4708.read());
}

void foo::thread_p_Result_6_fu_3476_p3() {
    p_Result_6_fu_3476_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_7_reg_6018.read());
}

void foo::thread_p_Result_s_fu_2567_p3() {
    p_Result_s_fu_2567_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_1_reg_4666.read());
}

void foo::thread_p_Val2_10_fu_2513_p1() {
    p_Val2_10_fu_2513_p1 = dimensions_1_q1.read();
}

void foo::thread_p_Val2_13_fu_2712_p3() {
    p_Val2_13_fu_2712_p3 = (!isNeg_2_reg_4713.read()[0].is_01())? sc_lv<78>(): ((isNeg_2_reg_4713.read()[0].to_bool())? tmp_89_i_i218_cast_fu_2702_p1.read(): tmp_91_i_i2_fu_2706_p2.read());
}

void foo::thread_p_Val2_15_fu_3422_p1() {
    p_Val2_15_fu_3422_p1 = seeds_1_q0.read();
}

void foo::thread_p_Val2_18_fu_3513_p3() {
    p_Val2_18_fu_3513_p3 = (!isNeg_3_reg_6023.read()[0].is_01())? sc_lv<78>(): ((isNeg_3_reg_6023.read()[0].to_bool())? tmp_89_i_i234_cast_fu_3503_p1.read(): tmp_91_i_i3_fu_3507_p2.read());
}

void foo::thread_p_Val2_3_fu_2604_p3() {
    p_Val2_3_fu_2604_p3 = (!isNeg_reg_4681.read()[0].is_01())? sc_lv<78>(): ((isNeg_reg_4681.read()[0].to_bool())? tmp_89_i_i_cast_fu_2594_p1.read(): tmp_91_i_i_fu_2598_p2.read());
}

void foo::thread_p_Val2_5_fu_2459_p1() {
    p_Val2_5_fu_2459_p1 = dimensions_1_q0.read();
}

void foo::thread_p_Val2_8_fu_2658_p3() {
    p_Val2_8_fu_2658_p3 = (!isNeg_1_reg_4697.read()[0].is_01())? sc_lv<78>(): ((isNeg_1_reg_4697.read()[0].to_bool())? tmp_89_i_i202_cast_fu_2648_p1.read(): tmp_91_i_i1_fu_2652_p2.read());
}

void foo::thread_p_Val2_s_fu_2407_p1() {
    p_Val2_s_fu_2407_p1 = dimensions_1_q0.read();
}

void foo::thread_p_sum1_cast_fu_2785_p1() {
    p_sum1_cast_fu_2785_p1 = esl_zext<64,31>(p_sum1_fu_2780_p2.read());
}

void foo::thread_p_sum1_fu_2780_p2() {
    p_sum1_fu_2780_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_11.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_11));
}

void foo::thread_p_sum2_cast_fu_2836_p1() {
    p_sum2_cast_fu_2836_p1 = esl_zext<64,31>(p_sum2_fu_2831_p2.read());
}

void foo::thread_p_sum2_fu_2831_p2() {
    p_sum2_fu_2831_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_13.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_13));
}

void foo::thread_p_sum3_cast_fu_2894_p1() {
    p_sum3_cast_fu_2894_p1 = esl_zext<64,31>(p_sum3_fu_2889_p2.read());
}

void foo::thread_p_sum3_fu_2889_p2() {
    p_sum3_fu_2889_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_4013.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_4013));
}

void foo::thread_p_sum4_cast_fu_2932_p1() {
    p_sum4_cast_fu_2932_p1 = esl_zext<64,31>(p_sum4_fu_2927_p2.read());
}

void foo::thread_p_sum4_fu_2927_p2() {
    p_sum4_fu_2927_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_8014.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_8014));
}

void foo::thread_p_sum5_cast_fu_2970_p1() {
    p_sum5_cast_fu_2970_p1 = esl_zext<64,31>(p_sum5_fu_2965_p2.read());
}

void foo::thread_p_sum5_fu_2965_p2() {
    p_sum5_fu_2965_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_18015.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_18015));
}

void foo::thread_p_sum6_cast_fu_3008_p1() {
    p_sum6_cast_fu_3008_p1 = esl_zext<64,31>(p_sum6_fu_3003_p2.read());
}

void foo::thread_p_sum6_fu_3003_p2() {
    p_sum6_fu_3003_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_28015.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_28015));
}

void foo::thread_p_sum7_cast_fu_3046_p1() {
    p_sum7_cast_fu_3046_p1 = esl_zext<64,31>(p_sum7_fu_3041_p2.read());
}

void foo::thread_p_sum7_fu_3041_p2() {
    p_sum7_fu_3041_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_2802B.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_2802B));
}

void foo::thread_p_sum8_cast_fu_4587_p1() {
    p_sum8_cast_fu_4587_p1 = esl_zext<64,33>(p_sum8_fu_4582_p2.read());
}

void foo::thread_p_sum8_fu_4582_p2() {
    p_sum8_fu_4582_p2 = (!tmp_13_cast_reg_6008.read().is_01() || !tmp_15_cast_fu_4579_p1.read().is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_13_cast_reg_6008.read()) + sc_biguint<33>(tmp_15_cast_fu_4579_p1.read()));
}

void foo::thread_p_sum_cast_fu_2734_p1() {
    p_sum_cast_fu_2734_p1 = esl_zext<64,31>(p_sum_fu_2729_p2.read());
}

void foo::thread_p_sum_fu_2729_p2() {
    p_sum_fu_2729_p2 = (!tmp_2_cast_reg_4624.read().is_01() || !ap_const_lv31_F.is_01())? sc_lv<31>(): (sc_bigint<31>(tmp_2_cast_reg_4624.read()) + sc_biguint<31>(ap_const_lv31_F));
}

void foo::thread_particles_0_address0() {
    particles_0_address0 = grp_mcmc_iteration_fu_2112_particles_0_address0.read();
}

void foo::thread_particles_0_address1() {
    particles_0_address1 = grp_mcmc_iteration_fu_2112_particles_0_address1.read();
}

void foo::thread_particles_0_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_0_ce0 = grp_mcmc_iteration_fu_2112_particles_0_ce0.read();
    } else {
        particles_0_ce0 = ap_const_logic_0;
    }
}

void foo::thread_particles_0_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_0_ce1 = grp_mcmc_iteration_fu_2112_particles_0_ce1.read();
    } else {
        particles_0_ce1 = ap_const_logic_0;
    }
}

void foo::thread_particles_0_d0() {
    particles_0_d0 = grp_mcmc_iteration_fu_2112_particles_0_d0.read();
}

void foo::thread_particles_0_d1() {
    particles_0_d1 = grp_mcmc_iteration_fu_2112_particles_0_d1.read();
}

void foo::thread_particles_0_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_0_we0 = grp_mcmc_iteration_fu_2112_particles_0_we0.read();
    } else {
        particles_0_we0 = ap_const_logic_0;
    }
}

void foo::thread_particles_0_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_0_we1 = grp_mcmc_iteration_fu_2112_particles_0_we1.read();
    } else {
        particles_0_we1 = ap_const_logic_0;
    }
}

void foo::thread_particles_1_address0() {
    particles_1_address0 = grp_mcmc_iteration_fu_2112_particles_1_address0.read();
}

void foo::thread_particles_1_address1() {
    particles_1_address1 = grp_mcmc_iteration_fu_2112_particles_1_address1.read();
}

void foo::thread_particles_1_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_1_ce0 = grp_mcmc_iteration_fu_2112_particles_1_ce0.read();
    } else {
        particles_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_particles_1_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_1_ce1 = grp_mcmc_iteration_fu_2112_particles_1_ce1.read();
    } else {
        particles_1_ce1 = ap_const_logic_0;
    }
}

void foo::thread_particles_1_d0() {
    particles_1_d0 = grp_mcmc_iteration_fu_2112_particles_1_d0.read();
}

void foo::thread_particles_1_d1() {
    particles_1_d1 = grp_mcmc_iteration_fu_2112_particles_1_d1.read();
}

void foo::thread_particles_1_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_1_we0 = grp_mcmc_iteration_fu_2112_particles_1_we0.read();
    } else {
        particles_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_particles_1_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_1_we1 = grp_mcmc_iteration_fu_2112_particles_1_we1.read();
    } else {
        particles_1_we1 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_0_address0() {
    particles_temp_0_address0 = grp_mcmc_iteration_fu_2112_particles_temp_0_address0.read();
}

void foo::thread_particles_temp_0_address1() {
    particles_temp_0_address1 = grp_mcmc_iteration_fu_2112_particles_temp_0_address1.read();
}

void foo::thread_particles_temp_0_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_0_ce0 = grp_mcmc_iteration_fu_2112_particles_temp_0_ce0.read();
    } else {
        particles_temp_0_ce0 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_0_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_0_ce1 = grp_mcmc_iteration_fu_2112_particles_temp_0_ce1.read();
    } else {
        particles_temp_0_ce1 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_0_d0() {
    particles_temp_0_d0 = grp_mcmc_iteration_fu_2112_particles_temp_0_d0.read();
}

void foo::thread_particles_temp_0_d1() {
    particles_temp_0_d1 = grp_mcmc_iteration_fu_2112_particles_temp_0_d1.read();
}

void foo::thread_particles_temp_0_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_0_we0 = grp_mcmc_iteration_fu_2112_particles_temp_0_we0.read();
    } else {
        particles_temp_0_we0 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_0_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_0_we1 = grp_mcmc_iteration_fu_2112_particles_temp_0_we1.read();
    } else {
        particles_temp_0_we1 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_1_address0() {
    particles_temp_1_address0 = grp_mcmc_iteration_fu_2112_particles_temp_1_address0.read();
}

void foo::thread_particles_temp_1_address1() {
    particles_temp_1_address1 = grp_mcmc_iteration_fu_2112_particles_temp_1_address1.read();
}

void foo::thread_particles_temp_1_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_1_ce0 = grp_mcmc_iteration_fu_2112_particles_temp_1_ce0.read();
    } else {
        particles_temp_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_1_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_1_ce1 = grp_mcmc_iteration_fu_2112_particles_temp_1_ce1.read();
    } else {
        particles_temp_1_ce1 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_1_d0() {
    particles_temp_1_d0 = grp_mcmc_iteration_fu_2112_particles_temp_1_d0.read();
}

void foo::thread_particles_temp_1_d1() {
    particles_temp_1_d1 = grp_mcmc_iteration_fu_2112_particles_temp_1_d1.read();
}

void foo::thread_particles_temp_1_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_1_we0 = grp_mcmc_iteration_fu_2112_particles_temp_1_we0.read();
    } else {
        particles_temp_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_particles_temp_1_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        particles_temp_1_we1 = grp_mcmc_iteration_fu_2112_particles_temp_1_we1.read();
    } else {
        particles_temp_1_we1 = ap_const_logic_0;
    }
}

void foo::thread_prior_parameters_1_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it7.read()))) {
        prior_parameters_1_address0 =  (sc_lv<3>) (tmp_7_fu_3074_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        prior_parameters_1_address0 = grp_mcmc_iteration_fu_2112_prior_parameters_address0.read();
    } else {
        prior_parameters_1_address0 =  (sc_lv<3>) ("XXX");
    }
}

void foo::thread_prior_parameters_1_address1() {
    prior_parameters_1_address1 = grp_mcmc_iteration_fu_2112_prior_parameters_address1.read();
}

void foo::thread_prior_parameters_1_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it7.read()) && 
         !(ap_sig_bdd_336.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read())))) {
        prior_parameters_1_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        prior_parameters_1_ce0 = grp_mcmc_iteration_fu_2112_prior_parameters_ce0.read();
    } else {
        prior_parameters_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_prior_parameters_1_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        prior_parameters_1_ce1 = grp_mcmc_iteration_fu_2112_prior_parameters_ce1.read();
    } else {
        prior_parameters_1_ce1 = ap_const_logic_0;
    }
}

void foo::thread_prior_parameters_1_d0() {
    prior_parameters_1_d0 = reg_2348.read();
}

void foo::thread_prior_parameters_1_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp8_stg0_fsm_21, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it7.read()) && 
          !(ap_sig_bdd_336.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp8_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond11_reg_4921_pp8_it6.read())))) {
        prior_parameters_1_we0 = ap_const_logic_1;
    } else {
        prior_parameters_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_proposed_mcmc_state_address0() {
    proposed_mcmc_state_address0 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_address0.read();
}

void foo::thread_proposed_mcmc_state_address1() {
    proposed_mcmc_state_address1 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_address1.read();
}

void foo::thread_proposed_mcmc_state_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        proposed_mcmc_state_ce0 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_ce0.read();
    } else {
        proposed_mcmc_state_ce0 = ap_const_logic_0;
    }
}

void foo::thread_proposed_mcmc_state_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        proposed_mcmc_state_ce1 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_ce1.read();
    } else {
        proposed_mcmc_state_ce1 = ap_const_logic_0;
    }
}

void foo::thread_proposed_mcmc_state_d0() {
    proposed_mcmc_state_d0 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_d0.read();
}

void foo::thread_proposed_mcmc_state_d1() {
    proposed_mcmc_state_d1 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_d1.read();
}

void foo::thread_proposed_mcmc_state_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        proposed_mcmc_state_we0 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_we0.read();
    } else {
        proposed_mcmc_state_we0 = ap_const_logic_0;
    }
}

void foo::thread_proposed_mcmc_state_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        proposed_mcmc_state_we1 = grp_mcmc_iteration_fu_2112_proposed_mcmc_state_we1.read();
    } else {
        proposed_mcmc_state_we1 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_0_address0() {
    replication_factors_0_address0 = grp_mcmc_iteration_fu_2112_replication_factors_0_address0.read();
}

void foo::thread_replication_factors_0_address1() {
    replication_factors_0_address1 = grp_mcmc_iteration_fu_2112_replication_factors_0_address1.read();
}

void foo::thread_replication_factors_0_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_0_ce0 = grp_mcmc_iteration_fu_2112_replication_factors_0_ce0.read();
    } else {
        replication_factors_0_ce0 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_0_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_0_ce1 = grp_mcmc_iteration_fu_2112_replication_factors_0_ce1.read();
    } else {
        replication_factors_0_ce1 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_0_d0() {
    replication_factors_0_d0 = grp_mcmc_iteration_fu_2112_replication_factors_0_d0.read();
}

void foo::thread_replication_factors_0_d1() {
    replication_factors_0_d1 = grp_mcmc_iteration_fu_2112_replication_factors_0_d1.read();
}

void foo::thread_replication_factors_0_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_0_we0 = grp_mcmc_iteration_fu_2112_replication_factors_0_we0.read();
    } else {
        replication_factors_0_we0 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_0_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_0_we1 = grp_mcmc_iteration_fu_2112_replication_factors_0_we1.read();
    } else {
        replication_factors_0_we1 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_1_address0() {
    replication_factors_1_address0 = grp_mcmc_iteration_fu_2112_replication_factors_1_address0.read();
}

void foo::thread_replication_factors_1_address1() {
    replication_factors_1_address1 = grp_mcmc_iteration_fu_2112_replication_factors_1_address1.read();
}

void foo::thread_replication_factors_1_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_1_ce0 = grp_mcmc_iteration_fu_2112_replication_factors_1_ce0.read();
    } else {
        replication_factors_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_1_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_1_ce1 = grp_mcmc_iteration_fu_2112_replication_factors_1_ce1.read();
    } else {
        replication_factors_1_ce1 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_1_d0() {
    replication_factors_1_d0 = grp_mcmc_iteration_fu_2112_replication_factors_1_d0.read();
}

void foo::thread_replication_factors_1_d1() {
    replication_factors_1_d1 = grp_mcmc_iteration_fu_2112_replication_factors_1_d1.read();
}

void foo::thread_replication_factors_1_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_1_we0 = grp_mcmc_iteration_fu_2112_replication_factors_1_we0.read();
    } else {
        replication_factors_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_replication_factors_1_we1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        replication_factors_1_we1 = grp_mcmc_iteration_fu_2112_replication_factors_1_we1.read();
    } else {
        replication_factors_1_we1 = ap_const_logic_0;
    }
}

void foo::thread_rng_state_offset_10_fu_722() {
    rng_state_offset_10_fu_722 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_11_fu_726() {
    rng_state_offset_11_fu_726 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_12_fu_730() {
    rng_state_offset_12_fu_730 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_13_fu_734() {
    rng_state_offset_13_fu_734 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_14_fu_738() {
    rng_state_offset_14_fu_738 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_15_fu_742() {
    rng_state_offset_15_fu_742 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_16_fu_746() {
    rng_state_offset_16_fu_746 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_17_fu_750() {
    rng_state_offset_17_fu_750 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_18_fu_754() {
    rng_state_offset_18_fu_754 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_19_fu_758() {
    rng_state_offset_19_fu_758 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_1_fu_686() {
    rng_state_offset_1_fu_686 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_20_fu_762() {
    rng_state_offset_20_fu_762 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_2_fu_690() {
    rng_state_offset_2_fu_690 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_3_fu_694() {
    rng_state_offset_3_fu_694 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_4_fu_698() {
    rng_state_offset_4_fu_698 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_5_fu_702() {
    rng_state_offset_5_fu_702 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_6_fu_706() {
    rng_state_offset_6_fu_706 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_7_fu_710() {
    rng_state_offset_7_fu_710 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_8_fu_714() {
    rng_state_offset_8_fu_714 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_9_fu_718() {
    rng_state_offset_9_fu_718 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_fu_682() {
    rng_state_offset_fu_682 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_offset_s_fu_766() {
    rng_state_offset_s_fu_766 = ap_const_lv32_3E8;
}

void foo::thread_rng_state_s3_assign_i_fu_3530_p2() {
    rng_state_s3_assign_i_fu_3530_p2 = (!result_V_3_reg_6034.read().is_01() || !ap_const_lv32_10.is_01())? sc_lv<32>(): (sc_bigint<32>(result_V_3_reg_6034.read()) + sc_biguint<32>(ap_const_lv32_10));
}

void foo::thread_seeds_1_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it7.read()))) {
        seeds_1_address0 =  (sc_lv<5>) (tmp_6_fu_3036_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st102_fsm_38, ap_CS_fsm.read())) {
        seeds_1_address0 =  (sc_lv<5>) (tmp_9_fu_3391_p1.read());
    } else {
        seeds_1_address0 =  (sc_lv<5>) ("XXXXX");
    }
}

void foo::thread_seeds_1_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_st102_fsm_38, ap_CS_fsm.read()) || 
         (esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it7.read()) && 
          !(ap_sig_bdd_303.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read()))))) {
        seeds_1_ce0 = ap_const_logic_1;
    } else {
        seeds_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_seeds_1_d0() {
    seeds_1_d0 = reg_2348.read();
}

void foo::thread_seeds_1_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp7_stg0_fsm_19, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it7.read()) && 
          !(ap_sig_bdd_303.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp7_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond10_reg_4902_pp7_it6.read())))) {
        seeds_1_we0 = ap_const_logic_1;
    } else {
        seeds_1_we0 = ap_const_logic_0;
    }
}

void foo::thread_sh_assign_1_fu_2451_p1() {
    sh_assign_1_fu_2451_p1 = esl_sext<9,8>(tmp_87_i_i_fu_2442_p2.read());
}

void foo::thread_sh_assign_1_fu_2451_p3() {
    sh_assign_1_fu_2451_p3 = (!isNeg_fu_2434_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_fu_2434_p3.read()[0].to_bool())? sh_assign_1_fu_2451_p1.read(): sh_assign_fu_2428_p2.read());
}

void foo::thread_sh_assign_2_fu_2481_p2() {
    sh_assign_2_fu_2481_p2 = (!tmp_i_i_i196_cast_fu_2477_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i196_cast_fu_2477_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void foo::thread_sh_assign_3_fu_2505_p1() {
    sh_assign_3_fu_2505_p1 = esl_sext<9,8>(tmp_87_i_i1_fu_2495_p2.read());
}

void foo::thread_sh_assign_3_fu_2505_p3() {
    sh_assign_3_fu_2505_p3 = (!isNeg_1_fu_2487_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_1_fu_2487_p3.read()[0].to_bool())? sh_assign_3_fu_2505_p1.read(): sh_assign_2_fu_2481_p2.read());
}

void foo::thread_sh_assign_4_fu_2535_p2() {
    sh_assign_4_fu_2535_p2 = (!tmp_i_i_i212_cast_fu_2531_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i212_cast_fu_2531_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void foo::thread_sh_assign_5_fu_2559_p1() {
    sh_assign_5_fu_2559_p1 = esl_sext<9,8>(tmp_87_i_i2_fu_2549_p2.read());
}

void foo::thread_sh_assign_5_fu_2559_p3() {
    sh_assign_5_fu_2559_p3 = (!isNeg_2_fu_2541_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_2_fu_2541_p3.read()[0].to_bool())? sh_assign_5_fu_2559_p1.read(): sh_assign_4_fu_2535_p2.read());
}

void foo::thread_sh_assign_6_fu_3444_p2() {
    sh_assign_6_fu_3444_p2 = (!tmp_i_i_i228_cast_fu_3440_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i228_cast_fu_3440_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void foo::thread_sh_assign_7_fu_3468_p1() {
    sh_assign_7_fu_3468_p1 = esl_sext<9,8>(tmp_87_i_i3_fu_3458_p2.read());
}

void foo::thread_sh_assign_7_fu_3468_p3() {
    sh_assign_7_fu_3468_p3 = (!isNeg_3_fu_3450_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_3_fu_3450_p3.read()[0].to_bool())? sh_assign_7_fu_3468_p1.read(): sh_assign_6_fu_3444_p2.read());
}

void foo::thread_sh_assign_fu_2428_p2() {
    sh_assign_fu_2428_p2 = (!tmp_i_i_i_cast_fu_2425_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i_cast_fu_2425_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void foo::thread_state_parameters_address0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it7.read()))) {
        state_parameters_address0 =  (sc_lv<15>) (tmp_3_fu_2922_p1.read());
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        state_parameters_address0 = grp_mcmc_iteration_fu_2112_state_parameters_address0.read();
    } else {
        state_parameters_address0 = "XXXXXXXXXXXXXXX";
    }
}

void foo::thread_state_parameters_address1() {
    state_parameters_address1 = grp_mcmc_iteration_fu_2112_state_parameters_address1.read();
}

void foo::thread_state_parameters_ce0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it7.read()) && 
         !(ap_sig_bdd_204.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())))) {
        state_parameters_ce0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        state_parameters_ce0 = grp_mcmc_iteration_fu_2112_state_parameters_ce0.read();
    } else {
        state_parameters_ce0 = ap_const_logic_0;
    }
}

void foo::thread_state_parameters_ce1() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        state_parameters_ce1 = grp_mcmc_iteration_fu_2112_state_parameters_ce1.read();
    } else {
        state_parameters_ce1 = ap_const_logic_0;
    }
}

void foo::thread_state_parameters_d0() {
    if ((esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it7.read()))) {
        state_parameters_d0 = reg_2348.read();
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        state_parameters_d0 = grp_mcmc_iteration_fu_2112_state_parameters_d0.read();
    } else {
        state_parameters_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void foo::thread_state_parameters_we0() {
    if (((esl_seteq<1,6,6>(ap_ST_pp4_stg0_fsm_13, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it7.read()) && 
          !(ap_sig_bdd_204.read() && esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond7_reg_4845_pp4_it6.read())))) {
        state_parameters_we0 = ap_const_logic_1;
    } else if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        state_parameters_we0 = grp_mcmc_iteration_fu_2112_state_parameters_we0.read();
    } else {
        state_parameters_we0 = ap_const_logic_0;
    }
}

void foo::thread_tmp_11_fu_3405_p4() {
    tmp_11_fu_3405_p4 = byte_outputs_out_offset0data_reg.read().range(31, 2);
}

void foo::thread_tmp_13_cast_fu_3414_p1() {
    tmp_13_cast_fu_3414_p1 = esl_zext<33,30>(tmp_11_fu_3405_p4.read());
}

void foo::thread_tmp_13_fu_4614_p1() {
    tmp_13_fu_4614_p1 = esl_zext<64,30>(indvar9_reg_2100.read());
}

void foo::thread_tmp_14_fu_3547_p4() {
    tmp_14_fu_3547_p4 = rng_state_0_s1_2_reg_1164.read().range(19, 1);
}

void foo::thread_tmp_15_cast_fu_4579_p1() {
    tmp_15_cast_fu_4579_p1 = esl_zext<33,32>(tmp_12_reg_6555.read());
}

void foo::thread_tmp_15_fu_3587_p4() {
    tmp_15_fu_3587_p4 = rng_state_0_s2_2_reg_1175.read().range(27, 3);
}

void foo::thread_tmp_16_fu_3627_p4() {
    tmp_16_fu_3627_p4 = rng_state_0_s3_2_reg_1187.read().range(14, 4);
}

void foo::thread_tmp_1_fu_2360_p4() {
    tmp_1_fu_2360_p4 = byte_inputs_in_offset0data_reg.read().range(31, 2);
}

void foo::thread_tmp_23_fu_2762_p1() {
    tmp_23_fu_2762_p1 = indvar1_reg_1002.read().range(1-1, 0);
}

void foo::thread_tmp_24_fu_2813_p1() {
    tmp_24_fu_2813_p1 = indvar2_reg_1037.read().range(1-1, 0);
}

void foo::thread_tmp_25_fu_2864_p1() {
    tmp_25_fu_2864_p1 = indvar3_reg_1048.read().range(13-1, 0);
}

void foo::thread_tmp_26_add_i32_shr_cast_fu_3418_p1() {
    tmp_26_add_i32_shr_cast_fu_3418_p1 = esl_zext<32,30>(tmp_28_fu_3401_p1.read());
}

void foo::thread_tmp_26_fu_2868_p4() {
    tmp_26_fu_2868_p4 = indvar3_reg_1048.read().range(14, 13);
}

void foo::thread_tmp_27_fu_3091_p1() {
    tmp_27_fu_3091_p1 = i_reg_1141.read().range(1-1, 0);
}

void foo::thread_tmp_28_fu_3401_p0() {
    tmp_28_fu_3401_p0 = (!result_V_2_reg_4734.read().is_01() || !ap_const_lv32_5.is_01())? sc_lv<32>(): (sc_bigint<32>(result_V_2_reg_4734.read()) + sc_biguint<32>(ap_const_lv32_5));
}

void foo::thread_tmp_28_fu_3401_p1() {
    tmp_28_fu_3401_p1 = tmp_28_fu_3401_p0.read().range(30-1, 0);
}

void foo::thread_tmp_2_cast_fu_2374_p1() {
    tmp_2_cast_fu_2374_p1 = esl_zext<31,30>(tmp_1_fu_2360_p4.read());
}

void foo::thread_tmp_2_fu_2370_p1() {
    tmp_2_fu_2370_p1 = esl_zext<64,30>(tmp_1_fu_2360_p4.read());
}

void foo::thread_tmp_31_fu_3557_p2() {
    tmp_31_fu_3557_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_0_s1_2_reg_1164.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void foo::thread_tmp_32_fu_3597_p2() {
    tmp_32_fu_3597_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_0_s2_2_reg_1175.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void foo::thread_tmp_33_fu_3637_p2() {
    tmp_33_fu_3637_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_0_s3_2_reg_1187.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void foo::thread_tmp_3_fu_2922_p1() {
    tmp_3_fu_2922_p1 = esl_zext<64,15>(ap_reg_ppstg_indvar4_reg_1059_pp4_it6.read());
}

void foo::thread_tmp_46_i_fu_3563_p2() {
    tmp_46_i_fu_3563_p2 = (rng_state_0_s1_2_reg_1164.read() ^ tmp_31_fu_3557_p2.read());
}

void foo::thread_tmp_47_i_fu_3569_p4() {
    tmp_47_i_fu_3569_p4 = tmp_46_i_fu_3563_p2.read().range(31, 19);
}

void foo::thread_tmp_48_i_fu_3579_p3() {
    tmp_48_i_fu_3579_p3 = esl_concat<19,13>(tmp_14_fu_3547_p4.read(), tmp_47_i_fu_3569_p4.read());
}

void foo::thread_tmp_4_fu_2960_p1() {
    tmp_4_fu_2960_p1 = esl_zext<64,17>(ap_reg_ppstg_indvar5_reg_1071_pp5_it6.read());
}

void foo::thread_tmp_52_i_fu_3603_p2() {
    tmp_52_i_fu_3603_p2 = (rng_state_0_s2_2_reg_1175.read() ^ tmp_32_fu_3597_p2.read());
}

void foo::thread_tmp_53_i_fu_3609_p4() {
    tmp_53_i_fu_3609_p4 = tmp_52_i_fu_3603_p2.read().range(31, 25);
}

void foo::thread_tmp_54_i_fu_3619_p3() {
    tmp_54_i_fu_3619_p3 = esl_concat<25,7>(tmp_15_fu_3587_p4.read(), tmp_53_i_fu_3609_p4.read());
}

void foo::thread_tmp_58_i_fu_3643_p2() {
    tmp_58_i_fu_3643_p2 = (rng_state_0_s3_2_reg_1187.read() ^ tmp_33_fu_3637_p2.read());
}

void foo::thread_tmp_59_i_fu_3649_p4() {
    tmp_59_i_fu_3649_p4 = tmp_58_i_fu_3643_p2.read().range(31, 11);
}

void foo::thread_tmp_5_fu_2998_p1() {
    tmp_5_fu_2998_p1 = esl_zext<64,17>(ap_reg_ppstg_indvar6_reg_1083_pp6_it6.read());
}

void foo::thread_tmp_60_i_fu_3659_p3() {
    tmp_60_i_fu_3659_p3 = esl_concat<11,21>(tmp_16_fu_3627_p4.read(), tmp_59_i_fu_3649_p4.read());
}

void foo::thread_tmp_6_fu_3036_p1() {
    tmp_6_fu_3036_p1 = esl_zext<64,5>(ap_reg_ppstg_indvar7_reg_1095_pp7_it6.read());
}

void foo::thread_tmp_7_fu_3074_p1() {
    tmp_7_fu_3074_p1 = esl_zext<64,3>(ap_reg_ppstg_indvar8_reg_1107_pp8_it6.read());
}

void foo::thread_tmp_87_i_i1_fu_2495_p2() {
    tmp_87_i_i1_fu_2495_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_2_fu_2463_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_2_fu_2463_p4.read()));
}

void foo::thread_tmp_87_i_i2_fu_2549_p2() {
    tmp_87_i_i2_fu_2549_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_4_fu_2517_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_4_fu_2517_p4.read()));
}

void foo::thread_tmp_87_i_i3_fu_3458_p2() {
    tmp_87_i_i3_fu_3458_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_6_fu_3426_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_6_fu_3426_p4.read()));
}

void foo::thread_tmp_87_i_i_fu_2442_p2() {
    tmp_87_i_i_fu_2442_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_reg_4660.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_reg_4660.read()));
}

void foo::thread_tmp_88_i_i1_fu_2638_p0() {
    tmp_88_i_i1_fu_2638_p0 = esl_sext<32,9>(sh_assign_3_reg_4702.read());
}

void foo::thread_tmp_88_i_i1_fu_2638_p1() {
    tmp_88_i_i1_fu_2638_p1 = esl_zext<78,32>(tmp_88_i_i1_fu_2638_p0.read());
}

void foo::thread_tmp_88_i_i2_fu_2692_p0() {
    tmp_88_i_i2_fu_2692_p0 = esl_sext<32,9>(sh_assign_5_reg_4718.read());
}

void foo::thread_tmp_88_i_i2_fu_2692_p1() {
    tmp_88_i_i2_fu_2692_p1 = esl_zext<78,32>(tmp_88_i_i2_fu_2692_p0.read());
}

void foo::thread_tmp_88_i_i3_fu_3493_p0() {
    tmp_88_i_i3_fu_3493_p0 = esl_sext<32,9>(sh_assign_7_reg_6028.read());
}

void foo::thread_tmp_88_i_i3_fu_3493_p1() {
    tmp_88_i_i3_fu_3493_p1 = esl_zext<78,32>(tmp_88_i_i3_fu_3493_p0.read());
}

void foo::thread_tmp_88_i_i_fu_2584_p0() {
    tmp_88_i_i_fu_2584_p0 = esl_sext<32,9>(sh_assign_1_reg_4686.read());
}

void foo::thread_tmp_88_i_i_fu_2584_p1() {
    tmp_88_i_i_fu_2584_p1 = esl_zext<78,32>(tmp_88_i_i_fu_2584_p0.read());
}

void foo::thread_tmp_89_i_i1_fu_2642_p1() {
    tmp_89_i_i1_fu_2642_p1 = esl_sext<24,9>(sh_assign_3_reg_4702.read());
}

void foo::thread_tmp_89_i_i1_fu_2642_p2() {
    tmp_89_i_i1_fu_2642_p2 = (!tmp_89_i_i1_fu_2642_p1.read().is_01())? sc_lv<24>(): p_Result_4_fu_2621_p3.read() >> (unsigned short)tmp_89_i_i1_fu_2642_p1.read().to_uint();
}

void foo::thread_tmp_89_i_i202_cast_fu_2648_p1() {
    tmp_89_i_i202_cast_fu_2648_p1 = esl_zext<78,24>(tmp_89_i_i1_fu_2642_p2.read());
}

void foo::thread_tmp_89_i_i218_cast_fu_2702_p1() {
    tmp_89_i_i218_cast_fu_2702_p1 = esl_zext<78,24>(tmp_89_i_i2_fu_2696_p2.read());
}

void foo::thread_tmp_89_i_i234_cast_fu_3503_p1() {
    tmp_89_i_i234_cast_fu_3503_p1 = esl_zext<78,24>(tmp_89_i_i3_fu_3497_p2.read());
}

void foo::thread_tmp_89_i_i2_fu_2696_p1() {
    tmp_89_i_i2_fu_2696_p1 = esl_sext<24,9>(sh_assign_5_reg_4718.read());
}

void foo::thread_tmp_89_i_i2_fu_2696_p2() {
    tmp_89_i_i2_fu_2696_p2 = (!tmp_89_i_i2_fu_2696_p1.read().is_01())? sc_lv<24>(): p_Result_5_fu_2675_p3.read() >> (unsigned short)tmp_89_i_i2_fu_2696_p1.read().to_uint();
}

void foo::thread_tmp_89_i_i3_fu_3497_p1() {
    tmp_89_i_i3_fu_3497_p1 = esl_sext<24,9>(sh_assign_7_reg_6028.read());
}

void foo::thread_tmp_89_i_i3_fu_3497_p2() {
    tmp_89_i_i3_fu_3497_p2 = (!tmp_89_i_i3_fu_3497_p1.read().is_01())? sc_lv<24>(): p_Result_6_fu_3476_p3.read() >> (unsigned short)tmp_89_i_i3_fu_3497_p1.read().to_uint();
}

void foo::thread_tmp_89_i_i_cast_fu_2594_p1() {
    tmp_89_i_i_cast_fu_2594_p1 = esl_zext<78,24>(tmp_89_i_i_fu_2588_p2.read());
}

void foo::thread_tmp_89_i_i_fu_2588_p1() {
    tmp_89_i_i_fu_2588_p1 = esl_sext<24,9>(sh_assign_1_reg_4686.read());
}

void foo::thread_tmp_89_i_i_fu_2588_p2() {
    tmp_89_i_i_fu_2588_p2 = (!tmp_89_i_i_fu_2588_p1.read().is_01())? sc_lv<24>(): p_Result_s_fu_2567_p3.read() >> (unsigned short)tmp_89_i_i_fu_2588_p1.read().to_uint();
}

void foo::thread_tmp_91_i_i1_fu_2652_p2() {
    tmp_91_i_i1_fu_2652_p2 = (!tmp_88_i_i1_fu_2638_p1.read().is_01())? sc_lv<78>(): tmp_i_i1_fu_2628_p1.read() << (unsigned short)tmp_88_i_i1_fu_2638_p1.read().to_uint();
}

void foo::thread_tmp_91_i_i2_fu_2706_p2() {
    tmp_91_i_i2_fu_2706_p2 = (!tmp_88_i_i2_fu_2692_p1.read().is_01())? sc_lv<78>(): tmp_i_i2_fu_2682_p1.read() << (unsigned short)tmp_88_i_i2_fu_2692_p1.read().to_uint();
}

void foo::thread_tmp_91_i_i3_fu_3507_p2() {
    tmp_91_i_i3_fu_3507_p2 = (!tmp_88_i_i3_fu_3493_p1.read().is_01())? sc_lv<78>(): tmp_i_i3_fu_3483_p1.read() << (unsigned short)tmp_88_i_i3_fu_3493_p1.read().to_uint();
}

void foo::thread_tmp_91_i_i_fu_2598_p2() {
    tmp_91_i_i_fu_2598_p2 = (!tmp_88_i_i_fu_2584_p1.read().is_01())? sc_lv<78>(): tmp_i_i_fu_2574_p1.read() << (unsigned short)tmp_88_i_i_fu_2584_p1.read().to_uint();
}

void foo::thread_tmp_9_fu_3391_p1() {
    tmp_9_fu_3391_p1 = esl_zext<64,5>(i1_reg_1152.read());
}

void foo::thread_tmp_fu_2402_p1() {
    tmp_fu_2402_p1 = esl_zext<64,4>(ap_reg_ppstg_indvar_reg_966_pp0_it6.read());
}

void foo::thread_tmp_i_i1_fu_2628_p1() {
    tmp_i_i1_fu_2628_p1 = esl_zext<78,24>(p_Result_4_fu_2621_p3.read());
}

void foo::thread_tmp_i_i2_fu_2682_p1() {
    tmp_i_i2_fu_2682_p1 = esl_zext<78,24>(p_Result_5_fu_2675_p3.read());
}

void foo::thread_tmp_i_i3_fu_3483_p1() {
    tmp_i_i3_fu_3483_p1 = esl_zext<78,24>(p_Result_6_fu_3476_p3.read());
}

void foo::thread_tmp_i_i_fu_2574_p1() {
    tmp_i_i_fu_2574_p1 = esl_zext<78,24>(p_Result_s_fu_2567_p3.read());
}

void foo::thread_tmp_i_i_i196_cast_fu_2477_p1() {
    tmp_i_i_i196_cast_fu_2477_p1 = esl_zext<9,8>(loc_V_2_fu_2463_p4.read());
}

void foo::thread_tmp_i_i_i212_cast_fu_2531_p1() {
    tmp_i_i_i212_cast_fu_2531_p1 = esl_zext<9,8>(loc_V_4_fu_2517_p4.read());
}

void foo::thread_tmp_i_i_i228_cast_fu_3440_p1() {
    tmp_i_i_i228_cast_fu_3440_p1 = esl_zext<9,8>(loc_V_6_fu_3426_p4.read());
}

void foo::thread_tmp_i_i_i_cast_fu_2425_p1() {
    tmp_i_i_i_cast_fu_2425_p1 = esl_zext<9,8>(loc_V_reg_4660.read());
}

void foo::thread_tmp_s_fu_3396_p2() {
    tmp_s_fu_3396_p2 = (!result_V_2_reg_4734.read().is_01() || !ap_const_lv32_5.is_01())? sc_lv<32>(): (sc_bigint<32>(result_V_2_reg_4734.read()) + sc_biguint<32>(ap_const_lv32_5));
}

void foo::thread_weights_0_address0() {
    weights_0_address0 = grp_mcmc_iteration_fu_2112_weights_0_address0.read();
}

void foo::thread_weights_0_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        weights_0_ce0 = grp_mcmc_iteration_fu_2112_weights_0_ce0.read();
    } else {
        weights_0_ce0 = ap_const_logic_0;
    }
}

void foo::thread_weights_0_d0() {
    weights_0_d0 = grp_mcmc_iteration_fu_2112_weights_0_d0.read();
}

void foo::thread_weights_0_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        weights_0_we0 = grp_mcmc_iteration_fu_2112_weights_0_we0.read();
    } else {
        weights_0_we0 = ap_const_logic_0;
    }
}

void foo::thread_weights_1_address0() {
    weights_1_address0 = grp_mcmc_iteration_fu_2112_weights_1_address0.read();
}

void foo::thread_weights_1_ce0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        weights_1_ce0 = grp_mcmc_iteration_fu_2112_weights_1_ce0.read();
    } else {
        weights_1_ce0 = ap_const_logic_0;
    }
}

void foo::thread_weights_1_d0() {
    weights_1_d0 = grp_mcmc_iteration_fu_2112_weights_1_d0.read();
}

void foo::thread_weights_1_we0() {
    if (esl_seteq<1,6,6>(ap_ST_st112_fsm_48, ap_CS_fsm.read())) {
        weights_1_we0 = grp_mcmc_iteration_fu_2112_weights_1_we0.read();
    } else {
        weights_1_we0 = ap_const_logic_0;
    }
}

}

