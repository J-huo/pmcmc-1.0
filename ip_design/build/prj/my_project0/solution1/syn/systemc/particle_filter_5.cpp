#include "particle_filter.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particle_filter::thread_grp_fu_19951_ce() {
    grp_fu_19951_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19951_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()))) {
        grp_fu_19951_p0 = tmp_s_reg_32600.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st240_fsm_48, ap_CS_fsm.read())) {
        grp_fu_19951_p0 = reg_20830.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it37.read()))) {
        grp_fu_19951_p0 = s_t_reg_32956.read();
    } else {
        grp_fu_19951_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_19951_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it2.read()))) {
        grp_fu_19951_p1 = weights_load_1_phi_reg_35253.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st240_fsm_48, ap_CS_fsm.read())) {
        grp_fu_19951_p1 = ap_const_lv32_2F800000;
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it37.read()))) {
        grp_fu_19951_p1 = tmp_200_1_reg_32967.read();
    } else {
        grp_fu_19951_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_19955_ce() {
    grp_fu_19955_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19955_p0() {
    grp_fu_19955_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19955_p1() {
    grp_fu_19955_p1 = tmp_188_reg_33016.read();
}

void particle_filter::thread_grp_fu_19959_ce() {
    grp_fu_19959_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19959_p0() {
    grp_fu_19959_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19959_p1() {
    grp_fu_19959_p1 = tmp_255_0_1_reg_33021.read();
}

void particle_filter::thread_grp_fu_19963_ce() {
    grp_fu_19963_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19963_p0() {
    grp_fu_19963_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19963_p1() {
    grp_fu_19963_p1 = tmp_255_0_2_reg_33026.read();
}

void particle_filter::thread_grp_fu_19967_ce() {
    grp_fu_19967_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19967_p0() {
    grp_fu_19967_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19967_p1() {
    grp_fu_19967_p1 = tmp_255_0_3_reg_33031.read();
}

void particle_filter::thread_grp_fu_19971_ce() {
    grp_fu_19971_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19971_p0() {
    grp_fu_19971_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19971_p1() {
    grp_fu_19971_p1 = tmp_255_1_reg_33036.read();
}

void particle_filter::thread_grp_fu_19975_ce() {
    grp_fu_19975_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19975_p0() {
    grp_fu_19975_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19975_p1() {
    grp_fu_19975_p1 = tmp_255_1_1_reg_33041.read();
}

void particle_filter::thread_grp_fu_19979_ce() {
    grp_fu_19979_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19979_p0() {
    grp_fu_19979_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19979_p1() {
    grp_fu_19979_p1 = tmp_255_1_2_reg_33046.read();
}

void particle_filter::thread_grp_fu_19983_ce() {
    grp_fu_19983_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19983_p0() {
    grp_fu_19983_p0 = fetched_obs_parameters_rand_reg_32727.read();
}

void particle_filter::thread_grp_fu_19983_p1() {
    grp_fu_19983_p1 = tmp_255_1_3_reg_33051.read();
}

void particle_filter::thread_grp_fu_19987_ce() {
    grp_fu_19987_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19987_p0() {
    grp_fu_19987_p0 = ap_reg_ppstg_reg_20823_pp1_it115.read();
}

void particle_filter::thread_grp_fu_19987_p1() {
    grp_fu_19987_p1 = reg_20918.read();
}

void particle_filter::thread_grp_fu_19991_ce() {
    grp_fu_19991_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19991_p0() {
    grp_fu_19991_p0 = ap_reg_ppstg_reg_20836_pp1_it115.read();
}

void particle_filter::thread_grp_fu_19991_p1() {
    grp_fu_19991_p1 = reg_20924.read();
}

void particle_filter::thread_grp_fu_19995_ce() {
    grp_fu_19995_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19995_p0() {
    grp_fu_19995_p0 = ap_reg_ppstg_reg_20842_pp1_it115.read();
}

void particle_filter::thread_grp_fu_19995_p1() {
    grp_fu_19995_p1 = reg_20929.read();
}

void particle_filter::thread_grp_fu_19999_ce() {
    grp_fu_19999_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_19999_p0() {
    grp_fu_19999_p0 = ap_reg_ppstg_reg_20848_pp1_it115.read();
}

void particle_filter::thread_grp_fu_19999_p1() {
    grp_fu_19999_p1 = reg_20934.read();
}

void particle_filter::thread_grp_fu_20003_ce() {
    grp_fu_20003_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20003_p0() {
    grp_fu_20003_p0 = ap_reg_ppstg_reg_20854_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20003_p1() {
    grp_fu_20003_p1 = reg_20939.read();
}

void particle_filter::thread_grp_fu_20007_ce() {
    grp_fu_20007_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20007_p0() {
    grp_fu_20007_p0 = ap_reg_ppstg_reg_20860_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20007_p1() {
    grp_fu_20007_p1 = reg_20944.read();
}

void particle_filter::thread_grp_fu_20011_ce() {
    grp_fu_20011_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20011_p0() {
    grp_fu_20011_p0 = ap_reg_ppstg_reg_20866_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20011_p1() {
    grp_fu_20011_p1 = reg_20949.read();
}

void particle_filter::thread_grp_fu_20015_ce() {
    grp_fu_20015_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20015_p0() {
    grp_fu_20015_p0 = ap_reg_ppstg_reg_20872_pp1_it115.read();
}

void particle_filter::thread_grp_fu_20015_p1() {
    grp_fu_20015_p1 = reg_20954.read();
}

void particle_filter::thread_grp_fu_20019_ce() {
    grp_fu_20019_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20019_p0() {
    if (ap_sig_bdd_57510.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_342_reg_33576_pp1_it123.read())) {
            grp_fu_20019_p0 = ap_reg_ppstg_reg_20823_pp1_it123.read();
        } else if (ap_sig_bdd_57511.read()) {
            grp_fu_20019_p0 = ap_reg_ppstg_reg_20830_pp1_it123.read();
        } else {
            grp_fu_20019_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20019_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20019_p1() {
    grp_fu_20019_p1 = reg_21007.read();
}

void particle_filter::thread_grp_fu_20023_ce() {
    grp_fu_20023_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20023_p0() {
    if (ap_sig_bdd_57515.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_1_reg_33618_pp1_it123.read())) {
            grp_fu_20023_p0 = ap_reg_ppstg_reg_20836_pp1_it123.read();
        } else if (ap_sig_bdd_57516.read()) {
            grp_fu_20023_p0 = ap_reg_ppstg_tmp_390_0_1_reg_33908_pp1_it123.read();
        } else {
            grp_fu_20023_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20023_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20023_p1() {
    grp_fu_20023_p1 = reg_21012.read();
}

void particle_filter::thread_grp_fu_20027_ce() {
    grp_fu_20027_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20027_p0() {
    if (ap_sig_bdd_57520.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_2_reg_33660_pp1_it123.read())) {
            grp_fu_20027_p0 = ap_reg_ppstg_reg_20842_pp1_it123.read();
        } else if (ap_sig_bdd_57521.read()) {
            grp_fu_20027_p0 = ap_reg_ppstg_tmp_390_0_2_reg_33913_pp1_it123.read();
        } else {
            grp_fu_20027_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20027_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20027_p1() {
    grp_fu_20027_p1 = reg_21017.read();
}

void particle_filter::thread_grp_fu_20031_ce() {
    grp_fu_20031_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20031_p0() {
    if (ap_sig_bdd_57525.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_3_reg_33702_pp1_it123.read())) {
            grp_fu_20031_p0 = ap_reg_ppstg_reg_20848_pp1_it123.read();
        } else if (ap_sig_bdd_57526.read()) {
            grp_fu_20031_p0 = ap_reg_ppstg_tmp_390_0_3_reg_33918_pp1_it123.read();
        } else {
            grp_fu_20031_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20031_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20031_p1() {
    grp_fu_20031_p1 = reg_21022.read();
}

void particle_filter::thread_grp_fu_20035_ce() {
    grp_fu_20035_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20035_p0() {
    if (ap_sig_bdd_57530.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_reg_33744_pp1_it123.read())) {
            grp_fu_20035_p0 = ap_reg_ppstg_reg_20854_pp1_it123.read();
        } else if (ap_sig_bdd_57531.read()) {
            grp_fu_20035_p0 = ap_reg_ppstg_tmp_390_1_reg_33923_pp1_it123.read();
        } else {
            grp_fu_20035_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20035_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20035_p1() {
    grp_fu_20035_p1 = reg_21027.read();
}

void particle_filter::thread_grp_fu_20039_ce() {
    grp_fu_20039_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20039_p0() {
    if (ap_sig_bdd_57535.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_1_reg_33786_pp1_it123.read())) {
            grp_fu_20039_p0 = ap_reg_ppstg_reg_20860_pp1_it123.read();
        } else if (ap_sig_bdd_57536.read()) {
            grp_fu_20039_p0 = ap_reg_ppstg_tmp_390_1_1_reg_33928_pp1_it123.read();
        } else {
            grp_fu_20039_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20039_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20039_p1() {
    grp_fu_20039_p1 = reg_21032.read();
}

void particle_filter::thread_grp_fu_20043_ce() {
    grp_fu_20043_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20043_p0() {
    if (ap_sig_bdd_57540.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_2_reg_33828_pp1_it123.read())) {
            grp_fu_20043_p0 = ap_reg_ppstg_reg_20866_pp1_it123.read();
        } else if (ap_sig_bdd_57541.read()) {
            grp_fu_20043_p0 = ap_reg_ppstg_tmp_390_1_2_reg_33933_pp1_it123.read();
        } else {
            grp_fu_20043_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20043_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20043_p1() {
    grp_fu_20043_p1 = reg_21037.read();
}

void particle_filter::thread_grp_fu_20047_ce() {
    grp_fu_20047_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20047_p0() {
    if (ap_sig_bdd_57545.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_3_reg_33870_pp1_it123.read())) {
            grp_fu_20047_p0 = ap_reg_ppstg_reg_20872_pp1_it123.read();
        } else if (ap_sig_bdd_57546.read()) {
            grp_fu_20047_p0 = ap_reg_ppstg_tmp_390_1_3_reg_33938_pp1_it123.read();
        } else {
            grp_fu_20047_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20047_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20047_p1() {
    grp_fu_20047_p1 = reg_21042.read();
}

void particle_filter::thread_grp_fu_20055_ce() {
    grp_fu_20055_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20055_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()))) {
        grp_fu_20055_p0 = reg_20782.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st262_fsm_70, ap_CS_fsm.read())) {
        grp_fu_20055_p0 = tmp_245_reg_34747.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st225_fsm_33, ap_CS_fsm.read())) {
        grp_fu_20055_p0 = weights_partial_sums_reg_19336.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20055_p0 = ap_reg_ppstg_reg_20816_pp1_it81.read();
    } else {
        grp_fu_20055_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20055_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_st262_fsm_70, ap_CS_fsm.read()) || 
         (esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read())))) {
        grp_fu_20055_p1 = weights_sum_1_reg_34741.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st225_fsm_33, ap_CS_fsm.read())) {
        grp_fu_20055_p1 = tmp_s_reg_32600.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20055_p1 = tmp_329_reg_33268.read();
    } else {
        grp_fu_20055_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20059_ce() {
    grp_fu_20059_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20059_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()))) {
        grp_fu_20059_p0 = reg_20796.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20059_p0 = ap_reg_ppstg_temp2_0_1_reg_33226_pp1_it81.read();
    } else {
        grp_fu_20059_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20059_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it6.read()))) {
        grp_fu_20059_p1 = weights_sum_1_reg_34741.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it82.read()))) {
        grp_fu_20059_p1 = tmp_329_0_1_reg_33273.read();
    } else {
        grp_fu_20059_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20063_ce() {
    grp_fu_20063_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20063_p0() {
    grp_fu_20063_p0 = ap_reg_ppstg_temp2_0_2_reg_33232_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20063_p1() {
    grp_fu_20063_p1 = tmp_329_0_2_reg_33278.read();
}

void particle_filter::thread_grp_fu_20067_ce() {
    grp_fu_20067_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20067_p0() {
    grp_fu_20067_p0 = ap_reg_ppstg_temp2_0_3_reg_33238_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20067_p1() {
    grp_fu_20067_p1 = tmp_329_0_3_reg_33283.read();
}

void particle_filter::thread_grp_fu_20071_ce() {
    grp_fu_20071_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20071_p0() {
    grp_fu_20071_p0 = ap_reg_ppstg_temp2_1_reg_33244_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20071_p1() {
    grp_fu_20071_p1 = tmp_329_1_reg_33288.read();
}

void particle_filter::thread_grp_fu_20075_ce() {
    grp_fu_20075_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20075_p0() {
    grp_fu_20075_p0 = ap_reg_ppstg_temp2_1_1_reg_33250_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20075_p1() {
    grp_fu_20075_p1 = tmp_329_1_1_reg_33293.read();
}

void particle_filter::thread_grp_fu_20079_ce() {
    grp_fu_20079_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20079_p0() {
    grp_fu_20079_p0 = ap_reg_ppstg_temp2_1_2_reg_33256_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20079_p1() {
    grp_fu_20079_p1 = tmp_329_1_2_reg_33298.read();
}

void particle_filter::thread_grp_fu_20083_ce() {
    grp_fu_20083_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20083_p0() {
    grp_fu_20083_p0 = ap_reg_ppstg_temp2_1_3_reg_33262_pp1_it81.read();
}

void particle_filter::thread_grp_fu_20083_p1() {
    grp_fu_20083_p1 = tmp_329_1_3_reg_33303.read();
}

void particle_filter::thread_grp_fu_20088_ce() {
    grp_fu_20088_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20088_p0() {
    if (esl_seteq<1,8,8>(ap_ST_st234_fsm_42, ap_CS_fsm.read())) {
        grp_fu_20088_p0 = u5_reg_34392.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33370_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20274_p2.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20700_p2.read()))) {
        grp_fu_20088_p0 = tmp_403_fu_25507_p1.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33370_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20274_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20700_p2.read()) && 
                !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20705_p2.read()))) {
        grp_fu_20088_p0 = tmp_413_fu_25503_p1.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33370_pp1_it101.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20274_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20700_p2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20705_p2.read()))) {
        grp_fu_20088_p0 = tmp_415_fu_25495_p1.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st9_fsm_5, ap_CS_fsm.read())) {
        grp_fu_20088_p0 = P.read();
    } else {
        grp_fu_20088_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20091_ce() {
    grp_fu_20091_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20091_p0() {
    if (esl_seteq<1,8,8>(ap_ST_st234_fsm_42, ap_CS_fsm.read())) {
        grp_fu_20091_p0 = u6_reg_34412.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()))) {
        grp_fu_20091_p0 = tmp_416_fu_25499_p1.read();
    } else {
        grp_fu_20091_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20094_ce() {
    grp_fu_20094_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20094_p0() {
    if (ap_sig_bdd_6134.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20709_p2.read())) {
            grp_fu_20094_p0 = tmp_351_0_s_fu_25523_p1.read();
        } else if (ap_sig_bdd_57552.read()) {
            grp_fu_20094_p0 = tmp_359_0_s_fu_25519_p1.read();
        } else if (ap_sig_bdd_57550.read()) {
            grp_fu_20094_p0 = tmp_386_0_s_fu_25511_p1.read();
        } else {
            grp_fu_20094_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20094_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20097_ce() {
    grp_fu_20097_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20097_p0() {
    grp_fu_20097_p0 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33512.read());
}

void particle_filter::thread_grp_fu_20100_ce() {
    grp_fu_20100_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20100_p0() {
    if (ap_sig_bdd_6341.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20718_p2.read())) {
            grp_fu_20100_p0 = tmp_351_0_4_fu_25539_p1.read();
        } else if (ap_sig_bdd_57557.read()) {
            grp_fu_20100_p0 = tmp_359_0_4_fu_25535_p1.read();
        } else if (ap_sig_bdd_57555.read()) {
            grp_fu_20100_p0 = tmp_386_0_4_fu_25527_p1.read();
        } else {
            grp_fu_20100_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20100_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20103_ce() {
    grp_fu_20103_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20103_p0() {
    grp_fu_20103_p0 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33538.read());
}

void particle_filter::thread_grp_fu_20106_ce() {
    grp_fu_20106_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20106_p0() {
    if (ap_sig_bdd_6548.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20727_p2.read())) {
            grp_fu_20106_p0 = tmp_351_0_5_fu_25555_p1.read();
        } else if (ap_sig_bdd_57562.read()) {
            grp_fu_20106_p0 = tmp_359_0_5_fu_25551_p1.read();
        } else if (ap_sig_bdd_57560.read()) {
            grp_fu_20106_p0 = tmp_386_0_5_fu_25543_p1.read();
        } else {
            grp_fu_20106_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20106_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20109_ce() {
    grp_fu_20109_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20109_p0() {
    grp_fu_20109_p0 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33564.read());
}

void particle_filter::thread_grp_fu_20112_ce() {
    grp_fu_20112_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20112_p0() {
    if (ap_sig_bdd_6755.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20736_p2.read())) {
            grp_fu_20112_p0 = tmp_351_s_fu_25571_p1.read();
        } else if (ap_sig_bdd_57567.read()) {
            grp_fu_20112_p0 = tmp_359_s_fu_25567_p1.read();
        } else if (ap_sig_bdd_57565.read()) {
            grp_fu_20112_p0 = tmp_386_s_fu_25559_p1.read();
        } else {
            grp_fu_20112_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20112_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20115_ce() {
    grp_fu_20115_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20115_p0() {
    grp_fu_20115_p0 = esl_zext<32,9>(n_minus_x_V_reg_33486.read());
}

void particle_filter::thread_grp_fu_20118_ce() {
    grp_fu_20118_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20118_p0() {
    if (ap_sig_bdd_6962.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20745_p2.read())) {
            grp_fu_20118_p0 = tmp_351_1_s_fu_25587_p1.read();
        } else if (ap_sig_bdd_57572.read()) {
            grp_fu_20118_p0 = tmp_359_1_s_fu_25583_p1.read();
        } else if (ap_sig_bdd_57570.read()) {
            grp_fu_20118_p0 = tmp_386_1_s_fu_25575_p1.read();
        } else {
            grp_fu_20118_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20118_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20121_ce() {
    grp_fu_20121_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20121_p0() {
    grp_fu_20121_p0 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33512.read());
}

void particle_filter::thread_grp_fu_20124_ce() {
    grp_fu_20124_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20124_p0() {
    if (ap_sig_bdd_7169.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20754_p2.read())) {
            grp_fu_20124_p0 = tmp_351_1_4_fu_25603_p1.read();
        } else if (ap_sig_bdd_57577.read()) {
            grp_fu_20124_p0 = tmp_359_1_4_fu_25599_p1.read();
        } else if (ap_sig_bdd_57575.read()) {
            grp_fu_20124_p0 = tmp_386_1_4_fu_25591_p1.read();
        } else {
            grp_fu_20124_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20124_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20127_ce() {
    grp_fu_20127_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20127_p0() {
    grp_fu_20127_p0 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33538.read());
}

void particle_filter::thread_grp_fu_20130_ce() {
    grp_fu_20130_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20130_p0() {
    if (ap_sig_bdd_7376.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20763_p2.read())) {
            grp_fu_20130_p0 = tmp_351_1_5_fu_25619_p1.read();
        } else if (ap_sig_bdd_57582.read()) {
            grp_fu_20130_p0 = tmp_359_1_5_fu_25615_p1.read();
        } else if (ap_sig_bdd_57580.read()) {
            grp_fu_20130_p0 = tmp_386_1_5_fu_25607_p1.read();
        } else {
            grp_fu_20130_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        grp_fu_20130_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20133_ce() {
    grp_fu_20133_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20133_p0() {
    grp_fu_20133_p0 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33564.read());
}

void particle_filter::thread_grp_fu_20136_ce() {
    grp_fu_20136_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20136_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_st278_fsm_86, ap_CS_fsm.read()) || 
         (esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it22.read())))) {
        grp_fu_20136_p0 = reg_21095.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st244_fsm_52, ap_CS_fsm.read())) {
        grp_fu_20136_p0 = reg_20796.read();
    } else {
        grp_fu_20136_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20139_ce() {
    grp_fu_20139_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20139_p0() {
    grp_fu_20139_p0 = v_assign_2_1_reg_35258.read();
}

void particle_filter::thread_grp_fu_20142_ce() {
    grp_fu_20142_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20142_opcode() {
    if (esl_seteq<1,8,8>(ap_ST_st259_fsm_67, ap_CS_fsm.read())) {
        grp_fu_20142_opcode = ap_const_lv5_1;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())))) {
        grp_fu_20142_opcode = ap_const_lv5_4;
    } else if ((esl_seteq<1,8,8>(ap_ST_st271_fsm_79, ap_CS_fsm.read()) || 
                (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it56.read())))) {
        grp_fu_20142_opcode = ap_const_lv5_2;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg7_fsm_32, ap_CS_fsm.read())) || 
                (esl_seteq<1,8,8>(ap_ST_pp2_stg1_fsm_26, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it3.read())) || 
                (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, tmp_86_fu_21572_p2.read())))) {
        grp_fu_20142_opcode = ap_const_lv5_3;
    } else {
        grp_fu_20142_opcode =  (sc_lv<5>) ("XXXXX");
    }
}

void particle_filter::thread_grp_fu_20142_p0() {
    if (esl_seteq<1,8,8>(ap_ST_st271_fsm_79, ap_CS_fsm.read())) {
        grp_fu_20142_p0 = reg_20803.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st259_fsm_67, ap_CS_fsm.read())) {
        grp_fu_20142_p0 = weights_partial_sums_reg_19336.read();
    } else if (((esl_seteq<1,8,8>(ap_ST_pp2_stg1_fsm_26, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read())))) {
        grp_fu_20142_p0 = tmp_266_1_reg_34333.read();
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg7_fsm_32, ap_CS_fsm.read())) || 
                (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())))) {
        grp_fu_20142_p0 = reg_20816.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20142_p0 = temp_reg_33106.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read())) {
        grp_fu_20142_p0 = log_lik_out_reg_2366.read();
    } else {
        grp_fu_20142_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20142_p1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())))) {
        grp_fu_20142_p1 = ap_const_lv32_7149F2CA;
    } else if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it2.read()) && 
                 esl_seteq<1,8,8>(ap_ST_pp2_stg7_fsm_32, ap_CS_fsm.read())) || 
                (esl_seteq<1,8,8>(ap_ST_pp2_stg1_fsm_26, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read())) || 
                esl_seteq<1,8,8>(ap_ST_st259_fsm_67, ap_CS_fsm.read()))) {
        grp_fu_20142_p1 = ap_const_lv32_0;
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20142_p1 = ap_const_lv32_42880000;
    } else if ((esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read()) || 
                esl_seteq<1,8,8>(ap_ST_st271_fsm_79, ap_CS_fsm.read()))) {
        grp_fu_20142_p1 = ap_const_lv32_F149F2CA;
    } else {
        grp_fu_20142_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20148_ce() {
    grp_fu_20148_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20148_opcode() {
    grp_fu_20148_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20148_p0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20148_p0 = temp_0_1_reg_33113.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read())) {
        grp_fu_20148_p0 = log_lik_out_reg_2366.read();
    } else {
        grp_fu_20148_p0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20148_p1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it57.read()))) {
        grp_fu_20148_p1 = ap_const_lv32_42880000;
    } else if (esl_seteq<1,8,8>(ap_ST_st15_fsm_11, ap_CS_fsm.read())) {
        grp_fu_20148_p1 = ap_const_lv32_0;
    } else {
        grp_fu_20148_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20156_ce() {
    grp_fu_20156_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20156_opcode() {
    grp_fu_20156_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20156_p0() {
    grp_fu_20156_p0 = temp_0_2_reg_33120.read();
}

void particle_filter::thread_grp_fu_20156_p1() {
    grp_fu_20156_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20161_ce() {
    grp_fu_20161_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20161_opcode() {
    grp_fu_20161_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20161_p0() {
    grp_fu_20161_p0 = temp_0_3_reg_33127.read();
}

void particle_filter::thread_grp_fu_20161_p1() {
    grp_fu_20161_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20166_ce() {
    grp_fu_20166_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20166_opcode() {
    grp_fu_20166_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20166_p0() {
    grp_fu_20166_p0 = temp_1_reg_33134.read();
}

void particle_filter::thread_grp_fu_20166_p1() {
    grp_fu_20166_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20171_ce() {
    grp_fu_20171_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20171_opcode() {
    grp_fu_20171_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20171_p0() {
    grp_fu_20171_p0 = temp_1_1_reg_33141.read();
}

void particle_filter::thread_grp_fu_20171_p1() {
    grp_fu_20171_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20176_ce() {
    grp_fu_20176_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20176_opcode() {
    grp_fu_20176_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20176_p0() {
    grp_fu_20176_p0 = temp_1_2_reg_33148.read();
}

void particle_filter::thread_grp_fu_20176_p1() {
    grp_fu_20176_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20181_ce() {
    grp_fu_20181_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20181_opcode() {
    grp_fu_20181_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20181_p0() {
    grp_fu_20181_p0 = temp_1_3_reg_33155.read();
}

void particle_filter::thread_grp_fu_20181_p1() {
    grp_fu_20181_p1 = ap_const_lv32_42880000;
}

void particle_filter::thread_grp_fu_20186_ce() {
    grp_fu_20186_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20186_opcode() {
    grp_fu_20186_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20186_p0() {
    grp_fu_20186_p0 = ap_reg_ppstg_temp_reg_33106_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20186_p1() {
    grp_fu_20186_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20191_ce() {
    grp_fu_20191_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20191_opcode() {
    grp_fu_20191_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20191_p0() {
    grp_fu_20191_p0 = ap_reg_ppstg_temp_0_1_reg_33113_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20191_p1() {
    grp_fu_20191_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20196_ce() {
    grp_fu_20196_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20196_opcode() {
    grp_fu_20196_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20196_p0() {
    grp_fu_20196_p0 = ap_reg_ppstg_temp_0_2_reg_33120_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20196_p1() {
    grp_fu_20196_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20201_ce() {
    grp_fu_20201_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20201_opcode() {
    grp_fu_20201_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20201_p0() {
    grp_fu_20201_p0 = ap_reg_ppstg_temp_0_3_reg_33127_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20201_p1() {
    grp_fu_20201_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20206_ce() {
    grp_fu_20206_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20206_opcode() {
    grp_fu_20206_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20206_p0() {
    grp_fu_20206_p0 = ap_reg_ppstg_temp_1_reg_33134_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20206_p1() {
    grp_fu_20206_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20211_ce() {
    grp_fu_20211_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20211_opcode() {
    grp_fu_20211_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20211_p0() {
    grp_fu_20211_p0 = ap_reg_ppstg_temp_1_1_reg_33141_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20211_p1() {
    grp_fu_20211_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20216_ce() {
    grp_fu_20216_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20216_opcode() {
    grp_fu_20216_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20216_p0() {
    grp_fu_20216_p0 = ap_reg_ppstg_temp_1_2_reg_33148_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20216_p1() {
    grp_fu_20216_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20221_ce() {
    grp_fu_20221_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20221_opcode() {
    grp_fu_20221_opcode = ap_const_lv5_4;
}

void particle_filter::thread_grp_fu_20221_p0() {
    grp_fu_20221_p0 = ap_reg_ppstg_temp_1_3_reg_33155_pp1_it58.read();
}

void particle_filter::thread_grp_fu_20221_p1() {
    grp_fu_20221_p1 = ap_const_lv32_C2880000;
}

void particle_filter::thread_grp_fu_20226_ce() {
    grp_fu_20226_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20226_opcode() {
    grp_fu_20226_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20226_p0() {
    grp_fu_20226_p0 = p_1_i_phi_fu_2418_p6.read();
}

void particle_filter::thread_grp_fu_20226_p1() {
    grp_fu_20226_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20232_ce() {
    grp_fu_20232_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20232_opcode() {
    grp_fu_20232_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20232_p0() {
    grp_fu_20232_p0 = p_1_i_0_1_phi_fu_2434_p6.read();
}

void particle_filter::thread_grp_fu_20232_p1() {
    grp_fu_20232_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20238_ce() {
    grp_fu_20238_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20238_opcode() {
    grp_fu_20238_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20238_p0() {
    grp_fu_20238_p0 = p_1_i_0_2_phi_fu_2450_p6.read();
}

void particle_filter::thread_grp_fu_20238_p1() {
    grp_fu_20238_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20244_ce() {
    grp_fu_20244_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20244_opcode() {
    grp_fu_20244_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20244_p0() {
    grp_fu_20244_p0 = p_1_i_0_3_phi_fu_2466_p6.read();
}

void particle_filter::thread_grp_fu_20244_p1() {
    grp_fu_20244_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20250_ce() {
    grp_fu_20250_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20250_opcode() {
    grp_fu_20250_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20250_p0() {
    grp_fu_20250_p0 = p_1_i_1_phi_fu_2482_p6.read();
}

void particle_filter::thread_grp_fu_20250_p1() {
    grp_fu_20250_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20256_ce() {
    grp_fu_20256_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20256_opcode() {
    grp_fu_20256_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20256_p0() {
    grp_fu_20256_p0 = p_1_i_1_1_phi_fu_2498_p6.read();
}

void particle_filter::thread_grp_fu_20256_p1() {
    grp_fu_20256_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20262_ce() {
    grp_fu_20262_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20262_opcode() {
    grp_fu_20262_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20262_p0() {
    grp_fu_20262_p0 = p_1_i_1_2_phi_fu_2514_p6.read();
}

void particle_filter::thread_grp_fu_20262_p1() {
    grp_fu_20262_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20268_ce() {
    grp_fu_20268_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20268_opcode() {
    grp_fu_20268_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20268_p0() {
    grp_fu_20268_p0 = p_1_i_1_3_phi_fu_2530_p6.read();
}

void particle_filter::thread_grp_fu_20268_p1() {
    grp_fu_20268_p1 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20274_ce() {
    grp_fu_20274_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20274_opcode() {
    grp_fu_20274_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20274_p0() {
    grp_fu_20274_p0 = ap_reg_ppstg_p_1_i_reg_2413_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20274_p1() {
    grp_fu_20274_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20280_ce() {
    grp_fu_20280_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20280_opcode() {
    grp_fu_20280_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20280_p0() {
    grp_fu_20280_p0 = ap_reg_ppstg_p_1_i_0_1_reg_2429_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20280_p1() {
    grp_fu_20280_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20286_ce() {
    grp_fu_20286_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20286_opcode() {
    grp_fu_20286_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20286_p0() {
    grp_fu_20286_p0 = ap_reg_ppstg_p_1_i_0_2_reg_2445_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20286_p1() {
    grp_fu_20286_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20292_ce() {
    grp_fu_20292_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20292_opcode() {
    grp_fu_20292_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20292_p0() {
    grp_fu_20292_p0 = ap_reg_ppstg_p_1_i_0_3_reg_2461_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20292_p1() {
    grp_fu_20292_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20298_ce() {
    grp_fu_20298_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20298_opcode() {
    grp_fu_20298_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20298_p0() {
    grp_fu_20298_p0 = ap_reg_ppstg_p_1_i_1_reg_2477_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20298_p1() {
    grp_fu_20298_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20304_ce() {
    grp_fu_20304_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20304_opcode() {
    grp_fu_20304_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20304_p0() {
    grp_fu_20304_p0 = ap_reg_ppstg_p_1_i_1_1_reg_2493_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20304_p1() {
    grp_fu_20304_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20310_ce() {
    grp_fu_20310_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20310_opcode() {
    grp_fu_20310_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20310_p0() {
    grp_fu_20310_p0 = ap_reg_ppstg_p_1_i_1_2_reg_2509_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20310_p1() {
    grp_fu_20310_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20316_ce() {
    grp_fu_20316_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20316_opcode() {
    grp_fu_20316_opcode = ap_const_lv5_1;
}

void particle_filter::thread_grp_fu_20316_p0() {
    grp_fu_20316_p0 = ap_reg_ppstg_p_1_i_1_3_reg_2525_pp1_it99.read();
}

void particle_filter::thread_grp_fu_20316_p1() {
    grp_fu_20316_p1 = ap_const_lv32_3F800000;
}

void particle_filter::thread_grp_fu_20322_ce() {
    grp_fu_20322_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20322_opcode() {
    grp_fu_20322_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20322_p0() {
    grp_fu_20322_p0 = temp3_0_1_phi_fu_19176_p10.read();
}

void particle_filter::thread_grp_fu_20322_p1() {
    grp_fu_20322_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20328_ce() {
    grp_fu_20328_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20328_opcode() {
    grp_fu_20328_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20328_p0() {
    grp_fu_20328_p0 = temp3_1_1_phi_fu_19192_p10.read();
}

void particle_filter::thread_grp_fu_20328_p1() {
    grp_fu_20328_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20334_ce() {
    grp_fu_20334_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20334_opcode() {
    grp_fu_20334_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20334_p0() {
    grp_fu_20334_p0 = temp3_2_1_phi_fu_19208_p10.read();
}

void particle_filter::thread_grp_fu_20334_p1() {
    grp_fu_20334_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20340_ce() {
    grp_fu_20340_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20340_opcode() {
    grp_fu_20340_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20340_p0() {
    grp_fu_20340_p0 = tmp_397_0_3_phi_fu_19224_p10.read();
}

void particle_filter::thread_grp_fu_20340_p1() {
    grp_fu_20340_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20346_ce() {
    grp_fu_20346_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20346_opcode() {
    grp_fu_20346_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20346_p0() {
    grp_fu_20346_p0 = temp3_0_3_phi_fu_19240_p10.read();
}

void particle_filter::thread_grp_fu_20346_p1() {
    grp_fu_20346_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20352_ce() {
    grp_fu_20352_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20352_opcode() {
    grp_fu_20352_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20352_p0() {
    grp_fu_20352_p0 = temp3_1_3_phi_fu_19256_p10.read();
}

void particle_filter::thread_grp_fu_20352_p1() {
    grp_fu_20352_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20358_ce() {
    grp_fu_20358_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20358_opcode() {
    grp_fu_20358_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20358_p0() {
    grp_fu_20358_p0 = temp3_2_3_phi_fu_19272_p10.read();
}

void particle_filter::thread_grp_fu_20358_p1() {
    grp_fu_20358_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20364_ce() {
    grp_fu_20364_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20364_opcode() {
    grp_fu_20364_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20364_p0() {
    grp_fu_20364_p0 = tmp_397_1_3_phi_fu_19288_p10.read();
}

void particle_filter::thread_grp_fu_20364_p1() {
    grp_fu_20364_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20370_ce() {
    grp_fu_20370_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20370_opcode() {
    grp_fu_20370_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20370_p0() {
    grp_fu_20370_p0 = likelihood_value_0_reg_34243.read();
}

void particle_filter::thread_grp_fu_20370_p1() {
    grp_fu_20370_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20375_ce() {
    grp_fu_20375_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20375_opcode() {
    grp_fu_20375_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20375_p0() {
    grp_fu_20375_p0 = log_lik_particle_max_keep_1_reg_34252.read();
}

void particle_filter::thread_grp_fu_20375_p1() {
    grp_fu_20375_p1 = ap_const_lv32_F149F2CA;
}

void particle_filter::thread_grp_fu_20380_ce() {
    grp_fu_20380_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20380_opcode() {
    grp_fu_20380_opcode = ap_const_lv5_2;
}

void particle_filter::thread_grp_fu_20380_p0() {
    grp_fu_20380_p0 = likelihood_value_0_reg_34243.read();
}

void particle_filter::thread_grp_fu_20380_p1() {
    grp_fu_20380_p1 = log_lik_particle_max_keep_1_reg_34252.read();
}

void particle_filter::thread_grp_fu_20387_ce() {
    grp_fu_20387_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20387_p0() {
    grp_fu_20387_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20387_p1() {
    grp_fu_20387_p1 = reg_20782.read();
}

void particle_filter::thread_grp_fu_20392_ce() {
    grp_fu_20392_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20392_p0() {
    grp_fu_20392_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20392_p1() {
    if (esl_seteq<1,8,8>(ap_ST_st249_fsm_57, ap_CS_fsm.read())) {
        grp_fu_20392_p1 = reg_21095.read();
    } else if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33370_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20274_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20700_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20705_p2.read())) || 
                (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                 esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it102.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33370_pp1_it101.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20274_p2.read()) && 
                 esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20700_p2.read()) && 
                 !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20705_p2.read())))) {
        grp_fu_20392_p1 = ap_reg_ppstg_p_1_i_reg_2413_pp1_it101.read();
    } else {
        grp_fu_20392_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20398_ce() {
    grp_fu_20398_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20398_p0() {
    grp_fu_20398_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20398_p1() {
    grp_fu_20398_p1 = ap_reg_ppstg_p_1_i_0_1_reg_2429_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20404_ce() {
    grp_fu_20404_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20404_p0() {
    grp_fu_20404_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20404_p1() {
    grp_fu_20404_p1 = ap_reg_ppstg_p_1_i_0_2_reg_2445_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20410_ce() {
    grp_fu_20410_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20410_p0() {
    grp_fu_20410_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20410_p1() {
    grp_fu_20410_p1 = ap_reg_ppstg_p_1_i_0_3_reg_2461_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20416_ce() {
    grp_fu_20416_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20416_p0() {
    grp_fu_20416_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20416_p1() {
    grp_fu_20416_p1 = ap_reg_ppstg_p_1_i_1_reg_2477_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20422_ce() {
    grp_fu_20422_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20422_p0() {
    grp_fu_20422_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20422_p1() {
    grp_fu_20422_p1 = ap_reg_ppstg_p_1_i_1_1_reg_2493_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20428_ce() {
    grp_fu_20428_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20428_p0() {
    grp_fu_20428_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20428_p1() {
    grp_fu_20428_p1 = ap_reg_ppstg_p_1_i_1_2_reg_2509_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20434_ce() {
    grp_fu_20434_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20434_p0() {
    grp_fu_20434_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20434_p1() {
    grp_fu_20434_p1 = ap_reg_ppstg_p_1_i_1_3_reg_2525_pp1_it101.read();
}

void particle_filter::thread_grp_fu_20440_ce() {
    grp_fu_20440_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20440_p0() {
    grp_fu_20440_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20440_p1() {
    grp_fu_20440_p1 = reg_20878.read();
}

void particle_filter::thread_grp_fu_20445_ce() {
    grp_fu_20445_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20445_p0() {
    grp_fu_20445_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20445_p1() {
    grp_fu_20445_p1 = reg_20883.read();
}

void particle_filter::thread_grp_fu_20450_ce() {
    grp_fu_20450_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20450_p0() {
    grp_fu_20450_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20450_p1() {
    grp_fu_20450_p1 = reg_20888.read();
}

void particle_filter::thread_grp_fu_20455_ce() {
    grp_fu_20455_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20455_p0() {
    grp_fu_20455_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20455_p1() {
    grp_fu_20455_p1 = reg_20893.read();
}

void particle_filter::thread_grp_fu_20460_ce() {
    grp_fu_20460_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20460_p0() {
    grp_fu_20460_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20460_p1() {
    grp_fu_20460_p1 = reg_20898.read();
}

void particle_filter::thread_grp_fu_20465_ce() {
    grp_fu_20465_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20465_p0() {
    grp_fu_20465_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20465_p1() {
    grp_fu_20465_p1 = reg_20903.read();
}

void particle_filter::thread_grp_fu_20470_ce() {
    grp_fu_20470_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20470_p0() {
    grp_fu_20470_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20470_p1() {
    grp_fu_20470_p1 = reg_20908.read();
}

void particle_filter::thread_grp_fu_20475_ce() {
    grp_fu_20475_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20475_p0() {
    grp_fu_20475_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20475_p1() {
    grp_fu_20475_p1 = reg_20913.read();
}

void particle_filter::thread_grp_fu_20480_ce() {
    grp_fu_20480_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20480_p0() {
    grp_fu_20480_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20480_p1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
         esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read()))) {
        grp_fu_20480_p1 = tmp_265_1_reg_34328.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
                esl_seteq<1,8,8>(ap_ST_pp2_stg2_fsm_27, ap_CS_fsm.read()))) {
        grp_fu_20480_p1 = reg_20803.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it61.read()))) {
        grp_fu_20480_p1 = ap_reg_ppstg_temp_reg_33106_pp1_it60.read();
    } else {
        grp_fu_20480_p1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_grp_fu_20485_ce() {
    grp_fu_20485_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20485_p0() {
    grp_fu_20485_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20485_p1() {
    grp_fu_20485_p1 = ap_reg_ppstg_temp_0_1_reg_33113_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20490_ce() {
    grp_fu_20490_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20490_p0() {
    grp_fu_20490_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20490_p1() {
    grp_fu_20490_p1 = ap_reg_ppstg_temp_0_2_reg_33120_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20495_ce() {
    grp_fu_20495_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20495_p0() {
    grp_fu_20495_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20495_p1() {
    grp_fu_20495_p1 = ap_reg_ppstg_temp_0_3_reg_33127_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20500_ce() {
    grp_fu_20500_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20500_p0() {
    grp_fu_20500_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20500_p1() {
    grp_fu_20500_p1 = ap_reg_ppstg_temp_1_reg_33134_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20505_ce() {
    grp_fu_20505_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20505_p0() {
    grp_fu_20505_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20505_p1() {
    grp_fu_20505_p1 = ap_reg_ppstg_temp_1_1_reg_33141_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20510_ce() {
    grp_fu_20510_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20510_p0() {
    grp_fu_20510_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20510_p1() {
    grp_fu_20510_p1 = ap_reg_ppstg_temp_1_2_reg_33148_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20515_ce() {
    grp_fu_20515_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_20515_p0() {
    grp_fu_20515_p0 = ap_const_lv32_0;
}

void particle_filter::thread_grp_fu_20515_p1() {
    grp_fu_20515_p1 = ap_reg_ppstg_temp_1_3_reg_33155_pp1_it60.read();
}

void particle_filter::thread_grp_fu_20700_p2() {
    grp_fu_20700_p2 = (!x_V_reg_33476.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33476.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20705_p2() {
    grp_fu_20705_p2 = (!x_V_reg_33476.read().is_01() || !n_V_reg_33468.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33476.read() == n_V_reg_33468.read());
}

void particle_filter::thread_grp_fu_20709_p2() {
    grp_fu_20709_p2 = (!x_V_0_1_reg_33502.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33502.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20714_p2() {
    grp_fu_20714_p2 = (!x_V_0_1_reg_33502.read().is_01() || !n_V_0_1_reg_33494.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33502.read() == n_V_0_1_reg_33494.read());
}

void particle_filter::thread_grp_fu_20718_p2() {
    grp_fu_20718_p2 = (!x_V_0_2_reg_33528.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33528.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20723_p2() {
    grp_fu_20723_p2 = (!x_V_0_2_reg_33528.read().is_01() || !n_V_0_2_reg_33520.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33528.read() == n_V_0_2_reg_33520.read());
}

void particle_filter::thread_grp_fu_20727_p2() {
    grp_fu_20727_p2 = (!x_V_0_3_reg_33554.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33554.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20732_p2() {
    grp_fu_20732_p2 = (!x_V_0_3_reg_33554.read().is_01() || !n_V_0_3_reg_33546.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33554.read() == n_V_0_3_reg_33546.read());
}

void particle_filter::thread_grp_fu_20736_p2() {
    grp_fu_20736_p2 = (!x_V_reg_33476.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33476.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20741_p2() {
    grp_fu_20741_p2 = (!x_V_reg_33476.read().is_01() || !n_V_reg_33468.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_reg_33476.read() == n_V_reg_33468.read());
}

void particle_filter::thread_grp_fu_20745_p2() {
    grp_fu_20745_p2 = (!x_V_0_1_reg_33502.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33502.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20750_p2() {
    grp_fu_20750_p2 = (!x_V_0_1_reg_33502.read().is_01() || !n_V_0_1_reg_33494.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_1_reg_33502.read() == n_V_0_1_reg_33494.read());
}

void particle_filter::thread_grp_fu_20754_p2() {
    grp_fu_20754_p2 = (!x_V_0_2_reg_33528.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33528.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20759_p2() {
    grp_fu_20759_p2 = (!x_V_0_2_reg_33528.read().is_01() || !n_V_0_2_reg_33520.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_2_reg_33528.read() == n_V_0_2_reg_33520.read());
}

void particle_filter::thread_grp_fu_20763_p2() {
    grp_fu_20763_p2 = (!x_V_0_3_reg_33554.read().is_01() || !ap_const_lv9_0.is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33554.read() == ap_const_lv9_0);
}

void particle_filter::thread_grp_fu_20768_p2() {
    grp_fu_20768_p2 = (!x_V_0_3_reg_33554.read().is_01() || !n_V_0_3_reg_33546.read().is_01())? sc_lv<1>(): sc_lv<1>(x_V_0_3_reg_33554.read() == n_V_0_3_reg_33546.read());
}

void particle_filter::thread_grp_fu_21467_ce() {
    grp_fu_21467_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_21467_p0() {
    grp_fu_21467_p0 =  (sc_lv<31>) (chunk_size_true_2_reg_32050.read());
}

void particle_filter::thread_grp_fu_21467_p1() {
    grp_fu_21467_p1 = tmp_15_reg_32561.read();
}

void particle_filter::thread_grp_fu_30998_ce() {
    grp_fu_30998_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_30998_p0() {
    grp_fu_30998_p0 = result_V_reg_36256.read();
}

void particle_filter::thread_grp_fu_30998_p1() {
    grp_fu_30998_p1 = chunk_size_true_2_reg_32050.read();
}

void particle_filter::thread_grp_fu_31002_ce() {
    grp_fu_31002_ce = ap_const_logic_1;
}

void particle_filter::thread_grp_fu_31002_p0() {
    grp_fu_31002_p0 = result_V_reg_36256.read();
}

void particle_filter::thread_grp_fu_31002_p1() {
    grp_fu_31002_p1 = chunk_size_true_2_reg_32050.read();
}

void particle_filter::thread_i10_cast_fu_30559_p1() {
    i10_cast_fu_30559_p1 = esl_zext<32,31>(i10_mid2_reg_36061.read());
}

void particle_filter::thread_i10_mid2_fu_30512_p3() {
    i10_mid2_fu_30512_p3 = (!exitcond12_fu_30507_p2.read()[0].is_01())? sc_lv<31>(): ((exitcond12_fu_30507_p2.read()[0].to_bool())? i10_reg_19459.read(): ap_const_lv31_0);
}

void particle_filter::thread_i4_phi_fu_19329_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it1.read()) && 
         esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_34279.read()))) {
        i4_phi_fu_19329_p4 = i_2_reg_34283.read();
    } else {
        i4_phi_fu_19329_p4 = i4_reg_19325.read();
    }
}

void particle_filter::thread_i7_phi_fu_19363_p4() {
    if ((esl_seteq<1,8,8>(ap_ST_pp3_stg0_fsm_90, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp3_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond9_reg_34787.read()))) {
        i7_phi_fu_19363_p4 = i_3_reg_34844.read();
    } else {
        i7_phi_fu_19363_p4 = i7_reg_19359.read();
    }
}

void particle_filter::thread_i_1_fu_25937_p2() {
    i_1_fu_25937_p2 = (!i6_reg_19348.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(i6_reg_19348.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void particle_filter::thread_i_2_fu_25850_p2() {
    i_2_fu_25850_p2 = (!i4_phi_fu_19329_p4.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i4_phi_fu_19329_p4.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_i_3_fu_27273_p2() {
    i_3_fu_27273_p2 = (!i7_phi_fu_19363_p4.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(i7_phi_fu_19363_p4.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void particle_filter::thread_i_4_fu_30691_p2() {
    i_4_fu_30691_p2 = (!i10_mid2_reg_36061.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i10_mid2_reg_36061.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_i_5_fu_21652_p2() {
    i_5_fu_21652_p2 = (!i2_reg_2402.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i2_reg_2402.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_i_s_fu_21120_p2() {
    i_s_fu_21120_p2 = (!i_reg_2313.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(i_reg_2313.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_icmp10_fu_29129_p2() {
    icmp10_fu_29129_p2 = (!tmp_514_reg_35438.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_514_reg_35438.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp11_fu_30686_p2() {
    icmp11_fu_30686_p2 = (!tmp_531_reg_36159.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_531_reg_36159.read() == ap_const_lv19_0);
}

void particle_filter::thread_icmp1_fu_21183_p2() {
    icmp1_fu_21183_p2 = (!tmp_96_fu_21174_p4.read().is_01() || !ap_const_lv31_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_96_fu_21174_p4.read() != ap_const_lv31_0);
}

void particle_filter::thread_icmp2_fu_21936_p2() {
    icmp2_fu_21936_p2 = (!tmp_140_fu_21926_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_140_fu_21926_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_icmp3_fu_25878_p2() {
    icmp3_fu_25878_p2 = (!tmp_147_fu_25868_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_147_fu_25868_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_icmp4_fu_26649_p2() {
    icmp4_fu_26649_p2 = (!tmp_395_reg_34501.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_395_reg_34501.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp5_fu_27428_p2() {
    icmp5_fu_27428_p2 = (!tmp_412_fu_27418_p4.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_412_fu_27418_p4.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp6_fu_28334_p2() {
    icmp6_fu_28334_p2 = (!tmp_449_fu_28324_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_449_fu_28324_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_icmp7_fu_28889_p2() {
    icmp7_fu_28889_p2 = (!tmp_471_reg_35385.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): (sc_bigint<8>(tmp_471_reg_35385.read()) > sc_bigint<8>(ap_const_lv8_0));
}

void particle_filter::thread_icmp8_fu_31036_p2() {
    icmp8_fu_31036_p2 = (!tmp_499_fu_31026_p4.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_499_fu_31026_p4.read() == ap_const_lv19_0);
}

void particle_filter::thread_icmp9_fu_30590_p2() {
    icmp9_fu_30590_p2 = (!tmp_503_fu_30580_p4.read().is_01() || !ap_const_lv19_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_503_fu_30580_p4.read() == ap_const_lv19_0);
}

void particle_filter::thread_icmp_fu_21148_p2() {
    icmp_fu_21148_p2 = (!tmp_107_fu_21138_p4.read().is_01() || !ap_const_lv18_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_107_fu_21138_p4.read() == ap_const_lv18_0);
}

void particle_filter::thread_index_V_fu_30722_p4() {
    index_V_fu_30722_p4 = t_V_1_fu_30696_p1.read().range(27, 23);
}

void particle_filter::thread_index_replicated_2_phi_fu_19474_p4() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond10_reg_36118.read()))) {
        index_replicated_2_phi_fu_19474_p4 = p_3_fu_30642_p3.read();
    } else {
        index_replicated_2_phi_fu_19474_p4 = index_replicated_2_reg_19470.read();
    }
}

void particle_filter::thread_index_replicated_fu_30618_p2() {
    index_replicated_fu_30618_p2 = (!index_replicated_2_phi_fu_19474_p4.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(index_replicated_2_phi_fu_19474_p4.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void particle_filter::thread_indvar_flatten_next_fu_30501_p2() {
    indvar_flatten_next_fu_30501_p2 = (!indvar_flatten_reg_19413.read().is_01() || !ap_const_lv12_1.is_01())? sc_lv<12>(): (sc_bigint<12>(indvar_flatten_reg_19413.read()) + sc_biguint<12>(ap_const_lv12_1));
}

void particle_filter::thread_init_particles_0_address0() {
    init_particles_0_address0 =  (sc_lv<13>) (newIndex3_fu_21130_p1.read());
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
    init_particles_1_address0 =  (sc_lv<13>) (newIndex3_fu_21130_p1.read());
}

void particle_filter::thread_init_particles_1_ce0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it0.read()))) {
        init_particles_1_ce0 = ap_const_logic_1;
    } else {
        init_particles_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_init_particles_load_0_phi_fu_21160_p3() {
    init_particles_load_0_phi_fu_21160_p3 = (!icmp_reg_32077.read()[0].is_01())? sc_lv<32>(): ((icmp_reg_32077.read()[0].to_bool())? init_particles_0_q0.read(): init_particles_1_q0.read());
}

void particle_filter::thread_init_particles_load_1_phi_fu_21167_p3() {
    init_particles_load_1_phi_fu_21167_p3 = (!cond1_reg_32094.read()[0].is_01())? sc_lv<32>(): ((cond1_reg_32094.read()[0].to_bool())? init_particles_0_q0.read(): init_particles_1_q0.read());
}

void particle_filter::thread_ireg_V_1_fu_27150_p1() {
    ireg_V_1_fu_27150_p1 = grp_fu_20136_p1.read();
}

void particle_filter::thread_ireg_V_2_1_fu_28406_p1() {
    ireg_V_2_1_fu_28406_p1 = grp_fu_20139_p1.read();
}

void particle_filter::thread_ireg_V_2_fu_28360_p1() {
    ireg_V_2_fu_28360_p1 = grp_fu_20136_p1.read();
}

void particle_filter::thread_ireg_V_fu_26326_p1() {
    ireg_V_fu_26326_p1 = grp_fu_20136_p1.read();
}

void particle_filter::thread_isNeg_10_fu_24936_p3() {
    isNeg_10_fu_24936_p3 = sh_assign_13_fu_24930_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_11_fu_24981_p3() {
    isNeg_11_fu_24981_p3 = sh_assign_15_fu_24975_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_4_fu_24711_p3() {
    isNeg_4_fu_24711_p3 = sh_assign_s_fu_24705_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_5_fu_30918_p3() {
    isNeg_5_fu_30918_p3 = sh_assign_fu_30912_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_6_fu_24756_p3() {
    isNeg_6_fu_24756_p3 = sh_assign_2_fu_24750_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_7_fu_24801_p3() {
    isNeg_7_fu_24801_p3 = sh_assign_5_fu_24795_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_8_fu_24846_p3() {
    isNeg_8_fu_24846_p3 = sh_assign_7_fu_24840_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_9_fu_24891_p3() {
    isNeg_9_fu_24891_p3 = sh_assign_11_fu_24885_p2.read().range(8, 8);
}

void particle_filter::thread_isNeg_fu_24666_p3() {
    isNeg_fu_24666_p3 = sh_assign_8_fu_24660_p2.read().range(8, 8);
}

void particle_filter::thread_isneg_1_fu_27279_p3() {
    isneg_1_fu_27279_p3 = ireg_V_1_reg_34757.read().range(63, 63);
}

void particle_filter::thread_isneg_3_not_fu_28015_p2() {
    isneg_3_not_fu_28015_p2 = (isneg_2_reg_35100.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_5_not_fu_28207_p2() {
    isneg_5_not_fu_28207_p2 = (isneg_4_reg_35163.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_7_not_1_fu_30090_p2() {
    isneg_7_not_1_fu_30090_p2 = (tmp_520_fu_30052_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_7_not_fu_30027_p2() {
    isneg_7_not_fu_30027_p2 = (tmp_482_fu_29989_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_9_not_1_fu_30330_p2() {
    isneg_9_not_1_fu_30330_p2 = (tmp_524_fu_30292_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_isneg_9_not_fu_30263_p2() {
    isneg_9_not_fu_30263_p2 = (tmp_486_fu_30225_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_j_2_fu_28306_p2() {
    j_2_fu_28306_p2 = (!j3_reg_19381.read().is_01() || !ap_const_lv31_1.is_01())? sc_lv<31>(): (sc_bigint<31>(j3_reg_19381.read()) + sc_biguint<31>(ap_const_lv31_1));
}

void particle_filter::thread_j_fu_30612_p2() {
    j_fu_30612_p2 = (!j4_reg_19482.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(j4_reg_19482.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void particle_filter::thread_k9_mid2_fu_30526_p3() {
    k9_mid2_fu_30526_p3 = (!exitcond12_fu_30507_p2.read()[0].is_01())? sc_lv<2>(): ((exitcond12_fu_30507_p2.read()[0].to_bool())? k9_reg_19424.read(): k_fu_30520_p2.read());
}

void particle_filter::thread_k_fu_30520_p2() {
    k_fu_30520_p2 = (!k9_reg_19424.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_bigint<2>(k9_reg_19424.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void particle_filter::thread_lD_1_fu_27476_p1() {
    lD_1_fu_27476_p1 = tmp_304_fu_27470_p2.read().range(1-1, 0);
}

void particle_filter::thread_lD_fu_26695_p1() {
    lD_fu_26695_p1 = tmp_233_fu_26690_p2.read().range(1-1, 0);
}

void particle_filter::thread_loc_V_10_fu_25065_p1() {
    loc_V_10_fu_25065_p1 = p_Val2_52_reg_32790.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_11_fu_24737_p4() {
    loc_V_11_fu_24737_p4 = p_Val2_68_reg_32796.read().range(30, 23);
}

void particle_filter::thread_loc_V_12_fu_25129_p1() {
    loc_V_12_fu_25129_p1 = p_Val2_68_reg_32796.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_13_fu_24782_p4() {
    loc_V_13_fu_24782_p4 = p_Val2_71_reg_32802.read().range(30, 23);
}

void particle_filter::thread_loc_V_14_fu_25187_p1() {
    loc_V_14_fu_25187_p1 = p_Val2_71_reg_32802.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_15_fu_24827_p4() {
    loc_V_15_fu_24827_p4 = p_Val2_74_reg_32808.read().range(30, 23);
}

void particle_filter::thread_loc_V_16_fu_25251_p1() {
    loc_V_16_fu_25251_p1 = p_Val2_74_reg_32808.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_17_fu_24872_p4() {
    loc_V_17_fu_24872_p4 = p_Val2_77_reg_32814.read().range(30, 23);
}

void particle_filter::thread_loc_V_18_fu_25309_p1() {
    loc_V_18_fu_25309_p1 = p_Val2_77_reg_32814.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_19_fu_24917_p4() {
    loc_V_19_fu_24917_p4 = p_Val2_82_reg_32820.read().range(30, 23);
}

void particle_filter::thread_loc_V_20_fu_25373_p1() {
    loc_V_20_fu_25373_p1 = p_Val2_82_reg_32820.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_21_fu_24962_p4() {
    loc_V_21_fu_24962_p4 = p_Val2_85_reg_32826.read().range(30, 23);
}

void particle_filter::thread_loc_V_22_fu_25431_p1() {
    loc_V_22_fu_25431_p1 = p_Val2_85_reg_32826.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_23_fu_25808_p4() {
    loc_V_23_fu_25808_p4 = p_Val2_88_fu_25805_p1.read().range(30, 23);
}

void particle_filter::thread_loc_V_24_fu_25822_p4() {
    loc_V_24_fu_25822_p4 = p_Val2_89_fu_25818_p1.read().range(30, 23);
}

void particle_filter::thread_loc_V_26_fu_30718_p1() {
    loc_V_26_fu_30718_p1 = t_V_1_fu_30696_p1.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_28_fu_30764_p1() {
    loc_V_28_fu_30764_p1 = p_Val2_31_fu_30741_p2.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_29_fu_30894_p4() {
    loc_V_29_fu_30894_p4 = p_Val2_64_fu_30886_p3.read().range(30, 23);
}

void particle_filter::thread_loc_V_30_fu_30904_p1() {
    loc_V_30_fu_30904_p1 = p_Val2_64_fu_30886_p3.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_8_fu_25007_p1() {
    loc_V_8_fu_25007_p1 = p_Val2_48_reg_32784.read().range(23-1, 0);
}

void particle_filter::thread_loc_V_9_fu_24692_p4() {
    loc_V_9_fu_24692_p4 = p_Val2_52_reg_32790.read().range(30, 23);
}

void particle_filter::thread_loc_V_fu_24647_p4() {
    loc_V_fu_24647_p4 = p_Val2_48_reg_32784.read().range(30, 23);
}

void particle_filter::thread_log_lik_out_1_fu_31064_p3() {
    log_lik_out_1_fu_31064_p3 = (!tmp_113_fu_31059_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_113_fu_31059_p2.read()[0].to_bool())? ap_const_lv32_F149F2CA: ap_const_lv32_0);
}

void particle_filter::thread_log_lik_out_2_fu_31077_p3() {
    log_lik_out_2_fu_31077_p3 = (!tmp_45_fu_31072_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_45_fu_31072_p2.read()[0].to_bool())? log_lik_out_1_fu_31064_p3.read(): log_lik_out_reg_2366.read());
}

void particle_filter::thread_log_lik_particle_0_address0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read())))) {
        log_lik_particle_0_address0 = ap_reg_ppstg_log_lik_particle_0_addr_1_reg_32994_pp1_it156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
                esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read()))) {
        log_lik_particle_0_address0 =  (sc_lv<13>) (newIndex8_fu_25860_p1.read());
    } else {
        log_lik_particle_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_0_address1() {
    log_lik_particle_0_address1 = ap_reg_ppstg_log_lik_particle_0_addr_1_reg_32994_pp1_it157.read();
}

void particle_filter::thread_log_lik_particle_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read())))) {
        log_lik_particle_0_ce0 = ap_const_logic_1;
    } else {
        log_lik_particle_0_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_0_ce1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read())))) {
        log_lik_particle_0_ce1 = ap_const_logic_1;
    } else {
        log_lik_particle_0_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_0_d0() {
    if (ap_sig_bdd_57585.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())) {
            log_lik_particle_0_d0 = ap_reg_ppstg_likelihood_value_0_reg_34243_pp1_it156.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())) {
            log_lik_particle_0_d0 = ap_const_lv32_F149F2CA;
        } else {
            log_lik_particle_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        log_lik_particle_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_0_d1() {
    if (ap_sig_bdd_57587.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())) {
            log_lik_particle_0_d1 = ap_reg_ppstg_log_lik_particle_max_keep_1_reg_34252_pp1_it157.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())) {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read())))) {
        log_lik_particle_0_we0 = ap_const_logic_1;
    } else {
        log_lik_particle_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read())))) {
        log_lik_particle_0_we1 = ap_const_logic_1;
    } else {
        log_lik_particle_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_address0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())))) {
        log_lik_particle_1_address0 = ap_reg_ppstg_log_lik_particle_1_addr_1_reg_33000_pp1_it156.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
                esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read()))) {
        log_lik_particle_1_address0 =  (sc_lv<13>) (newIndex8_fu_25860_p1.read());
    } else {
        log_lik_particle_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_1_address1() {
    log_lik_particle_1_address1 = ap_reg_ppstg_log_lik_particle_1_addr_1_reg_33000_pp1_it157.read();
}

void particle_filter::thread_log_lik_particle_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it0.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg0_fsm_25, ap_CS_fsm.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())))) {
        log_lik_particle_1_ce0 = ap_const_logic_1;
    } else {
        log_lik_particle_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_ce1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())))) {
        log_lik_particle_1_ce1 = ap_const_logic_1;
    } else {
        log_lik_particle_1_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_d0() {
    if (ap_sig_bdd_57589.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())) {
            log_lik_particle_1_d0 = ap_reg_ppstg_likelihood_value_0_reg_34243_pp1_it156.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())) {
            log_lik_particle_1_d0 = ap_const_lv32_F149F2CA;
        } else {
            log_lik_particle_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        log_lik_particle_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_log_lik_particle_1_d1() {
    if (ap_sig_bdd_57591.read()) {
        if (!esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())) {
            log_lik_particle_1_d1 = ap_reg_ppstg_log_lik_particle_max_keep_1_reg_34252_pp1_it157.read();
        } else if (esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())) {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it156.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it156.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, grp_fu_20370_p2.read())))) {
        log_lik_particle_1_we0 = ap_const_logic_1;
    } else {
        log_lik_particle_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it158.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it157.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it157.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, tmp_258_1_reg_34264.read())))) {
        log_lik_particle_1_we1 = ap_const_logic_1;
    } else {
        log_lik_particle_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_log_lik_particle_load_0_phi_fu_25890_p3() {
    log_lik_particle_load_0_phi_fu_25890_p3 = (!icmp3_reg_34298.read()[0].is_01())? sc_lv<32>(): ((icmp3_reg_34298.read()[0].to_bool())? log_lik_particle_0_q0.read(): log_lik_particle_1_q0.read());
}

void particle_filter::thread_log_lik_particle_load_1_phi_fu_25897_p3() {
    log_lik_particle_load_1_phi_fu_25897_p3 = (!cond4_reg_34313.read()[0].is_01())? sc_lv<32>(): ((cond4_reg_34313.read()[0].to_bool())? log_lik_particle_0_q0.read(): log_lik_particle_1_q0.read());
}

void particle_filter::thread_log_lik_particle_max_keep_0_log_lik_particle_max_fu_25838_p3() {
    log_lik_particle_max_keep_0_log_lik_particle_max_fu_25838_p3 = (!tmp_209_fu_25832_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_209_fu_25832_p2.read()[0].to_bool())? log_lik_particle_max_keep_reg_34268.read(): f_assign_1_reg_2390.read());
}

void particle_filter::thread_log_lik_particle_max_keep_fu_25799_p3() {
    log_lik_particle_max_keep_fu_25799_p3 = (!grp_fu_20380_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20380_p2.read()[0].to_bool())? ap_reg_ppstg_likelihood_value_0_reg_34243_pp1_it156.read(): ap_reg_ppstg_log_lik_particle_max_keep_1_reg_34252_pp1_it156.read());
}

void particle_filter::thread_man_V_14_1_fu_28634_p3() {
    man_V_14_1_fu_28634_p3 = (!tmp_505_reg_35306.read()[0].is_01())? sc_lv<54>(): ((tmp_505_reg_35306.read()[0].to_bool())? man_V_8_1_fu_28628_p2.read(): p_Result_73_1_fu_28624_p1.read());
}

void particle_filter::thread_man_V_1_fu_26388_p2() {
    man_V_1_fu_26388_p2 = (!ap_const_lv54_0.is_01() || !p_Result_51_fu_26384_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_51_fu_26384_p1.read()));
}

void particle_filter::thread_man_V_3_fu_27213_p2() {
    man_V_3_fu_27213_p2 = (!ap_const_lv54_0.is_01() || !p_Result_52_fu_27209_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_52_fu_27209_p1.read()));
}

void particle_filter::thread_man_V_6_fu_27291_p3() {
    man_V_6_fu_27291_p3 = (!isneg_1_fu_27279_p3.read()[0].is_01())? sc_lv<54>(): ((isneg_1_fu_27279_p3.read()[0].to_bool())? man_V_3_reg_34801.read(): p_Result_52_reg_34796.read());
}

void particle_filter::thread_man_V_8_1_fu_28628_p2() {
    man_V_8_1_fu_28628_p2 = (!ap_const_lv54_0.is_01() || !p_Result_73_1_fu_28624_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_73_1_fu_28624_p1.read()));
}

void particle_filter::thread_man_V_8_fu_28468_p2() {
    man_V_8_fu_28468_p2 = (!ap_const_lv54_0.is_01() || !p_Result_5_fu_28464_p1.read().is_01())? sc_lv<54>(): (sc_bigint<54>(ap_const_lv54_0) - sc_biguint<54>(p_Result_5_fu_28464_p1.read()));
}

void particle_filter::thread_man_V_fu_26394_p3() {
    man_V_fu_26394_p3 = (!isneg_reg_34422.read()[0].is_01())? sc_lv<54>(): ((isneg_reg_34422.read()[0].to_bool())? man_V_1_fu_26388_p2.read(): p_Result_51_fu_26384_p1.read());
}

void particle_filter::thread_man_V_s_fu_28474_p3() {
    man_V_s_fu_28474_p3 = (!tmp_453_reg_35263.read()[0].is_01())? sc_lv<54>(): ((tmp_453_reg_35263.read()[0].to_bool())? man_V_8_fu_28468_p2.read(): p_Result_5_fu_28464_p1.read());
}

void particle_filter::thread_mask_i_cast_fu_30737_p1() {
    mask_i_cast_fu_30737_p1 = esl_zext<32,23>(mask_table9_q0.read());
}

void particle_filter::thread_mask_table9_address0() {
    mask_table9_address0 =  (sc_lv<5>) (tmp_40_i_fu_30732_p1.read());
}

void particle_filter::thread_mask_table9_ce0() {
    if (esl_seteq<1,8,8>(ap_ST_st340_fsm_101, ap_CS_fsm.read())) {
        mask_table9_ce0 = ap_const_logic_1;
    } else {
        mask_table9_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_n_V_0_1_fu_25177_p4() {
    n_V_0_1_fu_25177_p4 = p_Val2_35_fu_25170_p3.read().range(31, 23);
}

void particle_filter::thread_n_V_0_2_fu_25299_p4() {
    n_V_0_2_fu_25299_p4 = p_Val2_39_fu_25292_p3.read().range(31, 23);
}

void particle_filter::thread_n_V_0_3_fu_25421_p4() {
    n_V_0_3_fu_25421_p4 = p_Val2_41_fu_25414_p3.read().range(31, 23);
}

void particle_filter::thread_n_V_fu_25055_p4() {
    n_V_fu_25055_p4 = p_Val2_22_fu_25048_p3.read().range(31, 23);
}

void particle_filter::thread_n_minus_x_V_0_1_fu_25245_p2() {
    n_minus_x_V_0_1_fu_25245_p2 = (!n_V_0_1_fu_25177_p4.read().is_01() || !x_V_0_1_fu_25235_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_0_1_fu_25177_p4.read()) - sc_biguint<9>(x_V_0_1_fu_25235_p4.read()));
}

void particle_filter::thread_n_minus_x_V_0_2_fu_25367_p2() {
    n_minus_x_V_0_2_fu_25367_p2 = (!n_V_0_2_fu_25299_p4.read().is_01() || !x_V_0_2_fu_25357_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_0_2_fu_25299_p4.read()) - sc_biguint<9>(x_V_0_2_fu_25357_p4.read()));
}

void particle_filter::thread_n_minus_x_V_0_3_fu_25489_p2() {
    n_minus_x_V_0_3_fu_25489_p2 = (!n_V_0_3_fu_25421_p4.read().is_01() || !x_V_0_3_fu_25479_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_0_3_fu_25421_p4.read()) - sc_biguint<9>(x_V_0_3_fu_25479_p4.read()));
}

void particle_filter::thread_n_minus_x_V_fu_25123_p2() {
    n_minus_x_V_fu_25123_p2 = (!n_V_fu_25055_p4.read().is_01() || !x_V_fu_25113_p4.read().is_01())? sc_lv<9>(): (sc_bigint<9>(n_V_fu_25055_p4.read()) - sc_biguint<9>(x_V_fu_25113_p4.read()));
}

void particle_filter::thread_newIndex1_fu_30681_p1() {
    newIndex1_fu_30681_p1 = esl_zext<64,13>(tmp_530_reg_36154.read());
}

void particle_filter::thread_newIndex3_fu_21130_p1() {
    newIndex3_fu_21130_p1 = esl_zext<64,13>(tmp_102_fu_21126_p1.read());
}

void particle_filter::thread_newIndex4_fu_31020_p1() {
    newIndex4_fu_31020_p1 = esl_zext<64,13>(tmp_498_fu_31016_p1.read());
}

void particle_filter::thread_newIndex6_fu_24624_p1() {
    newIndex6_fu_24624_p1 = esl_zext<64,13>(ap_reg_ppstg_tmp_114_reg_32841_pp1_it38.read());
}

void particle_filter::thread_newIndex8_fu_25860_p1() {
    newIndex8_fu_25860_p1 = esl_zext<64,13>(tmp_142_fu_25856_p1.read());
}

void particle_filter::thread_newIndex9_fu_28316_p1() {
    newIndex9_fu_28316_p1 = esl_zext<64,13>(tmp_447_fu_28312_p1.read());
}

void particle_filter::thread_newIndex_fu_30572_p1() {
    newIndex_fu_30572_p1 = esl_zext<64,13>(tmp_502_fu_30568_p1.read());
}

void particle_filter::thread_newsignbit_0_not_i_fu_28172_p2() {
    newsignbit_0_not_i_fu_28172_p2 = (newsignbit_3_reg_35151.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_newsignbit_fu_26933_p3() {
    newsignbit_fu_26933_p3 = p_Val2_19_fu_26917_p3.read().range(27, 27);
}

void particle_filter::thread_not_i6_t_fu_25947_p2() {
    not_i6_t_fu_25947_p2 = (tmp_402_fu_25943_p1.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_notlhs_i_fu_30858_p2() {
    notlhs_i_fu_30858_p2 = (!loc_V_26_reg_36194.read().is_01() || !ap_const_lv23_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_26_reg_36194.read() != ap_const_lv23_0);
}

void particle_filter::thread_notrhs_i_fu_30863_p2() {
    notrhs_i_fu_30863_p2 = (!loc_V_25_reg_36186.read().is_01() || !ap_const_lv8_0.is_01())? sc_lv<1>(): sc_lv<1>(loc_V_25_reg_36186.read() != ap_const_lv8_0);
}

void particle_filter::thread_o_cast_fu_30603_p1() {
    o_cast_fu_30603_p1 = esl_sext<32,16>(o_fu_30596_p3.read());
}

void particle_filter::thread_o_fu_30596_p3() {
    o_fu_30596_p3 = (!icmp9_reg_36097.read()[0].is_01())? sc_lv<16>(): ((icmp9_reg_36097.read()[0].to_bool())? replication_factors_0_q0.read(): replication_factors_1_q0.read());
}

void particle_filter::thread_obs_parameters_fixed_address0() {
    obs_parameters_fixed_address0 = grp_fetch_data_parameters_fu_19626_obs_parameters_fixed_address0.read();
}

void particle_filter::thread_obs_parameters_fixed_ce0() {
    if (esl_seteq<1,8,8>(ap_ST_st16_fsm_12, ap_CS_fsm.read())) {
        obs_parameters_fixed_ce0 = grp_fetch_data_parameters_fu_19626_obs_parameters_fixed_ce0.read();
    } else {
        obs_parameters_fixed_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_or_cond91_i1_fu_26828_p2() {
    or_cond91_i1_fu_26828_p2 = (tmp_236_reg_34590.read() & rev1_reg_34584.read());
}

void particle_filter::thread_or_cond91_i2_1_fu_29448_p2() {
    or_cond91_i2_1_fu_29448_p2 = (tmp_526_1_reg_35631.read() & rev7_reg_35625.read());
}

void particle_filter::thread_or_cond91_i2_fu_29308_p2() {
    or_cond91_i2_fu_29308_p2 = (tmp_363_reg_35527.read() & rev5_reg_35521.read());
}

void particle_filter::thread_or_cond91_i_fu_27638_p2() {
    or_cond91_i_fu_27638_p2 = (tmp_307_reg_34932.read() & rev3_fu_27633_p2.read());
}

void particle_filter::thread_or_cond93_i1_fu_26838_p2() {
    or_cond93_i1_fu_26838_p2 = (tmp_236_reg_34590.read() & rev_reg_34571.read());
}

void particle_filter::thread_or_cond93_i2_1_fu_29458_p2() {
    or_cond93_i2_1_fu_29458_p2 = (tmp_526_1_reg_35631.read() & rev6_reg_35612.read());
}

void particle_filter::thread_or_cond93_i2_fu_29318_p2() {
    or_cond93_i2_fu_29318_p2 = (tmp_363_reg_35527.read() & rev4_reg_35508.read());
}

void particle_filter::thread_or_cond93_i_fu_27727_p2() {
    or_cond93_i_fu_27727_p2 = (tmp_307_reg_34932.read() & rev2_reg_34998.read());
}

void particle_filter::thread_or_cond_1_fu_25918_p2() {
    or_cond_1_fu_25918_p2 = (tmp_267_1_reg_34354.read() & grp_fu_20142_p2.read());
}

void particle_filter::thread_or_cond_fu_25904_p2() {
    or_cond_fu_25904_p2 = (tmp_154_reg_34339.read() & grp_fu_20142_p2.read());
}

void particle_filter::thread_overflow_1_fu_27887_p2() {
    overflow_1_fu_27887_p2 = (brmerge_i_fu_27877_p2.read() & tmp_315_fu_27882_p2.read());
}

void particle_filter::thread_overflow_2_fu_28166_p2() {
    overflow_2_fu_28166_p2 = (brmerge_i5_fu_28156_p2.read() & tmp_326_fu_28161_p2.read());
}

void particle_filter::thread_overflow_5_1_fu_29811_p2() {
    overflow_5_1_fu_29811_p2 = (brmerge_i2_1_fu_29801_p2.read() & tmp_538_1_fu_29806_p2.read());
}

void particle_filter::thread_overflow_5_fu_29741_p2() {
    overflow_5_fu_29741_p2 = (brmerge_i2_fu_29731_p2.read() & tmp_370_fu_29736_p2.read());
}

void particle_filter::thread_overflow_fu_27037_p2() {
    overflow_fu_27037_p2 = (brmerge_i1_fu_27027_p2.read() & tmp_244_fu_27032_p2.read());
}

void particle_filter::thread_p_10_fu_25665_p3() {
    p_10_fu_25665_p3 = (!ap_reg_ppstg_tmp_348_0_3_reg_33730_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_0_3_reg_33730_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_11_fu_30466_p3() {
    p_11_fu_30466_p3 = (!tmp_379_reg_36020.read()[0].is_01())? sc_lv<16>(): ((tmp_379_reg_36020.read()[0].to_bool())? p_Result_8_reg_36009.read(): ret_V_5_reg_36025.read());
}

void particle_filter::thread_p_12_fu_30471_p3() {
    p_12_fu_30471_p3 = (!tmp_489_reg_36015.read()[0].is_01())? sc_lv<16>(): ((tmp_489_reg_36015.read()[0].to_bool())? p_11_fu_30466_p3.read(): p_Result_8_reg_36009.read());
}

void particle_filter::thread_p_13_fu_25686_p3() {
    p_13_fu_25686_p3 = (!ap_reg_ppstg_tmp_340_1_reg_33777_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_reg_33777_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_14_fu_25679_p3() {
    p_14_fu_25679_p3 = (!ap_reg_ppstg_tmp_348_1_reg_33772_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_reg_33772_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_15_fu_25700_p3() {
    p_15_fu_25700_p3 = (!ap_reg_ppstg_tmp_340_1_1_reg_33819_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_1_reg_33819_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_16_fu_25693_p3() {
    p_16_fu_25693_p3 = (!ap_reg_ppstg_tmp_348_1_1_reg_33814_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_1_reg_33814_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_17_fu_25714_p3() {
    p_17_fu_25714_p3 = (!ap_reg_ppstg_tmp_340_1_2_reg_33861_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_2_reg_33861_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_18_fu_25707_p3() {
    p_18_fu_25707_p3 = (!ap_reg_ppstg_tmp_348_1_2_reg_33856_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_2_reg_33856_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_19_fu_25728_p3() {
    p_19_fu_25728_p3 = (!ap_reg_ppstg_tmp_340_1_3_reg_33903_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_1_3_reg_33903_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_1_161_fu_30484_p3() {
    p_1_161_fu_30484_p3 = (!tmp_580_1_reg_36042.read()[0].is_01())? sc_lv<16>(): ((tmp_580_1_reg_36042.read()[0].to_bool())? p_Result_53_1_reg_36030.read(): ret_V_5_1_fu_30479_p2.read());
}

void particle_filter::thread_p_1_1_162_fu_30490_p3() {
    p_1_1_162_fu_30490_p3 = (!tmp_527_reg_36037.read()[0].is_01())? sc_lv<16>(): ((tmp_527_reg_36037.read()[0].to_bool())? p_1_161_fu_30484_p3.read(): p_Result_53_1_reg_36030.read());
}

void particle_filter::thread_p_1_fu_25630_p3() {
    p_1_fu_25630_p3 = (!ap_reg_ppstg_tmp_339_reg_33609_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_339_reg_33609_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_1_i_0_1_phi_fu_2434_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_0_1_reg_33166_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_0_1_reg_33198_pp1_it97.read()))) {
        p_1_i_0_1_phi_fu_2434_p6 = p_0_1_reg_33313.read();
    } else {
        p_1_i_0_1_phi_fu_2434_p6 = ap_reg_phiprechg_p_1_i_0_1_reg_2429pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_0_2_phi_fu_2450_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_0_2_reg_33170_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_0_2_reg_33202_pp1_it97.read()))) {
        p_1_i_0_2_phi_fu_2450_p6 = p_0_2_reg_33318.read();
    } else {
        p_1_i_0_2_phi_fu_2450_p6 = ap_reg_phiprechg_p_1_i_0_2_reg_2445pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_0_3_phi_fu_2466_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_0_3_reg_33174_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_0_3_reg_33206_pp1_it97.read()))) {
        p_1_i_0_3_phi_fu_2466_p6 = p_0_3_reg_33323.read();
    } else {
        p_1_i_0_3_phi_fu_2466_p6 = ap_reg_phiprechg_p_1_i_0_3_reg_2461pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_1_phi_fu_2498_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_1_reg_33182_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_1_reg_33214_pp1_it97.read()))) {
        p_1_i_1_1_phi_fu_2498_p6 = p_1_1_reg_33333.read();
    } else {
        p_1_i_1_1_phi_fu_2498_p6 = ap_reg_phiprechg_p_1_i_1_1_reg_2493pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_2_phi_fu_2514_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_2_reg_33186_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_2_reg_33218_pp1_it97.read()))) {
        p_1_i_1_2_phi_fu_2514_p6 = p_1_2_reg_33338.read();
    } else {
        p_1_i_1_2_phi_fu_2514_p6 = ap_reg_phiprechg_p_1_i_1_2_reg_2509pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_3_phi_fu_2530_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_3_reg_33190_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_3_reg_33222_pp1_it97.read()))) {
        p_1_i_1_3_phi_fu_2530_p6 = p_1_3_reg_33343.read();
    } else {
        p_1_i_1_3_phi_fu_2530_p6 = ap_reg_phiprechg_p_1_i_1_3_reg_2525pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_1_phi_fu_2482_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_261_1_reg_33178_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_323_1_reg_33210_pp1_it97.read()))) {
        p_1_i_1_phi_fu_2482_p6 = p_1_140_reg_33328.read();
    } else {
        p_1_i_1_phi_fu_2482_p6 = ap_reg_phiprechg_p_1_i_1_reg_2477pp1_it98.read();
    }
}

void particle_filter::thread_p_1_i_phi_fu_2418_p6() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it98.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_284_reg_33162_pp1_it97.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_336_reg_33194_pp1_it97.read()))) {
        p_1_i_phi_fu_2418_p6 = p_reg_33308.read();
    } else {
        p_1_i_phi_fu_2418_p6 = ap_reg_phiprechg_p_1_i_reg_2413pp1_it98.read();
    }
}

void particle_filter::thread_p_20_fu_25721_p3() {
    p_20_fu_25721_p3 = (!ap_reg_ppstg_tmp_348_1_3_reg_33898_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_1_3_reg_33898_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_21_fu_28803_p3() {
    p_21_fu_28803_p3 = (!ap_reg_ppstg_tmp_453_reg_35263_pp4_it25.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_453_reg_35263_pp4_it25.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_2_fu_25623_p3() {
    p_2_fu_25623_p3 = (!ap_reg_ppstg_tmp_341_reg_33604_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_341_reg_33604_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_3_fu_30642_p3() {
    p_3_fu_30642_p3 = (!tmp_289_reg_36132.read()[0].is_01())? sc_lv<32>(): ((tmp_289_reg_36132.read()[0].to_bool())? ap_const_lv32_0: index_replicated_reg_36127.read());
}

void particle_filter::thread_p_4_fu_25644_p3() {
    p_4_fu_25644_p3 = (!ap_reg_ppstg_tmp_340_0_1_reg_33651_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_0_1_reg_33651_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_5_fu_26563_p3() {
    p_5_fu_26563_p3 = (!isneg_reg_34422.read()[0].is_01())? sc_lv<28>(): ((isneg_reg_34422.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_6_fu_27524_p3() {
    p_6_fu_27524_p3 = (!isneg_1_reg_34849.read()[0].is_01())? sc_lv<28>(): ((isneg_1_reg_34849.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_7_1_fu_29043_p3() {
    p_7_1_fu_29043_p3 = (!ap_reg_ppstg_tmp_505_reg_35306_pp4_it25.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_505_reg_35306_pp4_it25.read()[0].to_bool())? ap_const_lv28_FFFFFFF: ap_const_lv28_0);
}

void particle_filter::thread_p_7_fu_25637_p3() {
    p_7_fu_25637_p3 = (!ap_reg_ppstg_tmp_348_0_1_reg_33646_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_0_1_reg_33646_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_8_fu_25658_p3() {
    p_8_fu_25658_p3 = (!ap_reg_ppstg_tmp_340_0_2_reg_33693_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_0_2_reg_33693_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_95_i1_fu_26859_p2() {
    p_95_i1_fu_26859_p2 = (Range1_all_zeros_1_reg_34606.read() | rev_reg_34571.read());
}

void particle_filter::thread_p_95_i2_1_fu_29479_p2() {
    p_95_i2_1_fu_29479_p2 = (Range1_all_zeros_5_1_reg_35647.read() | rev6_reg_35612.read());
}

void particle_filter::thread_p_95_i2_fu_29339_p2() {
    p_95_i2_fu_29339_p2 = (Range1_all_zeros_5_reg_35543.read() | rev4_reg_35508.read());
}

void particle_filter::thread_p_95_i_fu_27745_p2() {
    p_95_i_fu_27745_p2 = (Range1_all_zeros_3_reg_34955.read() | rev2_reg_34998.read());
}

void particle_filter::thread_p_96_i1_fu_26907_p2() {
    p_96_i1_fu_26907_p2 = (tmp_400_reg_34617.read() | Range1_all_zeros_fu_26848_p2.read());
}

void particle_filter::thread_p_96_i2_1_fu_29521_p2() {
    p_96_i2_1_fu_29521_p2 = (tmp_519_reg_35658.read() | tmp_531_1_fu_29468_p2.read());
}

void particle_filter::thread_p_96_i2_fu_29387_p2() {
    p_96_i2_fu_29387_p2 = (tmp_481_reg_35554.read() | tmp_366_fu_29328_p2.read());
}

void particle_filter::thread_p_96_i_fu_27811_p2() {
    p_96_i_fu_27811_p2 = (tmp_419_reg_34960.read() | Range1_all_zeros_2_fu_27735_p2.read());
}

void particle_filter::thread_p_98_i1_fu_26854_p2() {
    p_98_i1_fu_26854_p2 = (tmp_238_reg_34601.read() & Range1_all_zeros_fu_26848_p2.read());
}

void particle_filter::thread_p_98_i2_1_fu_29474_p2() {
    p_98_i2_1_fu_29474_p2 = (tmp_530_1_reg_35642.read() & tmp_531_1_fu_29468_p2.read());
}

void particle_filter::thread_p_98_i2_fu_29334_p2() {
    p_98_i2_fu_29334_p2 = (tmp_365_reg_35538.read() & tmp_366_fu_29328_p2.read());
}

void particle_filter::thread_p_98_i_fu_27740_p2() {
    p_98_i_fu_27740_p2 = (tmp_309_reg_35018.read() & Range1_all_zeros_2_fu_27735_p2.read());
}

void particle_filter::thread_p_9_fu_25651_p3() {
    p_9_fu_25651_p3 = (!ap_reg_ppstg_tmp_348_0_2_reg_33688_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_348_0_2_reg_33688_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_p_Result_26_1_fu_28422_p4() {
    p_Result_26_1_fu_28422_p4 = ireg_V_2_1_fu_28406_p1.read().range(62, 52);
}

void particle_filter::thread_p_Result_35_1_fu_28725_p3() {
    p_Result_35_1_fu_28725_p3 = esl_sext<32,11>(tmp_500_1_fu_28713_p3.read());
}

void particle_filter::thread_p_Result_35_1_fu_28725_p4() {
    p_Result_35_1_fu_28725_p4 = (!ap_const_lv32_0.is_01() || !p_Result_35_1_fu_28725_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_35_1_fu_28725_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_14_1_fu_28634_p3.read().range(sc_biguint<32>(p_Result_35_1_fu_28725_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_3_fu_26485_p3() {
    p_Result_3_fu_26485_p3 = esl_sext<32,11>(tmp_222_fu_26473_p3.read());
}

void particle_filter::thread_p_Result_3_fu_26485_p4() {
    p_Result_3_fu_26485_p4 = (!ap_const_lv32_0.is_01() || !p_Result_3_fu_26485_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_3_fu_26485_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_fu_26394_p3.read().range(sc_biguint<32>(p_Result_3_fu_26485_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_43_fu_25010_p3() {
    p_Result_43_fu_25010_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_8_fu_25007_p1.read());
}

void particle_filter::thread_p_Result_44_fu_25068_p3() {
    p_Result_44_fu_25068_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_10_fu_25065_p1.read());
}

void particle_filter::thread_p_Result_45_fu_25132_p3() {
    p_Result_45_fu_25132_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_12_fu_25129_p1.read());
}

void particle_filter::thread_p_Result_46_fu_25190_p3() {
    p_Result_46_fu_25190_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_14_fu_25187_p1.read());
}

void particle_filter::thread_p_Result_47_fu_25254_p3() {
    p_Result_47_fu_25254_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_16_fu_25251_p1.read());
}

void particle_filter::thread_p_Result_48_fu_25312_p3() {
    p_Result_48_fu_25312_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_18_fu_25309_p1.read());
}

void particle_filter::thread_p_Result_49_fu_25376_p3() {
    p_Result_49_fu_25376_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_20_fu_25373_p1.read());
}

void particle_filter::thread_p_Result_4_fu_28376_p4() {
    p_Result_4_fu_28376_p4 = ireg_V_2_fu_28360_p1.read().range(62, 52);
}

void particle_filter::thread_p_Result_50_fu_25434_p3() {
    p_Result_50_fu_25434_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_22_fu_25431_p1.read());
}

void particle_filter::thread_p_Result_51_fu_26384_p1() {
    p_Result_51_fu_26384_p1 = esl_zext<54,53>(tmp_37_fu_26377_p3.read());
}

void particle_filter::thread_p_Result_52_fu_27209_p1() {
    p_Result_52_fu_27209_p1 = esl_zext<54,53>(tmp_43_fu_27201_p3.read());
}

void particle_filter::thread_p_Result_53_fu_30778_p3() {
    p_Result_53_fu_30778_p3 = esl_concat<1,31>(p_Result_s_166_reg_36177.read(), ap_const_lv31_0);
}

void particle_filter::thread_p_Result_55_fu_30810_p4() {
    p_Result_55_fu_30810_p4 = esl_concat<9,23>(esl_concat<1,8>(xs_sign_V_fu_30790_p2.read(), xs_exp_V_fu_30785_p3.read()), xs_sig_V_fu_30804_p2.read());
}

void particle_filter::thread_p_Result_56_fu_30944_p3() {
    p_Result_56_fu_30944_p3 = esl_concat<1,23>(ap_const_lv1_1, loc_V_30_reg_36240.read());
}

void particle_filter::thread_p_Result_5_fu_28464_p1() {
    p_Result_5_fu_28464_p1 = esl_zext<54,53>(tmp_48_fu_28457_p3.read());
}

void particle_filter::thread_p_Result_6_fu_27372_p3() {
    p_Result_6_fu_27372_p3 = esl_sext<32,11>(tmp_293_fu_27362_p3.read());
}

void particle_filter::thread_p_Result_6_fu_27372_p4() {
    p_Result_6_fu_27372_p4 = (!ap_const_lv32_0.is_01() || !p_Result_6_fu_27372_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_6_fu_27372_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_6_fu_27291_p3.read().range(sc_biguint<32>(p_Result_6_fu_27372_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_73_1_fu_28624_p1() {
    p_Result_73_1_fu_28624_p1 = esl_zext<54,53>(tmp_56_fu_28617_p3.read());
}

void particle_filter::thread_p_Result_7_fu_28565_p3() {
    p_Result_7_fu_28565_p3 = esl_sext<32,11>(tmp_346_fu_28553_p3.read());
}

void particle_filter::thread_p_Result_7_fu_28565_p4() {
    p_Result_7_fu_28565_p4 = (!ap_const_lv32_0.is_01() || !p_Result_7_fu_28565_p3.read().is_01())? sc_lv<54>(): ((sc_biguint<32>(p_Result_7_fu_28565_p3.read()).to_uint() >= 54 || sc_biguint<32>(ap_const_lv32_0).to_uint() >= 54)? sc_lv<54>():(man_V_s_fu_28474_p3.read().range(sc_biguint<32>(p_Result_7_fu_28565_p3.read()).to_uint(), sc_biguint<32>(ap_const_lv32_0).to_uint())));
}

void particle_filter::thread_p_Result_8_fu_30373_p4() {
    p_Result_8_fu_30373_p4 = p_Val2_26_fu_30365_p3.read().range(27, 12);
}

void particle_filter::thread_p_Val2_10_fu_28062_p3() {
    p_Val2_10_fu_28062_p3 = esl_concat<16,12>(tmp_350_reg_35127.read(), ap_const_lv12_0);
}

void particle_filter::thread_p_Val2_11_fu_28073_p2() {
    p_Val2_11_fu_28073_p2 = (!tmp_321_fu_28069_p1.read().is_01() || !ap_const_lv29_1000.is_01())? sc_lv<29>(): (sc_bigint<29>(tmp_321_fu_28069_p1.read()) + sc_biguint<29>(ap_const_lv29_1000));
}

void particle_filter::thread_p_Val2_12_fu_28086_p2() {
    p_Val2_12_fu_28086_p2 = (!tmp_322_fu_28079_p1.read().is_01() || !tmp_323_fu_28083_p1.read().is_01())? sc_lv<30>(): (sc_bigint<30>(tmp_322_fu_28079_p1.read()) - sc_biguint<30>(tmp_323_fu_28083_p1.read()));
}

void particle_filter::thread_p_Val2_13_mux_fu_27074_p3() {
    p_Val2_13_mux_fu_27074_p3 = (!brmerge_i_i1_fu_27066_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i1_fu_27066_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_19_reg_34681.read());
}

void particle_filter::thread_p_Val2_14_fu_28125_p1() {
    p_Val2_14_fu_28125_p1 = esl_sext<29,28>(p_Val2_6_reg_35120.read());
}

void particle_filter::thread_p_Val2_14_fu_28125_p2() {
    p_Val2_14_fu_28125_p2 = (!ap_const_lv29_0.is_01() || !p_Val2_14_fu_28125_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(ap_const_lv29_0) - sc_biguint<29>(p_Val2_14_fu_28125_p1.read()));
}

void particle_filter::thread_p_Val2_16_fu_30114_p3() {
    p_Val2_16_fu_30114_p3 = (!brmerge4_reg_35909.read()[0].is_01())? sc_lv<28>(): ((brmerge4_reg_35909.read()[0].to_bool())? p_Val2_33_mux_fu_30102_p3.read(): p_Val2_6_157_fu_30108_p3.read());
}

void particle_filter::thread_p_Val2_17_fu_26583_p3() {
    p_Val2_17_fu_26583_p3 = (!tmp_205_fu_26540_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_205_fu_26540_p2.read()[0].to_bool())? tmp_368_fu_26559_p1.read(): p_5_fu_26563_p3.read());
}

void particle_filter::thread_p_Val2_18_fu_26780_p2() {
    p_Val2_18_fu_26780_p2 = (!p_Val2_17_reg_34523.read().is_01() || !tmp_224_fu_26776_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_17_reg_34523.read()) + sc_biguint<28>(tmp_224_fu_26776_p1.read()));
}

void particle_filter::thread_p_Val2_19_fu_26917_p3() {
    p_Val2_19_fu_26917_p3 = (!sel_tmp25_reg_34550.read()[0].is_01())? sc_lv<28>(): ((sel_tmp25_reg_34550.read()[0].to_bool())? tmp_374_reg_34518.read(): sel_tmp23_fu_26912_p3.read());
}

void particle_filter::thread_p_Val2_1_153_fu_28823_p3() {
    p_Val2_1_153_fu_28823_p3 = (!tmp_283_fu_28780_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_283_fu_28780_p2.read()[0].to_bool())? tmp_459_fu_28799_p1.read(): p_21_fu_28803_p3.read());
}

void particle_filter::thread_p_Val2_1_fu_27164_p3() {
    p_Val2_1_fu_27164_p3 = (!tmp_248_reg_34764.read()[0].is_01())? sc_lv<28>(): ((tmp_248_reg_34764.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_Val2_20_fu_27543_p3() {
    p_Val2_20_fu_27543_p3 = (!tmp_255_reg_34875.read()[0].is_01())? sc_lv<28>(): ((tmp_255_reg_34875.read()[0].to_bool())? tmp_406_reg_34880.read(): p_6_fu_27524_p3.read());
}

void particle_filter::thread_p_Val2_21_fu_30129_p2() {
    p_Val2_21_fu_30129_p2 = (!ap_const_lv13_1000.is_01() || !tmp_374_cast_fu_30125_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1000) - sc_biguint<13>(tmp_374_cast_fu_30125_p1.read()));
}

void particle_filter::thread_p_Val2_22_fu_25048_p3() {
    p_Val2_22_fu_25048_p3 = (!isNeg_reg_33348.read()[0].is_01())? sc_lv<62>(): ((isNeg_reg_33348.read()[0].to_bool())? tmp_81_i_i_cast_fu_25038_p1.read(): tmp_83_i_i_fu_25042_p2.read());
}

void particle_filter::thread_p_Val2_22_mux_fu_27928_p3() {
    p_Val2_22_mux_fu_27928_p3 = (!brmerge_i_i_fu_27908_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i_fu_27908_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_30_reg_35034.read());
}

void particle_filter::thread_p_Val2_23_1_fu_29063_p3() {
    p_Val2_23_1_fu_29063_p3 = (!tmp_461_1_fu_29020_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_461_1_fu_29020_p2.read()[0].to_bool())? tmp_508_fu_29039_p1.read(): p_7_1_fu_29043_p3.read());
}

void particle_filter::thread_p_Val2_23_fu_30208_p3() {
    p_Val2_23_fu_30208_p3 = esl_concat<16,12>(tmp_396_reg_35946.read(), ap_const_lv12_0);
}

void particle_filter::thread_p_Val2_24_1_fu_29400_p2() {
    p_Val2_24_1_fu_29400_p2 = (!p_Val2_23_1_reg_35564.read().is_01() || !tmp_503_1_fu_29396_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_23_1_reg_35564.read()) + sc_biguint<28>(tmp_503_1_fu_29396_p1.read()));
}

void particle_filter::thread_p_Val2_24_fu_30219_p2() {
    p_Val2_24_fu_30219_p2 = (!tmp_376_fu_30215_p1.read().is_01() || !ap_const_lv29_1000.is_01())? sc_lv<29>(): (sc_bigint<29>(tmp_376_fu_30215_p1.read()) + sc_biguint<29>(ap_const_lv29_1000));
}

void particle_filter::thread_p_Val2_25_1_160_fu_29923_p3() {
    p_Val2_25_1_160_fu_29923_p3 = (!ap_reg_ppstg_tmp_429_1_reg_35327_pp4_it29.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_429_1_reg_35327_pp4_it29.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_Val2_25_1_fu_29621_p3() {
    p_Val2_25_1_fu_29621_p3 = (!ap_reg_ppstg_sel_tmp86_reg_35591_pp4_it27.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_sel_tmp86_reg_35591_pp4_it27.read()[0].to_bool())? ap_reg_ppstg_tmp_509_reg_35559_pp4_it27.read(): sel_tmp84_fu_29616_p3.read());
}

void particle_filter::thread_p_Val2_25_mux_1_fu_29916_p3() {
    p_Val2_25_mux_1_fu_29916_p3 = (!brmerge_i_i2_1_fu_29908_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i2_1_fu_29908_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: ap_reg_ppstg_p_Val2_25_1_reg_35814_pp4_it29.read());
}

void particle_filter::thread_p_Val2_25_mux_fu_29849_p3() {
    p_Val2_25_mux_fu_29849_p3 = (!brmerge_i_i2_reg_35852.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i2_reg_35852.read()[0].to_bool())? ap_const_lv28_7FFFFFF: ap_reg_ppstg_p_Val2_2_155_reg_35781_pp4_it29.read());
}

void particle_filter::thread_p_Val2_26_fu_30365_p3() {
    p_Val2_26_fu_30365_p3 = (!sel_tmp76_fu_30361_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp76_fu_30361_p2.read()[0].to_bool())? p_Val2_52_mux_fu_30342_p3.read(): sel_tmp75_fu_30354_p3.read());
}

void particle_filter::thread_p_Val2_27_fu_27570_p2() {
    p_Val2_27_fu_27570_p2 = (!p_Val2_20_fu_27543_p3.read().is_01() || !tmp_295_fu_27566_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_20_fu_27543_p3.read()) + sc_biguint<28>(tmp_295_fu_27566_p1.read()));
}

void particle_filter::thread_p_Val2_29_fu_25106_p3() {
    p_Val2_29_fu_25106_p3 = (!isNeg_4_reg_33359.read()[0].is_01())? sc_lv<62>(): ((isNeg_4_reg_33359.read()[0].to_bool())? tmp_81_i_i320_cast_fu_25096_p1.read(): tmp_83_i_i1_fu_25100_p2.read());
}

void particle_filter::thread_p_Val2_29_mux_fu_28025_p3() {
    p_Val2_29_mux_fu_28025_p3 = (!brmerge_i_i3_fu_28011_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i3_fu_28011_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_45_reg_35107.read());
}

void particle_filter::thread_p_Val2_2_155_fu_29531_p3() {
    p_Val2_2_155_fu_29531_p3 = (!ap_reg_ppstg_sel_tmp63_reg_35487_pp4_it27.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_sel_tmp63_reg_35487_pp4_it27.read()[0].to_bool())? ap_reg_ppstg_tmp_461_reg_35455_pp4_it27.read(): sel_tmp61_fu_29526_p3.read());
}

void particle_filter::thread_p_Val2_2_fu_28032_p3() {
    p_Val2_2_fu_28032_p3 = (!underflow_2_fu_28006_p2.read()[0].is_01())? sc_lv<28>(): ((underflow_2_fu_28006_p2.read()[0].to_bool())? ap_const_lv28_8000000: p_Val2_45_reg_35107.read());
}

void particle_filter::thread_p_Val2_30_1_fu_29968_p3() {
    p_Val2_30_1_fu_29968_p3 = (!sel_tmp97_fu_29963_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp97_fu_29963_p2.read()[0].to_bool())? p_Val2_25_mux_1_fu_29916_p3.read(): sel_tmp95_fu_29945_p3.read());
}

void particle_filter::thread_p_Val2_30_fu_27698_p3() {
    p_Val2_30_fu_27698_p3 = (!sel_tmp14_reg_34895.read()[0].is_01())? sc_lv<28>(): ((sel_tmp14_reg_34895.read()[0].to_bool())? tmp_407_reg_34965.read(): sel_tmp10_fu_27692_p3.read());
}

void particle_filter::thread_p_Val2_31_fu_30741_p2() {
    p_Val2_31_fu_30741_p2 = (!t_V_1_reg_36172.read().is_01() || !mask_i_cast_fu_30737_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(t_V_1_reg_36172.read()) + sc_biguint<32>(mask_i_cast_fu_30737_p1.read()));
}

void particle_filter::thread_p_Val2_32_1_fu_30046_p0() {
    p_Val2_32_1_fu_30046_p0 = esl_sext<29,28>(p_Val2_30_1_reg_35888.read());
}

void particle_filter::thread_p_Val2_32_1_fu_30046_p1() {
    p_Val2_32_1_fu_30046_p1 = esl_sext<29,28>(U_V_1_3_phi_fu_19405_p4.read());
}

void particle_filter::thread_p_Val2_32_1_fu_30046_p2() {
    p_Val2_32_1_fu_30046_p2 = (!p_Val2_32_1_fu_30046_p0.read().is_01() || !p_Val2_32_1_fu_30046_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(p_Val2_32_1_fu_30046_p0.read()) - sc_biguint<29>(p_Val2_32_1_fu_30046_p1.read()));
}

void particle_filter::thread_p_Val2_33_1_fu_30161_p3() {
    p_Val2_33_1_fu_30161_p3 = (!underflow_6_1_reg_35920.read()[0].is_01())? sc_lv<28>(): ((underflow_6_1_reg_35920.read()[0].to_bool())? ap_const_lv28_8000000: tmp_521_reg_35914.read());
}

void particle_filter::thread_p_Val2_33_fu_30981_p3() {
    p_Val2_33_fu_30981_p3 = (!isNeg_5_reg_36245.read()[0].is_01())? sc_lv<78>(): ((isNeg_5_reg_36245.read()[0].to_bool())? tmp_89_i_i_cast_fu_30971_p1.read(): tmp_91_i_i_fu_30975_p2.read());
}

void particle_filter::thread_p_Val2_33_mux_1_fu_30155_p3() {
    p_Val2_33_mux_1_fu_30155_p3 = (!brmerge_i_i4_1_reg_35925.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i4_1_reg_35925.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_521_reg_35914.read());
}

void particle_filter::thread_p_Val2_33_mux_fu_30102_p3() {
    p_Val2_33_mux_fu_30102_p3 = (!brmerge_i_i4_reg_35904.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i4_reg_35904.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_483_reg_35893.read());
}

void particle_filter::thread_p_Val2_35_fu_25170_p3() {
    p_Val2_35_fu_25170_p3 = (!isNeg_6_reg_33374.read()[0].is_01())? sc_lv<62>(): ((isNeg_6_reg_33374.read()[0].to_bool())? tmp_81_i_i336_cast_fu_25160_p1.read(): tmp_83_i_i2_fu_25164_p2.read());
}

void particle_filter::thread_p_Val2_36_fu_25228_p3() {
    p_Val2_36_fu_25228_p3 = (!isNeg_7_reg_33385.read()[0].is_01())? sc_lv<62>(): ((isNeg_7_reg_33385.read()[0].to_bool())? tmp_81_i_i352_cast_fu_25218_p1.read(): tmp_83_i_i3_fu_25222_p2.read());
}

void particle_filter::thread_p_Val2_39_fu_25292_p3() {
    p_Val2_39_fu_25292_p3 = (!isNeg_8_reg_33400.read()[0].is_01())? sc_lv<62>(): ((isNeg_8_reg_33400.read()[0].to_bool())? tmp_81_i_i368_cast_fu_25282_p1.read(): tmp_83_i_i4_fu_25286_p2.read());
}

void particle_filter::thread_p_Val2_3_150_fu_28271_p3() {
    p_Val2_3_150_fu_28271_p3 = (!underflow_3_reg_35189.read()[0].is_01())? sc_lv<28>(): ((underflow_3_reg_35189.read()[0].to_bool())? ap_const_lv28_8000000: p_Val2_46_reg_35145.read());
}

void particle_filter::thread_p_Val2_3_fu_27966_p3() {
    p_Val2_3_fu_27966_p3 = (!sel_tmp47_fu_27962_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp47_fu_27962_p2.read()[0].to_bool())? p_Val2_22_mux_reg_35085.read(): sel_tmp46_reg_35090.read());
}

void particle_filter::thread_p_Val2_40_fu_25350_p3() {
    p_Val2_40_fu_25350_p3 = (!isNeg_9_reg_33411.read()[0].is_01())? sc_lv<62>(): ((isNeg_9_reg_33411.read()[0].to_bool())? tmp_81_i_i384_cast_fu_25340_p1.read(): tmp_83_i_i5_fu_25344_p2.read());
}

void particle_filter::thread_p_Val2_40_mux_fu_28264_p3() {
    p_Val2_40_mux_fu_28264_p3 = (!brmerge_i_i5_fu_28250_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i5_fu_28250_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_46_reg_35145.read());
}

void particle_filter::thread_p_Val2_41_fu_25414_p3() {
    p_Val2_41_fu_25414_p3 = (!isNeg_10_reg_33426.read()[0].is_01())? sc_lv<62>(): ((isNeg_10_reg_33426.read()[0].to_bool())? tmp_81_i_i400_cast_fu_25404_p1.read(): tmp_83_i_i6_fu_25408_p2.read());
}

void particle_filter::thread_p_Val2_42_fu_25472_p3() {
    p_Val2_42_fu_25472_p3 = (!isNeg_11_reg_33437.read()[0].is_01())? sc_lv<62>(): ((isNeg_11_reg_33437.read()[0].to_bool())? tmp_81_i_i416_cast_fu_25462_p1.read(): tmp_83_i_i7_fu_25466_p2.read());
}

void particle_filter::thread_p_Val2_42_mux_fu_28217_p3() {
    p_Val2_42_mux_fu_28217_p3 = (!brmerge_i_i6_fu_28203_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i6_fu_28203_p2.read()[0].to_bool())? ap_const_lv28_7FFFFFF: p_Val2_47_reg_35170.read());
}

void particle_filter::thread_p_Val2_43_1_fu_30167_p3() {
    p_Val2_43_1_fu_30167_p3 = (!brmerge13_1_reg_35930.read()[0].is_01())? sc_lv<28>(): ((brmerge13_1_reg_35930.read()[0].to_bool())? p_Val2_33_mux_1_fu_30155_p3.read(): p_Val2_33_1_fu_30161_p3.read());
}

void particle_filter::thread_p_Val2_45_fu_27989_p1() {
    p_Val2_45_fu_27989_p1 = p_Val2_4_fu_27976_p2.read().range(28-1, 0);
}

void particle_filter::thread_p_Val2_46_fu_28100_p1() {
    p_Val2_46_fu_28100_p1 = p_Val2_12_fu_28086_p2.read().range(28-1, 0);
}

void particle_filter::thread_p_Val2_47_fu_28139_p1() {
    p_Val2_47_fu_28139_p1 = p_Val2_14_fu_28125_p2.read().range(28-1, 0);
}

void particle_filter::thread_p_Val2_48_fu_21623_p1() {
    p_Val2_48_fu_21623_p1 = x_assign_reg_32744.read();
}

void particle_filter::thread_p_Val2_49_1_fu_30182_p2() {
    p_Val2_49_1_fu_30182_p2 = (!ap_const_lv13_1000.is_01() || !tmp_569_1_cast_fu_30178_p1.read().is_01())? sc_lv<13>(): (sc_bigint<13>(ap_const_lv13_1000) - sc_biguint<13>(tmp_569_1_cast_fu_30178_p1.read()));
}

void particle_filter::thread_p_Val2_4_151_fu_28224_p3() {
    p_Val2_4_151_fu_28224_p3 = (!underflow_4_fu_28198_p2.read()[0].is_01())? sc_lv<28>(): ((underflow_4_fu_28198_p2.read()[0].to_bool())? ap_const_lv28_8000000: p_Val2_47_reg_35170.read());
}

void particle_filter::thread_p_Val2_4_fu_27976_p0() {
    p_Val2_4_fu_27976_p0 = esl_sext<29,28>(p_Val2_3_fu_27966_p3.read());
}

void particle_filter::thread_p_Val2_4_fu_27976_p2() {
    p_Val2_4_fu_27976_p2 = (!p_Val2_4_fu_27976_p0.read().is_01() || !tmp_317_reg_34782.read().is_01())? sc_lv<29>(): (sc_bigint<29>(p_Val2_4_fu_27976_p0.read()) - sc_biguint<29>(tmp_317_reg_34782.read()));
}

void particle_filter::thread_p_Val2_50_1_fu_30275_p3() {
    p_Val2_50_1_fu_30275_p3 = esl_concat<16,12>(tmp_398_reg_35962.read(), ap_const_lv12_0);
}

void particle_filter::thread_p_Val2_51_1_fu_30286_p2() {
    p_Val2_51_1_fu_30286_p2 = (!tmp_572_1_fu_30282_p1.read().is_01() || !ap_const_lv29_1000.is_01())? sc_lv<29>(): (sc_bigint<29>(tmp_572_1_fu_30282_p1.read()) + sc_biguint<29>(ap_const_lv29_1000));
}

void particle_filter::thread_p_Val2_52_1_fu_30413_p3() {
    p_Val2_52_1_fu_30413_p3 = (!underflow_8_1_reg_35994.read()[0].is_01())? sc_lv<28>(): ((underflow_8_1_reg_35994.read()[0].to_bool())? ap_const_lv28_8000000: tmp_525_reg_35988.read());
}

void particle_filter::thread_p_Val2_52_fu_21626_p1() {
    p_Val2_52_fu_21626_p1 = x_assign_7_reg_32764.read();
}

void particle_filter::thread_p_Val2_52_mux_1_fu_30407_p3() {
    p_Val2_52_mux_1_fu_30407_p3 = (!brmerge_i_i8_1_reg_35999.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i8_1_reg_35999.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_525_reg_35988.read());
}

void particle_filter::thread_p_Val2_52_mux_fu_30342_p3() {
    p_Val2_52_mux_fu_30342_p3 = (!brmerge_i_i8_reg_35978.read()[0].is_01())? sc_lv<28>(): ((brmerge_i_i8_reg_35978.read()[0].to_bool())? ap_const_lv28_7FFFFFF: tmp_487_reg_35967.read());
}

void particle_filter::thread_p_Val2_53_1_fu_30430_p3() {
    p_Val2_53_1_fu_30430_p3 = (!sel_tmp99_fu_30426_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp99_fu_30426_p2.read()[0].to_bool())? p_Val2_52_mux_1_fu_30407_p3.read(): sel_tmp98_fu_30419_p3.read());
}

void particle_filter::thread_p_Val2_5_fu_29855_p3() {
    p_Val2_5_fu_29855_p3 = (!ap_reg_ppstg_tmp_261_reg_35284_pp4_it29.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_261_reg_35284_pp4_it29.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_Val2_64_fu_30886_p3() {
    p_Val2_64_fu_30886_p3 = (!sel_tmp9_i_fu_30879_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp9_i_fu_30879_p2.read()[0].to_bool())? ap_const_lv32_BF800000: tmp_87_fu_30883_p1.read());
}

void particle_filter::thread_p_Val2_68_fu_21629_p1() {
    p_Val2_68_fu_21629_p1 = x_assign_8_reg_32749.read();
}

void particle_filter::thread_p_Val2_6_157_fu_30108_p3() {
    p_Val2_6_157_fu_30108_p3 = (!underflow_6_reg_35899.read()[0].is_01())? sc_lv<28>(): ((underflow_6_reg_35899.read()[0].to_bool())? ap_const_lv28_8000000: tmp_483_reg_35893.read());
}

void particle_filter::thread_p_Val2_6_fu_28039_p3() {
    p_Val2_6_fu_28039_p3 = (!brmerge9_fu_28020_p2.read()[0].is_01())? sc_lv<28>(): ((brmerge9_fu_28020_p2.read()[0].to_bool())? p_Val2_29_mux_fu_28025_p3.read(): p_Val2_2_fu_28032_p3.read());
}

void particle_filter::thread_p_Val2_71_fu_21632_p1() {
    p_Val2_71_fu_21632_p1 = x_assign_9_reg_32769.read();
}

void particle_filter::thread_p_Val2_74_fu_21635_p1() {
    p_Val2_74_fu_21635_p1 = x_assign_s_reg_32754.read();
}

void particle_filter::thread_p_Val2_77_fu_21638_p1() {
    p_Val2_77_fu_21638_p1 = x_assign_2_reg_32774.read();
}

void particle_filter::thread_p_Val2_7_fu_29900_p3() {
    p_Val2_7_fu_29900_p3 = (!sel_tmp74_fu_29895_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp74_fu_29895_p2.read()[0].to_bool())? p_Val2_25_mux_fu_29849_p3.read(): sel_tmp72_fu_29877_p3.read());
}

void particle_filter::thread_p_Val2_82_fu_21641_p1() {
    p_Val2_82_fu_21641_p1 = x_assign_1_reg_32759.read();
}

void particle_filter::thread_p_Val2_85_fu_21644_p1() {
    p_Val2_85_fu_21644_p1 = x_assign_3_reg_32779.read();
}

void particle_filter::thread_p_Val2_88_fu_25805_p1() {
    p_Val2_88_fu_25805_p1 = log_lik_particle_max_keep_reg_34268.read();
}

void particle_filter::thread_p_Val2_89_fu_25818_p1() {
    p_Val2_89_fu_25818_p1 = f_assign_1_reg_2390.read();
}

void particle_filter::thread_p_Val2_8_158_fu_30348_p3() {
    p_Val2_8_158_fu_30348_p3 = (!underflow_8_reg_35973.read()[0].is_01())? sc_lv<28>(): ((underflow_8_reg_35973.read()[0].to_bool())? ap_const_lv28_8000000: tmp_487_reg_35967.read());
}

void particle_filter::thread_p_Val2_8_fu_29983_p0() {
    p_Val2_8_fu_29983_p0 = esl_sext<29,28>(p_Val2_7_reg_35883.read());
}

void particle_filter::thread_p_Val2_8_fu_29983_p1() {
    p_Val2_8_fu_29983_p1 = esl_sext<29,28>(U_V_phi_fu_19395_p4.read());
}

void particle_filter::thread_p_Val2_8_fu_29983_p2() {
    p_Val2_8_fu_29983_p2 = (!p_Val2_8_fu_29983_p0.read().is_01() || !p_Val2_8_fu_29983_p1.read().is_01())? sc_lv<29>(): (sc_bigint<29>(p_Val2_8_fu_29983_p0.read()) - sc_biguint<29>(p_Val2_8_fu_29983_p1.read()));
}

void particle_filter::thread_p_Val2_s_154_fu_29260_p2() {
    p_Val2_s_154_fu_29260_p2 = (!p_Val2_1_153_reg_35460.read().is_01() || !tmp_348_fu_29256_p1.read().is_01())? sc_lv<28>(): (sc_bigint<28>(p_Val2_1_153_reg_35460.read()) + sc_biguint<28>(tmp_348_fu_29256_p1.read()));
}

void particle_filter::thread_p_Val2_s_fu_27081_p3() {
    p_Val2_s_fu_27081_p3 = (!tmp_199_reg_34443.read()[0].is_01())? sc_lv<28>(): ((tmp_199_reg_34443.read()[0].to_bool())? ap_const_lv28_0: ap_const_lv28_8000000);
}

void particle_filter::thread_p_block_replicated_2_fu_30635_p3() {
    p_block_replicated_2_fu_30635_p3 = (!tmp_289_reg_36132.read()[0].is_01())? sc_lv<32>(): ((tmp_289_reg_36132.read()[0].to_bool())? block_replicated_fu_30629_p2.read(): block_replicated_2_phi_fu_19497_p4.read());
}

void particle_filter::thread_p_not38_i_fu_28177_p2() {
    p_not38_i_fu_28177_p2 = (!p_Result_s_reg_35157.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_reg_35157.read() != ap_const_lv2_3);
}

void particle_filter::thread_p_not_i_fu_28151_p2() {
    p_not_i_fu_28151_p2 = (!p_Result_s_reg_35157.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_s_reg_35157.read() != ap_const_lv2_0);
}

void particle_filter::thread_p_r_i_i1_fu_26615_p2() {
    p_r_i_i1_fu_26615_p2 = (qb_reg_34491.read() | r_fu_26601_p2.read());
}

void particle_filter::thread_p_r_i_i2_1_fu_29095_p2() {
    p_r_i_i2_1_fu_29095_p2 = (qb_2_1_reg_35428.read() | r_2_1_fu_29081_p2.read());
}

void particle_filter::thread_p_r_i_i2_fu_28855_p2() {
    p_r_i_i2_fu_28855_p2 = (qb_2_reg_35375.read() | r_2_fu_28841_p2.read());
}

void particle_filter::thread_p_r_i_i_fu_27557_p2() {
    p_r_i_i_fu_27557_p2 = (qb_1_reg_34885.read() | r_1_reg_34890.read());
}

void particle_filter::thread_p_s_fu_25672_p3() {
    p_s_fu_25672_p3 = (!ap_reg_ppstg_tmp_340_0_3_reg_33735_pp1_it134.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_tmp_340_0_3_reg_33735_pp1_it134.read()[0].to_bool())? ap_const_lv32_0: ap_const_lv32_F149F2CA);
}

void particle_filter::thread_particles_0_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()))) {
        particles_0_address0 = ap_reg_ppstg_particles_0_addr_reg_32982_pp1_it48.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        particles_0_address0 = particles_0_addr_1_reg_36103.read();
    } else {
        particles_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_0_address1() {
    particles_0_address1 = ap_reg_ppstg_particles_0_addr_reg_32982_pp1_it49.read();
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
    particles_0_d0 = reg_20803.read();
}

void particle_filter::thread_particles_0_d1() {
    particles_0_d1 = ap_reg_ppstg_particle_common_1_reg_33076_pp1_it49.read();
}

void particle_filter::thread_particles_0_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it48.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it48.read())))) {
        particles_0_we0 = ap_const_logic_1;
    } else {
        particles_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it50.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it49.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it49.read())))) {
        particles_0_we1 = ap_const_logic_1;
    } else {
        particles_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_1_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()))) {
        particles_1_address0 = ap_reg_ppstg_particles_1_addr_reg_32988_pp1_it48.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it0.read()))) {
        particles_1_address0 = particles_1_addr_1_reg_36108.read();
    } else {
        particles_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_1_address1() {
    particles_1_address1 = ap_reg_ppstg_particles_1_addr_reg_32988_pp1_it49.read();
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
    particles_1_d0 = reg_20803.read();
}

void particle_filter::thread_particles_1_d1() {
    particles_1_d1 = ap_reg_ppstg_particle_common_1_reg_33076_pp1_it49.read();
}

void particle_filter::thread_particles_1_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it49.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it48.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp2_reg_32856_pp1_it48.read())))) {
        particles_1_we0 = ap_const_logic_1;
    } else {
        particles_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it50.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it49.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond_reg_32871_pp1_it49.read())))) {
        particles_1_we1 = ap_const_logic_1;
    } else {
        particles_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_load_0_phi_fu_30654_p3() {
    particles_load_0_phi_fu_30654_p3 = (!icmp9_reg_36097.read()[0].is_01())? sc_lv<32>(): ((icmp9_reg_36097.read()[0].to_bool())? particles_0_q0.read(): particles_1_q0.read());
}

void particle_filter::thread_particles_saved_out_address0() {
    if (esl_seteq<1,8,8>(ap_ST_st382_fsm_143, ap_CS_fsm.read())) {
        particles_saved_out_address0 =  (sc_lv<15>) (sum3_cast_fu_31054_p1.read());
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
        particles_saved_out_d0 = particles_temp_load_1_0_phi_reg_36287.read();
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
        particles_temp_0_address0 =  (sc_lv<13>) (newIndex1_fu_30681_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()))) {
        particles_temp_0_address0 = ap_reg_ppstg_particles_temp_0_addr_1_reg_32082_pp0_it1.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st13_fsm_9, ap_CS_fsm.read())) {
        particles_temp_0_address0 =  (sc_lv<13>) (ap_const_lv64_0);
    } else {
        particles_temp_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_0_address1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()))) {
        particles_temp_0_address1 = ap_reg_ppstg_particles_temp_0_addr_1_reg_32082_pp0_it2.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st380_fsm_141, ap_CS_fsm.read())) {
        particles_temp_0_address1 =  (sc_lv<13>) (newIndex4_fu_31020_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it39.read()))) {
        particles_temp_0_address1 =  (sc_lv<13>) (newIndex6_fu_24624_p1.read());
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
        particles_temp_0_d0 = particles_load_0_phi_reg_36148.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()))) {
        particles_temp_0_d0 = init_particles_load_0_phi_reg_32099.read();
    } else {
        particles_temp_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_0_d1() {
    particles_temp_0_d1 = ap_reg_ppstg_init_particles_load_1_phi_reg_32105_pp0_it2.read();
}

void particle_filter::thread_particles_temp_0_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32058_pp0_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_32077_pp0_it1.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond10_reg_36118_pp5_it1.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, icmp11_fu_30686_p2.read())))) {
        particles_temp_0_we0 = ap_const_logic_1;
    } else {
        particles_temp_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32058_pp0_it2.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond1_reg_32094_pp0_it2.read())))) {
        particles_temp_0_we1 = ap_const_logic_1;
    } else {
        particles_temp_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_1_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()))) {
        particles_temp_1_address0 = ap_reg_ppstg_particles_temp_1_addr_reg_32088_pp0_it1.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st380_fsm_141, ap_CS_fsm.read())) {
        particles_temp_1_address0 =  (sc_lv<13>) (newIndex4_fu_31020_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it39.read()))) {
        particles_temp_1_address0 =  (sc_lv<13>) (newIndex6_fu_24624_p1.read());
    } else {
        particles_temp_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_1_address1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()))) {
        particles_temp_1_address1 =  (sc_lv<13>) (newIndex1_fu_30681_p1.read());
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()))) {
        particles_temp_1_address1 = ap_reg_ppstg_particles_temp_1_addr_reg_32088_pp0_it2.read();
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
    particles_temp_1_d0 = init_particles_load_0_phi_reg_32099.read();
}

void particle_filter::thread_particles_temp_1_d1() {
    if ((esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()))) {
        particles_temp_1_d1 = particles_load_0_phi_reg_36148.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()))) {
        particles_temp_1_d1 = ap_reg_ppstg_init_particles_load_1_phi_reg_32105_pp0_it2.read();
    } else {
        particles_temp_1_d1 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_particles_temp_1_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32058_pp0_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp_reg_32077_pp0_it1.read())))) {
        particles_temp_1_we0 = ap_const_logic_1;
    } else {
        particles_temp_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp0_stg0_fsm_1, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp0_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond5_reg_32058_pp0_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond1_reg_32094_pp0_it2.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp5_stg0_fsm_96, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp5_it2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond10_reg_36118_pp5_it1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, icmp11_fu_30686_p2.read())))) {
        particles_temp_1_we1 = ap_const_logic_1;
    } else {
        particles_temp_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_particles_temp_load_1_0_phi_fu_31042_p3() {
    particles_temp_load_1_0_phi_fu_31042_p3 = (!icmp8_reg_36282.read()[0].is_01())? sc_lv<32>(): ((icmp8_reg_36282.read()[0].to_bool())? particles_temp_0_q1.read(): particles_temp_1_q0.read());
}

void particle_filter::thread_pos1_1_fu_27434_p2() {
    pos1_1_fu_27434_p2 = (!F2_1_reg_34806.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_reg_34806.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos1_2_1_fu_29134_p2() {
    pos1_2_1_fu_29134_p2 = (!ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos1_2_fu_28894_p2() {
    pos1_2_fu_28894_p2 = (!ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos1_fu_26654_p2() {
    pos1_fu_26654_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_10.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34451.read()) + sc_biguint<12>(ap_const_lv12_10));
}

void particle_filter::thread_pos2_1_fu_27443_p2() {
    pos2_1_fu_27443_p2 = (!F2_1_reg_34806.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_reg_34806.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_pos2_2_1_fu_28759_p2() {
    pos2_2_1_fu_28759_p2 = (!F2_2_1_reg_35335.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35335.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_pos2_2_fu_28599_p2() {
    pos2_2_fu_28599_p2 = (!F2_2_reg_35292.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35292.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_pos2_fu_26519_p2() {
    pos2_fu_26519_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_11.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34451.read()) + sc_biguint<12>(ap_const_lv12_11));
}

void particle_filter::thread_previous_particle_assign_load_0_phi_fu_24633_p3() {
    previous_particle_assign_load_0_phi_fu_24633_p3 = (!ap_reg_ppstg_icmp2_reg_32856_pp1_it39.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_icmp2_reg_32856_pp1_it39.read()[0].to_bool())? particles_temp_0_q1.read(): particles_temp_1_q0.read());
}

void particle_filter::thread_previous_particle_assign_load_1_phi_fu_24640_p3() {
    previous_particle_assign_load_1_phi_fu_24640_p3 = (!ap_reg_ppstg_cond_reg_32871_pp1_it39.read()[0].is_01())? sc_lv<32>(): ((ap_reg_ppstg_cond_reg_32871_pp1_it39.read()[0].to_bool())? particles_temp_0_q1.read(): particles_temp_1_q0.read());
}

void particle_filter::thread_qb_1_fu_27350_p3() {
    qb_1_fu_27350_p3 = (!tmp_276_reg_34829.read()[0].is_01())? sc_lv<1>(): ((tmp_276_reg_34829.read()[0].to_bool())? isneg_1_fu_27279_p3.read(): tmp_408_fu_27342_p3.read());
}

void particle_filter::thread_qb_2_1_fu_28691_p3() {
    qb_2_1_fu_28691_p3 = (!tmp_480_1_fu_28668_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_480_1_fu_28668_p2.read()[0].to_bool())? tmp_505_reg_35306.read(): tmp_510_fu_28683_p3.read());
}

void particle_filter::thread_qb_2_fu_28531_p3() {
    qb_2_fu_28531_p3 = (!tmp_337_fu_28508_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_337_fu_28508_p2.read()[0].to_bool())? tmp_453_reg_35263.read(): tmp_463_fu_28523_p3.read());
}

void particle_filter::thread_qb_assign_1_fu_26772_p2() {
    qb_assign_1_fu_26772_p2 = (p_r_i_i1_reg_34534.read() & isneg_reg_34422.read());
}

void particle_filter::thread_qb_assign_3_fu_27561_p2() {
    qb_assign_3_fu_27561_p2 = (p_r_i_i_fu_27557_p2.read() & isneg_1_reg_34849.read());
}

void particle_filter::thread_qb_assign_5_1_fu_29392_p2() {
    qb_assign_5_1_fu_29392_p2 = (p_r_i_i2_1_reg_35575.read() & ap_reg_ppstg_tmp_505_reg_35306_pp4_it26.read());
}

void particle_filter::thread_qb_assign_5_fu_29252_p2() {
    qb_assign_5_fu_29252_p2 = (p_r_i_i2_reg_35471.read() & ap_reg_ppstg_tmp_453_reg_35263_pp4_it26.read());
}

void particle_filter::thread_qb_fu_26451_p3() {
    qb_fu_26451_p3 = (!tmp_215_fu_26428_p2.read()[0].is_01())? sc_lv<1>(): ((tmp_215_fu_26428_p2.read()[0].to_bool())? isneg_reg_34422.read(): tmp_391_fu_26443_p3.read());
}

void particle_filter::thread_r_1_fu_27388_p2() {
    r_1_fu_27388_p2 = (tmp_286_fu_27357_p2.read() & tmp_294_fu_27382_p2.read());
}

void particle_filter::thread_r_2_1_fu_29081_p2() {
    r_2_1_fu_29081_p2 = (tmp_494_1_fu_29071_p2.read() & tmp_501_1_fu_29076_p2.read());
}

void particle_filter::thread_r_2_fu_28841_p2() {
    r_2_fu_28841_p2 = (tmp_343_fu_28831_p2.read() & tmp_347_fu_28836_p2.read());
}

void particle_filter::thread_r_V_1_fu_27643_p2() {
    r_V_1_fu_27643_p2 = (!tmp_308_reg_34939.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_308_reg_34939.read().to_uint();
}

void particle_filter::thread_r_V_2_1_fu_29198_p2() {
    r_V_2_1_fu_29198_p2 = (!tmp_527_1_fu_29189_p1.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_527_1_fu_29189_p1.read().to_uint();
}

void particle_filter::thread_r_V_2_fu_28958_p2() {
    r_V_2_fu_28958_p2 = (!tmp_364_fu_28949_p1.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_364_fu_28949_p1.read().to_uint();
}

void particle_filter::thread_r_V_fu_26718_p2() {
    r_V_fu_26718_p2 = (!tmp_237_fu_26709_p1.read().is_01())? sc_lv<54>(): ap_const_lv54_3FFFFFFFFFFFFF >> (unsigned short)tmp_237_fu_26709_p1.read().to_uint();
}

void particle_filter::thread_r_fu_26601_p2() {
    r_fu_26601_p2 = (tmp_219_fu_26591_p2.read() & tmp_223_fu_26596_p2.read());
}

void particle_filter::thread_replication_factors_0_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()))) {
        replication_factors_0_address0 = ap_reg_ppstg_replication_factors_0_addr_reg_35231_pp4_it34.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st331_fsm_94, ap_CS_fsm.read())) {
        replication_factors_0_address0 =  (sc_lv<13>) (newIndex_fu_30572_p1.read());
    } else {
        replication_factors_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_replication_factors_0_address1() {
    replication_factors_0_address1 = ap_reg_ppstg_replication_factors_0_addr_reg_35231_pp4_it35.read();
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
    replication_factors_0_d0 = p_12_fu_30471_p3.read();
}

void particle_filter::thread_replication_factors_0_d1() {
    replication_factors_0_d1 = p_1_1_162_reg_36047.read();
}

void particle_filter::thread_replication_factors_0_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35207_pp4_it34.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp6_reg_35226_pp4_it34.read())))) {
        replication_factors_0_we0 = ap_const_logic_1;
    } else {
        replication_factors_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_0_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it36.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35207_pp4_it35.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond9_reg_35243_pp4_it35.read())))) {
        replication_factors_0_we1 = ap_const_logic_1;
    } else {
        replication_factors_0_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_1_address0() {
    if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()))) {
        replication_factors_1_address0 = ap_reg_ppstg_replication_factors_1_addr_reg_35237_pp4_it34.read();
    } else if (esl_seteq<1,8,8>(ap_ST_st331_fsm_94, ap_CS_fsm.read())) {
        replication_factors_1_address0 =  (sc_lv<13>) (newIndex_fu_30572_p1.read());
    } else {
        replication_factors_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_replication_factors_1_address1() {
    replication_factors_1_address1 = ap_reg_ppstg_replication_factors_1_addr_reg_35237_pp4_it35.read();
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
    replication_factors_1_d0 = p_12_fu_30471_p3.read();
}

void particle_filter::thread_replication_factors_1_d1() {
    replication_factors_1_d1 = p_1_1_162_reg_36047.read();
}

void particle_filter::thread_replication_factors_1_we0() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35207_pp4_it34.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp6_reg_35226_pp4_it34.read())))) {
        replication_factors_1_we0 = ap_const_logic_1;
    } else {
        replication_factors_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_replication_factors_1_we1() {
    if (((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it36.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond1_reg_35207_pp4_it35.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond9_reg_35243_pp4_it35.read())))) {
        replication_factors_1_we1 = ap_const_logic_1;
    } else {
        replication_factors_1_we1 = ap_const_logic_0;
    }
}

void particle_filter::thread_ret_V_5_1_fu_30479_p2() {
    ret_V_5_1_fu_30479_p2 = (!p_Result_53_1_reg_36030.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_bigint<16>(p_Result_53_1_reg_36030.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void particle_filter::thread_ret_V_5_fu_30401_p2() {
    ret_V_5_fu_30401_p2 = (!p_Result_8_fu_30373_p4.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_bigint<16>(p_Result_8_fu_30373_p4.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void particle_filter::thread_rev1_fu_26699_p2() {
    rev1_fu_26699_p2 = (tmp_399_reg_34513.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev2_fu_27618_p2() {
    rev2_fu_27618_p2 = (tmp_414_reg_34916.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev3_fu_27633_p2() {
    rev3_fu_27633_p2 = (tmp_418_reg_34927.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev4_fu_28920_p2() {
    rev4_fu_28920_p2 = (tmp_475_fu_28912_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev5_fu_28939_p2() {
    rev5_fu_28939_p2 = (tmp_479_reg_35397.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev6_fu_29160_p2() {
    rev6_fu_29160_p2 = (tmp_516_fu_29152_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev7_fu_29179_p2() {
    rev7_fu_29179_p2 = (tmp_518_reg_35450.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rev_fu_26680_p2() {
    rev_fu_26680_p2 = (tmp_397_fu_26672_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_rn_resampling_fixed_V_fu_27126_p3() {
    rn_resampling_fixed_V_fu_27126_p3 = (!sel_tmp39_fu_27121_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp39_fu_27121_p2.read()[0].to_bool())? p_Val2_13_mux_fu_27074_p3.read(): sel_tmp37_fu_27103_p3.read());
}

void particle_filter::thread_sel_tmp104_not_fu_29364_p2() {
    sel_tmp104_not_fu_29364_p2 = (sel_tmp60_fu_29290_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp10_fu_27692_p3() {
    sel_tmp10_fu_27692_p3 = (!sel_tmp9_reg_34992.read()[0].is_01())? sc_lv<28>(): ((sel_tmp9_reg_34992.read()[0].to_bool())? p_Val2_27_reg_34970.read(): sel_tmp6_fu_27687_p3.read());
}

void particle_filter::thread_sel_tmp138_demorgan_fu_29873_p2() {
    sel_tmp138_demorgan_fu_29873_p2 = (ap_reg_ppstg_tmp_261_reg_35284_pp4_it29.read() | ap_reg_ppstg_icmp7_reg_35494_pp4_it29.read());
}

void particle_filter::thread_sel_tmp13_fu_27394_p2() {
    sel_tmp13_fu_27394_p2 = (!F2_1_reg_34806.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_1_reg_34806.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp14_fu_27399_p2() {
    sel_tmp14_fu_27399_p2 = (sel_tmp13_fu_27394_p2.read() & tmp_257_fu_27314_p2.read());
}

void particle_filter::thread_sel_tmp16_fu_26620_p3() {
    sel_tmp16_fu_26620_p3 = (!tmp_203_fu_26535_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_203_fu_26535_p2.read()[0].to_bool())? tmp_362_reg_34485.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp17_fu_26627_p2() {
    sel_tmp17_fu_26627_p2 = (tmp_203_fu_26535_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp181_not_fu_29504_p2() {
    sel_tmp181_not_fu_29504_p2 = (sel_tmp83_fu_29430_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp18_fu_26633_p2() {
    sel_tmp18_fu_26633_p2 = (QUAN_INC_reg_34473.read() & sel_tmp17_fu_26627_p2.read());
}

void particle_filter::thread_sel_tmp19_fu_26793_p2() {
    sel_tmp19_fu_26793_p2 = (tmp_393_reg_34528.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp20_fu_26798_p2() {
    sel_tmp20_fu_26798_p2 = (sel_tmp18_reg_34544.read() & sel_tmp19_fu_26793_p2.read());
}

void particle_filter::thread_sel_tmp215_demorgan_fu_29941_p2() {
    sel_tmp215_demorgan_fu_29941_p2 = (ap_reg_ppstg_tmp_429_1_reg_35327_pp4_it29.read() | ap_reg_ppstg_icmp10_reg_35598_pp4_it29.read());
}

void particle_filter::thread_sel_tmp21_fu_26803_p3() {
    sel_tmp21_fu_26803_p3 = (!sel_tmp20_fu_26798_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp20_fu_26798_p2.read()[0].to_bool())? p_Val2_18_fu_26780_p2.read(): sel_tmp16_reg_34539.read());
}

void particle_filter::thread_sel_tmp22_fu_26810_p2() {
    sel_tmp22_fu_26810_p2 = (sel_tmp18_reg_34544.read() & tmp_393_reg_34528.read());
}

void particle_filter::thread_sel_tmp23_fu_26912_p3() {
    sel_tmp23_fu_26912_p3 = (!sel_tmp22_reg_34632.read()[0].is_01())? sc_lv<28>(): ((sel_tmp22_reg_34632.read()[0].to_bool())? p_Val2_18_reg_34622.read(): sel_tmp21_reg_34627.read());
}

void particle_filter::thread_sel_tmp24_fu_26638_p2() {
    sel_tmp24_fu_26638_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_reg_34451.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp24_not_fu_27681_p2() {
    sel_tmp24_not_fu_27681_p2 = (sel_tmp9_fu_27612_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp25_fu_26643_p2() {
    sel_tmp25_fu_26643_p2 = (sel_tmp24_fu_26638_p2.read() & tmp_207_fu_26545_p2.read());
}

void particle_filter::thread_sel_tmp262_not_fu_26884_p2() {
    sel_tmp262_not_fu_26884_p2 = (sel_tmp22_fu_26810_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp26_fu_26752_p2() {
    sel_tmp26_fu_26752_p2 = (tmp_397_fu_26672_p3.read() | tmp_236_not_fu_26746_p2.read());
}

void particle_filter::thread_sel_tmp27_fu_26758_p2() {
    sel_tmp27_fu_26758_p2 = (tmp_240_fu_26736_p2.read() & sel_tmp26_fu_26752_p2.read());
}

void particle_filter::thread_sel_tmp28_fu_26863_p3() {
    sel_tmp28_fu_26863_p3 = (!sel_tmp27_reg_34611.read()[0].is_01())? sc_lv<1>(): ((sel_tmp27_reg_34611.read()[0].to_bool())? Range1_all_ones_1_fu_26823_p2.read(): rev_reg_34571.read());
}

void particle_filter::thread_sel_tmp296_demorgan_fu_27099_p2() {
    sel_tmp296_demorgan_fu_27099_p2 = (tmp_199_reg_34443.read() | icmp4_reg_34557.read());
}

void particle_filter::thread_sel_tmp29_fu_26877_p3() {
    sel_tmp29_fu_26877_p3 = (!sel_tmp27_reg_34611.read()[0].is_01())? sc_lv<1>(): ((sel_tmp27_reg_34611.read()[0].to_bool())? Range1_all_zeros_fu_26848_p2.read(): p_95_i1_fu_26859_p2.read());
}

void particle_filter::thread_sel_tmp2_demorgan_i_fu_30820_p2() {
    sel_tmp2_demorgan_i_fu_30820_p2 = (tmp_i_fu_30768_p2.read() | tmp_37_i_fu_30773_p2.read());
}

void particle_filter::thread_sel_tmp2_fu_27590_p2() {
    sel_tmp2_fu_27590_p2 = (tmp_253_reg_34863.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp30_fu_26973_p2() {
    sel_tmp30_fu_26973_p2 = (tmp_230_reg_34563.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp31_fu_26990_p2() {
    sel_tmp31_fu_26990_p2 = (tmp61_fu_26984_p2.read() & isneg_reg_34422.read());
}

void particle_filter::thread_sel_tmp32_fu_27012_p2() {
    sel_tmp32_fu_27012_p2 = (tmp_230_reg_34563.read() & isneg_reg_34422.read());
}

void particle_filter::thread_sel_tmp33_fu_27092_p3() {
    sel_tmp33_fu_27092_p3 = (!tmp_63_fu_27088_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_63_fu_27088_p2.read()[0].to_bool())? p_Val2_s_fu_27081_p3.read(): p_Val2_19_reg_34681.read());
}

void particle_filter::thread_sel_tmp34_fu_27671_p2() {
    sel_tmp34_fu_27671_p2 = (tmp_414_reg_34916.read() | tmp_307_not_fu_27666_p2.read());
}

void particle_filter::thread_sel_tmp35_fu_27676_p2() {
    sel_tmp35_fu_27676_p2 = (tmp_311_reg_34950.read() & sel_tmp34_fu_27671_p2.read());
}

void particle_filter::thread_sel_tmp36_fu_27749_p3() {
    sel_tmp36_fu_27749_p3 = (!sel_tmp35_reg_35023.read()[0].is_01())? sc_lv<1>(): ((sel_tmp35_reg_35023.read()[0].to_bool())? Range1_all_ones_3_reg_35005.read(): rev2_reg_34998.read());
}

void particle_filter::thread_sel_tmp37_fu_27103_p3() {
    sel_tmp37_fu_27103_p3 = (!sel_tmp296_demorgan_fu_27099_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp296_demorgan_fu_27099_p2.read()[0].to_bool())? sel_tmp33_fu_27092_p3.read(): p_Val2_19_reg_34681.read());
}

void particle_filter::thread_sel_tmp38_fu_27110_p2() {
    sel_tmp38_fu_27110_p2 = (tmp_199_reg_34443.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp39_fu_27121_p2() {
    sel_tmp39_fu_27121_p2 = (tmp64_fu_27115_p2.read() & icmp4_reg_34557.read());
}

void particle_filter::thread_sel_tmp3_fu_27595_p2() {
    sel_tmp3_fu_27595_p2 = (QUAN_INC_1_reg_34816.read() & sel_tmp2_fu_27590_p2.read());
}

void particle_filter::thread_sel_tmp3_i_fu_30834_p1() {
    sel_tmp3_i_fu_30834_p1 = sel_tmp3_v_i_fu_30826_p3.read();
}

void particle_filter::thread_sel_tmp3_v_i_fu_30826_p3() {
    sel_tmp3_v_i_fu_30826_p3 = (!sel_tmp2_demorgan_i_fu_30820_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp2_demorgan_i_fu_30820_p2.read()[0].to_bool())? p_Result_53_fu_30778_p3.read(): p_Result_55_fu_30810_p4.read());
}

void particle_filter::thread_sel_tmp40_fu_27762_p3() {
    sel_tmp40_fu_27762_p3 = (!sel_tmp35_reg_35023.read()[0].is_01())? sc_lv<1>(): ((sel_tmp35_reg_35023.read()[0].to_bool())? Range1_all_zeros_2_fu_27735_p2.read(): p_95_i_fu_27745_p2.read());
}

void particle_filter::thread_sel_tmp41_fu_27171_p2() {
    sel_tmp41_fu_27171_p2 = (tmp_248_reg_34764.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp42_fu_27835_p2() {
    sel_tmp42_fu_27835_p2 = (ap_reg_ppstg_tmp_301_reg_34908_pp3_it1.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp43_fu_27850_p2() {
    sel_tmp43_fu_27850_p2 = (tmp68_fu_27845_p2.read() & ap_reg_ppstg_isneg_1_reg_34849_pp3_it1.read());
}

void particle_filter::thread_sel_tmp44_fu_27855_p2() {
    sel_tmp44_fu_27855_p2 = (ap_reg_ppstg_tmp_301_reg_34908_pp3_it1.read() & ap_reg_ppstg_isneg_1_reg_34849_pp3_it1.read());
}

void particle_filter::thread_sel_tmp45_fu_27940_p3() {
    sel_tmp45_fu_27940_p3 = (!tmp_70_fu_27935_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_70_fu_27935_p2.read()[0].to_bool())? p_Val2_1_reg_34772.read(): p_Val2_30_reg_35034.read());
}

void particle_filter::thread_sel_tmp46_fu_27950_p3() {
    sel_tmp46_fu_27950_p3 = (!sel_tmp58_demorgan_fu_27946_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp58_demorgan_fu_27946_p2.read()[0].to_bool())? sel_tmp45_fu_27940_p3.read(): p_Val2_30_reg_35034.read());
}

void particle_filter::thread_sel_tmp47_fu_27962_p2() {
    sel_tmp47_fu_27962_p2 = (tmp71_reg_35095.read() & ap_reg_ppstg_icmp5_reg_34902_pp3_it2.read());
}

void particle_filter::thread_sel_tmp48_fu_28231_p2() {
    sel_tmp48_fu_28231_p2 = (tmp_320_reg_35132.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp49_fu_28236_p2() {
    sel_tmp49_fu_28236_p2 = (brmerge2_fu_28212_p2.read() & sel_tmp48_fu_28231_p2.read());
}

void particle_filter::thread_sel_tmp4_fu_27600_p2() {
    sel_tmp4_fu_27600_p2 = (tmp_410_fu_27549_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp4_i_fu_30838_p2() {
    sel_tmp4_i_fu_30838_p2 = (tmp_i_fu_30768_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp50_fu_28242_p3() {
    sel_tmp50_fu_28242_p3 = (!sel_tmp49_fu_28236_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp49_fu_28236_p2.read()[0].to_bool())? p_Val2_42_mux_fu_28217_p3.read(): p_Val2_4_151_fu_28224_p3.read());
}

void particle_filter::thread_sel_tmp51_fu_28277_p2() {
    sel_tmp51_fu_28277_p2 = (tmp_320_reg_35132.read() & underflow_3_reg_35189.read());
}

void particle_filter::thread_sel_tmp52_fu_28281_p3() {
    sel_tmp52_fu_28281_p3 = (!sel_tmp51_fu_28277_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp51_fu_28277_p2.read()[0].to_bool())? p_Val2_3_150_fu_28271_p3.read(): sel_tmp50_reg_35197.read());
}

void particle_filter::thread_sel_tmp53_fu_28288_p2() {
    sel_tmp53_fu_28288_p2 = (tmp_320_reg_35132.read() & brmerge1_fu_28259_p2.read());
}

void particle_filter::thread_sel_tmp54_fu_28860_p3() {
    sel_tmp54_fu_28860_p3 = (!tmp_275_fu_28775_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_275_fu_28775_p2.read()[0].to_bool())? tmp_457_reg_35369.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp55_fu_28867_p2() {
    sel_tmp55_fu_28867_p2 = (tmp_275_fu_28775_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp56_fu_28873_p2() {
    sel_tmp56_fu_28873_p2 = (QUAN_INC_2_reg_35357.read() & sel_tmp55_fu_28867_p2.read());
}

void particle_filter::thread_sel_tmp57_fu_29273_p2() {
    sel_tmp57_fu_29273_p2 = (tmp_467_reg_35465.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp58_demorgan_fu_27946_p2() {
    sel_tmp58_demorgan_fu_27946_p2 = (tmp_248_reg_34764.read() | ap_reg_ppstg_icmp5_reg_34902_pp3_it1.read());
}

void particle_filter::thread_sel_tmp58_fu_29278_p2() {
    sel_tmp58_fu_29278_p2 = (sel_tmp56_reg_35481.read() & sel_tmp57_fu_29273_p2.read());
}

void particle_filter::thread_sel_tmp59_fu_29283_p3() {
    sel_tmp59_fu_29283_p3 = (!sel_tmp58_fu_29278_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp58_fu_29278_p2.read()[0].to_bool())? p_Val2_s_154_fu_29260_p2.read(): sel_tmp54_reg_35476.read());
}

void particle_filter::thread_sel_tmp5_fu_27606_p2() {
    sel_tmp5_fu_27606_p2 = (sel_tmp3_fu_27595_p2.read() & sel_tmp4_fu_27600_p2.read());
}

void particle_filter::thread_sel_tmp5_i_fu_30844_p2() {
    sel_tmp5_i_fu_30844_p2 = (tmp_37_i_fu_30773_p2.read() & sel_tmp4_i_fu_30838_p2.read());
}

void particle_filter::thread_sel_tmp60_fu_29290_p2() {
    sel_tmp60_fu_29290_p2 = (sel_tmp56_reg_35481.read() & tmp_467_reg_35465.read());
}

void particle_filter::thread_sel_tmp61_fu_29526_p3() {
    sel_tmp61_fu_29526_p3 = (!sel_tmp60_reg_35673.read()[0].is_01())? sc_lv<28>(): ((sel_tmp60_reg_35673.read()[0].to_bool())? p_Val2_s_154_reg_35663.read(): sel_tmp59_reg_35668.read());
}

void particle_filter::thread_sel_tmp62_fu_28878_p2() {
    sel_tmp62_fu_28878_p2 = (!ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp63_fu_28883_p2() {
    sel_tmp63_fu_28883_p2 = (sel_tmp62_fu_28878_p2.read() & tmp_285_fu_28785_p2.read());
}

void particle_filter::thread_sel_tmp64_fu_28992_p2() {
    sel_tmp64_fu_28992_p2 = (tmp_475_fu_28912_p3.read() | tmp_363_not_fu_28986_p2.read());
}

void particle_filter::thread_sel_tmp65_fu_28998_p2() {
    sel_tmp65_fu_28998_p2 = (tmp_367_fu_28976_p2.read() & sel_tmp64_fu_28992_p2.read());
}

void particle_filter::thread_sel_tmp66_fu_29343_p3() {
    sel_tmp66_fu_29343_p3 = (!sel_tmp65_reg_35548.read()[0].is_01())? sc_lv<1>(): ((sel_tmp65_reg_35548.read()[0].to_bool())? Range1_all_ones_s_fu_29303_p2.read(): rev4_reg_35508.read());
}

void particle_filter::thread_sel_tmp67_fu_29357_p3() {
    sel_tmp67_fu_29357_p3 = (!sel_tmp65_reg_35548.read()[0].is_01())? sc_lv<1>(): ((sel_tmp65_reg_35548.read()[0].to_bool())? tmp_366_fu_29328_p2.read(): p_95_i2_fu_29339_p2.read());
}

void particle_filter::thread_sel_tmp68_fu_29587_p2() {
    sel_tmp68_fu_29587_p2 = (ap_reg_ppstg_tmp_356_reg_35500_pp4_it27.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp69_fu_29711_p2() {
    sel_tmp69_fu_29711_p2 = (tmp75_reg_35798.read() & ap_reg_ppstg_tmp_453_reg_35263_pp4_it28.read());
}

void particle_filter::thread_sel_tmp6_fu_27687_p3() {
    sel_tmp6_fu_27687_p3 = (!sel_tmp5_reg_34987.read()[0].is_01())? sc_lv<28>(): ((sel_tmp5_reg_34987.read()[0].to_bool())? p_Val2_27_reg_34970.read(): sel_tmp_reg_34982.read());
}

void particle_filter::thread_sel_tmp6_i_fu_30850_p3() {
    sel_tmp6_i_fu_30850_p3 = (!sel_tmp5_i_fu_30844_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp5_i_fu_30844_p2.read()[0].to_bool())? reg_20782.read(): sel_tmp3_i_fu_30834_p1.read());
}

void particle_filter::thread_sel_tmp70_fu_29715_p2() {
    sel_tmp70_fu_29715_p2 = (ap_reg_ppstg_tmp_356_reg_35500_pp4_it28.read() & ap_reg_ppstg_tmp_453_reg_35263_pp4_it28.read());
}

void particle_filter::thread_sel_tmp71_fu_29866_p3() {
    sel_tmp71_fu_29866_p3 = (!tmp_77_fu_29862_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_77_fu_29862_p2.read()[0].to_bool())? p_Val2_5_fu_29855_p3.read(): ap_reg_ppstg_p_Val2_2_155_reg_35781_pp4_it29.read());
}

void particle_filter::thread_sel_tmp72_fu_29877_p3() {
    sel_tmp72_fu_29877_p3 = (!sel_tmp138_demorgan_fu_29873_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp138_demorgan_fu_29873_p2.read()[0].to_bool())? sel_tmp71_fu_29866_p3.read(): ap_reg_ppstg_p_Val2_2_155_reg_35781_pp4_it29.read());
}

void particle_filter::thread_sel_tmp73_fu_29884_p2() {
    sel_tmp73_fu_29884_p2 = (ap_reg_ppstg_tmp_261_reg_35284_pp4_it29.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp74_fu_29895_p2() {
    sel_tmp74_fu_29895_p2 = (tmp78_fu_29889_p2.read() & ap_reg_ppstg_icmp7_reg_35494_pp4_it29.read());
}

void particle_filter::thread_sel_tmp75_fu_30354_p3() {
    sel_tmp75_fu_30354_p3 = (!ap_reg_ppstg_tmp_375_reg_35940_pp4_it33.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_375_reg_35940_pp4_it33.read()[0].to_bool())? p_Val2_8_158_fu_30348_p3.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp76_fu_30361_p2() {
    sel_tmp76_fu_30361_p2 = (ap_reg_ppstg_tmp_375_reg_35940_pp4_it33.read() & brmerge6_reg_35983.read());
}

void particle_filter::thread_sel_tmp77_fu_29100_p3() {
    sel_tmp77_fu_29100_p3 = (!tmp_446_1_fu_29015_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_446_1_fu_29015_p2.read()[0].to_bool())? tmp_507_reg_35422.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp78_fu_29107_p2() {
    sel_tmp78_fu_29107_p2 = (tmp_446_1_fu_29015_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp79_fu_29113_p2() {
    sel_tmp79_fu_29113_p2 = (QUAN_INC_2_1_reg_35410.read() & sel_tmp78_fu_29107_p2.read());
}

void particle_filter::thread_sel_tmp80_fu_29413_p2() {
    sel_tmp80_fu_29413_p2 = (tmp_512_reg_35569.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp81_fu_29418_p2() {
    sel_tmp81_fu_29418_p2 = (sel_tmp79_reg_35585.read() & sel_tmp80_fu_29413_p2.read());
}

void particle_filter::thread_sel_tmp82_fu_29423_p3() {
    sel_tmp82_fu_29423_p3 = (!sel_tmp81_fu_29418_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp81_fu_29418_p2.read()[0].to_bool())? p_Val2_24_1_fu_29400_p2.read(): sel_tmp77_reg_35580.read());
}

void particle_filter::thread_sel_tmp83_fu_29430_p2() {
    sel_tmp83_fu_29430_p2 = (sel_tmp79_reg_35585.read() & tmp_512_reg_35569.read());
}

void particle_filter::thread_sel_tmp84_fu_29616_p3() {
    sel_tmp84_fu_29616_p3 = (!sel_tmp83_reg_35732.read()[0].is_01())? sc_lv<28>(): ((sel_tmp83_reg_35732.read()[0].to_bool())? p_Val2_24_1_reg_35722.read(): sel_tmp82_reg_35727.read());
}

void particle_filter::thread_sel_tmp85_fu_29118_p2() {
    sel_tmp85_fu_29118_p2 = (!ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read()) < sc_bigint<12>(ap_const_lv12_C));
}

void particle_filter::thread_sel_tmp86_fu_29123_p2() {
    sel_tmp86_fu_29123_p2 = (sel_tmp85_fu_29118_p2.read() & tmp_463_1_fu_29025_p2.read());
}

void particle_filter::thread_sel_tmp87_fu_29232_p2() {
    sel_tmp87_fu_29232_p2 = (tmp_516_fu_29152_p3.read() | tmp_526_1_not_fu_29226_p2.read());
}

void particle_filter::thread_sel_tmp88_fu_29238_p2() {
    sel_tmp88_fu_29238_p2 = (tmp_532_1_fu_29216_p2.read() & sel_tmp87_fu_29232_p2.read());
}

void particle_filter::thread_sel_tmp89_fu_29483_p3() {
    sel_tmp89_fu_29483_p3 = (!sel_tmp88_reg_35652.read()[0].is_01())? sc_lv<1>(): ((sel_tmp88_reg_35652.read()[0].to_bool())? Range1_all_ones_11_1_fu_29443_p2.read(): rev6_reg_35612.read());
}

void particle_filter::thread_sel_tmp8_i_fu_30868_p2() {
    sel_tmp8_i_fu_30868_p2 = (notrhs_i_fu_30863_p2.read() | notlhs_i_fu_30858_p2.read());
}

void particle_filter::thread_sel_tmp90_fu_29497_p3() {
    sel_tmp90_fu_29497_p3 = (!sel_tmp88_reg_35652.read()[0].is_01())? sc_lv<1>(): ((sel_tmp88_reg_35652.read()[0].to_bool())? tmp_531_1_fu_29468_p2.read(): p_95_i2_1_fu_29479_p2.read());
}

void particle_filter::thread_sel_tmp91_fu_29683_p2() {
    sel_tmp91_fu_29683_p2 = (ap_reg_ppstg_tmp_517_1_reg_35604_pp4_it27.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp92_fu_29781_p2() {
    sel_tmp92_fu_29781_p2 = (tmp82_reg_35837.read() & ap_reg_ppstg_tmp_505_reg_35306_pp4_it28.read());
}

void particle_filter::thread_sel_tmp93_fu_29785_p2() {
    sel_tmp93_fu_29785_p2 = (ap_reg_ppstg_tmp_517_1_reg_35604_pp4_it28.read() & ap_reg_ppstg_tmp_505_reg_35306_pp4_it28.read());
}

void particle_filter::thread_sel_tmp94_fu_29934_p3() {
    sel_tmp94_fu_29934_p3 = (!tmp_84_fu_29930_p2.read()[0].is_01())? sc_lv<28>(): ((tmp_84_fu_29930_p2.read()[0].to_bool())? p_Val2_25_1_160_fu_29923_p3.read(): ap_reg_ppstg_p_Val2_25_1_reg_35814_pp4_it29.read());
}

void particle_filter::thread_sel_tmp95_fu_29945_p3() {
    sel_tmp95_fu_29945_p3 = (!sel_tmp215_demorgan_fu_29941_p2.read()[0].is_01())? sc_lv<28>(): ((sel_tmp215_demorgan_fu_29941_p2.read()[0].to_bool())? sel_tmp94_fu_29934_p3.read(): ap_reg_ppstg_p_Val2_25_1_reg_35814_pp4_it29.read());
}

void particle_filter::thread_sel_tmp96_fu_29952_p2() {
    sel_tmp96_fu_29952_p2 = (ap_reg_ppstg_tmp_429_1_reg_35327_pp4_it29.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sel_tmp97_fu_29963_p2() {
    sel_tmp97_fu_29963_p2 = (tmp85_fu_29957_p2.read() & ap_reg_ppstg_icmp10_reg_35598_pp4_it29.read());
}

void particle_filter::thread_sel_tmp98_fu_30419_p3() {
    sel_tmp98_fu_30419_p3 = (!ap_reg_ppstg_tmp_571_1_reg_35956_pp4_it33.read()[0].is_01())? sc_lv<28>(): ((ap_reg_ppstg_tmp_571_1_reg_35956_pp4_it33.read()[0].to_bool())? p_Val2_52_1_fu_30413_p3.read(): ap_const_lv28_0);
}

void particle_filter::thread_sel_tmp99_fu_30426_p2() {
    sel_tmp99_fu_30426_p2 = (ap_reg_ppstg_tmp_571_1_reg_35956_pp4_it33.read() & brmerge15_1_reg_36004.read());
}

void particle_filter::thread_sel_tmp9_fu_27612_p2() {
    sel_tmp9_fu_27612_p2 = (sel_tmp3_fu_27595_p2.read() & tmp_410_fu_27549_p3.read());
}

void particle_filter::thread_sel_tmp9_i_fu_30879_p2() {
    sel_tmp9_i_fu_30879_p2 = (tmp86_reg_36235.read() & tmp_i_reg_36225.read());
}

void particle_filter::thread_sel_tmp_fu_27584_p3() {
    sel_tmp_fu_27584_p3 = (!tmp_253_reg_34863.read()[0].is_01())? sc_lv<28>(): ((tmp_253_reg_34863.read()[0].to_bool())? tmp_405_reg_34869.read(): ap_const_lv28_0);
}

void particle_filter::thread_sh_amt_1_cast_fu_27297_p1() {
    sh_amt_1_cast_fu_27297_p1 = esl_sext<32,12>(sh_amt_1_reg_34822.read());
}

void particle_filter::thread_sh_amt_1_fu_27243_p3() {
    sh_amt_1_fu_27243_p3 = (!QUAN_INC_1_fu_27225_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_1_fu_27225_p2.read()[0].to_bool())? tmp_251_fu_27231_p2.read(): tmp_252_fu_27237_p2.read());
}

void particle_filter::thread_sh_amt_2_1_cast_fu_29012_p1() {
    sh_amt_2_1_cast_fu_29012_p1 = esl_sext<32,12>(sh_amt_2_1_reg_35415.read());
}

void particle_filter::thread_sh_amt_2_1_fu_28656_p3() {
    sh_amt_2_1_fu_28656_p3 = (!QUAN_INC_2_1_fu_28641_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_1_fu_28641_p2.read()[0].to_bool())? tmp_444_1_fu_28646_p2.read(): tmp_445_1_fu_28651_p2.read());
}

void particle_filter::thread_sh_amt_2_cast_fu_28772_p1() {
    sh_amt_2_cast_fu_28772_p1 = esl_sext<32,12>(sh_amt_2_reg_35362.read());
}

void particle_filter::thread_sh_amt_2_fu_28496_p3() {
    sh_amt_2_fu_28496_p3 = (!QUAN_INC_2_fu_28481_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_fu_28481_p2.read()[0].to_bool())? tmp_272_fu_28486_p2.read(): tmp_274_fu_28491_p2.read());
}

void particle_filter::thread_sh_amt_cast_fu_26532_p1() {
    sh_amt_cast_fu_26532_p1 = esl_sext<32,12>(sh_amt_reg_34478.read());
}

void particle_filter::thread_sh_amt_fu_26416_p3() {
    sh_amt_fu_26416_p3 = (!QUAN_INC_fu_26401_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_fu_26401_p2.read()[0].to_bool())? tmp_201_fu_26406_p2.read(): tmp_202_fu_26411_p2.read());
}

void particle_filter::thread_sh_assign_10_fu_24864_p1() {
    sh_assign_10_fu_24864_p1 = esl_sext<9,8>(tmp_79_i_i4_fu_24854_p2.read());
}

void particle_filter::thread_sh_assign_10_fu_24864_p3() {
    sh_assign_10_fu_24864_p3 = (!isNeg_8_fu_24846_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_8_fu_24846_p3.read()[0].to_bool())? sh_assign_10_fu_24864_p1.read(): sh_assign_7_fu_24840_p2.read());
}

void particle_filter::thread_sh_assign_11_fu_24885_p2() {
    sh_assign_11_fu_24885_p2 = (!tmp_i_i_i378_cast_fu_24881_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i378_cast_fu_24881_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_12_fu_24909_p1() {
    sh_assign_12_fu_24909_p1 = esl_sext<9,8>(tmp_79_i_i5_fu_24899_p2.read());
}

void particle_filter::thread_sh_assign_12_fu_24909_p3() {
    sh_assign_12_fu_24909_p3 = (!isNeg_9_fu_24891_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_9_fu_24891_p3.read()[0].to_bool())? sh_assign_12_fu_24909_p1.read(): sh_assign_11_fu_24885_p2.read());
}

void particle_filter::thread_sh_assign_13_fu_24930_p2() {
    sh_assign_13_fu_24930_p2 = (!tmp_i_i_i394_cast_fu_24926_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i394_cast_fu_24926_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_14_fu_24954_p1() {
    sh_assign_14_fu_24954_p1 = esl_sext<9,8>(tmp_79_i_i6_fu_24944_p2.read());
}

void particle_filter::thread_sh_assign_14_fu_24954_p3() {
    sh_assign_14_fu_24954_p3 = (!isNeg_10_fu_24936_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_10_fu_24936_p3.read()[0].to_bool())? sh_assign_14_fu_24954_p1.read(): sh_assign_13_fu_24930_p2.read());
}

void particle_filter::thread_sh_assign_15_fu_24975_p2() {
    sh_assign_15_fu_24975_p2 = (!tmp_i_i_i410_cast_fu_24971_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i410_cast_fu_24971_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_16_fu_24999_p1() {
    sh_assign_16_fu_24999_p1 = esl_sext<9,8>(tmp_79_i_i7_fu_24989_p2.read());
}

void particle_filter::thread_sh_assign_16_fu_24999_p3() {
    sh_assign_16_fu_24999_p3 = (!isNeg_11_fu_24981_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_11_fu_24981_p3.read()[0].to_bool())? sh_assign_16_fu_24999_p1.read(): sh_assign_15_fu_24975_p2.read());
}

void particle_filter::thread_sh_assign_1_fu_24729_p1() {
    sh_assign_1_fu_24729_p1 = esl_sext<9,8>(tmp_79_i_i1_fu_24719_p2.read());
}

void particle_filter::thread_sh_assign_1_fu_24729_p3() {
    sh_assign_1_fu_24729_p3 = (!isNeg_4_fu_24711_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_4_fu_24711_p3.read()[0].to_bool())? sh_assign_1_fu_24729_p1.read(): sh_assign_s_fu_24705_p2.read());
}

void particle_filter::thread_sh_assign_2_fu_24750_p2() {
    sh_assign_2_fu_24750_p2 = (!tmp_i_i_i330_cast_fu_24746_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i330_cast_fu_24746_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_3_fu_30936_p1() {
    sh_assign_3_fu_30936_p1 = esl_sext<9,8>(tmp_87_i_i_fu_30926_p2.read());
}

void particle_filter::thread_sh_assign_3_fu_30936_p3() {
    sh_assign_3_fu_30936_p3 = (!isNeg_5_fu_30918_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_5_fu_30918_p3.read()[0].to_bool())? sh_assign_3_fu_30936_p1.read(): sh_assign_fu_30912_p2.read());
}

void particle_filter::thread_sh_assign_4_fu_24774_p1() {
    sh_assign_4_fu_24774_p1 = esl_sext<9,8>(tmp_79_i_i2_fu_24764_p2.read());
}

void particle_filter::thread_sh_assign_4_fu_24774_p3() {
    sh_assign_4_fu_24774_p3 = (!isNeg_6_fu_24756_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_6_fu_24756_p3.read()[0].to_bool())? sh_assign_4_fu_24774_p1.read(): sh_assign_2_fu_24750_p2.read());
}

void particle_filter::thread_sh_assign_5_fu_24795_p2() {
    sh_assign_5_fu_24795_p2 = (!tmp_i_i_i346_cast_fu_24791_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i346_cast_fu_24791_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_6_fu_24819_p1() {
    sh_assign_6_fu_24819_p1 = esl_sext<9,8>(tmp_79_i_i3_fu_24809_p2.read());
}

void particle_filter::thread_sh_assign_6_fu_24819_p3() {
    sh_assign_6_fu_24819_p3 = (!isNeg_7_fu_24801_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_7_fu_24801_p3.read()[0].to_bool())? sh_assign_6_fu_24819_p1.read(): sh_assign_5_fu_24795_p2.read());
}

void particle_filter::thread_sh_assign_7_fu_24840_p2() {
    sh_assign_7_fu_24840_p2 = (!tmp_i_i_i362_cast_fu_24836_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i362_cast_fu_24836_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_8_fu_24660_p2() {
    sh_assign_8_fu_24660_p2 = (!tmp_i_i_i308_cast_fu_24656_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i308_cast_fu_24656_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_9_fu_24684_p1() {
    sh_assign_9_fu_24684_p1 = esl_sext<9,8>(tmp_79_i_i_fu_24674_p2.read());
}

void particle_filter::thread_sh_assign_9_fu_24684_p3() {
    sh_assign_9_fu_24684_p3 = (!isNeg_fu_24666_p3.read()[0].is_01())? sc_lv<9>(): ((isNeg_fu_24666_p3.read()[0].to_bool())? sh_assign_9_fu_24684_p1.read(): sh_assign_8_fu_24660_p2.read());
}

void particle_filter::thread_sh_assign_fu_30912_p2() {
    sh_assign_fu_30912_p2 = (!tmp_i_i_i_cast_fu_30908_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i_cast_fu_30908_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sh_assign_s_fu_24705_p2() {
    sh_assign_s_fu_24705_p2 = (!tmp_i_i_i314_cast_fu_24701_p1.read().is_01() || !ap_const_lv9_181.is_01())? sc_lv<9>(): (sc_bigint<9>(tmp_i_i_i314_cast_fu_24701_p1.read()) + sc_biguint<9>(ap_const_lv9_181));
}

void particle_filter::thread_sign_assign_1_fu_27859_p3() {
    sign_assign_1_fu_27859_p3 = (!sel_tmp44_fu_27855_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp44_fu_27855_p2.read()[0].to_bool())? tmp_314_fu_27830_p2.read(): sel_tmp43_fu_27850_p2.read());
}

void particle_filter::thread_sign_assign_1_not_fu_27913_p2() {
    sign_assign_1_not_fu_27913_p2 = (sign_assign_1_reg_35063.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sign_assign_2_1_fu_29789_p3() {
    sign_assign_2_1_fu_29789_p3 = (!sel_tmp93_fu_29785_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp93_fu_29785_p2.read()[0].to_bool())? tmp_537_1_fu_29776_p2.read(): sel_tmp92_fu_29781_p2.read());
}

void particle_filter::thread_sign_assign_2_fu_29719_p3() {
    sign_assign_2_fu_29719_p3 = (!sel_tmp70_fu_29715_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp70_fu_29715_p2.read()[0].to_bool())? tmp_369_fu_29706_p2.read(): sel_tmp69_fu_29711_p2.read());
}

void particle_filter::thread_sign_assign_2_not_1_fu_29833_p2() {
    sign_assign_2_not_1_fu_29833_p2 = (sign_assign_2_1_fu_29789_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sign_assign_2_not_fu_29764_p2() {
    sign_assign_2_not_fu_29764_p2 = (sign_assign_2_fu_29719_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_sign_assign_fu_27016_p3() {
    sign_assign_fu_27016_p3 = (!sel_tmp32_fu_27012_p2.read()[0].is_01())? sc_lv<1>(): ((sel_tmp32_fu_27012_p2.read()[0].to_bool())? tmp_243_fu_27007_p2.read(): sel_tmp31_reg_34698.read());
}

void particle_filter::thread_sign_assign_not_fu_27054_p2() {
    sign_assign_not_fu_27054_p2 = (sign_assign_fu_27016_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_state_parameters_address0() {
    state_parameters_address0 = grp_fetch_data_parameters_fu_19626_state_parameters_address0.read();
}

void particle_filter::thread_state_parameters_address1() {
    state_parameters_address1 = grp_fetch_data_parameters_fu_19626_state_parameters_address1.read();
}

void particle_filter::thread_state_parameters_ce0() {
    if (esl_seteq<1,8,8>(ap_ST_st16_fsm_12, ap_CS_fsm.read())) {
        state_parameters_ce0 = grp_fetch_data_parameters_fu_19626_state_parameters_ce0.read();
    } else {
        state_parameters_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_state_parameters_ce1() {
    if (esl_seteq<1,8,8>(ap_ST_st16_fsm_12, ap_CS_fsm.read())) {
        state_parameters_ce1 = grp_fetch_data_parameters_fu_19626_state_parameters_ce1.read();
    } else {
        state_parameters_ce1 = ap_const_logic_0;
    }
}

void particle_filter::thread_storemerge_1_fu_25923_p3() {
    storemerge_1_fu_25923_p3 = (!or_cond_1_reg_34359.read()[0].is_01())? sc_lv<32>(): ((or_cond_1_reg_34359.read()[0].to_bool())? tmp_266_1_reg_34333.read(): ap_const_lv32_0);
}

void particle_filter::thread_storemerge_fu_25909_p3() {
    storemerge_fu_25909_p3 = (!or_cond_reg_34344.read()[0].is_01())? sc_lv<32>(): ((or_cond_reg_34344.read()[0].to_bool())? reg_20816.read(): ap_const_lv32_0);
}

void particle_filter::thread_sum3_cast_fu_31054_p1() {
    sum3_cast_fu_31054_p1 = esl_sext<64,16>(sum3_fu_31049_p2.read());
}

void particle_filter::thread_sum3_fu_31049_p2() {
    sum3_fu_31049_p2 = (!tmp_500_reg_36077.read().is_01() || !ap_const_lv16_5.is_01())? sc_lv<16>(): (sc_bigint<16>(tmp_500_reg_36077.read()) + sc_biguint<16>(ap_const_lv16_5));
}

void particle_filter::thread_t_V_1_fu_30696_p1() {
    t_V_1_fu_30696_p1 = reg_20782.read();
}

void particle_filter::thread_t_fu_30542_p2() {
    t_fu_30542_p2 = (!t_assign_reg_2378.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(t_assign_reg_2378.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void particle_filter::thread_temp3_0_1_phi_fu_19176_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_reg_33370_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_340_reg_33572_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_342_reg_33576_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_reg_33580_pp1_it135.read()))) {
        temp3_0_1_phi_fu_19176_p10 = temp3_0_2_reg_34063.read();
    } else {
        temp3_0_1_phi_fu_19176_p10 = ap_reg_phiprechg_temp3_0_1_reg_19173pp1_it136.read();
    }
}

void particle_filter::thread_temp3_0_2_139_fu_25767_p3() {
    temp3_0_2_139_fu_25767_p3 = (!grp_fu_20346_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20346_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_0_3_reg_19237_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_0_3_phi_fu_19240_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_reg_33452_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_reg_33740_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_reg_33744_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_reg_33748_pp1_it135.read()))) {
        temp3_0_3_phi_fu_19240_p10 = temp3_0_5_reg_34123.read();
    } else {
        temp3_0_3_phi_fu_19240_p10 = ap_reg_phiprechg_temp3_0_3_reg_19237pp1_it136.read();
    }
}

void particle_filter::thread_temp3_1_1_phi_fu_19192_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_0_1_reg_33396_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_0_1_reg_33614_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_1_reg_33618_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_0_1_reg_33622_pp1_it135.read()))) {
        temp3_1_1_phi_fu_19192_p10 = temp3_1_2_reg_34078.read();
    } else {
        temp3_1_1_phi_fu_19192_p10 = ap_reg_phiprechg_temp3_1_1_reg_19189pp1_it136.read();
    }
}

void particle_filter::thread_temp3_1_2_142_fu_25775_p3() {
    temp3_1_2_142_fu_25775_p3 = (!grp_fu_20352_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20352_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_1_3_reg_19253_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_1_3_phi_fu_19256_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_1_reg_33456_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_1_reg_33782_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_1_reg_33786_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_1_reg_33790_pp1_it135.read()))) {
        temp3_1_3_phi_fu_19256_p10 = temp3_1_5_reg_34138.read();
    } else {
        temp3_1_3_phi_fu_19256_p10 = ap_reg_phiprechg_temp3_1_3_reg_19253pp1_it136.read();
    }
}

void particle_filter::thread_temp3_1_fu_25743_p3() {
    temp3_1_fu_25743_p3 = (!grp_fu_20328_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20328_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_1_1_reg_19189_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_2_1_phi_fu_19208_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_0_2_reg_33422_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_0_2_reg_33656_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_2_reg_33660_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_0_2_reg_33664_pp1_it135.read()))) {
        temp3_2_1_phi_fu_19208_p10 = temp3_2_2_reg_34093.read();
    } else {
        temp3_2_1_phi_fu_19208_p10 = ap_reg_phiprechg_temp3_2_1_reg_19205pp1_it136.read();
    }
}

void particle_filter::thread_temp3_2_2_144_fu_25783_p3() {
    temp3_2_2_144_fu_25783_p3 = (!grp_fu_20358_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20358_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_2_3_reg_19269_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_2_3_phi_fu_19272_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_2_reg_33460_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_2_reg_33824_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_2_reg_33828_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_2_reg_33832_pp1_it135.read()))) {
        temp3_2_3_phi_fu_19272_p10 = temp3_2_5_reg_34153.read();
    } else {
        temp3_2_3_phi_fu_19272_p10 = ap_reg_phiprechg_temp3_2_3_reg_19269pp1_it136.read();
    }
}

void particle_filter::thread_temp3_2_fu_25751_p3() {
    temp3_2_fu_25751_p3 = (!grp_fu_20334_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20334_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_2_1_reg_19205_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_fu_25735_p3() {
    temp3_fu_25735_p3 = (!grp_fu_20322_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20322_p2.read()[0].to_bool())? ap_reg_ppstg_temp3_0_1_reg_19173_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_load_3_1_fu_25791_p3() {
    temp3_load_3_1_fu_25791_p3 = (!grp_fu_20364_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20364_p2.read()[0].to_bool())? ap_reg_ppstg_tmp_397_1_3_reg_19285_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_temp3_load_3_fu_25759_p3() {
    temp3_load_3_fu_25759_p3 = (!grp_fu_20340_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20340_p2.read()[0].to_bool())? ap_reg_ppstg_tmp_397_0_3_reg_19221_pp1_it137.read(): ap_const_lv32_F149F2CA);
}

void particle_filter::thread_tmp13_fu_21450_p2() {
    tmp13_fu_21450_p2 = (!rng_state_20_offset_read.read().is_01() || !ap_const_lv32_FFFFFFFE.is_01())? sc_lv<32>(): (sc_bigint<32>(rng_state_20_offset_read.read()) + sc_biguint<32>(ap_const_lv32_FFFFFFFE));
}

void particle_filter::thread_tmp446_demorgan_fu_26814_p2() {
    tmp446_demorgan_fu_26814_p2 = (tmp_394_fu_26785_p3.read() | sel_tmp25_reg_34550.read());
}

void particle_filter::thread_tmp447_cast_cast_fu_26495_p3() {
    tmp447_cast_cast_fu_26495_p3 = (!QUAN_INC_fu_26401_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_fu_26401_p2.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

void particle_filter::thread_tmp453_demorgan_fu_27704_p2() {
    tmp453_demorgan_fu_27704_p2 = (tmp_411_reg_34976.read() | sel_tmp14_reg_34895.read());
}

void particle_filter::thread_tmp454_cast_cast_fu_27405_p3() {
    tmp454_cast_cast_fu_27405_p3 = (!QUAN_INC_1_reg_34816.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_1_reg_34816.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

void particle_filter::thread_tmp460_demorgan_fu_29294_p2() {
    tmp460_demorgan_fu_29294_p2 = (tmp_469_fu_29265_p3.read() | sel_tmp63_reg_35487.read());
}

void particle_filter::thread_tmp461_cast_cast_fu_28575_p3() {
    tmp461_cast_cast_fu_28575_p3 = (!QUAN_INC_2_fu_28481_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_fu_28481_p2.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

void particle_filter::thread_tmp467_demorgan_fu_29434_p2() {
    tmp467_demorgan_fu_29434_p2 = (tmp_513_fu_29405_p3.read() | sel_tmp86_reg_35591.read());
}

void particle_filter::thread_tmp468_cast_cast_fu_28735_p3() {
    tmp468_cast_cast_fu_28735_p3 = (!QUAN_INC_2_1_fu_28641_p2.read()[0].is_01())? sc_lv<12>(): ((QUAN_INC_2_1_fu_28641_p2.read()[0].to_bool())? ap_const_lv12_2: ap_const_lv12_1);
}

void particle_filter::thread_tmp46_fu_21782_p2() {
    tmp46_fu_21782_p2 = (tmp_93_fu_21694_p3.read() ^ tmp_103_fu_21774_p3.read());
}

}

