#ifndef PRIOR_H
#define PRIOR_H

#include "foo_data.h"
#include "foo_mem_parameters.h"

data_t gammln(data_t xx);

data_t gammalog(data_t x, data_t a, data_t b);

data_t log_prior(data_t *theta, data_t *prior_parameters);

#endif