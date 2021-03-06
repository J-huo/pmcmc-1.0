// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2014.1
// Copyright (C) 2014 Xilinx Inc. All rights reserved.
// 
// ==============================================================

#include "gammalog_cof.h"

using namespace std;
using namespace sc_core;
using namespace sc_dt;

void gammalog_cof::proc_mem_q()
{
    sc_lv<1 * DataWidth> tmp = mem_q.read();
    sc_lv<DataWidth> tmp0 = tmp(1 * DataWidth - 1, 0 * DataWidth);
    q0.write(tmp0);

}


void gammalog_cof::proc_mem_ra()
{
    sc_lv<1 * AddressWidth> tmp;
    tmp = (address0.read());
    mem_ra.write(tmp);
}


void gammalog_cof::proc_mem_ce()
{
    sc_lv<1> tmp;
    tmp[0] = ce0.read();
    mem_ce.write(tmp);
}


