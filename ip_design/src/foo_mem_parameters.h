#include <stdint.h>
#include <cstdlib>
#include "ap_int.h"

#include "hls_math.h"
#include <hls_math.h>

#include "ap_utils.h"
//#include "systemc.h"

//architecture parameters
#define MEM_CPY 1
#define SR 0
#define M_ti 2
#define M_resampling 2
#define M_ti_data 4
const uint32_t seeds_dim = 30;
const uint32_t rng_init_cycles = 1000;
const uint32_t M_ti_int = (uint32_t)M_ti;

#define PRAGMA_SUB(x) _Pragma (#x)
#define PRAGMA_HLS(x) PRAGMA_SUB(x)

//model parameters - fixed during runtime
const uint32_t state_dim = 1;
const uint32_t obs_dim = 4;
const uint32_t state_param_rand_dim = 1;
const uint32_t obs_param_rand_dim = 1;
const uint32_t state_param_fixed_dim_one_element = 1;
const uint32_t obs_param_fixed_dim_one_element = 4;
const uint32_t theta_dim = 2;//state_param_rand_dim + obs_param_rand_dim;
const uint32_t prior_parameters_dim = 5;

//other parameters - variable but with some maximum
const uint32_t particles_max_size = 16384;
const uint32_t state_count_max_size = 16384;
//const uint32_t state_param_fixed_dim = 1;
const uint32_t state_param_fixed_dim_max_size = state_count_max_size*state_param_fixed_dim_one_element;
//const uint32_t obs_param_fixed_dim = obs_dim;
const uint32_t obs_param_fixed_dim_max_size = state_count_max_size*obs_param_fixed_dim_one_element;
const uint32_t state_param_dim_max_size = state_param_fixed_dim_max_size + state_param_rand_dim;
const uint32_t obs_param_dim_max_size = obs_param_fixed_dim_max_size + obs_param_rand_dim; //2050; //fixed: n for all observations, random: 1
const uint32_t data_dim_max_size = state_count_max_size * obs_dim; //*state_dim

const uint32_t chunk_size_max = (particles_max_size*state_dim)/(M_ti_int); //block partitioning
const uint32_t chunk_size_particles_max = (particles_max_size)/(M_ti_int); //block partitioning
const uint32_t chunk_size_data_max = (data_dim_max_size)/(obs_dim); //cyclic partitioning

//constant values
const data_t FP_inf_neg = -1e30;
const data_t FP_inf_pos = 1e30;
const data_t FP_power_min = -68.0f;
const data_t FP_power_max = 68.0f;

//type definitions
//typedef ap_uint<log2_particles_max_size> uint_resampling;

typedef ap_uint<9> data_t_integers;
const ap_uint<9> mask_lik_0 = 0x000;
const ap_uint<9> mask_lik_1 = 0x001;


typedef int uint_resampling;

const uint32_t log2_particles_max_size = 16;
#define INTEGERLENGTH_FIX log2_particles_max_size
#define WORDLENGTH_FIX 28
#define WORDLENGTH_FIX_M_1 27
#define INTEGERLENGTH_FIX_REDUCED 2
#define WORDLENGTH_FIX_REDUCED 14
#define WORDLENGTH_FIX_REDUCED_M_1 13
typedef ap_fixed<WORDLENGTH_FIX,INTEGERLENGTH_FIX,AP_TRN_ZERO,AP_SAT> data_t_fixed;
typedef ap_fixed<WORDLENGTH_FIX_REDUCED,INTEGERLENGTH_FIX_REDUCED,AP_TRN_ZERO,AP_SAT> data_t_fixed_reduced;

const ap_uint<WORDLENGTH_FIX> mask_int_pre = 0xFFFF000;
const ap_uint<WORDLENGTH_FIX> mask_1_pre = 0x0001000;
const ap_uint<WORDLENGTH_FIX> mask_0_pre = 0x0000000;
const ap_uint<WORDLENGTH_FIX> mask_frac_pre = 0x0000FFF;

const ap_uint<WORDLENGTH_FIX_REDUCED> mask_1_reduced_pre = 0x1000;

const uint32_t mask_ones = 0xFFFFFFFF;

const uint32_t const_offset = 0;
