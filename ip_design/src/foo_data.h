/*
* This file is part of ICL SDK4FPGA.
*
* ICL SDK4FPGA -- A framework to optimal design, easy validate
* and fast prototype mathematical algorithms on FPGA based systems.
* Copyright (C) 2014 by Andrea Suardi, Imperial College London.
* Supported by the EPSRC Impact Acceleration grant number EP/K503733/1
*
* ICL SDK4FPGA is free software; you can redistribute it and/or
* modify it under the terms of the GNU Lesser General Public
* License as published by the Free Software Foundation; either
* version 3 of the License, or (at your option) any later version.
*
* ICL SDK4FPGA is distributed in the hope that it will help researchers and engineers
* to build their own mathematical algorithms into FPGA.
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* It is the user's responsibility in assessing the correctness of the algorithm
* and software implementation before putting it to use in their own research
* or exploiting the results commercially.
* Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public
* License along with ICL SDK4FPGA; if not, write to the Free Software
* Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
*
*/
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