//These macros are to recoganise the report type.

//#define CALL_NOT_REQUIRED 2
//#define CALL_REQUIRED	  0


#include "jpn_status_upd_io.h"
//#include "KPPstruct.h"

#if defined(__cplusplus)
extern "C" {
#endif

#ifndef _JPNSTAT_UPD_H_
#define _JPNSTAT_UPD_H_



int InitOra();
int LoginToOracle();
//int FillRequest(JPN_STATUS_UPD_REQ_T *req);
int JPNStat_Upd();
//int update_gmpc_status_to_host(JPN_STATUS_UPD_REQ_T *req, int msgid, char request_flag,LI_P_HEADER_T hdr);


#if defined(__cplusplus)
}
#endif

#endif // _JPNSTAT_UPD_H_
