#include "particle_filter.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particle_filter::thread_tmp46_fu_21791_p2() {
    tmp46_fu_21791_p2 = (tmp_94_fu_21703_p3.read() ^ tmp_104_fu_21783_p3.read());
}

void particle_filter::thread_tmp47_fu_21923_p2() {
    tmp47_fu_21923_p2 = (tmp_110_fu_21835_p3.read() ^ tmp_136_fu_21915_p3.read());
}

void particle_filter::thread_tmp48_fu_22401_p2() {
    tmp48_fu_22401_p2 = (tmp_161_fu_22313_p3.read() ^ tmp_171_fu_22393_p3.read());
}

void particle_filter::thread_tmp49_fu_22533_p2() {
    tmp49_fu_22533_p2 = (tmp_176_fu_22445_p3.read() ^ tmp_188_fu_22525_p3.read());
}

void particle_filter::thread_tmp50_fu_22665_p2() {
    tmp50_fu_22665_p2 = (tmp_218_0_1_fu_22577_p3.read() ^ tmp_230_0_1_fu_22657_p3.read());
}

void particle_filter::thread_tmp51_fu_22797_p2() {
    tmp51_fu_22797_p2 = (tmp_240_0_1_fu_22709_p3.read() ^ tmp_252_0_1_fu_22789_p3.read());
}

void particle_filter::thread_tmp52_fu_22929_p2() {
    tmp52_fu_22929_p2 = (tmp_218_0_2_fu_22841_p3.read() ^ tmp_230_0_2_fu_22921_p3.read());
}

void particle_filter::thread_tmp53_fu_23061_p2() {
    tmp53_fu_23061_p2 = (tmp_240_0_2_fu_22973_p3.read() ^ tmp_252_0_2_fu_23053_p3.read());
}

void particle_filter::thread_tmp54_fu_23193_p2() {
    tmp54_fu_23193_p2 = (tmp_218_0_3_fu_23105_p3.read() ^ tmp_230_0_3_fu_23185_p3.read());
}

void particle_filter::thread_tmp55_fu_23325_p2() {
    tmp55_fu_23325_p2 = (tmp_240_0_3_fu_23237_p3.read() ^ tmp_252_0_3_fu_23317_p3.read());
}

void particle_filter::thread_tmp56_fu_26139_p2() {
    tmp56_fu_26139_p2 = (tmp_127_fu_26045_p3.read() ^ tmp_139_fu_26131_p3.read());
}

void particle_filter::thread_tmp57_fu_26323_p2() {
    tmp57_fu_26323_p2 = (tmp_146_fu_26207_p4.read() ^ tmp_193_fu_26315_p3.read());
}

void particle_filter::thread_tmp58_fu_26932_p2() {
    tmp58_fu_26932_p2 = (tmp446_demorgan_reg_34654.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp59_fu_26828_p2() {
    tmp59_fu_26828_p2 = (lD_reg_34595.read() & rev_reg_34587.read());
}

void particle_filter::thread_tmp60_fu_26899_p2() {
    tmp60_fu_26899_p2 = (sel_tmp25_reg_34566.read() | sel_tmp262_not_fu_26893_p2.read());
}

void particle_filter::thread_tmp61_fu_26993_p2() {
    tmp61_fu_26993_p2 = (newsignbit_fu_26942_p3.read() & sel_tmp30_fu_26982_p2.read());
}

void particle_filter::thread_tmp62_fu_27075_p2() {
    tmp62_fu_27075_p2 = (overflow_fu_27046_p2.read() | sign_assign_not_fu_27069_p2.read());
}

void particle_filter::thread_tmp64_fu_27125_p2() {
    tmp64_fu_27125_p2 = (brmerge_fu_27081_p2.read() & sel_tmp38_fu_27120_p2.read());
}

void particle_filter::thread_tmp65_fu_27736_p2() {
    tmp65_fu_27736_p2 = (tmp453_demorgan_fu_27732_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp66_fu_27633_p2() {
    tmp66_fu_27633_p2 = (lD_1_reg_34937.read() & rev2_fu_27628_p2.read());
}

void particle_filter::thread_tmp67_fu_27796_p2() {
    tmp67_fu_27796_p2 = (sel_tmp14_reg_34910.read() | sel_tmp24_not_reg_35051.read());
}

void particle_filter::thread_tmp68_fu_27856_p2() {
    tmp68_fu_27856_p2 = (newsignbit_1_reg_35063.read() & sel_tmp42_fu_27846_p2.read());
}

void particle_filter::thread_tmp69_fu_27929_p2() {
    tmp69_fu_27929_p2 = (overflow_1_reg_35091.read() | sign_assign_1_not_fu_27924_p2.read());
}

void particle_filter::thread_tmp71_fu_27968_p2() {
    tmp71_fu_27968_p2 = (brmerge8_fu_27934_p2.read() & sel_tmp41_reg_34792.read());
}

void particle_filter::thread_tmp72_fu_29554_p2() {
    tmp72_fu_29554_p2 = (tmp460_demorgan_reg_35701.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp73_fu_29310_p2() {
    tmp73_fu_29310_p2 = (tmp_478_reg_35538.read() & rev4_reg_35530.read());
}

void particle_filter::thread_tmp74_fu_29381_p2() {
    tmp74_fu_29381_p2 = (sel_tmp63_reg_35509.read() | sel_tmp104_not_fu_29375_p2.read());
}

void particle_filter::thread_tmp75_fu_29615_p2() {
    tmp75_fu_29615_p2 = (tmp_474_fu_29564_p3.read() & sel_tmp68_fu_29604_p2.read());
}

void particle_filter::thread_tmp76_fu_29787_p2() {
    tmp76_fu_29787_p2 = (overflow_5_fu_29764_p2.read() | sign_assign_2_not_fu_29781_p2.read());
}

void particle_filter::thread_tmp78_fu_29900_p2() {
    tmp78_fu_29900_p2 = (brmerge3_fu_29855_p2.read() & sel_tmp73_fu_29895_p2.read());
}

void particle_filter::thread_tmp79_fu_29649_p2() {
    tmp79_fu_29649_p2 = (tmp467_demorgan_reg_35760.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp80_fu_29450_p2() {
    tmp80_fu_29450_p2 = (tmp_518_reg_35642.read() & rev6_reg_35634.read());
}

void particle_filter::thread_tmp81_fu_29521_p2() {
    tmp81_fu_29521_p2 = (sel_tmp86_reg_35613.read() | sel_tmp181_not_fu_29515_p2.read());
}

void particle_filter::thread_tmp82_fu_29716_p2() {
    tmp82_fu_29716_p2 = (tmp_516_fu_29659_p3.read() & sel_tmp91_fu_29705_p2.read());
}

void particle_filter::thread_tmp83_fu_29845_p2() {
    tmp83_fu_29845_p2 = (overflow_5_1_fu_29822_p2.read() | sign_assign_2_not_1_fu_29839_p2.read());
}

void particle_filter::thread_tmp85_fu_29968_p2() {
    tmp85_fu_29968_p2 = (brmerge12_1_fu_29923_p2.read() & sel_tmp96_fu_29963_p2.read());
}

void particle_filter::thread_tmp86_fu_30884_p2() {
    tmp86_fu_30884_p2 = (p_Result_s_166_reg_36195.read() & sel_tmp8_i_fu_30879_p2.read());
}

void particle_filter::thread_tmp88_fu_22071_p2() {
    tmp88_fu_22071_p2 = (tmp_163_1_fu_21983_p3.read() ^ tmp_175_1_fu_22063_p3.read());
}

void particle_filter::thread_tmp89_fu_22203_p2() {
    tmp89_fu_22203_p2 = (tmp_185_1_fu_22115_p3.read() ^ tmp_197_1_fu_22195_p3.read());
}

void particle_filter::thread_tmp90_fu_23457_p2() {
    tmp90_fu_23457_p2 = (tmp_218_1_fu_23369_p3.read() ^ tmp_230_1_fu_23449_p3.read());
}

void particle_filter::thread_tmp91_fu_23589_p2() {
    tmp91_fu_23589_p2 = (tmp_240_1_fu_23501_p3.read() ^ tmp_252_1_fu_23581_p3.read());
}

void particle_filter::thread_tmp92_fu_23721_p2() {
    tmp92_fu_23721_p2 = (tmp_218_1_1_fu_23633_p3.read() ^ tmp_230_1_1_fu_23713_p3.read());
}

void particle_filter::thread_tmp93_fu_23853_p2() {
    tmp93_fu_23853_p2 = (tmp_240_1_1_fu_23765_p3.read() ^ tmp_252_1_1_fu_23845_p3.read());
}

void particle_filter::thread_tmp94_fu_23985_p2() {
    tmp94_fu_23985_p2 = (tmp_218_1_2_fu_23897_p3.read() ^ tmp_230_1_2_fu_23977_p3.read());
}

void particle_filter::thread_tmp95_fu_24117_p2() {
    tmp95_fu_24117_p2 = (tmp_240_1_2_fu_24029_p3.read() ^ tmp_252_1_2_fu_24109_p3.read());
}

void particle_filter::thread_tmp96_fu_24249_p2() {
    tmp96_fu_24249_p2 = (tmp_218_1_3_fu_24161_p3.read() ^ tmp_230_1_3_fu_24241_p3.read());
}

void particle_filter::thread_tmp97_fu_24381_p2() {
    tmp97_fu_24381_p2 = (tmp_240_1_3_fu_24293_p3.read() ^ tmp_252_1_3_fu_24373_p3.read());
}

void particle_filter::thread_tmp_100_fu_21767_p2() {
    tmp_100_fu_21767_p2 = (rng_state_s3_fu_1290.read() ^ tmp_128_fu_21761_p2.read());
}

void particle_filter::thread_tmp_101_fu_21773_p4() {
    tmp_101_fu_21773_p4 = tmp_100_fu_21767_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_102_fu_21453_p2() {
    tmp_102_fu_21453_p2 = (!ap_const_lv32_1.is_01())? sc_lv<32>(): umax_fu_21447_p3.read() << (unsigned short)ap_const_lv32_1.to_uint();
}

void particle_filter::thread_tmp_103_fu_21135_p1() {
    tmp_103_fu_21135_p1 = i_reg_2321.read().range(13-1, 0);
}

void particle_filter::thread_tmp_104_fu_21783_p3() {
    tmp_104_fu_21783_p3 = esl_concat<11,21>(tmp_99_fu_21751_p4.read(), tmp_101_fu_21773_p4.read());
}

void particle_filter::thread_tmp_105_fu_21803_p4() {
    tmp_105_fu_21803_p4 = rng_state_s_fu_1446.read().range(19, 1);
}

void particle_filter::thread_tmp_106_fu_21819_p2() {
    tmp_106_fu_21819_p2 = (rng_state_s_fu_1446.read() ^ tmp_130_fu_21813_p2.read());
}

void particle_filter::thread_tmp_107_fu_21825_p4() {
    tmp_107_fu_21825_p4 = tmp_106_fu_21819_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_108_fu_21147_p4() {
    tmp_108_fu_21147_p4 = i_reg_2321.read().range(30, 13);
}

void particle_filter::thread_tmp_110_fu_21835_p3() {
    tmp_110_fu_21835_p3 = esl_concat<19,13>(tmp_105_fu_21803_p4.read(), tmp_107_fu_21825_p4.read());
}

void particle_filter::thread_tmp_111_fu_21843_p4() {
    tmp_111_fu_21843_p4 = rng_state_s23_fu_1366.read().range(27, 3);
}

void particle_filter::thread_tmp_112_fu_21859_p2() {
    tmp_112_fu_21859_p2 = (rng_state_s23_fu_1366.read() ^ tmp_134_fu_21853_p2.read());
}

void particle_filter::thread_tmp_113_fu_21865_p4() {
    tmp_113_fu_21865_p4 = tmp_112_fu_21859_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_114_fu_31070_p2() {
    tmp_114_fu_31070_p2 = (tmp_109_reg_36310.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_115_fu_21667_p1() {
    tmp_115_fu_21667_p1 = i2_reg_2410.read().range(13-1, 0);
}

void particle_filter::thread_tmp_116_fu_21875_p3() {
    tmp_116_fu_21875_p3 = esl_concat<25,7>(tmp_111_fu_21843_p4.read(), tmp_113_fu_21865_p4.read());
}

void particle_filter::thread_tmp_117_fu_21883_p4() {
    tmp_117_fu_21883_p4 = rng_state_s43_fu_1286.read().range(14, 4);
}

void particle_filter::thread_tmp_122_fu_21681_p2() {
    tmp_122_fu_21681_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s1_fu_1450.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_123_fu_21899_p2() {
    tmp_123_fu_21899_p2 = (rng_state_s43_fu_1286.read() ^ tmp_135_fu_21893_p2.read());
}

void particle_filter::thread_tmp_124_fu_21721_p2() {
    tmp_124_fu_21721_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s2_fu_1370.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_125_fu_26029_p2() {
    tmp_125_fu_26029_p2 = (rng_state_s22_reg_2344.read() ^ tmp_297_fu_26023_p2.read());
}

void particle_filter::thread_tmp_126_fu_26035_p4() {
    tmp_126_fu_26035_p4 = tmp_125_fu_26029_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_127_fu_26045_p3() {
    tmp_127_fu_26045_p3 = esl_concat<19,13>(tmp_296_fu_26013_p4.read(), tmp_126_fu_26035_p4.read());
}

void particle_filter::thread_tmp_128_fu_21761_p2() {
    tmp_128_fu_21761_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s3_fu_1290.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_129_fu_21905_p4() {
    tmp_129_fu_21905_p4 = tmp_123_fu_21899_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_130_fu_21813_p2() {
    tmp_130_fu_21813_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s_fu_1446.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_131_fu_26075_p2() {
    tmp_131_fu_26075_p2 = (rng_state_s42_reg_2354.read() ^ tmp_302_fu_26069_p2.read());
}

void particle_filter::thread_tmp_132_fu_26081_p4() {
    tmp_132_fu_26081_p4 = tmp_131_fu_26075_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_133_fu_26091_p3() {
    tmp_133_fu_26091_p3 = esl_concat<25,7>(tmp_300_fu_26059_p4.read(), tmp_132_fu_26081_p4.read());
}

void particle_filter::thread_tmp_134_fu_21853_p2() {
    tmp_134_fu_21853_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s23_fu_1366.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_135_fu_21893_p2() {
    tmp_135_fu_21893_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s43_fu_1286.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_136_fu_21915_p3() {
    tmp_136_fu_21915_p3 = esl_concat<11,21>(tmp_117_fu_21883_p4.read(), tmp_129_fu_21905_p4.read());
}

void particle_filter::thread_tmp_137_fu_26115_p2() {
    tmp_137_fu_26115_p2 = (rng_state_s62_reg_2364.read() ^ tmp_306_fu_26109_p2.read());
}

void particle_filter::thread_tmp_138_fu_26121_p4() {
    tmp_138_fu_26121_p4 = tmp_137_fu_26115_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_139_fu_26131_p3() {
    tmp_139_fu_26131_p3 = esl_concat<11,21>(tmp_305_fu_26099_p4.read(), tmp_138_fu_26121_p4.read());
}

void particle_filter::thread_tmp_141_fu_21935_p4() {
    tmp_141_fu_21935_p4 = i2_reg_2410.read().range(30, 13);
}

void particle_filter::thread_tmp_143_fu_26181_p4() {
    tmp_143_fu_26181_p4 = esl_concat<19,13>(esl_concat<6,13>(tmp_313_fu_26171_p4.read(), tmp_126_fu_26035_p4.read()), ap_const_lv13_0);
}

void particle_filter::thread_tmp_144_fu_26191_p2() {
    tmp_144_fu_26191_p2 = (tmp_290_fu_26007_p2.read() ^ tmp_143_fu_26181_p4.read());
}

void particle_filter::thread_tmp_145_fu_26197_p4() {
    tmp_145_fu_26197_p4 = tmp_144_fu_26191_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_146_fu_26207_p4() {
    tmp_146_fu_26207_p4 = esl_concat<19,13>(esl_concat<7,12>(tmp_312_fu_26161_p4.read(), tmp_310_fu_26151_p4.read()), tmp_145_fu_26197_p4.read());
}

void particle_filter::thread_tmp_147_fu_25865_p1() {
    tmp_147_fu_25865_p1 = i4_phi_fu_19337_p4.read().range(13-1, 0);
}

void particle_filter::thread_tmp_148_fu_25877_p4() {
    tmp_148_fu_25877_p4 = i4_phi_fu_19337_p4.read().range(30, 13);
}

void particle_filter::thread_tmp_14_fu_21464_p2() {
    tmp_14_fu_21464_p2 = (!tmp13_fu_21459_p2.read().is_01() || !tmp_102_fu_21453_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp13_fu_21459_p2.read()) + sc_biguint<32>(tmp_102_fu_21453_p2.read()));
}

void particle_filter::thread_tmp_150_fu_26243_p2() {
    tmp_150_fu_26243_p2 = (tmp_298_fu_26053_p2.read() ^ tmp_330_fu_26237_p2.read());
}

void particle_filter::thread_tmp_152_fu_26249_p4() {
    tmp_152_fu_26249_p4 = tmp_150_fu_26243_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_153_fu_26259_p4() {
    tmp_153_fu_26259_p4 = esl_concat<25,7>(esl_concat<21,4>(tmp_327_fu_26227_p4.read(), tmp_318_fu_26217_p4.read()), tmp_152_fu_26249_p4.read());
}

void particle_filter::thread_tmp_157_fu_22281_p4() {
    tmp_157_fu_22281_p4 = rng_state_s6_fu_1434.read().range(19, 1);
}

void particle_filter::thread_tmp_158_fu_22291_p2() {
    tmp_158_fu_22291_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s6_fu_1434.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_159_fu_22297_p2() {
    tmp_159_fu_22297_p2 = (rng_state_s6_fu_1434.read() ^ tmp_158_fu_22291_p2.read());
}

void particle_filter::thread_tmp_15_fu_21470_p2() {
    tmp_15_fu_21470_p2 = (!umax_fu_21447_p3.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_bigint<32>(umax_fu_21447_p3.read()) + sc_biguint<32>(ap_const_lv32_FFFFFFFF));
}

void particle_filter::thread_tmp_160_fu_22303_p4() {
    tmp_160_fu_22303_p4 = tmp_159_fu_22297_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_161_1_fu_21967_p2() {
    tmp_161_1_fu_21967_p2 = (rng_state_s4_fu_1442.read() ^ tmp_545_fu_21961_p2.read());
}

void particle_filter::thread_tmp_161_fu_22313_p3() {
    tmp_161_fu_22313_p3 = esl_concat<19,13>(tmp_157_fu_22281_p4.read(), tmp_160_fu_22303_p4.read());
}

void particle_filter::thread_tmp_162_1_fu_21973_p4() {
    tmp_162_1_fu_21973_p4 = tmp_161_1_fu_21967_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_162_fu_22321_p4() {
    tmp_162_fu_22321_p4 = rng_state_s26_fu_1354.read().range(27, 3);
}

void particle_filter::thread_tmp_163_1_fu_21983_p3() {
    tmp_163_1_fu_21983_p3 = esl_concat<19,13>(tmp_418_fu_21951_p4.read(), tmp_162_1_fu_21973_p4.read());
}

void particle_filter::thread_tmp_163_fu_22331_p2() {
    tmp_163_fu_22331_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s26_fu_1354.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_164_fu_22337_p2() {
    tmp_164_fu_22337_p2 = (rng_state_s26_fu_1354.read() ^ tmp_163_fu_22331_p2.read());
}

void particle_filter::thread_tmp_165_fu_22343_p4() {
    tmp_165_fu_22343_p4 = tmp_164_fu_22337_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_166_fu_22353_p3() {
    tmp_166_fu_22353_p3 = esl_concat<25,7>(tmp_162_fu_22321_p4.read(), tmp_165_fu_22343_p4.read());
}

void particle_filter::thread_tmp_167_1_fu_22007_p2() {
    tmp_167_1_fu_22007_p2 = (rng_state_s24_fu_1362.read() ^ tmp_546_fu_22001_p2.read());
}

void particle_filter::thread_tmp_167_fu_22361_p4() {
    tmp_167_fu_22361_p4 = rng_state_s46_fu_1274.read().range(14, 4);
}

void particle_filter::thread_tmp_168_1_fu_22013_p4() {
    tmp_168_1_fu_22013_p4 = tmp_167_1_fu_22007_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_168_fu_22371_p2() {
    tmp_168_fu_22371_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s46_fu_1274.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_169_1_fu_22023_p3() {
    tmp_169_1_fu_22023_p3 = esl_concat<25,7>(tmp_421_fu_21991_p4.read(), tmp_168_1_fu_22013_p4.read());
}

void particle_filter::thread_tmp_169_fu_22377_p2() {
    tmp_169_fu_22377_p2 = (rng_state_s46_fu_1274.read() ^ tmp_168_fu_22371_p2.read());
}

void particle_filter::thread_tmp_170_fu_22383_p4() {
    tmp_170_fu_22383_p4 = tmp_169_fu_22377_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_171_fu_22393_p3() {
    tmp_171_fu_22393_p3 = esl_concat<11,21>(tmp_167_fu_22361_p4.read(), tmp_170_fu_22383_p4.read());
}

void particle_filter::thread_tmp_172_fu_22413_p4() {
    tmp_172_fu_22413_p4 = rng_state_s7_fu_1430.read().range(19, 1);
}

void particle_filter::thread_tmp_173_1_fu_22047_p2() {
    tmp_173_1_fu_22047_p2 = (rng_state_s44_fu_1282.read() ^ tmp_547_fu_22041_p2.read());
}

void particle_filter::thread_tmp_173_fu_22423_p2() {
    tmp_173_fu_22423_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s7_fu_1430.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_174_1_fu_22053_p4() {
    tmp_174_1_fu_22053_p4 = tmp_173_1_fu_22047_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_174_fu_22429_p2() {
    tmp_174_fu_22429_p2 = (rng_state_s7_fu_1430.read() ^ tmp_173_fu_22423_p2.read());
}

void particle_filter::thread_tmp_175_1_fu_22063_p3() {
    tmp_175_1_fu_22063_p3 = esl_concat<11,21>(tmp_422_fu_22031_p4.read(), tmp_174_1_fu_22053_p4.read());
}

void particle_filter::thread_tmp_175_fu_22435_p4() {
    tmp_175_fu_22435_p4 = tmp_174_fu_22429_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_176_fu_22445_p3() {
    tmp_176_fu_22445_p3 = esl_concat<19,13>(tmp_172_fu_22413_p4.read(), tmp_175_fu_22435_p4.read());
}

void particle_filter::thread_tmp_177_fu_22453_p4() {
    tmp_177_fu_22453_p4 = rng_state_s27_fu_1350.read().range(27, 3);
}

void particle_filter::thread_tmp_178_fu_26289_p4() {
    tmp_178_fu_26289_p4 = esl_concat<29,3>(esl_concat<8,21>(tmp_332_fu_26279_p4.read(), tmp_138_fu_26121_p4.read()), ap_const_lv3_0);
}

void particle_filter::thread_tmp_179_fu_26299_p2() {
    tmp_179_fu_26299_p2 = (tmp_139_fu_26131_p3.read() ^ tmp_178_fu_26289_p4.read());
}

void particle_filter::thread_tmp_17_fu_21494_p2() {
    tmp_17_fu_21494_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_19_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_19_offset_read.read()));
}

void particle_filter::thread_tmp_180_fu_22463_p2() {
    tmp_180_fu_22463_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s27_fu_1350.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_181_fu_22469_p2() {
    tmp_181_fu_22469_p2 = (rng_state_s27_fu_1350.read() ^ tmp_180_fu_22463_p2.read());
}

void particle_filter::thread_tmp_182_fu_22475_p4() {
    tmp_182_fu_22475_p4 = tmp_181_fu_22469_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_183_1_fu_22099_p2() {
    tmp_183_1_fu_22099_p2 = (rng_state_s5_fu_1438.read() ^ tmp_548_fu_22093_p2.read());
}

void particle_filter::thread_tmp_183_fu_22485_p3() {
    tmp_183_fu_22485_p3 = esl_concat<25,7>(tmp_177_fu_22453_p4.read(), tmp_182_fu_22475_p4.read());
}

void particle_filter::thread_tmp_184_1_fu_22105_p4() {
    tmp_184_1_fu_22105_p4 = tmp_183_1_fu_22099_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_184_fu_22493_p4() {
    tmp_184_fu_22493_p4 = rng_state_s47_fu_1270.read().range(14, 4);
}

void particle_filter::thread_tmp_185_1_fu_22115_p3() {
    tmp_185_1_fu_22115_p3 = esl_concat<19,13>(tmp_423_fu_22083_p4.read(), tmp_184_1_fu_22105_p4.read());
}

void particle_filter::thread_tmp_185_fu_22503_p2() {
    tmp_185_fu_22503_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s47_fu_1270.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_186_fu_22509_p2() {
    tmp_186_fu_22509_p2 = (rng_state_s47_fu_1270.read() ^ tmp_185_fu_22503_p2.read());
}

void particle_filter::thread_tmp_187_fu_22515_p4() {
    tmp_187_fu_22515_p4 = tmp_186_fu_22509_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_188_fu_22525_p3() {
    tmp_188_fu_22525_p3 = esl_concat<11,21>(tmp_184_fu_22493_p4.read(), tmp_187_fu_22515_p4.read());
}

void particle_filter::thread_tmp_189_1_fu_22139_p2() {
    tmp_189_1_fu_22139_p2 = (rng_state_s25_fu_1358.read() ^ tmp_549_fu_22133_p2.read());
}

void particle_filter::thread_tmp_18_fu_21498_p2() {
    tmp_18_fu_21498_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_18_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_18_offset_read.read()));
}

void particle_filter::thread_tmp_190_1_fu_22145_p4() {
    tmp_190_1_fu_22145_p4 = tmp_189_1_fu_22139_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_190_fu_22545_p4() {
    tmp_190_fu_22545_p4 = rng_state_s8_fu_1426.read().range(19, 1);
}

void particle_filter::thread_tmp_191_1_fu_22155_p3() {
    tmp_191_1_fu_22155_p3 = esl_concat<25,7>(tmp_424_fu_22123_p4.read(), tmp_190_1_fu_22145_p4.read());
}

void particle_filter::thread_tmp_191_fu_22555_p2() {
    tmp_191_fu_22555_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s8_fu_1426.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_192_fu_26305_p4() {
    tmp_192_fu_26305_p4 = tmp_179_fu_26299_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_193_fu_26315_p3() {
    tmp_193_fu_26315_p3 = esl_concat<11,21>(tmp_331_fu_26269_p4.read(), tmp_192_fu_26305_p4.read());
}

void particle_filter::thread_tmp_194_fu_22585_p4() {
    tmp_194_fu_22585_p4 = rng_state_s28_fu_1346.read().range(27, 3);
}

void particle_filter::thread_tmp_195_1_fu_22179_p2() {
    tmp_195_1_fu_22179_p2 = (rng_state_s45_fu_1278.read() ^ tmp_550_fu_22173_p2.read());
}

void particle_filter::thread_tmp_195_fu_22595_p2() {
    tmp_195_fu_22595_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s28_fu_1346.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_196_1_fu_22185_p4() {
    tmp_196_1_fu_22185_p4 = tmp_195_1_fu_22179_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_197_1_fu_22195_p3() {
    tmp_197_1_fu_22195_p3 = esl_concat<11,21>(tmp_425_fu_22163_p4.read(), tmp_196_1_fu_22185_p4.read());
}

void particle_filter::thread_tmp_198_fu_26361_p1() {
    tmp_198_fu_26361_p1 = esl_zext<12,11>(exp_tmp_V_fu_26351_p4.read());
}

void particle_filter::thread_tmp_199_fu_22625_p4() {
    tmp_199_fu_22625_p4 = rng_state_s48_fu_1266.read().range(14, 4);
}

void particle_filter::thread_tmp_19_fu_21502_p2() {
    tmp_19_fu_21502_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_17_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_17_offset_read.read()));
}

void particle_filter::thread_tmp_200_fu_26369_p2() {
    tmp_200_fu_26369_p2 = (!tmp_336_fu_26339_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_336_fu_26339_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_201_fu_22635_p2() {
    tmp_201_fu_22635_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s48_fu_1266.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_202_fu_26415_p2() {
    tmp_202_fu_26415_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34467.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_203_fu_26420_p2() {
    tmp_203_fu_26420_p2 = (!ap_const_lv12_C.is_01() || !F2_reg_34467.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_reg_34467.read()));
}

void particle_filter::thread_tmp_204_fu_26544_p2() {
    tmp_204_fu_26544_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(F2_reg_34467.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_205_fu_22677_p4() {
    tmp_205_fu_22677_p4 = rng_state_s9_fu_1422.read().range(19, 1);
}

void particle_filter::thread_tmp_206_fu_26549_p2() {
    tmp_206_fu_26549_p2 = (!sh_amt_reg_34494.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_34494.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_207_fu_22687_p2() {
    tmp_207_fu_22687_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s9_fu_1422.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_208_fu_26554_p2() {
    tmp_208_fu_26554_p2 = (!sh_amt_reg_34494.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_34494.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_209_fu_25841_p2() {
    tmp_209_fu_25841_p2 = (!loc_V_23_fu_25817_p4.read().is_01() || !loc_V_24_fu_25831_p4.read().is_01())? sc_lv<1>(): (sc_biguint<8>(loc_V_23_fu_25817_p4.read()) < sc_biguint<8>(loc_V_24_fu_25831_p4.read()));
}

void particle_filter::thread_tmp_20_fu_21506_p2() {
    tmp_20_fu_21506_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_16_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_16_offset_read.read()));
}

void particle_filter::thread_tmp_210_fu_26559_p0() {
    tmp_210_fu_26559_p0 = sh_amt_cast_fu_26541_p1.read();
}

void particle_filter::thread_tmp_210_fu_26559_p1() {
    tmp_210_fu_26559_p1 = esl_zext<54,32>(tmp_210_fu_26559_p0.read());
}

void particle_filter::thread_tmp_211_fu_26563_p2() {
    tmp_211_fu_26563_p2 = (!man_V_reg_34481.read().is_01() || !tmp_210_fu_26559_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_reg_34481.read()) >> (unsigned short)tmp_210_fu_26559_p1.read().to_uint();
}

void particle_filter::thread_tmp_212_fu_22717_p4() {
    tmp_212_fu_22717_p4 = rng_state_s29_fu_1342.read().range(27, 3);
}

void particle_filter::thread_tmp_214_fu_26582_p0() {
    tmp_214_fu_26582_p0 = esl_sext<32,28>(tmp_363_reg_34501.read());
}

void particle_filter::thread_tmp_214_fu_26582_p1() {
    tmp_214_fu_26582_p1 = sh_amt_cast_fu_26541_p1.read();
}

void particle_filter::thread_tmp_214_fu_26582_p2() {
    tmp_214_fu_26582_p2 = (!tmp_214_fu_26582_p1.read().is_01())? sc_lv<32>(): tmp_214_fu_26582_p0.read() << (unsigned short)tmp_214_fu_26582_p1.read().to_uint();
}

void particle_filter::thread_tmp_215_fu_22727_p2() {
    tmp_215_fu_22727_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s29_fu_1342.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_216_0_1_fu_22561_p2() {
    tmp_216_0_1_fu_22561_p2 = (rng_state_s8_fu_1426.read() ^ tmp_191_fu_22555_p2.read());
}

void particle_filter::thread_tmp_216_0_2_fu_22825_p2() {
    tmp_216_0_2_fu_22825_p2 = (rng_state_s10_fu_1418.read() ^ tmp_227_fu_22819_p2.read());
}

void particle_filter::thread_tmp_216_0_3_fu_23089_p2() {
    tmp_216_0_3_fu_23089_p2 = (rng_state_s12_fu_1410.read() ^ tmp_255_fu_23083_p2.read());
}

void particle_filter::thread_tmp_216_1_1_fu_23617_p2() {
    tmp_216_1_1_fu_23617_p2 = (rng_state_s16_fu_1394.read() ^ tmp_557_fu_23611_p2.read());
}

void particle_filter::thread_tmp_216_1_2_fu_23881_p2() {
    tmp_216_1_2_fu_23881_p2 = (rng_state_s18_fu_1386.read() ^ tmp_563_fu_23875_p2.read());
}

void particle_filter::thread_tmp_216_1_3_fu_24145_p2() {
    tmp_216_1_3_fu_24145_p2 = (rng_state_s20_fu_1378.read() ^ tmp_569_fu_24139_p2.read());
}

void particle_filter::thread_tmp_216_1_fu_23353_p2() {
    tmp_216_1_fu_23353_p2 = (rng_state_s14_fu_1402.read() ^ tmp_551_fu_23347_p2.read());
}

void particle_filter::thread_tmp_216_fu_26437_p2() {
    tmp_216_fu_26437_p2 = (!tmp_202_fu_26415_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_202_fu_26415_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_217_0_1_fu_22567_p4() {
    tmp_217_0_1_fu_22567_p4 = tmp_216_0_1_fu_22561_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_0_2_fu_22831_p4() {
    tmp_217_0_2_fu_22831_p4 = tmp_216_0_2_fu_22825_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_0_3_fu_23095_p4() {
    tmp_217_0_3_fu_23095_p4 = tmp_216_0_3_fu_23089_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_1_fu_23623_p4() {
    tmp_217_1_1_fu_23623_p4 = tmp_216_1_1_fu_23617_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_2_fu_23887_p4() {
    tmp_217_1_2_fu_23887_p4 = tmp_216_1_2_fu_23881_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_3_fu_24151_p4() {
    tmp_217_1_3_fu_24151_p4 = tmp_216_1_3_fu_24145_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_fu_23359_p4() {
    tmp_217_1_fu_23359_p4 = tmp_216_1_fu_23353_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_fu_26443_p2() {
    tmp_217_fu_26443_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34467.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_218_0_1_fu_22577_p3() {
    tmp_218_0_1_fu_22577_p3 = esl_concat<19,13>(tmp_190_fu_22545_p4.read(), tmp_217_0_1_fu_22567_p4.read());
}

void particle_filter::thread_tmp_218_0_2_fu_22841_p3() {
    tmp_218_0_2_fu_22841_p3 = esl_concat<19,13>(tmp_226_fu_22809_p4.read(), tmp_217_0_2_fu_22831_p4.read());
}

void particle_filter::thread_tmp_218_0_3_fu_23105_p3() {
    tmp_218_0_3_fu_23105_p3 = esl_concat<19,13>(tmp_251_fu_23073_p4.read(), tmp_217_0_3_fu_23095_p4.read());
}

void particle_filter::thread_tmp_218_1_1_fu_23633_p3() {
    tmp_218_1_1_fu_23633_p3 = esl_concat<19,13>(tmp_432_fu_23601_p4.read(), tmp_217_1_1_fu_23623_p4.read());
}

void particle_filter::thread_tmp_218_1_2_fu_23897_p3() {
    tmp_218_1_2_fu_23897_p3 = esl_concat<19,13>(tmp_438_fu_23865_p4.read(), tmp_217_1_2_fu_23887_p4.read());
}

void particle_filter::thread_tmp_218_1_3_fu_24161_p3() {
    tmp_218_1_3_fu_24161_p3 = esl_concat<19,13>(tmp_444_fu_24129_p4.read(), tmp_217_1_3_fu_24151_p4.read());
}

void particle_filter::thread_tmp_218_1_fu_23369_p3() {
    tmp_218_1_fu_23369_p3 = esl_concat<19,13>(tmp_426_fu_23337_p4.read(), tmp_217_1_fu_23359_p4.read());
}

void particle_filter::thread_tmp_218_fu_22757_p4() {
    tmp_218_fu_22757_p4 = rng_state_s49_fu_1262.read().range(14, 4);
}

void particle_filter::thread_tmp_219_fu_22767_p2() {
    tmp_219_fu_22767_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s49_fu_1262.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_21_fu_21510_p2() {
    tmp_21_fu_21510_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_15_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_15_offset_read.read()));
}

void particle_filter::thread_tmp_220_fu_26600_p2() {
    tmp_220_fu_26600_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_reg_34467.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_221_fu_26467_p2() {
    tmp_221_fu_26467_p2 = (!F2_reg_34467.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34467.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_222_0_1_fu_22601_p2() {
    tmp_222_0_1_fu_22601_p2 = (rng_state_s28_fu_1346.read() ^ tmp_195_fu_22595_p2.read());
}

void particle_filter::thread_tmp_222_0_2_fu_22865_p2() {
    tmp_222_0_2_fu_22865_p2 = (rng_state_s30_fu_1338.read() ^ tmp_230_fu_22859_p2.read());
}

void particle_filter::thread_tmp_222_0_3_fu_23129_p2() {
    tmp_222_0_3_fu_23129_p2 = (rng_state_s32_fu_1330.read() ^ tmp_261_fu_23123_p2.read());
}

void particle_filter::thread_tmp_222_1_1_fu_23657_p2() {
    tmp_222_1_1_fu_23657_p2 = (rng_state_s36_fu_1314.read() ^ tmp_558_fu_23651_p2.read());
}

void particle_filter::thread_tmp_222_1_2_fu_23921_p2() {
    tmp_222_1_2_fu_23921_p2 = (rng_state_s38_fu_1306.read() ^ tmp_564_fu_23915_p2.read());
}

void particle_filter::thread_tmp_222_1_3_fu_24185_p2() {
    tmp_222_1_3_fu_24185_p2 = (rng_state_s40_fu_1298.read() ^ tmp_570_fu_24179_p2.read());
}

void particle_filter::thread_tmp_222_1_fu_23393_p2() {
    tmp_222_1_fu_23393_p2 = (rng_state_s34_fu_1322.read() ^ tmp_552_fu_23387_p2.read());
}

void particle_filter::thread_tmp_222_fu_26476_p2() {
    tmp_222_fu_26476_p2 = (!tmp_221_fu_26467_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_221_fu_26467_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_223_0_1_fu_22607_p4() {
    tmp_223_0_1_fu_22607_p4 = tmp_222_0_1_fu_22601_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_0_2_fu_22871_p4() {
    tmp_223_0_2_fu_22871_p4 = tmp_222_0_2_fu_22865_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_0_3_fu_23135_p4() {
    tmp_223_0_3_fu_23135_p4 = tmp_222_0_3_fu_23129_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_1_fu_23663_p4() {
    tmp_223_1_1_fu_23663_p4 = tmp_222_1_1_fu_23657_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_2_fu_23927_p4() {
    tmp_223_1_2_fu_23927_p4 = tmp_222_1_2_fu_23921_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_3_fu_24191_p4() {
    tmp_223_1_3_fu_24191_p4 = tmp_222_1_3_fu_24185_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_fu_23399_p4() {
    tmp_223_1_fu_23399_p4 = tmp_222_1_fu_23393_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_fu_26482_p3() {
    tmp_223_fu_26482_p3 = (!tmp_222_fu_26476_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_222_fu_26476_p2.read()[0].to_bool())? ap_const_lv11_35: tmp_393_fu_26472_p1.read());
}

void particle_filter::thread_tmp_224_0_1_fu_22617_p3() {
    tmp_224_0_1_fu_22617_p3 = esl_concat<25,7>(tmp_194_fu_22585_p4.read(), tmp_223_0_1_fu_22607_p4.read());
}

void particle_filter::thread_tmp_224_0_2_fu_22881_p3() {
    tmp_224_0_2_fu_22881_p3 = esl_concat<25,7>(tmp_228_fu_22849_p4.read(), tmp_223_0_2_fu_22871_p4.read());
}

void particle_filter::thread_tmp_224_0_3_fu_23145_p3() {
    tmp_224_0_3_fu_23145_p3 = esl_concat<25,7>(tmp_257_fu_23113_p4.read(), tmp_223_0_3_fu_23135_p4.read());
}

void particle_filter::thread_tmp_224_1_1_fu_23673_p3() {
    tmp_224_1_1_fu_23673_p3 = esl_concat<25,7>(tmp_433_fu_23641_p4.read(), tmp_223_1_1_fu_23663_p4.read());
}

void particle_filter::thread_tmp_224_1_2_fu_23937_p3() {
    tmp_224_1_2_fu_23937_p3 = esl_concat<25,7>(tmp_439_fu_23905_p4.read(), tmp_223_1_2_fu_23927_p4.read());
}

void particle_filter::thread_tmp_224_1_3_fu_24201_p3() {
    tmp_224_1_3_fu_24201_p3 = esl_concat<25,7>(tmp_445_fu_24169_p4.read(), tmp_223_1_3_fu_24191_p4.read());
}

void particle_filter::thread_tmp_224_1_fu_23409_p3() {
    tmp_224_1_fu_23409_p3 = esl_concat<25,7>(tmp_427_fu_23377_p4.read(), tmp_223_1_fu_23399_p4.read());
}

void particle_filter::thread_tmp_224_fu_26605_p2() {
    tmp_224_fu_26605_p2 = (!p_Result_3_reg_34512.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_3_reg_34512.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_225_fu_26785_p1() {
    tmp_225_fu_26785_p1 = esl_zext<28,1>(qb_assign_1_fu_26781_p2.read());
}

void particle_filter::thread_tmp_226_fu_22809_p4() {
    tmp_226_fu_22809_p4 = rng_state_s10_fu_1418.read().range(19, 1);
}

void particle_filter::thread_tmp_227_fu_22819_p2() {
    tmp_227_fu_22819_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s10_fu_1418.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_228_0_1_fu_22641_p2() {
    tmp_228_0_1_fu_22641_p2 = (rng_state_s48_fu_1266.read() ^ tmp_201_fu_22635_p2.read());
}

void particle_filter::thread_tmp_228_0_2_fu_22905_p2() {
    tmp_228_0_2_fu_22905_p2 = (rng_state_s50_fu_1258.read() ^ tmp_235_fu_22899_p2.read());
}

void particle_filter::thread_tmp_228_0_3_fu_23169_p2() {
    tmp_228_0_3_fu_23169_p2 = (rng_state_s52_fu_1250.read() ^ tmp_267_fu_23163_p2.read());
}

void particle_filter::thread_tmp_228_1_1_fu_23697_p2() {
    tmp_228_1_1_fu_23697_p2 = (rng_state_s56_fu_1234.read() ^ tmp_559_fu_23691_p2.read());
}

void particle_filter::thread_tmp_228_1_2_fu_23961_p2() {
    tmp_228_1_2_fu_23961_p2 = (rng_state_s58_fu_1226.read() ^ tmp_565_fu_23955_p2.read());
}

void particle_filter::thread_tmp_228_1_3_fu_24225_p2() {
    tmp_228_1_3_fu_24225_p2 = (rng_state_s60_fu_1218.read() ^ tmp_571_fu_24219_p2.read());
}

void particle_filter::thread_tmp_228_1_fu_23433_p2() {
    tmp_228_1_fu_23433_p2 = (rng_state_s54_fu_1242.read() ^ tmp_553_fu_23427_p2.read());
}

void particle_filter::thread_tmp_228_fu_22849_p4() {
    tmp_228_fu_22849_p4 = rng_state_s30_fu_1338.read().range(27, 3);
}

void particle_filter::thread_tmp_229_0_1_fu_22647_p4() {
    tmp_229_0_1_fu_22647_p4 = tmp_228_0_1_fu_22641_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_0_2_fu_22911_p4() {
    tmp_229_0_2_fu_22911_p4 = tmp_228_0_2_fu_22905_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_0_3_fu_23175_p4() {
    tmp_229_0_3_fu_23175_p4 = tmp_228_0_3_fu_23169_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_1_fu_23703_p4() {
    tmp_229_1_1_fu_23703_p4 = tmp_228_1_1_fu_23697_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_2_fu_23967_p4() {
    tmp_229_1_2_fu_23967_p4 = tmp_228_1_2_fu_23961_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_3_fu_24231_p4() {
    tmp_229_1_3_fu_24231_p4 = tmp_228_1_3_fu_24225_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_fu_23439_p4() {
    tmp_229_1_fu_23439_p4 = tmp_228_1_fu_23433_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_fu_26512_p2() {
    tmp_229_fu_26512_p2 = (!tmp447_cast_cast_fu_26504_p3.read().is_01() || !exp_V_fu_26381_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp447_cast_cast_fu_26504_p3.read()) + sc_biguint<12>(exp_V_fu_26381_p2.read()));
}

void particle_filter::thread_tmp_22_fu_21514_p2() {
    tmp_22_fu_21514_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_14_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_14_offset_read.read()));
}

void particle_filter::thread_tmp_230_0_1_fu_22657_p3() {
    tmp_230_0_1_fu_22657_p3 = esl_concat<11,21>(tmp_199_fu_22625_p4.read(), tmp_229_0_1_fu_22647_p4.read());
}

void particle_filter::thread_tmp_230_0_2_fu_22921_p3() {
    tmp_230_0_2_fu_22921_p3 = esl_concat<11,21>(tmp_232_fu_22889_p4.read(), tmp_229_0_2_fu_22911_p4.read());
}

void particle_filter::thread_tmp_230_0_3_fu_23185_p3() {
    tmp_230_0_3_fu_23185_p3 = esl_concat<11,21>(tmp_263_fu_23153_p4.read(), tmp_229_0_3_fu_23175_p4.read());
}

void particle_filter::thread_tmp_230_1_1_fu_23713_p3() {
    tmp_230_1_1_fu_23713_p3 = esl_concat<11,21>(tmp_434_fu_23681_p4.read(), tmp_229_1_1_fu_23703_p4.read());
}

void particle_filter::thread_tmp_230_1_2_fu_23977_p3() {
    tmp_230_1_2_fu_23977_p3 = esl_concat<11,21>(tmp_440_fu_23945_p4.read(), tmp_229_1_2_fu_23967_p4.read());
}

void particle_filter::thread_tmp_230_1_3_fu_24241_p3() {
    tmp_230_1_3_fu_24241_p3 = esl_concat<11,21>(tmp_446_fu_24209_p4.read(), tmp_229_1_3_fu_24231_p4.read());
}

void particle_filter::thread_tmp_230_1_fu_23449_p3() {
    tmp_230_1_fu_23449_p3 = esl_concat<11,21>(tmp_428_fu_23417_p4.read(), tmp_229_1_fu_23439_p4.read());
}

void particle_filter::thread_tmp_230_fu_22859_p2() {
    tmp_230_fu_22859_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s30_fu_1338.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_231_fu_26675_p2() {
    tmp_231_fu_26675_p2 = (!pos1_fu_26663_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_fu_26663_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_232_fu_22889_p4() {
    tmp_232_fu_22889_p4 = rng_state_s50_fu_1258.read().range(14, 4);
}

void particle_filter::thread_tmp_233_fu_26695_p0() {
    tmp_233_fu_26695_p0 = esl_sext<32,12>(pos1_fu_26663_p2.read());
}

void particle_filter::thread_tmp_233_fu_26695_p1() {
    tmp_233_fu_26695_p1 = esl_zext<54,32>(tmp_233_fu_26695_p0.read());
}

void particle_filter::thread_tmp_234_fu_26699_p2() {
    tmp_234_fu_26699_p2 = (!man_V_reg_34481.read().is_01() || !tmp_233_fu_26695_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_reg_34481.read()) >> (unsigned short)tmp_233_fu_26695_p1.read().to_uint();
}

void particle_filter::thread_tmp_235_fu_22899_p2() {
    tmp_235_fu_22899_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s50_fu_1258.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_236_fu_22941_p4() {
    tmp_236_fu_22941_p4 = rng_state_s11_fu_1414.read().range(19, 1);
}

void particle_filter::thread_tmp_237_fu_26713_p2() {
    tmp_237_fu_26713_p2 = (!pos2_reg_34522.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_reg_34522.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_237_not_fu_26755_p2() {
    tmp_237_not_fu_26755_p2 = (tmp_237_fu_26713_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_238_0_1_fu_22693_p2() {
    tmp_238_0_1_fu_22693_p2 = (rng_state_s9_fu_1422.read() ^ tmp_207_fu_22687_p2.read());
}

void particle_filter::thread_tmp_238_0_2_fu_22957_p2() {
    tmp_238_0_2_fu_22957_p2 = (rng_state_s11_fu_1414.read() ^ tmp_240_fu_22951_p2.read());
}

void particle_filter::thread_tmp_238_0_3_fu_23221_p2() {
    tmp_238_0_3_fu_23221_p2 = (rng_state_s13_fu_1406.read() ^ tmp_271_fu_23215_p2.read());
}

void particle_filter::thread_tmp_238_1_1_fu_23749_p2() {
    tmp_238_1_1_fu_23749_p2 = (rng_state_s17_fu_1390.read() ^ tmp_560_fu_23743_p2.read());
}

void particle_filter::thread_tmp_238_1_2_fu_24013_p2() {
    tmp_238_1_2_fu_24013_p2 = (rng_state_s19_fu_1382.read() ^ tmp_566_fu_24007_p2.read());
}

void particle_filter::thread_tmp_238_1_3_fu_24277_p2() {
    tmp_238_1_3_fu_24277_p2 = (rng_state_s21_fu_1374.read() ^ tmp_572_fu_24271_p2.read());
}

void particle_filter::thread_tmp_238_1_fu_23485_p2() {
    tmp_238_1_fu_23485_p2 = (rng_state_s15_fu_1398.read() ^ tmp_554_fu_23479_p2.read());
}

void particle_filter::thread_tmp_238_fu_26718_p0() {
    tmp_238_fu_26718_p0 = esl_sext<32,12>(pos2_reg_34522.read());
}

void particle_filter::thread_tmp_238_fu_26718_p1() {
    tmp_238_fu_26718_p1 = esl_zext<54,32>(tmp_238_fu_26718_p0.read());
}

void particle_filter::thread_tmp_239_0_1_fu_22699_p4() {
    tmp_239_0_1_fu_22699_p4 = tmp_238_0_1_fu_22693_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_0_2_fu_22963_p4() {
    tmp_239_0_2_fu_22963_p4 = tmp_238_0_2_fu_22957_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_0_3_fu_23227_p4() {
    tmp_239_0_3_fu_23227_p4 = tmp_238_0_3_fu_23221_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_1_fu_23755_p4() {
    tmp_239_1_1_fu_23755_p4 = tmp_238_1_1_fu_23749_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_2_fu_24019_p4() {
    tmp_239_1_2_fu_24019_p4 = tmp_238_1_2_fu_24013_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_3_fu_24283_p4() {
    tmp_239_1_3_fu_24283_p4 = tmp_238_1_3_fu_24277_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_fu_23491_p4() {
    tmp_239_1_fu_23491_p4 = tmp_238_1_fu_23485_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_fu_26739_p2() {
    tmp_239_fu_26739_p2 = (!Range2_V_1_fu_26722_p2.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_1_fu_26722_p2.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_23_fu_21518_p2() {
    tmp_23_fu_21518_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_13_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_13_offset_read.read()));
}

void particle_filter::thread_tmp_240_0_1_fu_22709_p3() {
    tmp_240_0_1_fu_22709_p3 = esl_concat<19,13>(tmp_205_fu_22677_p4.read(), tmp_239_0_1_fu_22699_p4.read());
}

void particle_filter::thread_tmp_240_0_2_fu_22973_p3() {
    tmp_240_0_2_fu_22973_p3 = esl_concat<19,13>(tmp_236_fu_22941_p4.read(), tmp_239_0_2_fu_22963_p4.read());
}

void particle_filter::thread_tmp_240_0_3_fu_23237_p3() {
    tmp_240_0_3_fu_23237_p3 = esl_concat<19,13>(tmp_270_fu_23205_p4.read(), tmp_239_0_3_fu_23227_p4.read());
}

void particle_filter::thread_tmp_240_1_1_fu_23765_p3() {
    tmp_240_1_1_fu_23765_p3 = esl_concat<19,13>(tmp_435_fu_23733_p4.read(), tmp_239_1_1_fu_23755_p4.read());
}

void particle_filter::thread_tmp_240_1_2_fu_24029_p3() {
    tmp_240_1_2_fu_24029_p3 = esl_concat<19,13>(tmp_441_fu_23997_p4.read(), tmp_239_1_2_fu_24019_p4.read());
}

void particle_filter::thread_tmp_240_1_3_fu_24293_p3() {
    tmp_240_1_3_fu_24293_p3 = esl_concat<19,13>(tmp_447_fu_24261_p4.read(), tmp_239_1_3_fu_24283_p4.read());
}

void particle_filter::thread_tmp_240_1_fu_23501_p3() {
    tmp_240_1_fu_23501_p3 = esl_concat<19,13>(tmp_429_fu_23469_p4.read(), tmp_239_1_fu_23491_p4.read());
}

void particle_filter::thread_tmp_240_fu_22951_p2() {
    tmp_240_fu_22951_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s11_fu_1414.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_241_fu_26745_p2() {
    tmp_241_fu_26745_p2 = (!pos2_reg_34522.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_reg_34522.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_242_fu_22981_p4() {
    tmp_242_fu_22981_p4 = rng_state_s31_fu_1334.read().range(27, 3);
}

void particle_filter::thread_tmp_243_fu_22991_p2() {
    tmp_243_fu_22991_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s31_fu_1334.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_244_0_1_fu_22733_p2() {
    tmp_244_0_1_fu_22733_p2 = (rng_state_s29_fu_1342.read() ^ tmp_215_fu_22727_p2.read());
}

void particle_filter::thread_tmp_244_0_2_fu_22997_p2() {
    tmp_244_0_2_fu_22997_p2 = (rng_state_s31_fu_1334.read() ^ tmp_243_fu_22991_p2.read());
}

void particle_filter::thread_tmp_244_0_3_fu_23261_p2() {
    tmp_244_0_3_fu_23261_p2 = (rng_state_s33_fu_1326.read() ^ tmp_273_fu_23255_p2.read());
}

void particle_filter::thread_tmp_244_1_1_fu_23789_p2() {
    tmp_244_1_1_fu_23789_p2 = (rng_state_s37_fu_1310.read() ^ tmp_561_fu_23783_p2.read());
}

void particle_filter::thread_tmp_244_1_2_fu_24053_p2() {
    tmp_244_1_2_fu_24053_p2 = (rng_state_s39_fu_1302.read() ^ tmp_567_fu_24047_p2.read());
}

void particle_filter::thread_tmp_244_1_3_fu_24317_p2() {
    tmp_244_1_3_fu_24317_p2 = (rng_state_s41_fu_1294.read() ^ tmp_573_fu_24311_p2.read());
}

void particle_filter::thread_tmp_244_1_fu_23525_p2() {
    tmp_244_1_fu_23525_p2 = (rng_state_s35_fu_1318.read() ^ tmp_555_fu_23519_p2.read());
}

void particle_filter::thread_tmp_244_fu_27011_p2() {
    tmp_244_fu_27011_p2 = (Range1_all_ones_2_i1_148_reg_34709.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_245_0_1_fu_22739_p4() {
    tmp_245_0_1_fu_22739_p4 = tmp_244_0_1_fu_22733_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_0_2_fu_23003_p4() {
    tmp_245_0_2_fu_23003_p4 = tmp_244_0_2_fu_22997_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_0_3_fu_23267_p4() {
    tmp_245_0_3_fu_23267_p4 = tmp_244_0_3_fu_23261_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_1_fu_23795_p4() {
    tmp_245_1_1_fu_23795_p4 = tmp_244_1_1_fu_23789_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_2_fu_24059_p4() {
    tmp_245_1_2_fu_24059_p4 = tmp_244_1_2_fu_24053_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_3_fu_24323_p4() {
    tmp_245_1_3_fu_24323_p4 = tmp_244_1_3_fu_24317_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_fu_23531_p4() {
    tmp_245_1_fu_23531_p4 = tmp_244_1_fu_23525_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_fu_27041_p2() {
    tmp_245_fu_27041_p2 = (isneg_reg_34438.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_246_0_1_fu_22749_p3() {
    tmp_246_0_1_fu_22749_p3 = esl_concat<25,7>(tmp_212_fu_22717_p4.read(), tmp_245_0_1_fu_22739_p4.read());
}

void particle_filter::thread_tmp_246_0_2_fu_23013_p3() {
    tmp_246_0_2_fu_23013_p3 = esl_concat<25,7>(tmp_242_fu_22981_p4.read(), tmp_245_0_2_fu_23003_p4.read());
}

void particle_filter::thread_tmp_246_0_3_fu_23277_p3() {
    tmp_246_0_3_fu_23277_p3 = esl_concat<25,7>(tmp_272_fu_23245_p4.read(), tmp_245_0_3_fu_23267_p4.read());
}

void particle_filter::thread_tmp_246_1_1_fu_23805_p3() {
    tmp_246_1_1_fu_23805_p3 = esl_concat<25,7>(tmp_436_fu_23773_p4.read(), tmp_245_1_1_fu_23795_p4.read());
}

void particle_filter::thread_tmp_246_1_2_fu_24069_p3() {
    tmp_246_1_2_fu_24069_p3 = esl_concat<25,7>(tmp_442_fu_24037_p4.read(), tmp_245_1_2_fu_24059_p4.read());
}

void particle_filter::thread_tmp_246_1_3_fu_24333_p3() {
    tmp_246_1_3_fu_24333_p3 = esl_concat<25,7>(tmp_449_fu_24301_p4.read(), tmp_245_1_3_fu_24323_p4.read());
}

void particle_filter::thread_tmp_246_1_fu_23541_p3() {
    tmp_246_1_fu_23541_p3 = esl_concat<25,7>(tmp_430_fu_23509_p4.read(), tmp_245_1_fu_23531_p4.read());
}

void particle_filter::thread_tmp_247_fu_27204_p1() {
    tmp_247_fu_27204_p1 = esl_zext<12,11>(exp_tmp_V_1_fu_27195_p4.read());
}

void particle_filter::thread_tmp_248_fu_23021_p4() {
    tmp_248_fu_23021_p4 = rng_state_s51_fu_1254.read().range(14, 4);
}

void particle_filter::thread_tmp_249_fu_27168_p2() {
    tmp_249_fu_27168_p2 = (!tmp_402_fu_27164_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_402_fu_27164_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_24_fu_21522_p2() {
    tmp_24_fu_21522_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_12_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_12_offset_read.read()));
}

void particle_filter::thread_tmp_250_0_1_fu_22773_p2() {
    tmp_250_0_1_fu_22773_p2 = (rng_state_s49_fu_1262.read() ^ tmp_219_fu_22767_p2.read());
}

void particle_filter::thread_tmp_250_0_2_fu_23037_p2() {
    tmp_250_0_2_fu_23037_p2 = (rng_state_s51_fu_1254.read() ^ tmp_250_fu_23031_p2.read());
}

void particle_filter::thread_tmp_250_0_3_fu_23301_p2() {
    tmp_250_0_3_fu_23301_p2 = (rng_state_s53_fu_1246.read() ^ tmp_282_fu_23295_p2.read());
}

void particle_filter::thread_tmp_250_1_1_fu_23829_p2() {
    tmp_250_1_1_fu_23829_p2 = (rng_state_s57_fu_1230.read() ^ tmp_562_fu_23823_p2.read());
}

void particle_filter::thread_tmp_250_1_2_fu_24093_p2() {
    tmp_250_1_2_fu_24093_p2 = (rng_state_s59_fu_1222.read() ^ tmp_568_fu_24087_p2.read());
}

void particle_filter::thread_tmp_250_1_3_fu_24357_p2() {
    tmp_250_1_3_fu_24357_p2 = (rng_state_s61_fu_1214.read() ^ tmp_574_fu_24351_p2.read());
}

void particle_filter::thread_tmp_250_1_fu_23565_p2() {
    tmp_250_1_fu_23565_p2 = (rng_state_s55_fu_1238.read() ^ tmp_556_fu_23559_p2.read());
}

void particle_filter::thread_tmp_250_fu_23031_p2() {
    tmp_250_fu_23031_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s51_fu_1254.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_251_0_1_fu_22779_p4() {
    tmp_251_0_1_fu_22779_p4 = tmp_250_0_1_fu_22773_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_0_2_fu_23043_p4() {
    tmp_251_0_2_fu_23043_p4 = tmp_250_0_2_fu_23037_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_0_3_fu_23307_p4() {
    tmp_251_0_3_fu_23307_p4 = tmp_250_0_3_fu_23301_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_1_fu_23835_p4() {
    tmp_251_1_1_fu_23835_p4 = tmp_250_1_1_fu_23829_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_2_fu_24099_p4() {
    tmp_251_1_2_fu_24099_p4 = tmp_250_1_2_fu_24093_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_3_fu_24363_p4() {
    tmp_251_1_3_fu_24363_p4 = tmp_250_1_3_fu_24357_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_fu_23571_p4() {
    tmp_251_1_fu_23571_p4 = tmp_250_1_fu_23565_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_fu_23073_p4() {
    tmp_251_fu_23073_p4 = rng_state_s12_fu_1410.read().range(19, 1);
}

void particle_filter::thread_tmp_252_0_1_fu_22789_p3() {
    tmp_252_0_1_fu_22789_p3 = esl_concat<11,21>(tmp_218_fu_22757_p4.read(), tmp_251_0_1_fu_22779_p4.read());
}

void particle_filter::thread_tmp_252_0_2_fu_23053_p3() {
    tmp_252_0_2_fu_23053_p3 = esl_concat<11,21>(tmp_248_fu_23021_p4.read(), tmp_251_0_2_fu_23043_p4.read());
}

void particle_filter::thread_tmp_252_0_3_fu_23317_p3() {
    tmp_252_0_3_fu_23317_p3 = esl_concat<11,21>(tmp_279_fu_23285_p4.read(), tmp_251_0_3_fu_23307_p4.read());
}

void particle_filter::thread_tmp_252_1_1_fu_23845_p3() {
    tmp_252_1_1_fu_23845_p3 = esl_concat<11,21>(tmp_437_fu_23813_p4.read(), tmp_251_1_1_fu_23835_p4.read());
}

void particle_filter::thread_tmp_252_1_2_fu_24109_p3() {
    tmp_252_1_2_fu_24109_p3 = esl_concat<11,21>(tmp_443_fu_24077_p4.read(), tmp_251_1_2_fu_24099_p4.read());
}

void particle_filter::thread_tmp_252_1_3_fu_24373_p3() {
    tmp_252_1_3_fu_24373_p3 = esl_concat<11,21>(tmp_451_fu_24341_p4.read(), tmp_251_1_3_fu_24363_p4.read());
}

void particle_filter::thread_tmp_252_1_fu_23581_p3() {
    tmp_252_1_fu_23581_p3 = esl_concat<11,21>(tmp_431_fu_23549_p4.read(), tmp_251_1_fu_23571_p4.read());
}

void particle_filter::thread_tmp_252_fu_27241_p2() {
    tmp_252_fu_27241_p2 = (!F2_1_fu_27229_p2.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_fu_27229_p2.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_253_fu_27247_p2() {
    tmp_253_fu_27247_p2 = (!ap_const_lv12_C.is_01() || !F2_1_fu_27229_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_1_fu_27229_p2.read()));
}

void particle_filter::thread_tmp_254_fu_27310_p2() {
    tmp_254_fu_27310_p2 = (!F2_1_reg_34821.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(F2_1_reg_34821.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_255_fu_23083_p2() {
    tmp_255_fu_23083_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s12_fu_1410.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_256_fu_27319_p2() {
    tmp_256_fu_27319_p2 = (!sh_amt_1_reg_34837.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_34837.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_257_fu_23113_p4() {
    tmp_257_fu_23113_p4 = rng_state_s32_fu_1330.read().range(27, 3);
}

void particle_filter::thread_tmp_258_fu_27324_p2() {
    tmp_258_fu_27324_p2 = (!sh_amt_1_reg_34837.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_34837.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_25_fu_21526_p2() {
    tmp_25_fu_21526_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_11_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_11_offset_read.read()));
}

void particle_filter::thread_tmp_260_fu_28397_p1() {
    tmp_260_fu_28397_p1 = esl_zext<12,11>(p_Result_4_fu_28387_p4.read());
}

void particle_filter::thread_tmp_261_fu_23123_p2() {
    tmp_261_fu_23123_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s32_fu_1330.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_262_fu_28405_p2() {
    tmp_262_fu_28405_p2 = (!tmp_452_fu_28375_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_452_fu_28375_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_263_fu_23153_p4() {
    tmp_263_fu_23153_p4 = rng_state_s52_fu_1250.read().range(14, 4);
}

void particle_filter::thread_tmp_264_cast_fu_30566_p1() {
    tmp_264_cast_fu_30566_p1 = esl_zext<32,14>(tmp_264_fu_30559_p3.read());
}

void particle_filter::thread_tmp_264_fu_30559_p3() {
    tmp_264_fu_30559_p3 = esl_concat<1,13>(tmp_502_reg_36090.read(), ap_const_lv13_0);
}

void particle_filter::thread_tmp_265_fu_27329_p0() {
    tmp_265_fu_27329_p0 = esl_sext<32,12>(sh_amt_1_reg_34837.read());
}

void particle_filter::thread_tmp_265_fu_27329_p1() {
    tmp_265_fu_27329_p1 = esl_zext<54,32>(tmp_265_fu_27329_p0.read());
}

void particle_filter::thread_tmp_266_fu_27333_p2() {
    tmp_266_fu_27333_p2 = (!man_V_6_fu_27301_p3.read().is_01() || !tmp_265_fu_27329_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_6_fu_27301_p3.read()) >> (unsigned short)tmp_265_fu_27329_p1.read().to_uint();
}

void particle_filter::thread_tmp_267_fu_23163_p2() {
    tmp_267_fu_23163_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s52_fu_1250.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_269_fu_27544_p0() {
    tmp_269_fu_27544_p0 = esl_sext<32,28>(tmp_406_reg_34884.read());
}

void particle_filter::thread_tmp_269_fu_27544_p2() {
    tmp_269_fu_27544_p2 = (!sh_amt_1_cast_reg_34873.read().is_01())? sc_lv<32>(): tmp_269_fu_27544_p0.read() << (unsigned short)sh_amt_1_cast_reg_34873.read().to_uint();
}

void particle_filter::thread_tmp_26_fu_21530_p2() {
    tmp_26_fu_21530_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_10_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_10_offset_read.read()));
}

void particle_filter::thread_tmp_270_fu_23205_p4() {
    tmp_270_fu_23205_p4 = rng_state_s13_fu_1406.read().range(19, 1);
}

void particle_filter::thread_tmp_271_fu_23215_p2() {
    tmp_271_fu_23215_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s13_fu_1406.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_272_fu_23245_p4() {
    tmp_272_fu_23245_p4 = rng_state_s33_fu_1326.read().range(27, 3);
}

void particle_filter::thread_tmp_273_fu_23255_p2() {
    tmp_273_fu_23255_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s33_fu_1326.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_274_fu_28497_p2() {
    tmp_274_fu_28497_p2 = (!F2_2_reg_35314.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35314.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_275_fu_28502_p2() {
    tmp_275_fu_28502_p2 = (!ap_const_lv12_C.is_01() || !F2_2_reg_35314.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_2_reg_35314.read()));
}

void particle_filter::thread_tmp_276_fu_28786_p2() {
    tmp_276_fu_28786_p2 = (!ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_277_fu_30573_p2() {
    tmp_277_fu_30573_p2 = (!i10_cast_fu_30570_p1.read().is_01() || !tmp_264_cast_fu_30566_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(i10_cast_fu_30570_p1.read()) + sc_biguint<32>(tmp_264_cast_fu_30566_p1.read()));
}

void particle_filter::thread_tmp_278_fu_27261_p2() {
    tmp_278_fu_27261_p2 = (!tmp_252_fu_27241_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_252_fu_27241_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_279_fu_23285_p4() {
    tmp_279_fu_23285_p4 = rng_state_s53_fu_1246.read().range(14, 4);
}

void particle_filter::thread_tmp_27_fu_21534_p2() {
    tmp_27_fu_21534_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_9_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_9_offset_read.read()));
}

void particle_filter::thread_tmp_280_fu_31022_p2() {
    tmp_280_fu_31022_p2 = (!index_reg_36285.read().is_01() || !tmp_498_fu_31017_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(index_reg_36285.read()) + sc_biguint<32>(tmp_498_fu_31017_p2.read()));
}

void particle_filter::thread_tmp_281_fu_27343_p2() {
    tmp_281_fu_27343_p2 = (!F2_1_reg_34821.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_reg_34821.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_282_fu_23295_p2() {
    tmp_282_fu_23295_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s53_fu_1246.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_284_fu_28791_p2() {
    tmp_284_fu_28791_p2 = (!sh_amt_2_reg_35384.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_35384.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_286_fu_28796_p2() {
    tmp_286_fu_28796_p2 = (!sh_amt_2_reg_35384.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_35384.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_287_fu_27367_p2() {
    tmp_287_fu_27367_p2 = (!F2_1_reg_34821.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_1_reg_34821.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_288_fu_28801_p0() {
    tmp_288_fu_28801_p0 = sh_amt_2_cast_fu_28783_p1.read();
}

void particle_filter::thread_tmp_288_fu_28801_p1() {
    tmp_288_fu_28801_p1 = esl_zext<54,32>(tmp_288_fu_28801_p0.read());
}

void particle_filter::thread_tmp_289_fu_30635_p2() {
    tmp_289_fu_30635_p2 = (!index_replicated_fu_30629_p2.read().is_01() || !tmp_86_reg_32624.read().is_01())? sc_lv<1>(): (sc_biguint<32>(index_replicated_fu_30629_p2.read()) > sc_biguint<32>(tmp_86_reg_32624.read()));
}

void particle_filter::thread_tmp_28_fu_21538_p2() {
    tmp_28_fu_21538_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_8_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_8_offset_read.read()));
}

void particle_filter::thread_tmp_290_fu_26007_p2() {
    tmp_290_fu_26007_p2 = (!ap_const_lv32_C.is_01())? sc_lv<32>(): rng_state_s22_reg_2344.read() << (unsigned short)ap_const_lv32_C.to_uint();
}

void particle_filter::thread_tmp_291_fu_27267_p2() {
    tmp_291_fu_27267_p2 = (!F2_1_fu_27229_p2.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_fu_27229_p2.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_292_fu_27277_p2() {
    tmp_292_fu_27277_p2 = (!tmp_291_fu_27267_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_291_fu_27267_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_293_fu_27372_p3() {
    tmp_293_fu_27372_p3 = (!tmp_292_reg_34854.read()[0].is_01())? sc_lv<11>(): ((tmp_292_reg_34854.read()[0].to_bool())? ap_const_lv11_35: tmp_410_reg_34849.read());
}

void particle_filter::thread_tmp_294_fu_27392_p2() {
    tmp_294_fu_27392_p2 = (!p_Result_6_fu_27382_p4.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_6_fu_27382_p4.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_295_fu_27576_p1() {
    tmp_295_fu_27576_p1 = esl_zext<28,1>(qb_assign_3_fu_27571_p2.read());
}

void particle_filter::thread_tmp_296_fu_26013_p4() {
    tmp_296_fu_26013_p4 = rng_state_s22_reg_2344.read().range(19, 1);
}

void particle_filter::thread_tmp_297_fu_26023_p2() {
    tmp_297_fu_26023_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s22_reg_2344.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_298_fu_26053_p2() {
    tmp_298_fu_26053_p2 = (!ap_const_lv32_4.is_01())? sc_lv<32>(): rng_state_s42_reg_2354.read() << (unsigned short)ap_const_lv32_4.to_uint();
}

void particle_filter::thread_tmp_299_fu_27422_p2() {
    tmp_299_fu_27422_p2 = (!tmp454_cast_cast_fu_27415_p3.read().is_01() || !exp_V_1_fu_27296_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp454_cast_cast_fu_27415_p3.read()) + sc_biguint<12>(exp_V_1_fu_27296_p2.read()));
}

void particle_filter::thread_tmp_300_fu_26059_p4() {
    tmp_300_fu_26059_p4 = rng_state_s42_reg_2354.read().range(27, 3);
}

void particle_filter::thread_tmp_301_fu_27462_p2() {
    tmp_301_fu_27462_p2 = (!pos1_1_fu_27444_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_1_fu_27444_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_302_fu_26069_p2() {
    tmp_302_fu_26069_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s42_reg_2354.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_303_fu_27476_p0() {
    tmp_303_fu_27476_p0 = esl_sext<32,12>(pos1_1_fu_27444_p2.read());
}

void particle_filter::thread_tmp_303_fu_27476_p1() {
    tmp_303_fu_27476_p1 = esl_zext<54,32>(tmp_303_fu_27476_p0.read());
}

void particle_filter::thread_tmp_304_fu_27480_p2() {
    tmp_304_fu_27480_p2 = (!man_V_6_fu_27301_p3.read().is_01() || !tmp_303_fu_27476_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_6_fu_27301_p3.read()) >> (unsigned short)tmp_303_fu_27476_p1.read().to_uint();
}

void particle_filter::thread_tmp_305_fu_26099_p4() {
    tmp_305_fu_26099_p4 = rng_state_s62_reg_2364.read().range(14, 4);
}

void particle_filter::thread_tmp_306_fu_26109_p2() {
    tmp_306_fu_26109_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s62_reg_2364.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_307_fu_27498_p2() {
    tmp_307_fu_27498_p2 = (!pos2_1_fu_27453_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_1_fu_27453_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_307_not_fu_27686_p2() {
    tmp_307_not_fu_27686_p2 = (tmp_307_reg_34947.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_308_fu_27504_p0() {
    tmp_308_fu_27504_p0 = esl_sext<32,12>(pos2_1_fu_27453_p2.read());
}

void particle_filter::thread_tmp_308_fu_27504_p1() {
    tmp_308_fu_27504_p1 = esl_zext<54,32>(tmp_308_fu_27504_p0.read());
}

void particle_filter::thread_tmp_309_fu_27676_p2() {
    tmp_309_fu_27676_p2 = (!Range2_V_3_reg_34959.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_3_reg_34959.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_30_fu_21542_p2() {
    tmp_30_fu_21542_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_7_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_7_offset_read.read()));
}

void particle_filter::thread_tmp_310_fu_26151_p4() {
    tmp_310_fu_26151_p4 = tmp_125_fu_26029_p2.read().range(31, 20);
}

void particle_filter::thread_tmp_311_fu_27514_p2() {
    tmp_311_fu_27514_p2 = (!pos2_1_fu_27453_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_1_fu_27453_p2.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_312_fu_26161_p4() {
    tmp_312_fu_26161_p4 = rng_state_s22_reg_2344.read().range(7, 1);
}

void particle_filter::thread_tmp_313_fu_26171_p4() {
    tmp_313_fu_26171_p4 = rng_state_s22_reg_2344.read().range(6, 1);
}

void particle_filter::thread_tmp_314_fu_27841_p2() {
    tmp_314_fu_27841_p2 = (Range1_all_ones_2_i_149_reg_35080.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_315_fu_27893_p2() {
    tmp_315_fu_27893_p2 = (ap_reg_ppstg_isneg_1_reg_34864_pp3_it1.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_317_fu_27186_p1() {
    tmp_317_fu_27186_p1 = esl_sext<29,28>(rn_resampling_fixed_V_reg_34745.read());
}

void particle_filter::thread_tmp_318_fu_26217_p4() {
    tmp_318_fu_26217_p4 = tmp_131_fu_26075_p2.read().range(31, 28);
}

void particle_filter::thread_tmp_319_fu_28012_p2() {
    tmp_319_fu_28012_p2 = (newsignbit_2_reg_35135.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_320_fu_28068_p2() {
    tmp_320_fu_28068_p2 = (!p_Val2_6_reg_35142.read().is_01() || !ap_const_lv28_0.is_01())? sc_lv<1>(): (sc_bigint<28>(p_Val2_6_reg_35142.read()) > sc_bigint<28>(ap_const_lv28_0));
}

void particle_filter::thread_tmp_321_fu_28080_p1() {
    tmp_321_fu_28080_p1 = esl_zext<29,28>(p_Val2_10_fu_28073_p3.read());
}

void particle_filter::thread_tmp_322_fu_28090_p1() {
    tmp_322_fu_28090_p1 = esl_zext<30,29>(p_Val2_11_fu_28084_p2.read());
}

void particle_filter::thread_tmp_323_fu_28094_p1() {
    tmp_323_fu_28094_p1 = esl_zext<30,28>(p_Val2_6_reg_35142.read());
}

void particle_filter::thread_tmp_324_fu_28805_p2() {
    tmp_324_fu_28805_p2 = (!man_V_s_reg_35371.read().is_01() || !tmp_288_fu_28801_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_s_reg_35371.read()) >> (unsigned short)tmp_288_fu_28801_p1.read().to_uint();
}

void particle_filter::thread_tmp_326_fu_28172_p2() {
    tmp_326_fu_28172_p2 = (isneg_3_reg_35161.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_327_fu_26227_p4() {
    tmp_327_fu_26227_p4 = rng_state_s42_reg_2354.read().range(23, 3);
}

void particle_filter::thread_tmp_328_fu_28204_p2() {
    tmp_328_fu_28204_p2 = (newsignbit_4_reg_35198.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_32_fu_21546_p2() {
    tmp_32_fu_21546_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_6_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_6_offset_read.read()));
}

void particle_filter::thread_tmp_330_fu_26237_p2() {
    tmp_330_fu_26237_p2 = (!ap_const_lv32_6.is_01())? sc_lv<32>(): rng_state_s42_reg_2354.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void particle_filter::thread_tmp_331_fu_26269_p4() {
    tmp_331_fu_26269_p4 = tmp_137_fu_26115_p2.read().range(25, 15);
}

void particle_filter::thread_tmp_332_fu_26279_p4() {
    tmp_332_fu_26279_p4 = rng_state_s62_reg_2364.read().range(11, 4);
}

void particle_filter::thread_tmp_335_fu_28824_p0() {
    tmp_335_fu_28824_p0 = esl_sext<32,28>(tmp_458_reg_35391.read());
}

void particle_filter::thread_tmp_335_fu_28824_p1() {
    tmp_335_fu_28824_p1 = sh_amt_2_cast_fu_28783_p1.read();
}

void particle_filter::thread_tmp_335_fu_28824_p2() {
    tmp_335_fu_28824_p2 = (!tmp_335_fu_28824_p1.read().is_01())? sc_lv<32>(): tmp_335_fu_28824_p0.read() << (unsigned short)tmp_335_fu_28824_p1.read().to_uint();
}

void particle_filter::thread_tmp_336_fu_26339_p1() {
    tmp_336_fu_26339_p1 = ireg_V_fu_26335_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_338_fu_28519_p2() {
    tmp_338_fu_28519_p2 = (!tmp_274_fu_28497_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_274_fu_28497_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_339_fu_28525_p2() {
    tmp_339_fu_28525_p2 = (!F2_2_reg_35314.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35314.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_33_fu_21550_p2() {
    tmp_33_fu_21550_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_5_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_5_offset_read.read()));
}

void particle_filter::thread_tmp_344_fu_28842_p2() {
    tmp_344_fu_28842_p2 = (!ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_reg_35314_pp4_it25.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_345_fu_28549_p2() {
    tmp_345_fu_28549_p2 = (!F2_2_reg_35314.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35314.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_346_fu_28558_p2() {
    tmp_346_fu_28558_p2 = (!tmp_345_fu_28549_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_345_fu_28549_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_347_fu_28564_p3() {
    tmp_347_fu_28564_p3 = (!tmp_346_fu_28558_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_346_fu_28558_p2.read()[0].to_bool())? ap_const_lv11_35: tmp_466_fu_28554_p1.read());
}

void particle_filter::thread_tmp_348_fu_28847_p2() {
    tmp_348_fu_28847_p2 = (!p_Result_7_reg_35402.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_7_reg_35402.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_349_fu_29267_p1() {
    tmp_349_fu_29267_p1 = esl_zext<28,1>(qb_assign_5_fu_29263_p2.read());
}

void particle_filter::thread_tmp_34_fu_21554_p2() {
    tmp_34_fu_21554_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_4_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_4_offset_read.read()));
}

void particle_filter::thread_tmp_350_fu_28594_p2() {
    tmp_350_fu_28594_p2 = (!tmp461_cast_cast_fu_28586_p3.read().is_01() || !exp_V_2_fu_28463_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp461_cast_cast_fu_28586_p3.read()) + sc_biguint<12>(exp_V_2_fu_28463_p2.read()));
}

void particle_filter::thread_tmp_351_0_4_fu_25548_p1() {
    tmp_351_0_4_fu_25548_p1 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33554.read());
}

void particle_filter::thread_tmp_351_0_5_fu_25564_p1() {
    tmp_351_0_5_fu_25564_p1 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33580.read());
}

void particle_filter::thread_tmp_351_0_s_fu_25532_p1() {
    tmp_351_0_s_fu_25532_p1 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33528.read());
}

void particle_filter::thread_tmp_351_1_4_fu_25612_p1() {
    tmp_351_1_4_fu_25612_p1 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33554.read());
}

void particle_filter::thread_tmp_351_1_5_fu_25628_p1() {
    tmp_351_1_5_fu_25628_p1 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33580.read());
}

void particle_filter::thread_tmp_351_1_s_fu_25596_p1() {
    tmp_351_1_s_fu_25596_p1 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33528.read());
}

void particle_filter::thread_tmp_351_s_fu_25580_p1() {
    tmp_351_s_fu_25580_p1 = esl_zext<32,9>(n_minus_x_V_reg_33502.read());
}

void particle_filter::thread_tmp_356_fu_30672_p2() {
    tmp_356_fu_30672_p2 = (!tmp_530_fu_30659_p2.read().is_01() || !p_3_fu_30653_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_530_fu_30659_p2.read()) + sc_biguint<32>(p_3_fu_30653_p3.read()));
}

void particle_filter::thread_tmp_357_fu_28917_p2() {
    tmp_357_fu_28917_p2 = (!pos1_2_fu_28905_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_2_fu_28905_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_358_fu_26365_p1() {
    tmp_358_fu_26365_p1 = ireg_V_fu_26335_p1.read().range(52-1, 0);
}

void particle_filter::thread_tmp_359_0_4_fu_25544_p1() {
    tmp_359_0_4_fu_25544_p1 = esl_zext<32,9>(n_V_0_2_reg_33536.read());
}

void particle_filter::thread_tmp_359_0_5_fu_25560_p1() {
    tmp_359_0_5_fu_25560_p1 = esl_zext<32,9>(n_V_0_3_reg_33562.read());
}

void particle_filter::thread_tmp_359_0_s_fu_25528_p1() {
    tmp_359_0_s_fu_25528_p1 = esl_zext<32,9>(n_V_0_1_reg_33510.read());
}

void particle_filter::thread_tmp_359_1_4_fu_25608_p1() {
    tmp_359_1_4_fu_25608_p1 = esl_zext<32,9>(n_V_0_2_reg_33536.read());
}

void particle_filter::thread_tmp_359_1_5_fu_25624_p1() {
    tmp_359_1_5_fu_25624_p1 = esl_zext<32,9>(n_V_0_3_reg_33562.read());
}

void particle_filter::thread_tmp_359_1_s_fu_25592_p1() {
    tmp_359_1_s_fu_25592_p1 = esl_zext<32,9>(n_V_0_1_reg_33510.read());
}

void particle_filter::thread_tmp_359_s_fu_25576_p1() {
    tmp_359_s_fu_25576_p1 = esl_zext<32,9>(n_V_reg_33484.read());
}

void particle_filter::thread_tmp_361_fu_28937_p0() {
    tmp_361_fu_28937_p0 = esl_sext<32,12>(pos1_2_fu_28905_p2.read());
}

void particle_filter::thread_tmp_361_fu_28937_p1() {
    tmp_361_fu_28937_p1 = esl_zext<54,32>(tmp_361_fu_28937_p0.read());
}

void particle_filter::thread_tmp_362_fu_28941_p2() {
    tmp_362_fu_28941_p2 = (!man_V_s_reg_35371.read().is_01() || !tmp_361_fu_28937_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_s_reg_35371.read()) >> (unsigned short)tmp_361_fu_28937_p1.read().to_uint();
}

void particle_filter::thread_tmp_363_fu_26433_p1() {
    tmp_363_fu_26433_p1 = man_V_fu_26403_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_364_fu_28955_p2() {
    tmp_364_fu_28955_p2 = (!pos2_2_reg_35412.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_2_reg_35412.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_364_not_fu_28997_p2() {
    tmp_364_not_fu_28997_p2 = (tmp_364_fu_28955_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_365_fu_28960_p0() {
    tmp_365_fu_28960_p0 = esl_sext<32,12>(pos2_2_reg_35412.read());
}

void particle_filter::thread_tmp_365_fu_28960_p1() {
    tmp_365_fu_28960_p1 = esl_zext<54,32>(tmp_365_fu_28960_p0.read());
}

void particle_filter::thread_tmp_366_fu_28981_p2() {
    tmp_366_fu_28981_p2 = (!Range2_V_5_fu_28964_p2.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_5_fu_28964_p2.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_367_fu_29339_p2() {
    tmp_367_fu_29339_p2 = (Range1_all_ones_s_fu_29314_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_368_fu_28987_p2() {
    tmp_368_fu_28987_p2 = (!pos2_2_reg_35412.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_2_reg_35412.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_369_fu_26568_p1() {
    tmp_369_fu_26568_p1 = tmp_211_fu_26563_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_36_fu_21558_p2() {
    tmp_36_fu_21558_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_3_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_3_offset_read.read()));
}

void particle_filter::thread_tmp_370_fu_29734_p2() {
    tmp_370_fu_29734_p2 = (Range1_all_ones_2_i2_156_reg_35815.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_371_fu_29759_p2() {
    tmp_371_fu_29759_p2 = (ap_reg_ppstg_tmp_454_reg_35285_pp4_it28.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_374_fu_30020_p2() {
    tmp_374_fu_30020_p2 = (tmp_485_fu_30012_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_375_cast_fu_30136_p1() {
    tmp_375_cast_fu_30136_p1 = esl_zext<13,12>(tmp_486_fu_30132_p1.read());
}

void particle_filter::thread_tmp_375_fu_26588_p1() {
    tmp_375_fu_26588_p1 = tmp_214_fu_26582_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_376_fu_30150_p2() {
    tmp_376_fu_30150_p2 = (!p_Val2_16_fu_30125_p3.read().is_01() || !ap_const_lv28_0.is_01())? sc_lv<1>(): (sc_bigint<28>(p_Val2_16_fu_30125_p3.read()) > sc_bigint<28>(ap_const_lv28_0));
}

void particle_filter::thread_tmp_378_fu_30226_p1() {
    tmp_378_fu_30226_p1 = esl_zext<29,28>(p_Val2_23_fu_30219_p3.read());
}

void particle_filter::thread_tmp_379_fu_30256_p2() {
    tmp_379_fu_30256_p2 = (tmp_489_fu_30248_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_37_fu_26386_p3() {
    tmp_37_fu_26386_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_358_reg_34454.read());
}

void particle_filter::thread_tmp_37_i_fu_30789_p2() {
    tmp_37_i_fu_30789_p2 = (!loc_V_25_reg_36204.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): (sc_biguint<8>(loc_V_25_reg_36204.read()) > sc_biguint<8>(ap_const_lv8_96));
}

void particle_filter::thread_tmp_380_fu_30406_p2() {
    tmp_380_fu_30406_p2 = (!tmp_491_fu_30402_p1.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_491_fu_30402_p1.read() == ap_const_lv12_0);
}

void particle_filter::thread_tmp_386_0_4_fu_25536_p1() {
    tmp_386_0_4_fu_25536_p1 = esl_zext<32,9>(x_V_0_2_reg_33544.read());
}

void particle_filter::thread_tmp_386_0_5_fu_25552_p1() {
    tmp_386_0_5_fu_25552_p1 = esl_zext<32,9>(x_V_0_3_reg_33570.read());
}

void particle_filter::thread_tmp_386_0_s_fu_25520_p1() {
    tmp_386_0_s_fu_25520_p1 = esl_zext<32,9>(x_V_0_1_reg_33518.read());
}

void particle_filter::thread_tmp_386_1_4_fu_25600_p1() {
    tmp_386_1_4_fu_25600_p1 = esl_zext<32,9>(x_V_0_2_reg_33544.read());
}

void particle_filter::thread_tmp_386_1_5_fu_25616_p1() {
    tmp_386_1_5_fu_25616_p1 = esl_zext<32,9>(x_V_0_3_reg_33570.read());
}

void particle_filter::thread_tmp_386_1_s_fu_25584_p1() {
    tmp_386_1_s_fu_25584_p1 = esl_zext<32,9>(x_V_0_1_reg_33518.read());
}

void particle_filter::thread_tmp_386_s_fu_25568_p1() {
    tmp_386_s_fu_25568_p1 = esl_zext<32,9>(x_V_reg_33492.read());
}

void particle_filter::thread_tmp_38_fu_21562_p2() {
    tmp_38_fu_21562_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_2_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_2_offset_read.read()));
}

void particle_filter::thread_tmp_392_fu_26452_p2() {
    tmp_392_fu_26452_p2 = esl_sext<32,12>(tmp_217_fu_26443_p2.read());
}

void particle_filter::thread_tmp_392_fu_26452_p3() {
    tmp_392_fu_26452_p3 = (!tmp_392_fu_26452_p2.read().is_01() || sc_biguint<32>(tmp_392_fu_26452_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_fu_26403_p3.read().range(sc_biguint<32>(tmp_392_fu_26452_p2.read()).to_uint(), sc_biguint<32>(tmp_392_fu_26452_p2.read()).to_uint());
}

void particle_filter::thread_tmp_393_fu_26472_p1() {
    tmp_393_fu_26472_p1 = tmp_221_fu_26467_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_395_fu_26794_p3() {
    tmp_395_fu_26794_p3 = p_Val2_18_fu_26789_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_397_0_3_phi_fu_19232_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_0_3_reg_33464_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_0_3_reg_33714_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_3_reg_33718_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_0_3_reg_33722_pp1_it135.read()))) {
        tmp_397_0_3_phi_fu_19232_p10 = tmp_394_0_3_reg_34124.read();
    } else {
        tmp_397_0_3_phi_fu_19232_p10 = ap_reg_phiprechg_tmp_397_0_3_reg_19229pp1_it136.read();
    }
}

void particle_filter::thread_tmp_397_1_3_phi_fu_19296_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32848_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_3_reg_33480_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_3_reg_33882_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_3_reg_33886_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_3_reg_33890_pp1_it135.read()))) {
        tmp_397_1_3_phi_fu_19296_p10 = tmp_394_1_3_reg_34184.read();
    } else {
        tmp_397_1_3_phi_fu_19296_p10 = ap_reg_phiprechg_tmp_397_1_3_reg_19293pp1_it136.read();
    }
}

void particle_filter::thread_tmp_398_fu_26681_p3() {
    tmp_398_fu_26681_p3 = pos1_fu_26663_p2.read().range(11, 11);
}

void particle_filter::thread_tmp_39_fu_21566_p2() {
    tmp_39_fu_21566_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_1_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_1_offset_read.read()));
}

void particle_filter::thread_tmp_402_fu_27164_p1() {
    tmp_402_fu_27164_p1 = ireg_V_1_fu_27160_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_403_fu_25952_p1() {
    tmp_403_fu_25952_p1 = i6_reg_19356.read().range(1-1, 0);
}

void particle_filter::thread_tmp_404_fu_25516_p1() {
    tmp_404_fu_25516_p1 = esl_zext<32,9>(n_minus_x_V_reg_33502.read());
}

void particle_filter::thread_tmp_405_fu_27208_p1() {
    tmp_405_fu_27208_p1 = ireg_V_1_reg_34772.read().range(52-1, 0);
}

void particle_filter::thread_tmp_406_fu_27315_p1() {
    tmp_406_fu_27315_p1 = man_V_6_fu_27301_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_407_fu_27339_p1() {
    tmp_407_fu_27339_p1 = tmp_266_fu_27333_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_408_fu_27549_p1() {
    tmp_408_fu_27549_p1 = tmp_269_fu_27544_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_409_fu_27352_p2() {
    tmp_409_fu_27352_p2 = esl_sext<32,12>(tmp_281_fu_27343_p2.read());
}

void particle_filter::thread_tmp_409_fu_27352_p3() {
    tmp_409_fu_27352_p3 = (!tmp_409_fu_27352_p2.read().is_01() || sc_biguint<32>(tmp_409_fu_27352_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_6_fu_27301_p3.read().range(sc_biguint<32>(tmp_409_fu_27352_p2.read()).to_uint(), sc_biguint<32>(tmp_409_fu_27352_p2.read()).to_uint());
}

void particle_filter::thread_tmp_40_fu_21570_p2() {
    tmp_40_fu_21570_p2 = (!tmp_16_reg_32592.read().is_01() || !rng_state_0_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32592.read()) + sc_biguint<32>(rng_state_0_offset_read.read()));
}

void particle_filter::thread_tmp_40_i_fu_30743_p1() {
    tmp_40_i_fu_30743_p1 = esl_zext<64,5>(index_V_fu_30733_p4.read());
}

void particle_filter::thread_tmp_410_fu_27273_p1() {
    tmp_410_fu_27273_p1 = tmp_291_fu_27267_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_411_fu_27559_p3() {
    tmp_411_fu_27559_p3 = p_Val2_20_fu_27553_p3.read().range(27, 27);
}

void particle_filter::thread_tmp_413_fu_27428_p4() {
    tmp_413_fu_27428_p4 = tmp_299_fu_27422_p2.read().range(11, 4);
}

void particle_filter::thread_tmp_414_fu_25512_p1() {
    tmp_414_fu_25512_p1 = esl_zext<32,9>(n_V_reg_33484.read());
}

void particle_filter::thread_tmp_416_fu_25504_p1() {
    tmp_416_fu_25504_p1 = esl_zext<32,9>(x_V_reg_33492.read());
}

void particle_filter::thread_tmp_417_fu_25508_p1() {
    tmp_417_fu_25508_p1 = esl_zext<32,9>(n_minus_x_V_reg_33502.read());
}

void particle_filter::thread_tmp_418_fu_21951_p4() {
    tmp_418_fu_21951_p4 = rng_state_s4_fu_1442.read().range(19, 1);
}

void particle_filter::thread_tmp_421_fu_21991_p4() {
    tmp_421_fu_21991_p4 = rng_state_s24_fu_1362.read().range(27, 3);
}

void particle_filter::thread_tmp_422_fu_22031_p4() {
    tmp_422_fu_22031_p4 = rng_state_s44_fu_1282.read().range(14, 4);
}

void particle_filter::thread_tmp_423_fu_22083_p4() {
    tmp_423_fu_22083_p4 = rng_state_s5_fu_1438.read().range(19, 1);
}

void particle_filter::thread_tmp_424_fu_22123_p4() {
    tmp_424_fu_22123_p4 = rng_state_s25_fu_1358.read().range(27, 3);
}

void particle_filter::thread_tmp_425_fu_22163_p4() {
    tmp_425_fu_22163_p4 = rng_state_s45_fu_1278.read().range(14, 4);
}

void particle_filter::thread_tmp_426_fu_23337_p4() {
    tmp_426_fu_23337_p4 = rng_state_s14_fu_1402.read().range(19, 1);
}

void particle_filter::thread_tmp_427_1_fu_28443_p1() {
    tmp_427_1_fu_28443_p1 = esl_zext<12,11>(p_Result_26_1_fu_28433_p4.read());
}

void particle_filter::thread_tmp_427_fu_23377_p4() {
    tmp_427_fu_23377_p4 = rng_state_s34_fu_1322.read().range(27, 3);
}

void particle_filter::thread_tmp_428_fu_23417_p4() {
    tmp_428_fu_23417_p4 = rng_state_s54_fu_1242.read().range(14, 4);
}

void particle_filter::thread_tmp_429_1_fu_28451_p2() {
    tmp_429_1_fu_28451_p2 = (!tmp_505_fu_28421_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_505_fu_28421_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_429_fu_23469_p4() {
    tmp_429_fu_23469_p4 = rng_state_s15_fu_1398.read().range(19, 1);
}

void particle_filter::thread_tmp_42_i_fu_30815_p2() {
    tmp_42_i_fu_30815_p2 = (mask_reg_36223.read() ^ ap_const_lv23_7FFFFF);
}

void particle_filter::thread_tmp_430_fu_23509_p4() {
    tmp_430_fu_23509_p4 = rng_state_s35_fu_1318.read().range(27, 3);
}

void particle_filter::thread_tmp_431_fu_23549_p4() {
    tmp_431_fu_23549_p4 = rng_state_s55_fu_1238.read().range(14, 4);
}

void particle_filter::thread_tmp_432_fu_23601_p4() {
    tmp_432_fu_23601_p4 = rng_state_s16_fu_1394.read().range(19, 1);
}

void particle_filter::thread_tmp_433_fu_23641_p4() {
    tmp_433_fu_23641_p4 = rng_state_s36_fu_1314.read().range(27, 3);
}

void particle_filter::thread_tmp_434_fu_23681_p4() {
    tmp_434_fu_23681_p4 = rng_state_s56_fu_1234.read().range(14, 4);
}

void particle_filter::thread_tmp_435_fu_23733_p4() {
    tmp_435_fu_23733_p4 = rng_state_s17_fu_1390.read().range(19, 1);
}

void particle_filter::thread_tmp_436_fu_23773_p4() {
    tmp_436_fu_23773_p4 = rng_state_s37_fu_1310.read().range(27, 3);
}

void particle_filter::thread_tmp_437_fu_23813_p4() {
    tmp_437_fu_23813_p4 = rng_state_s57_fu_1230.read().range(14, 4);
}

void particle_filter::thread_tmp_438_fu_23865_p4() {
    tmp_438_fu_23865_p4 = rng_state_s18_fu_1386.read().range(19, 1);
}

void particle_filter::thread_tmp_439_fu_23905_p4() {
    tmp_439_fu_23905_p4 = rng_state_s38_fu_1306.read().range(27, 3);
}

void particle_filter::thread_tmp_43_fu_27211_p3() {
    tmp_43_fu_27211_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_405_fu_27208_p1.read());
}

void particle_filter::thread_tmp_440_fu_23945_p4() {
    tmp_440_fu_23945_p4 = rng_state_s58_fu_1226.read().range(14, 4);
}

void particle_filter::thread_tmp_441_fu_23997_p4() {
    tmp_441_fu_23997_p4 = rng_state_s19_fu_1382.read().range(19, 1);
}

void particle_filter::thread_tmp_442_fu_24037_p4() {
    tmp_442_fu_24037_p4 = rng_state_s39_fu_1302.read().range(27, 3);
}

void particle_filter::thread_tmp_443_fu_24077_p4() {
    tmp_443_fu_24077_p4 = rng_state_s59_fu_1222.read().range(14, 4);
}

void particle_filter::thread_tmp_444_1_fu_28657_p2() {
    tmp_444_1_fu_28657_p2 = (!F2_2_1_reg_35357.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35357.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_444_fu_24129_p4() {
    tmp_444_fu_24129_p4 = rng_state_s20_fu_1378.read().range(19, 1);
}

void particle_filter::thread_tmp_445_1_fu_28662_p2() {
    tmp_445_1_fu_28662_p2 = (!ap_const_lv12_C.is_01() || !F2_2_1_reg_35357.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_2_1_reg_35357.read()));
}

void particle_filter::thread_tmp_445_fu_24169_p4() {
    tmp_445_fu_24169_p4 = rng_state_s40_fu_1298.read().range(27, 3);
}

void particle_filter::thread_tmp_446_1_fu_29026_p2() {
    tmp_446_1_fu_29026_p2 = (!ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_446_fu_24209_p4() {
    tmp_446_fu_24209_p4 = rng_state_s60_fu_1218.read().range(14, 4);
}

void particle_filter::thread_tmp_447_fu_24261_p4() {
    tmp_447_fu_24261_p4 = rng_state_s21_fu_1374.read().range(19, 1);
}

void particle_filter::thread_tmp_448_fu_28323_p1() {
    tmp_448_fu_28323_p1 = j3_reg_19389.read().range(13-1, 0);
}

void particle_filter::thread_tmp_449_fu_24301_p4() {
    tmp_449_fu_24301_p4 = rng_state_s41_fu_1294.read().range(27, 3);
}

void particle_filter::thread_tmp_450_fu_28335_p4() {
    tmp_450_fu_28335_p4 = j3_reg_19389.read().range(30, 13);
}

void particle_filter::thread_tmp_451_fu_24341_p4() {
    tmp_451_fu_24341_p4 = rng_state_s61_fu_1214.read().range(14, 4);
}

void particle_filter::thread_tmp_452_fu_28375_p1() {
    tmp_452_fu_28375_p1 = ireg_V_2_fu_28371_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_456_fu_28401_p1() {
    tmp_456_fu_28401_p1 = ireg_V_2_fu_28371_p1.read().range(52-1, 0);
}

void particle_filter::thread_tmp_458_fu_28515_p1() {
    tmp_458_fu_28515_p1 = man_V_s_fu_28485_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_45_fu_31083_p2() {
    tmp_45_fu_31083_p2 = (tmp_114_fu_31070_p2.read() | tmp_91_reg_36315.read());
}

void particle_filter::thread_tmp_460_fu_28810_p1() {
    tmp_460_fu_28810_p1 = tmp_324_fu_28805_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_461_1_fu_29031_p2() {
    tmp_461_1_fu_29031_p2 = (!sh_amt_2_1_reg_35437.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_1_reg_35437.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_462_fu_28830_p1() {
    tmp_462_fu_28830_p1 = tmp_335_fu_28824_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_463_1_fu_29036_p2() {
    tmp_463_1_fu_29036_p2 = (!sh_amt_2_1_reg_35437.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_1_reg_35437.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_464_fu_28534_p2() {
    tmp_464_fu_28534_p2 = esl_sext<32,12>(tmp_339_fu_28525_p2.read());
}

void particle_filter::thread_tmp_464_fu_28534_p3() {
    tmp_464_fu_28534_p3 = (!tmp_464_fu_28534_p2.read().is_01() || sc_biguint<32>(tmp_464_fu_28534_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_s_fu_28485_p3.read().range(sc_biguint<32>(tmp_464_fu_28534_p2.read()).to_uint(), sc_biguint<32>(tmp_464_fu_28534_p2.read()).to_uint());
}

void particle_filter::thread_tmp_465_1_fu_29041_p0() {
    tmp_465_1_fu_29041_p0 = sh_amt_2_1_cast_fu_29023_p1.read();
}

void particle_filter::thread_tmp_465_1_fu_29041_p1() {
    tmp_465_1_fu_29041_p1 = esl_zext<54,32>(tmp_465_1_fu_29041_p0.read());
}

void particle_filter::thread_tmp_466_1_fu_29045_p2() {
    tmp_466_1_fu_29045_p2 = (!man_V_14_1_reg_35424.read().is_01() || !tmp_465_1_fu_29041_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_14_1_reg_35424.read()) >> (unsigned short)tmp_465_1_fu_29041_p1.read().to_uint();
}

void particle_filter::thread_tmp_466_fu_28554_p1() {
    tmp_466_fu_28554_p1 = tmp_345_fu_28549_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_469_1_fu_29064_p0() {
    tmp_469_1_fu_29064_p0 = esl_sext<32,28>(tmp_508_reg_35444.read());
}

void particle_filter::thread_tmp_469_1_fu_29064_p1() {
    tmp_469_1_fu_29064_p1 = sh_amt_2_1_cast_fu_29023_p1.read();
}

void particle_filter::thread_tmp_469_1_fu_29064_p2() {
    tmp_469_1_fu_29064_p2 = (!tmp_469_1_fu_29064_p1.read().is_01())? sc_lv<32>(): tmp_469_1_fu_29064_p0.read() << (unsigned short)tmp_469_1_fu_29064_p1.read().to_uint();
}

void particle_filter::thread_tmp_470_fu_29276_p3() {
    tmp_470_fu_29276_p3 = p_Val2_s_154_fu_29271_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_474_fu_29564_p3() {
    tmp_474_fu_29564_p3 = p_Val2_2_155_fu_29548_p3.read().range(27, 27);
}

void particle_filter::thread_tmp_476_fu_28923_p3() {
    tmp_476_fu_28923_p3 = pos1_2_fu_28905_p2.read().range(11, 11);
}

void particle_filter::thread_tmp_478_fu_28946_p1() {
    tmp_478_fu_28946_p1 = tmp_362_fu_28941_p2.read().range(1-1, 0);
}

void particle_filter::thread_tmp_480_1_fu_28679_p2() {
    tmp_480_1_fu_28679_p2 = (!tmp_444_1_fu_28657_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_444_1_fu_28657_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_483_1_fu_28685_p2() {
    tmp_483_1_fu_28685_p2 = (!F2_2_1_reg_35357.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35357.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_483_fu_30000_p3() {
    tmp_483_fu_30000_p3 = p_Val2_8_fu_29994_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_484_fu_30008_p1() {
    tmp_484_fu_30008_p1 = p_Val2_8_fu_29994_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_485_fu_30012_p3() {
    tmp_485_fu_30012_p3 = p_Val2_8_fu_29994_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_486_fu_30132_p1() {
    tmp_486_fu_30132_p1 = p_Val2_16_fu_30125_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_487_fu_30236_p3() {
    tmp_487_fu_30236_p3 = p_Val2_24_fu_30230_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_488_fu_30244_p1() {
    tmp_488_fu_30244_p1 = p_Val2_24_fu_30230_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_489_fu_30248_p3() {
    tmp_489_fu_30248_p3 = p_Val2_24_fu_30230_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_48_fu_28468_p3() {
    tmp_48_fu_28468_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_456_reg_35301.read());
}

void particle_filter::thread_tmp_491_fu_30402_p1() {
    tmp_491_fu_30402_p1 = p_Val2_26_fu_30376_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_494_1_fu_29082_p2() {
    tmp_494_1_fu_29082_p2 = (!ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_1_reg_35357_pp4_it25.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_498_1_fu_28709_p2() {
    tmp_498_1_fu_28709_p2 = (!F2_2_1_reg_35357.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35357.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_498_fu_31017_p2() {
    tmp_498_fu_31017_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): block_reg_36280.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_499_1_fu_28718_p2() {
    tmp_499_1_fu_28718_p2 = (!tmp_498_1_fu_28709_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_498_1_fu_28709_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_499_fu_31027_p1() {
    tmp_499_fu_31027_p1 = tmp_280_fu_31022_p2.read().range(13-1, 0);
}

void particle_filter::thread_tmp_500_1_fu_28724_p3() {
    tmp_500_1_fu_28724_p3 = (!tmp_499_1_fu_28718_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_499_1_fu_28718_p2.read()[0].to_bool())? ap_const_lv11_35: tmp_512_fu_28714_p1.read());
}

void particle_filter::thread_tmp_500_fu_31037_p4() {
    tmp_500_fu_31037_p4 = tmp_280_fu_31022_p2.read().range(31, 13);
}

void particle_filter::thread_tmp_501_1_fu_29087_p2() {
    tmp_501_1_fu_29087_p2 = (!p_Result_35_1_reg_35455.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_35_1_reg_35455.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_501_fu_30549_p1() {
    tmp_501_fu_30549_p1 = t_assign_reg_2386.read().range(16-1, 0);
}

void particle_filter::thread_tmp_502_fu_30545_p1() {
    tmp_502_fu_30545_p1 = k9_mid2_fu_30537_p3.read().range(1-1, 0);
}

void particle_filter::thread_tmp_503_1_fu_29407_p1() {
    tmp_503_1_fu_29407_p1 = esl_zext<28,1>(qb_assign_5_1_fu_29403_p2.read());
}

void particle_filter::thread_tmp_503_fu_30579_p1() {
    tmp_503_fu_30579_p1 = tmp_277_fu_30573_p2.read().range(13-1, 0);
}

void particle_filter::thread_tmp_504_fu_30591_p4() {
    tmp_504_fu_30591_p4 = tmp_277_fu_30573_p2.read().range(31, 13);
}

void particle_filter::thread_tmp_505_fu_28421_p1() {
    tmp_505_fu_28421_p1 = ireg_V_2_1_fu_28417_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_507_fu_28447_p1() {
    tmp_507_fu_28447_p1 = ireg_V_2_1_fu_28417_p1.read().range(52-1, 0);
}

void particle_filter::thread_tmp_508_fu_28675_p1() {
    tmp_508_fu_28675_p1 = man_V_14_1_fu_28645_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_509_fu_29050_p1() {
    tmp_509_fu_29050_p1 = tmp_466_1_fu_29045_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_510_fu_29070_p1() {
    tmp_510_fu_29070_p1 = tmp_469_1_fu_29064_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_511_fu_28694_p2() {
    tmp_511_fu_28694_p2 = esl_sext<32,12>(tmp_483_1_fu_28685_p2.read());
}

void particle_filter::thread_tmp_511_fu_28694_p3() {
    tmp_511_fu_28694_p3 = (!tmp_511_fu_28694_p2.read().is_01() || sc_biguint<32>(tmp_511_fu_28694_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_14_1_fu_28645_p3.read().range(sc_biguint<32>(tmp_511_fu_28694_p2.read()).to_uint(), sc_biguint<32>(tmp_511_fu_28694_p2.read()).to_uint());
}

void particle_filter::thread_tmp_512_fu_28714_p1() {
    tmp_512_fu_28714_p1 = tmp_498_1_fu_28709_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_513_1_fu_28754_p2() {
    tmp_513_1_fu_28754_p2 = (!tmp468_cast_cast_fu_28746_p3.read().is_01() || !exp_V_2_1_fu_28623_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp468_cast_cast_fu_28746_p3.read()) + sc_biguint<12>(exp_V_2_1_fu_28623_p2.read()));
}

void particle_filter::thread_tmp_514_fu_29416_p3() {
    tmp_514_fu_29416_p3 = p_Val2_24_1_fu_29411_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_516_fu_29659_p3() {
    tmp_516_fu_29659_p3 = p_Val2_25_1_fu_29643_p3.read().range(27, 27);
}

void particle_filter::thread_tmp_517_1_fu_29157_p2() {
    tmp_517_1_fu_29157_p2 = (!pos1_2_1_fu_29145_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_2_1_fu_29145_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_517_fu_29163_p3() {
    tmp_517_fu_29163_p3 = pos1_2_1_fu_29145_p2.read().range(11, 11);
}

void particle_filter::thread_tmp_518_fu_29186_p1() {
    tmp_518_fu_29186_p1 = tmp_523_1_fu_29181_p2.read().range(1-1, 0);
}

void particle_filter::thread_tmp_521_fu_30063_p3() {
    tmp_521_fu_30063_p3 = p_Val2_32_1_fu_30057_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_522_1_fu_29177_p0() {
    tmp_522_1_fu_29177_p0 = esl_sext<32,12>(pos1_2_1_fu_29145_p2.read());
}

void particle_filter::thread_tmp_522_1_fu_29177_p1() {
    tmp_522_1_fu_29177_p1 = esl_zext<54,32>(tmp_522_1_fu_29177_p0.read());
}

void particle_filter::thread_tmp_522_fu_30071_p1() {
    tmp_522_fu_30071_p1 = p_Val2_32_1_fu_30057_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_523_1_fu_29181_p2() {
    tmp_523_1_fu_29181_p2 = (!man_V_14_1_reg_35424.read().is_01() || !tmp_522_1_fu_29177_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_14_1_reg_35424.read()) >> (unsigned short)tmp_522_1_fu_29177_p1.read().to_uint();
}

void particle_filter::thread_tmp_523_fu_30075_p3() {
    tmp_523_fu_30075_p3 = p_Val2_32_1_fu_30057_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_524_fu_30185_p1() {
    tmp_524_fu_30185_p1 = p_Val2_43_1_fu_30178_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_525_fu_30303_p3() {
    tmp_525_fu_30303_p3 = p_Val2_51_1_fu_30297_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_526_1_fu_29195_p2() {
    tmp_526_1_fu_29195_p2 = (!pos2_2_1_reg_35465.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_2_1_reg_35465.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_526_1_not_fu_29237_p2() {
    tmp_526_1_not_fu_29237_p2 = (tmp_526_1_fu_29195_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_526_fu_30311_p1() {
    tmp_526_fu_30311_p1 = p_Val2_51_1_fu_30297_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_527_1_fu_29200_p0() {
    tmp_527_1_fu_29200_p0 = esl_sext<32,12>(pos2_2_1_reg_35465.read());
}

void particle_filter::thread_tmp_527_1_fu_29200_p1() {
    tmp_527_1_fu_29200_p1 = esl_zext<54,32>(tmp_527_1_fu_29200_p0.read());
}

void particle_filter::thread_tmp_527_fu_30315_p3() {
    tmp_527_fu_30315_p3 = p_Val2_51_1_fu_30297_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_529_fu_30467_p1() {
    tmp_529_fu_30467_p1 = p_Val2_53_1_fu_30441_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_530_1_fu_29221_p2() {
    tmp_530_1_fu_29221_p2 = (!Range2_V_5_1_fu_29204_p2.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_5_1_fu_29204_p2.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_530_fu_30659_p2() {
    tmp_530_fu_30659_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): p_block_replicated_2_fu_30646_p3.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_531_1_fu_29479_p2() {
    tmp_531_1_fu_29479_p2 = (Range1_all_ones_11_1_fu_29454_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_531_fu_30678_p1() {
    tmp_531_fu_30678_p1 = tmp_356_fu_30672_p2.read().range(13-1, 0);
}

void particle_filter::thread_tmp_532_1_fu_29227_p2() {
    tmp_532_1_fu_29227_p2 = (!pos2_2_1_reg_35465.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_2_1_reg_35465.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_537_1_fu_29699_p2() {
    tmp_537_1_fu_29699_p2 = (Range1_all_ones_2_i2_1_159_fu_29694_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_538_1_fu_29817_p2() {
    tmp_538_1_fu_29817_p2 = (ap_reg_ppstg_tmp_506_reg_35328_pp4_it28.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_545_fu_21961_p2() {
    tmp_545_fu_21961_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s4_fu_1442.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_546_fu_22001_p2() {
    tmp_546_fu_22001_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s24_fu_1362.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_547_fu_22041_p2() {
    tmp_547_fu_22041_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s44_fu_1282.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_548_fu_22093_p2() {
    tmp_548_fu_22093_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s5_fu_1438.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_549_fu_22133_p2() {
    tmp_549_fu_22133_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s25_fu_1358.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_550_fu_22173_p2() {
    tmp_550_fu_22173_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s45_fu_1278.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_551_1_fu_30083_p2() {
    tmp_551_1_fu_30083_p2 = (tmp_523_fu_30075_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_551_fu_23347_p2() {
    tmp_551_fu_23347_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s14_fu_1402.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_552_fu_23387_p2() {
    tmp_552_fu_23387_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s34_fu_1322.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_553_fu_23427_p2() {
    tmp_553_fu_23427_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s54_fu_1242.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_554_fu_23479_p2() {
    tmp_554_fu_23479_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s15_fu_1398.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_555_fu_23519_p2() {
    tmp_555_fu_23519_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s35_fu_1318.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_556_fu_23559_p2() {
    tmp_556_fu_23559_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s55_fu_1238.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_557_fu_23611_p2() {
    tmp_557_fu_23611_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s16_fu_1394.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_558_fu_23651_p2() {
    tmp_558_fu_23651_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s36_fu_1314.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_559_fu_23691_p2() {
    tmp_559_fu_23691_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s56_fu_1234.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_560_fu_23743_p2() {
    tmp_560_fu_23743_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s17_fu_1390.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_561_fu_23783_p2() {
    tmp_561_fu_23783_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s37_fu_1310.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_562_fu_23823_p2() {
    tmp_562_fu_23823_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s57_fu_1230.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_563_fu_23875_p2() {
    tmp_563_fu_23875_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s18_fu_1386.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_564_fu_23915_p2() {
    tmp_564_fu_23915_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s38_fu_1306.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_565_fu_23955_p2() {
    tmp_565_fu_23955_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s58_fu_1226.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_566_fu_24007_p2() {
    tmp_566_fu_24007_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s19_fu_1382.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_567_fu_24047_p2() {
    tmp_567_fu_24047_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s39_fu_1302.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_568_fu_24087_p2() {
    tmp_568_fu_24087_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s59_fu_1222.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_569_1_cast_fu_30189_p1() {
    tmp_569_1_cast_fu_30189_p1 = esl_zext<13,12>(tmp_524_fu_30185_p1.read());
}

void particle_filter::thread_tmp_569_fu_24139_p2() {
    tmp_569_fu_24139_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s20_fu_1378.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_56_fu_28628_p3() {
    tmp_56_fu_28628_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_507_reg_35344.read());
}

void particle_filter::thread_tmp_570_fu_24179_p2() {
    tmp_570_fu_24179_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s40_fu_1298.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_571_1_fu_30203_p2() {
    tmp_571_1_fu_30203_p2 = (!p_Val2_43_1_fu_30178_p3.read().is_01() || !ap_const_lv28_0.is_01())? sc_lv<1>(): (sc_bigint<28>(p_Val2_43_1_fu_30178_p3.read()) > sc_bigint<28>(ap_const_lv28_0));
}

void particle_filter::thread_tmp_571_fu_24219_p2() {
    tmp_571_fu_24219_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s60_fu_1218.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_572_1_fu_30293_p1() {
    tmp_572_1_fu_30293_p1 = esl_zext<29,28>(p_Val2_50_1_fu_30286_p3.read());
}

void particle_filter::thread_tmp_572_fu_24271_p2() {
    tmp_572_fu_24271_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s21_fu_1374.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_573_fu_24311_p2() {
    tmp_573_fu_24311_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s41_fu_1294.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_574_fu_24351_p2() {
    tmp_574_fu_24351_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s61_fu_1214.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_577_1_fu_30323_p2() {
    tmp_577_1_fu_30323_p2 = (tmp_527_fu_30315_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_580_1_fu_30471_p2() {
    tmp_580_1_fu_30471_p2 = (!tmp_529_fu_30467_p1.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_529_fu_30467_p1.read() == ap_const_lv12_0);
}

void particle_filter::thread_tmp_63_fu_27098_p2() {
    tmp_63_fu_27098_p2 = (tmp_200_reg_34459.read() | underflow_reg_34730.read());
}

void particle_filter::thread_tmp_70_fu_27946_p2() {
    tmp_70_fu_27946_p2 = (tmp_249_reg_34779.read() | underflow_1_fu_27915_p2.read());
}

void particle_filter::thread_tmp_77_fu_29873_p2() {
    tmp_77_fu_29873_p2 = (ap_reg_ppstg_tmp_262_reg_35306_pp4_it29.read() | underflow_5_reg_35874.read());
}

void particle_filter::thread_tmp_79_i_i1_fu_24728_p2() {
    tmp_79_i_i1_fu_24728_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_9_fu_24701_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_9_fu_24701_p4.read()));
}

void particle_filter::thread_tmp_79_i_i2_fu_24773_p2() {
    tmp_79_i_i2_fu_24773_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_11_fu_24746_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_11_fu_24746_p4.read()));
}

void particle_filter::thread_tmp_79_i_i3_fu_24818_p2() {
    tmp_79_i_i3_fu_24818_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_13_fu_24791_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_13_fu_24791_p4.read()));
}

void particle_filter::thread_tmp_79_i_i4_fu_24863_p2() {
    tmp_79_i_i4_fu_24863_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_15_fu_24836_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_15_fu_24836_p4.read()));
}

void particle_filter::thread_tmp_79_i_i5_fu_24908_p2() {
    tmp_79_i_i5_fu_24908_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_17_fu_24881_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_17_fu_24881_p4.read()));
}

void particle_filter::thread_tmp_79_i_i6_fu_24953_p2() {
    tmp_79_i_i6_fu_24953_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_19_fu_24926_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_19_fu_24926_p4.read()));
}

void particle_filter::thread_tmp_79_i_i7_fu_24998_p2() {
    tmp_79_i_i7_fu_24998_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_21_fu_24971_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_21_fu_24971_p4.read()));
}

void particle_filter::thread_tmp_79_i_i_fu_24683_p2() {
    tmp_79_i_i_fu_24683_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_fu_24656_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_fu_24656_p4.read()));
}

void particle_filter::thread_tmp_80_i_i1_fu_25095_p0() {
    tmp_80_i_i1_fu_25095_p0 = esl_sext<32,9>(sh_assign_1_reg_33380.read());
}

void particle_filter::thread_tmp_80_i_i1_fu_25095_p1() {
    tmp_80_i_i1_fu_25095_p1 = esl_zext<62,32>(tmp_80_i_i1_fu_25095_p0.read());
}

void particle_filter::thread_tmp_80_i_i2_fu_25159_p0() {
    tmp_80_i_i2_fu_25159_p0 = esl_sext<32,9>(sh_assign_4_reg_33395.read());
}

void particle_filter::thread_tmp_80_i_i2_fu_25159_p1() {
    tmp_80_i_i2_fu_25159_p1 = esl_zext<62,32>(tmp_80_i_i2_fu_25159_p0.read());
}

void particle_filter::thread_tmp_80_i_i3_fu_25217_p0() {
    tmp_80_i_i3_fu_25217_p0 = esl_sext<32,9>(sh_assign_6_reg_33406.read());
}

void particle_filter::thread_tmp_80_i_i3_fu_25217_p1() {
    tmp_80_i_i3_fu_25217_p1 = esl_zext<62,32>(tmp_80_i_i3_fu_25217_p0.read());
}

void particle_filter::thread_tmp_80_i_i4_fu_25281_p0() {
    tmp_80_i_i4_fu_25281_p0 = esl_sext<32,9>(sh_assign_10_reg_33421.read());
}

void particle_filter::thread_tmp_80_i_i4_fu_25281_p1() {
    tmp_80_i_i4_fu_25281_p1 = esl_zext<62,32>(tmp_80_i_i4_fu_25281_p0.read());
}

void particle_filter::thread_tmp_80_i_i5_fu_25339_p0() {
    tmp_80_i_i5_fu_25339_p0 = esl_sext<32,9>(sh_assign_12_reg_33432.read());
}

void particle_filter::thread_tmp_80_i_i5_fu_25339_p1() {
    tmp_80_i_i5_fu_25339_p1 = esl_zext<62,32>(tmp_80_i_i5_fu_25339_p0.read());
}

void particle_filter::thread_tmp_80_i_i6_fu_25403_p0() {
    tmp_80_i_i6_fu_25403_p0 = esl_sext<32,9>(sh_assign_14_reg_33447.read());
}

void particle_filter::thread_tmp_80_i_i6_fu_25403_p1() {
    tmp_80_i_i6_fu_25403_p1 = esl_zext<62,32>(tmp_80_i_i6_fu_25403_p0.read());
}

void particle_filter::thread_tmp_80_i_i7_fu_25461_p0() {
    tmp_80_i_i7_fu_25461_p0 = esl_sext<32,9>(sh_assign_16_reg_33458.read());
}

void particle_filter::thread_tmp_80_i_i7_fu_25461_p1() {
    tmp_80_i_i7_fu_25461_p1 = esl_zext<62,32>(tmp_80_i_i7_fu_25461_p0.read());
}

void particle_filter::thread_tmp_80_i_i_fu_25037_p0() {
    tmp_80_i_i_fu_25037_p0 = esl_sext<32,9>(sh_assign_9_reg_33369.read());
}

void particle_filter::thread_tmp_80_i_i_fu_25037_p1() {
    tmp_80_i_i_fu_25037_p1 = esl_zext<62,32>(tmp_80_i_i_fu_25037_p0.read());
}

void particle_filter::thread_tmp_81_i_i1_fu_25099_p1() {
    tmp_81_i_i1_fu_25099_p1 = esl_sext<24,9>(sh_assign_1_reg_33380.read());
}

void particle_filter::thread_tmp_81_i_i1_fu_25099_p2() {
    tmp_81_i_i1_fu_25099_p2 = (!tmp_81_i_i1_fu_25099_p1.read().is_01())? sc_lv<24>(): p_Result_44_fu_25077_p3.read() >> (unsigned short)tmp_81_i_i1_fu_25099_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i2_fu_25163_p1() {
    tmp_81_i_i2_fu_25163_p1 = esl_sext<24,9>(sh_assign_4_reg_33395.read());
}

void particle_filter::thread_tmp_81_i_i2_fu_25163_p2() {
    tmp_81_i_i2_fu_25163_p2 = (!tmp_81_i_i2_fu_25163_p1.read().is_01())? sc_lv<24>(): p_Result_45_fu_25141_p3.read() >> (unsigned short)tmp_81_i_i2_fu_25163_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i320_cast_fu_25105_p1() {
    tmp_81_i_i320_cast_fu_25105_p1 = esl_zext<62,24>(tmp_81_i_i1_fu_25099_p2.read());
}

void particle_filter::thread_tmp_81_i_i336_cast_fu_25169_p1() {
    tmp_81_i_i336_cast_fu_25169_p1 = esl_zext<62,24>(tmp_81_i_i2_fu_25163_p2.read());
}

void particle_filter::thread_tmp_81_i_i352_cast_fu_25227_p1() {
    tmp_81_i_i352_cast_fu_25227_p1 = esl_zext<62,24>(tmp_81_i_i3_fu_25221_p2.read());
}

void particle_filter::thread_tmp_81_i_i368_cast_fu_25291_p1() {
    tmp_81_i_i368_cast_fu_25291_p1 = esl_zext<62,24>(tmp_81_i_i4_fu_25285_p2.read());
}

void particle_filter::thread_tmp_81_i_i384_cast_fu_25349_p1() {
    tmp_81_i_i384_cast_fu_25349_p1 = esl_zext<62,24>(tmp_81_i_i5_fu_25343_p2.read());
}

void particle_filter::thread_tmp_81_i_i3_fu_25221_p1() {
    tmp_81_i_i3_fu_25221_p1 = esl_sext<24,9>(sh_assign_6_reg_33406.read());
}

void particle_filter::thread_tmp_81_i_i3_fu_25221_p2() {
    tmp_81_i_i3_fu_25221_p2 = (!tmp_81_i_i3_fu_25221_p1.read().is_01())? sc_lv<24>(): p_Result_46_fu_25199_p3.read() >> (unsigned short)tmp_81_i_i3_fu_25221_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i400_cast_fu_25413_p1() {
    tmp_81_i_i400_cast_fu_25413_p1 = esl_zext<62,24>(tmp_81_i_i6_fu_25407_p2.read());
}

void particle_filter::thread_tmp_81_i_i416_cast_fu_25471_p1() {
    tmp_81_i_i416_cast_fu_25471_p1 = esl_zext<62,24>(tmp_81_i_i7_fu_25465_p2.read());
}

void particle_filter::thread_tmp_81_i_i4_fu_25285_p1() {
    tmp_81_i_i4_fu_25285_p1 = esl_sext<24,9>(sh_assign_10_reg_33421.read());
}

void particle_filter::thread_tmp_81_i_i4_fu_25285_p2() {
    tmp_81_i_i4_fu_25285_p2 = (!tmp_81_i_i4_fu_25285_p1.read().is_01())? sc_lv<24>(): p_Result_47_fu_25263_p3.read() >> (unsigned short)tmp_81_i_i4_fu_25285_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i5_fu_25343_p1() {
    tmp_81_i_i5_fu_25343_p1 = esl_sext<24,9>(sh_assign_12_reg_33432.read());
}

void particle_filter::thread_tmp_81_i_i5_fu_25343_p2() {
    tmp_81_i_i5_fu_25343_p2 = (!tmp_81_i_i5_fu_25343_p1.read().is_01())? sc_lv<24>(): p_Result_48_fu_25321_p3.read() >> (unsigned short)tmp_81_i_i5_fu_25343_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i6_fu_25407_p1() {
    tmp_81_i_i6_fu_25407_p1 = esl_sext<24,9>(sh_assign_14_reg_33447.read());
}

void particle_filter::thread_tmp_81_i_i6_fu_25407_p2() {
    tmp_81_i_i6_fu_25407_p2 = (!tmp_81_i_i6_fu_25407_p1.read().is_01())? sc_lv<24>(): p_Result_49_fu_25385_p3.read() >> (unsigned short)tmp_81_i_i6_fu_25407_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i7_fu_25465_p1() {
    tmp_81_i_i7_fu_25465_p1 = esl_sext<24,9>(sh_assign_16_reg_33458.read());
}

void particle_filter::thread_tmp_81_i_i7_fu_25465_p2() {
    tmp_81_i_i7_fu_25465_p2 = (!tmp_81_i_i7_fu_25465_p1.read().is_01())? sc_lv<24>(): p_Result_50_fu_25443_p3.read() >> (unsigned short)tmp_81_i_i7_fu_25465_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i_cast_fu_25047_p1() {
    tmp_81_i_i_cast_fu_25047_p1 = esl_zext<62,24>(tmp_81_i_i_fu_25041_p2.read());
}

void particle_filter::thread_tmp_81_i_i_fu_25041_p1() {
    tmp_81_i_i_fu_25041_p1 = esl_sext<24,9>(sh_assign_9_reg_33369.read());
}

void particle_filter::thread_tmp_81_i_i_fu_25041_p2() {
    tmp_81_i_i_fu_25041_p2 = (!tmp_81_i_i_fu_25041_p1.read().is_01())? sc_lv<24>(): p_Result_43_fu_25019_p3.read() >> (unsigned short)tmp_81_i_i_fu_25041_p1.read().to_uint();
}

void particle_filter::thread_tmp_82_fu_21671_p4() {
    tmp_82_fu_21671_p4 = rng_state_s1_fu_1450.read().range(19, 1);
}

void particle_filter::thread_tmp_83_i_i1_fu_25109_p2() {
    tmp_83_i_i1_fu_25109_p2 = (!tmp_80_i_i1_fu_25095_p1.read().is_01())? sc_lv<62>(): tmp_i_i5_fu_25085_p1.read() << (unsigned short)tmp_80_i_i1_fu_25095_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i2_fu_25173_p2() {
    tmp_83_i_i2_fu_25173_p2 = (!tmp_80_i_i2_fu_25159_p1.read().is_01())? sc_lv<62>(): tmp_i_i6_fu_25149_p1.read() << (unsigned short)tmp_80_i_i2_fu_25159_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i3_fu_25231_p2() {
    tmp_83_i_i3_fu_25231_p2 = (!tmp_80_i_i3_fu_25217_p1.read().is_01())? sc_lv<62>(): tmp_i_i7_fu_25207_p1.read() << (unsigned short)tmp_80_i_i3_fu_25217_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i4_fu_25295_p2() {
    tmp_83_i_i4_fu_25295_p2 = (!tmp_80_i_i4_fu_25281_p1.read().is_01())? sc_lv<62>(): tmp_i_i8_fu_25271_p1.read() << (unsigned short)tmp_80_i_i4_fu_25281_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i5_fu_25353_p2() {
    tmp_83_i_i5_fu_25353_p2 = (!tmp_80_i_i5_fu_25339_p1.read().is_01())? sc_lv<62>(): tmp_i_i9_fu_25329_p1.read() << (unsigned short)tmp_80_i_i5_fu_25339_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i6_fu_25417_p2() {
    tmp_83_i_i6_fu_25417_p2 = (!tmp_80_i_i6_fu_25403_p1.read().is_01())? sc_lv<62>(): tmp_i_i1_fu_25393_p1.read() << (unsigned short)tmp_80_i_i6_fu_25403_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i7_fu_25475_p2() {
    tmp_83_i_i7_fu_25475_p2 = (!tmp_80_i_i7_fu_25461_p1.read().is_01())? sc_lv<62>(): tmp_i_i2_fu_25451_p1.read() << (unsigned short)tmp_80_i_i7_fu_25461_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i_fu_25051_p2() {
    tmp_83_i_i_fu_25051_p2 = (!tmp_80_i_i_fu_25037_p1.read().is_01())? sc_lv<62>(): tmp_i_i4_fu_25027_p1.read() << (unsigned short)tmp_80_i_i_fu_25037_p1.read().to_uint();
}

void particle_filter::thread_tmp_84_fu_29941_p2() {
    tmp_84_fu_29941_p2 = (ap_reg_ppstg_tmp_429_1_reg_35349_pp4_it29.read() | underflow_5_1_reg_35890.read());
}

void particle_filter::thread_tmp_85_fu_21711_p4() {
    tmp_85_fu_21711_p4 = rng_state_s2_fu_1370.read().range(27, 3);
}

void particle_filter::thread_tmp_86_fu_21489_p2() {
    tmp_86_fu_21489_p2 = (!chunk_size_true_2_reg_32066.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_bigint<32>(chunk_size_true_2_reg_32066.read()) + sc_biguint<32>(ap_const_lv32_FFFFFFFF));
}

void particle_filter::thread_tmp_87_fu_30895_p1() {
    tmp_87_fu_30895_p1 = sel_tmp6_i_reg_36248.read();
}

void particle_filter::thread_tmp_87_i_i_fu_30937_p2() {
    tmp_87_i_i_fu_30937_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_29_fu_30905_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_29_fu_30905_p4.read()));
}

void particle_filter::thread_tmp_88_fu_21581_p2() {
    tmp_88_fu_21581_p2 = (!t_assign_reg_2386.read().is_01() || !state_count.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_assign_reg_2386.read()) < sc_biguint<32>(state_count.read()));
}

void particle_filter::thread_tmp_88_i_i_fu_30972_p0() {
    tmp_88_i_i_fu_30972_p0 = esl_sext<32,9>(sh_assign_3_reg_36268.read());
}

void particle_filter::thread_tmp_88_i_i_fu_30972_p1() {
    tmp_88_i_i_fu_30972_p1 = esl_zext<78,32>(tmp_88_i_i_fu_30972_p0.read());
}

void particle_filter::thread_tmp_89_i_i_cast_fu_30982_p1() {
    tmp_89_i_i_cast_fu_30982_p1 = esl_zext<78,24>(tmp_89_i_i_fu_30976_p2.read());
}

void particle_filter::thread_tmp_89_i_i_fu_30976_p1() {
    tmp_89_i_i_fu_30976_p1 = esl_sext<24,9>(sh_assign_3_reg_36268.read());
}

void particle_filter::thread_tmp_89_i_i_fu_30976_p2() {
    tmp_89_i_i_fu_30976_p2 = (!tmp_89_i_i_fu_30976_p1.read().is_01())? sc_lv<24>(): p_Result_56_fu_30955_p3.read() >> (unsigned short)tmp_89_i_i_fu_30976_p1.read().to_uint();
}

void particle_filter::thread_tmp_91_i_i_fu_30986_p2() {
    tmp_91_i_i_fu_30986_p2 = (!tmp_88_i_i_fu_30972_p1.read().is_01())? sc_lv<78>(): tmp_i_i_fu_30962_p1.read() << (unsigned short)tmp_88_i_i_fu_30972_p1.read().to_uint();
}

void particle_filter::thread_tmp_92_fu_21687_p2() {
    tmp_92_fu_21687_p2 = (rng_state_s1_fu_1450.read() ^ tmp_122_fu_21681_p2.read());
}

void particle_filter::thread_tmp_93_fu_21693_p4() {
    tmp_93_fu_21693_p4 = tmp_92_fu_21687_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_94_fu_21703_p3() {
    tmp_94_fu_21703_p3 = esl_concat<19,13>(tmp_82_fu_21671_p4.read(), tmp_93_fu_21693_p4.read());
}

void particle_filter::thread_tmp_95_fu_21727_p2() {
    tmp_95_fu_21727_p2 = (rng_state_s2_fu_1370.read() ^ tmp_124_fu_21721_p2.read());
}

void particle_filter::thread_tmp_96_fu_21733_p4() {
    tmp_96_fu_21733_p4 = tmp_95_fu_21727_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_97_fu_21183_p4() {
    tmp_97_fu_21183_p4 = state_count.read().range(31, 1);
}

void particle_filter::thread_tmp_98_fu_21743_p3() {
    tmp_98_fu_21743_p3 = esl_concat<25,7>(tmp_85_fu_21711_p4.read(), tmp_96_fu_21733_p4.read());
}

void particle_filter::thread_tmp_99_fu_21751_p4() {
    tmp_99_fu_21751_p4 = rng_state_s3_fu_1290.read().range(14, 4);
}

void particle_filter::thread_tmp_i_fu_30784_p2() {
    tmp_i_fu_30784_p2 = (!loc_V_25_reg_36204.read().is_01() || !ap_const_lv8_7F.is_01())? sc_lv<1>(): (sc_biguint<8>(loc_V_25_reg_36204.read()) < sc_biguint<8>(ap_const_lv8_7F));
}

void particle_filter::thread_tmp_i_i1_fu_25393_p1() {
    tmp_i_i1_fu_25393_p1 = esl_zext<62,24>(p_Result_49_fu_25385_p3.read());
}

void particle_filter::thread_tmp_i_i2_fu_25451_p1() {
    tmp_i_i2_fu_25451_p1 = esl_zext<62,24>(p_Result_50_fu_25443_p3.read());
}

void particle_filter::thread_tmp_i_i4_fu_25027_p1() {
    tmp_i_i4_fu_25027_p1 = esl_zext<62,24>(p_Result_43_fu_25019_p3.read());
}

void particle_filter::thread_tmp_i_i5_fu_25085_p1() {
    tmp_i_i5_fu_25085_p1 = esl_zext<62,24>(p_Result_44_fu_25077_p3.read());
}

void particle_filter::thread_tmp_i_i6_fu_25149_p1() {
    tmp_i_i6_fu_25149_p1 = esl_zext<62,24>(p_Result_45_fu_25141_p3.read());
}

void particle_filter::thread_tmp_i_i7_fu_25207_p1() {
    tmp_i_i7_fu_25207_p1 = esl_zext<62,24>(p_Result_46_fu_25199_p3.read());
}

void particle_filter::thread_tmp_i_i8_fu_25271_p1() {
    tmp_i_i8_fu_25271_p1 = esl_zext<62,24>(p_Result_47_fu_25263_p3.read());
}

void particle_filter::thread_tmp_i_i9_fu_25329_p1() {
    tmp_i_i9_fu_25329_p1 = esl_zext<62,24>(p_Result_48_fu_25321_p3.read());
}

void particle_filter::thread_tmp_i_i_fu_30962_p1() {
    tmp_i_i_fu_30962_p1 = esl_zext<78,24>(p_Result_56_fu_30955_p3.read());
}

void particle_filter::thread_tmp_i_i_i308_cast_fu_24665_p1() {
    tmp_i_i_i308_cast_fu_24665_p1 = esl_zext<9,8>(loc_V_fu_24656_p4.read());
}

void particle_filter::thread_tmp_i_i_i314_cast_fu_24710_p1() {
    tmp_i_i_i314_cast_fu_24710_p1 = esl_zext<9,8>(loc_V_9_fu_24701_p4.read());
}

void particle_filter::thread_tmp_i_i_i330_cast_fu_24755_p1() {
    tmp_i_i_i330_cast_fu_24755_p1 = esl_zext<9,8>(loc_V_11_fu_24746_p4.read());
}

void particle_filter::thread_tmp_i_i_i346_cast_fu_24800_p1() {
    tmp_i_i_i346_cast_fu_24800_p1 = esl_zext<9,8>(loc_V_13_fu_24791_p4.read());
}

void particle_filter::thread_tmp_i_i_i362_cast_fu_24845_p1() {
    tmp_i_i_i362_cast_fu_24845_p1 = esl_zext<9,8>(loc_V_15_fu_24836_p4.read());
}

void particle_filter::thread_tmp_i_i_i378_cast_fu_24890_p1() {
    tmp_i_i_i378_cast_fu_24890_p1 = esl_zext<9,8>(loc_V_17_fu_24881_p4.read());
}

void particle_filter::thread_tmp_i_i_i394_cast_fu_24935_p1() {
    tmp_i_i_i394_cast_fu_24935_p1 = esl_zext<9,8>(loc_V_19_fu_24926_p4.read());
}

void particle_filter::thread_tmp_i_i_i410_cast_fu_24980_p1() {
    tmp_i_i_i410_cast_fu_24980_p1 = esl_zext<9,8>(loc_V_21_fu_24971_p4.read());
}

void particle_filter::thread_tmp_i_i_i_cast_fu_30919_p1() {
    tmp_i_i_i_cast_fu_30919_p1 = esl_zext<9,8>(loc_V_29_fu_30905_p4.read());
}

void particle_filter::thread_u1_1_fu_22077_p2() {
    u1_1_fu_22077_p2 = (tmp88_fu_22071_p2.read() ^ tmp_169_1_fu_22023_p3.read());
}

void particle_filter::thread_u1_3_0_1_fu_22671_p2() {
    u1_3_0_1_fu_22671_p2 = (tmp50_fu_22665_p2.read() ^ tmp_224_0_1_fu_22617_p3.read());
}

void particle_filter::thread_u1_3_0_2_fu_22935_p2() {
    u1_3_0_2_fu_22935_p2 = (tmp52_fu_22929_p2.read() ^ tmp_224_0_2_fu_22881_p3.read());
}

void particle_filter::thread_u1_3_0_3_fu_23199_p2() {
    u1_3_0_3_fu_23199_p2 = (tmp54_fu_23193_p2.read() ^ tmp_224_0_3_fu_23145_p3.read());
}

void particle_filter::thread_u1_3_1_1_fu_23727_p2() {
    u1_3_1_1_fu_23727_p2 = (tmp92_fu_23721_p2.read() ^ tmp_224_1_1_fu_23673_p3.read());
}

void particle_filter::thread_u1_3_1_2_fu_23991_p2() {
    u1_3_1_2_fu_23991_p2 = (tmp94_fu_23985_p2.read() ^ tmp_224_1_2_fu_23937_p3.read());
}

void particle_filter::thread_u1_3_1_3_fu_24255_p2() {
    u1_3_1_3_fu_24255_p2 = (tmp96_fu_24249_p2.read() ^ tmp_224_1_3_fu_24201_p3.read());
}

void particle_filter::thread_u1_3_1_fu_23463_p2() {
    u1_3_1_fu_23463_p2 = (tmp90_fu_23457_p2.read() ^ tmp_224_1_fu_23409_p3.read());
}

void particle_filter::thread_u1_3_fu_22407_p2() {
    u1_3_fu_22407_p2 = (tmp48_fu_22401_p2.read() ^ tmp_166_fu_22353_p3.read());
}

void particle_filter::thread_u1_fu_21797_p2() {
    u1_fu_21797_p2 = (tmp46_fu_21791_p2.read() ^ tmp_98_fu_21743_p3.read());
}

void particle_filter::thread_u2_1_fu_22209_p2() {
    u2_1_fu_22209_p2 = (tmp89_fu_22203_p2.read() ^ tmp_191_1_fu_22155_p3.read());
}

void particle_filter::thread_u2_3_0_1_fu_22803_p2() {
    u2_3_0_1_fu_22803_p2 = (tmp51_fu_22797_p2.read() ^ tmp_246_0_1_fu_22749_p3.read());
}

void particle_filter::thread_u2_3_0_2_fu_23067_p2() {
    u2_3_0_2_fu_23067_p2 = (tmp53_fu_23061_p2.read() ^ tmp_246_0_2_fu_23013_p3.read());
}

void particle_filter::thread_u2_3_0_3_fu_23331_p2() {
    u2_3_0_3_fu_23331_p2 = (tmp55_fu_23325_p2.read() ^ tmp_246_0_3_fu_23277_p3.read());
}

void particle_filter::thread_u2_3_1_1_fu_23859_p2() {
    u2_3_1_1_fu_23859_p2 = (tmp93_fu_23853_p2.read() ^ tmp_246_1_1_fu_23805_p3.read());
}

void particle_filter::thread_u2_3_1_2_fu_24123_p2() {
    u2_3_1_2_fu_24123_p2 = (tmp95_fu_24117_p2.read() ^ tmp_246_1_2_fu_24069_p3.read());
}

void particle_filter::thread_u2_3_1_3_fu_24387_p2() {
    u2_3_1_3_fu_24387_p2 = (tmp97_fu_24381_p2.read() ^ tmp_246_1_3_fu_24333_p3.read());
}

void particle_filter::thread_u2_3_1_fu_23595_p2() {
    u2_3_1_fu_23595_p2 = (tmp91_fu_23589_p2.read() ^ tmp_246_1_fu_23541_p3.read());
}

void particle_filter::thread_u2_3_fu_22539_p2() {
    u2_3_fu_22539_p2 = (tmp49_fu_22533_p2.read() ^ tmp_183_fu_22485_p3.read());
}

void particle_filter::thread_u2_fu_21929_p2() {
    u2_fu_21929_p2 = (tmp47_fu_21923_p2.read() ^ tmp_116_fu_21875_p3.read());
}

void particle_filter::thread_u5_fu_26145_p2() {
    u5_fu_26145_p2 = (tmp56_fu_26139_p2.read() ^ tmp_133_fu_26091_p3.read());
}

void particle_filter::thread_u6_fu_26329_p2() {
    u6_fu_26329_p2 = (tmp57_fu_26323_p2.read() ^ tmp_153_fu_26259_p4.read());
}

void particle_filter::thread_umax_fu_21447_p3() {
    umax_fu_21447_p3 = (!icmp1_reg_32567.read()[0].is_01())? sc_lv<32>(): ((icmp1_reg_32567.read()[0].to_bool())? state_count.read(): ap_const_lv32_1);
}

void particle_filter::thread_underflow_1_fu_27915_p2() {
    underflow_1_fu_27915_p2 = (sign_assign_1_reg_35085.read() & brmerge97_i_reg_35102.read());
}

void particle_filter::thread_underflow_2_fu_28017_p2() {
    underflow_2_fu_28017_p2 = (isneg_2_reg_35122.read() & tmp_319_fu_28012_p2.read());
}

void particle_filter::thread_underflow_3_fu_28199_p2() {
    underflow_3_fu_28199_p2 = (brmerge39_i_fu_28193_p2.read() & isneg_3_reg_35161.read());
}

void particle_filter::thread_underflow_3_not_fu_28265_p2() {
    underflow_3_not_fu_28265_p2 = (underflow_3_reg_35211.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_underflow_4_fu_28209_p2() {
    underflow_4_fu_28209_p2 = (isneg_4_reg_35185.read() & tmp_328_fu_28204_p2.read());
}

void particle_filter::thread_underflow_5_1_fu_29833_p2() {
    underflow_5_1_fu_29833_p2 = (sign_assign_2_1_fu_29801_p3.read() & brmerge97_i2_1_fu_29828_p2.read());
}

void particle_filter::thread_underflow_5_fu_29775_p2() {
    underflow_5_fu_29775_p2 = (sign_assign_2_fu_29743_p3.read() & brmerge97_i2_fu_29770_p2.read());
}

void particle_filter::thread_underflow_6_1_fu_30089_p2() {
    underflow_6_1_fu_30089_p2 = (tmp_521_fu_30063_p3.read() & tmp_551_1_fu_30083_p2.read());
}

void particle_filter::thread_underflow_6_fu_30026_p2() {
    underflow_6_fu_30026_p2 = (tmp_483_fu_30000_p3.read() & tmp_374_fu_30020_p2.read());
}

void particle_filter::thread_underflow_8_1_fu_30329_p2() {
    underflow_8_1_fu_30329_p2 = (tmp_525_fu_30303_p3.read() & tmp_577_1_fu_30323_p2.read());
}

void particle_filter::thread_underflow_8_fu_30262_p2() {
    underflow_8_fu_30262_p2 = (tmp_487_fu_30236_p3.read() & tmp_379_fu_30256_p2.read());
}

void particle_filter::thread_underflow_fu_27057_p2() {
    underflow_fu_27057_p2 = (sign_assign_fu_27024_p3.read() & brmerge97_i1_fu_27052_p2.read());
}

void particle_filter::thread_weights_0_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read())))) {
        weights_0_address0 = ap_reg_ppstg_weights_0_addr_reg_34319_pp2_it3.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        weights_0_address0 =  (sc_lv<13>) (newIndex9_fu_28327_p1.read());
    } else {
        weights_0_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_weights_0_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read())))) {
        weights_0_ce0 = ap_const_logic_1;
    } else {
        weights_0_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_weights_0_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read())) {
        if (esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read())) {
            weights_0_d0 = storemerge_1_fu_25932_p3.read();
        } else if (esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) {
            weights_0_d0 = storemerge_fu_25918_p3.read();
        } else {
            weights_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        weights_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_weights_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp3_reg_34314_pp2_it3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond4_reg_34329_pp2_it3.read())))) {
        weights_0_we0 = ap_const_logic_1;
    } else {
        weights_0_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_weights_1_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read())))) {
        weights_1_address0 = ap_reg_ppstg_weights_1_addr_reg_34324_pp2_it3.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        weights_1_address0 =  (sc_lv<13>) (newIndex9_fu_28327_p1.read());
    } else {
        weights_1_address0 =  (sc_lv<13>) ("XXXXXXXXXXXXX");
    }
}

void particle_filter::thread_weights_1_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read())) || 
         (esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read())))) {
        weights_1_ce0 = ap_const_logic_1;
    } else {
        weights_1_ce0 = ap_const_logic_0;
    }
}

void particle_filter::thread_weights_1_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read())) {
        if (esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read())) {
            weights_1_d0 = storemerge_1_fu_25932_p3.read();
        } else if (esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) {
            weights_1_d0 = storemerge_fu_25918_p3.read();
        } else {
            weights_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        weights_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_weights_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp3_reg_34314_pp2_it3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond4_reg_34329_pp2_it3.read())))) {
        weights_1_we0 = ap_const_logic_1;
    } else {
        weights_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_weights_chunk_sums_load_phi_fu_25984_p3() {
    weights_chunk_sums_load_phi_fu_25984_p3 = (!tmp_403_fu_25952_p1.read()[0].is_01())? sc_lv<32>(): ((tmp_403_fu_25952_p1.read()[0].to_bool())? weights_chunk_sums_1_reg_19309.read(): weights_chunk_sums_reg_19321.read());
}

void particle_filter::thread_weights_chunk_sums_phi_fu_19325_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it4.read()) && 
         esl_seteq<1,8,8>(ap_ST_pp2_stg4_fsm_29, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34295_pp2_it4.read()))) {
        weights_chunk_sums_phi_fu_19325_p4 = weights_chunk_sums_0_reg_34385.read();
    } else {
        weights_chunk_sums_phi_fu_19325_p4 = weights_chunk_sums_reg_19321.read();
    }
}

void particle_filter::thread_weights_load_0_phi_fu_28357_p3() {
    weights_load_0_phi_fu_28357_p3 = (!icmp6_reg_35248.read()[0].is_01())? sc_lv<32>(): ((icmp6_reg_35248.read()[0].to_bool())? weights_0_q0.read(): weights_1_q0.read());
}

void particle_filter::thread_weights_load_1_phi_fu_28364_p3() {
    weights_load_1_phi_fu_28364_p3 = (!cond9_reg_35265.read()[0].is_01())? sc_lv<32>(): ((cond9_reg_35265.read()[0].to_bool())? weights_0_q0.read(): weights_1_q0.read());
}

void particle_filter::thread_weights_partial_sums6_2_fu_25976_p3() {
    weights_partial_sums6_2_fu_25976_p3 = (!tmp_403_fu_25952_p1.read()[0].is_01())? sc_lv<32>(): ((tmp_403_fu_25952_p1.read()[0].to_bool())? weights_partial_sums_reg_19344.read(): weights_partial_sums6_fu_1454.read());
}

void particle_filter::thread_weights_partial_sums_0_write_assign_fu_31096_p3() {
    weights_partial_sums_0_write_assign_fu_31096_p3 = (!write_flag_fu_1462.read()[0].is_01())? sc_lv<32>(): ((write_flag_fu_1462.read()[0].to_bool())? weights_partial_sums_s_fu_1458.read(): weights_partial_sums_0_read.read());
}

void particle_filter::thread_weights_partial_sums_2_fu_25968_p3() {
    weights_partial_sums_2_fu_25968_p3 = (!tmp_403_fu_25952_p1.read()[0].is_01())? sc_lv<32>(): ((tmp_403_fu_25952_p1.read()[0].to_bool())? weights_partial_sums_s_fu_1458.read(): weights_partial_sums_reg_19344.read());
}

void particle_filter::thread_weights_sum_1_fu_27144_p3() {
    weights_sum_1_fu_27144_p3 = (!grp_fu_20151_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20151_p2.read()[0].to_bool())? ap_const_lv32_3F800000: weights_partial_sums_reg_19344.read());
}

void particle_filter::thread_write_flag_2_fu_25962_p2() {
    write_flag_2_fu_25962_p2 = (write_flag_fu_1462.read() | not_i6_t_fu_25956_p2.read());
}

void particle_filter::thread_x_V_0_1_fu_25244_p4() {
    x_V_0_1_fu_25244_p4 = p_Val2_36_fu_25237_p3.read().range(31, 23);
}

void particle_filter::thread_x_V_0_2_fu_25366_p4() {
    x_V_0_2_fu_25366_p4 = p_Val2_40_fu_25359_p3.read().range(31, 23);
}

void particle_filter::thread_x_V_0_3_fu_25488_p4() {
    x_V_0_3_fu_25488_p4 = p_Val2_42_fu_25481_p3.read().range(31, 23);
}

void particle_filter::thread_x_V_fu_25122_p4() {
    x_V_fu_25122_p4 = p_Val2_29_fu_25115_p3.read().range(31, 23);
}

void particle_filter::thread_xs_exp_V_fu_30801_p3() {
    xs_exp_V_fu_30801_p3 = (!p_Result_s_166_reg_36195.read()[0].is_01())? sc_lv<8>(): ((p_Result_s_166_reg_36195.read()[0].to_bool())? loc_V_27_reg_36233.read(): loc_V_25_reg_36204.read());
}

void particle_filter::thread_xs_sig_V_1_fu_30810_p3() {
    xs_sig_V_1_fu_30810_p3 = (!p_Result_s_166_reg_36195.read()[0].is_01())? sc_lv<23>(): ((p_Result_s_166_reg_36195.read()[0].to_bool())? loc_V_28_reg_36238.read(): loc_V_26_reg_36212.read());
}

void particle_filter::thread_xs_sig_V_fu_30820_p2() {
    xs_sig_V_fu_30820_p2 = (xs_sig_V_1_fu_30810_p3.read() & tmp_42_i_fu_30815_p2.read());
}

void particle_filter::thread_xs_sign_V_fu_30806_p2() {
    xs_sign_V_fu_30806_p2 = (p_Result_s_166_reg_36195.read() & p_Result_54_reg_36228.read());
}

}

