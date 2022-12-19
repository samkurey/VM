
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

#include "li_update_gmpc_stat.h"

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
	LI_UPDATE_GMPC_STAT_REQ_T req;

	unsigned char leg_msg_id[MSG_ID_SIZE] = {0};
	int error_code = 0;
	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE];
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE];
	int ret =0;
/*	ret = li_init(LI_GMPC_STATUS_UPDATE);
	if(GMPC_GOOD != ret)
	{
		printf("Ret from li_init = %d\n", ret);
		return;
	} */

	strcpy(header.gsc_no, "10050011");
	strcpy(header.user_id, "MATTSOFI");
	strcpy(header.workstation_id, "MYGPCCQ29");

	strcpy(req.appnt_kpt, "610101066411");
	strcpy(req.appln_date, "22012001");
	strcpy(req.appln_gsc_no, "010100");
	strcpy(req.appln_staff_id, "Staff");
	strcpy(req.gmpc_pc_date, "20020202");
	req.gmpc_version_no = 1;
	/*****************************************/
	/* CHECK THIS OUT!!!!!!!!!!*/
	req.appln_stat2 = 'A';
//	strcpy(req.appln_type, "11");
/*	strcpy(req.doc_type, "");*/
	/*****************************************/
	strcpy(req.jpnremarks1, "Dummy GMPC status ");
	strcpy(req.jpnremarks2, "Phony GMPC status ");
	strcpy(req.card_lost_count,"02");

	strcpy(req.indicator1,"1234567");
	strcpy(req.appl_no,"1234567910111213");
	strcpy(req.probl_reason_code,"88888");
	req.indicator2 = 'C';
	strcpy(req.transaction_code,"3234");
	strcpy(req.bundleid,"0066454546");
	req.ijpn_gmpc_ind = 'F';
	strcpy(req.telephone_no,"0173232345");
	strcpy(req.personlised_date,"20130405");
	req.applpriority = 2;
	req.approval_status = 7;
/*	strcpy(req.collection_date, "13122000");
	strcpy(req.collection_gsc_no, "123");
	strcpy(req.gmpc_pc_date, "13122000");

	
	strcpy(req.issuance_date, "12122001");
	strcpy(req.issuance_staff_id, "User1");*/
	

	// new requirement
	req.card_lost_count[CARD_LOST_COUNT_SIZE-1] = '\0';

	ret = li_update_gmpc_stat_p(header, req, leg_msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);

	if(GMPC_GOOD != ret)
	{
		printf("Popat. li_update_gmpc_stat_p returned %d\n", error_code);
		
	}
	printf("li_update_gmpc_stat_p OK\n");

	return;
}


