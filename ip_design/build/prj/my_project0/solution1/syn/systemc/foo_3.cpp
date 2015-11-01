#include "foo.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void foo::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"memory_inout_req_din\" :  \"" << memory_inout_req_din.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"memory_inout_req_full_n\" :  \"" << memory_inout_req_full_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"memory_inout_req_write\" :  \"" << memory_inout_req_write.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"memory_inout_rsp_empty_n\" :  \"" << memory_inout_rsp_empty_n.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"memory_inout_rsp_read\" :  \"" << memory_inout_rsp_read.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"memory_inout_address\" :  \"" << memory_inout_address.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"memory_inout_datain\" :  \"" << memory_inout_datain.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"memory_inout_dataout\" :  \"" << memory_inout_dataout.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"memory_inout_size\" :  \"" << memory_inout_size.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"byte_inputs_in_offset\" :  \"" << byte_inputs_in_offset.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"byte_outputs_out_offset\" :  \"" << byte_outputs_out_offset.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

