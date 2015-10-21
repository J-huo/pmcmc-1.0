#include "observation_density.h"


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



void observation_density(data_t *particle, data_t *likelihood_value, rng_state_t *rng_state, uint32_t k, uint32_t t, data_t *obs_parameters_fixed, data_t *obs_parameters_rand, data_t *data, int *counter_1){

		//variable declarations
		data_t normal_rnd[obs_nrnd];
		data_t s_o, particle_common, temp, temp2, temp3[4], p, sum1, sum2;
		#pragma HLS ARRAY_PARTITION variable=temp3 complete dim=1 // necessary to access all data in parallel
		data_t_integers n, x, n_minus_x;

		//read random parameter and particle
		s_o = obs_parameters_rand[0];
		particle_common = *particle;

		//generate random numbers
		normal_rnd_obs(normal_rnd,rng_state,k);

		//likelihood (i.e. observation) equation - parallelized with parallel factor 4 (all iterations are unrolled)
		obs_parallelism_loop: for (unsigned int j=0; j<4; j++){

			temp = particle_common + s_o * normal_rnd[j];
			if ( temp > FP_power_max ){
				p = 1.0f;
			}
			else if ( temp < FP_power_min ){
				p = 0.0f;
			}
			else{
				temp2 = expf(temp);
				p = temp2 / ( temp2 + 1.0f );

			}

			//fixed observation parameters and data are read here
			n = (data_t_integers)obs_parameters_fixed[j];
			x = (data_t_integers)data[j];
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
				//main likelihood expression (non-marginal cases)
				temp3[j] = log_factorial(n) - log_factorial(x) - log_factorial(n_minus_x)
						+ ((data_t)x)*logf(p) + ((data_t)n_minus_x)*logf(1.0f-p);
			}

			if (!(temp3[j] > FP_inf_neg)){
				temp3[j] = FP_inf_neg;
				#ifndef __SYNTHESIS__
					//printf("Negative Infinite temp\n");
					*counter_1 = *counter_1 + 1;
				#endif
			}

		}

		//add the 4 values using and adder tree
		sum1 = temp3[0] + temp3[1];
		sum2 = temp3[2] + temp3[3];
		*likelihood_value = sum1 + sum2;

}