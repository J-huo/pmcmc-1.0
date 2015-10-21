#include "prior.h"

//natural log of the gamma function
data_t gammln(data_t xx)
{
    data_t x, tmp, ser;
    const data_t cof[6]={76.18009172947146f,    -86.50532032941677f,
                                24.01409824083091f,    -1.231739572450155f,
                                0.1208650973866179e-2f,-0.5395239384953e-5f};
    int j;

    x=xx-1.0f;
    tmp=x+5.5f;
    tmp -= (x+0.5f)*logf(tmp);
    ser=1.000000000190015f;
    for (j=0;j<=5;j++) {
        x += 1.0f;
        ser += cof[j]/x;
    }
    return -tmp+logf(2.5066282746310005f*ser);
}

//natural log of the gamma distribution PDF
data_t gammalog(data_t x, data_t a, data_t b)
{
    if (x < 0.0f || a < 0.0f || b <= 0.0f){
		#ifndef __SYNTHESIS__
			printf("NaN gammalog\n");
		#endif
        return FP_inf_neg;
    }
    else if (x == 0.0f && a==1.0f && b>0.0f ){
    	return -logf(b);
    }
    else if (x==0.0f && a<1.0f && b>0.0f){
    	return FP_inf_pos;
    }
    else
        return -x / b + (a - 1.0f) * logf(x) - a * logf(b) - gammln(a);
}

//USED-DEFINED
//computes the (log-)sum of all prior densities (has to include all MCMC parameters)
data_t log_prior(data_t *theta, data_t *prior_parameters){

	data_t prior_sum = 0.0f;

	for (int i=0; i<theta_dim; i++){
		//in this case, all priors are gamma priors (each with different hyper-parameters)
		prior_sum += gammalog(theta[i],prior_parameters[i*2],prior_parameters[i*2+1]);
	}

	return prior_sum;

}
