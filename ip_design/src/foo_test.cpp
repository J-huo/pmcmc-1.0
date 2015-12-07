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


#include "foo_data.h"
#include "foo_mem_parameters.h"



void foo	(	volatile data_t_memory *memory_inout,
				uint32_t byte_inputs_in_offset,
				uint32_t byte_outputs_out_offset);


using namespace std;
#define BUF_SIZE 64

#define inputs_IN_DEFINED_MEM_ADDRESS 0
#define outputs_OUT_DEFINED_MEM_ADDRESS N*4


int main()
{

	char filename[BUF_SIZE]={0};

    int max_iter;

	uint32_t byte_inputs_in_offset;
	uint32_t byte_outputs_out_offset;

	int32_t tmp_value;


	//assign the input/output vectors base address in the DDR memory
	byte_inputs_in_offset=inputs_IN_DEFINED_MEM_ADDRESS;
	byte_outputs_out_offset=outputs_OUT_DEFINED_MEM_ADDRESS;

	//allocate a memory named address of uint32_t or float words. Number of words is 1024 * (number of inputs and outputs vectors)
	data_t_memory *memory_inout = (data_t_memory *)malloc(2* N * sizeof (data_t_memory));	//malloc size should be max_vector_length * (number of inputs and outputs vectors)

	FILE *stimfile;
	FILE * pFile;
	int count_data;

	//float inputs_in[N];
	//float outputs_out[N];
	//float outputs_out_log[N];

	//float* inputs_in = (float *)malloc(N * sizeof (float));
	//float* outputs_out = (float *)malloc(N * sizeof (float));

	//float* outputs_out_log = (float *)malloc(N * sizeof (float));


	////////////////////////////////////////
	//read inputs_in vector

	// Open stimulus inputs_in.dat file for reading
	sprintf(filename,"inputs_in.dat");
	stimfile = fopen(filename, "r");

	// read data from file
	ifstream input1(filename);
	vector<float> myValues1;

	count_data=0;

	for (float f; input1 >> f; )
	{
		myValues1.push_back(f);
		count_data++;
	}

	//fill in input vector
	for (int i = 0; (i < N && i<count_data); i++)
	{
		//inputs_in[i]=(float)myValues1[i];

		#ifdef FIX_IMPLEMENTATION
			tmp_value=(int32_t)(inputs_in[i]*(float)pow(2,(FRACTIONLENGTH)));
			memory_inout[i+byte_inputs_in_offset/4] = *(uint32_t*)&tmp_value;
		#endif

		#ifdef FLOAT_IMPLEMENTATION
			//memory_inout[i+byte_inputs_in_offset/4] = (float)inputs_in[i];
			memory_inout[i+byte_inputs_in_offset/4] = (float)myValues1[i];
		#endif

	}
	
	//int theta_dim = (int)inputs_in[9];
	int iterations = (int)memory_inout[0+byte_inputs_in_offset/4];
	int state_count = (int)memory_inout[2+byte_inputs_in_offset/4];
	int state_dimension = (int)memory_inout[3+byte_inputs_in_offset/4];

//#ifndef __SYNTHESIS__
	int output_size = theta_dim*iterations+3*iterations+(state_count*state_dimension)*iterations+1+theta_dim*iterations+3*iterations+iterations+iterations+iterations;
//#else
//	int output_size = theta_dim*iterations+iterations+state_count*iterations+1;
//#endif
	//free(inputs_in);

	/////////////////////////////////////
	// foo c-simulation
	
	foo(	memory_inout,
				byte_inputs_in_offset,
				byte_outputs_out_offset);
	
	
	/////////////////////////////////////
	// read computed outputs_out and store it as outputs_out.dat
	pFile = fopen ("../../../../../../src/outputs_out.dat","w+");

	for (int i = 0; i < output_size; i++)
	{

		#ifdef FIX_IMPLEMENTATION
			tmp_value=*(int32_t*)&memory_inout[i+byte_outputs_out_offset/4];
			outputs_out[i]=((float)tmp_value)/(float)pow(2,(FRACTIONLENGTH));
		#endif
		
		#ifdef FLOAT_IMPLEMENTATION
			//outputs_out[i]=(float)memory_inout[i+byte_outputs_out_offset/4];
		#endif
		
		//fprintf(pFile,"%f, ",outputs_out[i]);
		fprintf(pFile,"%f, ",(float)memory_inout[i+byte_outputs_out_offset/4]);


	}
	fprintf(pFile,"\n");
	fclose (pFile);
		
	//free(outputs_out);
	free(memory_inout);


	return 0;
}
