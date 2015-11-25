#include "particle_filter.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void particle_filter::thread_tmp47_fu_21914_p2() {
    tmp47_fu_21914_p2 = (tmp_109_fu_21826_p3.read() ^ tmp_135_fu_21906_p3.read());
}

void particle_filter::thread_tmp48_fu_22392_p2() {
    tmp48_fu_22392_p2 = (tmp_160_fu_22304_p3.read() ^ tmp_170_fu_22384_p3.read());
}

void particle_filter::thread_tmp49_fu_22524_p2() {
    tmp49_fu_22524_p2 = (tmp_175_fu_22436_p3.read() ^ tmp_187_fu_22516_p3.read());
}

void particle_filter::thread_tmp50_fu_22656_p2() {
    tmp50_fu_22656_p2 = (tmp_218_0_1_fu_22568_p3.read() ^ tmp_230_0_1_fu_22648_p3.read());
}

void particle_filter::thread_tmp51_fu_22788_p2() {
    tmp51_fu_22788_p2 = (tmp_240_0_1_fu_22700_p3.read() ^ tmp_252_0_1_fu_22780_p3.read());
}

void particle_filter::thread_tmp52_fu_22920_p2() {
    tmp52_fu_22920_p2 = (tmp_218_0_2_fu_22832_p3.read() ^ tmp_230_0_2_fu_22912_p3.read());
}

void particle_filter::thread_tmp53_fu_23052_p2() {
    tmp53_fu_23052_p2 = (tmp_240_0_2_fu_22964_p3.read() ^ tmp_252_0_2_fu_23044_p3.read());
}

void particle_filter::thread_tmp54_fu_23184_p2() {
    tmp54_fu_23184_p2 = (tmp_218_0_3_fu_23096_p3.read() ^ tmp_230_0_3_fu_23176_p3.read());
}

void particle_filter::thread_tmp55_fu_23316_p2() {
    tmp55_fu_23316_p2 = (tmp_240_0_3_fu_23228_p3.read() ^ tmp_252_0_3_fu_23308_p3.read());
}

void particle_filter::thread_tmp56_fu_26130_p2() {
    tmp56_fu_26130_p2 = (tmp_127_fu_26036_p3.read() ^ tmp_139_fu_26122_p3.read());
}

void particle_filter::thread_tmp57_fu_26314_p2() {
    tmp57_fu_26314_p2 = (tmp_146_fu_26198_p4.read() ^ tmp_192_fu_26306_p3.read());
}

void particle_filter::thread_tmp58_fu_26923_p2() {
    tmp58_fu_26923_p2 = (tmp446_demorgan_reg_34638.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp59_fu_26819_p2() {
    tmp59_fu_26819_p2 = (lD_reg_34579.read() & rev_reg_34571.read());
}

void particle_filter::thread_tmp60_fu_26890_p2() {
    tmp60_fu_26890_p2 = (sel_tmp25_reg_34550.read() | sel_tmp262_not_fu_26884_p2.read());
}

void particle_filter::thread_tmp61_fu_26984_p2() {
    tmp61_fu_26984_p2 = (newsignbit_fu_26933_p3.read() & sel_tmp30_fu_26973_p2.read());
}

void particle_filter::thread_tmp62_fu_27060_p2() {
    tmp62_fu_27060_p2 = (overflow_fu_27037_p2.read() | sign_assign_not_fu_27054_p2.read());
}

void particle_filter::thread_tmp64_fu_27115_p2() {
    tmp64_fu_27115_p2 = (brmerge_fu_27070_p2.read() & sel_tmp38_fu_27110_p2.read());
}

void particle_filter::thread_tmp65_fu_27708_p2() {
    tmp65_fu_27708_p2 = (tmp453_demorgan_fu_27704_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp66_fu_27623_p2() {
    tmp66_fu_27623_p2 = (lD_1_reg_34922.read() & rev2_fu_27618_p2.read());
}

void particle_filter::thread_tmp67_fu_27785_p2() {
    tmp67_fu_27785_p2 = (sel_tmp14_reg_34895.read() | sel_tmp24_not_reg_35029.read());
}

void particle_filter::thread_tmp68_fu_27845_p2() {
    tmp68_fu_27845_p2 = (newsignbit_1_reg_35041.read() & sel_tmp42_fu_27835_p2.read());
}

void particle_filter::thread_tmp69_fu_27918_p2() {
    tmp69_fu_27918_p2 = (overflow_1_reg_35069.read() | sign_assign_1_not_fu_27913_p2.read());
}

void particle_filter::thread_tmp71_fu_27957_p2() {
    tmp71_fu_27957_p2 = (brmerge8_fu_27923_p2.read() & sel_tmp41_reg_34777.read());
}

void particle_filter::thread_tmp72_fu_29537_p2() {
    tmp72_fu_29537_p2 = (tmp460_demorgan_reg_35679.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp73_fu_29299_p2() {
    tmp73_fu_29299_p2 = (tmp_477_reg_35516.read() & rev4_reg_35508.read());
}

void particle_filter::thread_tmp74_fu_29370_p2() {
    tmp74_fu_29370_p2 = (sel_tmp63_reg_35487.read() | sel_tmp104_not_fu_29364_p2.read());
}

void particle_filter::thread_tmp75_fu_29598_p2() {
    tmp75_fu_29598_p2 = (tmp_473_fu_29547_p3.read() & sel_tmp68_fu_29587_p2.read());
}

void particle_filter::thread_tmp76_fu_29770_p2() {
    tmp76_fu_29770_p2 = (overflow_5_fu_29741_p2.read() | sign_assign_2_not_fu_29764_p2.read());
}

void particle_filter::thread_tmp78_fu_29889_p2() {
    tmp78_fu_29889_p2 = (brmerge3_fu_29845_p2.read() & sel_tmp73_fu_29884_p2.read());
}

void particle_filter::thread_tmp79_fu_29627_p2() {
    tmp79_fu_29627_p2 = (tmp467_demorgan_reg_35738.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp80_fu_29439_p2() {
    tmp80_fu_29439_p2 = (tmp_517_reg_35620.read() & rev6_reg_35612.read());
}

void particle_filter::thread_tmp81_fu_29510_p2() {
    tmp81_fu_29510_p2 = (sel_tmp86_reg_35591.read() | sel_tmp181_not_fu_29504_p2.read());
}

void particle_filter::thread_tmp82_fu_29694_p2() {
    tmp82_fu_29694_p2 = (tmp_515_fu_29637_p3.read() & sel_tmp91_fu_29683_p2.read());
}

void particle_filter::thread_tmp83_fu_29839_p2() {
    tmp83_fu_29839_p2 = (overflow_5_1_fu_29811_p2.read() | sign_assign_2_not_1_fu_29833_p2.read());
}

void particle_filter::thread_tmp85_fu_29957_p2() {
    tmp85_fu_29957_p2 = (brmerge12_1_fu_29912_p2.read() & sel_tmp96_fu_29952_p2.read());
}

void particle_filter::thread_tmp86_fu_30874_p2() {
    tmp86_fu_30874_p2 = (p_Result_s_166_reg_36177.read() & sel_tmp8_i_fu_30868_p2.read());
}

void particle_filter::thread_tmp88_fu_22062_p2() {
    tmp88_fu_22062_p2 = (tmp_163_1_fu_21974_p3.read() ^ tmp_175_1_fu_22054_p3.read());
}

void particle_filter::thread_tmp89_fu_22194_p2() {
    tmp89_fu_22194_p2 = (tmp_185_1_fu_22106_p3.read() ^ tmp_197_1_fu_22186_p3.read());
}

void particle_filter::thread_tmp90_fu_23448_p2() {
    tmp90_fu_23448_p2 = (tmp_218_1_fu_23360_p3.read() ^ tmp_230_1_fu_23440_p3.read());
}

void particle_filter::thread_tmp91_fu_23580_p2() {
    tmp91_fu_23580_p2 = (tmp_240_1_fu_23492_p3.read() ^ tmp_252_1_fu_23572_p3.read());
}

void particle_filter::thread_tmp92_fu_23712_p2() {
    tmp92_fu_23712_p2 = (tmp_218_1_1_fu_23624_p3.read() ^ tmp_230_1_1_fu_23704_p3.read());
}

void particle_filter::thread_tmp93_fu_23844_p2() {
    tmp93_fu_23844_p2 = (tmp_240_1_1_fu_23756_p3.read() ^ tmp_252_1_1_fu_23836_p3.read());
}

void particle_filter::thread_tmp94_fu_23976_p2() {
    tmp94_fu_23976_p2 = (tmp_218_1_2_fu_23888_p3.read() ^ tmp_230_1_2_fu_23968_p3.read());
}

void particle_filter::thread_tmp95_fu_24108_p2() {
    tmp95_fu_24108_p2 = (tmp_240_1_2_fu_24020_p3.read() ^ tmp_252_1_2_fu_24100_p3.read());
}

void particle_filter::thread_tmp96_fu_24240_p2() {
    tmp96_fu_24240_p2 = (tmp_218_1_3_fu_24152_p3.read() ^ tmp_230_1_3_fu_24232_p3.read());
}

void particle_filter::thread_tmp97_fu_24372_p2() {
    tmp97_fu_24372_p2 = (tmp_240_1_3_fu_24284_p3.read() ^ tmp_252_1_3_fu_24364_p3.read());
}

void particle_filter::thread_tmp_100_fu_21764_p4() {
    tmp_100_fu_21764_p4 = tmp_99_fu_21758_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_101_fu_21444_p2() {
    tmp_101_fu_21444_p2 = (!ap_const_lv32_1.is_01())? sc_lv<32>(): umax_fu_21438_p3.read() << (unsigned short)ap_const_lv32_1.to_uint();
}

void particle_filter::thread_tmp_102_fu_21126_p1() {
    tmp_102_fu_21126_p1 = i_reg_2313.read().range(13-1, 0);
}

void particle_filter::thread_tmp_103_fu_21774_p3() {
    tmp_103_fu_21774_p3 = esl_concat<11,21>(tmp_98_fu_21742_p4.read(), tmp_100_fu_21764_p4.read());
}

void particle_filter::thread_tmp_104_fu_21794_p4() {
    tmp_104_fu_21794_p4 = rng_state_s_fu_1444.read().range(19, 1);
}

void particle_filter::thread_tmp_105_fu_21810_p2() {
    tmp_105_fu_21810_p2 = (rng_state_s_fu_1444.read() ^ tmp_129_fu_21804_p2.read());
}

void particle_filter::thread_tmp_106_fu_21816_p4() {
    tmp_106_fu_21816_p4 = tmp_105_fu_21810_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_107_fu_21138_p4() {
    tmp_107_fu_21138_p4 = i_reg_2313.read().range(30, 13);
}

void particle_filter::thread_tmp_109_fu_21826_p3() {
    tmp_109_fu_21826_p3 = esl_concat<19,13>(tmp_104_fu_21794_p4.read(), tmp_106_fu_21816_p4.read());
}

void particle_filter::thread_tmp_110_fu_21834_p4() {
    tmp_110_fu_21834_p4 = rng_state_s23_fu_1364.read().range(27, 3);
}

void particle_filter::thread_tmp_111_fu_21850_p2() {
    tmp_111_fu_21850_p2 = (rng_state_s23_fu_1364.read() ^ tmp_130_fu_21844_p2.read());
}

void particle_filter::thread_tmp_112_fu_21856_p4() {
    tmp_112_fu_21856_p4 = tmp_111_fu_21850_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_113_fu_31059_p2() {
    tmp_113_fu_31059_p2 = (tmp_108_reg_36292.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_114_fu_21658_p1() {
    tmp_114_fu_21658_p1 = i2_reg_2402.read().range(13-1, 0);
}

void particle_filter::thread_tmp_115_fu_21866_p3() {
    tmp_115_fu_21866_p3 = esl_concat<25,7>(tmp_110_fu_21834_p4.read(), tmp_112_fu_21856_p4.read());
}

void particle_filter::thread_tmp_116_fu_21874_p4() {
    tmp_116_fu_21874_p4 = rng_state_s43_fu_1284.read().range(14, 4);
}

void particle_filter::thread_tmp_117_fu_21890_p2() {
    tmp_117_fu_21890_p2 = (rng_state_s43_fu_1284.read() ^ tmp_134_fu_21884_p2.read());
}

void particle_filter::thread_tmp_122_fu_21672_p2() {
    tmp_122_fu_21672_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s1_fu_1448.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_123_fu_21896_p4() {
    tmp_123_fu_21896_p4 = tmp_117_fu_21890_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_124_fu_21712_p2() {
    tmp_124_fu_21712_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s2_fu_1368.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_125_fu_26020_p2() {
    tmp_125_fu_26020_p2 = (rng_state_s22_reg_2336.read() ^ tmp_297_fu_26014_p2.read());
}

void particle_filter::thread_tmp_126_fu_26026_p4() {
    tmp_126_fu_26026_p4 = tmp_125_fu_26020_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_127_fu_26036_p3() {
    tmp_127_fu_26036_p3 = esl_concat<19,13>(tmp_296_fu_26004_p4.read(), tmp_126_fu_26026_p4.read());
}

void particle_filter::thread_tmp_128_fu_21752_p2() {
    tmp_128_fu_21752_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s3_fu_1288.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_129_fu_21804_p2() {
    tmp_129_fu_21804_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s_fu_1444.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_130_fu_21844_p2() {
    tmp_130_fu_21844_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s23_fu_1364.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_131_fu_26066_p2() {
    tmp_131_fu_26066_p2 = (rng_state_s42_reg_2346.read() ^ tmp_302_fu_26060_p2.read());
}

void particle_filter::thread_tmp_132_fu_26072_p4() {
    tmp_132_fu_26072_p4 = tmp_131_fu_26066_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_133_fu_26082_p3() {
    tmp_133_fu_26082_p3 = esl_concat<25,7>(tmp_300_fu_26050_p4.read(), tmp_132_fu_26072_p4.read());
}

void particle_filter::thread_tmp_134_fu_21884_p2() {
    tmp_134_fu_21884_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s43_fu_1284.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_135_fu_21906_p3() {
    tmp_135_fu_21906_p3 = esl_concat<11,21>(tmp_116_fu_21874_p4.read(), tmp_123_fu_21896_p4.read());
}

void particle_filter::thread_tmp_137_fu_26106_p2() {
    tmp_137_fu_26106_p2 = (rng_state_s62_reg_2356.read() ^ tmp_306_fu_26100_p2.read());
}

void particle_filter::thread_tmp_138_fu_26112_p4() {
    tmp_138_fu_26112_p4 = tmp_137_fu_26106_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_139_fu_26122_p3() {
    tmp_139_fu_26122_p3 = esl_concat<11,21>(tmp_305_fu_26090_p4.read(), tmp_138_fu_26112_p4.read());
}

void particle_filter::thread_tmp_140_fu_21926_p4() {
    tmp_140_fu_21926_p4 = i2_reg_2402.read().range(30, 13);
}

void particle_filter::thread_tmp_142_fu_25856_p1() {
    tmp_142_fu_25856_p1 = i4_phi_fu_19329_p4.read().range(13-1, 0);
}

void particle_filter::thread_tmp_143_fu_26172_p4() {
    tmp_143_fu_26172_p4 = esl_concat<19,13>(esl_concat<6,13>(tmp_313_fu_26162_p4.read(), tmp_126_fu_26026_p4.read()), ap_const_lv13_0);
}

void particle_filter::thread_tmp_144_fu_26182_p2() {
    tmp_144_fu_26182_p2 = (tmp_290_fu_25998_p2.read() ^ tmp_143_fu_26172_p4.read());
}

void particle_filter::thread_tmp_145_fu_26188_p4() {
    tmp_145_fu_26188_p4 = tmp_144_fu_26182_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_146_fu_26198_p4() {
    tmp_146_fu_26198_p4 = esl_concat<19,13>(esl_concat<7,12>(tmp_312_fu_26152_p4.read(), tmp_310_fu_26142_p4.read()), tmp_145_fu_26188_p4.read());
}

void particle_filter::thread_tmp_147_fu_25868_p4() {
    tmp_147_fu_25868_p4 = i4_phi_fu_19329_p4.read().range(30, 13);
}

void particle_filter::thread_tmp_14_fu_21455_p2() {
    tmp_14_fu_21455_p2 = (!tmp13_fu_21450_p2.read().is_01() || !tmp_101_fu_21444_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp13_fu_21450_p2.read()) + sc_biguint<32>(tmp_101_fu_21444_p2.read()));
}

void particle_filter::thread_tmp_150_fu_26234_p2() {
    tmp_150_fu_26234_p2 = (tmp_298_fu_26044_p2.read() ^ tmp_327_fu_26228_p2.read());
}

void particle_filter::thread_tmp_152_fu_26240_p4() {
    tmp_152_fu_26240_p4 = tmp_150_fu_26234_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_153_fu_26250_p4() {
    tmp_153_fu_26250_p4 = esl_concat<25,7>(esl_concat<21,4>(tmp_324_fu_26218_p4.read(), tmp_318_fu_26208_p4.read()), tmp_152_fu_26240_p4.read());
}

void particle_filter::thread_tmp_156_fu_22272_p4() {
    tmp_156_fu_22272_p4 = rng_state_s6_fu_1432.read().range(19, 1);
}

void particle_filter::thread_tmp_157_fu_22282_p2() {
    tmp_157_fu_22282_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s6_fu_1432.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_158_fu_22288_p2() {
    tmp_158_fu_22288_p2 = (rng_state_s6_fu_1432.read() ^ tmp_157_fu_22282_p2.read());
}

void particle_filter::thread_tmp_159_fu_22294_p4() {
    tmp_159_fu_22294_p4 = tmp_158_fu_22288_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_15_fu_21461_p2() {
    tmp_15_fu_21461_p2 = (!umax_fu_21438_p3.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_bigint<32>(umax_fu_21438_p3.read()) + sc_biguint<32>(ap_const_lv32_FFFFFFFF));
}

void particle_filter::thread_tmp_160_fu_22304_p3() {
    tmp_160_fu_22304_p3 = esl_concat<19,13>(tmp_156_fu_22272_p4.read(), tmp_159_fu_22294_p4.read());
}

void particle_filter::thread_tmp_161_1_fu_21958_p2() {
    tmp_161_1_fu_21958_p2 = (rng_state_s4_fu_1440.read() ^ tmp_544_fu_21952_p2.read());
}

void particle_filter::thread_tmp_161_fu_22312_p4() {
    tmp_161_fu_22312_p4 = rng_state_s26_fu_1352.read().range(27, 3);
}

void particle_filter::thread_tmp_162_1_fu_21964_p4() {
    tmp_162_1_fu_21964_p4 = tmp_161_1_fu_21958_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_162_fu_22322_p2() {
    tmp_162_fu_22322_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s26_fu_1352.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_163_1_fu_21974_p3() {
    tmp_163_1_fu_21974_p3 = esl_concat<19,13>(tmp_417_fu_21942_p4.read(), tmp_162_1_fu_21964_p4.read());
}

void particle_filter::thread_tmp_163_fu_22328_p2() {
    tmp_163_fu_22328_p2 = (rng_state_s26_fu_1352.read() ^ tmp_162_fu_22322_p2.read());
}

void particle_filter::thread_tmp_164_fu_22334_p4() {
    tmp_164_fu_22334_p4 = tmp_163_fu_22328_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_165_fu_22344_p3() {
    tmp_165_fu_22344_p3 = esl_concat<25,7>(tmp_161_fu_22312_p4.read(), tmp_164_fu_22334_p4.read());
}

void particle_filter::thread_tmp_166_fu_22352_p4() {
    tmp_166_fu_22352_p4 = rng_state_s46_fu_1272.read().range(14, 4);
}

void particle_filter::thread_tmp_167_1_fu_21998_p2() {
    tmp_167_1_fu_21998_p2 = (rng_state_s24_fu_1360.read() ^ tmp_545_fu_21992_p2.read());
}

void particle_filter::thread_tmp_167_fu_22362_p2() {
    tmp_167_fu_22362_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s46_fu_1272.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_168_1_fu_22004_p4() {
    tmp_168_1_fu_22004_p4 = tmp_167_1_fu_21998_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_168_fu_22368_p2() {
    tmp_168_fu_22368_p2 = (rng_state_s46_fu_1272.read() ^ tmp_167_fu_22362_p2.read());
}

void particle_filter::thread_tmp_169_1_fu_22014_p3() {
    tmp_169_1_fu_22014_p3 = esl_concat<25,7>(tmp_420_fu_21982_p4.read(), tmp_168_1_fu_22004_p4.read());
}

void particle_filter::thread_tmp_169_fu_22374_p4() {
    tmp_169_fu_22374_p4 = tmp_168_fu_22368_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_170_fu_22384_p3() {
    tmp_170_fu_22384_p3 = esl_concat<11,21>(tmp_166_fu_22352_p4.read(), tmp_169_fu_22374_p4.read());
}

void particle_filter::thread_tmp_171_fu_22404_p4() {
    tmp_171_fu_22404_p4 = rng_state_s7_fu_1428.read().range(19, 1);
}

void particle_filter::thread_tmp_172_fu_22414_p2() {
    tmp_172_fu_22414_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s7_fu_1428.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_173_1_fu_22038_p2() {
    tmp_173_1_fu_22038_p2 = (rng_state_s44_fu_1280.read() ^ tmp_546_fu_22032_p2.read());
}

void particle_filter::thread_tmp_173_fu_22420_p2() {
    tmp_173_fu_22420_p2 = (rng_state_s7_fu_1428.read() ^ tmp_172_fu_22414_p2.read());
}

void particle_filter::thread_tmp_174_1_fu_22044_p4() {
    tmp_174_1_fu_22044_p4 = tmp_173_1_fu_22038_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_174_fu_22426_p4() {
    tmp_174_fu_22426_p4 = tmp_173_fu_22420_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_175_1_fu_22054_p3() {
    tmp_175_1_fu_22054_p3 = esl_concat<11,21>(tmp_421_fu_22022_p4.read(), tmp_174_1_fu_22044_p4.read());
}

void particle_filter::thread_tmp_175_fu_22436_p3() {
    tmp_175_fu_22436_p3 = esl_concat<19,13>(tmp_171_fu_22404_p4.read(), tmp_174_fu_22426_p4.read());
}

void particle_filter::thread_tmp_176_fu_22444_p4() {
    tmp_176_fu_22444_p4 = rng_state_s27_fu_1348.read().range(27, 3);
}

void particle_filter::thread_tmp_177_fu_22454_p2() {
    tmp_177_fu_22454_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s27_fu_1348.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_178_fu_26280_p4() {
    tmp_178_fu_26280_p4 = esl_concat<29,3>(esl_concat<8,21>(tmp_332_fu_26270_p4.read(), tmp_138_fu_26112_p4.read()), ap_const_lv3_0);
}

void particle_filter::thread_tmp_179_fu_26290_p2() {
    tmp_179_fu_26290_p2 = (tmp_139_fu_26122_p3.read() ^ tmp_178_fu_26280_p4.read());
}

void particle_filter::thread_tmp_17_fu_21485_p2() {
    tmp_17_fu_21485_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_19_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_19_offset_read.read()));
}

void particle_filter::thread_tmp_180_fu_22460_p2() {
    tmp_180_fu_22460_p2 = (rng_state_s27_fu_1348.read() ^ tmp_177_fu_22454_p2.read());
}

void particle_filter::thread_tmp_181_fu_22466_p4() {
    tmp_181_fu_22466_p4 = tmp_180_fu_22460_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_182_fu_22476_p3() {
    tmp_182_fu_22476_p3 = esl_concat<25,7>(tmp_176_fu_22444_p4.read(), tmp_181_fu_22466_p4.read());
}

void particle_filter::thread_tmp_183_1_fu_22090_p2() {
    tmp_183_1_fu_22090_p2 = (rng_state_s5_fu_1436.read() ^ tmp_547_fu_22084_p2.read());
}

void particle_filter::thread_tmp_183_fu_22484_p4() {
    tmp_183_fu_22484_p4 = rng_state_s47_fu_1268.read().range(14, 4);
}

void particle_filter::thread_tmp_184_1_fu_22096_p4() {
    tmp_184_1_fu_22096_p4 = tmp_183_1_fu_22090_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_184_fu_22494_p2() {
    tmp_184_fu_22494_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s47_fu_1268.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_185_1_fu_22106_p3() {
    tmp_185_1_fu_22106_p3 = esl_concat<19,13>(tmp_422_fu_22074_p4.read(), tmp_184_1_fu_22096_p4.read());
}

void particle_filter::thread_tmp_185_fu_22500_p2() {
    tmp_185_fu_22500_p2 = (rng_state_s47_fu_1268.read() ^ tmp_184_fu_22494_p2.read());
}

void particle_filter::thread_tmp_186_fu_22506_p4() {
    tmp_186_fu_22506_p4 = tmp_185_fu_22500_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_187_fu_22516_p3() {
    tmp_187_fu_22516_p3 = esl_concat<11,21>(tmp_183_fu_22484_p4.read(), tmp_186_fu_22506_p4.read());
}

void particle_filter::thread_tmp_189_1_fu_22130_p2() {
    tmp_189_1_fu_22130_p2 = (rng_state_s25_fu_1356.read() ^ tmp_548_fu_22124_p2.read());
}

void particle_filter::thread_tmp_189_fu_22536_p4() {
    tmp_189_fu_22536_p4 = rng_state_s8_fu_1424.read().range(19, 1);
}

void particle_filter::thread_tmp_18_fu_21489_p2() {
    tmp_18_fu_21489_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_18_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_18_offset_read.read()));
}

void particle_filter::thread_tmp_190_1_fu_22136_p4() {
    tmp_190_1_fu_22136_p4 = tmp_189_1_fu_22130_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_190_fu_22546_p2() {
    tmp_190_fu_22546_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s8_fu_1424.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_191_1_fu_22146_p3() {
    tmp_191_1_fu_22146_p3 = esl_concat<25,7>(tmp_423_fu_22114_p4.read(), tmp_190_1_fu_22136_p4.read());
}

void particle_filter::thread_tmp_191_fu_26296_p4() {
    tmp_191_fu_26296_p4 = tmp_179_fu_26290_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_192_fu_26306_p3() {
    tmp_192_fu_26306_p3 = esl_concat<11,21>(tmp_331_fu_26260_p4.read(), tmp_191_fu_26296_p4.read());
}

void particle_filter::thread_tmp_193_fu_22576_p4() {
    tmp_193_fu_22576_p4 = rng_state_s28_fu_1344.read().range(27, 3);
}

void particle_filter::thread_tmp_194_fu_22586_p2() {
    tmp_194_fu_22586_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s28_fu_1344.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_195_1_fu_22170_p2() {
    tmp_195_1_fu_22170_p2 = (rng_state_s45_fu_1276.read() ^ tmp_549_fu_22164_p2.read());
}

void particle_filter::thread_tmp_196_1_fu_22176_p4() {
    tmp_196_1_fu_22176_p4 = tmp_195_1_fu_22170_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_197_1_fu_22186_p3() {
    tmp_197_1_fu_22186_p3 = esl_concat<11,21>(tmp_424_fu_22154_p4.read(), tmp_196_1_fu_22176_p4.read());
}

void particle_filter::thread_tmp_197_fu_26352_p1() {
    tmp_197_fu_26352_p1 = esl_zext<12,11>(exp_tmp_V_fu_26342_p4.read());
}

void particle_filter::thread_tmp_198_fu_22616_p4() {
    tmp_198_fu_22616_p4 = rng_state_s48_fu_1264.read().range(14, 4);
}

void particle_filter::thread_tmp_199_fu_26360_p2() {
    tmp_199_fu_26360_p2 = (!tmp_335_fu_26330_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_335_fu_26330_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_19_fu_21493_p2() {
    tmp_19_fu_21493_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_17_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_17_offset_read.read()));
}

void particle_filter::thread_tmp_200_fu_22626_p2() {
    tmp_200_fu_22626_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s48_fu_1264.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_201_fu_26406_p2() {
    tmp_201_fu_26406_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34451.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_202_fu_26411_p2() {
    tmp_202_fu_26411_p2 = (!ap_const_lv12_C.is_01() || !F2_reg_34451.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_reg_34451.read()));
}

void particle_filter::thread_tmp_203_fu_26535_p2() {
    tmp_203_fu_26535_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(F2_reg_34451.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_204_fu_22668_p4() {
    tmp_204_fu_22668_p4 = rng_state_s9_fu_1420.read().range(19, 1);
}

void particle_filter::thread_tmp_205_fu_26540_p2() {
    tmp_205_fu_26540_p2 = (!sh_amt_reg_34478.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_34478.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_206_fu_22678_p2() {
    tmp_206_fu_22678_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s9_fu_1420.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_207_fu_26545_p2() {
    tmp_207_fu_26545_p2 = (!sh_amt_reg_34478.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_reg_34478.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_208_fu_26550_p0() {
    tmp_208_fu_26550_p0 = sh_amt_cast_fu_26532_p1.read();
}

void particle_filter::thread_tmp_208_fu_26550_p1() {
    tmp_208_fu_26550_p1 = esl_zext<54,32>(tmp_208_fu_26550_p0.read());
}

void particle_filter::thread_tmp_209_fu_25832_p2() {
    tmp_209_fu_25832_p2 = (!loc_V_23_fu_25808_p4.read().is_01() || !loc_V_24_fu_25822_p4.read().is_01())? sc_lv<1>(): (sc_biguint<8>(loc_V_23_fu_25808_p4.read()) < sc_biguint<8>(loc_V_24_fu_25822_p4.read()));
}

void particle_filter::thread_tmp_20_fu_21497_p2() {
    tmp_20_fu_21497_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_16_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_16_offset_read.read()));
}

void particle_filter::thread_tmp_210_fu_26554_p2() {
    tmp_210_fu_26554_p2 = (!man_V_reg_34465.read().is_01() || !tmp_208_fu_26550_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_reg_34465.read()) >> (unsigned short)tmp_208_fu_26550_p1.read().to_uint();
}

void particle_filter::thread_tmp_211_fu_22708_p4() {
    tmp_211_fu_22708_p4 = rng_state_s29_fu_1340.read().range(27, 3);
}

void particle_filter::thread_tmp_213_fu_26573_p0() {
    tmp_213_fu_26573_p0 = esl_sext<32,28>(tmp_362_reg_34485.read());
}

void particle_filter::thread_tmp_213_fu_26573_p1() {
    tmp_213_fu_26573_p1 = sh_amt_cast_fu_26532_p1.read();
}

void particle_filter::thread_tmp_213_fu_26573_p2() {
    tmp_213_fu_26573_p2 = (!tmp_213_fu_26573_p1.read().is_01())? sc_lv<32>(): tmp_213_fu_26573_p0.read() << (unsigned short)tmp_213_fu_26573_p1.read().to_uint();
}

void particle_filter::thread_tmp_214_fu_22718_p2() {
    tmp_214_fu_22718_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s29_fu_1340.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_215_fu_26428_p2() {
    tmp_215_fu_26428_p2 = (!tmp_201_fu_26406_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_201_fu_26406_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_216_0_1_fu_22552_p2() {
    tmp_216_0_1_fu_22552_p2 = (rng_state_s8_fu_1424.read() ^ tmp_190_fu_22546_p2.read());
}

void particle_filter::thread_tmp_216_0_2_fu_22816_p2() {
    tmp_216_0_2_fu_22816_p2 = (rng_state_s10_fu_1416.read() ^ tmp_226_fu_22810_p2.read());
}

void particle_filter::thread_tmp_216_0_3_fu_23080_p2() {
    tmp_216_0_3_fu_23080_p2 = (rng_state_s12_fu_1408.read() ^ tmp_254_fu_23074_p2.read());
}

void particle_filter::thread_tmp_216_1_1_fu_23608_p2() {
    tmp_216_1_1_fu_23608_p2 = (rng_state_s16_fu_1392.read() ^ tmp_556_fu_23602_p2.read());
}

void particle_filter::thread_tmp_216_1_2_fu_23872_p2() {
    tmp_216_1_2_fu_23872_p2 = (rng_state_s18_fu_1384.read() ^ tmp_562_fu_23866_p2.read());
}

void particle_filter::thread_tmp_216_1_3_fu_24136_p2() {
    tmp_216_1_3_fu_24136_p2 = (rng_state_s20_fu_1376.read() ^ tmp_568_fu_24130_p2.read());
}

void particle_filter::thread_tmp_216_1_fu_23344_p2() {
    tmp_216_1_fu_23344_p2 = (rng_state_s14_fu_1400.read() ^ tmp_550_fu_23338_p2.read());
}

void particle_filter::thread_tmp_216_fu_26434_p2() {
    tmp_216_fu_26434_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34451.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_217_0_1_fu_22558_p4() {
    tmp_217_0_1_fu_22558_p4 = tmp_216_0_1_fu_22552_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_0_2_fu_22822_p4() {
    tmp_217_0_2_fu_22822_p4 = tmp_216_0_2_fu_22816_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_0_3_fu_23086_p4() {
    tmp_217_0_3_fu_23086_p4 = tmp_216_0_3_fu_23080_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_1_fu_23614_p4() {
    tmp_217_1_1_fu_23614_p4 = tmp_216_1_1_fu_23608_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_2_fu_23878_p4() {
    tmp_217_1_2_fu_23878_p4 = tmp_216_1_2_fu_23872_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_3_fu_24142_p4() {
    tmp_217_1_3_fu_24142_p4 = tmp_216_1_3_fu_24136_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_1_fu_23350_p4() {
    tmp_217_1_fu_23350_p4 = tmp_216_1_fu_23344_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_217_fu_22748_p4() {
    tmp_217_fu_22748_p4 = rng_state_s49_fu_1260.read().range(14, 4);
}

void particle_filter::thread_tmp_218_0_1_fu_22568_p3() {
    tmp_218_0_1_fu_22568_p3 = esl_concat<19,13>(tmp_189_fu_22536_p4.read(), tmp_217_0_1_fu_22558_p4.read());
}

void particle_filter::thread_tmp_218_0_2_fu_22832_p3() {
    tmp_218_0_2_fu_22832_p3 = esl_concat<19,13>(tmp_225_fu_22800_p4.read(), tmp_217_0_2_fu_22822_p4.read());
}

void particle_filter::thread_tmp_218_0_3_fu_23096_p3() {
    tmp_218_0_3_fu_23096_p3 = esl_concat<19,13>(tmp_250_fu_23064_p4.read(), tmp_217_0_3_fu_23086_p4.read());
}

void particle_filter::thread_tmp_218_1_1_fu_23624_p3() {
    tmp_218_1_1_fu_23624_p3 = esl_concat<19,13>(tmp_431_fu_23592_p4.read(), tmp_217_1_1_fu_23614_p4.read());
}

void particle_filter::thread_tmp_218_1_2_fu_23888_p3() {
    tmp_218_1_2_fu_23888_p3 = esl_concat<19,13>(tmp_437_fu_23856_p4.read(), tmp_217_1_2_fu_23878_p4.read());
}

void particle_filter::thread_tmp_218_1_3_fu_24152_p3() {
    tmp_218_1_3_fu_24152_p3 = esl_concat<19,13>(tmp_443_fu_24120_p4.read(), tmp_217_1_3_fu_24142_p4.read());
}

void particle_filter::thread_tmp_218_1_fu_23360_p3() {
    tmp_218_1_fu_23360_p3 = esl_concat<19,13>(tmp_425_fu_23328_p4.read(), tmp_217_1_fu_23350_p4.read());
}

void particle_filter::thread_tmp_218_fu_22758_p2() {
    tmp_218_fu_22758_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s49_fu_1260.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_219_fu_26591_p2() {
    tmp_219_fu_26591_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_reg_34451.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_21_fu_21501_p2() {
    tmp_21_fu_21501_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_15_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_15_offset_read.read()));
}

void particle_filter::thread_tmp_220_fu_26458_p2() {
    tmp_220_fu_26458_p2 = (!F2_reg_34451.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_reg_34451.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_221_fu_26467_p2() {
    tmp_221_fu_26467_p2 = (!tmp_220_fu_26458_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_220_fu_26458_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_222_0_1_fu_22592_p2() {
    tmp_222_0_1_fu_22592_p2 = (rng_state_s28_fu_1344.read() ^ tmp_194_fu_22586_p2.read());
}

void particle_filter::thread_tmp_222_0_2_fu_22856_p2() {
    tmp_222_0_2_fu_22856_p2 = (rng_state_s30_fu_1336.read() ^ tmp_229_fu_22850_p2.read());
}

void particle_filter::thread_tmp_222_0_3_fu_23120_p2() {
    tmp_222_0_3_fu_23120_p2 = (rng_state_s32_fu_1328.read() ^ tmp_260_fu_23114_p2.read());
}

void particle_filter::thread_tmp_222_1_1_fu_23648_p2() {
    tmp_222_1_1_fu_23648_p2 = (rng_state_s36_fu_1312.read() ^ tmp_557_fu_23642_p2.read());
}

void particle_filter::thread_tmp_222_1_2_fu_23912_p2() {
    tmp_222_1_2_fu_23912_p2 = (rng_state_s38_fu_1304.read() ^ tmp_563_fu_23906_p2.read());
}

void particle_filter::thread_tmp_222_1_3_fu_24176_p2() {
    tmp_222_1_3_fu_24176_p2 = (rng_state_s40_fu_1296.read() ^ tmp_569_fu_24170_p2.read());
}

void particle_filter::thread_tmp_222_1_fu_23384_p2() {
    tmp_222_1_fu_23384_p2 = (rng_state_s34_fu_1320.read() ^ tmp_551_fu_23378_p2.read());
}

void particle_filter::thread_tmp_222_fu_26473_p3() {
    tmp_222_fu_26473_p3 = (!tmp_221_fu_26467_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_221_fu_26467_p2.read()[0].to_bool())? ap_const_lv11_35: tmp_392_fu_26463_p1.read());
}

void particle_filter::thread_tmp_223_0_1_fu_22598_p4() {
    tmp_223_0_1_fu_22598_p4 = tmp_222_0_1_fu_22592_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_0_2_fu_22862_p4() {
    tmp_223_0_2_fu_22862_p4 = tmp_222_0_2_fu_22856_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_0_3_fu_23126_p4() {
    tmp_223_0_3_fu_23126_p4 = tmp_222_0_3_fu_23120_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_1_fu_23654_p4() {
    tmp_223_1_1_fu_23654_p4 = tmp_222_1_1_fu_23648_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_2_fu_23918_p4() {
    tmp_223_1_2_fu_23918_p4 = tmp_222_1_2_fu_23912_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_3_fu_24182_p4() {
    tmp_223_1_3_fu_24182_p4 = tmp_222_1_3_fu_24176_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_1_fu_23390_p4() {
    tmp_223_1_fu_23390_p4 = tmp_222_1_fu_23384_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_223_fu_26596_p2() {
    tmp_223_fu_26596_p2 = (!p_Result_3_reg_34496.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_3_reg_34496.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_224_0_1_fu_22608_p3() {
    tmp_224_0_1_fu_22608_p3 = esl_concat<25,7>(tmp_193_fu_22576_p4.read(), tmp_223_0_1_fu_22598_p4.read());
}

void particle_filter::thread_tmp_224_0_2_fu_22872_p3() {
    tmp_224_0_2_fu_22872_p3 = esl_concat<25,7>(tmp_227_fu_22840_p4.read(), tmp_223_0_2_fu_22862_p4.read());
}

void particle_filter::thread_tmp_224_0_3_fu_23136_p3() {
    tmp_224_0_3_fu_23136_p3 = esl_concat<25,7>(tmp_256_fu_23104_p4.read(), tmp_223_0_3_fu_23126_p4.read());
}

void particle_filter::thread_tmp_224_1_1_fu_23664_p3() {
    tmp_224_1_1_fu_23664_p3 = esl_concat<25,7>(tmp_432_fu_23632_p4.read(), tmp_223_1_1_fu_23654_p4.read());
}

void particle_filter::thread_tmp_224_1_2_fu_23928_p3() {
    tmp_224_1_2_fu_23928_p3 = esl_concat<25,7>(tmp_438_fu_23896_p4.read(), tmp_223_1_2_fu_23918_p4.read());
}

void particle_filter::thread_tmp_224_1_3_fu_24192_p3() {
    tmp_224_1_3_fu_24192_p3 = esl_concat<25,7>(tmp_444_fu_24160_p4.read(), tmp_223_1_3_fu_24182_p4.read());
}

void particle_filter::thread_tmp_224_1_fu_23400_p3() {
    tmp_224_1_fu_23400_p3 = esl_concat<25,7>(tmp_426_fu_23368_p4.read(), tmp_223_1_fu_23390_p4.read());
}

void particle_filter::thread_tmp_224_fu_26776_p1() {
    tmp_224_fu_26776_p1 = esl_zext<28,1>(qb_assign_1_fu_26772_p2.read());
}

void particle_filter::thread_tmp_225_fu_22800_p4() {
    tmp_225_fu_22800_p4 = rng_state_s10_fu_1416.read().range(19, 1);
}

void particle_filter::thread_tmp_226_fu_22810_p2() {
    tmp_226_fu_22810_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s10_fu_1416.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_227_fu_22840_p4() {
    tmp_227_fu_22840_p4 = rng_state_s30_fu_1336.read().range(27, 3);
}

void particle_filter::thread_tmp_228_0_1_fu_22632_p2() {
    tmp_228_0_1_fu_22632_p2 = (rng_state_s48_fu_1264.read() ^ tmp_200_fu_22626_p2.read());
}

void particle_filter::thread_tmp_228_0_2_fu_22896_p2() {
    tmp_228_0_2_fu_22896_p2 = (rng_state_s50_fu_1256.read() ^ tmp_234_fu_22890_p2.read());
}

void particle_filter::thread_tmp_228_0_3_fu_23160_p2() {
    tmp_228_0_3_fu_23160_p2 = (rng_state_s52_fu_1248.read() ^ tmp_266_fu_23154_p2.read());
}

void particle_filter::thread_tmp_228_1_1_fu_23688_p2() {
    tmp_228_1_1_fu_23688_p2 = (rng_state_s56_fu_1232.read() ^ tmp_558_fu_23682_p2.read());
}

void particle_filter::thread_tmp_228_1_2_fu_23952_p2() {
    tmp_228_1_2_fu_23952_p2 = (rng_state_s58_fu_1224.read() ^ tmp_564_fu_23946_p2.read());
}

void particle_filter::thread_tmp_228_1_3_fu_24216_p2() {
    tmp_228_1_3_fu_24216_p2 = (rng_state_s60_fu_1216.read() ^ tmp_570_fu_24210_p2.read());
}

void particle_filter::thread_tmp_228_1_fu_23424_p2() {
    tmp_228_1_fu_23424_p2 = (rng_state_s54_fu_1240.read() ^ tmp_552_fu_23418_p2.read());
}

void particle_filter::thread_tmp_228_fu_26503_p2() {
    tmp_228_fu_26503_p2 = (!tmp447_cast_cast_fu_26495_p3.read().is_01() || !exp_V_fu_26372_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp447_cast_cast_fu_26495_p3.read()) + sc_biguint<12>(exp_V_fu_26372_p2.read()));
}

void particle_filter::thread_tmp_229_0_1_fu_22638_p4() {
    tmp_229_0_1_fu_22638_p4 = tmp_228_0_1_fu_22632_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_0_2_fu_22902_p4() {
    tmp_229_0_2_fu_22902_p4 = tmp_228_0_2_fu_22896_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_0_3_fu_23166_p4() {
    tmp_229_0_3_fu_23166_p4 = tmp_228_0_3_fu_23160_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_1_fu_23694_p4() {
    tmp_229_1_1_fu_23694_p4 = tmp_228_1_1_fu_23688_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_2_fu_23958_p4() {
    tmp_229_1_2_fu_23958_p4 = tmp_228_1_2_fu_23952_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_3_fu_24222_p4() {
    tmp_229_1_3_fu_24222_p4 = tmp_228_1_3_fu_24216_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_1_fu_23430_p4() {
    tmp_229_1_fu_23430_p4 = tmp_228_1_fu_23424_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_229_fu_22850_p2() {
    tmp_229_fu_22850_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s30_fu_1336.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_22_fu_21505_p2() {
    tmp_22_fu_21505_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_14_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_14_offset_read.read()));
}

void particle_filter::thread_tmp_230_0_1_fu_22648_p3() {
    tmp_230_0_1_fu_22648_p3 = esl_concat<11,21>(tmp_198_fu_22616_p4.read(), tmp_229_0_1_fu_22638_p4.read());
}

void particle_filter::thread_tmp_230_0_2_fu_22912_p3() {
    tmp_230_0_2_fu_22912_p3 = esl_concat<11,21>(tmp_231_fu_22880_p4.read(), tmp_229_0_2_fu_22902_p4.read());
}

void particle_filter::thread_tmp_230_0_3_fu_23176_p3() {
    tmp_230_0_3_fu_23176_p3 = esl_concat<11,21>(tmp_262_fu_23144_p4.read(), tmp_229_0_3_fu_23166_p4.read());
}

void particle_filter::thread_tmp_230_1_1_fu_23704_p3() {
    tmp_230_1_1_fu_23704_p3 = esl_concat<11,21>(tmp_433_fu_23672_p4.read(), tmp_229_1_1_fu_23694_p4.read());
}

void particle_filter::thread_tmp_230_1_2_fu_23968_p3() {
    tmp_230_1_2_fu_23968_p3 = esl_concat<11,21>(tmp_439_fu_23936_p4.read(), tmp_229_1_2_fu_23958_p4.read());
}

void particle_filter::thread_tmp_230_1_3_fu_24232_p3() {
    tmp_230_1_3_fu_24232_p3 = esl_concat<11,21>(tmp_445_fu_24200_p4.read(), tmp_229_1_3_fu_24222_p4.read());
}

void particle_filter::thread_tmp_230_1_fu_23440_p3() {
    tmp_230_1_fu_23440_p3 = esl_concat<11,21>(tmp_427_fu_23408_p4.read(), tmp_229_1_fu_23430_p4.read());
}

void particle_filter::thread_tmp_230_fu_26666_p2() {
    tmp_230_fu_26666_p2 = (!pos1_fu_26654_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_fu_26654_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_231_fu_22880_p4() {
    tmp_231_fu_22880_p4 = rng_state_s50_fu_1256.read().range(14, 4);
}

void particle_filter::thread_tmp_232_fu_26686_p0() {
    tmp_232_fu_26686_p0 = esl_sext<32,12>(pos1_fu_26654_p2.read());
}

void particle_filter::thread_tmp_232_fu_26686_p1() {
    tmp_232_fu_26686_p1 = esl_zext<54,32>(tmp_232_fu_26686_p0.read());
}

void particle_filter::thread_tmp_233_fu_26690_p2() {
    tmp_233_fu_26690_p2 = (!man_V_reg_34465.read().is_01() || !tmp_232_fu_26686_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_reg_34465.read()) >> (unsigned short)tmp_232_fu_26686_p1.read().to_uint();
}

void particle_filter::thread_tmp_234_fu_22890_p2() {
    tmp_234_fu_22890_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s50_fu_1256.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_235_fu_22932_p4() {
    tmp_235_fu_22932_p4 = rng_state_s11_fu_1412.read().range(19, 1);
}

void particle_filter::thread_tmp_236_fu_26704_p2() {
    tmp_236_fu_26704_p2 = (!pos2_reg_34506.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_reg_34506.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_236_not_fu_26746_p2() {
    tmp_236_not_fu_26746_p2 = (tmp_236_fu_26704_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_237_fu_26709_p0() {
    tmp_237_fu_26709_p0 = esl_sext<32,12>(pos2_reg_34506.read());
}

void particle_filter::thread_tmp_237_fu_26709_p1() {
    tmp_237_fu_26709_p1 = esl_zext<54,32>(tmp_237_fu_26709_p0.read());
}

void particle_filter::thread_tmp_238_0_1_fu_22684_p2() {
    tmp_238_0_1_fu_22684_p2 = (rng_state_s9_fu_1420.read() ^ tmp_206_fu_22678_p2.read());
}

void particle_filter::thread_tmp_238_0_2_fu_22948_p2() {
    tmp_238_0_2_fu_22948_p2 = (rng_state_s11_fu_1412.read() ^ tmp_239_fu_22942_p2.read());
}

void particle_filter::thread_tmp_238_0_3_fu_23212_p2() {
    tmp_238_0_3_fu_23212_p2 = (rng_state_s13_fu_1404.read() ^ tmp_270_fu_23206_p2.read());
}

void particle_filter::thread_tmp_238_1_1_fu_23740_p2() {
    tmp_238_1_1_fu_23740_p2 = (rng_state_s17_fu_1388.read() ^ tmp_559_fu_23734_p2.read());
}

void particle_filter::thread_tmp_238_1_2_fu_24004_p2() {
    tmp_238_1_2_fu_24004_p2 = (rng_state_s19_fu_1380.read() ^ tmp_565_fu_23998_p2.read());
}

void particle_filter::thread_tmp_238_1_3_fu_24268_p2() {
    tmp_238_1_3_fu_24268_p2 = (rng_state_s21_fu_1372.read() ^ tmp_571_fu_24262_p2.read());
}

void particle_filter::thread_tmp_238_1_fu_23476_p2() {
    tmp_238_1_fu_23476_p2 = (rng_state_s15_fu_1396.read() ^ tmp_553_fu_23470_p2.read());
}

void particle_filter::thread_tmp_238_fu_26730_p2() {
    tmp_238_fu_26730_p2 = (!Range2_V_1_fu_26713_p2.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_1_fu_26713_p2.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_239_0_1_fu_22690_p4() {
    tmp_239_0_1_fu_22690_p4 = tmp_238_0_1_fu_22684_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_0_2_fu_22954_p4() {
    tmp_239_0_2_fu_22954_p4 = tmp_238_0_2_fu_22948_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_0_3_fu_23218_p4() {
    tmp_239_0_3_fu_23218_p4 = tmp_238_0_3_fu_23212_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_1_fu_23746_p4() {
    tmp_239_1_1_fu_23746_p4 = tmp_238_1_1_fu_23740_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_2_fu_24010_p4() {
    tmp_239_1_2_fu_24010_p4 = tmp_238_1_2_fu_24004_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_3_fu_24274_p4() {
    tmp_239_1_3_fu_24274_p4 = tmp_238_1_3_fu_24268_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_1_fu_23482_p4() {
    tmp_239_1_fu_23482_p4 = tmp_238_1_fu_23476_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_239_fu_22942_p2() {
    tmp_239_fu_22942_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s11_fu_1412.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_23_fu_21509_p2() {
    tmp_23_fu_21509_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_13_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_13_offset_read.read()));
}

void particle_filter::thread_tmp_240_0_1_fu_22700_p3() {
    tmp_240_0_1_fu_22700_p3 = esl_concat<19,13>(tmp_204_fu_22668_p4.read(), tmp_239_0_1_fu_22690_p4.read());
}

void particle_filter::thread_tmp_240_0_2_fu_22964_p3() {
    tmp_240_0_2_fu_22964_p3 = esl_concat<19,13>(tmp_235_fu_22932_p4.read(), tmp_239_0_2_fu_22954_p4.read());
}

void particle_filter::thread_tmp_240_0_3_fu_23228_p3() {
    tmp_240_0_3_fu_23228_p3 = esl_concat<19,13>(tmp_269_fu_23196_p4.read(), tmp_239_0_3_fu_23218_p4.read());
}

void particle_filter::thread_tmp_240_1_1_fu_23756_p3() {
    tmp_240_1_1_fu_23756_p3 = esl_concat<19,13>(tmp_434_fu_23724_p4.read(), tmp_239_1_1_fu_23746_p4.read());
}

void particle_filter::thread_tmp_240_1_2_fu_24020_p3() {
    tmp_240_1_2_fu_24020_p3 = esl_concat<19,13>(tmp_440_fu_23988_p4.read(), tmp_239_1_2_fu_24010_p4.read());
}

void particle_filter::thread_tmp_240_1_3_fu_24284_p3() {
    tmp_240_1_3_fu_24284_p3 = esl_concat<19,13>(tmp_446_fu_24252_p4.read(), tmp_239_1_3_fu_24274_p4.read());
}

void particle_filter::thread_tmp_240_1_fu_23492_p3() {
    tmp_240_1_fu_23492_p3 = esl_concat<19,13>(tmp_428_fu_23460_p4.read(), tmp_239_1_fu_23482_p4.read());
}

void particle_filter::thread_tmp_240_fu_26736_p2() {
    tmp_240_fu_26736_p2 = (!pos2_reg_34506.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_reg_34506.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_241_fu_22972_p4() {
    tmp_241_fu_22972_p4 = rng_state_s31_fu_1332.read().range(27, 3);
}

void particle_filter::thread_tmp_242_fu_22982_p2() {
    tmp_242_fu_22982_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s31_fu_1332.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_243_fu_27007_p2() {
    tmp_243_fu_27007_p2 = (Range1_all_ones_2_i1_148_reg_34693.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_244_0_1_fu_22724_p2() {
    tmp_244_0_1_fu_22724_p2 = (rng_state_s29_fu_1340.read() ^ tmp_214_fu_22718_p2.read());
}

void particle_filter::thread_tmp_244_0_2_fu_22988_p2() {
    tmp_244_0_2_fu_22988_p2 = (rng_state_s31_fu_1332.read() ^ tmp_242_fu_22982_p2.read());
}

void particle_filter::thread_tmp_244_0_3_fu_23252_p2() {
    tmp_244_0_3_fu_23252_p2 = (rng_state_s33_fu_1324.read() ^ tmp_273_fu_23246_p2.read());
}

void particle_filter::thread_tmp_244_1_1_fu_23780_p2() {
    tmp_244_1_1_fu_23780_p2 = (rng_state_s37_fu_1308.read() ^ tmp_560_fu_23774_p2.read());
}

void particle_filter::thread_tmp_244_1_2_fu_24044_p2() {
    tmp_244_1_2_fu_24044_p2 = (rng_state_s39_fu_1300.read() ^ tmp_566_fu_24038_p2.read());
}

void particle_filter::thread_tmp_244_1_3_fu_24308_p2() {
    tmp_244_1_3_fu_24308_p2 = (rng_state_s41_fu_1292.read() ^ tmp_572_fu_24302_p2.read());
}

void particle_filter::thread_tmp_244_1_fu_23516_p2() {
    tmp_244_1_fu_23516_p2 = (rng_state_s35_fu_1316.read() ^ tmp_554_fu_23510_p2.read());
}

void particle_filter::thread_tmp_244_fu_27032_p2() {
    tmp_244_fu_27032_p2 = (isneg_reg_34422.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_245_0_1_fu_22730_p4() {
    tmp_245_0_1_fu_22730_p4 = tmp_244_0_1_fu_22724_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_0_2_fu_22994_p4() {
    tmp_245_0_2_fu_22994_p4 = tmp_244_0_2_fu_22988_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_0_3_fu_23258_p4() {
    tmp_245_0_3_fu_23258_p4 = tmp_244_0_3_fu_23252_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_1_fu_23786_p4() {
    tmp_245_1_1_fu_23786_p4 = tmp_244_1_1_fu_23780_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_2_fu_24050_p4() {
    tmp_245_1_2_fu_24050_p4 = tmp_244_1_2_fu_24044_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_3_fu_24314_p4() {
    tmp_245_1_3_fu_24314_p4 = tmp_244_1_3_fu_24308_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_245_1_fu_23522_p4() {
    tmp_245_1_fu_23522_p4 = tmp_244_1_fu_23516_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_246_0_1_fu_22740_p3() {
    tmp_246_0_1_fu_22740_p3 = esl_concat<25,7>(tmp_211_fu_22708_p4.read(), tmp_245_0_1_fu_22730_p4.read());
}

void particle_filter::thread_tmp_246_0_2_fu_23004_p3() {
    tmp_246_0_2_fu_23004_p3 = esl_concat<25,7>(tmp_241_fu_22972_p4.read(), tmp_245_0_2_fu_22994_p4.read());
}

void particle_filter::thread_tmp_246_0_3_fu_23268_p3() {
    tmp_246_0_3_fu_23268_p3 = esl_concat<25,7>(tmp_271_fu_23236_p4.read(), tmp_245_0_3_fu_23258_p4.read());
}

void particle_filter::thread_tmp_246_1_1_fu_23796_p3() {
    tmp_246_1_1_fu_23796_p3 = esl_concat<25,7>(tmp_435_fu_23764_p4.read(), tmp_245_1_1_fu_23786_p4.read());
}

void particle_filter::thread_tmp_246_1_2_fu_24060_p3() {
    tmp_246_1_2_fu_24060_p3 = esl_concat<25,7>(tmp_441_fu_24028_p4.read(), tmp_245_1_2_fu_24050_p4.read());
}

void particle_filter::thread_tmp_246_1_3_fu_24324_p3() {
    tmp_246_1_3_fu_24324_p3 = esl_concat<25,7>(tmp_448_fu_24292_p4.read(), tmp_245_1_3_fu_24314_p4.read());
}

void particle_filter::thread_tmp_246_1_fu_23532_p3() {
    tmp_246_1_fu_23532_p3 = esl_concat<25,7>(tmp_429_fu_23500_p4.read(), tmp_245_1_fu_23522_p4.read());
}

void particle_filter::thread_tmp_246_fu_27194_p1() {
    tmp_246_fu_27194_p1 = esl_zext<12,11>(exp_tmp_V_1_fu_27185_p4.read());
}

void particle_filter::thread_tmp_247_fu_23012_p4() {
    tmp_247_fu_23012_p4 = rng_state_s51_fu_1252.read().range(14, 4);
}

void particle_filter::thread_tmp_248_fu_27158_p2() {
    tmp_248_fu_27158_p2 = (!tmp_401_fu_27154_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_401_fu_27154_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_249_fu_23022_p2() {
    tmp_249_fu_23022_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s51_fu_1252.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_24_fu_21513_p2() {
    tmp_24_fu_21513_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_12_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_12_offset_read.read()));
}

void particle_filter::thread_tmp_250_0_1_fu_22764_p2() {
    tmp_250_0_1_fu_22764_p2 = (rng_state_s49_fu_1260.read() ^ tmp_218_fu_22758_p2.read());
}

void particle_filter::thread_tmp_250_0_2_fu_23028_p2() {
    tmp_250_0_2_fu_23028_p2 = (rng_state_s51_fu_1252.read() ^ tmp_249_fu_23022_p2.read());
}

void particle_filter::thread_tmp_250_0_3_fu_23292_p2() {
    tmp_250_0_3_fu_23292_p2 = (rng_state_s53_fu_1244.read() ^ tmp_281_fu_23286_p2.read());
}

void particle_filter::thread_tmp_250_1_1_fu_23820_p2() {
    tmp_250_1_1_fu_23820_p2 = (rng_state_s57_fu_1228.read() ^ tmp_561_fu_23814_p2.read());
}

void particle_filter::thread_tmp_250_1_2_fu_24084_p2() {
    tmp_250_1_2_fu_24084_p2 = (rng_state_s59_fu_1220.read() ^ tmp_567_fu_24078_p2.read());
}

void particle_filter::thread_tmp_250_1_3_fu_24348_p2() {
    tmp_250_1_3_fu_24348_p2 = (rng_state_s61_fu_1212.read() ^ tmp_573_fu_24342_p2.read());
}

void particle_filter::thread_tmp_250_1_fu_23556_p2() {
    tmp_250_1_fu_23556_p2 = (rng_state_s55_fu_1236.read() ^ tmp_555_fu_23550_p2.read());
}

void particle_filter::thread_tmp_250_fu_23064_p4() {
    tmp_250_fu_23064_p4 = rng_state_s12_fu_1408.read().range(19, 1);
}

void particle_filter::thread_tmp_251_0_1_fu_22770_p4() {
    tmp_251_0_1_fu_22770_p4 = tmp_250_0_1_fu_22764_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_0_2_fu_23034_p4() {
    tmp_251_0_2_fu_23034_p4 = tmp_250_0_2_fu_23028_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_0_3_fu_23298_p4() {
    tmp_251_0_3_fu_23298_p4 = tmp_250_0_3_fu_23292_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_1_fu_23826_p4() {
    tmp_251_1_1_fu_23826_p4 = tmp_250_1_1_fu_23820_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_2_fu_24090_p4() {
    tmp_251_1_2_fu_24090_p4 = tmp_250_1_2_fu_24084_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_3_fu_24354_p4() {
    tmp_251_1_3_fu_24354_p4 = tmp_250_1_3_fu_24348_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_1_fu_23562_p4() {
    tmp_251_1_fu_23562_p4 = tmp_250_1_fu_23556_p2.read().range(31, 11);
}

void particle_filter::thread_tmp_251_fu_27231_p2() {
    tmp_251_fu_27231_p2 = (!F2_1_fu_27219_p2.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_fu_27219_p2.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_252_0_1_fu_22780_p3() {
    tmp_252_0_1_fu_22780_p3 = esl_concat<11,21>(tmp_217_fu_22748_p4.read(), tmp_251_0_1_fu_22770_p4.read());
}

void particle_filter::thread_tmp_252_0_2_fu_23044_p3() {
    tmp_252_0_2_fu_23044_p3 = esl_concat<11,21>(tmp_247_fu_23012_p4.read(), tmp_251_0_2_fu_23034_p4.read());
}

void particle_filter::thread_tmp_252_0_3_fu_23308_p3() {
    tmp_252_0_3_fu_23308_p3 = esl_concat<11,21>(tmp_278_fu_23276_p4.read(), tmp_251_0_3_fu_23298_p4.read());
}

void particle_filter::thread_tmp_252_1_1_fu_23836_p3() {
    tmp_252_1_1_fu_23836_p3 = esl_concat<11,21>(tmp_436_fu_23804_p4.read(), tmp_251_1_1_fu_23826_p4.read());
}

void particle_filter::thread_tmp_252_1_2_fu_24100_p3() {
    tmp_252_1_2_fu_24100_p3 = esl_concat<11,21>(tmp_442_fu_24068_p4.read(), tmp_251_1_2_fu_24090_p4.read());
}

void particle_filter::thread_tmp_252_1_3_fu_24364_p3() {
    tmp_252_1_3_fu_24364_p3 = esl_concat<11,21>(tmp_450_fu_24332_p4.read(), tmp_251_1_3_fu_24354_p4.read());
}

void particle_filter::thread_tmp_252_1_fu_23572_p3() {
    tmp_252_1_fu_23572_p3 = esl_concat<11,21>(tmp_430_fu_23540_p4.read(), tmp_251_1_fu_23562_p4.read());
}

void particle_filter::thread_tmp_252_fu_27237_p2() {
    tmp_252_fu_27237_p2 = (!ap_const_lv12_C.is_01() || !F2_1_fu_27219_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_1_fu_27219_p2.read()));
}

void particle_filter::thread_tmp_253_fu_27300_p2() {
    tmp_253_fu_27300_p2 = (!F2_1_reg_34806.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(F2_1_reg_34806.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_254_fu_23074_p2() {
    tmp_254_fu_23074_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s12_fu_1408.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_255_fu_27309_p2() {
    tmp_255_fu_27309_p2 = (!sh_amt_1_reg_34822.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_34822.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_256_fu_23104_p4() {
    tmp_256_fu_23104_p4 = rng_state_s32_fu_1328.read().range(27, 3);
}

void particle_filter::thread_tmp_257_fu_27314_p2() {
    tmp_257_fu_27314_p2 = (!sh_amt_1_reg_34822.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_1_reg_34822.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_259_fu_28386_p1() {
    tmp_259_fu_28386_p1 = esl_zext<12,11>(p_Result_4_fu_28376_p4.read());
}

void particle_filter::thread_tmp_25_fu_21517_p2() {
    tmp_25_fu_21517_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_11_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_11_offset_read.read()));
}

void particle_filter::thread_tmp_260_fu_23114_p2() {
    tmp_260_fu_23114_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s32_fu_1328.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_261_fu_28394_p2() {
    tmp_261_fu_28394_p2 = (!tmp_451_fu_28364_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_451_fu_28364_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_262_fu_23144_p4() {
    tmp_262_fu_23144_p4 = rng_state_s52_fu_1248.read().range(14, 4);
}

void particle_filter::thread_tmp_263_cast_fu_30555_p1() {
    tmp_263_cast_fu_30555_p1 = esl_zext<32,14>(tmp_263_fu_30548_p3.read());
}

void particle_filter::thread_tmp_263_fu_30548_p3() {
    tmp_263_fu_30548_p3 = esl_concat<1,13>(tmp_501_reg_36072.read(), ap_const_lv13_0);
}

void particle_filter::thread_tmp_264_fu_27319_p0() {
    tmp_264_fu_27319_p0 = esl_sext<32,12>(sh_amt_1_reg_34822.read());
}

void particle_filter::thread_tmp_264_fu_27319_p1() {
    tmp_264_fu_27319_p1 = esl_zext<54,32>(tmp_264_fu_27319_p0.read());
}

void particle_filter::thread_tmp_265_fu_27323_p2() {
    tmp_265_fu_27323_p2 = (!man_V_6_fu_27291_p3.read().is_01() || !tmp_264_fu_27319_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_6_fu_27291_p3.read()) >> (unsigned short)tmp_264_fu_27319_p1.read().to_uint();
}

void particle_filter::thread_tmp_266_fu_23154_p2() {
    tmp_266_fu_23154_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s52_fu_1248.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_268_fu_27534_p0() {
    tmp_268_fu_27534_p0 = esl_sext<32,28>(tmp_405_reg_34869.read());
}

void particle_filter::thread_tmp_268_fu_27534_p2() {
    tmp_268_fu_27534_p2 = (!sh_amt_1_cast_reg_34858.read().is_01())? sc_lv<32>(): tmp_268_fu_27534_p0.read() << (unsigned short)sh_amt_1_cast_reg_34858.read().to_uint();
}

void particle_filter::thread_tmp_269_fu_23196_p4() {
    tmp_269_fu_23196_p4 = rng_state_s13_fu_1404.read().range(19, 1);
}

void particle_filter::thread_tmp_26_fu_21521_p2() {
    tmp_26_fu_21521_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_10_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_10_offset_read.read()));
}

void particle_filter::thread_tmp_270_fu_23206_p2() {
    tmp_270_fu_23206_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s13_fu_1404.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_271_fu_23236_p4() {
    tmp_271_fu_23236_p4 = rng_state_s33_fu_1324.read().range(27, 3);
}

void particle_filter::thread_tmp_272_fu_28486_p2() {
    tmp_272_fu_28486_p2 = (!F2_2_reg_35292.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35292.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_273_fu_23246_p2() {
    tmp_273_fu_23246_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s33_fu_1324.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_274_fu_28491_p2() {
    tmp_274_fu_28491_p2 = (!ap_const_lv12_C.is_01() || !F2_2_reg_35292.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_2_reg_35292.read()));
}

void particle_filter::thread_tmp_275_fu_28775_p2() {
    tmp_275_fu_28775_p2 = (!ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_276_fu_27251_p2() {
    tmp_276_fu_27251_p2 = (!tmp_251_fu_27231_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_251_fu_27231_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_277_fu_30562_p2() {
    tmp_277_fu_30562_p2 = (!i10_cast_fu_30559_p1.read().is_01() || !tmp_263_cast_fu_30555_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(i10_cast_fu_30559_p1.read()) + sc_biguint<32>(tmp_263_cast_fu_30555_p1.read()));
}

void particle_filter::thread_tmp_278_fu_23276_p4() {
    tmp_278_fu_23276_p4 = rng_state_s53_fu_1244.read().range(14, 4);
}

void particle_filter::thread_tmp_279_fu_31011_p2() {
    tmp_279_fu_31011_p2 = (!index_reg_36267.read().is_01() || !tmp_497_fu_31006_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(index_reg_36267.read()) + sc_biguint<32>(tmp_497_fu_31006_p2.read()));
}

void particle_filter::thread_tmp_27_fu_21525_p2() {
    tmp_27_fu_21525_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_9_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_9_offset_read.read()));
}

void particle_filter::thread_tmp_280_fu_27333_p2() {
    tmp_280_fu_27333_p2 = (!F2_1_reg_34806.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_reg_34806.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_281_fu_23286_p2() {
    tmp_281_fu_23286_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s53_fu_1244.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_283_fu_28780_p2() {
    tmp_283_fu_28780_p2 = (!sh_amt_2_reg_35362.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_35362.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_285_fu_28785_p2() {
    tmp_285_fu_28785_p2 = (!sh_amt_2_reg_35362.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_reg_35362.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_286_fu_27357_p2() {
    tmp_286_fu_27357_p2 = (!F2_1_reg_34806.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(F2_1_reg_34806.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_287_fu_28790_p0() {
    tmp_287_fu_28790_p0 = sh_amt_2_cast_fu_28772_p1.read();
}

void particle_filter::thread_tmp_287_fu_28790_p1() {
    tmp_287_fu_28790_p1 = esl_zext<54,32>(tmp_287_fu_28790_p0.read());
}

void particle_filter::thread_tmp_288_fu_28794_p2() {
    tmp_288_fu_28794_p2 = (!man_V_s_reg_35349.read().is_01() || !tmp_287_fu_28790_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_s_reg_35349.read()) >> (unsigned short)tmp_287_fu_28790_p1.read().to_uint();
}

void particle_filter::thread_tmp_289_fu_30624_p2() {
    tmp_289_fu_30624_p2 = (!index_replicated_fu_30618_p2.read().is_01() || !tmp_85_reg_32608.read().is_01())? sc_lv<1>(): (sc_biguint<32>(index_replicated_fu_30618_p2.read()) > sc_biguint<32>(tmp_85_reg_32608.read()));
}

void particle_filter::thread_tmp_28_fu_21529_p2() {
    tmp_28_fu_21529_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_8_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_8_offset_read.read()));
}

void particle_filter::thread_tmp_290_fu_25998_p2() {
    tmp_290_fu_25998_p2 = (!ap_const_lv32_C.is_01())? sc_lv<32>(): rng_state_s22_reg_2336.read() << (unsigned short)ap_const_lv32_C.to_uint();
}

void particle_filter::thread_tmp_291_fu_27257_p2() {
    tmp_291_fu_27257_p2 = (!F2_1_fu_27219_p2.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_1_fu_27219_p2.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_292_fu_27267_p2() {
    tmp_292_fu_27267_p2 = (!tmp_291_fu_27257_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_291_fu_27257_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_293_fu_27362_p3() {
    tmp_293_fu_27362_p3 = (!tmp_292_reg_34839.read()[0].is_01())? sc_lv<11>(): ((tmp_292_reg_34839.read()[0].to_bool())? ap_const_lv11_35: tmp_409_reg_34834.read());
}

void particle_filter::thread_tmp_294_fu_27382_p2() {
    tmp_294_fu_27382_p2 = (!p_Result_6_fu_27372_p4.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_6_fu_27372_p4.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_295_fu_27566_p1() {
    tmp_295_fu_27566_p1 = esl_zext<28,1>(qb_assign_3_fu_27561_p2.read());
}

void particle_filter::thread_tmp_296_fu_26004_p4() {
    tmp_296_fu_26004_p4 = rng_state_s22_reg_2336.read().range(19, 1);
}

void particle_filter::thread_tmp_297_fu_26014_p2() {
    tmp_297_fu_26014_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s22_reg_2336.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_298_fu_26044_p2() {
    tmp_298_fu_26044_p2 = (!ap_const_lv32_4.is_01())? sc_lv<32>(): rng_state_s42_reg_2346.read() << (unsigned short)ap_const_lv32_4.to_uint();
}

void particle_filter::thread_tmp_299_fu_27412_p2() {
    tmp_299_fu_27412_p2 = (!tmp454_cast_cast_fu_27405_p3.read().is_01() || !exp_V_1_fu_27286_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp454_cast_cast_fu_27405_p3.read()) + sc_biguint<12>(exp_V_1_fu_27286_p2.read()));
}

void particle_filter::thread_tmp_300_fu_26050_p4() {
    tmp_300_fu_26050_p4 = rng_state_s42_reg_2346.read().range(27, 3);
}

void particle_filter::thread_tmp_301_fu_27452_p2() {
    tmp_301_fu_27452_p2 = (!pos1_1_fu_27434_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_1_fu_27434_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_302_fu_26060_p2() {
    tmp_302_fu_26060_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s42_reg_2346.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_303_fu_27466_p0() {
    tmp_303_fu_27466_p0 = esl_sext<32,12>(pos1_1_fu_27434_p2.read());
}

void particle_filter::thread_tmp_303_fu_27466_p1() {
    tmp_303_fu_27466_p1 = esl_zext<54,32>(tmp_303_fu_27466_p0.read());
}

void particle_filter::thread_tmp_304_fu_27470_p2() {
    tmp_304_fu_27470_p2 = (!man_V_6_fu_27291_p3.read().is_01() || !tmp_303_fu_27466_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_6_fu_27291_p3.read()) >> (unsigned short)tmp_303_fu_27466_p1.read().to_uint();
}

void particle_filter::thread_tmp_305_fu_26090_p4() {
    tmp_305_fu_26090_p4 = rng_state_s62_reg_2356.read().range(14, 4);
}

void particle_filter::thread_tmp_306_fu_26100_p2() {
    tmp_306_fu_26100_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s62_reg_2356.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_307_fu_27488_p2() {
    tmp_307_fu_27488_p2 = (!pos2_1_fu_27443_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_1_fu_27443_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_307_not_fu_27666_p2() {
    tmp_307_not_fu_27666_p2 = (tmp_307_reg_34932.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_308_fu_27494_p0() {
    tmp_308_fu_27494_p0 = esl_sext<32,12>(pos2_1_fu_27443_p2.read());
}

void particle_filter::thread_tmp_308_fu_27494_p1() {
    tmp_308_fu_27494_p1 = esl_zext<54,32>(tmp_308_fu_27494_p0.read());
}

void particle_filter::thread_tmp_309_fu_27661_p2() {
    tmp_309_fu_27661_p2 = (!Range2_V_3_reg_34944.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_3_reg_34944.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_30_fu_21533_p2() {
    tmp_30_fu_21533_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_7_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_7_offset_read.read()));
}

void particle_filter::thread_tmp_310_fu_26142_p4() {
    tmp_310_fu_26142_p4 = tmp_125_fu_26020_p2.read().range(31, 20);
}

void particle_filter::thread_tmp_311_fu_27504_p2() {
    tmp_311_fu_27504_p2 = (!pos2_1_fu_27443_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_1_fu_27443_p2.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_312_fu_26152_p4() {
    tmp_312_fu_26152_p4 = rng_state_s22_reg_2336.read().range(7, 1);
}

void particle_filter::thread_tmp_313_fu_26162_p4() {
    tmp_313_fu_26162_p4 = rng_state_s22_reg_2336.read().range(6, 1);
}

void particle_filter::thread_tmp_314_fu_27830_p2() {
    tmp_314_fu_27830_p2 = (Range1_all_ones_2_i_149_reg_35058.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_315_fu_27882_p2() {
    tmp_315_fu_27882_p2 = (ap_reg_ppstg_isneg_1_reg_34849_pp3_it1.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_317_fu_27176_p1() {
    tmp_317_fu_27176_p1 = esl_sext<29,28>(rn_resampling_fixed_V_reg_34730.read());
}

void particle_filter::thread_tmp_318_fu_26208_p4() {
    tmp_318_fu_26208_p4 = tmp_131_fu_26066_p2.read().range(31, 28);
}

void particle_filter::thread_tmp_319_fu_28001_p2() {
    tmp_319_fu_28001_p2 = (newsignbit_2_reg_35113.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_320_fu_28057_p2() {
    tmp_320_fu_28057_p2 = (!p_Val2_6_reg_35120.read().is_01() || !ap_const_lv28_0.is_01())? sc_lv<1>(): (sc_bigint<28>(p_Val2_6_reg_35120.read()) > sc_bigint<28>(ap_const_lv28_0));
}

void particle_filter::thread_tmp_321_fu_28069_p1() {
    tmp_321_fu_28069_p1 = esl_zext<29,28>(p_Val2_10_fu_28062_p3.read());
}

void particle_filter::thread_tmp_322_fu_28079_p1() {
    tmp_322_fu_28079_p1 = esl_zext<30,29>(p_Val2_11_fu_28073_p2.read());
}

void particle_filter::thread_tmp_323_fu_28083_p1() {
    tmp_323_fu_28083_p1 = esl_zext<30,28>(p_Val2_6_reg_35120.read());
}

void particle_filter::thread_tmp_324_fu_26218_p4() {
    tmp_324_fu_26218_p4 = rng_state_s42_reg_2346.read().range(23, 3);
}

void particle_filter::thread_tmp_326_fu_28161_p2() {
    tmp_326_fu_28161_p2 = (isneg_3_reg_35139.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_327_fu_26228_p2() {
    tmp_327_fu_26228_p2 = (!ap_const_lv32_6.is_01())? sc_lv<32>(): rng_state_s42_reg_2346.read() << (unsigned short)ap_const_lv32_6.to_uint();
}

void particle_filter::thread_tmp_328_fu_28193_p2() {
    tmp_328_fu_28193_p2 = (newsignbit_4_reg_35176.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_32_fu_21537_p2() {
    tmp_32_fu_21537_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_6_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_6_offset_read.read()));
}

void particle_filter::thread_tmp_331_fu_26260_p4() {
    tmp_331_fu_26260_p4 = tmp_137_fu_26106_p2.read().range(25, 15);
}

void particle_filter::thread_tmp_332_fu_26270_p4() {
    tmp_332_fu_26270_p4 = rng_state_s62_reg_2356.read().range(11, 4);
}

void particle_filter::thread_tmp_334_fu_28813_p0() {
    tmp_334_fu_28813_p0 = esl_sext<32,28>(tmp_457_reg_35369.read());
}

void particle_filter::thread_tmp_334_fu_28813_p1() {
    tmp_334_fu_28813_p1 = sh_amt_2_cast_fu_28772_p1.read();
}

void particle_filter::thread_tmp_334_fu_28813_p2() {
    tmp_334_fu_28813_p2 = (!tmp_334_fu_28813_p1.read().is_01())? sc_lv<32>(): tmp_334_fu_28813_p0.read() << (unsigned short)tmp_334_fu_28813_p1.read().to_uint();
}

void particle_filter::thread_tmp_335_fu_26330_p1() {
    tmp_335_fu_26330_p1 = ireg_V_fu_26326_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_337_fu_28508_p2() {
    tmp_337_fu_28508_p2 = (!tmp_272_fu_28486_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_272_fu_28486_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_338_fu_28514_p2() {
    tmp_338_fu_28514_p2 = (!F2_2_reg_35292.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35292.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_33_fu_21541_p2() {
    tmp_33_fu_21541_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_5_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_5_offset_read.read()));
}

void particle_filter::thread_tmp_343_fu_28831_p2() {
    tmp_343_fu_28831_p2 = (!ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_reg_35292_pp4_it25.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_344_fu_28538_p2() {
    tmp_344_fu_28538_p2 = (!F2_2_reg_35292.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_reg_35292.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_345_fu_28547_p2() {
    tmp_345_fu_28547_p2 = (!tmp_344_fu_28538_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_344_fu_28538_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_346_fu_28553_p3() {
    tmp_346_fu_28553_p3 = (!tmp_345_fu_28547_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_345_fu_28547_p2.read()[0].to_bool())? ap_const_lv11_35: tmp_465_fu_28543_p1.read());
}

void particle_filter::thread_tmp_347_fu_28836_p2() {
    tmp_347_fu_28836_p2 = (!p_Result_7_reg_35380.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_7_reg_35380.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_348_fu_29256_p1() {
    tmp_348_fu_29256_p1 = esl_zext<28,1>(qb_assign_5_fu_29252_p2.read());
}

void particle_filter::thread_tmp_349_fu_28583_p2() {
    tmp_349_fu_28583_p2 = (!tmp461_cast_cast_fu_28575_p3.read().is_01() || !exp_V_2_fu_28452_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp461_cast_cast_fu_28575_p3.read()) + sc_biguint<12>(exp_V_2_fu_28452_p2.read()));
}

void particle_filter::thread_tmp_34_fu_21545_p2() {
    tmp_34_fu_21545_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_4_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_4_offset_read.read()));
}

void particle_filter::thread_tmp_351_0_4_fu_25539_p1() {
    tmp_351_0_4_fu_25539_p1 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33538.read());
}

void particle_filter::thread_tmp_351_0_5_fu_25555_p1() {
    tmp_351_0_5_fu_25555_p1 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33564.read());
}

void particle_filter::thread_tmp_351_0_s_fu_25523_p1() {
    tmp_351_0_s_fu_25523_p1 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33512.read());
}

void particle_filter::thread_tmp_351_1_4_fu_25603_p1() {
    tmp_351_1_4_fu_25603_p1 = esl_zext<32,9>(n_minus_x_V_0_2_reg_33538.read());
}

void particle_filter::thread_tmp_351_1_5_fu_25619_p1() {
    tmp_351_1_5_fu_25619_p1 = esl_zext<32,9>(n_minus_x_V_0_3_reg_33564.read());
}

void particle_filter::thread_tmp_351_1_s_fu_25587_p1() {
    tmp_351_1_s_fu_25587_p1 = esl_zext<32,9>(n_minus_x_V_0_1_reg_33512.read());
}

void particle_filter::thread_tmp_351_s_fu_25571_p1() {
    tmp_351_s_fu_25571_p1 = esl_zext<32,9>(n_minus_x_V_reg_33486.read());
}

void particle_filter::thread_tmp_354_fu_30661_p2() {
    tmp_354_fu_30661_p2 = (!tmp_529_fu_30648_p2.read().is_01() || !p_3_fu_30642_p3.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_529_fu_30648_p2.read()) + sc_biguint<32>(p_3_fu_30642_p3.read()));
}

void particle_filter::thread_tmp_356_fu_28906_p2() {
    tmp_356_fu_28906_p2 = (!pos1_2_fu_28894_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_2_fu_28894_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_357_fu_26356_p1() {
    tmp_357_fu_26356_p1 = ireg_V_fu_26326_p1.read().range(52-1, 0);
}

void particle_filter::thread_tmp_358_fu_28926_p0() {
    tmp_358_fu_28926_p0 = esl_sext<32,12>(pos1_2_fu_28894_p2.read());
}

void particle_filter::thread_tmp_358_fu_28926_p1() {
    tmp_358_fu_28926_p1 = esl_zext<54,32>(tmp_358_fu_28926_p0.read());
}

void particle_filter::thread_tmp_359_0_4_fu_25535_p1() {
    tmp_359_0_4_fu_25535_p1 = esl_zext<32,9>(n_V_0_2_reg_33520.read());
}

void particle_filter::thread_tmp_359_0_5_fu_25551_p1() {
    tmp_359_0_5_fu_25551_p1 = esl_zext<32,9>(n_V_0_3_reg_33546.read());
}

void particle_filter::thread_tmp_359_0_s_fu_25519_p1() {
    tmp_359_0_s_fu_25519_p1 = esl_zext<32,9>(n_V_0_1_reg_33494.read());
}

void particle_filter::thread_tmp_359_1_4_fu_25599_p1() {
    tmp_359_1_4_fu_25599_p1 = esl_zext<32,9>(n_V_0_2_reg_33520.read());
}

void particle_filter::thread_tmp_359_1_5_fu_25615_p1() {
    tmp_359_1_5_fu_25615_p1 = esl_zext<32,9>(n_V_0_3_reg_33546.read());
}

void particle_filter::thread_tmp_359_1_s_fu_25583_p1() {
    tmp_359_1_s_fu_25583_p1 = esl_zext<32,9>(n_V_0_1_reg_33494.read());
}

void particle_filter::thread_tmp_359_s_fu_25567_p1() {
    tmp_359_s_fu_25567_p1 = esl_zext<32,9>(n_V_reg_33468.read());
}

void particle_filter::thread_tmp_361_fu_28930_p2() {
    tmp_361_fu_28930_p2 = (!man_V_s_reg_35349.read().is_01() || !tmp_358_fu_28926_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_s_reg_35349.read()) >> (unsigned short)tmp_358_fu_28926_p1.read().to_uint();
}

void particle_filter::thread_tmp_362_fu_26424_p1() {
    tmp_362_fu_26424_p1 = man_V_fu_26394_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_363_fu_28944_p2() {
    tmp_363_fu_28944_p2 = (!pos2_2_reg_35390.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_2_reg_35390.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_363_not_fu_28986_p2() {
    tmp_363_not_fu_28986_p2 = (tmp_363_fu_28944_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_364_fu_28949_p0() {
    tmp_364_fu_28949_p0 = esl_sext<32,12>(pos2_2_reg_35390.read());
}

void particle_filter::thread_tmp_364_fu_28949_p1() {
    tmp_364_fu_28949_p1 = esl_zext<54,32>(tmp_364_fu_28949_p0.read());
}

void particle_filter::thread_tmp_365_fu_28970_p2() {
    tmp_365_fu_28970_p2 = (!Range2_V_5_fu_28953_p2.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_5_fu_28953_p2.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_366_fu_29328_p2() {
    tmp_366_fu_29328_p2 = (Range1_all_ones_s_fu_29303_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_367_fu_28976_p2() {
    tmp_367_fu_28976_p2 = (!pos2_2_reg_35390.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_2_reg_35390.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_368_fu_26559_p1() {
    tmp_368_fu_26559_p1 = tmp_210_fu_26554_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_369_fu_29706_p2() {
    tmp_369_fu_29706_p2 = (Range1_all_ones_2_i2_156_reg_35793.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_36_fu_21549_p2() {
    tmp_36_fu_21549_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_3_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_3_offset_read.read()));
}

void particle_filter::thread_tmp_370_fu_29736_p2() {
    tmp_370_fu_29736_p2 = (ap_reg_ppstg_tmp_453_reg_35263_pp4_it28.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_373_fu_30009_p2() {
    tmp_373_fu_30009_p2 = (tmp_484_fu_30001_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_374_cast_fu_30125_p1() {
    tmp_374_cast_fu_30125_p1 = esl_zext<13,12>(tmp_485_fu_30121_p1.read());
}

void particle_filter::thread_tmp_374_fu_26579_p1() {
    tmp_374_fu_26579_p1 = tmp_213_fu_26573_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_375_fu_30139_p2() {
    tmp_375_fu_30139_p2 = (!p_Val2_16_fu_30114_p3.read().is_01() || !ap_const_lv28_0.is_01())? sc_lv<1>(): (sc_bigint<28>(p_Val2_16_fu_30114_p3.read()) > sc_bigint<28>(ap_const_lv28_0));
}

void particle_filter::thread_tmp_376_fu_30215_p1() {
    tmp_376_fu_30215_p1 = esl_zext<29,28>(p_Val2_23_fu_30208_p3.read());
}

void particle_filter::thread_tmp_378_fu_30245_p2() {
    tmp_378_fu_30245_p2 = (tmp_488_fu_30237_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_379_fu_30395_p2() {
    tmp_379_fu_30395_p2 = (!tmp_490_fu_30391_p1.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_490_fu_30391_p1.read() == ap_const_lv12_0);
}

void particle_filter::thread_tmp_37_fu_26377_p3() {
    tmp_37_fu_26377_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_357_reg_34438.read());
}

void particle_filter::thread_tmp_37_i_fu_30773_p2() {
    tmp_37_i_fu_30773_p2 = (!loc_V_25_reg_36186.read().is_01() || !ap_const_lv8_96.is_01())? sc_lv<1>(): (sc_biguint<8>(loc_V_25_reg_36186.read()) > sc_biguint<8>(ap_const_lv8_96));
}

void particle_filter::thread_tmp_386_0_4_fu_25527_p1() {
    tmp_386_0_4_fu_25527_p1 = esl_zext<32,9>(x_V_0_2_reg_33528.read());
}

void particle_filter::thread_tmp_386_0_5_fu_25543_p1() {
    tmp_386_0_5_fu_25543_p1 = esl_zext<32,9>(x_V_0_3_reg_33554.read());
}

void particle_filter::thread_tmp_386_0_s_fu_25511_p1() {
    tmp_386_0_s_fu_25511_p1 = esl_zext<32,9>(x_V_0_1_reg_33502.read());
}

void particle_filter::thread_tmp_386_1_4_fu_25591_p1() {
    tmp_386_1_4_fu_25591_p1 = esl_zext<32,9>(x_V_0_2_reg_33528.read());
}

void particle_filter::thread_tmp_386_1_5_fu_25607_p1() {
    tmp_386_1_5_fu_25607_p1 = esl_zext<32,9>(x_V_0_3_reg_33554.read());
}

void particle_filter::thread_tmp_386_1_s_fu_25575_p1() {
    tmp_386_1_s_fu_25575_p1 = esl_zext<32,9>(x_V_0_1_reg_33502.read());
}

void particle_filter::thread_tmp_386_s_fu_25559_p1() {
    tmp_386_s_fu_25559_p1 = esl_zext<32,9>(x_V_reg_33476.read());
}

void particle_filter::thread_tmp_38_fu_21553_p2() {
    tmp_38_fu_21553_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_2_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_2_offset_read.read()));
}

void particle_filter::thread_tmp_391_fu_26443_p2() {
    tmp_391_fu_26443_p2 = esl_sext<32,12>(tmp_216_fu_26434_p2.read());
}

void particle_filter::thread_tmp_391_fu_26443_p3() {
    tmp_391_fu_26443_p3 = (!tmp_391_fu_26443_p2.read().is_01() || sc_biguint<32>(tmp_391_fu_26443_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_fu_26394_p3.read().range(sc_biguint<32>(tmp_391_fu_26443_p2.read()).to_uint(), sc_biguint<32>(tmp_391_fu_26443_p2.read()).to_uint());
}

void particle_filter::thread_tmp_392_fu_26463_p1() {
    tmp_392_fu_26463_p1 = tmp_220_fu_26458_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_394_fu_26785_p3() {
    tmp_394_fu_26785_p3 = p_Val2_18_fu_26780_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_397_0_3_phi_fu_19224_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_0_3_reg_33448_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_0_3_reg_33698_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_0_3_reg_33702_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_0_3_reg_33706_pp1_it135.read()))) {
        tmp_397_0_3_phi_fu_19224_p10 = tmp_394_0_3_reg_34108.read();
    } else {
        tmp_397_0_3_phi_fu_19224_p10 = ap_reg_phiprechg_tmp_397_0_3_reg_19221pp1_it136.read();
    }
}

void particle_filter::thread_tmp_397_1_3_phi_fu_19288_p10() {
    if ((esl_seteq<1,8,8>(ap_ST_pp1_stg0_fsm_20, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp1_it136.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond4_reg_32832_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_333_1_3_reg_33464_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_341_1_3_reg_33866_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_349_1_3_reg_33870_pp1_it135.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_tmp_355_1_3_reg_33874_pp1_it135.read()))) {
        tmp_397_1_3_phi_fu_19288_p10 = tmp_394_1_3_reg_34168.read();
    } else {
        tmp_397_1_3_phi_fu_19288_p10 = ap_reg_phiprechg_tmp_397_1_3_reg_19285pp1_it136.read();
    }
}

void particle_filter::thread_tmp_397_fu_26672_p3() {
    tmp_397_fu_26672_p3 = pos1_fu_26654_p2.read().range(11, 11);
}

void particle_filter::thread_tmp_39_fu_21557_p2() {
    tmp_39_fu_21557_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_1_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_1_offset_read.read()));
}

void particle_filter::thread_tmp_401_fu_27154_p1() {
    tmp_401_fu_27154_p1 = ireg_V_1_fu_27150_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_402_fu_25943_p1() {
    tmp_402_fu_25943_p1 = i6_reg_19348.read().range(1-1, 0);
}

void particle_filter::thread_tmp_403_fu_25507_p1() {
    tmp_403_fu_25507_p1 = esl_zext<32,9>(n_minus_x_V_reg_33486.read());
}

void particle_filter::thread_tmp_404_fu_27198_p1() {
    tmp_404_fu_27198_p1 = ireg_V_1_reg_34757.read().range(52-1, 0);
}

void particle_filter::thread_tmp_405_fu_27305_p1() {
    tmp_405_fu_27305_p1 = man_V_6_fu_27291_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_406_fu_27329_p1() {
    tmp_406_fu_27329_p1 = tmp_265_fu_27323_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_407_fu_27539_p1() {
    tmp_407_fu_27539_p1 = tmp_268_fu_27534_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_408_fu_27342_p2() {
    tmp_408_fu_27342_p2 = esl_sext<32,12>(tmp_280_fu_27333_p2.read());
}

void particle_filter::thread_tmp_408_fu_27342_p3() {
    tmp_408_fu_27342_p3 = (!tmp_408_fu_27342_p2.read().is_01() || sc_biguint<32>(tmp_408_fu_27342_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_6_fu_27291_p3.read().range(sc_biguint<32>(tmp_408_fu_27342_p2.read()).to_uint(), sc_biguint<32>(tmp_408_fu_27342_p2.read()).to_uint());
}

void particle_filter::thread_tmp_409_fu_27263_p1() {
    tmp_409_fu_27263_p1 = tmp_291_fu_27257_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_40_fu_21561_p2() {
    tmp_40_fu_21561_p2 = (!tmp_16_reg_32576.read().is_01() || !rng_state_0_offset_read.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_16_reg_32576.read()) + sc_biguint<32>(rng_state_0_offset_read.read()));
}

void particle_filter::thread_tmp_40_i_fu_30732_p1() {
    tmp_40_i_fu_30732_p1 = esl_zext<64,5>(index_V_fu_30722_p4.read());
}

void particle_filter::thread_tmp_410_fu_27549_p3() {
    tmp_410_fu_27549_p3 = p_Val2_20_fu_27543_p3.read().range(27, 27);
}

void particle_filter::thread_tmp_412_fu_27418_p4() {
    tmp_412_fu_27418_p4 = tmp_299_fu_27412_p2.read().range(11, 4);
}

void particle_filter::thread_tmp_413_fu_25503_p1() {
    tmp_413_fu_25503_p1 = esl_zext<32,9>(n_V_reg_33468.read());
}

void particle_filter::thread_tmp_415_fu_25495_p1() {
    tmp_415_fu_25495_p1 = esl_zext<32,9>(x_V_reg_33476.read());
}

void particle_filter::thread_tmp_416_fu_25499_p1() {
    tmp_416_fu_25499_p1 = esl_zext<32,9>(n_minus_x_V_reg_33486.read());
}

void particle_filter::thread_tmp_417_fu_21942_p4() {
    tmp_417_fu_21942_p4 = rng_state_s4_fu_1440.read().range(19, 1);
}

void particle_filter::thread_tmp_420_fu_21982_p4() {
    tmp_420_fu_21982_p4 = rng_state_s24_fu_1360.read().range(27, 3);
}

void particle_filter::thread_tmp_421_fu_22022_p4() {
    tmp_421_fu_22022_p4 = rng_state_s44_fu_1280.read().range(14, 4);
}

void particle_filter::thread_tmp_422_fu_22074_p4() {
    tmp_422_fu_22074_p4 = rng_state_s5_fu_1436.read().range(19, 1);
}

void particle_filter::thread_tmp_423_fu_22114_p4() {
    tmp_423_fu_22114_p4 = rng_state_s25_fu_1356.read().range(27, 3);
}

void particle_filter::thread_tmp_424_fu_22154_p4() {
    tmp_424_fu_22154_p4 = rng_state_s45_fu_1276.read().range(14, 4);
}

void particle_filter::thread_tmp_425_fu_23328_p4() {
    tmp_425_fu_23328_p4 = rng_state_s14_fu_1400.read().range(19, 1);
}

void particle_filter::thread_tmp_426_fu_23368_p4() {
    tmp_426_fu_23368_p4 = rng_state_s34_fu_1320.read().range(27, 3);
}

void particle_filter::thread_tmp_427_1_fu_28432_p1() {
    tmp_427_1_fu_28432_p1 = esl_zext<12,11>(p_Result_26_1_fu_28422_p4.read());
}

void particle_filter::thread_tmp_427_fu_23408_p4() {
    tmp_427_fu_23408_p4 = rng_state_s54_fu_1240.read().range(14, 4);
}

void particle_filter::thread_tmp_428_fu_23460_p4() {
    tmp_428_fu_23460_p4 = rng_state_s15_fu_1396.read().range(19, 1);
}

void particle_filter::thread_tmp_429_1_fu_28440_p2() {
    tmp_429_1_fu_28440_p2 = (!tmp_504_fu_28410_p1.read().is_01() || !ap_const_lv63_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_504_fu_28410_p1.read() == ap_const_lv63_0);
}

void particle_filter::thread_tmp_429_fu_23500_p4() {
    tmp_429_fu_23500_p4 = rng_state_s35_fu_1316.read().range(27, 3);
}

void particle_filter::thread_tmp_42_i_fu_30799_p2() {
    tmp_42_i_fu_30799_p2 = (mask_reg_36205.read() ^ ap_const_lv23_7FFFFF);
}

void particle_filter::thread_tmp_430_fu_23540_p4() {
    tmp_430_fu_23540_p4 = rng_state_s55_fu_1236.read().range(14, 4);
}

void particle_filter::thread_tmp_431_fu_23592_p4() {
    tmp_431_fu_23592_p4 = rng_state_s16_fu_1392.read().range(19, 1);
}

void particle_filter::thread_tmp_432_fu_23632_p4() {
    tmp_432_fu_23632_p4 = rng_state_s36_fu_1312.read().range(27, 3);
}

void particle_filter::thread_tmp_433_fu_23672_p4() {
    tmp_433_fu_23672_p4 = rng_state_s56_fu_1232.read().range(14, 4);
}

void particle_filter::thread_tmp_434_fu_23724_p4() {
    tmp_434_fu_23724_p4 = rng_state_s17_fu_1388.read().range(19, 1);
}

void particle_filter::thread_tmp_435_fu_23764_p4() {
    tmp_435_fu_23764_p4 = rng_state_s37_fu_1308.read().range(27, 3);
}

void particle_filter::thread_tmp_436_fu_23804_p4() {
    tmp_436_fu_23804_p4 = rng_state_s57_fu_1228.read().range(14, 4);
}

void particle_filter::thread_tmp_437_fu_23856_p4() {
    tmp_437_fu_23856_p4 = rng_state_s18_fu_1384.read().range(19, 1);
}

void particle_filter::thread_tmp_438_fu_23896_p4() {
    tmp_438_fu_23896_p4 = rng_state_s38_fu_1304.read().range(27, 3);
}

void particle_filter::thread_tmp_439_fu_23936_p4() {
    tmp_439_fu_23936_p4 = rng_state_s58_fu_1224.read().range(14, 4);
}

void particle_filter::thread_tmp_43_fu_27201_p3() {
    tmp_43_fu_27201_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_404_fu_27198_p1.read());
}

void particle_filter::thread_tmp_440_fu_23988_p4() {
    tmp_440_fu_23988_p4 = rng_state_s19_fu_1380.read().range(19, 1);
}

void particle_filter::thread_tmp_441_fu_24028_p4() {
    tmp_441_fu_24028_p4 = rng_state_s39_fu_1300.read().range(27, 3);
}

void particle_filter::thread_tmp_442_fu_24068_p4() {
    tmp_442_fu_24068_p4 = rng_state_s59_fu_1220.read().range(14, 4);
}

void particle_filter::thread_tmp_443_fu_24120_p4() {
    tmp_443_fu_24120_p4 = rng_state_s20_fu_1376.read().range(19, 1);
}

void particle_filter::thread_tmp_444_1_fu_28646_p2() {
    tmp_444_1_fu_28646_p2 = (!F2_2_1_reg_35335.read().is_01() || !ap_const_lv12_FF4.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35335.read()) + sc_biguint<12>(ap_const_lv12_FF4));
}

void particle_filter::thread_tmp_444_fu_24160_p4() {
    tmp_444_fu_24160_p4 = rng_state_s40_fu_1296.read().range(27, 3);
}

void particle_filter::thread_tmp_445_1_fu_28651_p2() {
    tmp_445_1_fu_28651_p2 = (!ap_const_lv12_C.is_01() || !F2_2_1_reg_35335.read().is_01())? sc_lv<12>(): (sc_bigint<12>(ap_const_lv12_C) - sc_biguint<12>(F2_2_1_reg_35335.read()));
}

void particle_filter::thread_tmp_445_fu_24200_p4() {
    tmp_445_fu_24200_p4 = rng_state_s60_fu_1216.read().range(14, 4);
}

void particle_filter::thread_tmp_446_1_fu_29015_p2() {
    tmp_446_1_fu_29015_p2 = (!ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read().is_01() || !ap_const_lv12_C.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read() == ap_const_lv12_C);
}

void particle_filter::thread_tmp_446_fu_24252_p4() {
    tmp_446_fu_24252_p4 = rng_state_s21_fu_1372.read().range(19, 1);
}

void particle_filter::thread_tmp_447_fu_28312_p1() {
    tmp_447_fu_28312_p1 = j3_reg_19381.read().range(13-1, 0);
}

void particle_filter::thread_tmp_448_fu_24292_p4() {
    tmp_448_fu_24292_p4 = rng_state_s41_fu_1292.read().range(27, 3);
}

void particle_filter::thread_tmp_449_fu_28324_p4() {
    tmp_449_fu_28324_p4 = j3_reg_19381.read().range(30, 13);
}

void particle_filter::thread_tmp_450_fu_24332_p4() {
    tmp_450_fu_24332_p4 = rng_state_s61_fu_1212.read().range(14, 4);
}

void particle_filter::thread_tmp_451_fu_28364_p1() {
    tmp_451_fu_28364_p1 = ireg_V_2_fu_28360_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_455_fu_28390_p1() {
    tmp_455_fu_28390_p1 = ireg_V_2_fu_28360_p1.read().range(52-1, 0);
}

void particle_filter::thread_tmp_457_fu_28504_p1() {
    tmp_457_fu_28504_p1 = man_V_s_fu_28474_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_459_fu_28799_p1() {
    tmp_459_fu_28799_p1 = tmp_288_fu_28794_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_45_fu_31072_p2() {
    tmp_45_fu_31072_p2 = (tmp_113_fu_31059_p2.read() | tmp_90_reg_36297.read());
}

void particle_filter::thread_tmp_461_1_fu_29020_p2() {
    tmp_461_1_fu_29020_p2 = (!sh_amt_2_1_reg_35415.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_1_reg_35415.read()) < sc_biguint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_461_fu_28819_p1() {
    tmp_461_fu_28819_p1 = tmp_334_fu_28813_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_463_1_fu_29025_p2() {
    tmp_463_1_fu_29025_p2 = (!sh_amt_2_1_reg_35415.read().is_01() || !ap_const_lv12_1C.is_01())? sc_lv<1>(): (sc_biguint<12>(sh_amt_2_1_reg_35415.read()) < sc_biguint<12>(ap_const_lv12_1C));
}

void particle_filter::thread_tmp_463_fu_28523_p2() {
    tmp_463_fu_28523_p2 = esl_sext<32,12>(tmp_338_fu_28514_p2.read());
}

void particle_filter::thread_tmp_463_fu_28523_p3() {
    tmp_463_fu_28523_p3 = (!tmp_463_fu_28523_p2.read().is_01() || sc_biguint<32>(tmp_463_fu_28523_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_s_fu_28474_p3.read().range(sc_biguint<32>(tmp_463_fu_28523_p2.read()).to_uint(), sc_biguint<32>(tmp_463_fu_28523_p2.read()).to_uint());
}

void particle_filter::thread_tmp_465_1_fu_29030_p0() {
    tmp_465_1_fu_29030_p0 = sh_amt_2_1_cast_fu_29012_p1.read();
}

void particle_filter::thread_tmp_465_1_fu_29030_p1() {
    tmp_465_1_fu_29030_p1 = esl_zext<54,32>(tmp_465_1_fu_29030_p0.read());
}

void particle_filter::thread_tmp_465_fu_28543_p1() {
    tmp_465_fu_28543_p1 = tmp_344_fu_28538_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_466_1_fu_29034_p2() {
    tmp_466_1_fu_29034_p2 = (!man_V_14_1_reg_35402.read().is_01() || !tmp_465_1_fu_29030_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_14_1_reg_35402.read()) >> (unsigned short)tmp_465_1_fu_29030_p1.read().to_uint();
}

void particle_filter::thread_tmp_469_1_fu_29053_p0() {
    tmp_469_1_fu_29053_p0 = esl_sext<32,28>(tmp_507_reg_35422.read());
}

void particle_filter::thread_tmp_469_1_fu_29053_p1() {
    tmp_469_1_fu_29053_p1 = sh_amt_2_1_cast_fu_29012_p1.read();
}

void particle_filter::thread_tmp_469_1_fu_29053_p2() {
    tmp_469_1_fu_29053_p2 = (!tmp_469_1_fu_29053_p1.read().is_01())? sc_lv<32>(): tmp_469_1_fu_29053_p0.read() << (unsigned short)tmp_469_1_fu_29053_p1.read().to_uint();
}

void particle_filter::thread_tmp_469_fu_29265_p3() {
    tmp_469_fu_29265_p3 = p_Val2_s_154_fu_29260_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_473_fu_29547_p3() {
    tmp_473_fu_29547_p3 = p_Val2_2_155_fu_29531_p3.read().range(27, 27);
}

void particle_filter::thread_tmp_475_fu_28912_p3() {
    tmp_475_fu_28912_p3 = pos1_2_fu_28894_p2.read().range(11, 11);
}

void particle_filter::thread_tmp_477_fu_28935_p1() {
    tmp_477_fu_28935_p1 = tmp_361_fu_28930_p2.read().range(1-1, 0);
}

void particle_filter::thread_tmp_480_1_fu_28668_p2() {
    tmp_480_1_fu_28668_p2 = (!tmp_444_1_fu_28646_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_444_1_fu_28646_p2.read()) > sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_482_fu_29989_p3() {
    tmp_482_fu_29989_p3 = p_Val2_8_fu_29983_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_483_1_fu_28674_p2() {
    tmp_483_1_fu_28674_p2 = (!F2_2_1_reg_35335.read().is_01() || !ap_const_lv12_FF3.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35335.read()) + sc_biguint<12>(ap_const_lv12_FF3));
}

void particle_filter::thread_tmp_483_fu_29997_p1() {
    tmp_483_fu_29997_p1 = p_Val2_8_fu_29983_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_484_fu_30001_p3() {
    tmp_484_fu_30001_p3 = p_Val2_8_fu_29983_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_485_fu_30121_p1() {
    tmp_485_fu_30121_p1 = p_Val2_16_fu_30114_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_486_fu_30225_p3() {
    tmp_486_fu_30225_p3 = p_Val2_24_fu_30219_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_487_fu_30233_p1() {
    tmp_487_fu_30233_p1 = p_Val2_24_fu_30219_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_488_fu_30237_p3() {
    tmp_488_fu_30237_p3 = p_Val2_24_fu_30219_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_48_fu_28457_p3() {
    tmp_48_fu_28457_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_455_reg_35279.read());
}

void particle_filter::thread_tmp_490_fu_30391_p1() {
    tmp_490_fu_30391_p1 = p_Val2_26_fu_30365_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_494_1_fu_29071_p2() {
    tmp_494_1_fu_29071_p2 = (!ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read().is_01() || !ap_const_lv12_D.is_01())? sc_lv<1>(): (sc_bigint<12>(ap_reg_ppstg_F2_2_1_reg_35335_pp4_it25.read()) > sc_bigint<12>(ap_const_lv12_D));
}

void particle_filter::thread_tmp_497_fu_31006_p2() {
    tmp_497_fu_31006_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): block_reg_36262.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_498_1_fu_28698_p2() {
    tmp_498_1_fu_28698_p2 = (!F2_2_1_reg_35335.read().is_01() || !ap_const_lv12_FF2.is_01())? sc_lv<12>(): (sc_bigint<12>(F2_2_1_reg_35335.read()) + sc_biguint<12>(ap_const_lv12_FF2));
}

void particle_filter::thread_tmp_498_fu_31016_p1() {
    tmp_498_fu_31016_p1 = tmp_279_fu_31011_p2.read().range(13-1, 0);
}

void particle_filter::thread_tmp_499_1_fu_28707_p2() {
    tmp_499_1_fu_28707_p2 = (!tmp_498_1_fu_28698_p2.read().is_01() || !ap_const_lv12_35.is_01())? sc_lv<1>(): (sc_bigint<12>(tmp_498_1_fu_28698_p2.read()) > sc_bigint<12>(ap_const_lv12_35));
}

void particle_filter::thread_tmp_499_fu_31026_p4() {
    tmp_499_fu_31026_p4 = tmp_279_fu_31011_p2.read().range(31, 13);
}

void particle_filter::thread_tmp_500_1_fu_28713_p3() {
    tmp_500_1_fu_28713_p3 = (!tmp_499_1_fu_28707_p2.read()[0].is_01())? sc_lv<11>(): ((tmp_499_1_fu_28707_p2.read()[0].to_bool())? ap_const_lv11_35: tmp_511_fu_28703_p1.read());
}

void particle_filter::thread_tmp_500_fu_30538_p1() {
    tmp_500_fu_30538_p1 = t_assign_reg_2378.read().range(16-1, 0);
}

void particle_filter::thread_tmp_501_1_fu_29076_p2() {
    tmp_501_1_fu_29076_p2 = (!p_Result_35_1_reg_35433.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(p_Result_35_1_reg_35433.read() != ap_const_lv54_0);
}

void particle_filter::thread_tmp_501_fu_30534_p1() {
    tmp_501_fu_30534_p1 = k9_mid2_fu_30526_p3.read().range(1-1, 0);
}

void particle_filter::thread_tmp_502_fu_30568_p1() {
    tmp_502_fu_30568_p1 = tmp_277_fu_30562_p2.read().range(13-1, 0);
}

void particle_filter::thread_tmp_503_1_fu_29396_p1() {
    tmp_503_1_fu_29396_p1 = esl_zext<28,1>(qb_assign_5_1_fu_29392_p2.read());
}

void particle_filter::thread_tmp_503_fu_30580_p4() {
    tmp_503_fu_30580_p4 = tmp_277_fu_30562_p2.read().range(31, 13);
}

void particle_filter::thread_tmp_504_fu_28410_p1() {
    tmp_504_fu_28410_p1 = ireg_V_2_1_fu_28406_p1.read().range(63-1, 0);
}

void particle_filter::thread_tmp_506_fu_28436_p1() {
    tmp_506_fu_28436_p1 = ireg_V_2_1_fu_28406_p1.read().range(52-1, 0);
}

void particle_filter::thread_tmp_507_fu_28664_p1() {
    tmp_507_fu_28664_p1 = man_V_14_1_fu_28634_p3.read().range(28-1, 0);
}

void particle_filter::thread_tmp_508_fu_29039_p1() {
    tmp_508_fu_29039_p1 = tmp_466_1_fu_29034_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_509_fu_29059_p1() {
    tmp_509_fu_29059_p1 = tmp_469_1_fu_29053_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_510_fu_28683_p2() {
    tmp_510_fu_28683_p2 = esl_sext<32,12>(tmp_483_1_fu_28674_p2.read());
}

void particle_filter::thread_tmp_510_fu_28683_p3() {
    tmp_510_fu_28683_p3 = (!tmp_510_fu_28683_p2.read().is_01() || sc_biguint<32>(tmp_510_fu_28683_p2.read()).to_uint() >= 54)? sc_lv<1>(): man_V_14_1_fu_28634_p3.read().range(sc_biguint<32>(tmp_510_fu_28683_p2.read()).to_uint(), sc_biguint<32>(tmp_510_fu_28683_p2.read()).to_uint());
}

void particle_filter::thread_tmp_511_fu_28703_p1() {
    tmp_511_fu_28703_p1 = tmp_498_1_fu_28698_p2.read().range(11-1, 0);
}

void particle_filter::thread_tmp_513_1_fu_28743_p2() {
    tmp_513_1_fu_28743_p2 = (!tmp468_cast_cast_fu_28735_p3.read().is_01() || !exp_V_2_1_fu_28612_p2.read().is_01())? sc_lv<12>(): (sc_bigint<12>(tmp468_cast_cast_fu_28735_p3.read()) + sc_biguint<12>(exp_V_2_1_fu_28612_p2.read()));
}

void particle_filter::thread_tmp_513_fu_29405_p3() {
    tmp_513_fu_29405_p3 = p_Val2_24_1_fu_29400_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_515_fu_29637_p3() {
    tmp_515_fu_29637_p3 = p_Val2_25_1_fu_29621_p3.read().range(27, 27);
}

void particle_filter::thread_tmp_516_fu_29152_p3() {
    tmp_516_fu_29152_p3 = pos1_2_1_fu_29134_p2.read().range(11, 11);
}

void particle_filter::thread_tmp_517_1_fu_29146_p2() {
    tmp_517_1_fu_29146_p2 = (!pos1_2_1_fu_29134_p2.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos1_2_1_fu_29134_p2.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_517_fu_29175_p1() {
    tmp_517_fu_29175_p1 = tmp_523_1_fu_29170_p2.read().range(1-1, 0);
}

void particle_filter::thread_tmp_520_fu_30052_p3() {
    tmp_520_fu_30052_p3 = p_Val2_32_1_fu_30046_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_521_fu_30060_p1() {
    tmp_521_fu_30060_p1 = p_Val2_32_1_fu_30046_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_522_1_fu_29166_p0() {
    tmp_522_1_fu_29166_p0 = esl_sext<32,12>(pos1_2_1_fu_29134_p2.read());
}

void particle_filter::thread_tmp_522_1_fu_29166_p1() {
    tmp_522_1_fu_29166_p1 = esl_zext<54,32>(tmp_522_1_fu_29166_p0.read());
}

void particle_filter::thread_tmp_522_fu_30064_p3() {
    tmp_522_fu_30064_p3 = p_Val2_32_1_fu_30046_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_523_1_fu_29170_p2() {
    tmp_523_1_fu_29170_p2 = (!man_V_14_1_reg_35402.read().is_01() || !tmp_522_1_fu_29166_p1.read().is_01())? sc_lv<54>(): sc_bigint<54>(man_V_14_1_reg_35402.read()) >> (unsigned short)tmp_522_1_fu_29166_p1.read().to_uint();
}

void particle_filter::thread_tmp_523_fu_30174_p1() {
    tmp_523_fu_30174_p1 = p_Val2_43_1_fu_30167_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_524_fu_30292_p3() {
    tmp_524_fu_30292_p3 = p_Val2_51_1_fu_30286_p2.read().range(28, 28);
}

void particle_filter::thread_tmp_525_fu_30300_p1() {
    tmp_525_fu_30300_p1 = p_Val2_51_1_fu_30286_p2.read().range(28-1, 0);
}

void particle_filter::thread_tmp_526_1_fu_29184_p2() {
    tmp_526_1_fu_29184_p2 = (!pos2_2_1_reg_35443.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): (sc_bigint<12>(pos2_2_1_reg_35443.read()) < sc_bigint<12>(ap_const_lv12_36));
}

void particle_filter::thread_tmp_526_1_not_fu_29226_p2() {
    tmp_526_1_not_fu_29226_p2 = (tmp_526_1_fu_29184_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_526_fu_30304_p3() {
    tmp_526_fu_30304_p3 = p_Val2_51_1_fu_30286_p2.read().range(27, 27);
}

void particle_filter::thread_tmp_527_1_fu_29189_p0() {
    tmp_527_1_fu_29189_p0 = esl_sext<32,12>(pos2_2_1_reg_35443.read());
}

void particle_filter::thread_tmp_527_1_fu_29189_p1() {
    tmp_527_1_fu_29189_p1 = esl_zext<54,32>(tmp_527_1_fu_29189_p0.read());
}

void particle_filter::thread_tmp_528_fu_30456_p1() {
    tmp_528_fu_30456_p1 = p_Val2_53_1_fu_30430_p3.read().range(12-1, 0);
}

void particle_filter::thread_tmp_529_fu_30648_p2() {
    tmp_529_fu_30648_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): p_block_replicated_2_fu_30635_p3.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_530_1_fu_29210_p2() {
    tmp_530_1_fu_29210_p2 = (!Range2_V_5_1_fu_29193_p2.read().is_01() || !ap_const_lv54_0.is_01())? sc_lv<1>(): sc_lv<1>(Range2_V_5_1_fu_29193_p2.read() == ap_const_lv54_0);
}

void particle_filter::thread_tmp_530_fu_30667_p1() {
    tmp_530_fu_30667_p1 = tmp_354_fu_30661_p2.read().range(13-1, 0);
}

void particle_filter::thread_tmp_531_1_fu_29468_p2() {
    tmp_531_1_fu_29468_p2 = (Range1_all_ones_11_1_fu_29443_p2.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_532_1_fu_29216_p2() {
    tmp_532_1_fu_29216_p2 = (!pos2_2_1_reg_35443.read().is_01() || !ap_const_lv12_36.is_01())? sc_lv<1>(): sc_lv<1>(pos2_2_1_reg_35443.read() == ap_const_lv12_36);
}

void particle_filter::thread_tmp_537_1_fu_29776_p2() {
    tmp_537_1_fu_29776_p2 = (Range1_all_ones_2_i2_1_159_reg_35827.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_538_1_fu_29806_p2() {
    tmp_538_1_fu_29806_p2 = (ap_reg_ppstg_tmp_505_reg_35306_pp4_it28.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_544_fu_21952_p2() {
    tmp_544_fu_21952_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s4_fu_1440.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_545_fu_21992_p2() {
    tmp_545_fu_21992_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s24_fu_1360.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_546_fu_22032_p2() {
    tmp_546_fu_22032_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s44_fu_1280.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_547_fu_22084_p2() {
    tmp_547_fu_22084_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s5_fu_1436.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_548_fu_22124_p2() {
    tmp_548_fu_22124_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s25_fu_1356.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_549_fu_22164_p2() {
    tmp_549_fu_22164_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s45_fu_1276.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_550_fu_23338_p2() {
    tmp_550_fu_23338_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s14_fu_1400.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_551_1_fu_30072_p2() {
    tmp_551_1_fu_30072_p2 = (tmp_522_fu_30064_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_551_fu_23378_p2() {
    tmp_551_fu_23378_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s34_fu_1320.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_552_fu_23418_p2() {
    tmp_552_fu_23418_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s54_fu_1240.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_553_fu_23470_p2() {
    tmp_553_fu_23470_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s15_fu_1396.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_554_fu_23510_p2() {
    tmp_554_fu_23510_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s35_fu_1316.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_555_fu_23550_p2() {
    tmp_555_fu_23550_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s55_fu_1236.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_556_fu_23602_p2() {
    tmp_556_fu_23602_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s16_fu_1392.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_557_fu_23642_p2() {
    tmp_557_fu_23642_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s36_fu_1312.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_558_fu_23682_p2() {
    tmp_558_fu_23682_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s56_fu_1232.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_559_fu_23734_p2() {
    tmp_559_fu_23734_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s17_fu_1388.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_560_fu_23774_p2() {
    tmp_560_fu_23774_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s37_fu_1308.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_561_fu_23814_p2() {
    tmp_561_fu_23814_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s57_fu_1228.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_562_fu_23866_p2() {
    tmp_562_fu_23866_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s18_fu_1384.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_563_fu_23906_p2() {
    tmp_563_fu_23906_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s38_fu_1304.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_564_fu_23946_p2() {
    tmp_564_fu_23946_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s58_fu_1224.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_565_fu_23998_p2() {
    tmp_565_fu_23998_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s19_fu_1380.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_566_fu_24038_p2() {
    tmp_566_fu_24038_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s39_fu_1300.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_567_fu_24078_p2() {
    tmp_567_fu_24078_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s59_fu_1220.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_568_fu_24130_p2() {
    tmp_568_fu_24130_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s20_fu_1376.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_569_1_cast_fu_30178_p1() {
    tmp_569_1_cast_fu_30178_p1 = esl_zext<13,12>(tmp_523_fu_30174_p1.read());
}

void particle_filter::thread_tmp_569_fu_24170_p2() {
    tmp_569_fu_24170_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s40_fu_1296.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_56_fu_28617_p3() {
    tmp_56_fu_28617_p3 = esl_concat<1,52>(ap_const_lv1_1, tmp_506_reg_35322.read());
}

void particle_filter::thread_tmp_570_fu_24210_p2() {
    tmp_570_fu_24210_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s60_fu_1216.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_571_1_fu_30192_p2() {
    tmp_571_1_fu_30192_p2 = (!p_Val2_43_1_fu_30167_p3.read().is_01() || !ap_const_lv28_0.is_01())? sc_lv<1>(): (sc_bigint<28>(p_Val2_43_1_fu_30167_p3.read()) > sc_bigint<28>(ap_const_lv28_0));
}

void particle_filter::thread_tmp_571_fu_24262_p2() {
    tmp_571_fu_24262_p2 = (!ap_const_lv32_D.is_01())? sc_lv<32>(): rng_state_s21_fu_1372.read() << (unsigned short)ap_const_lv32_D.to_uint();
}

void particle_filter::thread_tmp_572_1_fu_30282_p1() {
    tmp_572_1_fu_30282_p1 = esl_zext<29,28>(p_Val2_50_1_fu_30275_p3.read());
}

void particle_filter::thread_tmp_572_fu_24302_p2() {
    tmp_572_fu_24302_p2 = (!ap_const_lv32_2.is_01())? sc_lv<32>(): rng_state_s41_fu_1292.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void particle_filter::thread_tmp_573_fu_24342_p2() {
    tmp_573_fu_24342_p2 = (!ap_const_lv32_3.is_01())? sc_lv<32>(): rng_state_s61_fu_1212.read() << (unsigned short)ap_const_lv32_3.to_uint();
}

void particle_filter::thread_tmp_577_1_fu_30312_p2() {
    tmp_577_1_fu_30312_p2 = (tmp_526_fu_30304_p3.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_tmp_580_1_fu_30460_p2() {
    tmp_580_1_fu_30460_p2 = (!tmp_528_fu_30456_p1.read().is_01() || !ap_const_lv12_0.is_01())? sc_lv<1>(): sc_lv<1>(tmp_528_fu_30456_p1.read() == ap_const_lv12_0);
}

void particle_filter::thread_tmp_63_fu_27088_p2() {
    tmp_63_fu_27088_p2 = (tmp_199_reg_34443.read() | underflow_reg_34719.read());
}

void particle_filter::thread_tmp_70_fu_27935_p2() {
    tmp_70_fu_27935_p2 = (tmp_248_reg_34764.read() | underflow_1_fu_27904_p2.read());
}

void particle_filter::thread_tmp_77_fu_29862_p2() {
    tmp_77_fu_29862_p2 = (ap_reg_ppstg_tmp_261_reg_35284_pp4_it29.read() | underflow_5_reg_35847.read());
}

void particle_filter::thread_tmp_79_i_i1_fu_24719_p2() {
    tmp_79_i_i1_fu_24719_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_9_fu_24692_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_9_fu_24692_p4.read()));
}

void particle_filter::thread_tmp_79_i_i2_fu_24764_p2() {
    tmp_79_i_i2_fu_24764_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_11_fu_24737_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_11_fu_24737_p4.read()));
}

void particle_filter::thread_tmp_79_i_i3_fu_24809_p2() {
    tmp_79_i_i3_fu_24809_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_13_fu_24782_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_13_fu_24782_p4.read()));
}

void particle_filter::thread_tmp_79_i_i4_fu_24854_p2() {
    tmp_79_i_i4_fu_24854_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_15_fu_24827_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_15_fu_24827_p4.read()));
}

void particle_filter::thread_tmp_79_i_i5_fu_24899_p2() {
    tmp_79_i_i5_fu_24899_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_17_fu_24872_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_17_fu_24872_p4.read()));
}

void particle_filter::thread_tmp_79_i_i6_fu_24944_p2() {
    tmp_79_i_i6_fu_24944_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_19_fu_24917_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_19_fu_24917_p4.read()));
}

void particle_filter::thread_tmp_79_i_i7_fu_24989_p2() {
    tmp_79_i_i7_fu_24989_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_21_fu_24962_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_21_fu_24962_p4.read()));
}

void particle_filter::thread_tmp_79_i_i_fu_24674_p2() {
    tmp_79_i_i_fu_24674_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_fu_24647_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_fu_24647_p4.read()));
}

void particle_filter::thread_tmp_80_i_i1_fu_25086_p0() {
    tmp_80_i_i1_fu_25086_p0 = esl_sext<32,9>(sh_assign_1_reg_33364.read());
}

void particle_filter::thread_tmp_80_i_i1_fu_25086_p1() {
    tmp_80_i_i1_fu_25086_p1 = esl_zext<62,32>(tmp_80_i_i1_fu_25086_p0.read());
}

void particle_filter::thread_tmp_80_i_i2_fu_25150_p0() {
    tmp_80_i_i2_fu_25150_p0 = esl_sext<32,9>(sh_assign_4_reg_33379.read());
}

void particle_filter::thread_tmp_80_i_i2_fu_25150_p1() {
    tmp_80_i_i2_fu_25150_p1 = esl_zext<62,32>(tmp_80_i_i2_fu_25150_p0.read());
}

void particle_filter::thread_tmp_80_i_i3_fu_25208_p0() {
    tmp_80_i_i3_fu_25208_p0 = esl_sext<32,9>(sh_assign_6_reg_33390.read());
}

void particle_filter::thread_tmp_80_i_i3_fu_25208_p1() {
    tmp_80_i_i3_fu_25208_p1 = esl_zext<62,32>(tmp_80_i_i3_fu_25208_p0.read());
}

void particle_filter::thread_tmp_80_i_i4_fu_25272_p0() {
    tmp_80_i_i4_fu_25272_p0 = esl_sext<32,9>(sh_assign_10_reg_33405.read());
}

void particle_filter::thread_tmp_80_i_i4_fu_25272_p1() {
    tmp_80_i_i4_fu_25272_p1 = esl_zext<62,32>(tmp_80_i_i4_fu_25272_p0.read());
}

void particle_filter::thread_tmp_80_i_i5_fu_25330_p0() {
    tmp_80_i_i5_fu_25330_p0 = esl_sext<32,9>(sh_assign_12_reg_33416.read());
}

void particle_filter::thread_tmp_80_i_i5_fu_25330_p1() {
    tmp_80_i_i5_fu_25330_p1 = esl_zext<62,32>(tmp_80_i_i5_fu_25330_p0.read());
}

void particle_filter::thread_tmp_80_i_i6_fu_25394_p0() {
    tmp_80_i_i6_fu_25394_p0 = esl_sext<32,9>(sh_assign_14_reg_33431.read());
}

void particle_filter::thread_tmp_80_i_i6_fu_25394_p1() {
    tmp_80_i_i6_fu_25394_p1 = esl_zext<62,32>(tmp_80_i_i6_fu_25394_p0.read());
}

void particle_filter::thread_tmp_80_i_i7_fu_25452_p0() {
    tmp_80_i_i7_fu_25452_p0 = esl_sext<32,9>(sh_assign_16_reg_33442.read());
}

void particle_filter::thread_tmp_80_i_i7_fu_25452_p1() {
    tmp_80_i_i7_fu_25452_p1 = esl_zext<62,32>(tmp_80_i_i7_fu_25452_p0.read());
}

void particle_filter::thread_tmp_80_i_i_fu_25028_p0() {
    tmp_80_i_i_fu_25028_p0 = esl_sext<32,9>(sh_assign_9_reg_33353.read());
}

void particle_filter::thread_tmp_80_i_i_fu_25028_p1() {
    tmp_80_i_i_fu_25028_p1 = esl_zext<62,32>(tmp_80_i_i_fu_25028_p0.read());
}

void particle_filter::thread_tmp_81_fu_21662_p4() {
    tmp_81_fu_21662_p4 = rng_state_s1_fu_1448.read().range(19, 1);
}

void particle_filter::thread_tmp_81_i_i1_fu_25090_p1() {
    tmp_81_i_i1_fu_25090_p1 = esl_sext<24,9>(sh_assign_1_reg_33364.read());
}

void particle_filter::thread_tmp_81_i_i1_fu_25090_p2() {
    tmp_81_i_i1_fu_25090_p2 = (!tmp_81_i_i1_fu_25090_p1.read().is_01())? sc_lv<24>(): p_Result_44_fu_25068_p3.read() >> (unsigned short)tmp_81_i_i1_fu_25090_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i2_fu_25154_p1() {
    tmp_81_i_i2_fu_25154_p1 = esl_sext<24,9>(sh_assign_4_reg_33379.read());
}

void particle_filter::thread_tmp_81_i_i2_fu_25154_p2() {
    tmp_81_i_i2_fu_25154_p2 = (!tmp_81_i_i2_fu_25154_p1.read().is_01())? sc_lv<24>(): p_Result_45_fu_25132_p3.read() >> (unsigned short)tmp_81_i_i2_fu_25154_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i320_cast_fu_25096_p1() {
    tmp_81_i_i320_cast_fu_25096_p1 = esl_zext<62,24>(tmp_81_i_i1_fu_25090_p2.read());
}

void particle_filter::thread_tmp_81_i_i336_cast_fu_25160_p1() {
    tmp_81_i_i336_cast_fu_25160_p1 = esl_zext<62,24>(tmp_81_i_i2_fu_25154_p2.read());
}

void particle_filter::thread_tmp_81_i_i352_cast_fu_25218_p1() {
    tmp_81_i_i352_cast_fu_25218_p1 = esl_zext<62,24>(tmp_81_i_i3_fu_25212_p2.read());
}

void particle_filter::thread_tmp_81_i_i368_cast_fu_25282_p1() {
    tmp_81_i_i368_cast_fu_25282_p1 = esl_zext<62,24>(tmp_81_i_i4_fu_25276_p2.read());
}

void particle_filter::thread_tmp_81_i_i384_cast_fu_25340_p1() {
    tmp_81_i_i384_cast_fu_25340_p1 = esl_zext<62,24>(tmp_81_i_i5_fu_25334_p2.read());
}

void particle_filter::thread_tmp_81_i_i3_fu_25212_p1() {
    tmp_81_i_i3_fu_25212_p1 = esl_sext<24,9>(sh_assign_6_reg_33390.read());
}

void particle_filter::thread_tmp_81_i_i3_fu_25212_p2() {
    tmp_81_i_i3_fu_25212_p2 = (!tmp_81_i_i3_fu_25212_p1.read().is_01())? sc_lv<24>(): p_Result_46_fu_25190_p3.read() >> (unsigned short)tmp_81_i_i3_fu_25212_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i400_cast_fu_25404_p1() {
    tmp_81_i_i400_cast_fu_25404_p1 = esl_zext<62,24>(tmp_81_i_i6_fu_25398_p2.read());
}

void particle_filter::thread_tmp_81_i_i416_cast_fu_25462_p1() {
    tmp_81_i_i416_cast_fu_25462_p1 = esl_zext<62,24>(tmp_81_i_i7_fu_25456_p2.read());
}

void particle_filter::thread_tmp_81_i_i4_fu_25276_p1() {
    tmp_81_i_i4_fu_25276_p1 = esl_sext<24,9>(sh_assign_10_reg_33405.read());
}

void particle_filter::thread_tmp_81_i_i4_fu_25276_p2() {
    tmp_81_i_i4_fu_25276_p2 = (!tmp_81_i_i4_fu_25276_p1.read().is_01())? sc_lv<24>(): p_Result_47_fu_25254_p3.read() >> (unsigned short)tmp_81_i_i4_fu_25276_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i5_fu_25334_p1() {
    tmp_81_i_i5_fu_25334_p1 = esl_sext<24,9>(sh_assign_12_reg_33416.read());
}

void particle_filter::thread_tmp_81_i_i5_fu_25334_p2() {
    tmp_81_i_i5_fu_25334_p2 = (!tmp_81_i_i5_fu_25334_p1.read().is_01())? sc_lv<24>(): p_Result_48_fu_25312_p3.read() >> (unsigned short)tmp_81_i_i5_fu_25334_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i6_fu_25398_p1() {
    tmp_81_i_i6_fu_25398_p1 = esl_sext<24,9>(sh_assign_14_reg_33431.read());
}

void particle_filter::thread_tmp_81_i_i6_fu_25398_p2() {
    tmp_81_i_i6_fu_25398_p2 = (!tmp_81_i_i6_fu_25398_p1.read().is_01())? sc_lv<24>(): p_Result_49_fu_25376_p3.read() >> (unsigned short)tmp_81_i_i6_fu_25398_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i7_fu_25456_p1() {
    tmp_81_i_i7_fu_25456_p1 = esl_sext<24,9>(sh_assign_16_reg_33442.read());
}

void particle_filter::thread_tmp_81_i_i7_fu_25456_p2() {
    tmp_81_i_i7_fu_25456_p2 = (!tmp_81_i_i7_fu_25456_p1.read().is_01())? sc_lv<24>(): p_Result_50_fu_25434_p3.read() >> (unsigned short)tmp_81_i_i7_fu_25456_p1.read().to_uint();
}

void particle_filter::thread_tmp_81_i_i_cast_fu_25038_p1() {
    tmp_81_i_i_cast_fu_25038_p1 = esl_zext<62,24>(tmp_81_i_i_fu_25032_p2.read());
}

void particle_filter::thread_tmp_81_i_i_fu_25032_p1() {
    tmp_81_i_i_fu_25032_p1 = esl_sext<24,9>(sh_assign_9_reg_33353.read());
}

void particle_filter::thread_tmp_81_i_i_fu_25032_p2() {
    tmp_81_i_i_fu_25032_p2 = (!tmp_81_i_i_fu_25032_p1.read().is_01())? sc_lv<24>(): p_Result_43_fu_25010_p3.read() >> (unsigned short)tmp_81_i_i_fu_25032_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_fu_21702_p4() {
    tmp_83_fu_21702_p4 = rng_state_s2_fu_1368.read().range(27, 3);
}

void particle_filter::thread_tmp_83_i_i1_fu_25100_p2() {
    tmp_83_i_i1_fu_25100_p2 = (!tmp_80_i_i1_fu_25086_p1.read().is_01())? sc_lv<62>(): tmp_i_i5_fu_25076_p1.read() << (unsigned short)tmp_80_i_i1_fu_25086_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i2_fu_25164_p2() {
    tmp_83_i_i2_fu_25164_p2 = (!tmp_80_i_i2_fu_25150_p1.read().is_01())? sc_lv<62>(): tmp_i_i6_fu_25140_p1.read() << (unsigned short)tmp_80_i_i2_fu_25150_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i3_fu_25222_p2() {
    tmp_83_i_i3_fu_25222_p2 = (!tmp_80_i_i3_fu_25208_p1.read().is_01())? sc_lv<62>(): tmp_i_i7_fu_25198_p1.read() << (unsigned short)tmp_80_i_i3_fu_25208_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i4_fu_25286_p2() {
    tmp_83_i_i4_fu_25286_p2 = (!tmp_80_i_i4_fu_25272_p1.read().is_01())? sc_lv<62>(): tmp_i_i8_fu_25262_p1.read() << (unsigned short)tmp_80_i_i4_fu_25272_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i5_fu_25344_p2() {
    tmp_83_i_i5_fu_25344_p2 = (!tmp_80_i_i5_fu_25330_p1.read().is_01())? sc_lv<62>(): tmp_i_i9_fu_25320_p1.read() << (unsigned short)tmp_80_i_i5_fu_25330_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i6_fu_25408_p2() {
    tmp_83_i_i6_fu_25408_p2 = (!tmp_80_i_i6_fu_25394_p1.read().is_01())? sc_lv<62>(): tmp_i_i1_fu_25384_p1.read() << (unsigned short)tmp_80_i_i6_fu_25394_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i7_fu_25466_p2() {
    tmp_83_i_i7_fu_25466_p2 = (!tmp_80_i_i7_fu_25452_p1.read().is_01())? sc_lv<62>(): tmp_i_i2_fu_25442_p1.read() << (unsigned short)tmp_80_i_i7_fu_25452_p1.read().to_uint();
}

void particle_filter::thread_tmp_83_i_i_fu_25042_p2() {
    tmp_83_i_i_fu_25042_p2 = (!tmp_80_i_i_fu_25028_p1.read().is_01())? sc_lv<62>(): tmp_i_i4_fu_25018_p1.read() << (unsigned short)tmp_80_i_i_fu_25028_p1.read().to_uint();
}

void particle_filter::thread_tmp_84_fu_29930_p2() {
    tmp_84_fu_29930_p2 = (ap_reg_ppstg_tmp_429_1_reg_35327_pp4_it29.read() | underflow_5_1_reg_35872.read());
}

void particle_filter::thread_tmp_85_fu_21480_p2() {
    tmp_85_fu_21480_p2 = (!chunk_size_true_2_reg_32050.read().is_01() || !ap_const_lv32_FFFFFFFF.is_01())? sc_lv<32>(): (sc_bigint<32>(chunk_size_true_2_reg_32050.read()) + sc_biguint<32>(ap_const_lv32_FFFFFFFF));
}

void particle_filter::thread_tmp_86_fu_21572_p2() {
    tmp_86_fu_21572_p2 = (!t_assign_reg_2378.read().is_01() || !state_count.read().is_01())? sc_lv<1>(): (sc_biguint<32>(t_assign_reg_2378.read()) < sc_biguint<32>(state_count.read()));
}

void particle_filter::thread_tmp_87_fu_30883_p1() {
    tmp_87_fu_30883_p1 = sel_tmp6_i_reg_36230.read();
}

void particle_filter::thread_tmp_87_i_i_fu_30926_p2() {
    tmp_87_i_i_fu_30926_p2 = (!ap_const_lv8_7F.is_01() || !loc_V_29_fu_30894_p4.read().is_01())? sc_lv<8>(): (sc_bigint<8>(ap_const_lv8_7F) - sc_biguint<8>(loc_V_29_fu_30894_p4.read()));
}

void particle_filter::thread_tmp_88_i_i_fu_30961_p0() {
    tmp_88_i_i_fu_30961_p0 = esl_sext<32,9>(sh_assign_3_reg_36250.read());
}

void particle_filter::thread_tmp_88_i_i_fu_30961_p1() {
    tmp_88_i_i_fu_30961_p1 = esl_zext<78,32>(tmp_88_i_i_fu_30961_p0.read());
}

void particle_filter::thread_tmp_89_i_i_cast_fu_30971_p1() {
    tmp_89_i_i_cast_fu_30971_p1 = esl_zext<78,24>(tmp_89_i_i_fu_30965_p2.read());
}

void particle_filter::thread_tmp_89_i_i_fu_30965_p1() {
    tmp_89_i_i_fu_30965_p1 = esl_sext<24,9>(sh_assign_3_reg_36250.read());
}

void particle_filter::thread_tmp_89_i_i_fu_30965_p2() {
    tmp_89_i_i_fu_30965_p2 = (!tmp_89_i_i_fu_30965_p1.read().is_01())? sc_lv<24>(): p_Result_56_fu_30944_p3.read() >> (unsigned short)tmp_89_i_i_fu_30965_p1.read().to_uint();
}

void particle_filter::thread_tmp_91_fu_21678_p2() {
    tmp_91_fu_21678_p2 = (rng_state_s1_fu_1448.read() ^ tmp_122_fu_21672_p2.read());
}

void particle_filter::thread_tmp_91_i_i_fu_30975_p2() {
    tmp_91_i_i_fu_30975_p2 = (!tmp_88_i_i_fu_30961_p1.read().is_01())? sc_lv<78>(): tmp_i_i_fu_30951_p1.read() << (unsigned short)tmp_88_i_i_fu_30961_p1.read().to_uint();
}

void particle_filter::thread_tmp_92_fu_21684_p4() {
    tmp_92_fu_21684_p4 = tmp_91_fu_21678_p2.read().range(31, 19);
}

void particle_filter::thread_tmp_93_fu_21694_p3() {
    tmp_93_fu_21694_p3 = esl_concat<19,13>(tmp_81_fu_21662_p4.read(), tmp_92_fu_21684_p4.read());
}

void particle_filter::thread_tmp_94_fu_21718_p2() {
    tmp_94_fu_21718_p2 = (rng_state_s2_fu_1368.read() ^ tmp_124_fu_21712_p2.read());
}

void particle_filter::thread_tmp_95_fu_21724_p4() {
    tmp_95_fu_21724_p4 = tmp_94_fu_21718_p2.read().range(31, 25);
}

void particle_filter::thread_tmp_96_fu_21174_p4() {
    tmp_96_fu_21174_p4 = state_count.read().range(31, 1);
}

void particle_filter::thread_tmp_97_fu_21734_p3() {
    tmp_97_fu_21734_p3 = esl_concat<25,7>(tmp_83_fu_21702_p4.read(), tmp_95_fu_21724_p4.read());
}

void particle_filter::thread_tmp_98_fu_21742_p4() {
    tmp_98_fu_21742_p4 = rng_state_s3_fu_1288.read().range(14, 4);
}

void particle_filter::thread_tmp_99_fu_21758_p2() {
    tmp_99_fu_21758_p2 = (rng_state_s3_fu_1288.read() ^ tmp_128_fu_21752_p2.read());
}

void particle_filter::thread_tmp_i_fu_30768_p2() {
    tmp_i_fu_30768_p2 = (!loc_V_25_reg_36186.read().is_01() || !ap_const_lv8_7F.is_01())? sc_lv<1>(): (sc_biguint<8>(loc_V_25_reg_36186.read()) < sc_biguint<8>(ap_const_lv8_7F));
}

void particle_filter::thread_tmp_i_i1_fu_25384_p1() {
    tmp_i_i1_fu_25384_p1 = esl_zext<62,24>(p_Result_49_fu_25376_p3.read());
}

void particle_filter::thread_tmp_i_i2_fu_25442_p1() {
    tmp_i_i2_fu_25442_p1 = esl_zext<62,24>(p_Result_50_fu_25434_p3.read());
}

void particle_filter::thread_tmp_i_i4_fu_25018_p1() {
    tmp_i_i4_fu_25018_p1 = esl_zext<62,24>(p_Result_43_fu_25010_p3.read());
}

void particle_filter::thread_tmp_i_i5_fu_25076_p1() {
    tmp_i_i5_fu_25076_p1 = esl_zext<62,24>(p_Result_44_fu_25068_p3.read());
}

void particle_filter::thread_tmp_i_i6_fu_25140_p1() {
    tmp_i_i6_fu_25140_p1 = esl_zext<62,24>(p_Result_45_fu_25132_p3.read());
}

void particle_filter::thread_tmp_i_i7_fu_25198_p1() {
    tmp_i_i7_fu_25198_p1 = esl_zext<62,24>(p_Result_46_fu_25190_p3.read());
}

void particle_filter::thread_tmp_i_i8_fu_25262_p1() {
    tmp_i_i8_fu_25262_p1 = esl_zext<62,24>(p_Result_47_fu_25254_p3.read());
}

void particle_filter::thread_tmp_i_i9_fu_25320_p1() {
    tmp_i_i9_fu_25320_p1 = esl_zext<62,24>(p_Result_48_fu_25312_p3.read());
}

void particle_filter::thread_tmp_i_i_fu_30951_p1() {
    tmp_i_i_fu_30951_p1 = esl_zext<78,24>(p_Result_56_fu_30944_p3.read());
}

void particle_filter::thread_tmp_i_i_i308_cast_fu_24656_p1() {
    tmp_i_i_i308_cast_fu_24656_p1 = esl_zext<9,8>(loc_V_fu_24647_p4.read());
}

void particle_filter::thread_tmp_i_i_i314_cast_fu_24701_p1() {
    tmp_i_i_i314_cast_fu_24701_p1 = esl_zext<9,8>(loc_V_9_fu_24692_p4.read());
}

void particle_filter::thread_tmp_i_i_i330_cast_fu_24746_p1() {
    tmp_i_i_i330_cast_fu_24746_p1 = esl_zext<9,8>(loc_V_11_fu_24737_p4.read());
}

void particle_filter::thread_tmp_i_i_i346_cast_fu_24791_p1() {
    tmp_i_i_i346_cast_fu_24791_p1 = esl_zext<9,8>(loc_V_13_fu_24782_p4.read());
}

void particle_filter::thread_tmp_i_i_i362_cast_fu_24836_p1() {
    tmp_i_i_i362_cast_fu_24836_p1 = esl_zext<9,8>(loc_V_15_fu_24827_p4.read());
}

void particle_filter::thread_tmp_i_i_i378_cast_fu_24881_p1() {
    tmp_i_i_i378_cast_fu_24881_p1 = esl_zext<9,8>(loc_V_17_fu_24872_p4.read());
}

void particle_filter::thread_tmp_i_i_i394_cast_fu_24926_p1() {
    tmp_i_i_i394_cast_fu_24926_p1 = esl_zext<9,8>(loc_V_19_fu_24917_p4.read());
}

void particle_filter::thread_tmp_i_i_i410_cast_fu_24971_p1() {
    tmp_i_i_i410_cast_fu_24971_p1 = esl_zext<9,8>(loc_V_21_fu_24962_p4.read());
}

void particle_filter::thread_tmp_i_i_i_cast_fu_30908_p1() {
    tmp_i_i_i_cast_fu_30908_p1 = esl_zext<9,8>(loc_V_29_fu_30894_p4.read());
}

void particle_filter::thread_u1_1_fu_22068_p2() {
    u1_1_fu_22068_p2 = (tmp88_fu_22062_p2.read() ^ tmp_169_1_fu_22014_p3.read());
}

void particle_filter::thread_u1_3_0_1_fu_22662_p2() {
    u1_3_0_1_fu_22662_p2 = (tmp50_fu_22656_p2.read() ^ tmp_224_0_1_fu_22608_p3.read());
}

void particle_filter::thread_u1_3_0_2_fu_22926_p2() {
    u1_3_0_2_fu_22926_p2 = (tmp52_fu_22920_p2.read() ^ tmp_224_0_2_fu_22872_p3.read());
}

void particle_filter::thread_u1_3_0_3_fu_23190_p2() {
    u1_3_0_3_fu_23190_p2 = (tmp54_fu_23184_p2.read() ^ tmp_224_0_3_fu_23136_p3.read());
}

void particle_filter::thread_u1_3_1_1_fu_23718_p2() {
    u1_3_1_1_fu_23718_p2 = (tmp92_fu_23712_p2.read() ^ tmp_224_1_1_fu_23664_p3.read());
}

void particle_filter::thread_u1_3_1_2_fu_23982_p2() {
    u1_3_1_2_fu_23982_p2 = (tmp94_fu_23976_p2.read() ^ tmp_224_1_2_fu_23928_p3.read());
}

void particle_filter::thread_u1_3_1_3_fu_24246_p2() {
    u1_3_1_3_fu_24246_p2 = (tmp96_fu_24240_p2.read() ^ tmp_224_1_3_fu_24192_p3.read());
}

void particle_filter::thread_u1_3_1_fu_23454_p2() {
    u1_3_1_fu_23454_p2 = (tmp90_fu_23448_p2.read() ^ tmp_224_1_fu_23400_p3.read());
}

void particle_filter::thread_u1_3_fu_22398_p2() {
    u1_3_fu_22398_p2 = (tmp48_fu_22392_p2.read() ^ tmp_165_fu_22344_p3.read());
}

void particle_filter::thread_u1_fu_21788_p2() {
    u1_fu_21788_p2 = (tmp46_fu_21782_p2.read() ^ tmp_97_fu_21734_p3.read());
}

void particle_filter::thread_u2_1_fu_22200_p2() {
    u2_1_fu_22200_p2 = (tmp89_fu_22194_p2.read() ^ tmp_191_1_fu_22146_p3.read());
}

void particle_filter::thread_u2_3_0_1_fu_22794_p2() {
    u2_3_0_1_fu_22794_p2 = (tmp51_fu_22788_p2.read() ^ tmp_246_0_1_fu_22740_p3.read());
}

void particle_filter::thread_u2_3_0_2_fu_23058_p2() {
    u2_3_0_2_fu_23058_p2 = (tmp53_fu_23052_p2.read() ^ tmp_246_0_2_fu_23004_p3.read());
}

void particle_filter::thread_u2_3_0_3_fu_23322_p2() {
    u2_3_0_3_fu_23322_p2 = (tmp55_fu_23316_p2.read() ^ tmp_246_0_3_fu_23268_p3.read());
}

void particle_filter::thread_u2_3_1_1_fu_23850_p2() {
    u2_3_1_1_fu_23850_p2 = (tmp93_fu_23844_p2.read() ^ tmp_246_1_1_fu_23796_p3.read());
}

void particle_filter::thread_u2_3_1_2_fu_24114_p2() {
    u2_3_1_2_fu_24114_p2 = (tmp95_fu_24108_p2.read() ^ tmp_246_1_2_fu_24060_p3.read());
}

void particle_filter::thread_u2_3_1_3_fu_24378_p2() {
    u2_3_1_3_fu_24378_p2 = (tmp97_fu_24372_p2.read() ^ tmp_246_1_3_fu_24324_p3.read());
}

void particle_filter::thread_u2_3_1_fu_23586_p2() {
    u2_3_1_fu_23586_p2 = (tmp91_fu_23580_p2.read() ^ tmp_246_1_fu_23532_p3.read());
}

void particle_filter::thread_u2_3_fu_22530_p2() {
    u2_3_fu_22530_p2 = (tmp49_fu_22524_p2.read() ^ tmp_182_fu_22476_p3.read());
}

void particle_filter::thread_u2_fu_21920_p2() {
    u2_fu_21920_p2 = (tmp47_fu_21914_p2.read() ^ tmp_115_fu_21866_p3.read());
}

void particle_filter::thread_u5_fu_26136_p2() {
    u5_fu_26136_p2 = (tmp56_fu_26130_p2.read() ^ tmp_133_fu_26082_p3.read());
}

void particle_filter::thread_u6_fu_26320_p2() {
    u6_fu_26320_p2 = (tmp57_fu_26314_p2.read() ^ tmp_153_fu_26250_p4.read());
}

void particle_filter::thread_umax_fu_21438_p3() {
    umax_fu_21438_p3 = (!icmp1_reg_32551.read()[0].is_01())? sc_lv<32>(): ((icmp1_reg_32551.read()[0].to_bool())? state_count.read(): ap_const_lv32_1);
}

void particle_filter::thread_underflow_1_fu_27904_p2() {
    underflow_1_fu_27904_p2 = (sign_assign_1_reg_35063.read() & brmerge97_i_reg_35080.read());
}

void particle_filter::thread_underflow_2_fu_28006_p2() {
    underflow_2_fu_28006_p2 = (isneg_2_reg_35100.read() & tmp_319_fu_28001_p2.read());
}

void particle_filter::thread_underflow_3_fu_28188_p2() {
    underflow_3_fu_28188_p2 = (brmerge39_i_fu_28182_p2.read() & isneg_3_reg_35139.read());
}

void particle_filter::thread_underflow_3_not_fu_28254_p2() {
    underflow_3_not_fu_28254_p2 = (underflow_3_reg_35189.read() ^ ap_const_lv1_1);
}

void particle_filter::thread_underflow_4_fu_28198_p2() {
    underflow_4_fu_28198_p2 = (isneg_4_reg_35163.read() & tmp_328_fu_28193_p2.read());
}

void particle_filter::thread_underflow_5_1_fu_29827_p2() {
    underflow_5_1_fu_29827_p2 = (sign_assign_2_1_fu_29789_p3.read() & brmerge97_i2_1_fu_29821_p2.read());
}

void particle_filter::thread_underflow_5_fu_29752_p2() {
    underflow_5_fu_29752_p2 = (sign_assign_2_fu_29719_p3.read() & brmerge97_i2_fu_29747_p2.read());
}

void particle_filter::thread_underflow_6_1_fu_30078_p2() {
    underflow_6_1_fu_30078_p2 = (tmp_520_fu_30052_p3.read() & tmp_551_1_fu_30072_p2.read());
}

void particle_filter::thread_underflow_6_fu_30015_p2() {
    underflow_6_fu_30015_p2 = (tmp_482_fu_29989_p3.read() & tmp_373_fu_30009_p2.read());
}

void particle_filter::thread_underflow_8_1_fu_30318_p2() {
    underflow_8_1_fu_30318_p2 = (tmp_524_fu_30292_p3.read() & tmp_577_1_fu_30312_p2.read());
}

void particle_filter::thread_underflow_8_fu_30251_p2() {
    underflow_8_fu_30251_p2 = (tmp_486_fu_30225_p3.read() & tmp_378_fu_30245_p2.read());
}

void particle_filter::thread_underflow_fu_27048_p2() {
    underflow_fu_27048_p2 = (sign_assign_fu_27016_p3.read() & brmerge97_i1_fu_27043_p2.read());
}

void particle_filter::thread_weights_0_address0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read())))) {
        weights_0_address0 = ap_reg_ppstg_weights_0_addr_reg_34303_pp2_it3.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        weights_0_address0 =  (sc_lv<13>) (newIndex9_fu_28316_p1.read());
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
            weights_0_d0 = storemerge_1_fu_25923_p3.read();
        } else if (esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) {
            weights_0_d0 = storemerge_fu_25909_p3.read();
        } else {
            weights_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        weights_0_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_weights_0_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp3_reg_34298_pp2_it3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read()) && 
          !esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond4_reg_34313_pp2_it3.read())))) {
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
        weights_1_address0 = ap_reg_ppstg_weights_1_addr_reg_34308_pp2_it3.read();
    } else if ((esl_seteq<1,8,8>(ap_ST_pp4_stg0_fsm_92, ap_CS_fsm.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp4_it0.read()))) {
        weights_1_address0 =  (sc_lv<13>) (newIndex9_fu_28316_p1.read());
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
            weights_1_d0 = storemerge_1_fu_25923_p3.read();
        } else if (esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read())) {
            weights_1_d0 = storemerge_fu_25909_p3.read();
        } else {
            weights_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
        }
    } else {
        weights_1_d0 =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void particle_filter::thread_weights_1_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg3_fsm_28, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_icmp3_reg_34298_pp2_it3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it3.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it3.read()) && 
          esl_seteq<1,8,8>(ap_ST_pp2_stg5_fsm_30, ap_CS_fsm.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_cond4_reg_34313_pp2_it3.read())))) {
        weights_1_we0 = ap_const_logic_1;
    } else {
        weights_1_we0 = ap_const_logic_0;
    }
}

void particle_filter::thread_weights_chunk_sums_load_phi_fu_25975_p3() {
    weights_chunk_sums_load_phi_fu_25975_p3 = (!tmp_402_fu_25943_p1.read()[0].is_01())? sc_lv<32>(): ((tmp_402_fu_25943_p1.read()[0].to_bool())? weights_chunk_sums_1_reg_19301.read(): weights_chunk_sums_reg_19313.read());
}

void particle_filter::thread_weights_chunk_sums_phi_fu_19317_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_reg_ppiten_pp2_it4.read()) && 
         esl_seteq<1,8,8>(ap_ST_pp2_stg4_fsm_29, ap_CS_fsm.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_ppstg_exitcond3_reg_34279_pp2_it4.read()))) {
        weights_chunk_sums_phi_fu_19317_p4 = weights_chunk_sums_0_reg_34369.read();
    } else {
        weights_chunk_sums_phi_fu_19317_p4 = weights_chunk_sums_reg_19313.read();
    }
}

void particle_filter::thread_weights_load_0_phi_fu_28346_p3() {
    weights_load_0_phi_fu_28346_p3 = (!icmp6_reg_35226.read()[0].is_01())? sc_lv<32>(): ((icmp6_reg_35226.read()[0].to_bool())? weights_0_q0.read(): weights_1_q0.read());
}

void particle_filter::thread_weights_load_1_phi_fu_28353_p3() {
    weights_load_1_phi_fu_28353_p3 = (!cond9_reg_35243.read()[0].is_01())? sc_lv<32>(): ((cond9_reg_35243.read()[0].to_bool())? weights_0_q0.read(): weights_1_q0.read());
}

void particle_filter::thread_weights_partial_sums6_2_fu_25967_p3() {
    weights_partial_sums6_2_fu_25967_p3 = (!tmp_402_fu_25943_p1.read()[0].is_01())? sc_lv<32>(): ((tmp_402_fu_25943_p1.read()[0].to_bool())? weights_partial_sums_reg_19336.read(): weights_partial_sums6_fu_1452.read());
}

void particle_filter::thread_weights_partial_sums_0_write_assign_fu_31085_p3() {
    weights_partial_sums_0_write_assign_fu_31085_p3 = (!write_flag_fu_1460.read()[0].is_01())? sc_lv<32>(): ((write_flag_fu_1460.read()[0].to_bool())? weights_partial_sums_s_fu_1456.read(): weights_partial_sums_0_read.read());
}

void particle_filter::thread_weights_partial_sums_2_fu_25959_p3() {
    weights_partial_sums_2_fu_25959_p3 = (!tmp_402_fu_25943_p1.read()[0].is_01())? sc_lv<32>(): ((tmp_402_fu_25943_p1.read()[0].to_bool())? weights_partial_sums_s_fu_1456.read(): weights_partial_sums_reg_19336.read());
}

void particle_filter::thread_weights_sum_1_fu_27134_p3() {
    weights_sum_1_fu_27134_p3 = (!grp_fu_20142_p2.read()[0].is_01())? sc_lv<32>(): ((grp_fu_20142_p2.read()[0].to_bool())? ap_const_lv32_3F800000: weights_partial_sums_reg_19336.read());
}

void particle_filter::thread_write_flag_2_fu_25953_p2() {
    write_flag_2_fu_25953_p2 = (write_flag_fu_1460.read() | not_i6_t_fu_25947_p2.read());
}

void particle_filter::thread_x_V_0_1_fu_25235_p4() {
    x_V_0_1_fu_25235_p4 = p_Val2_36_fu_25228_p3.read().range(31, 23);
}

void particle_filter::thread_x_V_0_2_fu_25357_p4() {
    x_V_0_2_fu_25357_p4 = p_Val2_40_fu_25350_p3.read().range(31, 23);
}

void particle_filter::thread_x_V_0_3_fu_25479_p4() {
    x_V_0_3_fu_25479_p4 = p_Val2_42_fu_25472_p3.read().range(31, 23);
}

void particle_filter::thread_x_V_fu_25113_p4() {
    x_V_fu_25113_p4 = p_Val2_29_fu_25106_p3.read().range(31, 23);
}

void particle_filter::thread_xs_exp_V_fu_30785_p3() {
    xs_exp_V_fu_30785_p3 = (!p_Result_s_166_reg_36177.read()[0].is_01())? sc_lv<8>(): ((p_Result_s_166_reg_36177.read()[0].to_bool())? loc_V_27_reg_36215.read(): loc_V_25_reg_36186.read());
}

void particle_filter::thread_xs_sig_V_1_fu_30794_p3() {
    xs_sig_V_1_fu_30794_p3 = (!p_Result_s_166_reg_36177.read()[0].is_01())? sc_lv<23>(): ((p_Result_s_166_reg_36177.read()[0].to_bool())? loc_V_28_reg_36220.read(): loc_V_26_reg_36194.read());
}

void particle_filter::thread_xs_sig_V_fu_30804_p2() {
    xs_sig_V_fu_30804_p2 = (xs_sig_V_1_fu_30794_p3.read() & tmp_42_i_fu_30799_p2.read());
}

void particle_filter::thread_xs_sign_V_fu_30790_p2() {
    xs_sign_V_fu_30790_p2 = (p_Result_s_166_reg_36177.read() & p_Result_54_reg_36210.read());
}

}

