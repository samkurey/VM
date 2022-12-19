/*$Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpnmsg/liupdchangekptno/li_upd_change_kptno.h-arc   1.7   Jul 17 2002 16:59:42   ShivamP  $*/
/********************************************************************/
/* File Name   : li_upd_change_kptno.h								*/
/* Author      : Shivamallu.P				                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_upd_change_kptno_p				*/
/********************************************************************/

#ifndef _LI_UPD_CHANGE_KPTNO_
#define _LI_UPD_CHANGE_KPTNO_

typedef struct li_upd_change_kptno
{
	char kptno[KPT_SIZE];
	char oldkptno[KPT_SIZE];
	char dob[DATE_SIZE];
	char gender;
	char birth_state_code[STATE_CODE_SIZE];
	char birth_country_code[COUNTRY_CODE_SIZE];
	char kpt_cancel_date[DATE_SIZE];
	char kpt_cancel_reason_code[CANCEL_CODE_SIZE];
	// Changed these fields size from 40 to 60 on 7/4/2009
	//char kpt_cancel_remarks1[KPT_CANCEL_REMARKS_SIZE];
	//char kpt_cancel_remarks2[KPT_CANCEL_REMARKS_SIZE];

	char kpt_cancel_remarks1[JPNREMARKS1_SIZE];
	char kpt_cancel_remarks2[JPNREMARKS1_SIZE];

	char legapplid[LEGAPPLID_SIZE]; // Added tis field on 17/08/2007 for release 3.10

} LI_UPD_CHANGE_KPTNO_REQ_T;

int li_upd_change_kptno_p(LI_P_HEADER_T header,LI_UPD_CHANGE_KPTNO_REQ_T req,
							unsigned char *msg_id, int *error_code,
							unsigned char *pReplyMsg,
						    int *iReplyMsgLen,
						    char *sErrMessage);

#endif

