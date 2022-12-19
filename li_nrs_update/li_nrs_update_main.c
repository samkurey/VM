#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#include "gscbdef.h"
#include "gscbio.h"
#include "gscblookupdef.h"
#include "gscblog.h"

#include "kppdef.h"
#include "kppstruct.h"
#include "kppproto.h"

#include "li_nrs_update.h"

APPL_EXCEP_LOG_T excep_log;
PROG_ACCESS_LOG_T prog_log;

int ora_conn = 0;


void main(void)
{
	LI_NRS_UPDATE_REQ_T req;
	LI_P_HEADER_T header;

	char *temp_ptr = NULL;
	
	//unsigned char msg_id[25];
	int error_code = 0;
	int ret = 0;
	LI_PUT_FIN_DATA_T put_fin_data;

	LI_NRS_UPDATE_REQ_T nrs_data;

	FIN_DATA_T *fin_data;
	int txn_type = TXN_TYPE_JPN_UPDATE;

	unsigned char leg_msg_id[MSG_ID_SIZE];
	unsigned char pReplyMsg[LI_REPLY_MSG_SIZE];
	int iReplyMsgLen;
	char sErrMessage[LI_ERROR_MSG_SIZE];

	sErrMessage[0] = '\0';

	memset(&put_fin_data, 0, sizeof(LI_PUT_FIN_DATA_T));
	
	temp_ptr = (char *) &req;

	printf("Test Application !! \n");
//	ret = ora_connect();

	if(GMPC_GOOD != ret)
	{
		printf("\nCan't connect to Oracle");
		return;
	}

	printf("\nConnected to Oracle");

/*	ret = li_init(LI_ENQUIRE_1N_CHECK); */

	if(ret != GMPC_GOOD)
	{
		printf("Ret from li_init = %d\n", ret);
		return;
	}

	printf("\nli_init successfull");
	memset(&header, 0, sizeof(LI_P_HEADER_T));
	memset(temp_ptr, 0, sizeof(LI_NRS_UPDATE_REQ_T));
	memset(&nrs_data, 0, sizeof(LI_NRS_UPDATE_REQ_T));
	//req.txn_type = txn_type; salmi rem

	strcpy(header.gsc_no, "10050011");
	strcpy(header.user_id, "MATTSOFI");
	strcpy(header.workstation_id, "MYGPCCQ29");
	strcpy(header.trans_date, "20010630");
	strcpy(header.trans_time, "113455");

	/* copy values here for the ic_data_req buffer */


	put_fin_data.counter = 2;
	put_fin_data.len = 36;

	fin_data = (FIN_DATA_T *) malloc(sizeof(FIN_DATA_T) * 2);
	put_fin_data.fin_data = fin_data;

	fin_data->pay_mode = 1;
	fin_data->amt_type = 'C';
	strcpy(fin_data->revenue_code, "1234567");
	strcpy(fin_data->amt_value, "23400");
	fin_data++;

	fin_data->pay_mode = 1;
	fin_data->amt_type = 'C';
	strcpy(fin_data->revenue_code, "7654321");
	strcpy(fin_data->amt_value, "300");

	//create data for nrs_data
 	strcpy(nrs_data.misc.kptno,"840604010101");
 	strcpy(nrs_data.misc.idtype,"123");
 	strcpy(nrs_data.misc.idno,"840604010101   ");
 	strcpy(nrs_data.misc.current_long_name,"ABDUL MUTALLIB BIN RASID");
 	strcpy(nrs_data.misc.gmpc_short_name1,"ABDUL MUTALLIB BIN RASID");
 	strcpy(nrs_data.misc.gmpc_short_name2,"ABDUL MUTALLIB");
	strcpy(nrs_data.misc.gmpc_short_name3,"ABDUL MUTALLIB");
	strcpy(nrs_data.misc.dob, "20010219");
 	
 	strcpy(nrs_data.new_address.address1,"No 97, Jalan KL");
 	strcpy(nrs_data.new_address.address2,"Taman Connough");
 	strcpy(nrs_data.new_address.address3,"Kuala Lumpur");
 	strcpy(nrs_data.new_address.post_code,"43232");
 	nrs_data.new_address.city_code = 101;

	nrs_data.misc.trans_type = 1;
	nrs_data.misc.unknown_birth_ind = 'B';
	strcpy(nrs_data.misc.birth_place_code,"34257890");
	nrs_data.misc.gender = '1';
	nrs_data.misc.religion = '2';
	strcpy(nrs_data.misc.race,"ABCD");
	nrs_data.misc.hk_ind = '5';
	strcpy(nrs_data.misc.gmpc_remarks1,"TESTING TESTING");
	strcpy(nrs_data.misc.gmpc_remarks2,"TESTING TESTING");
	nrs_data.misc.hk_ind = '5';
	nrs_data.misc.resi_status = '7';
	strcpy(nrs_data.misc.art_color_code,"001");
	nrs_data.misc.pol_army_id = '4';
	strcpy(nrs_data.misc.police_army_no,"001767644478");
	strcpy(nrs_data.misc.retire_date,"20000101");
	strcpy(nrs_data.misc.citizen_nation_code,"2000");
	strcpy(nrs_data.misc.birth_country_code,"4000");
	strcpy(nrs_data.misc.appl_no,"5676444");
	nrs_data.misc.quality_status = '4';
	nrs_data.misc.finger_acquision_source = '9';
	strcpy(nrs_data.misc.father_idtype,"000");
	strcpy(nrs_data.misc.father_idno,"470707079081");
	strcpy(nrs_data.misc.mother_idtype,"000");
	strcpy(nrs_data.misc.mother_idno,"570707079082");
	strcpy(nrs_data.misc.sponsor_idtype,"000");
	strcpy(nrs_data.misc.sponsor_idno,"570707079082");
	strcpy(nrs_data.misc.sponsor_name,"MALIK IBN REJAB");
	strcpy(nrs_data.misc.sponsor_relcode,"09");
	strcpy(nrs_data.misc.apply_place_cd,"34454678");
	strcpy(nrs_data.misc.reg_date,"20130405");
	strcpy(nrs_data.misc.telephone_no,"0462344322");
	strcpy(nrs_data.misc.kptno,"540220442244");
	strcpy(nrs_data.misc.status_date, "20170405");
	strcpy(nrs_data.misc.operator_id, "83499922");
	nrs_data.misc.gmpc_version = 3;
	strcpy(nrs_data.misc.jpn_remarks1, "TESTING1");
	strcpy(nrs_data.misc.jpn_remarks2, "TESTING2");
	strcpy(nrs_data.misc.probl_reason_code, "12345");
	nrs_data.misc.indicator2 = '3';
	nrs_data.misc.trans_type = 2;


	printf("BEFORE \n");
	ret = li_nrs_update_p(header, put_fin_data, nrs_data, leg_msg_id, &error_code,pReplyMsg, &iReplyMsgLen, sErrMessage);
	printf("AFTER \n");
	if(GMPC_GOOD != ret)
	{
		printf("li_nrs_update_p %d\n",error_code);
		return;
	}

	printf("Request put successfully !! - %d\n", ret);

	//li_end();

	printf("li_end returned - %d\n", ret);

	return;

}
