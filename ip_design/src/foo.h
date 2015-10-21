#ifndef FOO_H
#define FOO_H

#include "rngs.h"
#include "mcmc_iteration.h"


#include "foo_data.h"
#include "foo_mem_parameters.h"

void foo	(	volatile data_t_memory *memory_inout,
				uint32_t byte_inputs_in_offset,
				uint32_t byte_outputs_out_offset);

#endif