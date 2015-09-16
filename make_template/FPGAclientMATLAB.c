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

#include<stdio.h>
#include<stdlib.h>
#include "mex.h"
#include "matrix.h"

#ifdef _WIN32
	#include<winsock2.h>
	#include<time.h>
	#pragma comment(lib,"ws2_32.lib")
#else
	#include<sys/socket.h>
	#include<arpa/inet.h>
	#include<netinet/in.h>
	#include<netdb.h>
	#include<sys/select.h>
	#include<sys/time.h>
    #include<unistd.h>
#endif
//#include<sys/types.h>
#include<stdint.h>
#include<string.h>
#include<fcntl.h>
#include"interface_library.h"
#include <math.h>
//#include <cmath.h>




#ifdef _WIN32
	WSADATA wsaData;
#endif
    
int UDPclient_wrap(char ip_address[], unsigned port_number, double din[ETH_PACKET_LENGTH], unsigned Packet_type, double dout[ETH_PACKET_LENGTH_RECV], double *PC_time, double *FPGA_time);
int TCPclient_wrap(char ip_address[], unsigned port_number, double din[ETH_PACKET_LENGTH], unsigned Packet_type, double dout[ETH_PACKET_LENGTH_RECV], double *PC_time, double *FPGA_time);
void error(char *msg);


    
    
   




void mexFunction( int nlhs, mxArray *plhs[] , int nrhs, const mxArray *prhs[] )
{
	double * time_matlab;
	double * time_fpga;
	double * data;
	double * M_values;
	mwSize row_size,col_size;
	mwSize  *dims;
	double * results;
	double output_data_eth[ETH_PACKET_LENGTH_RECV];
	int i,j;
	double time_matlab_int,time_fpga_int;
    int flag;
	
	double flag_IP_running;
   
    double port;
    double link;
    double ptype;
    double pID;
    double poutsize;
	char *FPGA_ip_address;
    int buflen;
    int status;
    unsigned FPGA_port_number;
    unsigned FPGA_link;
    unsigned Packet_type;
    unsigned Packet_size;
    unsigned packet_internal_ID;
    unsigned packet_output_size;
    double *input_data;
    double *output_data;
    double input_data_eth[ETH_PACKET_LENGTH];
    double packet_internal_ID_offset;
    

    
	if(nrhs > 4 || nlhs > 3)
	{
	    
	    plhs[0]    = mxCreateDoubleMatrix(0 , 0 ,  mxREAL);
        plhs[1]    = mxCreateDoubleMatrix(0 , 0 ,  mxREAL);
        plhs[2]    = mxCreateDoubleMatrix(0 , 0 ,  mxREAL);
	    return;
	}
	
    
    

            
     //input array
    data = mxGetPr(prhs[0]);
    dims = mxGetDimensions(prhs[0]);
    if (dims[1]==1)
        Packet_size = dims[0]; //vector length
    else if (dims[0]==1)
        Packet_size = dims[1]; //vector length

    input_data = (double*)mxMalloc(Packet_size*sizeof(double));

 
    //Packet_type
    ptype = mxGetScalar(prhs[1]);
    Packet_type=(unsigned)(ptype);
    
     //packet_internal_ID
    pID = mxGetScalar(prhs[2]);
    packet_internal_ID=(unsigned)(pID);
    
    //packet_output_size
    poutsize = mxGetScalar(prhs[3]);
    packet_output_size=(unsigned)(poutsize);
    
    //FPGA IP address
    FPGA_ip_address = FPGA_IP;

    //FPGA port
    FPGA_port_number=FPGA_PORT;

    //FPGA link
    FPGA_link=MY_TCP_UDP;

   
    for (i=0; i<Packet_size; i++) {
		input_data[i]=*(data+i);
		//printf ("input_data[%d]=%f \n",i,input_data[i]);
	}
    
	
    //malloc output vector
    output_data = (double*)mxMalloc(packet_output_size*sizeof(double));
	

	time_matlab_int=0;
	time_fpga_int=0;
    
	
    
    packet_internal_ID_offset=0;
    
    if (Packet_type==4) //data read
    {
        
       //read the output vector in chuncks of ETH_PACKET_LENGTH_RECV-2 elements
       for (i=0; i<packet_output_size; i=i+ETH_PACKET_LENGTH_RECV-2)
       //     for (i=0; i<1; i++)
        {
        
		flag_IP_running=1;
		
		while(flag_IP_running==1)
			{
			
				//fill in the vector buffer to be sent to Ethernet
				
				//vector label
				input_data_eth[ETH_PACKET_LENGTH-2]=(double)pow(2,16)*packet_internal_ID+Packet_type;        
				input_data_eth[ETH_PACKET_LENGTH-1]=packet_internal_ID_offset;
				
				
				// main call
				if (FPGA_link==1) //TCP interface
					flag=TCPclient_wrap(FPGA_ip_address,FPGA_port_number,input_data_eth,Packet_type,output_data_eth,&time_matlab_int,&time_fpga_int);
			    else
				   flag=UDPclient_wrap(FPGA_ip_address,FPGA_port_number,input_data_eth,Packet_type,output_data_eth,&time_matlab_int,&time_fpga_int);
 
				
				flag_IP_running=output_data_eth[ETH_PACKET_LENGTH_RECV-2];
				if (flag_IP_running==1)
					printf("Waiting FPGA is running ...\n");
			
			}
            
            // assemble the read chucks into the output vector 
            for (j=0; ((j<ETH_PACKET_LENGTH_RECV-2) && (packet_internal_ID_offset*(ETH_PACKET_LENGTH_RECV-2)+j<packet_output_size)); j++) {
                output_data[(unsigned)packet_internal_ID_offset*(ETH_PACKET_LENGTH_RECV-2)+j]=output_data_eth[j];
            } 
            
            packet_internal_ID_offset++;
                
        }
    }
    else
    {
        //split the input vector in chuncks of ETH_PACKET_LENGTH-2 elements
        for (i=0; i<Packet_size; i=i+ETH_PACKET_LENGTH-2)
        {
            
            //fill in the vector buffer to be sent to Ethernet
            
            //vector data
            for (j=0; (j<(ETH_PACKET_LENGTH-2) && (packet_internal_ID_offset*(ETH_PACKET_LENGTH-2)+j<Packet_size)); j++) {
                input_data_eth[j]=input_data[(unsigned)packet_internal_ID_offset*(ETH_PACKET_LENGTH-2)+j];
            }  
            //vector label
            input_data_eth[ETH_PACKET_LENGTH-2]=(double)pow(2,16)*packet_internal_ID+Packet_type;        
            input_data_eth[ETH_PACKET_LENGTH-1]=packet_internal_ID_offset;

            

            // main call 
            if (FPGA_link==1) //TCP interface
               flag=TCPclient_wrap(FPGA_ip_address,FPGA_port_number,input_data_eth,Packet_type,output_data_eth,&time_matlab_int,&time_fpga_int);
           else
               flag=UDPclient_wrap(FPGA_ip_address,FPGA_port_number,input_data_eth,Packet_type,output_data_eth,&time_matlab_int,&time_fpga_int);
            
           packet_internal_ID_offset++;

        }
        
    }


    
   	// ----- output ----- 
    
    
    // Create a 0-by-0 mxArray: allocate the memory dynamically
    plhs[0] = mxCreateNumericMatrix(0, 0, mxDOUBLE_CLASS, mxREAL);

    // Put the output_data array into the mxArray and define its dimensions 
    mxSetPr(plhs[0], output_data);
    mxSetM(plhs[0], packet_output_size);
    mxSetN(plhs[0], 1);

	plhs[1]    = mxCreateDoubleScalar  (mxREAL );
	time_matlab = (double *) mxGetPr(plhs[1]);
	
	plhs[2] = mxCreateDoubleScalar (mxREAL);
	time_fpga = (double *) mxGetPr(plhs[2]);
    

  *time_matlab=time_matlab_int;
  *time_fpga=time_fpga_int;
  
  mxFree(input_data);

	  
}





int UDPclient_wrap(char ip_address[], unsigned port_number, double din[ETH_PACKET_LENGTH], unsigned Packet_type, double dout[ETH_PACKET_LENGTH_RECV], double *PC_time, double *FPGA_time)
{
    
    int socket_handle; // Handle for the socket
    int connect_id; // Connection ID
    struct sockaddr_in server_address;	// Server address
	struct sockaddr_in client_address;	// client address
    int saddr_len = sizeof(server_address); // Server address length
	int caddr_len = sizeof(client_address); // Client address length
    struct hostent *server;		// Server host entity
	struct hostent *client;		// Client host entity
    int n;						// Iterator
    int k;						// Iterator
	int i;
    struct timeval tv;			// Select timeout structure
    fd_set Reader;				// Struct for select function
    int err;					// Error flag for return data
    int ss;						// Return from select function
	
	int timeout;				//timeout [s]
	char host_name[256];		// Host name of this computer 
    
    int32_t tmp_databuffer;
	
    int32_t databuffer_fix[ETH_PACKET_LENGTH];		// Buffer for outgoing data
    int32_t incoming_fix[ETH_PACKET_LENGTH_RECV];			// Buffer for return data
    float databuffer_float[ETH_PACKET_LENGTH];		// Buffer for outgoing data
    float incoming_float[ETH_PACKET_LENGTH_RECV];			// Buffer for return data
	

    int tmp_time;

	// Platform specific variables for timing 
    #ifdef _WIN32
        LARGE_INTEGER t1;
        LARGE_INTEGER t2;
        LARGE_INTEGER freq;
    #else
        struct timeval t1;          // For timing call length
        struct timeval t2;          // For timing call length
    #endif 

 
    #ifdef _WIN32
    	int iResult;
		// Open windows connection
		iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
		if (iResult != 0) {
	    	printf("Could not open Windows connection. WSAStartup failed: %d\n", iResult);
    		return 1;
		}
	#endif



	server = gethostbyname(ip_address);
	port_number = port_number;
	timeout=4; //timeout [s]

	


    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host1\n");
		#ifdef _WIN32
			WSACleanup();
		#endif
		return 1;
    }
    
    // Open a datagram socket.
    socket_handle = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (socket_handle == 0xFFFF){
        printf("Could not create socket.\n");
		#ifdef _WIN32
			WSACleanup();
		#endif
		return 1;
    }
    
    
    // Clear out server struct
    memset( (void *) &server_address, 0, sizeof(server_address));
   
	//Set family and port
    server_address.sin_family = AF_INET;
	server_address.sin_port = htons(port_number);
    
    //Set server address
	memcpy((char *)&server_address.sin_addr.s_addr,
          (char *)server->h_addr,
          server->h_length);

	


	
	#ifdef _WIN32
        QueryPerformanceCounter(&t1);
    #else
        gettimeofday(&t1, NULL);
    #endif
    
    // Set timeout values
    
    tv.tv_sec = timeout;
    tv.tv_usec = 0;
    
    // Set FDS u/p
    
    FD_ZERO(&Reader);
    FD_SET(socket_handle, &Reader);


		// Input data scaling for fixed point
	for ( i = 0; i < ETH_PACKET_LENGTH; i++)
	{
        
        if (FLOAT_FIX==1) { //fixed-point
            
           if ((i==ETH_PACKET_LENGTH-1) || (i==ETH_PACKET_LENGTH-2))
                databuffer_fix[i]=(int32_t)(din[i]);
           else 
                databuffer_fix[i]=(int32_t)(din[i]*pow(2,FRACTIONLENGTH));

           //databuffer_fix[i]=(int32_t)tmp_databuffer;
           
           // printf("din[%d]=%x\n",i,din[i]);
           //printf("databuffer_fix[%d]=%x\n",i,databuffer_fix[i]);

		}
        else if (FLOAT_FIX==0) //floating-point
            databuffer_float[i]=(float)din[i];
        
        
        
        
	}
    
    
    if (FLOAT_FIX==1) { //fixed-point
        err = sendto(socket_handle, (void *)databuffer_fix, sizeof(databuffer_fix), 0,(struct sockaddr *)&server_address, saddr_len);
    }
    else if (FLOAT_FIX==0) { //floating-point
         err = sendto(socket_handle, (void *)databuffer_float, sizeof(databuffer_float), 0,(struct sockaddr *)&server_address, saddr_len);
    }
    if (!err){
        error("Error transmitting data.\n");
		#ifdef _WIN32
			closesocket(socket_handle);
			WSACleanup();
		#else
			close(socket_handle);
		#endif
		return 1;
    }
    
    
    // --------read from DDR--------
    
    if (Packet_type==4)
    {
    
        ss = select(socket_handle+1, &Reader, NULL, NULL, &tv);

        if (ss)
        {
            if (FLOAT_FIX==1) { //fixed-point
                err = recvfrom(socket_handle, (void *)incoming_fix, sizeof(incoming_fix), 0,NULL,NULL);
                }
            else if (FLOAT_FIX==0) { //floating-point
                err = recvfrom(socket_handle, (void *)incoming_float, sizeof(incoming_float), 0,NULL,NULL);
            }
            if (err < 0) 
                {error("Error receiving data.\n");
                #ifdef _WIN32
                    closesocket(socket_handle);
                    WSACleanup();
                #else
                    close(socket_handle);
                #endif
                return 1;
            }
            else
            {
                 //output data scaling for fixed point
                 for ( i = 0; i < ETH_PACKET_LENGTH_RECV; i++)
                {
                     //printf("incoming_fix[%d]=%x\n",i,incoming_fix[i]);
                     
                    if (FLOAT_FIX==1) { //fixed-point
						//printf("incoming_fix[%d]=%x\n", i,incoming_fix[i]);
                        dout[i] = (double)((double)incoming_fix[i])/pow(2,FRACTIONLENGTH);
                    }
                    else if (FLOAT_FIX==0) //floating-point
                        dout[i] = (double)incoming_float[i];
                    
                }
				
				 if (FLOAT_FIX==1)  //fixed-point
					dout[ETH_PACKET_LENGTH_RECV-2]=(double)incoming_fix[ETH_PACKET_LENGTH_RECV-2]; //IP is running: 1=YES, 0=NO
				else if (FLOAT_FIX==0) //floating-point
					dout[ETH_PACKET_LENGTH_RECV-2]=(double)incoming_float[ETH_PACKET_LENGTH_RECV-2]; //IP is running: 1=YES, 0=NO
				
				
				
            }
        } 
        else 
        {
                error("Time out \n");
                #ifdef _WIN32
                    closesocket(socket_handle);
                    WSACleanup();
                #else
                    close(socket_handle);
                #endif
                return 1;
        }

       


        *FPGA_time=0;


    }
	
	*PC_time=0;
    

    
#ifdef _WIN32
    closesocket(socket_handle);
    WSACleanup();
#else
    close(socket_handle);
#endif

return 0;
}




int TCPclient_wrap(char ip_address[], unsigned port_number,double din[ETH_PACKET_LENGTH],unsigned Packet_type, double dout[ETH_PACKET_LENGTH_RECV], double *PC_time, double *FPGA_time)
{
    
    int socket_handle; // Handle for the socket
    int connect_id; // Connection ID
    struct sockaddr_in server_address;	// Server address
	struct sockaddr_in client_address;	// client address
    int saddr_len = sizeof(server_address); // Server address length
	int caddr_len = sizeof(client_address); // Client address length
    struct hostent *server;		// Server host entity
	struct hostent *client;		// Client host entity
    int n;						// Iterator
    int k;						// Iterator
	int i;
    struct timeval tv;			// Select timeout structure
    fd_set Reader;				// Struct for select function
    int err;					// Error flag for return data
    int ss;						// Return from select function
	
	int timeout;				//timeout [s]
	char host_name[256];		// Host name of this computer 

    int tmp_time;
    int32_t tmp_databuffer;
        
    int32_t databuffer_fix[ETH_PACKET_LENGTH];		// Buffer for outgoing data
    int32_t incoming_fix[ETH_PACKET_LENGTH_RECV];			// Buffer for return data
    float databuffer_float[ETH_PACKET_LENGTH];		// Buffer for outgoing data
    float incoming_float[ETH_PACKET_LENGTH_RECV];			// Buffer for return data
    
    


	// Platform specific variables for timing 
    #ifdef _WIN32
        LARGE_INTEGER t1;
        LARGE_INTEGER t2;
        LARGE_INTEGER freq;
    #else
        struct timeval t1;          // For timing call length
        struct timeval t2;          // For timing call length
    #endif 

 
    #ifdef _WIN32
    	int iResult;
		// Open windows connection
		iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
		if (iResult != 0) {
	    	printf("Could not open Windows connection. WSAStartup failed: %d\n", iResult);
    		return 1;
		}
	#endif

	server = gethostbyname(ip_address);
	port_number = port_number;
	timeout=4; //timeout [s]

	


    if (server == NULL) {
        fprintf(stderr,"ERROR, no such host1\n");
		#ifdef _WIN32
			WSACleanup();
		#endif
		return 1;
    }
    
    // Open a datagram socket.
    socket_handle = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (socket_handle == 0xFFFF){
        printf("Could not create socket.\n");
		#ifdef _WIN32
			WSACleanup();
		#endif
		return 1;
    }
    
    
    // Clear out server struct
    memset( (void *) &server_address, 0, sizeof(server_address));
   
	//Set family and port
    server_address.sin_family = AF_INET;
	server_address.sin_port = htons(port_number);
    
    //Set server address
	memcpy((char *)&server_address.sin_addr.s_addr,
          (char *)server->h_addr,
          server->h_length);

    // Connect to the server
	if (connect(socket_handle, (struct sockaddr *)&server_address, sizeof(struct sockaddr_in)))
	{
		fprintf(stderr, "Cannot bind address to socket.\n");
		#ifdef _WIN32
			closesocket(socket_handle);
			WSACleanup();
		#else
			close(socket_handle);
		#endif
		return 1;
	}     



	
	#ifdef _WIN32
        QueryPerformanceCounter(&t1);
    #else
        gettimeofday(&t1, NULL);
    #endif
    
    // Set timeout values
    
    tv.tv_sec = timeout;
    tv.tv_usec = 0;
    
    // Set FDS u/p
    
    FD_ZERO(&Reader);
    FD_SET(socket_handle, &Reader);


	// Input data scaling for fixed point
	for ( i = 0; i < ETH_PACKET_LENGTH; i++)
	{
        
        if (FLOAT_FIX==1) { //fixed-point
            
           if ((i==ETH_PACKET_LENGTH-1) || (i==ETH_PACKET_LENGTH-2))
                tmp_databuffer=(int32_t)(din[i]);
           else 
                tmp_databuffer=(int32_t)(din[i]*pow(2,FRACTIONLENGTH));

           databuffer_fix[i]=(int32_t)tmp_databuffer;

		}
        else if (FLOAT_FIX==0) //floating-point
            databuffer_float[i]=(float)din[i];
	}
    
    if (FLOAT_FIX==1) //fixed-point
        err = send(socket_handle, (void *)databuffer_fix, sizeof(databuffer_fix), 0);
    else if (FLOAT_FIX==0) //floating-point
        err = send(socket_handle, (void *)databuffer_float, sizeof(databuffer_float), 0);
         

    if (!err){
        error("Error transmitting data.\n");
		#ifdef _WIN32
			closesocket(socket_handle);
			WSACleanup();
		#else
			close(socket_handle);
		#endif
		return 1;
    }
    

    // --------read from DDR--------
    
    if (Packet_type==4)
    {
        
        ss = select(socket_handle+1, &Reader, NULL, NULL, &tv);

        if (ss)
        {
            if (FLOAT_FIX==1)  //fixed-point
                err = recv(socket_handle, (void *)incoming_fix, sizeof(incoming_fix), 0);
            else if (FLOAT_FIX==0) //floating-point
                err = recv(socket_handle, (void *)incoming_float, sizeof(incoming_float), 0);
            
            
            if (err < 0) 
                {error("Error receiving data.\n");
                #ifdef _WIN32
                    closesocket(socket_handle);
                    WSACleanup();
                #else
                    close(socket_handle);
                #endif
                return 1;
            }
            else
            {
                 //output data scaling for fixed point
                 for ( i = 0; i < ETH_PACKET_LENGTH_RECV; i++)
                {
                    if (FLOAT_FIX==1) { //fixed-point
                        //printf("incoming_fix[%d]=%x\n", i,incoming_fix[i]);
                        dout[i] = (double)((double)incoming_fix[i])/pow(2,FRACTIONLENGTH);
                    }
                    else if (FLOAT_FIX==0) //floating-point
                        dout[i] = (double)incoming_float[i];
                    
                }
				
				if (FLOAT_FIX==1)  //fixed-point
					dout[ETH_PACKET_LENGTH_RECV-2]=(double)incoming_fix[ETH_PACKET_LENGTH_RECV-2]; //IP is running: 1=YES, 0=NO
				else if (FLOAT_FIX==0) //floating-point
					dout[ETH_PACKET_LENGTH_RECV-2]=(double)incoming_float[ETH_PACKET_LENGTH_RECV-2]; //IP is running: 1=YES, 0=NO
				
				
				
            }
        } 
        else 
        {
                error("Time out \n");
                #ifdef _WIN32
                    closesocket(socket_handle);
                    WSACleanup();
                #else
                    close(socket_handle);
                #endif
                return 1;
        }

       
       
    }


    *FPGA_time=0;
	*FPGA_time=0;

	
    
#ifdef _WIN32
    closesocket(socket_handle);
    WSACleanup();
#else
    close(socket_handle);
#endif

return 0;
}






void error(char *msg){
    perror(msg);
    exit(1);
}


