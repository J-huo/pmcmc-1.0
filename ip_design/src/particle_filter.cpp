#include "foo_data.h"
#include "foo_mem_parameters.h"
#include "gauss.h"

//using namespace hls;

void transition_density(data_t *previous_particle, data_t *proposed_particle, rng_state_t *rng_state, uint32_t k, uint32_t t, uint32_t chunk_size_max, data_t *state_parameters){

	//transition related
		data_t delta, s_t;
		data_t s = state_parameters[state_param_fixed_dim];
		delta = state_parameters[t];
		s_t = sqrtf( s * s * delta );

				uint32_t u1 = __random32(&rng_state[k*2]);
				uint32_t u2 = __random32(&rng_state[k*2+1]);
				data_t rn = approx(u1, u2);
				//for (unsigned int q=0; q<theta_dim; q++){
					*proposed_particle = *previous_particle + s_t * rn;
				//}

}

data_t log_factorial(data_t_integers x){
	switch(x){
	    case 0 :
	        return 0.0f;
	    case 1 :
	        return 0.0f;
	    case 2 :
	        return 0.693147180559945f;
	    case 3 :
	        return 1.791759469228055f;
	    case 4 :
	        return 3.178053830347946f;
	    case 5 :
	        return 4.787491742782046f;
	    case 6 :
	        return 6.579251212010101f;
	    case 7 :
	        return 8.525161361065415f;
	    case 8 :
	        return 10.604602902745250f;
	    case 9 :
	        return 12.801827480081469f;
	    case 10 :
	        return 15.104412573075516f;
	    case 11 :
	    	return 17.502307845873887f;
	    case 12 :
	    	return 19.987214495661885f;
	    case 13 :
	    	        return 22.552163853123425f;
	    case 14 :
	    	        return 25.191221182738680f;
	    case 15 :
	    	        return 27.899271383840890f;
	    case 16 :
	    	        return 30.671860106080672f;
	    case 17 :
	    	        return 33.505073450136890f;
	    case 18 :
	    	        return 36.395445208033050f;
	    case 19 :
	    	        return 39.339884187199495f;
	    case 20 :
	    	        return 42.335616460753485f;
	    case 21 :
	    	        return 45.380138898476910f;
	    case 22 :
	    	        return 48.471181351835230f;
	    case 23 :
	    	        return 51.606675567764380f;
	    case 24 :
	    	        return 54.784729398112320f;
	    case 25 :
	    	        return 58.003605222980520f;
	    case 26 :
	    	        return 61.261701761002000f;
	    case 27 :
	    	        return 64.557538627006340f;
	    case 28 :
	    	        return 67.889743137181540f;
	    case 29 :
	    	        return 71.257038967168010f;
	    case 30 :
	    	        return 74.658236348830160f;
	    case 31 :
	    	        return 78.092223553315300f;
	    case 32 :
	    	        return 81.557959456115040f;
	    case 33 :
	    	        return 85.054467017581520f;
	    case 34 :
	    	        return 88.580827542197680f;
	    case 35 :
	    	        return 92.136175603687100f;
	    case 36 :
	    	        return 95.7196945421432f;
	    case 37 :
	    	        return 99.3306124547874f;
	    case 38 :
	    	        return 102.9681986145138f;
	    case 39 :
	    	        return 106.631760260643f;
	    case 40 :
	    	        return 110.320639714757f;
	    case 41 :
	    	        return 114.034211781462f;
	    case 42 :
	    	        return 117.771881399745f;
	    case 43 :
	    	        return 121.533081515439f;
	    case 44 :
	    	        return 125.317271149357f;
	    case 45 :
	    	        return 129.123933639127f;
	    case 46 :
	    	        return 132.952575035616f;
	    case 47 :
	    	        return 136.802722637326f;
	    case 48 :
	    	        return 140.673923648234f;
	    case 49 :
	    	        return 144.565743946345f;
	    case 50 :
	    	        return 148.477766951773f;
	    case 51 :
	    	        return 152.409592584497f;
	    case 52 :
	    	        return 156.360836303079f;
	    case 53 :
	    	        return 160.331128216631f;
	    case 54 :
	    	        return 164.320112263195f;
	    case 55 :
	    	        return 168.327445448428f;
	    case 56 :
	    	        return 172.352797139163f;
	    case 57 :
	    	        return 176.395848406997f;
	    case 58 :
	    	        return 180.456291417544f;
	    case 59 :
	    	        return 184.533828861449f;
	    case 60 :
	    	        return 188.628173423672f;
	    case 61 :
	    	        return 192.739047287845f;
	    case 62 :
	    	        return 196.866181672890f;
	    case 63 :
	    	        return 201.009316399282f;
	    case 64 :
	    	        return 205.168199482641f;
	    case 65 :
	    	        return 209.342586752537f;
	    case 66 :
	    	        return 213.532241494563f;
	    case 67 :
	    	        return 217.736934113954f;
	    case 68 :
	    	        return 221.956441819130f;
	    case 69 :
	    	        return 226.190548323728f;
	    case 70 :
	    	        return 230.439043565777f;
	    case 71 :
	    	        return 234.701723442818f;
	    case 72 :
	    	        return 238.978389561834f;
	    case 73 :
	    	        return 243.268849002983f;
	    case 74 :
	    	        return 247.572914096187f;
	    case 75 :
	    	        return 251.890402209723f;
	    case 76 :
	    	        return 256.221135550010f;
	    case 77 :
	    	        return 260.564940971863f;
	    case 78 :
	    	        return 264.921649798553f;
	    case 79 :
	    	        return 269.291097651020f;
	    case 80 :
	    	        return 273.673124285694f;
	    case 81 :
	    	        return 278.067573440366f;
	    case 82 :
	    	        return 282.474292687630f;
	    case 83 :
	    	        return 286.893133295427f;
	    case 84 :
	    	        return 291.323950094270f;
	    case 85 :
	    	        return 295.766601350761f;
	    case 86 :
	    	        return 300.220948647014f;
	    case 87 :
	    	        return 304.686856765669f;
	    case 88 :
	    	        return 309.164193580147f;
	    case 89 :
	    	        return 313.652829949879f;
	    case 90 :
	    	        return 318.152639620209f;
	    case 91 :
	    	        return 322.663499126726f;
	    case 92 :
	    	        return 327.185287703775f;
	    case 93 :
	    	        return 331.717887196929f;
	    case 94 :
	    	        return 336.261181979198f;
	    case 95 :
	    	        return 340.815058870799f;
	    case 96 :
	    	        return 345.379407062267f;
	    case 97 :
	    	        return 349.954118040770f;
	    case 98 :
	    	        return 354.539085519441f;
	    case 99 :
	    	        return 359.134205369575f;
	    case 100 :
	    	        return 363.739375555563f;
	    case 101 :
	    	        return 368.354496072405f;
	    case 102 :
	    	        return 372.979468885689f;
	    case 103 :
	    	        return 377.614197873919f;
	    case 104 :
	    	        return 382.258588773060f;
	    case 105 :
	    	        return 386.912549123218f;
	    case 106 :
	    	        return 391.575988217330f;
	    case 107 :
	    	        return 396.248817051792f;
	    case 108 :
	    	        return 400.930948278916f;
	    case 109 :
	    	        return 405.622296161145f;
	    case 110 :
	    	        return 410.322776526937f;
	    case 111 :
	    	        return 415.032306728250f;
	    case 112 :
	    	        return 419.750805599545f;
	    case 113 :
	    	        return 424.478193418257f;
	    case 114 :
	    	        return 429.214391866652f;
	    case 115 :
	    	        return 433.959323995015f;
	    case 116 :
	    	        return 438.712914186121f;
	    case 117 :
	    	        return 443.475088120919f;
	    case 118 :
	    	        return 448.245772745385f;
	    case 119 :
	    	        return 453.024896238496f;
	    case 120 :
	    	        return 457.812387981278f;
	    case 121 :
	    	        return 462.608178526875f;
	    case 122 :
	    	        return 467.412199571608f;
	    case 123 :
	    	        return 472.224383926981f;
	    case 124 :
	    	        return 477.044665492586f;
	    case 125 :
	    	        return 481.872979229888f;
	    case 126 :
	    	        return 486.709261136839f;
	    case 127 :
	    	        return 491.553448223298f;
	    case 128 :
	    	        return 496.405478487218f;
	    case 129 :
	    	        return 501.265290891579f;
	    case 130 :
	    	        return 506.132825342035f;
	    case 131 :
	    	        return 511.008022665236f;
	    case 132 :
	    	        return 515.890824587822f;
	    case 133 :
	    	        return 520.781173716044f;
	    case 134 :
	    	        return 525.679013515995f;
	    case 135 :
	    	        return 530.584288294434f;
	    case 136 :
	    	        return 535.496943180170f;
	    case 137 :
	    	        return 540.416924105998f;
	    case 138 :
	    	        return 545.344177791155f;
	    case 139 :
	    	        return 550.278651724286f;
	    case 140 :
	    	        return 555.220294146895f;
	    case 141 :
	    	        return 560.169054037273f;
	    case 142 :
	    	        return 565.124881094874f;
	    case 143 :
	    	        return 570.087725725134f;
	    case 144 :
	    	        return 575.057539024710f;
	    case 145 :
	    	        return 580.034272767131f;
	    case 146 :
	    	        return 585.017879388839f;
	    case 147 :
	    	        return 590.008311975618f;
	    case 148 :
	    	        return 595.005524249382f;
	    case 149 :
	    	        return 600.009470555327f;
	    case 150 :
	    	        return 605.020105849424f;
	    case 151 :
	    	        return 610.037385686239f;
	    case 152 :
	    	        return 615.061266207085f;
	    case 153 :
	    	        return 620.091704128477f;
	    case 154 :
	    	        return 625.128656730891f;
	    case 155 :
	    	        return 630.172081847810f;
	    case 156 :
	    	        return 635.221937855060f;
	    case 157 :
	    	        return 640.278183660408f;
	    case 158 :
	    	        return 645.340778693435f;
	    case 159 :
	    	        return 650.409682895655f;
	    case 160 :
	    	        return 655.484856710889f;
	    case 161 :
	    	        return 660.566261075874f;
	    case 162 :
	    	        return 665.653857411106f;
	    case 163 :
	    	        return 670.747607611913f;
	    case 164 :
	    	        return 675.847474039737f;
	    case 165 :
	    	        return 680.953419513637f;
	    case 166 :
	    	        return 686.065407301994f;
	    case 167 :
	    	        return 691.183401114411f;
	    case 168 :
	    	        return 696.307365093814f;
	    case 169 :
	    	        return 701.437263808737f;
	    case 170 :
	    	        return 706.573062245787f;
	    default:
	    			return FP_inf_pos;
	    /*
	    case 171 :
	    	        return 78.092223553315300f;
	    case 172 :
	    	        return 78.092223553315300f;
	    case 173 :
	    	        return 78.092223553315300f;
	    case 174 :
	    	        return 78.092223553315300f;
	    case 175 :
	    	        return 78.092223553315300f;
	    case 176 :
	    	        return 78.092223553315300f;
	    case 177 :
	    	        return 78.092223553315300f;
	    case 178 :
	    	        return 78.092223553315300f;
	    case 179 :
	    	        return 78.092223553315300f;
	    case 180 :
	    	        return 78.092223553315300f;
	    case 181 :
	    	        return 78.092223553315300f;
	    case 182 :
	    	        return 78.092223553315300f;
	    case 183 :
	    	        return 78.092223553315300f;
	    case 184 :
	    	        return 78.092223553315300f;
	    case 185 :
	    	        return 78.092223553315300f;
	    case 186 :
	    	        return 78.092223553315300f;
	    case 187 :
	    	        return 78.092223553315300f;
	    case 188 :
	    	        return 78.092223553315300f;
	    case 189 :
	    	        return 78.092223553315300f;
	    case 190 :
	    	        return 78.092223553315300f;
	    case 191 :
	    	        return 78.092223553315300f;
	    case 192 :
	    	        return 78.092223553315300f;
	    case 193 :
	    	        return 78.092223553315300f;
	    case 194 :
	    	        return 78.092223553315300f;
	    case 195 :
	    	        return 78.092223553315300f;
	    case 196 :
	    	        return 78.092223553315300f;
	    case 197 :
	    	        return 78.092223553315300f;
	    case 198 :
	    	        return 78.092223553315300f;
	    case 199 :
	    	        return 78.092223553315300f;
	    case 200 :
	    	        return 78.092223553315300f;
	    case 201 :
	    	        return 78.092223553315300f;
	    case 202 :
	    	        return 78.092223553315300f;
	    case 203 :
	    	        return 78.092223553315300f;
	    case 204 :
	    	        return 78.092223553315300f;
	    case 205 :
	    	        return 78.092223553315300f;
	    case 206 :
	    	        return 78.092223553315300f;
	    case 207 :
	    	        return 78.092223553315300f;
	    case 208 :
	    	        return 78.092223553315300f;
	    case 209 :
	    	        return 78.092223553315300f;
	    case 210 :
	    	        return 78.092223553315300f;
	    case 211 :
	    	        return 78.092223553315300f;
	    case 212 :
	    	        return 78.092223553315300f;
	    case 213 :
	    	        return 78.092223553315300f;
	    case 214 :
	    	        return 78.092223553315300f;
	    case 215 :
	    	        return 78.092223553315300f;
	    case 216 :
	    	        return 78.092223553315300f;
	    case 217 :
	    	        return 78.092223553315300f;
	    case 218 :
	    	        return 78.092223553315300f;
	    case 219 :
	    	        return 78.092223553315300f;
	    case 220 :
	    	        return 78.092223553315300f;
	    case 221 :
	    	        return 78.092223553315300f;
	    case 222 :
	    	        return 78.092223553315300f;
	    case 223 :
	    	        return 78.092223553315300f;
	    case 224 :
	    	        return 78.092223553315300f;
	    case 225 :
	    	        return 78.092223553315300f;
	    case 226 :
	    	        return 78.092223553315300f;
	    case 227 :
	    	        return 78.092223553315300f;
	    case 228 :
	    	        return 78.092223553315300f;
	    case 229 :
	    	        return 78.092223553315300f;
	    case 230 :
	    	        return 78.092223553315300f;
	    case 231 :
	    	        return 78.092223553315300f;
	    case 232 :
	    	        return 78.092223553315300f;
	    case 233 :
	    	        return 78.092223553315300f;
	    case 234 :
	    	        return 78.092223553315300f;
	    case 235 :
	    	        return 78.092223553315300f;
	    case 236 :
	    	        return 78.092223553315300f;
	    case 237 :
	    	        return 78.092223553315300f;
	    case 238 :
	    	        return 78.092223553315300f;
	    case 239 :
	    	        return 78.092223553315300f;
	    case 240 :
	    	        return 78.092223553315300f;
	    case 241 :
	    	        return 78.092223553315300f;
	    case 242 :
	    	        return 78.092223553315300f;
	    case 243 :
	    	        return 78.092223553315300f;
	    case 244 :
	    	        return 78.092223553315300f;
	    case 245 :
	    	        return 78.092223553315300f;
	    case 246 :
	    	        return 78.092223553315300f;
	    case 247 :
	    	        return 78.092223553315300f;
	    case 248 :
	    	        return 78.092223553315300f;
	    case 249 :
	    	        return 78.092223553315300f;
	    case 250 :
	    	        return 78.092223553315300f;
	    case 251 :
	    	        return 78.092223553315300f;
	    case 252 :
	    	        return 78.092223553315300f;
	    case 253 :
	    	        return 78.092223553315300f;
	    case 254 :
	    	        return 78.092223553315300f;
		*/


	}
}
/*
void transition_equation(data_t *particles, uint32_t P, uint32_t state_dim, uint32_t state_param_fixed_dim,
		uint32_t state_param_rand_dim, data_t *state_parameters, uint32_t t, rng_state_t *rng_state, uint32_t seeds_dim);

void likelihood_equation(data_t *weights, data_t *log_lik_out, uint32_t *index_saved, data_t *weights_sum, data_t *weights_partial_sums,  uint32_t P, uint32_t state_dim, uint32_t obs_dim, uint32_t obs_param_fixed_dim,
		uint32_t obs_param_rand_dim, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *particles, data_t *log_lik_particle, data_t *data, uint32_t t, rng_state_t *rng_state, uint32_t seeds_dim);

void resampling(data_t *particles, data_t *particles_temp, uint32_t P, data_t *weights, data_t weights_sum, data_t *weights_partial_sums, uint_resampling *resampling_indexes, uint_resampling *replication_factors, uint32_t state_dim, data_t rn_resampling);
*/

void particle_filter(data_t *log_lik_out, data_t *particles_saved_out, uint32_t P, data_t *init_particles,
		data_t *particles, data_t *particles_temp, data_t *log_lik_particle, data_t *weights, data_t *weights_partial_sums, uint_resampling *resampling_indexes, uint_resampling *replication_factors,
		uint32_t state_count, uint32_t state_dim, uint32_t obs_dim, uint32_t state_param_fixed_dim, uint32_t state_param_rand_dim,
		uint32_t obs_param_fixed_dim, uint32_t obs_param_rand_dim, data_t *state_parameters,
		data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, rng_state_t *rng_state, uint32_t seeds_dim)
{

	uint32_t chunk_size_true = (P*state_dim)/M_ti_int;
	uint32_t chunk_size_particles_true = (P)/M_ti_int;

	//particle filter related
	uint32_t index_saved, u1, u2, u3, u4, u5, u6;
	data_t rn_resampling, rn_particles_saved, weights_sum, rn;//, rn_array;
	uint32_t index_saved_keep = 0;
	uint32_t block, index;
	//data_t proposed_particle[theta_dim];
	//data_t previous_particle[theta_dim];
	data_t particle_common;

	//transition related
	//data_t delta, s_t;
	//data_t s = state_parameters[state_param_fixed_dim];

	//likelihood related
	data_t s_o = obs_parameters_rand[0];
	data_t temp, temp2, temp3[obs_dim], p, log_lik_particle_max, weights_mean, sum1, sum2, sum[M_ti_int], log_lik_particle_max_keep;
	data_t_integers n, x, n_minus_x;
	data_t weights_chunk_sums[M_ti_int];
	log_lik_particle_max = FP_inf_neg;

	data_t n_full[obs_dim], x_full[obs_dim];
	
	//resampling related
	data_t_fixed temp_res, temp_res_1, fact, r, U[M_ti_int], mask_int, mask_1, mask_0, mask_frac, rep;
	data_t_fixed_reduced mask_1_reduced;
	mask_int(WORDLENGTH_FIX_M_1,0) = mask_int_pre(WORDLENGTH_FIX_M_1,0);
	mask_1(WORDLENGTH_FIX_M_1,0) = mask_1_pre(WORDLENGTH_FIX_M_1,0);
	mask_0(WORDLENGTH_FIX_M_1,0) = mask_0_pre(WORDLENGTH_FIX_M_1,0);
	mask_frac(WORDLENGTH_FIX_M_1,0) = mask_frac_pre(WORDLENGTH_FIX_M_1,0);
	mask_1_reduced(WORDLENGTH_FIX_REDUCED_M_1,0) = mask_1_reduced_pre(WORDLENGTH_FIX_REDUCED_M_1,0);

	uint32_t o;
	uint32_t block_replicated;
	int32_t index_replicated;
	data_t_fixed rn_resampling_fixed;

	//initialise particle set
	particles_init_loop: for (unsigned int i = 0; i < chunk_size_true; i++){
#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128
		particles_init_parallelism_loop: for (unsigned int k = 0; k < M_ti_int; k++){
		//if (i%chunk_size<true_chunk_size)
			particles_temp[k*chunk_size_max + i] = init_particles[k*chunk_size_max + i];
		}
	}

	//choose random particle from 1st time step
	index_saved = 0;//(uint32_t)floorf(PF_resampling_rn[0] * P);
	block = index_saved / chunk_size_particles_true;
	index = index_saved % chunk_size_particles_true;
	particles_saved_1st_loop: for (unsigned int i = 0; i < state_dim; i++)
				particles_saved_out[i] = particles_temp[block*chunk_size_max + index*state_dim + i];

	////IMPLIED
	////set likelihood of 1st time step = 0.0
	//log_lik_out = 0.0f;
	int counter_1 = 0, counter_2 = 0, counter_3 = 0, counter_4 = 0, counter_5 = 0, counter_6 = 0;

	//time loop
	time_loop: for (unsigned int t = 1; t<state_count; t++){
#pragma HLS LOOP_TRIPCOUNT min=1000 max=1000 avg=1000
		counter_1 = 0;
		counter_2 = 0;
		counter_3 = 0;
		counter_4 = 0;




		index_saved = 0;
		index_saved_keep = 0;
		log_lik_particle_max = FP_inf_neg;

		//////////////////////TRANSITION AND LIKELIHOOD PARTS/////////////////////////////////////////////////////
		n_x_loop:for (uint32_t i=0;i<obs_dim;i++){
			n_full[i] = obs_parameters_fixed[i*chunk_size_data_max + t];
			x_full[i] = data[i*chunk_size_data_max + t];
		}

		main_loop: for (unsigned int i=0; i<chunk_size_true; i++){
#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128
			parallelism_loop: for (unsigned int k=0; k<M_ti_int; k++){

				//for (unsigned int q=0; q<theta_dim; q++){
				//	previous_particle[q] = particles_temp[k*chunk_size_max + i + q];
				//}
				//previous_particle = particles_temp[k*chunk_size_max + i];
				//transition_density(previous_particle, proposed_particle, rng_state, k, t, chunk_size_max, state_parameters);
				transition_density(&particles_temp[k*chunk_size_max + i], &particles[k*chunk_size_max + i], rng_state, k, t, chunk_size_max, state_parameters);
				//u1 = __random32(&rng_state[k*2]);
				//u2 = __random32(&rng_state[k*2+1]);
				//rn = approx(u1, u2);
				particle_common = particles[k*chunk_size_max + i];// + s_t * rn;

				//for (unsigned int q=0; q<theta_dim; q++){
				//	particles[k*chunk_size_max + i + q] = proposed_particle[q]; //particle_common;
				//}

				obs_parallelism_loop: for (unsigned int j=0; j<obs_dim; j++){

					u3 = __random32(&rng_state[M_ti_int*2 + k*obs_dim*2 + j*2]);
					u4 = __random32(&rng_state[M_ti_int*2 + k*obs_dim*2 + j*2 + 1]);
					rn = approx(u3, u4);
					//temp = proposed_particle[0] + s_o * rn;//particles[k*chunk_size_max + i] + s_o * rn;//rn[k*chunk_size_data + i*obs_dim_max_size + j]; // * PF_likelihood_rn[t*P*obs_dim + i*obs_dim + j];
					temp = particle_common + s_o * rn;
					if ( temp > FP_power_max ){
						//temp2 = FP_inf_pos;
						p = 1.0f;
					}
					else if ( temp < FP_power_min ){
						//temp2 = 0.0f;
						p = 0.0f;
					}
					else{
						temp2 = expf(temp);
						p = temp2 / ( temp2 + 1.0f );

					}


n = (data_t_integers)n_full[j];
x = (data_t_integers)x_full[j];
					n_minus_x = n - x;
					if (p==0.0f){
						if ( x == mask_lik_0 ){
							temp3[j] = 0.0f;
						}
						else{
							temp3[j] = FP_inf_neg;
						}
					}
					else if (p==1.0f){
						if ( x == n ){
							temp3[j] = 0.0f;
						}
						else{
							temp3[j] = FP_inf_neg;
						}
					}
					else if ( x == 0 ){
						temp3[j] = ((data_t)n_minus_x)*logf(1.0f-p);
					}
					else if ( x == n ){
						temp3[j] = ((data_t)x)*logf(p);
					}
					else{
						temp3[j] = log_factorial(n) - log_factorial(x) - log_factorial(n_minus_x) + ((data_t)x)*logf(p) + ((data_t)n_minus_x)*logf(1.0f-p);
					}

					if (!(temp3[j] > FP_inf_neg)){
						temp3[j] = FP_inf_neg;
						#ifndef __SYNTHESIS__
						//printf("Negative Infinite temp\n");
						counter_1++;
						#endif
					}

				}

				sum1 = temp3[0] + temp3[1];
				sum2 = temp3[2] + temp3[3];
				sum[k] = sum1 + sum2;
				//log_lik_particle[k*chunk_size_max + i] = sum1 + sum2;

				//check for NaN and saturate
				if (!(sum[k] > FP_inf_neg)){
					log_lik_particle[k*chunk_size_particles_max + i] = FP_inf_neg;
					#ifndef __SYNTHESIS__
						//printf("Negative Infinite sub-loglikelihood\n");
					#endif
					counter_2++;
				}
				/*
				else if(!(sum[k] <= 0.0f)){
					log_lik_particle[k*chunk_size_particles_max + i] = FP_inf_neg;
					#ifndef __SYNTHESIS__
						//printf("Positive or NaN sub-loglikelihood\n");
					#endif
						//counter_3++;
				}
				*/
				else{
					log_lik_particle[k*chunk_size_particles_max + i] = sum[k];
				}



			}

			#if M_ti == 1

				log_lik_particle_max_keep = sum[0];
				index_saved_keep = 0*chunk_size_particles_max + i;

				//if (i%2==0){
				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 2

				//data_t log_lik_particle_max_temp[3];
				//						uint32_t index_saved_temp[3];

				if (sum[0] > sum[1]){
					log_lik_particle_max_keep = sum[0];
					index_saved_keep = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_keep = sum[1];
					index_saved_keep = 1*chunk_size_particles_max + i;
				}

				//if (i%2==0){
				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 4

				data_t log_lik_particle_max_temp[2];
				uint32_t index_saved_temp[2];

				if (sum[0] > sum[1]){
					log_lik_particle_max_temp[0] = sum[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = sum[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (sum[2] > sum[3]){
					log_lik_particle_max_temp[1] = sum[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = sum[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[0];
					index_saved_keep = index_saved_temp[0];
					//log_lik_particle_max_temp[0] = log_lik_particle_max_temp[0];
					//*index_saved[0] = *index_saved[0];
				}
				else{
					log_lik_particle_max_keep = log_lik_particle_max_temp[1];
					index_saved_keep = index_saved_temp[1];
				}

				//if (i%2==0){
				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 5

				data_t log_lik_particle_max_temp[3];
				uint32_t index_saved_temp[3];

				if (sum[0] > sum[1]){
					log_lik_particle_max_temp[0] = sum[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = sum[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (sum[2] > sum[3]){
					log_lik_particle_max_temp[1] = sum[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = sum[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_temp[2] = log_lik_particle_max_temp[0];
					index_saved_temp[2] = index_saved_temp[0];
					//log_lik_particle_max_temp[0] = log_lik_particle_max_temp[0];
					//*index_saved[0] = *index_saved[0];
				}
				else{
					log_lik_particle_max_temp[2] = log_lik_particle_max_temp[1];
					index_saved_temp[2] = index_saved_temp[1];
				}

				if (log_lik_particle_max_temp[2] > sum[4]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[2];
					index_saved_keep = index_saved_temp[2];
					//log_lik_particle_max_temp[2] = log_lik_particle_max_temp[2];
					//*index_saved[2] = *index_saved[2];
				}
				else{
					log_lik_particle_max_keep = sum[4];
					index_saved_keep = 4*chunk_size_particles_max + i;
				}

				//if (i%2==0){
				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#elif M_ti == 8

				data_t log_lik_particle_max_temp[6];
				uint32_t index_saved_temp[6];

				if (sum[0] > sum[1]){
					log_lik_particle_max_temp[0] = sum[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = sum[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (sum[2] > sum[3]){
					log_lik_particle_max_temp[1] = sum[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = sum[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (sum[4] > sum[5]){
					log_lik_particle_max_temp[2] = sum[4];
					index_saved_temp[2] = 4*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[2] = sum[5];
					index_saved_temp[2] = 5*chunk_size_particles_max + i;
				}

				if (sum[6] > sum[7]){
					log_lik_particle_max_temp[3] = sum[6];
					index_saved_temp[3] = 6*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[3] = sum[7];
					index_saved_temp[3] = 7*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_temp[4] = log_lik_particle_max_temp[0];
					index_saved_temp[4] = index_saved_temp[0];
					//log_lik_particle_max_temp[0] = log_lik_particle_max_temp[0];
					//*index_saved[0] = *index_saved[0];
				}
				else{
					log_lik_particle_max_temp[4] = log_lik_particle_max_temp[1];
					index_saved_temp[4] = index_saved_temp[1];
				}

				if (log_lik_particle_max_temp[2] > log_lik_particle_max_temp[3]){
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[2];
					index_saved_temp[5] = index_saved_temp[2];
					//log_lik_particle_max_temp[2] = log_lik_particle_max_temp[2];
					//*index_saved[2] = *index_saved[2];
				}
				else{
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[3];
					index_saved_temp[5] = index_saved_temp[3];
				}

				if (log_lik_particle_max_temp[4] > log_lik_particle_max_temp[5]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[4];
					index_saved_keep = index_saved_temp[4];
					//log_lik_particle_max_temp[0] = log_lik_particle_max_temp[0];
					//*index_saved[0] = *index_saved[0];
				}
				else{
					log_lik_particle_max_keep = log_lik_particle_max_temp[5];
					index_saved_keep = index_saved_temp[5];
				}

				//if (i%2==0){
				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}


			#elif M_ti == 10

				data_t log_lik_particle_max_temp[8];
				uint32_t index_saved_temp[8];

				if (sum[0] > sum[1]){
					log_lik_particle_max_temp[0] = sum[0];
					index_saved_temp[0] = 0*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[0] = sum[1];
					index_saved_temp[0] = 1*chunk_size_particles_max + i;
				}

				if (sum[2] > sum[3]){
					log_lik_particle_max_temp[1] = sum[2];
					index_saved_temp[1] = 2*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[1] = sum[3];
					index_saved_temp[1] = 3*chunk_size_particles_max + i;
				}

				if (sum[4] > sum[5]){
					log_lik_particle_max_temp[2] = sum[4];
					index_saved_temp[2] = 4*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[2] = sum[5];
					index_saved_temp[2] = 5*chunk_size_particles_max + i;
				}

				if (sum[6] > sum[7]){
					log_lik_particle_max_temp[3] = sum[6];
					index_saved_temp[3] = 6*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[3] = sum[7];
					index_saved_temp[3] = 7*chunk_size_particles_max + i;
				}

				if (sum[8] > sum[9]){
					log_lik_particle_max_temp[4] = sum[8];
					index_saved_temp[4] = 8*chunk_size_particles_max + i;
				}
				else{
					log_lik_particle_max_temp[4] = sum[9];
					index_saved_temp[4] = 9*chunk_size_particles_max + i;
				}

				if (log_lik_particle_max_temp[0] > log_lik_particle_max_temp[1]){
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[0];
					index_saved_temp[5] = index_saved_temp[0];
					//log_lik_particle_max_temp[0] = log_lik_particle_max_temp[0];
					//*index_saved[0] = *index_saved[0];
				}
				else{
					log_lik_particle_max_temp[5] = log_lik_particle_max_temp[1];
					index_saved_temp[5] = index_saved_temp[1];
				}

				if (log_lik_particle_max_temp[2] > log_lik_particle_max_temp[3]){
					log_lik_particle_max_temp[6] = log_lik_particle_max_temp[2];
					index_saved_temp[6] = index_saved_temp[2];
					//log_lik_particle_max_temp[2] = log_lik_particle_max_temp[2];
					//*index_saved[2] = *index_saved[2];
				}
				else{
					log_lik_particle_max_temp[6] = log_lik_particle_max_temp[3];
					index_saved_temp[6] = index_saved_temp[3];
				}

				if (log_lik_particle_max_temp[5] > log_lik_particle_max_temp[6]){
					log_lik_particle_max_temp[7] = log_lik_particle_max_temp[5];
					index_saved_temp[7] = index_saved_temp[5];
					//log_lik_particle_max_temp[0] = log_lik_particle_max_temp[0];
					//*index_saved[0] = *index_saved[0];
				}
				else{
					log_lik_particle_max_temp[7] = log_lik_particle_max_temp[6];
					index_saved_temp[7] = index_saved_temp[6];
				}

				if (log_lik_particle_max_temp[7] > log_lik_particle_max_temp[4]){
					log_lik_particle_max_keep = log_lik_particle_max_temp[7];
					index_saved_keep = index_saved_temp[7];
				}
				else{
					log_lik_particle_max_keep = log_lik_particle_max_temp[4];
					index_saved_keep = index_saved_temp[4];
				}

				//if (i%2==0){
				fp_struct<data_t> x_1(log_lik_particle_max_keep);
				fp_struct<data_t> x_2(log_lik_particle_max);
				if (x_1.exp<x_2.exp){
					log_lik_particle_max = log_lik_particle_max_keep;
					index_saved = index_saved_keep;
				}

			#endif

		}


		log_lik_particle_max = log_lik_particle_max/2.0f;

		////////////////////////SUMS AND MEAN LIKELIHOOD PART/////////////////////////////////////

		weights_sum = 0.0f;
			//block_index = 0;

		chunk_sums_init_loop: for (unsigned int l=0;l<M_ti_int;l++){
			weights_chunk_sums[l] = 0.0f;
		}


		sum_main_loop: for (unsigned int i=0; i<chunk_size_particles_true; i++){
#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128
				sum_parallelism_loop: for (unsigned int k=0; k<M_ti_int; k++){

					weights[k*chunk_size_particles_max + i] = expf( log_lik_particle[k*chunk_size_particles_max + i] - log_lik_particle_max );
					if (!(weights[k*chunk_size_particles_max + i] >= 0.0f && weights[k*chunk_size_particles_max + i] < FP_inf_pos)){
						weights[k*chunk_size_particles_max + i] = 0.0f;
						#ifndef __SYNTHESIS__
							printf("NaN or zero or Positive Infinite weight\n");
						#endif
							counter_4++;
					}
					//#pragma HLS RESOURCE variable=chunk_temp core=FAddSub_nodsp
					//chunk_temp = weights_chunk_sums[k] + weights[k*chunk_size_particles_max + i];
					//weights_chunk_sums[k] = chunk_temp;

					weights_chunk_sums[k] += weights[k*chunk_size_particles_max + i];

				}

		 }


		acc_final: for (int i = 0; i < M_ti_int; i++) {
			weights_partial_sums[i] = weights_sum;
			weights_sum += weights_chunk_sums[i];
		}


		weights_mean = weights_sum / P;

		if (weights_sum == 0.0f){
			#ifndef __SYNTHESIS__
				printf("Weights sum = 0, artificially setting to 1 (t=%d)\n",t);
			#endif
			counter_5++;
			weights_sum = 1.0f;
		}

		//weights_norm_loop: for (unsigned int i=0; i<P; i++)
		//		weights[i] = (weights[i]) / (*weights_sum);

		float a = logf( weights_mean ) + log_lik_particle_max;
		if (!(a > FP_inf_neg)){
			#ifndef __SYNTHESIS__
				printf("a = -inf (t=%d)\n",t);
			#endif
				counter_6++;
			a = FP_inf_neg;
		}



		*log_lik_out += a;//logf( weights_mean ) + log_lik_particle_max;
		#ifndef __SYNTHESIS__
			//printf("Step: %d,    Value: %f,    Wm: %E,     Counters: %d   %d   %d   %d\n", t, a, weights_mean, counter_1, counter_2, counter_3, counter_4);
		#endif



		/////////////////RESAMPLING part////////////////////////////////

		u5 = __random32(&rng_state[seeds_dim-1]);
		u6 = __random32(&rng_state[seeds_dim-1]);
		rn_particles_saved = (data_t)(u5/4294967296.0f);
		rn_resampling = (data_t)(u6/4294967296.0f);
		rn_resampling_fixed = (data_t_fixed)rn_resampling;

		U[0] = rn_resampling_fixed;

		U_init_loop: for (unsigned int i=1; i<M_ti_int; i++){
			r = (data_t_fixed)((P*weights_partial_sums[i])/weights_sum);
			temp_res_1 = r - rn_resampling_fixed;
			if (temp_res_1 > 0){
				U[i] = (temp_res_1 & mask_int) + mask_1 - temp_res_1;
			}
			else{
				U[i] = - temp_res_1;
			}
		}


		#ifndef __SYNTHESIS__
		uint_resampling sum_test = (uint_resampling)0;
		#endif

		resampling_main_loop: for (uint32_t j=0; j<chunk_size_particles_true; j++){
#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128
			resampling_parallelism_loop: for (uint32_t k=0; k<M_ti_int; k++){

				temp_res = (data_t_fixed)((P*weights[k*chunk_size_particles_max+j]/weights_sum));
				fixed_point:{
					fact = temp_res - U[k];
					U[k] = (data_t_fixed)(mask_1_reduced - (data_t_fixed_reduced)(fact & mask_frac));

					if (fact > 0){
							rep = (fact & mask_int) + mask_1;
					}
					else{
							rep = mask_0;
					}

				}

				replication_factors[k*chunk_size_particles_max+j] = rep.to_uint();
				#ifndef __SYNTHESIS__
				sum_test += replication_factors[k*chunk_size_particles_max+j];
				#endif

			}

		}

		#ifndef __SYNTHESIS__
		if(sum_test!=uint_resampling(P)){
			//printf("\nOutput numbers unequal: %d, %d\n", P, uint32_t(sum_test));
		}
		#endif

		//update particle set

		block_replicated = 0;
		index_replicated = -state_dim;

		resampling_1st_update_loop: for(uint32_t k=0; k<M_ti_int; k++){
			resampling_1st_update_inner_loop: for(uint32_t i=0; i<chunk_size_particles_true; i++){
#pragma HLS LOOP_TRIPCOUNT min=128 max=128 avg=128
				o = (uint32_t)replication_factors[k*chunk_size_particles_max + i];

				//replication_factors_outer_loop:for(uint32_t i=0; i<state_dim; i++){
					replication_factors_inner_loop: for (uint32_t j=0; j<o; j++){
						#pragma HLS LOOP_TRIPCOUNT min=1 max=1 avg=1

						index_replicated += state_dim;
						if ( index_replicated > ( chunk_size_true - 1 ) ){
							block_replicated++;
							index_replicated = 0;
						}

						for (uint32_t l=0;l<state_dim;l++){
							particles_temp[block_replicated*chunk_size_max + index_replicated + l]=particles[k*chunk_size_max + i*state_dim + l];
						}
					}
				//}

				//replicated += o;
			}

		}

		//!!!if index_saved from likelihood func is used, it has to be converted to particle format (it is in particles max format)

		//choose random particle from time step t
		index_saved = (uint32_t)floorf(rn_particles_saved * P);

		block = index_saved / chunk_size_particles_true;
		index = index_saved % chunk_size_particles_true;
		particles_saved_main_loop: for (unsigned int i = 0; i < state_dim; i++)
					particles_saved_out[t*state_dim + i] = particles_temp[block*chunk_size_max + index*state_dim + i];



	}//end of time loop

	#ifndef __SYNTHESIS__
		//printf("Counter 5: %d\n", counter_5);
		//printf("Counter 6: %d\n", counter_6);
	#endif

	if (!(*log_lik_out >= FP_inf_neg)){
		*log_lik_out = FP_inf_neg;
		#ifndef __SYNTHESIS__
			printf("Negative Infinite total loglikelihood\n");
		#endif
	}
	else if(*log_lik_out > 0.0f){
		*log_lik_out = 0.0f;
		#ifndef __SYNTHESIS__
			printf("Positive or NaN total loglikelihood\n");
		#endif
	}

}
