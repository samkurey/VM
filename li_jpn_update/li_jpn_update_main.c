#include <windows.h>
#include <userlog.h>
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"


#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "field_id.h"

#include "li_jpn_gmpc_surrender.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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
	LI_JPN_GMPC_SURRENDER_REQ_T req;

	unsigned char msg_id[MSG_ID_SIZE];
	int error_code;

	int ret;

	ret = ora_connect();

	if(GMPC_GOOD != ret)
	{
		printf("\nCan't connect to Oracle");
		return;
	}

	printf("\nConnected to Oracle");

	ret = li_init(LI_UPDATE_GMPC_SURRENDER);

	if(GMPC_GOOD != ret)
	{
		printf("Ret from li_init = %d\n", ret);
		return;
	}

	printf("\nli_init successfull");

	memset(&header, 0, sizeof(LI_P_HEADER_T));
	strcpy(header.gsc_no, "1001");
	strcpy(header.user_id, "Amit");
	strcpy(header.workstation_id , "GMPC29");
	strcpy(header.trans_date, "20010630");
	strcpy(header.trans_time, "113455");
	

	memset((void *) &req, 0, sizeof(LI_JPN_GMPC_SURRENDER_REQ_T));
	
	strcpy(req.kpt_number, "630408085999");
	req.gmpc_version = 1;
	strcpy(req.surrender_date, "");
	strcpy(req.pol_army_join_date, "");
	strcpy(req.police_army_no, "");
	strcpy(req.passport_no, "");
	strcpy(req.country_migrate_date, "");
	strcpy(req.kp15_issue_date, "");
	strcpy(req.new_migration_country, "");
	req.surrender_code = '2';	/* 2,3,4 */
	req.pol_army_code = 'P';	/* 'T' */
	
	ret = li_jpn_gmpc_surrender_p(header,req, (unsigned char *)&msg_id[0], &error_code);
		
	if(GMPC_GOOD != ret)
	{
		printf("li_jpn_gmpc_surrender_p returned %d\n",error_code);
		return;
	}

	li_end();

	printf("\nli_end returned - %d", ret);

	return;
}


		
			


