
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
	unsigned char msg_id[MSG_ID_SIZE];
	int error_code;

	int ret;
	ret = li_init(LI_JPN_CANCEL_GMPC_UPD);
	if(GMPC_GOOD != ret)
	{
		printf("Ret from li_init = %d\n", ret);
		return;
	}

	memset(&header, 0, sizeof(LI_P_HEADER_T));
	memset(&req, 0, sizeof(LI_CANCEL_GMPC_UPDATE_REQ_T));

	strcpy(header.gsc_no, "10050011");
	strcpy(header.user_id, "MATTSOFI");
	strcpy(header.workstation_id, "MYGPCCQ29");

	strcpy(req.appnt_kpt, "610101066411");
	strcpy(req.cancel_trx_date, "04052001");
	strcpy(req.last_changed_date, "14121996");

/*
	strcpy(req.collection_date, "13122000");
	strcpy(req.collection_gsc_no, "123");
	strcpy(req.gmpc_pc_date, "13122000");
	strcpy(req.gmpc_remarks1, "Dummy GMPC status ");
	strcpy(req.gmpc_remarks2, "Phony GMPC status ");
	req.gmpc_version_no = 1;
	strcpy(req.issuance_date, "12122001");
	strcpy(req.issuance_staff_id, "User1");
	strcpy(req.card_lost_count,"02");
*/
	// new requirement
	req.card_lost_count[CARD_LOST_COUNT_SIZE-1] = '\0';

	ret = li_cancel_gmpc_update_p(header, req,(char *) &msg_id, &error_code);

	if(GMPC_GOOD != ret)
	{
		printf("Popat. li_update_gmpc_stat_p returned %d\n", error_code);
		
	}
	printf("li_update_gmpc_stat_p OK\n");

	return;
}


