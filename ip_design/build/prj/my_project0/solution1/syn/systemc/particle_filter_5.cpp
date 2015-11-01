#include "particle_filter.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particle_filter::thread_grp_fu_19956_p1() {
    if (esl_seteq<1,8,8>(ap_ST_st330_fsm_93, ap_CS_fsm.read())) {
        grp_fu_19956_p1 = tmp_s_reg_32616.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()))) {
        grp_fu_19956_p1 = weights_load_0_phi_reg_35270.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st258_fsm_66, ap_CS_fsm.read())) {
        grp_fu_19956_p1 = weights_partial_sums6_fu_1454.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st240_fsm_48, ap_CS_fsm.read())) {
        grp_fu_19956_p1 = ap_const_lv32_2F800000;
    } else if (esl_seteq<1,8,8>(ap_ST_st183_fsm_21, ap_CS_fsm.read())) {
        grp_fu_19956_p1 = ap_const_lv32_3F000000;
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it37.read()))) {
        grp_fu_19956_p1 = tmp_140_reg_32978.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st20_fsm_16, ap_CS_fsm.read())) {
        grp_fu_19956_p1 = fetched_state_parameters_fixed_0_reg_32755.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st16_fsm_12, ap_CS_fsm.read())) {
        grp_fu_19956_p1 = grp_fetch_data_parameters_fu_19634_ap_return_0.read();
    } else {
        grp_fu_19956_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_19960_ce() {
    grp_fu_19960_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19960_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()))) {
        grp_fu_19960_p0 = tmp_s_reg_32616.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st240_fsm_48, ap_CS_fsm.read())) {
        grp_fu_19960_p0 = reg_20839.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it37.read()))) {
        grp_fu_19960_p0 = s_t_reg_32972.read();
    } else {
        grp_fu_19960_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_19960_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()))) {
        grp_fu_19960_p1 = weights_load_1_phi_reg_35275.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st240_fsm_48, ap_CS_fsm.read())) {
        grp_fu_19960_p1 = ap_const_lv32_2F800000;
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it37.read()))) {
        grp_fu_19960_p1 = tmp_200_1_reg_32983.read();
    } else {
        grp_fu_19960_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_19964_ce() {
    grp_fu_19964_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19964_p0() {
    grp_fu_19964_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19964_p1() {
    grp_fu_19964_p1 = tmp_189_reg_33032.read();
}

void particle_filter::thread_grp_fu_19968_ce() {
    grp_fu_19968_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19968_p0() {
    grp_fu_19968_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19968_p1() {
    grp_fu_19968_p1 = tmp_255_0_1_reg_33037.read();
}

void particle_filter::thread_grp_fu_19972_ce() {
    grp_fu_19972_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19972_p0() {
    grp_fu_19972_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19972_p1() {
    grp_fu_19972_p1 = tmp_255_0_2_reg_33042.read();
}

void particle_filter::thread_grp_fu_19976_ce() {
    grp_fu_19976_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19976_p0() {
    grp_fu_19976_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19976_p1() {
    grp_fu_19976_p1 = tmp_255_0_3_reg_33047.read();
}

void particle_filter::thread_grp_fu_19980_ce() {
    grp_fu_19980_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19980_p0() {
    grp_fu_19980_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19980_p1() {
    grp_fu_19980_p1 = tmp_255_1_reg_33052.read();
}

void particle_filter::thread_grp_fu_19984_ce() {
    grp_fu_19984_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19984_p0() {
    grp_fu_19984_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19984_p1() {
    grp_fu_19984_p1 = tmp_255_1_1_reg_33057.read();
}

void particle_filter::thread_grp_fu_19988_ce() {
    grp_fu_19988_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19988_p0() {
    grp_fu_19988_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19988_p1() {
    grp_fu_19988_p1 = tmp_255_1_2_reg_33062.read();
}

void particle_filter::thread_grp_fu_19992_ce() {
    grp_fu_19992_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19992_p0() {
    grp_fu_19992_p0 = fetched_obs_parameters_rand_reg_32743.read();
}

void particle_filter::thread_grp_fu_19992_p1() {
    grp_fu_19992_p1 = tmp_255_1_3_reg_33067.read();
}

void particle_filter::thread_grp_fu_19996_ce() {
    grp_fu_19996_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19996_p0() {
    grp_fu_19996_p0 = ap_reg_ppstg_reg_20832_pp1_it115.read();
}

void particle_filter::thread_grp_fu_19996_p1() {
    grp_fu_19996_p1 = reg_20927.read();
}

void particle_filter::thread_grp_fu_20000_ce() {
    grp_fu_20000_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20000_p0() {
    grp_fu_20000_p0 = ap_reg_ppstg_reg_20845_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20000_p1() {
    grp_fu_20000_p1 = reg_20933.read();
}

void particle_filter::thread_grp_fu_20004_ce() {
    grp_fu_20004_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20004_p0() {
    grp_fu_20004_p0 = ap_reg_ppstg_reg_20851_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20004_p1() {
    grp_fu_20004_p1 = reg_20938.read();
}

void particle_filter::thread_grp_fu_20008_ce() {
    grp_fu_20008_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20008_p0() {
    grp_fu_20008_p0 = ap_reg_ppstg_reg_20857_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20008_p1() {
    grp_fu_20008_p1 = reg_20943.read();
}

void particle_filter::thread_grp_fu_20012_ce() {
    grp_fu_20012_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20012_p0() {
    grp_fu_20012_p0 = ap_reg_ppstg_reg_20863_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20012_p1() {
    grp_fu_20012_p1 = reg_20948.read();
}

void particle_filter::thread_grp_fu_20016_ce() {
    grp_fu_20016_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20016_p0() {
    grp_fu_20016_p0 = ap_reg_ppstg_reg_20869_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20016_p1() {
    grp_fu_20016_p1 = reg_20953.read();
}

void particle_filter::thread_grp_fu_20020_ce() {
    grp_fu_20020_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20020_p0() {
    grp_fu_20020_p0 = ap_reg_ppstg_reg_20875_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20020_p1() {
    grp_fu_20020_p1 = reg_20958.read();
}

void particle_filter::thread_grp_fu_20024_ce() {
    grp_fu_20024_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20024_p0() {
    grp_fu_20024_p0 = ap_reg_ppstg_reg_20881_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20024_p1() {
    grp_fu_20024_p1 = reg_20963.read();
}

void particle_filter::thread_grp_fu_20028_ce() {
    grp_fu_20028_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20028_p0() {
    if (ap_sig_bdd_57517.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_343_reg_33592_pp1_it123.read())) {
            grp_fu_20028_p0 = ap_reg_ppstg_reg_20832_pp1_it123.read();
        } else if (ap_sig_bdd_57518.read()) {
            grp_fu_20028_p0 = ap_reg_ppstg_reg_20839_pp1_it123.read();
        } else {
            grp_fu_20028_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20028_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20028_p1() {
    grp_fu_20028_p1 = reg_21016.read();
}

void particle_filter::thread_grp_fu_20032_ce() {
    grp_fu_20032_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20032_p0() {
    if (ap_sig_bdd_57522.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_1_reg_33634_pp1_it123.read())) {
            grp_fu_20032_p0 = ap_reg_ppstg_reg_20845_pp1_it123.read();
        } else if (ap_sig_bdd_57523.read()) {
            grp_fu_20032_p0 = ap_reg_ppstg_tmp_390_0_1_reg_33924_pp1_it123.read();
        } else {
            grp_fu_20032_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20032_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20032_p1() {
    grp_fu_20032_p1 = reg_21021.read();
}

void particle_filter::thread_grp_fu_20036_ce() {
    grp_fu_20036_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20036_p0() {
    if (ap_sig_bdd_57527.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_2_reg_33676_pp1_it123.read())) {
            grp_fu_20036_p0 = ap_reg_ppstg_reg_20851_pp1_it123.read();
        } else if (ap_sig_bdd_57528.read()) {
            grp_fu_20036_p0 = ap_reg_ppstg_tmp_390_0_2_reg_33929_pp1_it123.read();
        } else {
            grp_fu_20036_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20036_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20036_p1() {
    grp_fu_20036_p1 = reg_21026.read();
}

void particle_filter::thread_grp_fu_20040_ce() {
    grp_fu_20040_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20040_p0() {
    if (ap_sig_bdd_57532.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_3_reg_33718_pp1_it123.read())) {
            grp_fu_20040_p0 = ap_reg_ppstg_reg_20857_pp1_it123.read();
        } else if (ap_sig_bdd_57533.read()) {
            grp_fu_20040_p0 = ap_reg_ppstg_tmp_390_0_3_reg_33934_pp1_it123.read();
        } else {
            grp_fu_20040_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20040_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20040_p1() {
    grp_fu_20040_p1 = reg_21031.read();
}

void particle_filter::thread_grp_fu_20044_ce() {
    grp_fu_20044_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20044_p0() {
    if (ap_sig_bdd_57537.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_reg_33760_pp1_it123.read())) {
            grp_fu_20044_p0 = ap_reg_ppstg_reg_20863_pp1_it123.read();
        } else if (ap_sig_bdd_57538.read()) {
            grp_fu_20044_p0 = ap_reg_ppstg_tmp_390_1_reg_33939_pp1_it123.read();
        } else {
            grp_fu_20044_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20044_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20044_p1() {
    grp_fu_20044_p1 = reg_21036.read();
}

void particle_filter::thread_grp_fu_20048_ce() {
    grp_fu_20048_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20048_p0() {
    if (ap_sig_bdd_57542.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_1_reg_33802_pp1_it123.read())) {
            grp_fu_20048_p0 = ap_reg_ppstg_reg_20869_pp1_it123.read();
        } else if (ap_sig_bdd_57543.read()) {
            grp_fu_20048_p0 = ap_reg_ppstg_tmp_390_1_1_reg_33944_pp1_it123.read();
        } else {
            grp_fu_20048_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20048_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20048_p1() {
    grp_fu_20048_p1 = reg_21041.read();
}

void particle_filter::thread_grp_fu_20052_ce() {
    grp_fu_20052_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20052_p0() {
    if (ap_sig_bdd_57547.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_2_reg_33844_pp1_it123.read())) {
            grp_fu_20052_p0 = ap_reg_ppstg_reg_20875_pp1_it123.read();
        } else if (ap_sig_bdd_57548.read()) {
            grp_fu_20052_p0 = ap_reg_ppstg_tmp_390_1_2_reg_33949_pp1_it123.read();
        } else {
            grp_fu_20052_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20052_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20052_p1() {
    grp_fu_20052_p1 = reg_21046.read();
}

void particle_filter::thread_grp_fu_20056_ce() {
    grp_fu_20056_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20056_p0() {
    if (ap_sig_bdd_57552.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_3_reg_33886_pp1_it123.read())) {
            grp_fu_20056_p0 = ap_reg_ppstg_reg_20881_pp1_it123.read();
        } else if (ap_sig_bdd_57553.read()) {
            grp_fu_20056_p0 = ap_reg_ppstg_tmp_390_1_3_reg_33954_pp1_it123.read();
        } else {
            grp_fu_20056_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20056_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20056_p1() {
    grp_fu_20056_p1 = reg_21051.read();
}

void particle_filter::thread_grp_fu_20064_ce() {
    grp_fu_20064_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20064_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()))) {
        grp_fu_20064_p0 = reg_20791.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st262_fsm_70, ap_CS_fsm.read())) {
        grp_fu_20064_p0 = tmp_246_reg_34762.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st225_fsm_33, ap_CS_fsm.read())) {
        grp_fu_20064_p0 = weights_partial_sums_reg_19344.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20064_p0 = ap_reg_ppstg_reg_20825_pp1_it81.read();
    } else {
        grp_fu_20064_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20064_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_st262_fsm_70, ap_CS_fsm.read()) || 
         (esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())))) {
        grp_fu_20064_p1 = weights_sum_1_reg_34756.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st225_fsm_33, ap_CS_fsm.read())) {
        grp_fu_20064_p1 = tmp_s_reg_32616.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20064_p1 = tmp_329_reg_33284.read();
    } else {
        grp_fu_20064_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20068_ce() {
    grp_fu_20068_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20068_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()))) {
        grp_fu_20068_p0 = reg_20805.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20068_p0 = ap_reg_ppstg_temp2_0_1_reg_33242_pp1_it81.read();
    } else {
        grp_fu_20068_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20068_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()))) {
        grp_fu_20068_p1 = weights_sum_1_reg_34756.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20068_p1 = tmp_329_0_1_reg_33289.read();
    } else {
        grp_fu_20068_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20072_ce() {
    grp_fu_20072_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20072_p0() {
    grp_fu_20072_p0 = ap_reg_ppstg_temp2_0_2_reg_33248_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20072_p1() {
    grp_fu_20072_p1 = tmp_329_0_2_reg_33294.read();
}

void particle_filter::thread_grp_fu_20076_ce() {
    grp_fu_20076_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20076_p0() {
    grp_fu_20076_p0 = ap_reg_ppstg_temp2_0_3_reg_33254_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20076_p1() {
    grp_fu_20076_p1 = tmp_329_0_3_reg_33299.read();
}

void particle_filter::thread_grp_fu_20080_ce() {
    grp_fu_20080_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20080_p0() {
    grp_fu_20080_p0 = ap_reg_ppstg_temp2_1_reg_33260_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20080_p1() {
    grp_fu_20080_p1 = tmp_329_1_reg_33304.read();
}

void particle_filter::thread_grp_fu_20084_ce() {
    grp_fu_20084_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20084_p0() {
    grp_fu_20084_p0 = ap_reg_ppstg_temp2_1_1_reg_33266_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20084_p1() {
    grp_fu_20084_p1 = tmp_329_1_1_reg_33309.read();
}

void particle_filter::thread_grp_fu_20088_ce() {
    grp_fu_20088_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20088_p0() {
    grp_fu_20088_p0 = ap_reg_ppstg_temp2_1_2_reg_33272_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20088_p1() {
    grp_fu_20088_p1 = tmp_329_1_2_reg_33314.read();
}

void particle_filter::thread_grp_fu_20092_ce() {
    grp_fu_20092_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20092_p0() {
    grp_fu_20092_p0 = ap_reg_ppstg_temp2_1_3_reg_33278_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20092_p1() {
    grp_fu_20092_p1 = tmp_329_1_3_reg_33319.read();
}

void particle_filter::thread_grp_fu_20097_ce() {
    grp_fu_20097_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20097_p0() {
    if (esl_seteq<1,8,8>(ap_ST_st234_fsm_42, ap_CS_fsm.read())) {
        grp_fu_20097_p0 = u5_reg_34408.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33386_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20283_p2.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20709_p2.read()))) {
        grp_fu_20097_p0 = tmp_404_fu_25516_p1.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33386_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20283_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20709_p2.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20714_p2.read()))) {
        grp_fu_20097_p0 = tmp_414_fu_25512_p1.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33386_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20283_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20709_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20714_p2.read()))) {
        grp_fu_20097_p0 = tmp_416_fu_25504_p1.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st9_fsm_5, ap_CS_fsm.read())) {
        grp_fu_20097_p0 = P.read();
    } else {
        grp_fu_20097_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20100_ce() {
    grp_fu_20100_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20100_p0() {
    if (esl_seteq<1,8,8>(ap_ST_st234_fsm_42, ap_CS_fsm.read())) {
        grp_fu_20100_p0 = u6_reg_34428.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()))) {
        grp_fu_20100_p0 = tmp_417_fu_25508_p1.read();
    } else {
        grp_fu_20100_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20103_ce() {
    grp_fu_20103_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20103_p0() {
    if (ap_sig_bdd_6137.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20718_p2.read())) {
            grp_fu_20103_p0 = tmp_351_0_s_fu_25532_p1.read();
        } else if (ap_sig_bdd_57559.read()) {
            grp_fu_20103_p0 = tmp_359_0_s_fu_25528_p1.read();
        } else if (ap_sig_bdd_57557.read()) {
            grp_fu_20103_p0 = tmp_386_0_s_fu_25520_p1.read();
        } else {
            grp_fu_20103_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20103_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20106_ce() {
    grp_fu_20106_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20106_p0() {
    grp_fu_20106_p0 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33528.read());
}

void particle_filter::thread_grp_fu_20109_ce() {
    grp_fu_20109_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20109_p0() {
    if (ap_sig_bdd_6344.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20727_p2.read())) {
            grp_fu_20109_p0 = tmp_351_0_4_fu_25548_p1.read();
        } else if (ap_sig_bdd_57564.read()) {
            grp_fu_20109_p0 = tmp_359_0_4_fu_25544_p1.read();
        } else if (ap_sig_bdd_57562.read()) {
            grp_fu_20109_p0 = tmp_386_0_4_fu_25536_p1.read();
        } else {
            grp_fu_20109_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20109_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20112_ce() {
    grp_fu_20112_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20112_p0() {
    grp_fu_20112_p0 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33554.read());
}

void particle_filter::thread_grp_fu_20115_ce() {
    grp_fu_20115_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20115_p0() {
    if (ap_sig_bdd_6551.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20736_p2.read())) {
            grp_fu_20115_p0 = tmp_351_0_5_fu_25564_p1.read();
        } else if (ap_sig_bdd_57569.read()) {
            grp_fu_20115_p0 = tmp_359_0_5_fu_25560_p1.read();
        } else if (ap_sig_bdd_57567.read()) {
            grp_fu_20115_p0 = tmp_386_0_5_fu_25552_p1.read();
        } else {
            grp_fu_20115_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20115_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20118_ce() {
    grp_fu_20118_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20118_p0() {
    grp_fu_20118_p0 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33580.read());
}

void particle_filter::thread_grp_fu_20121_ce() {
    grp_fu_20121_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20121_p0() {
    if (ap_sig_bdd_6758.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20745_p2.read())) {
            grp_fu_20121_p0 = tmp_351_s_fu_25580_p1.read();
        } else if (ap_sig_bdd_57574.read()) {
            grp_fu_20121_p0 = tmp_359_s_fu_25576_p1.read();
        } else if (ap_sig_bdd_57572.read()) {
            grp_fu_20121_p0 = tmp_386_s_fu_25568_p1.read();
        } else {
            grp_fu_20121_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20121_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20124_ce() {
    grp_fu_20124_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20124_p0() {
    grp_fu_20124_p0 = esl_zext<32,9>(n_minus_x_V_reg_33502.read());
}

void particle_filter::thread_grp_fu_20127_ce() {
    grp_fu_20127_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20127_p0() {
    if (ap_sig_bdd_6965.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20754_p2.read())) {
            grp_fu_20127_p0 = tmp_351_1_s_fu_25596_p1.read();
        } else if (ap_sig_bdd_57579.read()) {
            grp_fu_20127_p0 = tmp_359_1_s_fu_25592_p1.read();
        } else if (ap_sig_bdd_57577.read()) {
            grp_fu_20127_p0 = tmp_386_1_s_fu_25584_p1.read();
        } else {
            grp_fu_20127_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20127_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20130_ce() {
    grp_fu_20130_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20130_p0() {
    grp_fu_20130_p0 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33528.read());
}

void particle_filter::thread_grp_fu_20133_ce() {
    grp_fu_20133_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20133_p0() {
    if (ap_sig_bdd_7172.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20763_p2.read())) {
            grp_fu_20133_p0 = tmp_351_1_4_fu_25612_p1.read();
        } else if (ap_sig_bdd_57584.read()) {
            grp_fu_20133_p0 = tmp_359_1_4_fu_25608_p1.read();
        } else if (ap_sig_bdd_57582.read()) {
            grp_fu_20133_p0 = tmp_386_1_4_fu_25600_p1.read();
        } else {
            grp_fu_20133_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20133_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20136_ce() {
    grp_fu_20136_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20136_p0() {
    grp_fu_20136_p0 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33554.read());
}

void particle_filter::thread_grp_fu_20139_ce() {
    grp_fu_20139_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20139_p0() {
    if (ap_sig_bdd_7379.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20772_p2.read())) {
            grp_fu_20139_p0 = tmp_351_1_5_fu_25628_p1.read();
        } else if (ap_sig_bdd_57589.read()) {
            grp_fu_20139_p0 = tmp_359_1_5_fu_25624_p1.read();
        } else if (ap_sig_bdd_57587.read()) {
            grp_fu_20139_p0 = tmp_386_1_5_fu_25616_p1.read();
        } else {
            grp_fu_20139_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20139_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20142_ce() {
    grp_fu_20142_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20142_p0() {
    grp_fu_20142_p0 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33580.read());
}

void particle_filter::thread_grp_fu_20145_ce() {
    grp_fu_20145_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20145_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_st278_fsm_86, ap_CS_fsm.read()) || 
         (esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it22.read())))) {
        grp_fu_20145_p0 = reg_21104.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st244_fsm_52, ap_CS_fsm.read())) {
        grp_fu_20145_p0 = reg_20805.read();
    } else {
        grp_fu_20145_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20148_ce() {
    grp_fu_20148_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20148_p0() {
    grp_fu_20148_p0 = v_assign_2_1_reg_35280.read();
}

void particle_filter::thread_grp_fu_20151_ce() {
    grp_fu_20151_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20151_opcode() {
    if (esl_seteq<1,8,8>(ap_ST_st259_fsm_67, ap_CS_fsm.read())) {
        grp_fu_20151_opcode = ap_const_lv5_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())))) {
        grp_fu_20151_opcode = ap_const_lv5_4;
    } else if ((esl_seteq<1,8,8>(ap_ST_st271_fsm_79, ap_CS_fsm.read()) || 
                (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it56.read())))) {
        grp_fu_20151_opcode = ap_const_lv5_2;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg7_fsm_32, ap_CS_fsm.read())) || 
                (esl_seteq<1,8,8>(ap_ST_pp2_stg1_fsm_26, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it3.read())) || 
                (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, tmp_88_fu_21581_p2.read())))) {
        grp_fu_20151_opcode = ap_const_lv5_3;
    } else {
        grp_fu_20151_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void particle_filter::thread_grp_fu_20151_p0() {
    if (esl_seteq<1,8,8>(ap_ST_st271_fsm_79, ap_CS_fsm.read())) {
        grp_fu_20151_p0 = reg_20812.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st259_fsm_67, ap_CS_fsm.read())) {
        grp_fu_20151_p0 = weights_partial_sums_reg_19344.read();
    } else if (((esl_seteq<1,8,8>(ap_ST_pp2_stg1_fsm_26, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read())))) {
        grp_fu_20151_p0 = tmp_266_1_reg_34349.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg7_fsm_32, ap_CS_fsm.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())))) {
        grp_fu_20151_p0 = reg_20825.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20151_p0 = temp_reg_33122.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read())) {
        grp_fu_20151_p0 = log_lik_out_reg_2374.read();
    } else {
        grp_fu_20151_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20151_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())))) {
        grp_fu_20151_p1 = ap_const_lv32_7149F2CA;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg7_fsm_32, ap_CS_fsm.read())) || 
                (esl_seteq<1,8,8>(ap_ST_pp2_stg1_fsm_26, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read())) || 
                esl_seteq<1,8,8>(ap_ST_st259_fsm_67, ap_CS_fsm.read()))) {
        grp_fu_20151_p1 = ap_const_lv32_0;
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20151_p1 = ap_const_lv32_42880000;
    } else if ((esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read()) || 
                esl_seteq<1,8,8>(ap_ST_st271_fsm_79, ap_CS_fsm.read()))) {
        grp_fu_20151_p1 = ap_const_lv32_F149F2CA;
    } else {
        grp_fu_20151_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20157_ce() {
    grp_fu_20157_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20157_opcode() {
    grp_fu_20157_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20157_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20157_p0 = temp_0_1_reg_33129.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read())) {
        grp_fu_20157_p0 = log_lik_out_reg_2374.read();
    } else {
        grp_fu_20157_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20157_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20157_p1 = ap_const_lv32_42880000;
    } else if (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read())) {
        grp_fu_20157_p1 = ap_const_lv32_0;
    } else {
        grp_fu_20157_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20165_ce() {
    grp_fu_20165_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20165_opcode() {
    grp_fu_20165_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20165_p0() {
    grp_fu_20165_p0 = temp_0_2_reg_33136.read();
}

void particle_filter::thread_grp_fu_20165_p1() {
    grp_fu_20165_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20170_ce() {
    grp_fu_20170_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20170_opcode() {
    grp_fu_20170_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20170_p0() {
    grp_fu_20170_p0 = temp_0_3_reg_33143.read();
}

void particle_filter::thread_grp_fu_20170_p1() {
    grp_fu_20170_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20175_ce() {
    grp_fu_20175_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20175_opcode() {
    grp_fu_20175_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20175_p0() {
    grp_fu_20175_p0 = temp_1_reg_33150.read();
}

void particle_filter::thread_grp_fu_20175_p1() {
    grp_fu_20175_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20180_ce() {
    grp_fu_20180_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20180_opcode() {
    grp_fu_20180_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20180_p0() {
    grp_fu_20180_p0 = temp_1_1_reg_33157.read();
}

void particle_filter::thread_grp_fu_20180_p1() {
    grp_fu_20180_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20185_ce() {
    grp_fu_20185_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20185_opcode() {
    grp_fu_20185_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20185_p0() {
    grp_fu_20185_p0 = temp_1_2_reg_33164.read();
}

void particle_filter::thread_grp_fu_20185_p1() {
    grp_fu_20185_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20190_ce() {
    grp_fu_20190_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20190_opcode() {
    grp_fu_20190_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20190_p0() {
    grp_fu_20190_p0 = temp_1_3_reg_33171.read();
}

void particle_filter::thread_grp_fu_20190_p1() {
    grp_fu_20190_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20195_ce() {
    grp_fu_20195_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20195_opcode() {
    grp_fu_20195_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20195_p0() {
    grp_fu_20195_p0 = ap_reg_ppstg_temp_reg_33122_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20195_p1() {
    grp_fu_20195_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20200_ce() {
    grp_fu_20200_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20200_opcode() {
    grp_fu_20200_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20200_p0() {
    grp_fu_20200_p0 = ap_reg_ppstg_temp_0_1_reg_33129_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20200_p1() {
    grp_fu_20200_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20205_ce() {
    grp_fu_20205_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20205_opcode() {
    grp_fu_20205_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20205_p0() {
    grp_fu_20205_p0 = ap_reg_ppstg_temp_0_2_reg_33136_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20205_p1() {
    grp_fu_20205_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20210_ce() {
    grp_fu_20210_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20210_opcode() {
    grp_fu_20210_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20210_p0() {
    grp_fu_20210_p0 = ap_reg_ppstg_temp_0_3_reg_33143_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20210_p1() {
    grp_fu_20210_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20215_ce() {
    grp_fu_20215_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20215_opcode() {
    grp_fu_20215_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20215_p0() {
    grp_fu_20215_p0 = ap_reg_ppstg_temp_1_reg_33150_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20215_p1() {
    grp_fu_20215_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20220_ce() {
    grp_fu_20220_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20220_opcode() {
    grp_fu_20220_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20220_p0() {
    grp_fu_20220_p0 = ap_reg_ppstg_temp_1_1_reg_33157_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20220_p1() {
    grp_fu_20220_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20225_ce() {
    grp_fu_20225_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20225_opcode() {
    grp_fu_20225_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20225_p0() {
    grp_fu_20225_p0 = ap_reg_ppstg_temp_1_2_reg_33164_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20225_p1() {
    grp_fu_20225_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20230_ce() {
    grp_fu_20230_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20230_opcode() {
    grp_fu_20230_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20230_p0() {
    grp_fu_20230_p0 = ap_reg_ppstg_temp_1_3_reg_33171_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20230_p1() {
    grp_fu_20230_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20235_ce() {
    grp_fu_20235_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20235_opcode() {
    grp_fu_20235_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20235_p0() {
    grp_fu_20235_p0 = p_1_i_phi_fu_2426_p6.read();
}

void particle_filter::thread_grp_fu_20235_p1() {
    grp_fu_20235_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20241_ce() {
    grp_fu_20241_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20241_opcode() {
    grp_fu_20241_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20241_p0() {
    grp_fu_20241_p0 = p_1_i_0_1_phi_fu_2442_p6.read();
}

void particle_filter::thread_grp_fu_20241_p1() {
    grp_fu_20241_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20247_ce() {
    grp_fu_20247_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20247_opcode() {
    grp_fu_20247_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20247_p0() {
    grp_fu_20247_p0 = p_1_i_0_2_phi_fu_2458_p6.read();
}

void particle_filter::thread_grp_fu_20247_p1() {
    grp_fu_20247_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20253_ce() {
    grp_fu_20253_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20253_opcode() {
    grp_fu_20253_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20253_p0() {
    grp_fu_20253_p0 = p_1_i_0_3_phi_fu_2474_p6.read();
}

void particle_filter::thread_grp_fu_20253_p1() {
    grp_fu_20253_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20259_ce() {
    grp_fu_20259_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20259_opcode() {
    grp_fu_20259_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20259_p0() {
    grp_fu_20259_p0 = p_1_i_1_phi_fu_2490_p6.read();
}

void particle_filter::thread_grp_fu_20259_p1() {
    grp_fu_20259_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20265_ce() {
    grp_fu_20265_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20265_opcode() {
    grp_fu_20265_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20265_p0() {
    grp_fu_20265_p0 = p_1_i_1_1_phi_fu_2506_p6.read();
}

void particle_filter::thread_grp_fu_20265_p1() {
    grp_fu_20265_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20271_ce() {
    grp_fu_20271_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20271_opcode() {
    grp_fu_20271_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20271_p0() {
    grp_fu_20271_p0 = p_1_i_1_2_phi_fu_2522_p6.read();
}

void particle_filter::thread_grp_fu_20271_p1() {
    grp_fu_20271_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20277_ce() {
    grp_fu_20277_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20277_opcode() {
    grp_fu_20277_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20277_p0() {
    grp_fu_20277_p0 = p_1_i_1_3_phi_fu_2538_p6.read();
}

void particle_filter::thread_grp_fu_20277_p1() {
    grp_fu_20277_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20283_ce() {
    grp_fu_20283_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20283_opcode() {
    grp_fu_20283_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20283_p0() {
    grp_fu_20283_p0 = ap_reg_ppstg_p_1_i_reg_2421_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20283_p1() {
    grp_fu_20283_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20289_ce() {
    grp_fu_20289_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20289_opcode() {
    grp_fu_20289_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20289_p0() {
    grp_fu_20289_p0 = ap_reg_ppstg_p_1_i_0_1_reg_2437_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20289_p1() {
    grp_fu_20289_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20295_ce() {
    grp_fu_20295_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20295_opcode() {
    grp_fu_20295_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20295_p0() {
    grp_fu_20295_p0 = ap_reg_ppstg_p_1_i_0_2_reg_2453_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20295_p1() {
    grp_fu_20295_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20301_ce() {
    grp_fu_20301_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20301_opcode() {
    grp_fu_20301_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20301_p0() {
    grp_fu_20301_p0 = ap_reg_ppstg_p_1_i_0_3_reg_2469_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20301_p1() {
    grp_fu_20301_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20307_ce() {
    grp_fu_20307_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20307_opcode() {
    grp_fu_20307_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20307_p0() {
    grp_fu_20307_p0 = ap_reg_ppstg_p_1_i_1_reg_2485_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20307_p1() {
    grp_fu_20307_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20313_ce() {
    grp_fu_20313_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20313_opcode() {
    grp_fu_20313_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20313_p0() {
    grp_fu_20313_p0 = ap_reg_ppstg_p_1_i_1_1_reg_2501_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20313_p1() {
    grp_fu_20313_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20319_ce() {
    grp_fu_20319_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20319_opcode() {
    grp_fu_20319_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20319_p0() {
    grp_fu_20319_p0 = ap_reg_ppstg_p_1_i_1_2_reg_2517_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20319_p1() {
    grp_fu_20319_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20325_ce() {
    grp_fu_20325_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20325_opcode() {
    grp_fu_20325_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20325_p0() {
    grp_fu_20325_p0 = ap_reg_ppstg_p_1_i_1_3_reg_2533_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20325_p1() {
    grp_fu_20325_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20331_ce() {
    grp_fu_20331_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20331_opcode() {
    grp_fu_20331_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20331_p0() {
    grp_fu_20331_p0 = temp3_0_1_phi_fu_19184_p10.read();
}

void particle_filter::thread_grp_fu_20331_p1() {
    grp_fu_20331_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20337_ce() {
    grp_fu_20337_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20337_opcode() {
    grp_fu_20337_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20337_p0() {
    grp_fu_20337_p0 = temp3_1_1_phi_fu_19200_p10.read();
}

void particle_filter::thread_grp_fu_20337_p1() {
    grp_fu_20337_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20343_ce() {
    grp_fu_20343_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20343_opcode() {
    grp_fu_20343_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20343_p0() {
    grp_fu_20343_p0 = temp3_2_1_phi_fu_19216_p10.read();
}

void particle_filter::thread_grp_fu_20343_p1() {
    grp_fu_20343_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20349_ce() {
    grp_fu_20349_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20349_opcode() {
    grp_fu_20349_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20349_p0() {
    grp_fu_20349_p0 = tmp_397_0_3_phi_fu_19232_p10.read();
}

void particle_filter::thread_grp_fu_20349_p1() {
    grp_fu_20349_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20355_ce() {
    grp_fu_20355_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20355_opcode() {
    grp_fu_20355_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20355_p0() {
    grp_fu_20355_p0 = temp3_0_3_phi_fu_19248_p10.read();
}

void particle_filter::thread_grp_fu_20355_p1() {
    grp_fu_20355_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20361_ce() {
    grp_fu_20361_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20361_opcode() {
    grp_fu_20361_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20361_p0() {
    grp_fu_20361_p0 = temp3_1_3_phi_fu_19264_p10.read();
}

void particle_filter::thread_grp_fu_20361_p1() {
    grp_fu_20361_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20367_ce() {
    grp_fu_20367_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20367_opcode() {
    grp_fu_20367_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20367_p0() {
    grp_fu_20367_p0 = temp3_2_3_phi_fu_19280_p10.read();
}

void particle_filter::thread_grp_fu_20367_p1() {
    grp_fu_20367_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20373_ce() {
    grp_fu_20373_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20373_opcode() {
    grp_fu_20373_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20373_p0() {
    grp_fu_20373_p0 = tmp_397_1_3_phi_fu_19296_p10.read();
}

void particle_filter::thread_grp_fu_20373_p1() {
    grp_fu_20373_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20379_ce() {
    grp_fu_20379_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20379_opcode() {
    grp_fu_20379_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20379_p0() {
    grp_fu_20379_p0 = likelihood_value_0_reg_34259.read();
}

void particle_filter::thread_grp_fu_20379_p1() {
    grp_fu_20379_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20384_ce() {
    grp_fu_20384_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20384_opcode() {
    grp_fu_20384_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20384_p0() {
    grp_fu_20384_p0 = log_lik_particle_max_keep_1_reg_34268.read();
}

void particle_filter::thread_grp_fu_20384_p1() {
    grp_fu_20384_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20389_ce() {
    grp_fu_20389_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20389_opcode() {
    grp_fu_20389_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20389_p0() {
    grp_fu_20389_p0 = likelihood_value_0_reg_34259.read();
}

void particle_filter::thread_grp_fu_20389_p1() {
    grp_fu_20389_p1 = log_lik_particle_max_keep_1_reg_34268.read();
}

void particle_filter::thread_grp_fu_20396_ce() {
    grp_fu_20396_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20396_p0() {
    grp_fu_20396_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20396_p1() {
    grp_fu_20396_p1 = reg_20791.read();
}

void particle_filter::thread_grp_fu_20401_ce() {
    grp_fu_20401_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20401_p0() {
    grp_fu_20401_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20401_p1() {
    if (esl_seteq<1,8,8>(ap_ST_st249_fsm_57, ap_CS_fsm.read())) {
        grp_fu_20401_p1 = reg_21104.read();
    } else if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33386_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20283_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20709_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20714_p2.read())) || 
                (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33386_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20283_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20709_p2.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20714_p2.read())))) {
        grp_fu_20401_p1 = ap_reg_ppstg_p_1_i_reg_2421_pp1_it101.read();
    } else {
        grp_fu_20401_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20407_ce() {
    grp_fu_20407_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20407_p0() {
    grp_fu_20407_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20407_p1() {
    grp_fu_20407_p1 = ap_reg_ppstg_p_1_i_0_1_reg_2437_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20413_ce() {
    grp_fu_20413_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20413_p0() {
    grp_fu_20413_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20413_p1() {
    grp_fu_20413_p1 = ap_reg_ppstg_p_1_i_0_2_reg_2453_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20419_ce() {
    grp_fu_20419_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20419_p0() {
    grp_fu_20419_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20419_p1() {
    grp_fu_20419_p1 = ap_reg_ppstg_p_1_i_0_3_reg_2469_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20425_ce() {
    grp_fu_20425_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20425_p0() {
    grp_fu_20425_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20425_p1() {
    grp_fu_20425_p1 = ap_reg_ppstg_p_1_i_1_reg_2485_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20431_ce() {
    grp_fu_20431_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20431_p0() {
    grp_fu_20431_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20431_p1() {
    grp_fu_20431_p1 = ap_reg_ppstg_p_1_i_1_1_reg_2501_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20437_ce() {
    grp_fu_20437_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20437_p0() {
    grp_fu_20437_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20437_p1() {
    grp_fu_20437_p1 = ap_reg_ppstg_p_1_i_1_2_reg_2517_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20443_ce() {
    grp_fu_20443_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20443_p0() {
    grp_fu_20443_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20443_p1() {
    grp_fu_20443_p1 = ap_reg_ppstg_p_1_i_1_3_reg_2533_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20449_ce() {
    grp_fu_20449_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20449_p0() {
    grp_fu_20449_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20449_p1() {
    grp_fu_20449_p1 = reg_20887.read();
}

void particle_filter::thread_grp_fu_20454_ce() {
    grp_fu_20454_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20454_p0() {
    grp_fu_20454_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20454_p1() {
    grp_fu_20454_p1 = reg_20892.read();
}

void particle_filter::thread_grp_fu_20459_ce() {
    grp_fu_20459_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20459_p0() {
    grp_fu_20459_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20459_p1() {
    grp_fu_20459_p1 = reg_20897.read();
}

void particle_filter::thread_grp_fu_20464_ce() {
    grp_fu_20464_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20464_p0() {
    grp_fu_20464_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20464_p1() {
    grp_fu_20464_p1 = reg_20902.read();
}

void particle_filter::thread_grp_fu_20469_ce() {
    grp_fu_20469_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20469_p0() {
    grp_fu_20469_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20469_p1() {
    grp_fu_20469_p1 = reg_20907.read();
}

void particle_filter::thread_grp_fu_20474_ce() {
    grp_fu_20474_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20474_p0() {
    grp_fu_20474_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20474_p1() {
    grp_fu_20474_p1 = reg_20912.read();
}

void particle_filter::thread_grp_fu_20479_ce() {
    grp_fu_20479_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20479_p0() {
    grp_fu_20479_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20479_p1() {
    grp_fu_20479_p1 = reg_20917.read();
}

void particle_filter::thread_grp_fu_20484_ce() {
    grp_fu_20484_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20484_p0() {
    grp_fu_20484_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20484_p1() {
    grp_fu_20484_p1 = reg_20922.read();
}

void particle_filter::thread_grp_fu_20489_ce() {
    grp_fu_20489_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20489_p0() {
    grp_fu_20489_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20489_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
         esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read()))) {
        grp_fu_20489_p1 = tmp_265_1_reg_34344.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
                esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read()))) {
        grp_fu_20489_p1 = reg_20812.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it61.read()))) {
        grp_fu_20489_p1 = ap_reg_ppstg_temp_reg_33122_pp1_it60.read();
    } else {
        grp_fu_20489_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20494_ce() {
    grp_fu_20494_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20494_p0() {
    grp_fu_20494_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20494_p1() {
    grp_fu_20494_p1 = ap_reg_ppstg_temp_0_1_reg_33129_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20499_ce() {
    grp_fu_20499_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20499_p0() {
    grp_fu_20499_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20499_p1() {
    grp_fu_20499_p1 = ap_reg_ppstg_temp_0_2_reg_33136_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20504_ce() {
    grp_fu_20504_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20504_p0() {
    grp_fu_20504_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20504_p1() {
    grp_fu_20504_p1 = ap_reg_ppstg_temp_0_3_reg_33143_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20509_ce() {
    grp_fu_20509_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20509_p0() {
    grp_fu_20509_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20509_p1() {
    grp_fu_20509_p1 = ap_reg_ppstg_temp_1_reg_33150_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20514_ce() {
    grp_fu_20514_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20514_p0() {
    grp_fu_20514_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20514_p1() {
    grp_fu_20514_p1 = ap_reg_ppstg_temp_1_1_reg_33157_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20519_ce() {
    grp_fu_20519_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20519_p0() {
    grp_fu_20519_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20519_p1() {
    grp_fu_20519_p1 = ap_reg_ppstg_temp_1_2_reg_33164_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20524_ce() {
    grp_fu_20524_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20524_p0() {
    grp_fu_20524_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20524_p1() {
    grp_fu_20524_p1 = ap_reg_ppstg_temp_1_3_reg_33171_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20709_p2() {
    grp_fu_20709_p2 = (!x_V_reg_33492.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33492.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20714_p2() {
    grp_fu_20714_p2 = (!x_V_reg_33492.read().is_01() || !n_V_reg_33484.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33492.read() == n_V_reg_33484.read());
}

void particle_filter::thread_grp_fu_20718_p2() {
    grp_fu_20718_p2 = (!x_V_0_1_reg_33518.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33518.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20723_p2() {
    grp_fu_20723_p2 = (!x_V_0_1_reg_33518.read().is_01() || !n_V_0_1_reg_33510.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33518.read() == n_V_0_1_reg_33510.read());
}

void particle_filter::thread_grp_fu_20727_p2() {
    grp_fu_20727_p2 = (!x_V_0_2_reg_33544.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33544.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20732_p2() {
    grp_fu_20732_p2 = (!x_V_0_2_reg_33544.read().is_01() || !n_V_0_2_reg_33536.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33544.read() == n_V_0_2_reg_33536.read());
}

void particle_filter::thread_grp_fu_20736_p2() {
    grp_fu_20736_p2 = (!x_V_0_3_reg_33570.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33570.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20741_p2() {
    grp_fu_20741_p2 = (!x_V_0_3_reg_33570.read().is_01() || !n_V_0_3_reg_33562.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33570.read() == n_V_0_3_reg_33562.read());
}

void particle_filter::thread_grp_fu_20745_p2() {
    grp_fu_20745_p2 = (!x_V_reg_33492.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33492.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20750_p2() {
    grp_fu_20750_p2 = (!x_V_reg_33492.read().is_01() || !n_V_reg_33484.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33492.read() == n_V_reg_33484.read());
}

void particle_filter::thread_grp_fu_20754_p2() {
    grp_fu_20754_p2 = (!x_V_0_1_reg_33518.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33518.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20759_p2() {
    grp_fu_20759_p2 = (!x_V_0_1_reg_33518.read().is_01() || !n_V_0_1_reg_33510.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33518.read() == n_V_0_1_reg_33510.read());
}

void particle_filter::thread_grp_fu_20763_p2() {
    grp_fu_20763_p2 = (!x_V_0_2_reg_33544.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33544.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20768_p2() {
    grp_fu_20768_p2 = (!x_V_0_2_reg_33544.read().is_01() || !n_V_0_2_reg_33536.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33544.read() == n_V_0_2_reg_33536.read());
}

void particle_filter::thread_grp_fu_20772_p2() {
    grp_fu_20772_p2 = (!x_V_0_3_reg_33570.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33570.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20777_p2() {
    grp_fu_20777_p2 = (!x_V_0_3_reg_33570.read().is_01() || !n_V_0_3_reg_33562.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33570.read() == n_V_0_3_reg_33562.read());
}

void particle_filter::thread_grp_fu_21476_ce() {
    grp_fu_21476_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_21476_p0() {
    grp_fu_21476_p0 =  (sc_lv<31>) (chunk_size_true_2_reg_32066.read());
}

void particle_filter::thread_grp_fu_21476_p1() {
    grp_fu_21476_p1 = tmp_15_reg_32577.read();
}

void particle_filter::thread_grp_fu_31009_ce() {
    grp_fu_31009_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_31009_p0() {
    grp_fu_31009_p0 = result_V_reg_36274.read();
}

void particle_filter::thread_grp_fu_31009_p1() {
    grp_fu_31009_p1 = chunk_size_true_2_reg_32066.read();
}

void particle_filter::thread_grp_fu_31013_ce() {
    grp_fu_31013_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_31013_p0() {
    grp_fu_31013_p0 = result_V_reg_36274.read();
}

void particle_filter::thread_grp_fu_31013_p1() {
    grp_fu_31013_p1 = chunk_size_true_2_reg_32066.read();
}

void particle_filter::thread_i10_cast_fu_30570_p1() {
    i10_cast_fu_30570_p1 = esl_zext<32,31>(i10_mid2_reg_36079.read());
}

void particle_filter::thread_i10_mid2_fu_30523_p3() {
    i10_mid2_fu_30523_p3 = (!exitcond12_fu_30518_p2.read()[0].is_01())? sc_lv<31>(): ((exitcond12_fu_30518_p2.read()[0].to_bool())? i10_reg_19467.read(): ap_const_lv31_0);
}

void particle_filter::thread_i4_phi_fu_19337_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
         esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_34295.read()))) {
        i4_phi_fu_19337_p4 = i_2_reg_34299.read();
    } else {
        i4_phi_fu_19337_p4 = i4_reg_19333.read();
    }
}

void particle_filter::thread_i7_phi_fu_19371_p4() {
    if ((esl_seteq<1,8,8>(ap_ST_pp3_stg0_fsm_90, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_34802.read()))) {
        i7_phi_fu_19371_p4 = i_3_reg_34859.read();
    } else {
        i7_phi_fu_19371_p4 = i7_reg_19367.read();
    }
}

void particle_filter::thread_i_1_fu_25946_p2() {
    i_1_fu_25946_p2 = (!i6_reg_19356.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(i6_reg_19356.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void particle_filter::thread_i_2_fu_25859_p2() {
    i_2_fu_25859_p2 = (!i4_phi_fu_19337_p4.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i4_phi_fu_19337_p4.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_i_3_fu_27283_p2() {
    i_3_fu_27283_p2 = (!i7_phi_fu_19371_p4.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(i7_phi_fu_19371_p4.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void particle_filter::thread_i_4_fu_30702_p2() {
    i_4_fu_30702_p2 = (!i10_mid2_reg_36079.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i10_mid2_reg_36079.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_i_5_fu_21661_p2() {
    i_5_fu_21661_p2 = (!i2_reg_2410.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i2_reg_2410.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_i_s_fu_21129_p2() {
    i_s_fu_21129_p2 = (!i_reg_2321.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i_reg_2321.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_icmp10_fu_29140_p2() {
    icmp10_fu_29140_p2 = (!tmp_515_reg_35460.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_515_reg_35460.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp11_fu_30697_p2() {
    icmp11_fu_30697_p2 = (!tmp_532_reg_36177.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_532_reg_36177.read() == ap_const_lv19_0);
}

void particle_filter::thread_icmp1_fu_21192_p2() {
    icmp1_fu_21192_p2 = (!tmp_97_fu_21183_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_97_fu_21183_p4.read() != ap_const_lv31_0);
}

void particle_filter::thread_icmp2_fu_21945_p2() {
    icmp2_fu_21945_p2 = (!tmp_141_fu_21935_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_141_fu_21935_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_icmp3_fu_25887_p2() {
    icmp3_fu_25887_p2 = (!tmp_148_fu_25877_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_148_fu_25877_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_icmp4_fu_26658_p2() {
    icmp4_fu_26658_p2 = (!tmp_396_reg_34517.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_396_reg_34517.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp5_fu_27438_p2() {
    icmp5_fu_27438_p2 = (!tmp_413_fu_27428_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_413_fu_27428_p4.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp6_fu_28345_p2() {
    icmp6_fu_28345_p2 = (!tmp_450_fu_28335_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_450_fu_28335_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_icmp7_fu_28900_p2() {
    icmp7_fu_28900_p2 = (!tmp_472_reg_35407.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_472_reg_35407.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp8_fu_31047_p2() {
    icmp8_fu_31047_p2 = (!tmp_500_fu_31037_p4.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_500_fu_31037_p4.read() == ap_const_lv19_0);
}

void particle_filter::thread_icmp9_fu_30601_p2() {
    icmp9_fu_30601_p2 = (!tmp_504_fu_30591_p4.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_504_fu_30591_p4.read() == ap_const_lv19_0);
}

void particle_filter::thread_icmp_fu_21157_p2() {
    icmp_fu_21157_p2 = (!tmp_108_fu_21147_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_108_fu_21147_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_index_V_fu_30733_p4() {
    index_V_fu_30733_p4 = t_V_1_fu_30707_p1.read().range(27, 23);
}

void particle_filter::thread_index_replicated_2_phi_fu_19482_p4() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_reg_36136.read()))) {
        index_replicated_2_phi_fu_19482_p4 = p_3_fu_30653_p3.read();
    } else {
        index_replicated_2_phi_fu_19482_p4 = index_replicated_2_reg_19478.read();
    }
}

void particle_filter::thread_index_replicated_fu_30629_p2() {
    index_replicated_fu_30629_p2 = (!index_replicated_2_phi_fu_19482_p4.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(index_replicated_2_phi_fu_19482_p4.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void particle_filter::thread_indvar_flatten_next_fu_30512_p2() {
    indvar_flatten_next_fu_30512_p2 = (!indvar_flatten_reg_19421.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_bigint<12>(indvar_flatten_reg_19421.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void particle_filter::thread_init_particles_0_address0() {
    init_particles_0_address0 =  (sc_lv<13>) (newIndex3_fu_21139_p1.read());
}

void particle_filter::thread_init_particles_0_ce0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        init_particles_0_ce0 = ap_const_logic_1;
    } else {
        init_particles_0_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_init_particles_1_address0() {
    init_particles_1_address0 =  (sc_lv<13>) (newIndex3_fu_21139_p1.read());
}

void particle_filter::thread_init_particles_1_ce0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        init_particles_1_ce0 = ap_const_logic_1;
    } else {
        init_particles_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_init_particles_load_0_phi_fu_21169_p3() {
    init_particles_load_0_phi_fu_21169_p3 = (!icmp_reg_32093.read()[0].is_01())? sc_lv<32>(): ((icmp_reg_32093.read()[0].to_bool())? init_particles_0_q0.read(): init_particles_1_q0.read());
}

void particle_filter::thread_init_particles_load_1_phi_fu_21176_p3() {
    init_particles_load_1_phi_fu_21176_p3 = (!cond1_reg_32110.read()[0].is_01())? sc_lv<32>(): ((cond1_reg_32110.read()[0].to_bool())? init_particles_0_q0.read(): init_particles_1_q0.read());
}

void particle_filter::thread_ireg_V_1_fu_27160_p1() {
    ireg_V_1_fu_27160_p1 = grp_fu_20145_p1.read();
}

void particle_filter::thread_ireg_V_2_1_fu_28417_p1() {
    ireg_V_2_1_fu_28417_p1 = grp_fu_20148_p1.read();
}

void particle_filter::thread_ireg_V_2_fu_28371_p1() {
    ireg_V_2_fu_28371_p1 = grp_fu_20145_p1.read();
}

void particle_filter::thread_ireg_V_fu_26335_p1() {
    ireg_V_fu_26335_p1 = grp_fu_20145_p1.read();
}

void particle_filter::thread_isNeg_10_fu_24945_p3() {
    isNeg_10_fu_24945_p3 = sh_assign_13_fu_24939_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_11_fu_24990_p3() {
    isNeg_11_fu_24990_p3 = sh_assign_15_fu_24984_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_4_fu_24720_p3() {
    isNeg_4_fu_24720_p3 = sh_assign_s_fu_24714_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_5_fu_30929_p3() {
    isNeg_5_fu_30929_p3 = sh_assign_fu_30923_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_6_fu_24765_p3() {
    isNeg_6_fu_24765_p3 = sh_assign_2_fu_24759_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_7_fu_24810_p3() {
    isNeg_7_fu_24810_p3 = sh_assign_5_fu_24804_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_8_fu_24855_p3() {
    isNeg_8_fu_24855_p3 = sh_assign_7_fu_24849_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_9_fu_24900_p3() {
    isNeg_9_fu_24900_p3 = sh_assign_11_fu_24894_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_fu_24675_p3() {
    isNeg_fu_24675_p3 = sh_assign_8_fu_24669_p2.read().range(8, 8);
}

void particle_filter::thread_isneg_1_fu_27289_p3() {
    isneg_1_fu_27289_p3 = ireg_V_1_reg_34772.read().range(63, 63);
}

void particle_filter::thread_isneg_3_not_fu_28026_p2() {
    isneg_3_not_fu_28026_p2 = (isneg_2_reg_35122.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_5_not_fu_28218_p2() {
    isneg_5_not_fu_28218_p2 = (isneg_4_reg_35185.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_7_not_1_fu_30101_p2() {
    isneg_7_not_1_fu_30101_p2 = (tmp_521_fu_30063_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_7_not_fu_30038_p2() {
    isneg_7_not_fu_30038_p2 = (tmp_483_fu_30000_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_9_not_1_fu_30341_p2() {
    isneg_9_not_1_fu_30341_p2 = (tmp_525_fu_30303_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_9_not_fu_30274_p2() {
    isneg_9_not_fu_30274_p2 = (tmp_487_fu_30236_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_j_2_fu_28317_p2() {
    j_2_fu_28317_p2 = (!j3_reg_19389.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(j3_reg_19389.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_j_fu_30623_p2() {
    j_fu_30623_p2 = (!j4_reg_19490.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(j4_reg_19490.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void particle_filter::thread_k9_mid2_fu_30537_p3() {
    k9_mid2_fu_30537_p3 = (!exitcond12_fu_30518_p2.read()[0].is_01())? sc_lv<2>(): ((exitcond12_fu_30518_p2.read()[0].to_bool())? k9_reg_19432.read(): k_fu_30531_p2.read());
}

void particle_filter::thread_k_fu_30531_p2() {
    k_fu_30531_p2 = (!k9_reg_19432.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(k9_reg_19432.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void particle_filter::thread_lD_1_fu_27486_p1() {
    lD_1_fu_27486_p1 = tmp_304_fu_27480_p2.read().range(1-1, 0);
}

void particle_filter::thread_lD_fu_26704_p1() {
    lD_fu_26704_p1 = tmp_234_fu_26699_p2.read().range(1-1, 0);
}

void particle_filter::thread_loc_V_10_fu_25074_p1() {
    loc_V_10_fu_25074_p1 = p_Val2_52_reg_32806.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_11_fu_24746_p4() {
    loc_V_11_fu_24746_p4 = p_Val2_68_reg_32812.read().range(30, 23);
}

void particle_filter::thread_loc_V_12_fu_25138_p1() {
    loc_V_12_fu_25138_p1 = p_Val2_68_reg_32812.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_13_fu_24791_p4() {
    loc_V_13_fu_24791_p4 = p_Val2_71_reg_32818.read().range(30, 23);
}

void particle_filter::thread_loc_V_14_fu_25196_p1() {
    loc_V_14_fu_25196_p1 = p_Val2_71_reg_32818.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_15_fu_24836_p4() {
    loc_V_15_fu_24836_p4 = p_Val2_74_reg_32824.read().range(30, 23);
}

void particle_filter::thread_loc_V_16_fu_25260_p1() {
    loc_V_16_fu_25260_p1 = p_Val2_74_reg_32824.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_17_fu_24881_p4() {
    loc_V_17_fu_24881_p4 = p_Val2_77_reg_32830.read().range(30, 23);
}

void particle_filter::thread_loc_V_18_fu_25318_p1() {
    loc_V_18_fu_25318_p1 = p_Val2_77_reg_32830.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_19_fu_24926_p4() {
    loc_V_19_fu_24926_p4 = p_Val2_82_reg_32836.read().range(30, 23);
}

void particle_filter::thread_loc_V_20_fu_25382_p1() {
    loc_V_20_fu_25382_p1 = p_Val2_82_reg_32836.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_21_fu_24971_p4() {
    loc_V_21_fu_24971_p4 = p_Val2_85_reg_32842.read().range(30, 23);
}

void particle_filter::thread_loc_V_22_fu_25440_p1() {
    loc_V_22_fu_25440_p1 = p_Val2_85_reg_32842.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_23_fu_25817_p4() {
    loc_V_23_fu_25817_p4 = p_Val2_88_fu_25814_p1.read().range(30, 23);
}

void particle_filter::thread_loc_V_24_fu_25831_p4() {
    loc_V_24_fu_25831_p4 = p_Val2_89_fu_25827_p1.read().range(30, 23);
}

void particle_filter::thread_loc_V_26_fu_30729_p1() {
    loc_V_26_fu_30729_p1 = t_V_1_fu_30707_p1.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_28_fu_30775_p1() {
    loc_V_28_fu_30775_p1 = p_Val2_31_fu_30752_p2.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_29_fu_30905_p4() {
    loc_V_29_fu_30905_p4 = p_Val2_64_fu_30898_p3.read().range(30, 23);
}

void particle_filter::thread_loc_V_30_fu_30915_p1() {
    loc_V_30_fu_30915_p1 = p_Val2_64_fu_30898_p3.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_8_fu_25016_p1() {
    loc_V_8_fu_25016_p1 = p_Val2_48_reg_32800.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_9_fu_24701_p4() {
    loc_V_9_fu_24701_p4 = p_Val2_52_reg_32806.read().range(30, 23);
}

void particle_filter::thread_loc_V_fu_24656_p4() {
    loc_V_fu_24656_p4 = p_Val2_48_reg_32800.read().range(30, 23);
}

void particle_filter::thread_log_lik_out_1_fu_31075_p3() {
    log_lik_out_1_fu_31075_p3 = (!tmp_114_fu_31070_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_114_fu_31070_p2.read()[0].to_bool())? ap_const_lv32_F149F2CA: ap_const_lv32_0);
}

void particle_filter::thread_log_lik_out_2_fu_31088_p3() {
    log_lik_out_2_fu_31088_p3 = (!tmp_45_fu_31083_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_45_fu_31083_p2.read()[0].to_bool())? log_lik_out_1_fu_31075_p3.read(): log_lik_out_reg_2374.read());
}

void particle_filter::thread_log_lik_particle_0_address0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read())))) {
        log_lik_particle_0_address0 = ap_reg_ppstg_log_lik_particle_0_addr_1_reg_33010_pp1_it156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
                esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read()))) {
        log_lik_particle_0_address0 =  (sc_lv<13>) (newIndex8_fu_25869_p1.read());
    } else {
        log_lik_particle_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_0_address1() {
    log_lik_particle_0_address1 = ap_reg_ppstg_log_lik_particle_0_addr_1_reg_33010_pp1_it157.read();
}

void particle_filter::thread_log_lik_particle_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read())))) {
        log_lik_particle_0_ce0 = ap_const_logic_1;
    } else {
        log_lik_particle_0_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_0_ce1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read())))) {
        log_lik_particle_0_ce1 = ap_const_logic_1;
    } else {
        log_lik_particle_0_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_0_d0() {
    if (ap_sig_bdd_57592.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())) {
            log_lik_particle_0_d0 = ap_reg_ppstg_likelihood_value_0_reg_34259_pp1_it156.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())) {
            log_lik_particle_0_d0 = ap_const_lv32_F149F2CA;
        } else {
            log_lik_particle_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        log_lik_particle_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_0_d1() {
    if (ap_sig_bdd_57594.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())) {
            log_lik_particle_0_d1 = ap_reg_ppstg_log_lik_particle_max_keep_1_reg_34268_pp1_it157.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())) {
            log_lik_particle_0_d1 = ap_const_lv32_F149F2CA;
        } else {
            log_lik_particle_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        log_lik_particle_0_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_0_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read())))) {
        log_lik_particle_0_we0 = ap_const_logic_1;
    } else {
        log_lik_particle_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read())))) {
        log_lik_particle_0_we1 = ap_const_logic_1;
    } else {
        log_lik_particle_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_address0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())))) {
        log_lik_particle_1_address0 = ap_reg_ppstg_log_lik_particle_1_addr_1_reg_33016_pp1_it156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
                esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read()))) {
        log_lik_particle_1_address0 =  (sc_lv<13>) (newIndex8_fu_25869_p1.read());
    } else {
        log_lik_particle_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_1_address1() {
    log_lik_particle_1_address1 = ap_reg_ppstg_log_lik_particle_1_addr_1_reg_33016_pp1_it157.read();
}

void particle_filter::thread_log_lik_particle_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())))) {
        log_lik_particle_1_ce0 = ap_const_logic_1;
    } else {
        log_lik_particle_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_ce1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())))) {
        log_lik_particle_1_ce1 = ap_const_logic_1;
    } else {
        log_lik_particle_1_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_d0() {
    if (ap_sig_bdd_57596.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())) {
            log_lik_particle_1_d0 = ap_reg_ppstg_likelihood_value_0_reg_34259_pp1_it156.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())) {
            log_lik_particle_1_d0 = ap_const_lv32_F149F2CA;
        } else {
            log_lik_particle_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        log_lik_particle_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_1_d1() {
    if (ap_sig_bdd_57598.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())) {
            log_lik_particle_1_d1 = ap_reg_ppstg_log_lik_particle_max_keep_1_reg_34268_pp1_it157.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())) {
            log_lik_particle_1_d1 = ap_const_lv32_F149F2CA;
        } else {
            log_lik_particle_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        log_lik_particle_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_1_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20379_p2.read())))) {
        log_lik_particle_1_we0 = ap_const_logic_1;
    } else {
        log_lik_particle_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34280.read())))) {
        log_lik_particle_1_we1 = ap_const_logic_1;
    } else {
        log_lik_particle_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_load_0_phi_fu_25899_p3() {
    log_lik_particle_load_0_phi_fu_25899_p3 = (!icmp3_reg_34314.read()[0].is_01())? sc_lv<32>(): ((icmp3_reg_34314.read()[0].to_bool())? log_lik_particle_0_q0.read(): log_lik_particle_1_q0.read());
}

void particle_filter::thread_log_lik_particle_load_1_phi_fu_25906_p3() {
    log_lik_particle_load_1_phi_fu_25906_p3 = (!cond4_reg_34329.read()[0].is_01())? sc_lv<32>(): ((cond4_reg_34329.read()[0].to_bool())? log_lik_particle_0_q0.read(): log_lik_particle_1_q0.read());
}

void particle_filter::thread_log_lik_particle_max_keep_0_log_lik_particle_max_fu_25847_p3() {
    log_lik_particle_max_keep_0_log_lik_particle_max_fu_25847_p3 = (!tmp_209_fu_25841_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_209_fu_25841_p2.read()[0].to_bool())? log_lik_particle_max_keep_reg_34284.read(): f_assign_1_reg_2398.read());
}

void particle_filter::thread_log_lik_particle_max_keep_fu_25808_p3() {
    log_lik_particle_max_keep_fu_25808_p3 = (!grp_fu_20389_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20389_p2.read()[0].to_bool())? ap_reg_ppstg_likelihood_value_0_reg_34259_pp1_it156.read(): ap_reg_ppstg_log_lik_particle_max_keep_1_reg_34268_pp1_it156.read());
}

void particle_filter::thread_man_V_14_1_fu_28645_p3() {
    man_V_14_1_fu_28645_p3 = (!tmp_506_reg_35328.read()[0].is_01())? sc_lv<54>(): ((tmp_506_reg_35328.read()[0].to_bool())? man_V_8_1_fu_28639_p2.read(): p_Result_73_1_fu_28635_p1.read());
}

void particle_filter::thread_man_V_1_fu_26397_p2() {
    man_V_1_fu_26397_p2 = (!ap_const_lv54_0.is_01() || !p_Result_51_fu_26393_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_51_fu_26393_p1.read()));
}

void particle_filter::thread_man_V_3_fu_27223_p2() {
    man_V_3_fu_27223_p2 = (!ap_const_lv54_0.is_01() || !p_Result_52_fu_27219_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_52_fu_27219_p1.read()));
}

void particle_filter::thread_man_V_6_fu_27301_p3() {
    man_V_6_fu_27301_p3 = (!isneg_1_fu_27289_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_1_fu_27289_p3.read()[0].to_bool())? man_V_3_reg_34816.read(): p_Result_52_reg_34811.read());
}

void particle_filter::thread_man_V_8_1_fu_28639_p2() {
    man_V_8_1_fu_28639_p2 = (!ap_const_lv54_0.is_01() || !p_Result_73_1_fu_28635_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_73_1_fu_28635_p1.read()));
}

void particle_filter::thread_man_V_8_fu_28479_p2() {
    man_V_8_fu_28479_p2 = (!ap_const_lv54_0.is_01() || !p_Result_5_fu_28475_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_5_fu_28475_p1.read()));
}

void particle_filter::thread_man_V_fu_26403_p3() {
    man_V_fu_26403_p3 = (!isneg_reg_34438.read()[0].is_01())? sc_lv<54>(): ((isneg_reg_34438.read()[0].to_bool())? man_V_1_fu_26397_p2.read(): p_Result_51_fu_26393_p1.read());
}

void particle_filter::thread_man_V_s_fu_28485_p3() {
    man_V_s_fu_28485_p3 = (!tmp_454_reg_35285.read()[0].is_01())? sc_lv<54>(): ((tmp_454_reg_35285.read()[0].to_bool())? man_V_8_fu_28479_p2.read(): p_Result_5_fu_28475_p1.read());
}

void particle_filter::thread_mask_i_cast_fu_30748_p1() {
    mask_i_cast_fu_30748_p1 = esl_zext<32,23>(mask_table9_q0.read());
}

void particle_filter::thread_mask_table9_address0() {
    mask_table9_address0 =  (sc_lv<5>) (tmp_40_i_fu_30743_p1.read());
}

void particle_filter::thread_mask_table9_ce0() {
    if (esl_seteq<1,8,8>(ap_ST_st340_fsm_101, ap_CS_fsm.read())) {
        mask_table9_ce0 = ap_const_logic_1;
    } else {
        mask_table9_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_n_V_0_1_fu_25186_p4() {
    n_V_0_1_fu_25186_p4 = p_Val2_35_fu_25179_p3.read().range(31, 23);
}

void particle_filter::thread_n_V_0_2_fu_25308_p4() {
    n_V_0_2_fu_25308_p4 = p_Val2_39_fu_25301_p3.read().range(31, 23);
}

void particle_filter::thread_n_V_0_3_fu_25430_p4() {
    n_V_0_3_fu_25430_p4 = p_Val2_41_fu_25423_p3.read().range(31, 23);
}

void particle_filter::thread_n_V_fu_25064_p4() {
    n_V_fu_25064_p4 = p_Val2_22_fu_25057_p3.read().range(31, 23);
}

void particle_filter::thread_n_minus_x_V_0_1_fu_25254_p2() {
    n_minus_x_V_0_1_fu_25254_p2 = (!n_V_0_1_fu_25186_p4.read().is_01() || !x_V_0_1_fu_25244_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_0_1_fu_25186_p4.read()) - sc_biguint<9>(x_V_0_1_fu_25244_p4.read()));
}

void particle_filter::thread_n_minus_x_V_0_2_fu_25376_p2() {
    n_minus_x_V_0_2_fu_25376_p2 = (!n_V_0_2_fu_25308_p4.read().is_01() || !x_V_0_2_fu_25366_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_0_2_fu_25308_p4.read()) - sc_biguint<9>(x_V_0_2_fu_25366_p4.read()));
}

void particle_filter::thread_n_minus_x_V_0_3_fu_25498_p2() {
    n_minus_x_V_0_3_fu_25498_p2 = (!n_V_0_3_fu_25430_p4.read().is_01() || !x_V_0_3_fu_25488_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_0_3_fu_25430_p4.read()) - sc_biguint<9>(x_V_0_3_fu_25488_p4.read()));
}

void particle_filter::thread_n_minus_x_V_fu_25132_p2() {
    n_minus_x_V_fu_25132_p2 = (!n_V_fu_25064_p4.read().is_01() || !x_V_fu_25122_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_fu_25064_p4.read()) - sc_biguint<9>(x_V_fu_25122_p4.read()));
}

void particle_filter::thread_newIndex1_fu_30692_p1() {
    newIndex1_fu_30692_p1 = esl_zext<64,13>(tmp_531_reg_36172.read());
}

void particle_filter::thread_newIndex3_fu_21139_p1() {
    newIndex3_fu_21139_p1 = esl_zext<64,13>(tmp_103_fu_21135_p1.read());
}

void particle_filter::thread_newIndex4_fu_31031_p1() {
    newIndex4_fu_31031_p1 = esl_zext<64,13>(tmp_499_fu_31027_p1.read());
}

void particle_filter::thread_newIndex6_fu_24633_p1() {
    newIndex6_fu_24633_p1 = esl_zext<64,13>(ap_reg_ppstg_tmp_115_reg_32857_pp1_it38.read());
}

void particle_filter::thread_newIndex8_fu_25869_p1() {
    newIndex8_fu_25869_p1 = esl_zext<64,13>(tmp_147_fu_25865_p1.read());
}

void particle_filter::thread_newIndex9_fu_28327_p1() {
    newIndex9_fu_28327_p1 = esl_zext<64,13>(tmp_448_fu_28323_p1.read());
}

void particle_filter::thread_newIndex_fu_30583_p1() {
    newIndex_fu_30583_p1 = esl_zext<64,13>(tmp_503_fu_30579_p1.read());
}

void particle_filter::thread_newsignbit_0_not_i_fu_28183_p2() {
    newsignbit_0_not_i_fu_28183_p2 = (newsignbit_3_reg_35173.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_newsignbit_fu_26942_p3() {
    newsignbit_fu_26942_p3 = p_Val2_19_fu_26926_p3.read().range(27, 27);
}

void particle_filter::thread_not_i6_t_fu_25956_p2() {
    not_i6_t_fu_25956_p2 = (tmp_403_fu_25952_p1.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_notlhs_i_fu_30779_p2() {
    notlhs_i_fu_30779_p2 = (!loc_V_26_reg_36212.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_26_reg_36212.read() != ap_const_lv23_0);
}

void particle_filter::thread_notrhs_i_fu_30874_p2() {
    notrhs_i_fu_30874_p2 = (!loc_V_25_reg_36204.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_25_reg_36204.read() != ap_const_lv8_0);
}

void particle_filter::thread_o_cast_fu_30614_p1() {
    o_cast_fu_30614_p1 = esl_sext<32,16>(o_fu_30607_p3.read());
}

void particle_filter::thread_o_fu_30607_p3() {
    o_fu_30607_p3 = (!icmp9_reg_36115.read()[0].is_01())? sc_lv<16>(): ((icmp9_reg_36115.read()[0].to_bool())? replication_factors_0_q0.read(): replication_factors_1_q0.read());
}

void particle_filter::thread_obs_parameters_fixed_address0() {
    obs_parameters_fixed_address0 = grp_fetch_data_parameters_fu_19634_obs_parameters_fixed_address0.read();
}

void particle_filter::thread_obs_parameters_fixed_ce0() {
    if (esl_seteq<1,8,8>(ap_ST_st16_fsm_12, ap_CS_fsm.read())) {
        obs_parameters_fixed_ce0 = grp_fetch_data_parameters_fu_19634_obs_parameters_fixed_ce0.read();
    } else {
        obs_parameters_fixed_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_or_cond91_i1_fu_26837_p2() {
    or_cond91_i1_fu_26837_p2 = (tmp_237_reg_34606.read() & rev1_reg_34600.read());
}

void particle_filter::thread_or_cond91_i2_1_fu_29459_p2() {
    or_cond91_i2_1_fu_29459_p2 = (tmp_526_1_reg_35653.read() & rev7_reg_35647.read());
}

void particle_filter::thread_or_cond91_i2_fu_29319_p2() {
    or_cond91_i2_fu_29319_p2 = (tmp_364_reg_35549.read() & rev5_reg_35543.read());
}

void particle_filter::thread_or_cond91_i_fu_27648_p2() {
    or_cond91_i_fu_27648_p2 = (tmp_307_reg_34947.read() & rev3_fu_27643_p2.read());
}

void particle_filter::thread_or_cond93_i1_fu_26847_p2() {
    or_cond93_i1_fu_26847_p2 = (tmp_237_reg_34606.read() & rev_reg_34587.read());
}

void particle_filter::thread_or_cond93_i2_1_fu_29469_p2() {
    or_cond93_i2_1_fu_29469_p2 = (tmp_526_1_reg_35653.read() & rev6_reg_35634.read());
}

void particle_filter::thread_or_cond93_i2_fu_29329_p2() {
    or_cond93_i2_fu_29329_p2 = (tmp_364_reg_35549.read() & rev4_reg_35530.read());
}

void particle_filter::thread_or_cond93_i_fu_27671_p2() {
    or_cond93_i_fu_27671_p2 = (tmp_307_reg_34947.read() & rev2_fu_27628_p2.read());
}

void particle_filter::thread_or_cond_1_fu_25927_p2() {
    or_cond_1_fu_25927_p2 = (tmp_267_1_reg_34370.read() & grp_fu_20151_p2.read());
}

void particle_filter::thread_or_cond_fu_25913_p2() {
    or_cond_fu_25913_p2 = (tmp_155_reg_34355.read() & grp_fu_20151_p2.read());
}

void particle_filter::thread_overflow_1_fu_27898_p2() {
    overflow_1_fu_27898_p2 = (brmerge_i_fu_27888_p2.read() & tmp_315_fu_27893_p2.read());
}

void particle_filter::thread_overflow_2_fu_28177_p2() {
    overflow_2_fu_28177_p2 = (brmerge_i5_fu_28167_p2.read() & tmp_326_fu_28172_p2.read());
}

void particle_filter::thread_overflow_5_1_fu_29822_p2() {
    overflow_5_1_fu_29822_p2 = (brmerge_i2_1_fu_29812_p2.read() & tmp_538_1_fu_29817_p2.read());
}

void particle_filter::thread_overflow_5_fu_29764_p2() {
    overflow_5_fu_29764_p2 = (brmerge_i2_fu_29754_p2.read() & tmp_371_fu_29759_p2.read());
}

void particle_filter::thread_overflow_fu_27046_p2() {
    overflow_fu_27046_p2 = (brmerge_i1_fu_27036_p2.read() & tmp_245_fu_27041_p2.read());
}

void particle_filter::thread_p_10_fu_25674_p3() {
    p_10_fu_25674_p3 = (!ap_reg_ppstg_tmp_348_0_3_reg_33746_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_0_3_reg_33746_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_11_fu_30477_p3() {
    p_11_fu_30477_p3 = (!tmp_380_reg_36038.read()[0].is_01())? sc_lv<16>(): ((tmp_380_reg_36038.read()[0].to_bool())? p_Result_8_reg_36027.read(): ret_V_5_reg_36043.read());
}

void particle_filter::thread_p_12_fu_30482_p3() {
    p_12_fu_30482_p3 = (!tmp_490_reg_36033.read()[0].is_01())? sc_lv<16>(): ((tmp_490_reg_36033.read()[0].to_bool())? p_11_fu_30477_p3.read(): p_Result_8_reg_36027.read());
}

void particle_filter::thread_p_13_fu_25695_p3() {
    p_13_fu_25695_p3 = (!ap_reg_ppstg_tmp_340_1_reg_33793_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_reg_33793_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_14_fu_25688_p3() {
    p_14_fu_25688_p3 = (!ap_reg_ppstg_tmp_348_1_reg_33788_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_reg_33788_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_15_fu_25709_p3() {
    p_15_fu_25709_p3 = (!ap_reg_ppstg_tmp_340_1_1_reg_33835_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_1_reg_33835_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_16_fu_25702_p3() {
    p_16_fu_25702_p3 = (!ap_reg_ppstg_tmp_348_1_1_reg_33830_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_1_reg_33830_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_17_fu_25723_p3() {
    p_17_fu_25723_p3 = (!ap_reg_ppstg_tmp_340_1_2_reg_33877_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_2_reg_33877_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_18_fu_25716_p3() {
    p_18_fu_25716_p3 = (!ap_reg_ppstg_tmp_348_1_2_reg_33872_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_2_reg_33872_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_19_fu_25737_p3() {
    p_19_fu_25737_p3 = (!ap_reg_ppstg_tmp_340_1_3_reg_33919_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_3_reg_33919_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_1_161_fu_30495_p3() {
    p_1_161_fu_30495_p3 = (!tmp_580_1_reg_36060.read()[0].is_01())? sc_lv<16>(): ((tmp_580_1_reg_36060.read()[0].to_bool())? p_Result_53_1_reg_36048.read(): ret_V_5_1_fu_30490_p2.read());
}

void particle_filter::thread_p_1_1_162_fu_30501_p3() {
    p_1_1_162_fu_30501_p3 = (!tmp_528_reg_36055.read()[0].is_01())? sc_lv<16>(): ((tmp_528_reg_36055.read()[0].to_bool())? p_1_161_fu_30495_p3.read(): p_Result_53_1_reg_36048.read());
}

void particle_filter::thread_p_1_fu_25639_p3() {
    p_1_fu_25639_p3 = (!ap_reg_ppstg_tmp_340_reg_33625_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_reg_33625_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_1_i_0_1_phi_fu_2442_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_0_1_reg_33182_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_0_1_reg_33214_pp1_it97.read()))) {
        p_1_i_0_1_phi_fu_2442_p6 = p_0_1_reg_33329.read();
    } else {
        p_1_i_0_1_phi_fu_2442_p6 = ap_reg_phiprechg_p_1_i_0_1_reg_2437pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_0_2_phi_fu_2458_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_0_2_reg_33186_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_0_2_reg_33218_pp1_it97.read()))) {
        p_1_i_0_2_phi_fu_2458_p6 = p_0_2_reg_33334.read();
    } else {
        p_1_i_0_2_phi_fu_2458_p6 = ap_reg_phiprechg_p_1_i_0_2_reg_2453pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_0_3_phi_fu_2474_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_0_3_reg_33190_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_0_3_reg_33222_pp1_it97.read()))) {
        p_1_i_0_3_phi_fu_2474_p6 = p_0_3_reg_33339.read();
    } else {
        p_1_i_0_3_phi_fu_2474_p6 = ap_reg_phiprechg_p_1_i_0_3_reg_2469pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_1_phi_fu_2506_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_1_reg_33198_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_1_reg_33230_pp1_it97.read()))) {
        p_1_i_1_1_phi_fu_2506_p6 = p_1_1_reg_33349.read();
    } else {
        p_1_i_1_1_phi_fu_2506_p6 = ap_reg_phiprechg_p_1_i_1_1_reg_2501pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_2_phi_fu_2522_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_2_reg_33202_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_2_reg_33234_pp1_it97.read()))) {
        p_1_i_1_2_phi_fu_2522_p6 = p_1_2_reg_33354.read();
    } else {
        p_1_i_1_2_phi_fu_2522_p6 = ap_reg_phiprechg_p_1_i_1_2_reg_2517pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_3_phi_fu_2538_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_3_reg_33206_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_3_reg_33238_pp1_it97.read()))) {
        p_1_i_1_3_phi_fu_2538_p6 = p_1_3_reg_33359.read();
    } else {
        p_1_i_1_3_phi_fu_2538_p6 = ap_reg_phiprechg_p_1_i_1_3_reg_2533pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_phi_fu_2490_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_reg_33194_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_reg_33226_pp1_it97.read()))) {
        p_1_i_1_phi_fu_2490_p6 = p_1_140_reg_33344.read();
    } else {
        p_1_i_1_phi_fu_2490_p6 = ap_reg_phiprechg_p_1_i_1_reg_2485pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_phi_fu_2426_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_285_reg_33178_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_337_reg_33210_pp1_it97.read()))) {
        p_1_i_phi_fu_2426_p6 = p_reg_33324.read();
    } else {
        p_1_i_phi_fu_2426_p6 = ap_reg_phiprechg_p_1_i_reg_2421pp1_it98.read();
    }
}

void particle_filter::thread_p_20_fu_25730_p3() {
    p_20_fu_25730_p3 = (!ap_reg_ppstg_tmp_348_1_3_reg_33914_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_3_reg_33914_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_21_fu_28814_p3() {
    p_21_fu_28814_p3 = (!ap_reg_ppstg_tmp_454_reg_35285_pp4_it25.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_454_reg_35285_pp4_it25.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_2_fu_25632_p3() {
    p_2_fu_25632_p3 = (!ap_reg_ppstg_tmp_342_reg_33620_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_342_reg_33620_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_3_fu_30653_p3() {
    p_3_fu_30653_p3 = (!tmp_289_reg_36150.read()[0].is_01())? sc_lv<32>(): ((tmp_289_reg_36150.read()[0].to_bool())? ap_const_lv32_0: index_replicated_reg_36145.read());
}

void particle_filter::thread_p_4_fu_25653_p3() {
    p_4_fu_25653_p3 = (!ap_reg_ppstg_tmp_340_0_1_reg_33667_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_0_1_reg_33667_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_5_fu_26572_p3() {
    p_5_fu_26572_p3 = (!isneg_reg_34438.read()[0].is_01())? sc_lv<28>(): ((isneg_reg_34438.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_6_fu_27534_p3() {
    p_6_fu_27534_p3 = (!isneg_1_reg_34864.read()[0].is_01())? sc_lv<28>(): ((isneg_1_reg_34864.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_7_1_fu_29054_p3() {
    p_7_1_fu_29054_p3 = (!ap_reg_ppstg_tmp_506_reg_35328_pp4_it25.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_506_reg_35328_pp4_it25.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_7_fu_25646_p3() {
    p_7_fu_25646_p3 = (!ap_reg_ppstg_tmp_348_0_1_reg_33662_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_0_1_reg_33662_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_8_fu_25667_p3() {
    p_8_fu_25667_p3 = (!ap_reg_ppstg_tmp_340_0_2_reg_33709_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_0_2_reg_33709_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_95_i1_fu_26868_p2() {
    p_95_i1_fu_26868_p2 = (Range1_all_zeros_1_reg_34622.read() | rev_reg_34587.read());
}

void particle_filter::thread_p_95_i2_1_fu_29490_p2() {
    p_95_i2_1_fu_29490_p2 = (Range1_all_zeros_5_1_reg_35669.read() | rev6_reg_35634.read());
}

void particle_filter::thread_p_95_i2_fu_29350_p2() {
    p_95_i2_fu_29350_p2 = (Range1_all_zeros_5_reg_35565.read() | rev4_reg_35530.read());
}

void particle_filter::thread_p_95_i_fu_27681_p2() {
    p_95_i_fu_27681_p2 = (Range1_all_zeros_3_reg_34970.read() | rev2_fu_27628_p2.read());
}

void particle_filter::thread_p_96_i1_fu_26916_p2() {
    p_96_i1_fu_26916_p2 = (tmp_401_reg_34633.read() | Range1_all_zeros_fu_26857_p2.read());
}

void particle_filter::thread_p_96_i2_1_fu_29538_p2() {
    p_96_i2_1_fu_29538_p2 = (tmp_520_reg_35680.read() | tmp_531_1_fu_29479_p2.read());
}

void particle_filter::thread_p_96_i2_fu_29398_p2() {
    p_96_i2_fu_29398_p2 = (tmp_482_reg_35576.read() | tmp_367_fu_29339_p2.read());
}

void particle_filter::thread_p_96_i_fu_27822_p2() {
    p_96_i_fu_27822_p2 = (tmp_420_reg_34975.read() | Range1_all_zeros_2_fu_27759_p2.read());
}

void particle_filter::thread_p_98_i1_fu_26863_p2() {
    p_98_i1_fu_26863_p2 = (tmp_239_reg_34617.read() & Range1_all_zeros_fu_26857_p2.read());
}

void particle_filter::thread_p_98_i2_1_fu_29485_p2() {
    p_98_i2_1_fu_29485_p2 = (tmp_530_1_reg_35664.read() & tmp_531_1_fu_29479_p2.read());
}

void particle_filter::thread_p_98_i2_fu_29345_p2() {
    p_98_i2_fu_29345_p2 = (tmp_366_reg_35560.read() & tmp_367_fu_29339_p2.read());
}

void particle_filter::thread_p_98_i_fu_27764_p2() {
    p_98_i_fu_27764_p2 = (tmp_309_reg_35031.read() & Range1_all_zeros_2_fu_27759_p2.read());
}

void particle_filter::thread_p_9_fu_25660_p3() {
    p_9_fu_25660_p3 = (!ap_reg_ppstg_tmp_348_0_2_reg_33704_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_0_2_reg_33704_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_Result_26_1_fu_28433_p4() {
    p_Result_26_1_fu_28433_p4 = ireg_V_2_1_fu_28417_p1.read().range(62, 52);
}

void particle_filter::thread_p_Result_35_1_fu_28736_p3() {
    p_Result_35_1_fu_28736_p3 = esl_sext<32,11>(tmp_500_1_fu_28724_p3.read());
}

void particle_filter::thread_p_Result_35_1_fu_28736_p4() {
    p_Result_35_1_fu_28736_p4 = (!ap_const_lv32_0.is_01() || !p_Result_35_1_fu_28736_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_35_1_fu_28736_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_14_1_fu_28645_p3.read().range(sc_biguint<32>(p_Result_35_1_fu_28736_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_3_fu_26494_p3() {
    p_Result_3_fu_26494_p3 = esl_sext<32,11>(tmp_223_fu_26482_p3.read());
}

void particle_filter::thread_p_Result_3_fu_26494_p4() {
    p_Result_3_fu_26494_p4 = (!ap_const_lv32_0.is_01() || !p_Result_3_fu_26494_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_3_fu_26494_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_fu_26403_p3.read().range(sc_biguint<32>(p_Result_3_fu_26494_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_43_fu_25019_p3() {
    p_Result_43_fu_25019_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_8_fu_25016_p1.read());
}

void particle_filter::thread_p_Result_44_fu_25077_p3() {
    p_Result_44_fu_25077_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_10_fu_25074_p1.read());
}

void particle_filter::thread_p_Result_45_fu_25141_p3() {
    p_Result_45_fu_25141_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_12_fu_25138_p1.read());
}

void particle_filter::thread_p_Result_46_fu_25199_p3() {
    p_Result_46_fu_25199_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_14_fu_25196_p1.read());
}

void particle_filter::thread_p_Result_47_fu_25263_p3() {
    p_Result_47_fu_25263_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_16_fu_25260_p1.read());
}

void particle_filter::thread_p_Result_48_fu_25321_p3() {
    p_Result_48_fu_25321_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_18_fu_25318_p1.read());
}

void particle_filter::thread_p_Result_49_fu_25385_p3() {
    p_Result_49_fu_25385_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_20_fu_25382_p1.read());
}

void particle_filter::thread_p_Result_4_fu_28387_p4() {
    p_Result_4_fu_28387_p4 = ireg_V_2_fu_28371_p1.read().range(62, 52);
}

void particle_filter::thread_p_Result_50_fu_25443_p3() {
    p_Result_50_fu_25443_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_22_fu_25440_p1.read());
}

void particle_filter::thread_p_Result_51_fu_26393_p1() {
    p_Result_51_fu_26393_p1 = esl_zext<54,53>(tmp_37_fu_26386_p3.read());
}

void particle_filter::thread_p_Result_52_fu_27219_p1() {
    p_Result_52_fu_27219_p1 = esl_zext<54,53>(tmp_43_fu_27211_p3.read());
}

void particle_filter::thread_p_Result_53_fu_30794_p3() {
    p_Result_53_fu_30794_p3 = esl_concat<1,31>(p_Result_s_166_reg_36195.read(), ap_const_lv31_0);
}

void particle_filter::thread_p_Result_55_fu_30826_p4() {
    p_Result_55_fu_30826_p4 = esl_concat<9,23>(esl_concat<1,8>(xs_sign_V_fu_30806_p2.read(), xs_exp_V_fu_30801_p3.read()), xs_sig_V_fu_30820_p2.read());
}

void particle_filter::thread_p_Result_56_fu_30955_p3() {
    p_Result_56_fu_30955_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_30_reg_36258.read());
}

void particle_filter::thread_p_Result_5_fu_28475_p1() {
    p_Result_5_fu_28475_p1 = esl_zext<54,53>(tmp_48_fu_28468_p3.read());
}

void particle_filter::thread_p_Result_6_fu_27382_p3() {
    p_Result_6_fu_27382_p3 = esl_sext<32,11>(tmp_293_fu_27372_p3.read());
}

void particle_filter::thread_p_Result_6_fu_27382_p4() {
    p_Result_6_fu_27382_p4 = (!ap_const_lv32_0.is_01() || !p_Result_6_fu_27382_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_6_fu_27382_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_6_fu_27301_p3.read().range(sc_biguint<32>(p_Result_6_fu_27382_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_73_1_fu_28635_p1() {
    p_Result_73_1_fu_28635_p1 = esl_zext<54,53>(tmp_56_fu_28628_p3.read());
}

void particle_filter::thread_p_Result_7_fu_28576_p3() {
    p_Result_7_fu_28576_p3 = esl_sext<32,11>(tmp_347_fu_28564_p3.read());
}

void particle_filter::thread_p_Result_7_fu_28576_p4() {
    p_Result_7_fu_28576_p4 = (!ap_const_lv32_0.is_01() || !p_Result_7_fu_28576_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_7_fu_28576_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_s_fu_28485_p3.read().range(sc_biguint<32>(p_Result_7_fu_28576_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_8_fu_30384_p4() {
    p_Result_8_fu_30384_p4 = p_Val2_26_fu_30376_p3.read().range(27, 12);
}

void particle_filter::thread_p_Val2_10_fu_28073_p3() {
    p_Val2_10_fu_28073_p3 = esl_concat<16,12>(tmp_354_reg_35149.read(), ap_const_lv12_0);
}

void particle_filter::thread_p_Val2_11_fu_28084_p2() {
    p_Val2_11_fu_28084_p2 = (!tmp_321_fu_28080_p1.read().is_01() || !ap_const_lv29_1000.is_01())? sc_lv<29>(): (sc_bigint<29>(tmp_321_fu_28080_p1.read()) + sc_biguint<29>(ap_const_lv29_1000));
}

void particle_filter::thread_p_Val2_12_fu_28097_p2() {
    p_Val2_12_fu_28097_p2 = (!tmp_322_fu_28090_p1.read().is_01() || !tmp_323_fu_28094_p1.read().is_01())? sc_lv<30>(): (sc_bigint<30>(tmp_322_fu_28090_p1.read()) - sc_biguint<30>(tmp_323_fu_28094_p1.read()));
}

void particle_filter::thread_p_Val2_13_mux_fu_27085_p3() {
    p_Val2_13_mux_fu_27085_p3 = (!brmerge_i_i1_reg_34735.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i1_reg_34735.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_19_reg_34697.read());
}

void particle_filter::thread_p_Val2_14_fu_28136_p1() {
    p_Val2_14_fu_28136_p1 = esl_sext<29,28>(p_Val2_6_reg_35142.read());
}

void particle_filter::thread_p_Val2_14_fu_28136_p2() {
    p_Val2_14_fu_28136_p2 = (!ap_const_lv29_0.is_01() || !p_Val2_14_fu_28136_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(ap_const_lv29_0) - sc_biguint<29>(p_Val2_14_fu_28136_p1.read()));
}

void particle_filter::thread_p_Val2_16_fu_30125_p3() {
    p_Val2_16_fu_30125_p3 = (!brmerge4_reg_35927.read()[0].is_01())? sc_lv<28>(): ((brmerge4_reg_35927.read()[0].to_bool())? p_Val2_33_mux_fu_30113_p3.read(): p_Val2_6_157_fu_30119_p3.read());
}

void particle_filter::thread_p_Val2_17_fu_26592_p3() {
    p_Val2_17_fu_26592_p3 = (!tmp_206_fu_26549_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_206_fu_26549_p2.read()[0].to_bool())? tmp_369_fu_26568_p1.read(): p_5_fu_26572_p3.read());
}

void particle_filter::thread_p_Val2_18_fu_26789_p2() {
    p_Val2_18_fu_26789_p2 = (!p_Val2_17_reg_34539.read().is_01() || !tmp_225_fu_26785_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_17_reg_34539.read()) + sc_biguint<28>(tmp_225_fu_26785_p1.read()));
}

void particle_filter::thread_p_Val2_19_fu_26926_p3() {
    p_Val2_19_fu_26926_p3 = (!sel_tmp25_reg_34566.read()[0].is_01())? sc_lv<28>(): ((sel_tmp25_reg_34566.read()[0].to_bool())? tmp_375_reg_34534.read(): sel_tmp23_fu_26921_p3.read());
}

void particle_filter::thread_p_Val2_1_153_fu_28834_p3() {
    p_Val2_1_153_fu_28834_p3 = (!tmp_284_fu_28791_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_284_fu_28791_p2.read()[0].to_bool())? tmp_460_fu_28810_p1.read(): p_21_fu_28814_p3.read());
}

void particle_filter::thread_p_Val2_1_fu_27174_p3() {
    p_Val2_1_fu_27174_p3 = (!tmp_249_reg_34779.read()[0].is_01())? sc_lv<28>(): ((tmp_249_reg_34779.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_Val2_20_fu_27553_p3() {
    p_Val2_20_fu_27553_p3 = (!tmp_256_reg_34890.read()[0].is_01())? sc_lv<28>(): ((tmp_256_reg_34890.read()[0].to_bool())? tmp_407_reg_34895.read(): p_6_fu_27534_p3.read());
}

void particle_filter::thread_p_Val2_21_fu_30140_p2() {
    p_Val2_21_fu_30140_p2 = (!ap_const_lv13_1000.is_01() || !tmp_375_cast_fu_30136_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1000) - sc_biguint<13>(tmp_375_cast_fu_30136_p1.read()));
}

void particle_filter::thread_p_Val2_22_fu_25057_p3() {
    p_Val2_22_fu_25057_p3 = (!isNeg_reg_33364.read()[0].is_01())? sc_lv<62>(): ((isNeg_reg_33364.read()[0].to_bool())? tmp_81_i_i_cast_fu_25047_p1.read(): tmp_83_i_i_fu_25051_p2.read());
}

void particle_filter::thread_p_Val2_22_mux_fu_27939_p3() {
    p_Val2_22_mux_fu_27939_p3 = (!brmerge_i_i_fu_27919_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i_fu_27919_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_30_reg_35056.read());
}

void particle_filter::thread_p_Val2_23_1_fu_29074_p3() {
    p_Val2_23_1_fu_29074_p3 = (!tmp_461_1_fu_29031_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_461_1_fu_29031_p2.read()[0].to_bool())? tmp_509_fu_29050_p1.read(): p_7_1_fu_29054_p3.read());
}

void particle_filter::thread_p_Val2_23_fu_30219_p3() {
    p_Val2_23_fu_30219_p3 = esl_concat<16,12>(tmp_397_reg_35964.read(), ap_const_lv12_0);
}

void particle_filter::thread_p_Val2_24_1_fu_29411_p2() {
    p_Val2_24_1_fu_29411_p2 = (!p_Val2_23_1_reg_35586.read().is_01() || !tmp_503_1_fu_29407_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_23_1_reg_35586.read()) + sc_biguint<28>(tmp_503_1_fu_29407_p1.read()));
}

void particle_filter::thread_p_Val2_24_fu_30230_p2() {
    p_Val2_24_fu_30230_p2 = (!tmp_378_fu_30226_p1.read().is_01() || !ap_const_lv29_1000.is_01())? sc_lv<29>(): (sc_bigint<29>(tmp_378_fu_30226_p1.read()) + sc_biguint<29>(ap_const_lv29_1000));
}

void particle_filter::thread_p_Val2_25_1_160_fu_29934_p3() {
    p_Val2_25_1_160_fu_29934_p3 = (!ap_reg_ppstg_tmp_429_1_reg_35349_pp4_it29.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_429_1_reg_35349_pp4_it29.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_Val2_25_1_fu_29643_p3() {
    p_Val2_25_1_fu_29643_p3 = (!ap_reg_ppstg_sel_tmp86_reg_35613_pp4_it27.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_sel_tmp86_reg_35613_pp4_it27.read()[0].to_bool())? ap_reg_ppstg_tmp_510_reg_35581_pp4_it27.read(): sel_tmp84_fu_29638_p3.read());
}

void particle_filter::thread_p_Val2_25_mux_1_fu_29927_p3() {
    p_Val2_25_mux_1_fu_29927_p3 = (!brmerge_i_i2_1_fu_29919_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i2_1_fu_29919_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: ap_reg_ppstg_p_Val2_25_1_reg_35836_pp4_it29.read());
}

void particle_filter::thread_p_Val2_25_mux_fu_29859_p3() {
    p_Val2_25_mux_fu_29859_p3 = (!brmerge_i_i2_fu_29851_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i2_fu_29851_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: ap_reg_ppstg_p_Val2_2_155_reg_35803_pp4_it29.read());
}

void particle_filter::thread_p_Val2_26_fu_30376_p3() {
    p_Val2_26_fu_30376_p3 = (!sel_tmp76_fu_30372_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp76_fu_30372_p2.read()[0].to_bool())? p_Val2_52_mux_fu_30353_p3.read(): sel_tmp75_fu_30365_p3.read());
}

void particle_filter::thread_p_Val2_27_fu_27580_p2() {
    p_Val2_27_fu_27580_p2 = (!p_Val2_20_fu_27553_p3.read().is_01() || !tmp_295_fu_27576_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_20_fu_27553_p3.read()) + sc_biguint<28>(tmp_295_fu_27576_p1.read()));
}

void particle_filter::thread_p_Val2_29_fu_25115_p3() {
    p_Val2_29_fu_25115_p3 = (!isNeg_4_reg_33375.read()[0].is_01())? sc_lv<62>(): ((isNeg_4_reg_33375.read()[0].to_bool())? tmp_81_i_i320_cast_fu_25105_p1.read(): tmp_83_i_i1_fu_25109_p2.read());
}

void particle_filter::thread_p_Val2_29_mux_fu_28036_p3() {
    p_Val2_29_mux_fu_28036_p3 = (!brmerge_i_i3_fu_28022_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i3_fu_28022_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_45_reg_35129.read());
}

void particle_filter::thread_p_Val2_2_155_fu_29548_p3() {
    p_Val2_2_155_fu_29548_p3 = (!ap_reg_ppstg_sel_tmp63_reg_35509_pp4_it27.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_sel_tmp63_reg_35509_pp4_it27.read()[0].to_bool())? ap_reg_ppstg_tmp_462_reg_35477_pp4_it27.read(): sel_tmp61_fu_29543_p3.read());
}

void particle_filter::thread_p_Val2_2_fu_28043_p3() {
    p_Val2_2_fu_28043_p3 = (!underflow_2_fu_28017_p2.read()[0].is_01())? sc_lv<28>(): ((underflow_2_fu_28017_p2.read()[0].to_bool())? ap_const_lv28_8000000: p_Val2_45_reg_35129.read());
}

void particle_filter::thread_p_Val2_30_1_fu_29979_p3() {
    p_Val2_30_1_fu_29979_p3 = (!sel_tmp97_fu_29974_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp97_fu_29974_p2.read()[0].to_bool())? p_Val2_25_mux_1_fu_29927_p3.read(): sel_tmp95_fu_29956_p3.read());
}

void particle_filter::thread_p_Val2_30_fu_27726_p3() {
    p_Val2_30_fu_27726_p3 = (!sel_tmp14_reg_34910.read()[0].is_01())? sc_lv<28>(): ((sel_tmp14_reg_34910.read()[0].to_bool())? tmp_408_reg_34980.read(): sel_tmp10_fu_27720_p3.read());
}

void particle_filter::thread_p_Val2_31_fu_30752_p2() {
    p_Val2_31_fu_30752_p2 = (!t_V_1_reg_36190.read().is_01() || !mask_i_cast_fu_30748_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(t_V_1_reg_36190.read()) + sc_biguint<32>(mask_i_cast_fu_30748_p1.read()));
}

void particle_filter::thread_p_Val2_32_1_fu_30057_p0() {
    p_Val2_32_1_fu_30057_p0 = esl_sext<29,28>(p_Val2_30_1_reg_35906.read());
}

void particle_filter::thread_p_Val2_32_1_fu_30057_p1() {
    p_Val2_32_1_fu_30057_p1 = esl_sext<29,28>(U_V_1_3_phi_fu_19413_p4.read());
}

void particle_filter::thread_p_Val2_32_1_fu_30057_p2() {
    p_Val2_32_1_fu_30057_p2 = (!p_Val2_32_1_fu_30057_p0.read().is_01() || !p_Val2_32_1_fu_30057_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(p_Val2_32_1_fu_30057_p0.read()) - sc_biguint<29>(p_Val2_32_1_fu_30057_p1.read()));
}

void particle_filter::thread_p_Val2_33_1_fu_30172_p3() {
    p_Val2_33_1_fu_30172_p3 = (!underflow_6_1_reg_35938.read()[0].is_01())? sc_lv<28>(): ((underflow_6_1_reg_35938.read()[0].to_bool())? ap_const_lv28_8000000: tmp_522_reg_35932.read());
}

void particle_filter::thread_p_Val2_33_fu_30992_p3() {
    p_Val2_33_fu_30992_p3 = (!isNeg_5_reg_36263.read()[0].is_01())? sc_lv<78>(): ((isNeg_5_reg_36263.read()[0].to_bool())? tmp_89_i_i_cast_fu_30982_p1.read(): tmp_91_i_i_fu_30986_p2.read());
}

void particle_filter::thread_p_Val2_33_mux_1_fu_30166_p3() {
    p_Val2_33_mux_1_fu_30166_p3 = (!brmerge_i_i4_1_reg_35943.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i4_1_reg_35943.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_522_reg_35932.read());
}

void particle_filter::thread_p_Val2_33_mux_fu_30113_p3() {
    p_Val2_33_mux_fu_30113_p3 = (!brmerge_i_i4_reg_35922.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i4_reg_35922.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_484_reg_35911.read());
}

void particle_filter::thread_p_Val2_35_fu_25179_p3() {
    p_Val2_35_fu_25179_p3 = (!isNeg_6_reg_33390.read()[0].is_01())? sc_lv<62>(): ((isNeg_6_reg_33390.read()[0].to_bool())? tmp_81_i_i336_cast_fu_25169_p1.read(): tmp_83_i_i2_fu_25173_p2.read());
}

void particle_filter::thread_p_Val2_36_fu_25237_p3() {
    p_Val2_36_fu_25237_p3 = (!isNeg_7_reg_33401.read()[0].is_01())? sc_lv<62>(): ((isNeg_7_reg_33401.read()[0].to_bool())? tmp_81_i_i352_cast_fu_25227_p1.read(): tmp_83_i_i3_fu_25231_p2.read());
}

void particle_filter::thread_p_Val2_39_fu_25301_p3() {
    p_Val2_39_fu_25301_p3 = (!isNeg_8_reg_33416.read()[0].is_01())? sc_lv<62>(): ((isNeg_8_reg_33416.read()[0].to_bool())? tmp_81_i_i368_cast_fu_25291_p1.read(): tmp_83_i_i4_fu_25295_p2.read());
}

void particle_filter::thread_p_Val2_3_150_fu_28282_p3() {
    p_Val2_3_150_fu_28282_p3 = (!underflow_3_reg_35211.read()[0].is_01())? sc_lv<28>(): ((underflow_3_reg_35211.read()[0].to_bool())? ap_const_lv28_8000000: p_Val2_46_reg_35167.read());
}

void particle_filter::thread_p_Val2_3_fu_27977_p3() {
    p_Val2_3_fu_27977_p3 = (!sel_tmp47_fu_27973_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp47_fu_27973_p2.read()[0].to_bool())? p_Val2_22_mux_reg_35107.read(): sel_tmp46_reg_35112.read());
}

void particle_filter::thread_p_Val2_40_fu_25359_p3() {
    p_Val2_40_fu_25359_p3 = (!isNeg_9_reg_33427.read()[0].is_01())? sc_lv<62>(): ((isNeg_9_reg_33427.read()[0].to_bool())? tmp_81_i_i384_cast_fu_25349_p1.read(): tmp_83_i_i5_fu_25353_p2.read());
}

void particle_filter::thread_p_Val2_40_mux_fu_28275_p3() {
    p_Val2_40_mux_fu_28275_p3 = (!brmerge_i_i5_fu_28261_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i5_fu_28261_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_46_reg_35167.read());
}

void particle_filter::thread_p_Val2_41_fu_25423_p3() {
    p_Val2_41_fu_25423_p3 = (!isNeg_10_reg_33442.read()[0].is_01())? sc_lv<62>(): ((isNeg_10_reg_33442.read()[0].to_bool())? tmp_81_i_i400_cast_fu_25413_p1.read(): tmp_83_i_i6_fu_25417_p2.read());
}

void particle_filter::thread_p_Val2_42_fu_25481_p3() {
    p_Val2_42_fu_25481_p3 = (!isNeg_11_reg_33453.read()[0].is_01())? sc_lv<62>(): ((isNeg_11_reg_33453.read()[0].to_bool())? tmp_81_i_i416_cast_fu_25471_p1.read(): tmp_83_i_i7_fu_25475_p2.read());
}

void particle_filter::thread_p_Val2_42_mux_fu_28228_p3() {
    p_Val2_42_mux_fu_28228_p3 = (!brmerge_i_i6_fu_28214_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i6_fu_28214_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_47_reg_35192.read());
}

void particle_filter::thread_p_Val2_43_1_fu_30178_p3() {
    p_Val2_43_1_fu_30178_p3 = (!brmerge13_1_reg_35948.read()[0].is_01())? sc_lv<28>(): ((brmerge13_1_reg_35948.read()[0].to_bool())? p_Val2_33_mux_1_fu_30166_p3.read(): p_Val2_33_1_fu_30172_p3.read());
}

void particle_filter::thread_p_Val2_45_fu_28000_p1() {
    p_Val2_45_fu_28000_p1 = p_Val2_4_fu_27987_p2.read().range(28-1, 0);
}

void particle_filter::thread_p_Val2_46_fu_28111_p1() {
    p_Val2_46_fu_28111_p1 = p_Val2_12_fu_28097_p2.read().range(28-1, 0);
}

void particle_filter::thread_p_Val2_47_fu_28150_p1() {
    p_Val2_47_fu_28150_p1 = p_Val2_14_fu_28136_p2.read().range(28-1, 0);
}

void particle_filter::thread_p_Val2_48_fu_21632_p1() {
    p_Val2_48_fu_21632_p1 = x_assign_reg_32760.read();
}

void particle_filter::thread_p_Val2_49_1_fu_30193_p2() {
    p_Val2_49_1_fu_30193_p2 = (!ap_const_lv13_1000.is_01() || !tmp_569_1_cast_fu_30189_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1000) - sc_biguint<13>(tmp_569_1_cast_fu_30189_p1.read()));
}

void particle_filter::thread_p_Val2_4_151_fu_28235_p3() {
    p_Val2_4_151_fu_28235_p3 = (!underflow_4_fu_28209_p2.read()[0].is_01())? sc_lv<28>(): ((underflow_4_fu_28209_p2.read()[0].to_bool())? ap_const_lv28_8000000: p_Val2_47_reg_35192.read());
}

void particle_filter::thread_p_Val2_4_fu_27987_p0() {
    p_Val2_4_fu_27987_p0 = esl_sext<29,28>(p_Val2_3_fu_27977_p3.read());
}

void particle_filter::thread_p_Val2_4_fu_27987_p2() {
    p_Val2_4_fu_27987_p2 = (!p_Val2_4_fu_27987_p0.read().is_01() || !tmp_317_reg_34797.read().is_01())? sc_lv<29>(): (sc_bigint<29>(p_Val2_4_fu_27987_p0.read()) - sc_biguint<29>(tmp_317_reg_34797.read()));
}

void particle_filter::thread_p_Val2_50_1_fu_30286_p3() {
    p_Val2_50_1_fu_30286_p3 = esl_concat<16,12>(tmp_399_reg_35980.read(), ap_const_lv12_0);
}

void particle_filter::thread_p_Val2_51_1_fu_30297_p2() {
    p_Val2_51_1_fu_30297_p2 = (!tmp_572_1_fu_30293_p1.read().is_01() || !ap_const_lv29_1000.is_01())? sc_lv<29>(): (sc_bigint<29>(tmp_572_1_fu_30293_p1.read()) + sc_biguint<29>(ap_const_lv29_1000));
}

void particle_filter::thread_p_Val2_52_1_fu_30424_p3() {
    p_Val2_52_1_fu_30424_p3 = (!underflow_8_1_reg_36012.read()[0].is_01())? sc_lv<28>(): ((underflow_8_1_reg_36012.read()[0].to_bool())? ap_const_lv28_8000000: tmp_526_reg_36006.read());
}

void particle_filter::thread_p_Val2_52_fu_21635_p1() {
    p_Val2_52_fu_21635_p1 = x_assign_7_reg_32780.read();
}

void particle_filter::thread_p_Val2_52_mux_1_fu_30418_p3() {
    p_Val2_52_mux_1_fu_30418_p3 = (!brmerge_i_i8_1_reg_36017.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i8_1_reg_36017.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_526_reg_36006.read());
}

void particle_filter::thread_p_Val2_52_mux_fu_30353_p3() {
    p_Val2_52_mux_fu_30353_p3 = (!brmerge_i_i8_reg_35996.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i8_reg_35996.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_488_reg_35985.read());
}

void particle_filter::thread_p_Val2_53_1_fu_30441_p3() {
    p_Val2_53_1_fu_30441_p3 = (!sel_tmp99_fu_30437_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp99_fu_30437_p2.read()[0].to_bool())? p_Val2_52_mux_1_fu_30418_p3.read(): sel_tmp98_fu_30430_p3.read());
}

void particle_filter::thread_p_Val2_5_fu_29866_p3() {
    p_Val2_5_fu_29866_p3 = (!ap_reg_ppstg_tmp_262_reg_35306_pp4_it29.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_262_reg_35306_pp4_it29.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_Val2_64_fu_30898_p3() {
    p_Val2_64_fu_30898_p3 = (!sel_tmp9_i_reg_36253.read()[0].is_01())? sc_lv<32>(): ((sel_tmp9_i_reg_36253.read()[0].to_bool())? ap_const_lv32_BF800000: tmp_87_fu_30895_p1.read());
}

void particle_filter::thread_p_Val2_68_fu_21638_p1() {
    p_Val2_68_fu_21638_p1 = x_assign_8_reg_32765.read();
}

void particle_filter::thread_p_Val2_6_157_fu_30119_p3() {
    p_Val2_6_157_fu_30119_p3 = (!underflow_6_reg_35917.read()[0].is_01())? sc_lv<28>(): ((underflow_6_reg_35917.read()[0].to_bool())? ap_const_lv28_8000000: tmp_484_reg_35911.read());
}

void particle_filter::thread_p_Val2_6_fu_28050_p3() {
    p_Val2_6_fu_28050_p3 = (!brmerge9_fu_28031_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge9_fu_28031_p2.read()[0].to_bool())? p_Val2_29_mux_fu_28036_p3.read(): p_Val2_2_fu_28043_p3.read());
}

void particle_filter::thread_p_Val2_71_fu_21641_p1() {
    p_Val2_71_fu_21641_p1 = x_assign_9_reg_32785.read();
}

void particle_filter::thread_p_Val2_74_fu_21644_p1() {
    p_Val2_74_fu_21644_p1 = x_assign_s_reg_32770.read();
}

void particle_filter::thread_p_Val2_77_fu_21647_p1() {
    p_Val2_77_fu_21647_p1 = x_assign_2_reg_32790.read();
}

void particle_filter::thread_p_Val2_7_fu_29911_p3() {
    p_Val2_7_fu_29911_p3 = (!sel_tmp74_fu_29906_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp74_fu_29906_p2.read()[0].to_bool())? p_Val2_25_mux_fu_29859_p3.read(): sel_tmp72_fu_29888_p3.read());
}

void particle_filter::thread_p_Val2_82_fu_21650_p1() {
    p_Val2_82_fu_21650_p1 = x_assign_1_reg_32775.read();
}

void particle_filter::thread_p_Val2_85_fu_21653_p1() {
    p_Val2_85_fu_21653_p1 = x_assign_3_reg_32795.read();
}

void particle_filter::thread_p_Val2_88_fu_25814_p1() {
    p_Val2_88_fu_25814_p1 = log_lik_particle_max_keep_reg_34284.read();
}

void particle_filter::thread_p_Val2_89_fu_25827_p1() {
    p_Val2_89_fu_25827_p1 = f_assign_1_reg_2398.read();
}

void particle_filter::thread_p_Val2_8_158_fu_30359_p3() {
    p_Val2_8_158_fu_30359_p3 = (!underflow_8_reg_35991.read()[0].is_01())? sc_lv<28>(): ((underflow_8_reg_35991.read()[0].to_bool())? ap_const_lv28_8000000: tmp_488_reg_35985.read());
}

void particle_filter::thread_p_Val2_8_fu_29994_p0() {
    p_Val2_8_fu_29994_p0 = esl_sext<29,28>(p_Val2_7_reg_35901.read());
}

void particle_filter::thread_p_Val2_8_fu_29994_p1() {
    p_Val2_8_fu_29994_p1 = esl_sext<29,28>(U_V_phi_fu_19403_p4.read());
}

void particle_filter::thread_p_Val2_8_fu_29994_p2() {
    p_Val2_8_fu_29994_p2 = (!p_Val2_8_fu_29994_p0.read().is_01() || !p_Val2_8_fu_29994_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(p_Val2_8_fu_29994_p0.read()) - sc_biguint<29>(p_Val2_8_fu_29994_p1.read()));
}

void particle_filter::thread_p_Val2_s_154_fu_29271_p2() {
    p_Val2_s_154_fu_29271_p2 = (!p_Val2_1_153_reg_35482.read().is_01() || !tmp_349_fu_29267_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_1_153_reg_35482.read()) + sc_biguint<28>(tmp_349_fu_29267_p1.read()));
}

void particle_filter::thread_p_Val2_s_fu_27091_p3() {
    p_Val2_s_fu_27091_p3 = (!tmp_200_reg_34459.read()[0].is_01())? sc_lv<28>(): ((tmp_200_reg_34459.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_block_replicated_2_fu_30646_p3() {
    p_block_replicated_2_fu_30646_p3 = (!tmp_289_reg_36150.read()[0].is_01())? sc_lv<32>(): ((tmp_289_reg_36150.read()[0].to_bool())? block_replicated_fu_30640_p2.read(): block_replicated_2_phi_fu_19505_p4.read());
}

void particle_filter::thread_p_not38_i_fu_28188_p2() {
    p_not38_i_fu_28188_p2 = (!p_Result_s_reg_35179.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_reg_35179.read() != ap_const_lv2_3);
}

void particle_filter::thread_p_not_i_fu_28162_p2() {
    p_not_i_fu_28162_p2 = (!p_Result_s_reg_35179.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_reg_35179.read() != ap_const_lv2_0);
}

void particle_filter::thread_p_r_i_i1_fu_26624_p2() {
    p_r_i_i1_fu_26624_p2 = (qb_reg_34507.read() | r_fu_26610_p2.read());
}

void particle_filter::thread_p_r_i_i2_1_fu_29106_p2() {
    p_r_i_i2_1_fu_29106_p2 = (qb_2_1_reg_35450.read() | r_2_1_fu_29092_p2.read());
}

void particle_filter::thread_p_r_i_i2_fu_28866_p2() {
    p_r_i_i2_fu_28866_p2 = (qb_2_reg_35397.read() | r_2_fu_28852_p2.read());
}

void particle_filter::thread_p_r_i_i_fu_27567_p2() {
    p_r_i_i_fu_27567_p2 = (qb_1_reg_34900.read() | r_1_reg_34905.read());
}

void particle_filter::thread_p_s_fu_25681_p3() {
    p_s_fu_25681_p3 = (!ap_reg_ppstg_tmp_340_0_3_reg_33751_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_0_3_reg_33751_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_particles_0_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()))) {
        particles_0_address0 = ap_reg_ppstg_particles_0_addr_reg_32998_pp1_it48.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        particles_0_address0 = particles_0_addr_1_reg_36121.read();
    } else {
        particles_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_0_address1() {
    particles_0_address1 = ap_reg_ppstg_particles_0_addr_reg_32998_pp1_it49.read();
}

void particle_filter::thread_particles_0_ce0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read())))) {
        particles_0_ce0 = ap_const_logic_1;
    } else {
        particles_0_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_0_ce1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it50.read()))) {
        particles_0_ce1 = ap_const_logic_1;
    } else {
        particles_0_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_0_d0() {
    particles_0_d0 = reg_20812.read();
}

void particle_filter::thread_particles_0_d1() {
    particles_0_d1 = ap_reg_ppstg_particle_common_1_reg_33092_pp1_it49.read();
}

void particle_filter::thread_particles_0_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it48.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it48.read())))) {
        particles_0_we0 = ap_const_logic_1;
    } else {
        particles_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it50.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it49.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it49.read())))) {
        particles_0_we1 = ap_const_logic_1;
    } else {
        particles_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_1_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()))) {
        particles_1_address0 = ap_reg_ppstg_particles_1_addr_reg_33004_pp1_it48.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        particles_1_address0 = particles_1_addr_1_reg_36126.read();
    } else {
        particles_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_1_address1() {
    particles_1_address1 = ap_reg_ppstg_particles_1_addr_reg_33004_pp1_it49.read();
}

void particle_filter::thread_particles_1_ce0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read())))) {
        particles_1_ce0 = ap_const_logic_1;
    } else {
        particles_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_1_ce1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it50.read()))) {
        particles_1_ce1 = ap_const_logic_1;
    } else {
        particles_1_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_1_d0() {
    particles_1_d0 = reg_20812.read();
}

void particle_filter::thread_particles_1_d1() {
    particles_1_d1 = ap_reg_ppstg_particle_common_1_reg_33092_pp1_it49.read();
}

void particle_filter::thread_particles_1_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it48.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32872_pp1_it48.read())))) {
        particles_1_we0 = ap_const_logic_1;
    } else {
        particles_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it50.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it49.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32887_pp1_it49.read())))) {
        particles_1_we1 = ap_const_logic_1;
    } else {
        particles_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_load_0_phi_fu_30665_p3() {
    particles_load_0_phi_fu_30665_p3 = (!icmp9_reg_36115.read()[0].is_01())? sc_lv<32>(): ((icmp9_reg_36115.read()[0].to_bool())? particles_0_q0.read(): particles_1_q0.read());
}

void particle_filter::thread_particles_saved_out_address0() {
    if (esl_seteq<1,8,8>(ap_ST_st382_fsm_143, ap_CS_fsm.read())) {
        particles_saved_out_address0 =  (sc_lv<15>) (sum3_cast_fu_31065_p1.read());
    } else if (esl_seteq<1,8,8>(ap_ST_st14_fsm_10, ap_CS_fsm.read())) {
        particles_saved_out_address0 =  (sc_lv<15>) (ap_const_lv64_5);
    } else {
        particles_saved_out_address0 =  (sc_lv<15>) ("XXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_saved_out_ce0() {
    if ((esl_seteq<1,8,8>(ap_ST_st14_fsm_10, ap_CS_fsm.read()) || 
         esl_seteq<1,8,8>(ap_ST_st382_fsm_143, ap_CS_fsm.read()))) {
        particles_saved_out_ce0 = ap_const_logic_1;
    } else {
        particles_saved_out_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_saved_out_d0() {
    if (esl_seteq<1,8,8>(ap_ST_st382_fsm_143, ap_CS_fsm.read())) {
        particles_saved_out_d0 = particles_temp_load_1_0_phi_reg_36305.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st14_fsm_10, ap_CS_fsm.read())) {
        particles_saved_out_d0 = particles_temp_0_q0.read();
    } else {
        particles_saved_out_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_saved_out_we0() {
    if ((esl_seteq<1,8,8>(ap_ST_st14_fsm_10, ap_CS_fsm.read()) || 
         esl_seteq<1,8,8>(ap_ST_st382_fsm_143, ap_CS_fsm.read()))) {
        particles_saved_out_we0 = ap_const_logic_1;
    } else {
        particles_saved_out_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_0_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()))) {
        particles_temp_0_address0 =  (sc_lv<13>) (newIndex1_fu_30692_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()))) {
        particles_temp_0_address0 = ap_reg_ppstg_particles_temp_0_addr_1_reg_32098_pp0_it1.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st13_fsm_9, ap_CS_fsm.read())) {
        particles_temp_0_address0 =  (sc_lv<13>) (ap_const_lv64_0);
    } else {
        particles_temp_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_0_address1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()))) {
        particles_temp_0_address1 = ap_reg_ppstg_particles_temp_0_addr_1_reg_32098_pp0_it2.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st380_fsm_141, ap_CS_fsm.read())) {
        particles_temp_0_address1 =  (sc_lv<13>) (newIndex4_fu_31031_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it39.read()))) {
        particles_temp_0_address1 =  (sc_lv<13>) (newIndex6_fu_24633_p1.read());
    } else {
        particles_temp_0_address1 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_0_ce0() {
    if ((esl_seteq<1,8,8>(ap_ST_st13_fsm_9, ap_CS_fsm.read()) || 
         (esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read())))) {
        particles_temp_0_ce0 = ap_const_logic_1;
    } else {
        particles_temp_0_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_0_ce1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it39.read())) || 
         esl_seteq<1,8,8>(ap_ST_st380_fsm_141, ap_CS_fsm.read()) || 
         (esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read())))) {
        particles_temp_0_ce1 = ap_const_logic_1;
    } else {
        particles_temp_0_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_0_d0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()))) {
        particles_temp_0_d0 = particles_load_0_phi_reg_36166.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()))) {
        particles_temp_0_d0 = init_particles_load_0_phi_reg_32115.read();
    } else {
        particles_temp_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_0_d1() {
    particles_temp_0_d1 = ap_reg_ppstg_init_particles_load_1_phi_reg_32121_pp0_it2.read();
}

void particle_filter::thread_particles_temp_0_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32074_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_32093_pp0_it1.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond10_reg_36136_pp5_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, icmp11_fu_30697_p2.read())))) {
        particles_temp_0_we0 = ap_const_logic_1;
    } else {
        particles_temp_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32074_pp0_it2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond1_reg_32110_pp0_it2.read())))) {
        particles_temp_0_we1 = ap_const_logic_1;
    } else {
        particles_temp_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_1_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()))) {
        particles_temp_1_address0 = ap_reg_ppstg_particles_temp_1_addr_reg_32104_pp0_it1.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st380_fsm_141, ap_CS_fsm.read())) {
        particles_temp_1_address0 =  (sc_lv<13>) (newIndex4_fu_31031_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it39.read()))) {
        particles_temp_1_address0 =  (sc_lv<13>) (newIndex6_fu_24633_p1.read());
    } else {
        particles_temp_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_1_address1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()))) {
        particles_temp_1_address1 =  (sc_lv<13>) (newIndex1_fu_30692_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()))) {
        particles_temp_1_address1 = ap_reg_ppstg_particles_temp_1_addr_reg_32104_pp0_it2.read();
    } else {
        particles_temp_1_address1 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_1_ce0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it39.read())) || 
         esl_seteq<1,8,8>(ap_ST_st380_fsm_141, ap_CS_fsm.read()) || 
         (esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read())))) {
        particles_temp_1_ce0 = ap_const_logic_1;
    } else {
        particles_temp_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_1_ce1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read())))) {
        particles_temp_1_ce1 = ap_const_logic_1;
    } else {
        particles_temp_1_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_1_d0() {
    particles_temp_1_d0 = init_particles_load_0_phi_reg_32115.read();
}

void particle_filter::thread_particles_temp_1_d1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()))) {
        particles_temp_1_d1 = particles_load_0_phi_reg_36166.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()))) {
        particles_temp_1_d1 = ap_reg_ppstg_init_particles_load_1_phi_reg_32121_pp0_it2.read();
    } else {
        particles_temp_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_1_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32074_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_32093_pp0_it1.read())))) {
        particles_temp_1_we0 = ap_const_logic_1;
    } else {
        particles_temp_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32074_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond1_reg_32110_pp0_it2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond10_reg_36136_pp5_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp11_fu_30697_p2.read())))) {
        particles_temp_1_we1 = ap_const_logic_1;
    } else {
        particles_temp_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_load_1_0_phi_fu_31053_p3() {
    particles_temp_load_1_0_phi_fu_31053_p3 = (!icmp8_reg_36300.read()[0].is_01())? sc_lv<32>(): ((icmp8_reg_36300.read()[0].to_bool())? particles_temp_0_q1.read(): particles_temp_1_q0.read());
}

void particle_filter::thread_pos1_1_fu_27444_p2() {
    pos1_1_fu_27444_p2 = (!F2_1_reg_34821.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_reg_34821.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos1_2_1_fu_29145_p2() {
    pos1_2_1_fu_29145_p2 = (!ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos1_2_fu_28905_p2() {
    pos1_2_fu_28905_p2 = (!ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos1_fu_26663_p2() {
    pos1_fu_26663_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34467.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos2_1_fu_27453_p2() {
    pos2_1_fu_27453_p2 = (!F2_1_reg_34821.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_reg_34821.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_pos2_2_1_fu_28770_p2() {
    pos2_2_1_fu_28770_p2 = (!F2_2_1_reg_35357.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35357.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_pos2_2_fu_28610_p2() {
    pos2_2_fu_28610_p2 = (!F2_2_reg_35314.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35314.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_pos2_fu_26528_p2() {
    pos2_fu_26528_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34467.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_previous_particle_assign_load_0_phi_fu_24642_p3() {
    previous_particle_assign_load_0_phi_fu_24642_p3 = (!ap_reg_ppstg_icmp2_reg_32872_pp1_it39.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_icmp2_reg_32872_pp1_it39.read()[0].to_bool())? particles_temp_0_q1.read(): particles_temp_1_q0.read());
}

void particle_filter::thread_previous_particle_assign_load_1_phi_fu_24649_p3() {
    previous_particle_assign_load_1_phi_fu_24649_p3 = (!ap_reg_ppstg_cond_reg_32887_pp1_it39.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_cond_reg_32887_pp1_it39.read()[0].to_bool())? particles_temp_0_q1.read(): particles_temp_1_q0.read());
}

void particle_filter::thread_qb_1_fu_27360_p3() {
    qb_1_fu_27360_p3 = (!tmp_278_reg_34844.read()[0].is_01())? sc_lv<1>(): ((tmp_278_reg_34844.read()[0].to_bool())? isneg_1_fu_27289_p3.read(): tmp_409_fu_27352_p3.read());
}

void particle_filter::thread_qb_2_1_fu_28702_p3() {
    qb_2_1_fu_28702_p3 = (!tmp_480_1_fu_28679_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_480_1_fu_28679_p2.read()[0].to_bool())? tmp_506_reg_35328.read(): tmp_511_fu_28694_p3.read());
}

void particle_filter::thread_qb_2_fu_28542_p3() {
    qb_2_fu_28542_p3 = (!tmp_338_fu_28519_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_338_fu_28519_p2.read()[0].to_bool())? tmp_454_reg_35285.read(): tmp_464_fu_28534_p3.read());
}

void particle_filter::thread_qb_assign_1_fu_26781_p2() {
    qb_assign_1_fu_26781_p2 = (p_r_i_i1_reg_34550.read() & isneg_reg_34438.read());
}

void particle_filter::thread_qb_assign_3_fu_27571_p2() {
    qb_assign_3_fu_27571_p2 = (p_r_i_i_fu_27567_p2.read() & isneg_1_reg_34864.read());
}

void particle_filter::thread_qb_assign_5_1_fu_29403_p2() {
    qb_assign_5_1_fu_29403_p2 = (p_r_i_i2_1_reg_35597.read() & ap_reg_ppstg_tmp_506_reg_35328_pp4_it26.read());
}

void particle_filter::thread_qb_assign_5_fu_29263_p2() {
    qb_assign_5_fu_29263_p2 = (p_r_i_i2_reg_35493.read() & ap_reg_ppstg_tmp_454_reg_35285_pp4_it26.read());
}

void particle_filter::thread_qb_fu_26460_p3() {
    qb_fu_26460_p3 = (!tmp_216_fu_26437_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_216_fu_26437_p2.read()[0].to_bool())? isneg_reg_34438.read(): tmp_392_fu_26452_p3.read());
}

void particle_filter::thread_r_1_fu_27398_p2() {
    r_1_fu_27398_p2 = (tmp_287_fu_27367_p2.read() & tmp_294_fu_27392_p2.read());
}

void particle_filter::thread_r_2_1_fu_29092_p2() {
    r_2_1_fu_29092_p2 = (tmp_494_1_fu_29082_p2.read() & tmp_501_1_fu_29087_p2.read());
}

void particle_filter::thread_r_2_fu_28852_p2() {
    r_2_fu_28852_p2 = (tmp_344_fu_28842_p2.read() & tmp_348_fu_28847_p2.read());
}

void particle_filter::thread_r_V_1_fu_27653_p2() {
    r_V_1_fu_27653_p2 = (!tmp_308_reg_34954.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_308_reg_34954.read().to_uint();
}

void particle_filter::thread_r_V_2_1_fu_29209_p2() {
    r_V_2_1_fu_29209_p2 = (!tmp_527_1_fu_29200_p1.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_527_1_fu_29200_p1.read().to_uint();
}

void particle_filter::thread_r_V_2_fu_28969_p2() {
    r_V_2_fu_28969_p2 = (!tmp_365_fu_28960_p1.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_365_fu_28960_p1.read().to_uint();
}

void particle_filter::thread_r_V_fu_26727_p2() {
    r_V_fu_26727_p2 = (!tmp_238_fu_26718_p1.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_238_fu_26718_p1.read().to_uint();
}

void particle_filter::thread_r_fu_26610_p2() {
    r_fu_26610_p2 = (tmp_220_fu_26600_p2.read() & tmp_224_fu_26605_p2.read());
}

void particle_filter::thread_replication_factors_0_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()))) {
        replication_factors_0_address0 = ap_reg_ppstg_replication_factors_0_addr_reg_35253_pp4_it34.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st331_fsm_94, ap_CS_fsm.read())) {
        replication_factors_0_address0 =  (sc_lv<13>) (newIndex_fu_30583_p1.read());
    } else {
        replication_factors_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_replication_factors_0_address1() {
    replication_factors_0_address1 = ap_reg_ppstg_replication_factors_0_addr_reg_35253_pp4_it35.read();
}

void particle_filter::thread_replication_factors_0_ce0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read())) || 
         esl_seteq<1,8,8>(ap_ST_st331_fsm_94, ap_CS_fsm.read()))) {
        replication_factors_0_ce0 = ap_const_logic_1;
    } else {
        replication_factors_0_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_0_ce1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it36.read()))) {
        replication_factors_0_ce1 = ap_const_logic_1;
    } else {
        replication_factors_0_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_0_d0() {
    replication_factors_0_d0 = p_12_fu_30482_p3.read();
}

void particle_filter::thread_replication_factors_0_d1() {
    replication_factors_0_d1 = p_1_1_162_reg_36065.read();
}

void particle_filter::thread_replication_factors_0_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35229_pp4_it34.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp6_reg_35248_pp4_it34.read())))) {
        replication_factors_0_we0 = ap_const_logic_1;
    } else {
        replication_factors_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it36.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35229_pp4_it35.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond9_reg_35265_pp4_it35.read())))) {
        replication_factors_0_we1 = ap_const_logic_1;
    } else {
        replication_factors_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_1_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()))) {
        replication_factors_1_address0 = ap_reg_ppstg_replication_factors_1_addr_reg_35259_pp4_it34.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st331_fsm_94, ap_CS_fsm.read())) {
        replication_factors_1_address0 =  (sc_lv<13>) (newIndex_fu_30583_p1.read());
    } else {
        replication_factors_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_replication_factors_1_address1() {
    replication_factors_1_address1 = ap_reg_ppstg_replication_factors_1_addr_reg_35259_pp4_it35.read();
}

void particle_filter::thread_replication_factors_1_ce0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read())) || 
         esl_seteq<1,8,8>(ap_ST_st331_fsm_94, ap_CS_fsm.read()))) {
        replication_factors_1_ce0 = ap_const_logic_1;
    } else {
        replication_factors_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_1_ce1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it36.read()))) {
        replication_factors_1_ce1 = ap_const_logic_1;
    } else {
        replication_factors_1_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_1_d0() {
    replication_factors_1_d0 = p_12_fu_30482_p3.read();
}

void particle_filter::thread_replication_factors_1_d1() {
    replication_factors_1_d1 = p_1_1_162_reg_36065.read();
}

void particle_filter::thread_replication_factors_1_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35229_pp4_it34.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp6_reg_35248_pp4_it34.read())))) {
        replication_factors_1_we0 = ap_const_logic_1;
    } else {
        replication_factors_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it36.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35229_pp4_it35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond9_reg_35265_pp4_it35.read())))) {
        replication_factors_1_we1 = ap_const_logic_1;
    } else {
        replication_factors_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_ret_V_5_1_fu_30490_p2() {
    ret_V_5_1_fu_30490_p2 = (!p_Result_53_1_reg_36048.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_bigint<16>(p_Result_53_1_reg_36048.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void particle_filter::thread_ret_V_5_fu_30412_p2() {
    ret_V_5_fu_30412_p2 = (!p_Result_8_fu_30384_p4.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_bigint<16>(p_Result_8_fu_30384_p4.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void particle_filter::thread_rev1_fu_26708_p2() {
    rev1_fu_26708_p2 = (tmp_400_reg_34529.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev2_fu_27628_p2() {
    rev2_fu_27628_p2 = (tmp_415_reg_34931.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev3_fu_27643_p2() {
    rev3_fu_27643_p2 = (tmp_419_reg_34942.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev4_fu_28931_p2() {
    rev4_fu_28931_p2 = (tmp_476_fu_28923_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev5_fu_28950_p2() {
    rev5_fu_28950_p2 = (tmp_480_reg_35419.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev6_fu_29171_p2() {
    rev6_fu_29171_p2 = (tmp_517_fu_29163_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev7_fu_29190_p2() {
    rev7_fu_29190_p2 = (tmp_519_reg_35472.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev_fu_26689_p2() {
    rev_fu_26689_p2 = (tmp_398_fu_26681_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rn_resampling_fixed_V_fu_27136_p3() {
    rn_resampling_fixed_V_fu_27136_p3 = (!sel_tmp39_fu_27131_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp39_fu_27131_p2.read()[0].to_bool())? p_Val2_13_mux_fu_27085_p3.read(): sel_tmp37_fu_27113_p3.read());
}

void particle_filter::thread_sel_tmp104_not_fu_29375_p2() {
    sel_tmp104_not_fu_29375_p2 = (sel_tmp60_fu_29301_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp10_fu_27720_p3() {
    sel_tmp10_fu_27720_p3 = (!sel_tmp9_reg_35007.read()[0].is_01())? sc_lv<28>(): ((sel_tmp9_reg_35007.read()[0].to_bool())? p_Val2_27_reg_34985.read(): sel_tmp6_fu_27715_p3.read());
}

void particle_filter::thread_sel_tmp138_demorgan_fu_29884_p2() {
    sel_tmp138_demorgan_fu_29884_p2 = (ap_reg_ppstg_tmp_262_reg_35306_pp4_it29.read() | ap_reg_ppstg_icmp7_reg_35516_pp4_it29.read());
}

void particle_filter::thread_sel_tmp13_fu_27404_p2() {
    sel_tmp13_fu_27404_p2 = (!F2_1_reg_34821.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_1_reg_34821.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp14_fu_27409_p2() {
    sel_tmp14_fu_27409_p2 = (sel_tmp13_fu_27404_p2.read() & tmp_258_fu_27324_p2.read());
}

void particle_filter::thread_sel_tmp16_fu_26629_p3() {
    sel_tmp16_fu_26629_p3 = (!tmp_204_fu_26544_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_204_fu_26544_p2.read()[0].to_bool())? tmp_363_reg_34501.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp17_fu_26636_p2() {
    sel_tmp17_fu_26636_p2 = (tmp_204_fu_26544_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp181_not_fu_29515_p2() {
    sel_tmp181_not_fu_29515_p2 = (sel_tmp83_fu_29441_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp18_fu_26642_p2() {
    sel_tmp18_fu_26642_p2 = (QUAN_INC_reg_34489.read() & sel_tmp17_fu_26636_p2.read());
}

void particle_filter::thread_sel_tmp19_fu_26802_p2() {
    sel_tmp19_fu_26802_p2 = (tmp_394_reg_34544.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp20_fu_26807_p2() {
    sel_tmp20_fu_26807_p2 = (sel_tmp18_reg_34560.read() & sel_tmp19_fu_26802_p2.read());
}

void particle_filter::thread_sel_tmp215_demorgan_fu_29952_p2() {
    sel_tmp215_demorgan_fu_29952_p2 = (ap_reg_ppstg_tmp_429_1_reg_35349_pp4_it29.read() | ap_reg_ppstg_icmp10_reg_35620_pp4_it29.read());
}

void particle_filter::thread_sel_tmp21_fu_26812_p3() {
    sel_tmp21_fu_26812_p3 = (!sel_tmp20_fu_26807_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp20_fu_26807_p2.read()[0].to_bool())? p_Val2_18_fu_26789_p2.read(): sel_tmp16_reg_34555.read());
}

void particle_filter::thread_sel_tmp22_fu_26819_p2() {
    sel_tmp22_fu_26819_p2 = (sel_tmp18_reg_34560.read() & tmp_394_reg_34544.read());
}

void particle_filter::thread_sel_tmp23_fu_26921_p3() {
    sel_tmp23_fu_26921_p3 = (!sel_tmp22_reg_34648.read()[0].is_01())? sc_lv<28>(): ((sel_tmp22_reg_34648.read()[0].to_bool())? p_Val2_18_reg_34638.read(): sel_tmp21_reg_34643.read());
}

void particle_filter::thread_sel_tmp24_fu_26647_p2() {
    sel_tmp24_fu_26647_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_reg_34467.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp24_not_fu_27709_p2() {
    sel_tmp24_not_fu_27709_p2 = (sel_tmp9_fu_27622_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp25_fu_26652_p2() {
    sel_tmp25_fu_26652_p2 = (sel_tmp24_fu_26647_p2.read() & tmp_208_fu_26554_p2.read());
}

void particle_filter::thread_sel_tmp262_not_fu_26893_p2() {
    sel_tmp262_not_fu_26893_p2 = (sel_tmp22_fu_26819_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp26_fu_26761_p2() {
    sel_tmp26_fu_26761_p2 = (tmp_398_fu_26681_p3.read() | tmp_237_not_fu_26755_p2.read());
}

void particle_filter::thread_sel_tmp27_fu_26767_p2() {
    sel_tmp27_fu_26767_p2 = (tmp_241_fu_26745_p2.read() & sel_tmp26_fu_26761_p2.read());
}

void particle_filter::thread_sel_tmp28_fu_26872_p3() {
    sel_tmp28_fu_26872_p3 = (!sel_tmp27_reg_34627.read()[0].is_01())? sc_lv<1>(): ((sel_tmp27_reg_34627.read()[0].to_bool())? Range1_all_ones_1_fu_26832_p2.read(): rev_reg_34587.read());
}

void particle_filter::thread_sel_tmp296_demorgan_fu_27109_p2() {
    sel_tmp296_demorgan_fu_27109_p2 = (tmp_200_reg_34459.read() | icmp4_reg_34573.read());
}

void particle_filter::thread_sel_tmp29_fu_26886_p3() {
    sel_tmp29_fu_26886_p3 = (!sel_tmp27_reg_34627.read()[0].is_01())? sc_lv<1>(): ((sel_tmp27_reg_34627.read()[0].to_bool())? Range1_all_zeros_fu_26857_p2.read(): p_95_i1_fu_26868_p2.read());
}

void particle_filter::thread_sel_tmp2_demorgan_i_fu_30836_p2() {
    sel_tmp2_demorgan_i_fu_30836_p2 = (tmp_i_fu_30784_p2.read() | tmp_37_i_fu_30789_p2.read());
}

void particle_filter::thread_sel_tmp2_fu_27600_p2() {
    sel_tmp2_fu_27600_p2 = (tmp_254_reg_34878.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp30_fu_26982_p2() {
    sel_tmp30_fu_26982_p2 = (tmp_231_reg_34579.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp31_fu_27016_p2() {
    sel_tmp31_fu_27016_p2 = (tmp61_reg_34714.read() & isneg_reg_34438.read());
}

void particle_filter::thread_sel_tmp32_fu_27020_p2() {
    sel_tmp32_fu_27020_p2 = (tmp_231_reg_34579.read() & isneg_reg_34438.read());
}

void particle_filter::thread_sel_tmp33_fu_27102_p3() {
    sel_tmp33_fu_27102_p3 = (!tmp_63_fu_27098_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_63_fu_27098_p2.read()[0].to_bool())? p_Val2_s_fu_27091_p3.read(): p_Val2_19_reg_34697.read());
}

void particle_filter::thread_sel_tmp34_fu_27691_p2() {
    sel_tmp34_fu_27691_p2 = (tmp_415_reg_34931.read() | tmp_307_not_fu_27686_p2.read());
}

void particle_filter::thread_sel_tmp35_fu_27696_p2() {
    sel_tmp35_fu_27696_p2 = (tmp_311_reg_34965.read() & sel_tmp34_fu_27691_p2.read());
}

void particle_filter::thread_sel_tmp36_fu_27701_p3() {
    sel_tmp36_fu_27701_p3 = (!sel_tmp35_fu_27696_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp35_fu_27696_p2.read()[0].to_bool())? Range1_all_ones_3_fu_27638_p2.read(): rev2_fu_27628_p2.read());
}

void particle_filter::thread_sel_tmp37_fu_27113_p3() {
    sel_tmp37_fu_27113_p3 = (!sel_tmp296_demorgan_fu_27109_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp296_demorgan_fu_27109_p2.read()[0].to_bool())? sel_tmp33_fu_27102_p3.read(): p_Val2_19_reg_34697.read());
}

void particle_filter::thread_sel_tmp38_fu_27120_p2() {
    sel_tmp38_fu_27120_p2 = (tmp_200_reg_34459.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp39_fu_27131_p2() {
    sel_tmp39_fu_27131_p2 = (tmp64_fu_27125_p2.read() & icmp4_reg_34573.read());
}

void particle_filter::thread_sel_tmp3_fu_27605_p2() {
    sel_tmp3_fu_27605_p2 = (QUAN_INC_1_reg_34831.read() & sel_tmp2_fu_27600_p2.read());
}

void particle_filter::thread_sel_tmp3_i_fu_30850_p1() {
    sel_tmp3_i_fu_30850_p1 = sel_tmp3_v_i_fu_30842_p3.read();
}

void particle_filter::thread_sel_tmp3_v_i_fu_30842_p3() {
    sel_tmp3_v_i_fu_30842_p3 = (!sel_tmp2_demorgan_i_fu_30836_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_demorgan_i_fu_30836_p2.read()[0].to_bool())? p_Result_53_fu_30794_p3.read(): p_Result_55_fu_30826_p4.read());
}

void particle_filter::thread_sel_tmp40_fu_27775_p3() {
    sel_tmp40_fu_27775_p3 = (!sel_tmp35_reg_35041.read()[0].is_01())? sc_lv<1>(): ((sel_tmp35_reg_35041.read()[0].to_bool())? Range1_all_zeros_2_fu_27759_p2.read(): p_95_i_reg_35036.read());
}

void particle_filter::thread_sel_tmp41_fu_27181_p2() {
    sel_tmp41_fu_27181_p2 = (tmp_249_reg_34779.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp42_fu_27846_p2() {
    sel_tmp42_fu_27846_p2 = (ap_reg_ppstg_tmp_301_reg_34923_pp3_it1.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp43_fu_27861_p2() {
    sel_tmp43_fu_27861_p2 = (tmp68_fu_27856_p2.read() & ap_reg_ppstg_isneg_1_reg_34864_pp3_it1.read());
}

void particle_filter::thread_sel_tmp44_fu_27866_p2() {
    sel_tmp44_fu_27866_p2 = (ap_reg_ppstg_tmp_301_reg_34923_pp3_it1.read() & ap_reg_ppstg_isneg_1_reg_34864_pp3_it1.read());
}

void particle_filter::thread_sel_tmp45_fu_27951_p3() {
    sel_tmp45_fu_27951_p3 = (!tmp_70_fu_27946_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_70_fu_27946_p2.read()[0].to_bool())? p_Val2_1_reg_34787.read(): p_Val2_30_reg_35056.read());
}

void particle_filter::thread_sel_tmp46_fu_27961_p3() {
    sel_tmp46_fu_27961_p3 = (!sel_tmp58_demorgan_fu_27957_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp58_demorgan_fu_27957_p2.read()[0].to_bool())? sel_tmp45_fu_27951_p3.read(): p_Val2_30_reg_35056.read());
}

void particle_filter::thread_sel_tmp47_fu_27973_p2() {
    sel_tmp47_fu_27973_p2 = (tmp71_reg_35117.read() & ap_reg_ppstg_icmp5_reg_34917_pp3_it2.read());
}

void particle_filter::thread_sel_tmp48_fu_28242_p2() {
    sel_tmp48_fu_28242_p2 = (tmp_320_reg_35154.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp49_fu_28247_p2() {
    sel_tmp49_fu_28247_p2 = (brmerge2_fu_28223_p2.read() & sel_tmp48_fu_28242_p2.read());
}

void particle_filter::thread_sel_tmp4_fu_27610_p2() {
    sel_tmp4_fu_27610_p2 = (tmp_411_fu_27559_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp4_i_fu_30854_p2() {
    sel_tmp4_i_fu_30854_p2 = (tmp_i_fu_30784_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp50_fu_28253_p3() {
    sel_tmp50_fu_28253_p3 = (!sel_tmp49_fu_28247_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp49_fu_28247_p2.read()[0].to_bool())? p_Val2_42_mux_fu_28228_p3.read(): p_Val2_4_151_fu_28235_p3.read());
}

void particle_filter::thread_sel_tmp51_fu_28288_p2() {
    sel_tmp51_fu_28288_p2 = (tmp_320_reg_35154.read() & underflow_3_reg_35211.read());
}

void particle_filter::thread_sel_tmp52_fu_28292_p3() {
    sel_tmp52_fu_28292_p3 = (!sel_tmp51_fu_28288_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp51_fu_28288_p2.read()[0].to_bool())? p_Val2_3_150_fu_28282_p3.read(): sel_tmp50_reg_35219.read());
}

void particle_filter::thread_sel_tmp53_fu_28299_p2() {
    sel_tmp53_fu_28299_p2 = (tmp_320_reg_35154.read() & brmerge1_fu_28270_p2.read());
}

void particle_filter::thread_sel_tmp54_fu_28871_p3() {
    sel_tmp54_fu_28871_p3 = (!tmp_276_fu_28786_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_276_fu_28786_p2.read()[0].to_bool())? tmp_458_reg_35391.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp55_fu_28878_p2() {
    sel_tmp55_fu_28878_p2 = (tmp_276_fu_28786_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp56_fu_28884_p2() {
    sel_tmp56_fu_28884_p2 = (QUAN_INC_2_reg_35379.read() & sel_tmp55_fu_28878_p2.read());
}

void particle_filter::thread_sel_tmp57_fu_29284_p2() {
    sel_tmp57_fu_29284_p2 = (tmp_468_reg_35487.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp58_demorgan_fu_27957_p2() {
    sel_tmp58_demorgan_fu_27957_p2 = (tmp_249_reg_34779.read() | ap_reg_ppstg_icmp5_reg_34917_pp3_it1.read());
}

void particle_filter::thread_sel_tmp58_fu_29289_p2() {
    sel_tmp58_fu_29289_p2 = (sel_tmp56_reg_35503.read() & sel_tmp57_fu_29284_p2.read());
}

void particle_filter::thread_sel_tmp59_fu_29294_p3() {
    sel_tmp59_fu_29294_p3 = (!sel_tmp58_fu_29289_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp58_fu_29289_p2.read()[0].to_bool())? p_Val2_s_154_fu_29271_p2.read(): sel_tmp54_reg_35498.read());
}

void particle_filter::thread_sel_tmp5_fu_27616_p2() {
    sel_tmp5_fu_27616_p2 = (sel_tmp3_fu_27605_p2.read() & sel_tmp4_fu_27610_p2.read());
}

void particle_filter::thread_sel_tmp5_i_fu_30860_p2() {
    sel_tmp5_i_fu_30860_p2 = (tmp_37_i_fu_30789_p2.read() & sel_tmp4_i_fu_30854_p2.read());
}

void particle_filter::thread_sel_tmp60_fu_29301_p2() {
    sel_tmp60_fu_29301_p2 = (sel_tmp56_reg_35503.read() & tmp_468_reg_35487.read());
}

void particle_filter::thread_sel_tmp61_fu_29543_p3() {
    sel_tmp61_fu_29543_p3 = (!sel_tmp60_reg_35695.read()[0].is_01())? sc_lv<28>(): ((sel_tmp60_reg_35695.read()[0].to_bool())? p_Val2_s_154_reg_35685.read(): sel_tmp59_reg_35690.read());
}

void particle_filter::thread_sel_tmp62_fu_28889_p2() {
    sel_tmp62_fu_28889_p2 = (!ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp63_fu_28894_p2() {
    sel_tmp63_fu_28894_p2 = (sel_tmp62_fu_28889_p2.read() & tmp_286_fu_28796_p2.read());
}

void particle_filter::thread_sel_tmp64_fu_29003_p2() {
    sel_tmp64_fu_29003_p2 = (tmp_476_fu_28923_p3.read() | tmp_364_not_fu_28997_p2.read());
}

void particle_filter::thread_sel_tmp65_fu_29009_p2() {
    sel_tmp65_fu_29009_p2 = (tmp_368_fu_28987_p2.read() & sel_tmp64_fu_29003_p2.read());
}

void particle_filter::thread_sel_tmp66_fu_29354_p3() {
    sel_tmp66_fu_29354_p3 = (!sel_tmp65_reg_35570.read()[0].is_01())? sc_lv<1>(): ((sel_tmp65_reg_35570.read()[0].to_bool())? Range1_all_ones_s_fu_29314_p2.read(): rev4_reg_35530.read());
}

void particle_filter::thread_sel_tmp67_fu_29368_p3() {
    sel_tmp67_fu_29368_p3 = (!sel_tmp65_reg_35570.read()[0].is_01())? sc_lv<1>(): ((sel_tmp65_reg_35570.read()[0].to_bool())? tmp_367_fu_29339_p2.read(): p_95_i2_fu_29350_p2.read());
}

void particle_filter::thread_sel_tmp68_fu_29604_p2() {
    sel_tmp68_fu_29604_p2 = (ap_reg_ppstg_tmp_357_reg_35522_pp4_it27.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp69_fu_29621_p2() {
    sel_tmp69_fu_29621_p2 = (tmp75_fu_29615_p2.read() & ap_reg_ppstg_tmp_454_reg_35285_pp4_it27.read());
}

void particle_filter::thread_sel_tmp6_fu_27715_p3() {
    sel_tmp6_fu_27715_p3 = (!sel_tmp5_reg_35002.read()[0].is_01())? sc_lv<28>(): ((sel_tmp5_reg_35002.read()[0].to_bool())? p_Val2_27_reg_34985.read(): sel_tmp_reg_34997.read());
}

void particle_filter::thread_sel_tmp6_i_fu_30866_p3() {
    sel_tmp6_i_fu_30866_p3 = (!sel_tmp5_i_fu_30860_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp5_i_fu_30860_p2.read()[0].to_bool())? reg_20791.read(): sel_tmp3_i_fu_30850_p1.read());
}

void particle_filter::thread_sel_tmp70_fu_29739_p2() {
    sel_tmp70_fu_29739_p2 = (ap_reg_ppstg_tmp_357_reg_35522_pp4_it28.read() & ap_reg_ppstg_tmp_454_reg_35285_pp4_it28.read());
}

void particle_filter::thread_sel_tmp71_fu_29877_p3() {
    sel_tmp71_fu_29877_p3 = (!tmp_77_fu_29873_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_77_fu_29873_p2.read()[0].to_bool())? p_Val2_5_fu_29866_p3.read(): ap_reg_ppstg_p_Val2_2_155_reg_35803_pp4_it29.read());
}

void particle_filter::thread_sel_tmp72_fu_29888_p3() {
    sel_tmp72_fu_29888_p3 = (!sel_tmp138_demorgan_fu_29884_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp138_demorgan_fu_29884_p2.read()[0].to_bool())? sel_tmp71_fu_29877_p3.read(): ap_reg_ppstg_p_Val2_2_155_reg_35803_pp4_it29.read());
}

void particle_filter::thread_sel_tmp73_fu_29895_p2() {
    sel_tmp73_fu_29895_p2 = (ap_reg_ppstg_tmp_262_reg_35306_pp4_it29.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp74_fu_29906_p2() {
    sel_tmp74_fu_29906_p2 = (tmp78_fu_29900_p2.read() & ap_reg_ppstg_icmp7_reg_35516_pp4_it29.read());
}

void particle_filter::thread_sel_tmp75_fu_30365_p3() {
    sel_tmp75_fu_30365_p3 = (!ap_reg_ppstg_tmp_376_reg_35958_pp4_it33.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_376_reg_35958_pp4_it33.read()[0].to_bool())? p_Val2_8_158_fu_30359_p3.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp76_fu_30372_p2() {
    sel_tmp76_fu_30372_p2 = (ap_reg_ppstg_tmp_376_reg_35958_pp4_it33.read() & brmerge6_reg_36001.read());
}

void particle_filter::thread_sel_tmp77_fu_29111_p3() {
    sel_tmp77_fu_29111_p3 = (!tmp_446_1_fu_29026_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_446_1_fu_29026_p2.read()[0].to_bool())? tmp_508_reg_35444.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp78_fu_29118_p2() {
    sel_tmp78_fu_29118_p2 = (tmp_446_1_fu_29026_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp79_fu_29124_p2() {
    sel_tmp79_fu_29124_p2 = (QUAN_INC_2_1_reg_35432.read() & sel_tmp78_fu_29118_p2.read());
}

void particle_filter::thread_sel_tmp80_fu_29424_p2() {
    sel_tmp80_fu_29424_p2 = (tmp_513_reg_35591.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp81_fu_29429_p2() {
    sel_tmp81_fu_29429_p2 = (sel_tmp79_reg_35607.read() & sel_tmp80_fu_29424_p2.read());
}

void particle_filter::thread_sel_tmp82_fu_29434_p3() {
    sel_tmp82_fu_29434_p3 = (!sel_tmp81_fu_29429_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp81_fu_29429_p2.read()[0].to_bool())? p_Val2_24_1_fu_29411_p2.read(): sel_tmp77_reg_35602.read());
}

void particle_filter::thread_sel_tmp83_fu_29441_p2() {
    sel_tmp83_fu_29441_p2 = (sel_tmp79_reg_35607.read() & tmp_513_reg_35591.read());
}

void particle_filter::thread_sel_tmp84_fu_29638_p3() {
    sel_tmp84_fu_29638_p3 = (!sel_tmp83_reg_35754.read()[0].is_01())? sc_lv<28>(): ((sel_tmp83_reg_35754.read()[0].to_bool())? p_Val2_24_1_reg_35744.read(): sel_tmp82_reg_35749.read());
}

void particle_filter::thread_sel_tmp85_fu_29129_p2() {
    sel_tmp85_fu_29129_p2 = (!ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp86_fu_29134_p2() {
    sel_tmp86_fu_29134_p2 = (sel_tmp85_fu_29129_p2.read() & tmp_463_1_fu_29036_p2.read());
}

void particle_filter::thread_sel_tmp87_fu_29243_p2() {
    sel_tmp87_fu_29243_p2 = (tmp_517_fu_29163_p3.read() | tmp_526_1_not_fu_29237_p2.read());
}

void particle_filter::thread_sel_tmp88_fu_29249_p2() {
    sel_tmp88_fu_29249_p2 = (tmp_532_1_fu_29227_p2.read() & sel_tmp87_fu_29243_p2.read());
}

void particle_filter::thread_sel_tmp89_fu_29494_p3() {
    sel_tmp89_fu_29494_p3 = (!sel_tmp88_reg_35674.read()[0].is_01())? sc_lv<1>(): ((sel_tmp88_reg_35674.read()[0].to_bool())? Range1_all_ones_11_1_fu_29454_p2.read(): rev6_reg_35634.read());
}

void particle_filter::thread_sel_tmp8_i_fu_30879_p2() {
    sel_tmp8_i_fu_30879_p2 = (notrhs_i_fu_30874_p2.read() | notlhs_i_reg_36243.read());
}

void particle_filter::thread_sel_tmp90_fu_29508_p3() {
    sel_tmp90_fu_29508_p3 = (!sel_tmp88_reg_35674.read()[0].is_01())? sc_lv<1>(): ((sel_tmp88_reg_35674.read()[0].to_bool())? tmp_531_1_fu_29479_p2.read(): p_95_i2_1_fu_29490_p2.read());
}

void particle_filter::thread_sel_tmp91_fu_29705_p2() {
    sel_tmp91_fu_29705_p2 = (ap_reg_ppstg_tmp_517_1_reg_35626_pp4_it27.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp92_fu_29793_p2() {
    sel_tmp92_fu_29793_p2 = (tmp82_reg_35853.read() & ap_reg_ppstg_tmp_506_reg_35328_pp4_it28.read());
}

void particle_filter::thread_sel_tmp93_fu_29797_p2() {
    sel_tmp93_fu_29797_p2 = (ap_reg_ppstg_tmp_517_1_reg_35626_pp4_it28.read() & ap_reg_ppstg_tmp_506_reg_35328_pp4_it28.read());
}

void particle_filter::thread_sel_tmp94_fu_29945_p3() {
    sel_tmp94_fu_29945_p3 = (!tmp_84_fu_29941_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_84_fu_29941_p2.read()[0].to_bool())? p_Val2_25_1_160_fu_29934_p3.read(): ap_reg_ppstg_p_Val2_25_1_reg_35836_pp4_it29.read());
}

void particle_filter::thread_sel_tmp95_fu_29956_p3() {
    sel_tmp95_fu_29956_p3 = (!sel_tmp215_demorgan_fu_29952_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp215_demorgan_fu_29952_p2.read()[0].to_bool())? sel_tmp94_fu_29945_p3.read(): ap_reg_ppstg_p_Val2_25_1_reg_35836_pp4_it29.read());
}

void particle_filter::thread_sel_tmp96_fu_29963_p2() {
    sel_tmp96_fu_29963_p2 = (ap_reg_ppstg_tmp_429_1_reg_35349_pp4_it29.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp97_fu_29974_p2() {
    sel_tmp97_fu_29974_p2 = (tmp85_fu_29968_p2.read() & ap_reg_ppstg_icmp10_reg_35620_pp4_it29.read());
}

void particle_filter::thread_sel_tmp98_fu_30430_p3() {
    sel_tmp98_fu_30430_p3 = (!ap_reg_ppstg_tmp_571_1_reg_35974_pp4_it33.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_571_1_reg_35974_pp4_it33.read()[0].to_bool())? p_Val2_52_1_fu_30424_p3.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp99_fu_30437_p2() {
    sel_tmp99_fu_30437_p2 = (ap_reg_ppstg_tmp_571_1_reg_35974_pp4_it33.read() & brmerge15_1_reg_36022.read());
}

void particle_filter::thread_sel_tmp9_fu_27622_p2() {
    sel_tmp9_fu_27622_p2 = (sel_tmp3_fu_27605_p2.read() & tmp_411_fu_27559_p3.read());
}

void particle_filter::thread_sel_tmp9_i_fu_30889_p2() {
    sel_tmp9_i_fu_30889_p2 = (tmp86_fu_30884_p2.read() & tmp_i_fu_30784_p2.read());
}

void particle_filter::thread_sel_tmp_fu_27594_p3() {
    sel_tmp_fu_27594_p3 = (!tmp_254_reg_34878.read()[0].is_01())? sc_lv<28>(): ((tmp_254_reg_34878.read()[0].to_bool())? tmp_406_reg_34884.read(): ap_const_lv28_0);
}

void particle_filter::thread_sh_amt_1_cast_fu_27307_p1() {
    sh_amt_1_cast_fu_27307_p1 = esl_sext<32,12>(sh_amt_1_reg_34837.read());
}

void particle_filter::thread_sh_amt_1_fu_27253_p3() {
    sh_amt_1_fu_27253_p3 = (!QUAN_INC_1_fu_27235_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_1_fu_27235_p2.read()[0].to_bool())? tmp_252_fu_27241_p2.read(): tmp_253_fu_27247_p2.read());
}

void particle_filter::thread_sh_amt_2_1_cast_fu_29023_p1() {
    sh_amt_2_1_cast_fu_29023_p1 = esl_sext<32,12>(sh_amt_2_1_reg_35437.read());
}

void particle_filter::thread_sh_amt_2_1_fu_28667_p3() {
    sh_amt_2_1_fu_28667_p3 = (!QUAN_INC_2_1_fu_28652_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_1_fu_28652_p2.read()[0].to_bool())? tmp_444_1_fu_28657_p2.read(): tmp_445_1_fu_28662_p2.read());
}

void particle_filter::thread_sh_amt_2_cast_fu_28783_p1() {
    sh_amt_2_cast_fu_28783_p1 = esl_sext<32,12>(sh_amt_2_reg_35384.read());
}

void particle_filter::thread_sh_amt_2_fu_28507_p3() {
    sh_amt_2_fu_28507_p3 = (!QUAN_INC_2_fu_28492_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_fu_28492_p2.read()[0].to_bool())? tmp_274_fu_28497_p2.read(): tmp_275_fu_28502_p2.read());
}

void particle_filter::thread_sh_amt_cast_fu_26541_p1() {
    sh_amt_cast_fu_26541_p1 = esl_sext<32,12>(sh_amt_reg_34494.read());
}

void particle_filter::thread_sh_amt_fu_26425_p3() {
    sh_amt_fu_26425_p3 = (!QUAN_INC_fu_26410_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_fu_26410_p2.read()[0].to_bool())? tmp_202_fu_26415_p2.read(): tmp_203_fu_26420_p2.read());
}

void particle_filter::thread_sh_assign_10_fu_24873_p1() {
    sh_assign_10_fu_24873_p1 = esl_sext<9,8>(tmp_79_i_i4_fu_24863_p2.read());
}

void particle_filter::thread_sh_assign_10_fu_24873_p3() {
    sh_assign_10_fu_24873_p3 = (!isNeg_8_fu_24855_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_8_fu_24855_p3.read()[0].to_bool())? sh_assign_10_fu_24873_p1.read(): sh_assign_7_fu_24849_p2.read());
}

void particle_filter::thread_sh_assign_11_fu_24894_p2() {
    sh_assign_11_fu_24894_p2 = (!tmp_i_i_i378_cast_fu_24890_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i378_cast_fu_24890_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_12_fu_24918_p1() {
    sh_assign_12_fu_24918_p1 = esl_sext<9,8>(tmp_79_i_i5_fu_24908_p2.read());
}

void particle_filter::thread_sh_assign_12_fu_24918_p3() {
    sh_assign_12_fu_24918_p3 = (!isNeg_9_fu_24900_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_9_fu_24900_p3.read()[0].to_bool())? sh_assign_12_fu_24918_p1.read(): sh_assign_11_fu_24894_p2.read());
}

void particle_filter::thread_sh_assign_13_fu_24939_p2() {
    sh_assign_13_fu_24939_p2 = (!tmp_i_i_i394_cast_fu_24935_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i394_cast_fu_24935_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_14_fu_24963_p1() {
    sh_assign_14_fu_24963_p1 = esl_sext<9,8>(tmp_79_i_i6_fu_24953_p2.read());
}

void particle_filter::thread_sh_assign_14_fu_24963_p3() {
    sh_assign_14_fu_24963_p3 = (!isNeg_10_fu_24945_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_10_fu_24945_p3.read()[0].to_bool())? sh_assign_14_fu_24963_p1.read(): sh_assign_13_fu_24939_p2.read());
}

void particle_filter::thread_sh_assign_15_fu_24984_p2() {
    sh_assign_15_fu_24984_p2 = (!tmp_i_i_i410_cast_fu_24980_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i410_cast_fu_24980_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_16_fu_25008_p1() {
    sh_assign_16_fu_25008_p1 = esl_sext<9,8>(tmp_79_i_i7_fu_24998_p2.read());
}

void particle_filter::thread_sh_assign_16_fu_25008_p3() {
    sh_assign_16_fu_25008_p3 = (!isNeg_11_fu_24990_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_11_fu_24990_p3.read()[0].to_bool())? sh_assign_16_fu_25008_p1.read(): sh_assign_15_fu_24984_p2.read());
}

void particle_filter::thread_sh_assign_1_fu_24738_p1() {
    sh_assign_1_fu_24738_p1 = esl_sext<9,8>(tmp_79_i_i1_fu_24728_p2.read());
}

void particle_filter::thread_sh_assign_1_fu_24738_p3() {
    sh_assign_1_fu_24738_p3 = (!isNeg_4_fu_24720_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_4_fu_24720_p3.read()[0].to_bool())? sh_assign_1_fu_24738_p1.read(): sh_assign_s_fu_24714_p2.read());
}

void particle_filter::thread_sh_assign_2_fu_24759_p2() {
    sh_assign_2_fu_24759_p2 = (!tmp_i_i_i330_cast_fu_24755_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i330_cast_fu_24755_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_3_fu_30947_p1() {
    sh_assign_3_fu_30947_p1 = esl_sext<9,8>(tmp_87_i_i_fu_30937_p2.read());
}

void particle_filter::thread_sh_assign_3_fu_30947_p3() {
    sh_assign_3_fu_30947_p3 = (!isNeg_5_fu_30929_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_5_fu_30929_p3.read()[0].to_bool())? sh_assign_3_fu_30947_p1.read(): sh_assign_fu_30923_p2.read());
}

void particle_filter::thread_sh_assign_4_fu_24783_p1() {
    sh_assign_4_fu_24783_p1 = esl_sext<9,8>(tmp_79_i_i2_fu_24773_p2.read());
}

void particle_filter::thread_sh_assign_4_fu_24783_p3() {
    sh_assign_4_fu_24783_p3 = (!isNeg_6_fu_24765_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_6_fu_24765_p3.read()[0].to_bool())? sh_assign_4_fu_24783_p1.read(): sh_assign_2_fu_24759_p2.read());
}

void particle_filter::thread_sh_assign_5_fu_24804_p2() {
    sh_assign_5_fu_24804_p2 = (!tmp_i_i_i346_cast_fu_24800_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i346_cast_fu_24800_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_6_fu_24828_p1() {
    sh_assign_6_fu_24828_p1 = esl_sext<9,8>(tmp_79_i_i3_fu_24818_p2.read());
}

void particle_filter::thread_sh_assign_6_fu_24828_p3() {
    sh_assign_6_fu_24828_p3 = (!isNeg_7_fu_24810_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_7_fu_24810_p3.read()[0].to_bool())? sh_assign_6_fu_24828_p1.read(): sh_assign_5_fu_24804_p2.read());
}

void particle_filter::thread_sh_assign_7_fu_24849_p2() {
    sh_assign_7_fu_24849_p2 = (!tmp_i_i_i362_cast_fu_24845_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i362_cast_fu_24845_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_8_fu_24669_p2() {
    sh_assign_8_fu_24669_p2 = (!tmp_i_i_i308_cast_fu_24665_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i308_cast_fu_24665_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_9_fu_24693_p1() {
    sh_assign_9_fu_24693_p1 = esl_sext<9,8>(tmp_79_i_i_fu_24683_p2.read());
}

void particle_filter::thread_sh_assign_9_fu_24693_p3() {
    sh_assign_9_fu_24693_p3 = (!isNeg_fu_24675_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_fu_24675_p3.read()[0].to_bool())? sh_assign_9_fu_24693_p1.read(): sh_assign_8_fu_24669_p2.read());
}

void particle_filter::thread_sh_assign_fu_30923_p2() {
    sh_assign_fu_30923_p2 = (!tmp_i_i_i_cast_fu_30919_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i_cast_fu_30919_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_s_fu_24714_p2() {
    sh_assign_s_fu_24714_p2 = (!tmp_i_i_i314_cast_fu_24710_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i314_cast_fu_24710_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sign_assign_1_fu_27870_p3() {
    sign_assign_1_fu_27870_p3 = (!sel_tmp44_fu_27866_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp44_fu_27866_p2.read()[0].to_bool())? tmp_314_fu_27841_p2.read(): sel_tmp43_fu_27861_p2.read());
}

void particle_filter::thread_sign_assign_1_not_fu_27924_p2() {
    sign_assign_1_not_fu_27924_p2 = (sign_assign_1_reg_35085.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sign_assign_2_1_fu_29801_p3() {
    sign_assign_2_1_fu_29801_p3 = (!sel_tmp93_fu_29797_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp93_fu_29797_p2.read()[0].to_bool())? tmp_537_1_reg_35848.read(): sel_tmp92_fu_29793_p2.read());
}

void particle_filter::thread_sign_assign_2_fu_29743_p3() {
    sign_assign_2_fu_29743_p3 = (!sel_tmp70_fu_29739_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp70_fu_29739_p2.read()[0].to_bool())? tmp_370_fu_29734_p2.read(): sel_tmp69_reg_35820.read());
}

void particle_filter::thread_sign_assign_2_not_1_fu_29839_p2() {
    sign_assign_2_not_1_fu_29839_p2 = (sign_assign_2_1_fu_29801_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sign_assign_2_not_fu_29781_p2() {
    sign_assign_2_not_fu_29781_p2 = (sign_assign_2_fu_29743_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sign_assign_fu_27024_p3() {
    sign_assign_fu_27024_p3 = (!sel_tmp32_fu_27020_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp32_fu_27020_p2.read()[0].to_bool())? tmp_244_fu_27011_p2.read(): sel_tmp31_fu_27016_p2.read());
}

void particle_filter::thread_sign_assign_not_fu_27069_p2() {
    sign_assign_not_fu_27069_p2 = (sign_assign_fu_27024_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_state_parameters_address0() {
    state_parameters_address0 = grp_fetch_data_parameters_fu_19634_state_parameters_address0.read();
}

void particle_filter::thread_state_parameters_address1() {
    state_parameters_address1 = grp_fetch_data_parameters_fu_19634_state_parameters_address1.read();
}

void particle_filter::thread_state_parameters_ce0() {
    if (esl_seteq<1,8,8>(ap_ST_st16_fsm_12, ap_CS_fsm.read())) {
        state_parameters_ce0 = grp_fetch_data_parameters_fu_19634_state_parameters_ce0.read();
    } else {
        state_parameters_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_state_parameters_ce1() {
    if (esl_seteq<1,8,8>(ap_ST_st16_fsm_12, ap_CS_fsm.read())) {
        state_parameters_ce1 = grp_fetch_data_parameters_fu_19634_state_parameters_ce1.read();
    } else {
        state_parameters_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_storemerge_1_fu_25932_p3() {
    storemerge_1_fu_25932_p3 = (!or_cond_1_reg_34375.read()[0].is_01())? sc_lv<32>(): ((or_cond_1_reg_34375.read()[0].to_bool())? tmp_266_1_reg_34349.read(): ap_const_lv32_0);
}

void particle_filter::thread_storemerge_fu_25918_p3() {
    storemerge_fu_25918_p3 = (!or_cond_reg_34360.read()[0].is_01())? sc_lv<32>(): ((or_cond_reg_34360.read()[0].to_bool())? reg_20825.read(): ap_const_lv32_0);
}

void particle_filter::thread_sum3_cast_fu_31065_p1() {
    sum3_cast_fu_31065_p1 = esl_sext<64,16>(sum3_fu_31060_p2.read());
}

void particle_filter::thread_sum3_fu_31060_p2() {
    sum3_fu_31060_p2 = (!tmp_501_reg_36095.read().is_01() || !ap_const_lv16_5.is_01())? sc_lv<16>(): (sc_bigint<16>(tmp_501_reg_36095.read()) + sc_biguint<16>(ap_const_lv16_5));
}

void particle_filter::thread_t_V_1_fu_30707_p1() {
    t_V_1_fu_30707_p1 = reg_20791.read();
}

void particle_filter::thread_t_fu_30553_p2() {
    t_fu_30553_p2 = (!t_assign_reg_2386.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(t_assign_reg_2386.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void particle_filter::thread_temp3_0_1_phi_fu_19184_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33386_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_reg_33588_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_343_reg_33592_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_reg_33596_pp1_it135.read()))) {
        temp3_0_1_phi_fu_19184_p10 = temp3_0_2_reg_34079.read();
    } else {
        temp3_0_1_phi_fu_19184_p10 = ap_reg_phiprechg_temp3_0_1_reg_19181pp1_it136.read();
    }
}

void particle_filter::thread_temp3_0_2_139_fu_25776_p3() {
    temp3_0_2_139_fu_25776_p3 = (!grp_fu_20355_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20355_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_0_3_reg_19245_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_0_3_phi_fu_19248_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_reg_33468_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_reg_33756_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_reg_33760_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_reg_33764_pp1_it135.read()))) {
        temp3_0_3_phi_fu_19248_p10 = temp3_0_5_reg_34139.read();
    } else {
        temp3_0_3_phi_fu_19248_p10 = ap_reg_phiprechg_temp3_0_3_reg_19245pp1_it136.read();
    }
}

void particle_filter::thread_temp3_1_1_phi_fu_19200_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_0_1_reg_33412_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_0_1_reg_33630_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_1_reg_33634_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_0_1_reg_33638_pp1_it135.read()))) {
        temp3_1_1_phi_fu_19200_p10 = temp3_1_2_reg_34094.read();
    } else {
        temp3_1_1_phi_fu_19200_p10 = ap_reg_phiprechg_temp3_1_1_reg_19197pp1_it136.read();
    }
}

void particle_filter::thread_temp3_1_2_142_fu_25784_p3() {
    temp3_1_2_142_fu_25784_p3 = (!grp_fu_20361_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20361_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_1_3_reg_19261_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_1_3_phi_fu_19264_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_1_reg_33472_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_1_reg_33798_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_1_reg_33802_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_1_reg_33806_pp1_it135.read()))) {
        temp3_1_3_phi_fu_19264_p10 = temp3_1_5_reg_34154.read();
    } else {
        temp3_1_3_phi_fu_19264_p10 = ap_reg_phiprechg_temp3_1_3_reg_19261pp1_it136.read();
    }
}

void particle_filter::thread_temp3_1_fu_25752_p3() {
    temp3_1_fu_25752_p3 = (!grp_fu_20337_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20337_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_1_1_reg_19197_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_2_1_phi_fu_19216_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_0_2_reg_33438_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_0_2_reg_33672_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_2_reg_33676_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_0_2_reg_33680_pp1_it135.read()))) {
        temp3_2_1_phi_fu_19216_p10 = temp3_2_2_reg_34109.read();
    } else {
        temp3_2_1_phi_fu_19216_p10 = ap_reg_phiprechg_temp3_2_1_reg_19213pp1_it136.read();
    }
}

void particle_filter::thread_temp3_2_2_144_fu_25792_p3() {
    temp3_2_2_144_fu_25792_p3 = (!grp_fu_20367_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20367_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_2_3_reg_19277_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_2_3_phi_fu_19280_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_2_reg_33476_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_2_reg_33840_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_2_reg_33844_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_2_reg_33848_pp1_it135.read()))) {
        temp3_2_3_phi_fu_19280_p10 = temp3_2_5_reg_34169.read();
    } else {
        temp3_2_3_phi_fu_19280_p10 = ap_reg_phiprechg_temp3_2_3_reg_19277pp1_it136.read();
    }
}

void particle_filter::thread_temp3_2_fu_25760_p3() {
    temp3_2_fu_25760_p3 = (!grp_fu_20343_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20343_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_2_1_reg_19213_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_fu_25744_p3() {
    temp3_fu_25744_p3 = (!grp_fu_20331_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20331_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_0_1_reg_19181_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_load_3_1_fu_25800_p3() {
    temp3_load_3_1_fu_25800_p3 = (!grp_fu_20373_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20373_p2.read()[0].to_bool())? ap_reg_ppstg_tmp_397_1_3_reg_19293_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_load_3_fu_25768_p3() {
    temp3_load_3_fu_25768_p3 = (!grp_fu_20349_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20349_p2.read()[0].to_bool())? ap_reg_ppstg_tmp_397_0_3_reg_19229_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_tmp13_fu_21459_p2() {
    tmp13_fu_21459_p2 = (!rng_state_20_offset_read.read().is_01() || !ap_const_lv32_FFFFFFFE.is_01())? sc_lv<32>(): (sc_bigint<32>(rng_state_20_offset_read.read()) + sc_biguint<32>(ap_const_lv32_FFFFFFFE));
}

void particle_filter::thread_tmp446_demorgan_fu_26823_p2() {
    tmp446_demorgan_fu_26823_p2 = (tmp_395_fu_26794_p3.read() | sel_tmp25_reg_34566.read());
}

void particle_filter::thread_tmp447_cast_cast_fu_26504_p3() {
    tmp447_cast_cast_fu_26504_p3 = (!QUAN_INC_fu_26410_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_fu_26410_p2.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

void particle_filter::thread_tmp453_demorgan_fu_27732_p2() {
    tmp453_demorgan_fu_27732_p2 = (tmp_412_reg_34991.read() | sel_tmp14_reg_34910.read());
}

void particle_filter::thread_tmp454_cast_cast_fu_27415_p3() {
    tmp454_cast_cast_fu_27415_p3 = (!QUAN_INC_1_reg_34831.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_1_reg_34831.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

void particle_filter::thread_tmp460_demorgan_fu_29305_p2() {
    tmp460_demorgan_fu_29305_p2 = (tmp_470_fu_29276_p3.read() | sel_tmp63_reg_35509.read());
}

void particle_filter::thread_tmp461_cast_cast_fu_28586_p3() {
    tmp461_cast_cast_fu_28586_p3 = (!QUAN_INC_2_fu_28492_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_fu_28492_p2.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

void particle_filter::thread_tmp467_demorgan_fu_29445_p2() {
    tmp467_demorgan_fu_29445_p2 = (tmp_514_fu_29416_p3.read() | sel_tmp86_reg_35613.read());
}

void particle_filter::thread_tmp468_cast_cast_fu_28746_p3() {
    tmp468_cast_cast_fu_28746_p3 = (!QUAN_INC_2_1_fu_28652_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_1_fu_28652_p2.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

}

