
#include <windows.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"


#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "field_id.h"

#include "li_cancel_gmpc_update.h"

extern LI_INIT_DLL_FN_TYP li_init_dll;
extern LI_END_DLL_FN_TYP li_end_dll;

extern LI_PUT_DLL_FN_TYP li_put_dll;
extern LI_GET_DLL_FN_TYP li_get_dll;

APPL_EXCEP_LOG_T excep_log;
PROG_ACCESS_LOG_T prog_log;

int ora_conn = 0;

void main(void)
{


	LI_P_HEADER_T header;
	LI_CANCEL_GMPC_UPDATE_REQ_T req;

	LI_PUT_FIN_DATA_T jpn_fin_data = {0};
	LI_REFER_TIMESTAMP_T refer_timestamp;
	LI_CANCEL_GMPC_UPDATE_REQ_T cancel_req;
	unsigned char msg_id[MSG_ID_SIZE] = {0};
	int error_code = 0;
	char pReplyMsg[LI_REPLY_MSG_SIZE] = {0};
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE] = {0};

	int ret =0;
//	ret = li_init(LI_JPN_CANCEL_GMPC_UPD);
	if(GMPC_GOOD != ret)
	{
		printf("Ret from li_init = %d\n", ret);
		return;
	}

	memset(&header, 0, sizeof(LI_P_HEADER_T));
	memset(&req, 0, sizeof(LI_CANCEL_GMPC_UPDATE_REQ_T));
	memset(&cancel_req, 0, sizeof(LI_CANCEL_GMPC_UPDATE_REQ_T));
	memset(&refer_timestamp, 0, sizeof(LI_REFER_TIMESTAMP_T));

	strcpy(header.gsc_no, "10050011");
	strcpy(header.user_id, "MATTSOFI");
	strcpy(header.workstation_id, "MYGPCCQ29");

	strcpy(req.appnt_kpt, "610101066411");
	req.gmpc_version_no = 1;
	strcpy(req.card_lost_count,"02");
    strcpy(req.address.address1, "No 10, Jalan pp 6/10");
	strcpy(req.address.address2, "Taman Putra Permai");
	strcpy(req.address.address3, "Puchong, Selangor");
	strcpy(req.address.post_code, "47500");
	req.address.city_code = 9;
	strcpy(req.address.state_code, "005");
	strcpy(req.last_changed_date, "14122002");
	strcpy(req.cancel_txn_code, "444");
	strcpy(req.appl_no, "453368000034343433222567");
	req.lostcntneg = 1;
	req.lostcntcrime = 0;
	req.lostcntdis = 1;
	req.approval_status =5;
	
	// new requirement
	req.card_lost_count[CARD_LOST_COUNT_SIZE-1] = '\0';

	//ret = li_cancel_gmpc_update_p(header, req,(char *) &msg_id, &error_code);
	ret = li_cancel_gmpc_update_p(header, jpn_fin_data, refer_timestamp, cancel_req,msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);

	if(GMPC_GOOD != ret)
	{
		printf("Popat. li_update_gmpc_stat_p returned %d\n", error_code);
		
	}
	printf("li_update_gmpc_stat_p OK\n");

	return;
}


