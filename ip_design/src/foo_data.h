#ifndef DATA_H
#define DATA_H

#include <vector>
#include <iostream>
#include <stdio.h>
#include "math.h"
#include "ap_fixed.h"
#include <stdint.h>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
#include <math.h>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>


// Define FIX_IMPLEMENTATION to enable  fixed-point (up to 32 bits word length) arithmetic precision or 
// FLOAT_IMPLEMENTATION to enable floating-point single arithmetic precision.
#define FLOAT_IMPLEMENTATION

#define INTEGERLENGTH 4
#define FRACTIONLENGTH 4


const unsigned N=115000000; //input and output vector length


#ifdef FIX_IMPLEMENTATION
	typedef ap_fixed<INTEGERLENGTH+FRACTIONLENGTH,INTEGERLENGTH,AP_TRN_ZERO,AP_SAT> data_t;
	typedef ap_fixed<32,32-FRACTIONLENGTH,AP_TRN_ZERO,AP_SAT> data_t_interface;
	typedef uint32_t data_t_memory;
#endif

#ifdef FLOAT_IMPLEMENTATION
	typedef float data_t;
	typedef float data_t_interface;
	typedef float data_t_memory;
#endif

#endif
