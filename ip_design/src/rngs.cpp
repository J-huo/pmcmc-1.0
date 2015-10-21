
#include "rngs.h"

void ctrng_seed(uint32_t index, uint32_t initial_seed, rng_state_t *rng_state){
    rng_state->s1 = 2;
    rng_state->s2 = 8;
    rng_state->s3 = initial_seed + 16;
    rng_state->offset = 0;

    uint32_t i;
    for(i=0;i<index;++i) __random32(rng_state);
}

uint32_t __random32(rng_state_t *rng_state)
{
    #define TAUSWORTHE(s,a,b,c,d) ((s&c)<<d) ^ (((s <<a) ^ s)>>b)

    rng_state->s1 = TAUSWORTHE(rng_state->s1, 13, 19, 4294967294UL, 12);
    rng_state->s2 = TAUSWORTHE(rng_state->s2, 2, 25, 4294967288UL, 4);
    rng_state->s3 = TAUSWORTHE(rng_state->s3, 3, 11, 4294967280UL, 17);
    //rng_state->s3 = TAUSWORTHE(rng_state->s3+rng_state->offset, 3, 11, 4294967280UL, 17);

    rng_state->offset++;

    return (rng_state->s1 ^ rng_state->s2 ^ rng_state->s3);
}

data_t __drandom32(rng_state_t *rng_state)
{
    //return ((data_t)__random32(rng_state)/4294967296);
    return (__random32(rng_state)/4294967296.0);
}

/*
data_t approx(uint32_t u1, uint32_t u2){

  uint32_t segment = 31 - (uint32_t)floorf( logf(u1) / logf(2.0f) ); // left-most one detector
  uint32_t o = u2 & (32-1); //first five bits of u2
  uint32_t s = (u2>>5) & 1; //6th bit of u2
  uint32_t f = (u2>>6); //bits 7 to 32 of u2
  data_t r= (data_t)(f / 67108864);
  uint32_t i= (segment<<5) | o;
  data_t a0 = c0[i], a1 = c1[i], a2 = c2[i];
  data_t z= a0 + r * (a1 + r*a2);

  return s? -z : z;

}
*/

data_t approx(uint32_t u1, uint32_t u2){


  uint32_t u1_inv = u1 ^ mask_ones;
  u1_inv++;
  uint32_t intermediate_result = u1_inv & u1;
  uint32_t segment;
  switch(intermediate_result){
  	    case 1 :
  	        segment = 0;
  	        break;
  	    case 2 :
  	    	segment = 1;
  	    	break;
  	    case 4 :
  	    	segment = 2;
  	    	break;
  	    case 8 :
  	    	segment = 3;
  	    	break;
  	    case 16 :
  	    	segment = 4;
  	    	break;
  	    case 32 :
  	    	segment = 5;
  	    	break;
  	    case 64 :
  	    	segment = 6;
  	    	break;
  	    case 128 :
  	    	segment = 7;
  	    	break;
  	    case 256 :
  	    	segment = 8;
  	    	break;
  	    case 512 :
  	    	segment = 9;
  	    	break;
  	    case 1024 :
  	    	segment = 10;
  	    	break;
  	    case 2048 :
  	    	segment = 11;
  	    	break;
  	    case 4096 :
  	    	segment = 12;
  	    	break;
  	    case 8192 :
  	    	segment = 13;
  	    	break;
  	    case 16384 :
  	    	segment = 14;
  	    	break;
  	    case 32768 :
  	       	segment = 15;
  	       	break;
  	    case 65536 :
  	       	segment = 16;
  	       	break;
  	    case 131072 :
  	       	segment = 17;
  	       	break;
  	    case 262144 :
  	       	segment = 18;
  	       	break;
  	    case 524288 :
  	       	segment = 19;
  	       	break;
  	    case 1048576 :
  	       	segment = 20;
  	       	break;
  	    case 2097152 :
  	       	segment = 21;
  	       	break;
  	    case 4194304 :
  	       	segment = 22;
  	       	break;
  	    case 8388608 :
  	       	segment = 23;
  	       	break;
  	    case 16777216 :
  	       	segment = 24;
  	       	break;
  	    case 33554432 :
  	       	segment = 25;
  	       	break;
  	    case 67108864 :
  	       	segment = 26;
  	       	break;
  	    case 134217728 :
  	       	segment = 27;
  	       	break;
  	    case 268435456 :
  	       	segment = 28;
  	       	break;
  	    case 536870912 :
  	       	segment = 29;
  	       	break;
  	    case 1073741824 :
  	       	segment = 30;
  	       	break;
  	    case 2147483648 :
  	       	segment = 31;
  	       	break;

  	}
  //uint32_t segment = log2(intermediate_result); // left-most one detector
  uint32_t o = u2 & (32-1); //first five bits of u2
  uint32_t s = (u2>>5) & 1; //6th bit of u2
  uint32_t f = (u2>>6); //bits 7 to 32 of u2
  data_t r= f / 67108864.0f;
  uint32_t i= (segment<<5) | o;
  data_t a0 = c0[i], a1 = c1[i], a2 = c2[i], a00, a11;
//#pragma HLS RESOURCE variable=a11 core=FMul_nodsp
//#pragma HLS RESOURCE variable=a00 core=FMul_nodsp
//#pragma HLS RESOURCE variable=a11 core=FAddSub_nodsp
//#pragma HLS RESOURCE variable=a00 core=FAddSub_nodsp
  a11 = a1 + r*a2;
  a00 = a0 + r*a11;

  //z= a0 + r * (a1 + r*a2);

  return s? -a00 : a00;

}

void normal_rnd_trans(data_t *rn, rng_state_t *rng_state, uint32_t k){

	#if trans_nrnd_def>0
		uint32_t u1;
		uint32_t u2;
		for (uint32_t i=0;i<trans_nrnd;i++){
			//u1 = __random32(&rng_state[i*M_ti_int*2 + k*2]);
			//u2 = __random32(&rng_state[i*M_ti_int*2 + k*2+1]);
			u1 = __random32(&rng_state[k*trans_nrnd*2 + i*2]);
			u2 = __random32(&rng_state[k*trans_nrnd*2 + i*2+1]);
			rn[i] = approx(u1, u2);
		}
	#else
		#ifndef __SYNTHESIS__
			printf("Trans_nrnd: Nothing to do");
		#endif
	#endif
		


}

void normal_rnd_obs(data_t *rn, rng_state_t *rng_state, uint32_t k){
	
	#if obs_nrnd_def>0
		uint32_t u1;
		uint32_t u2;
		for (uint32_t i=0;i<obs_nrnd;i++){
			u1 = __random32(&rng_state[trans_nrnd*M_ti_int*2 + k*obs_nrnd*2 + i*2]);
			u2 = __random32(&rng_state[trans_nrnd*M_ti_int*2 + k*obs_nrnd*2 + i*2 + 1]);
			rn[i] = approx(u1, u2);
		}
	#else
		#ifndef __SYNTHESIS__
			printf("Obs_nrnd: Nothing to do");
		#endif
	#endif
}

void uni_rnd_trans(data_t *rn, rng_state_t *rng_state, uint32_t k){

	#if trans_urnd_def>0
		uint32_t u1;
		for (uint32_t i=0;i<trans_urnd;i++){
			u1 = __random32(&rng_state[trans_nrnd*M_ti_int*2 + obs_nrnd*M_ti_int*2 + k*trans_urnd + i]);
			rn[i] = (data_t)(u1/4294967296.0f);
		}
	#else
		#ifndef __SYNTHESIS__
			printf("Trans_urnd: Nothing to do");
		#endif
	#endif
}

void uni_rnd_obs(data_t *rn, rng_state_t *rng_state, uint32_t k){
	
	#if obs_urnd_def>0
		uint32_t u1;
		for (uint32_t i=0;i<obs_urnd;i++){
			u1 = __random32(&rng_state[trans_nrnd*M_ti_int*2 + obs_nrnd*M_ti_int*2 + trans_urnd*M_ti_int + k*obs_urnd + i]);
			rn[i] = (data_t)(u1/4294967296.0f);
		}
	#else
		#ifndef __SYNTHESIS__
			printf("Obs_urnd: Nothing to do");
		#endif
	#endif
}
