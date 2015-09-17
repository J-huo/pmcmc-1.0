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



////////////////////////////////////////////////////////////
//Ethernet interface configuration (UDP or TCP)
#define MY_TCP_UDP 0 //1 for TCP, 0 for UDP
#define FPGA_IP "192.168.1.10" //FPGA IP
#define FPGA_NM "255.255.255.0" //Netmask
#define FPGA_GW "192.168.1.1" //Gateway
#define FPGA_PORT 2007
#define DEBUG 0 //1 to enable debug printf, 0 to disable debug printf

//Set design arithmetic precision (every variable is represented with the same precision)
#define FLOAT_FIX 0// set 0=FLOAT (floating-point single precision), 1=FIX (fixed-point up to 32 bits word length)

//ONLY if FIXED-POINT, define how many bit to use to
//represent the integer and the fraction part  
//REMARK1: make attention when choosing the integer length because overflow can occur.
//REMARK2: maximum word length size (bits_word_integer_length+bits_word_fraction_length) is 32, minimum integer length size is 1
#define INTEGERLENGTH 4
#define FRACTIONLENGTH 4

//FPGA vectors memory maps
#define inputs_IN_DEFINED_MEM_ADDRESS 33554432
#define inputs_IN_DEFINED_MEM_ADDRESS_1 33554432
#define inputs_IN_DEFINED_MEM_ADDRESS_2 33554432
#define inputs_IN_DEFINED_MEM_ADDRESS_3 33554432
#define outputs_OUT_DEFINED_MEM_ADDRESS 493554432


///////////////////////////////////////////////////////////////
//////////////////DO NOT EDIT HERE BELOW///////////////////////
//FPGA interface data specification:
#define ETH_PACKET_LENGTH 256+2 //Ethernet packet length in double words (32 bits) (from Matlab to  FPGA)
#define ETH_PACKET_LENGTH_RECV 64+2 //Ethernet packet length in double words (32 bits) (from FPGA to Matlab)
