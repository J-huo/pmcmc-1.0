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

#include <stdio.h>
#include <string.h>

#include "lwip/err.h"
#include "lwip/tcp.h"
#include "lwip/udp.h"
#ifdef __arm__
#include "xil_printf.h"
#endif
#include <stdint.h>

#include "xil_cache.h"
#include "xparameters.h"
#include "xstatus.h"
#include "xil_io.h"

#include "xfoo.h"
#include "interface_library.h"

#define START_READING 1

typedef uint32_t           Xint32;     /**< signed 32-bit */


XFoo xcore;
XFoo_Config config;



///////////////////////////////////////////////////////////////////
//ADD memory pointers here below:

///////////////////////////////////////////////////////////////////



/* Variables used for handling the packet */
uint8_t *payload_ptr;		/* Payload pointer */
Xint32   payload_temp;		/* 32-bit interpretation of payload */
uint8_t *payload_temp_char = (uint8_t *)&payload_temp;  /* Char interpretation of payload */

Xint32 inputvec[ETH_PACKET_LENGTH];
Xint32 outvec[ETH_PACKET_LENGTH];

unsigned int write_offset;
int packet_internal_ID_previous;


int transfer_data() {
	return 0;
}


void print_app_header()
{
	xil_printf("\n\r");
	xil_printf("\n\r");
	xil_printf("------------------------- ICL SDK4FPGA framework----------------------------\n\r");
	xil_printf("---------------- (FPGA Interface: UPD/IP andTCP/IP server) -----------------\n\r");
	xil_printf("----- Copyright (C) 2014 by Andrea Suardi[a.suardi@imperial.ac.uk] ---------\n\r");
	xil_printf("----------------------------- v1.0 May 2014 --------------------------------\n\r");
	xil_printf("\n\r");
	xil_printf("\n\r");
	if (MY_TCP_UDP==1)
		xil_printf("Starting TCP/IP server ...\n\r");
	if (MY_TCP_UDP==0)
		xil_printf("Starting UDP/IP server ...\n\r");
	xil_printf("\n\r");
	xil_printf("\n\r");
}


inline static void get_payload(){
	payload_temp_char[0] = *payload_ptr++;
	payload_temp_char[1] = *payload_ptr++;
	payload_temp_char[2] = *payload_ptr++;
	payload_temp_char[3] = *payload_ptr++;
}


void udp_server_function(void *arg, struct udp_pcb *pcb,
		struct pbuf *p, struct ip_addr *addr, u16_t port){


	struct pbuf pnew;
	int k1;
	int k;
	int i;

	int packet_type;
	int packet_internal_ID;
	int packet_internal_ID_offset;

	int timer=0;

	float tmp_float;


	xcore.Bus_a_BaseAddress = 0x43c00000;
	xcore.IsReady = XIL_COMPONENT_IS_READY;



	// Only respond when the packet is the correct length
		if (p->len == (ETH_PACKET_LENGTH)*sizeof(int32_t)){


			/* Pick up a pointer to the payload */
			payload_ptr = (unsigned char *)p->payload;

			//Free the packet buffer
			pbuf_free(p);

			// Get the payload out
			for(k1=0;k1<ETH_PACKET_LENGTH;k1++){
				get_payload();
				inputvec[k1] = payload_temp;
			}

			if (FLOAT_FIX==1){//fixed point
				//extract informations form the input packet
				packet_type=inputvec[ETH_PACKET_LENGTH-2] & 0x0000FFFF;
				packet_internal_ID=(inputvec[ETH_PACKET_LENGTH-2] & 0xFFFF0000) >> 16; //if write packet_type, packet_num is the data vector ID
				packet_internal_ID_offset=inputvec[ETH_PACKET_LENGTH-1]; //if write packet_type, packet_num is the data vector ID
			}
			else if (FLOAT_FIX==0){//floating point

				//extract informations form the input packet
				tmp_float=*(float*)&inputvec[ETH_PACKET_LENGTH-2];
				packet_type=(int)tmp_float & 0x0000FFFF;
				packet_internal_ID=((int)tmp_float & 0xFFFF0000) >> 16; //if write packet_type, packet_num is the data vector ID

				tmp_float=*(float*)&inputvec[ETH_PACKET_LENGTH-1];
				packet_internal_ID_offset=(int)tmp_float; //if write packet_type, packet_num is the data vector ID


			}

			if (DEBUG){
				printf("\n");
				printf("Received packet:\n");
				printf("packet_type=%x\n",packet_type);
				printf("packet_internal_ID=%x\n",packet_internal_ID);
				printf("packet_internal_ID_offset=%x\n",packet_internal_ID_offset);
			}


			if (packet_type==1) //reset IP
						{

							if (DEBUG)
								printf("Reset IP ...\n");

							if (XFoo_IsIdle(&xcore)==1)
							{
								if (DEBUG){
									printf("The core is ready to be used\n");
								}
							}
							else
								printf("ERROR: reprogram the FPGA !\n"); //should be added the IP reset procedure

						}
					else if (packet_type==2) //start IP
							{

								if (DEBUG)
									printf("Start IP ...\n");

								///////////////////////////////////////////////////////////////////
								//ADD UDP memory map configuration here below:
								
								///////////////////////////////////////////////////////////////////
								
								//Start IP core
								XFoo_Start(&xcore);

							}

					else if (packet_type==3) //write data DDR
					{

						if (DEBUG)
						printf("Write data to DDR ...\n");

						switch (packet_internal_ID)
						{
							///////////////////////////////////////////////////////////////////
							//ADD UDP write data DDR here below:
							
							///////////////////////////////////////////////////////////////////

							default:
								break;
						}

					}

					else if (packet_type==4) //read data from DDR
					{

						//Initialise output vector
						for(i=0;i<ETH_PACKET_LENGTH;i++)
						{
							outvec[i]=1;
						}
						
						
						switch (packet_internal_ID)
						{
							///////////////////////////////////////////////////////////////////
							//ADD UDP read data DDR here below:
							
							///////////////////////////////////////////////////////////////////
							
							default:
								break;
						}
						
						
						
						if (XFoo_IsIdle(&xcore)==1)
						{
							outvec[ETH_PACKET_LENGTH_RECV-2]=0; //IP is running: 1=YES, 0=NO
							if (DEBUG)
								printf("IP is ready ...\n");

						} else {
							outvec[ETH_PACKET_LENGTH_RECV-2]=1; //IP is running: 1=YES, 0=NO
							if (DEBUG)
								printf("Wait IP is running ...\n");
						}

						
						
						// send back the payload
						// We now need to return the result
						pnew.next = NULL;
						pnew.payload = (unsigned char *)outvec;
						pnew.len = ETH_PACKET_LENGTH*sizeof(Xint32);
						pnew.type = PBUF_RAM;
						pnew.tot_len = pnew.len;
						pnew.ref = 1;
						pnew.flags = 0;


						udp_sendto(pcb, &pnew, addr, port);

					}



				}

				/* free the received pbuf */
				pbuf_free(p);

				return ERR_OK;





	//printf("Time was: %d\n", tval);
}


err_t tcp_server_function(void *arg, struct tcp_pcb *tpcb,
                               struct pbuf *p, err_t err)

{

	int k1;
	int i;
	int len;

	int packet_type;
	int packet_internal_ID;
	int packet_internal_ID_offset;

	int timer=0;

	float tmp_float;


	xcore.Bus_a_BaseAddress = 0x43c00000;
	xcore.IsReady = XIL_COMPONENT_IS_READY;



	// indicate that the packet has been received
	tcp_recved(tpcb, p->len);

	// Only respond when the packet is the correct length
	if (p->len == (ETH_PACKET_LENGTH)*sizeof(int32_t)){


		/* Pick up a pointer to the payload */
		payload_ptr = (unsigned char *)p->payload;

		//Free the packet buffer
		pbuf_free(p);

		// Get the payload out
		for(k1=0;k1<ETH_PACKET_LENGTH;k1++){
			get_payload();
			inputvec[k1] = payload_temp;
		}

		if (FLOAT_FIX==1){//fixed point
			//extract informations form the input packet
			packet_type=inputvec[ETH_PACKET_LENGTH-2] & 0x0000FFFF;
			packet_internal_ID=(inputvec[ETH_PACKET_LENGTH-2] & 0xFFFF0000) >> 16; //if write packet_type, packet_num is the data vector ID
			packet_internal_ID_offset=inputvec[ETH_PACKET_LENGTH-1]; //if write packet_type, packet_num is the data vector ID
		}
		else if (FLOAT_FIX==0){//floating point

			//extract informations form the input packet
			tmp_float=*(float*)&inputvec[ETH_PACKET_LENGTH-2];
			packet_type=(int)tmp_float & 0x0000FFFF;
			packet_internal_ID=((int)tmp_float & 0xFFFF0000) >> 16; //if write packet_type, packet_num is the data vector ID

			tmp_float=*(float*)&inputvec[ETH_PACKET_LENGTH-1];
			packet_internal_ID_offset=(int)tmp_float; //if write packet_type, packet_num is the data vector ID


		}

		if (DEBUG){
		printf("\n");
		printf("Received packet:\n");
		printf("packet_type=%x\n",packet_type);
		printf("packet_internal_ID=%x\n",packet_internal_ID);
		printf("packet_internal_ID_offset=%x\n",packet_internal_ID_offset);
		}

		if (packet_type==1) //reset IP
			{

				if (DEBUG)
				printf("Reset IP ...\n");

				if (XFoo_IsIdle(&xcore)==1)
				{
					if (DEBUG){
						printf("The core is ready to be used\n");
					}
				}
				else
					printf("ERROR: reprogram the FPGA !\n"); //should be added the IP reset procedure

			}
		else if (packet_type==2) //start IP
				{

					if (DEBUG)
					printf("Start IP ...\n");

					///////////////////////////////////////////////////////////////////
					//ADD TCP memory map configuration here below:
					
					///////////////////////////////////////////////////////////////////

					//Start IP core
					XFoo_Start(&xcore);

				}

		else if (packet_type==3) //write data DDR
		{

			if (DEBUG)
			printf("Write data to DDR ...\n");

			switch (packet_internal_ID)
			{
			///////////////////////////////////////////////////////////////////
			//ADD TCP write data DDR here below:
			
			///////////////////////////////////////////////////////////////////
			
			default:
				break;
			}

		}

		else if (packet_type==4) //read data from DDR
		{

			//Initialise output vector
			for(i=0;i<ETH_PACKET_LENGTH;i++)
			{
				outvec[i]=1;
			}
			

			switch (packet_internal_ID)
			{
				///////////////////////////////////////////////////////////////////
				//ADD TCP read data DDR here below:
				
				///////////////////////////////////////////////////////////////////
							
				default:
					break;
			}


			if (XFoo_IsIdle(&xcore)==1)
			{
				outvec[ETH_PACKET_LENGTH_RECV-2]=0; //IP is running: 1=YES, 0=NO
				if (DEBUG)
					printf("IP is ready ...\n");

			} else {
				outvec[ETH_PACKET_LENGTH_RECV-2]=1; //IP is running: 1=YES, 0=NO
				if (DEBUG)
					printf("Wait IP is running ...\n");
			}


			// send back the payload
			err = tcp_write(tpcb, outvec, ETH_PACKET_LENGTH*sizeof(Xint32), TCP_WRITE_FLAG_MORE);
			tcp_output(tpcb); //send data now

		}


	}

	/* free the received pbuf */
	pbuf_free(p);

	return ERR_OK;
}

err_t tcp_accept_callback(void *arg, struct tcp_pcb *newpcb, err_t err)
{
	static int connection = 1;


		/* set the receive callback for this connection */
		tcp_recv(newpcb, tcp_server_function);


	/* increment for subsequent accepted connections */
	connection++;

	return ERR_OK;
}


int start_application()
{

	err_t err;
	unsigned port = 2007;


	// bind to specified @port
if (MY_TCP_UDP==1){ //TCP interface
		struct tcp_pcb *pcb;
		pcb = tcp_new();


		//create new TCP PCB structure */
		if (!pcb) {
			xil_printf("Error creating PCB. Out of Memory\n\r");
			return -1;
		}

		err = tcp_bind(pcb, IP_ADDR_ANY, port);



		if (err != ERR_OK) {
			xil_printf("Unable to bind to port %d: err = %d\n\r", port, err);
			return -2;
		}

		/* we do not need any arguments to callback functions */
		//tcp_arg(pcb, NULL);

		/* listen for connections */
		pcb = tcp_listen(pcb);
		if (!pcb) {
			xil_printf("Out of memory while tcp_listen\n\r");
			return -3;
		}

		//xil_printf("Got here: start_application\n\r");

		/* specify callback to use for incoming connections */
		tcp_accept(pcb, tcp_accept_callback);

		xil_printf("TCP/IP  FPGA interface framework server started @ port %d\n\r", port);


}

else //UDP interface
{


		struct udp_pcb *pcb;
		pcb = udp_new();

		//create new TCP PCB structure
		if (!pcb) {
			xil_printf("Error creating PCB. Out of Memory\n\r");
			return -1;
		}

		err = udp_bind(pcb, IP_ADDR_ANY, port);

		if (err != ERR_OK) {
			xil_printf("Unable to bind to port %d: err = %d\n\r", port, err);
			return -2;
		}


		// specify callback to use for incoming connections
		udp_recv(pcb, udp_server_function, NULL);

		xil_printf("UDP/IP FPGA interface framework server started @ port %d\n\r", port);

}

	return 0;
}
