/*$Header:   
/********************************************************************/
/* File Name   : li_jpn_kp13_upd.h							        */
/* Author      : Srinivasa Reddy			                        */
/* Description : This file contains io structures and function		*/
/*				 prototypes for li_jpn_kp13_upd_p		           	*/
/********************************************************************/

#ifndef _LI_JPN_KP13_UPD_
#define _LI_JPN_KP13_UPD_


typedef struct li_jpn_kp13_upd_req_s
{
	char legapplid[24+1];
	char transdate[DATE_SIZE];
	char printdate[DATE_SIZE];
	char agencytype[2+1];
	char agencyname[150+1];
	char address1[ADDRESS1_SIZE];   // agencyaddress
	char address2[ADDRESS1_SIZE];
	char address3[ADDRESS1_SIZE];
	char postcode[POSTCODE_SIZE];
	char citycode[CITY_CODE_SIZE];
	char statecode[STATECODE_SIZE];
	char kptno1[144+1];  // record contains fixed width of kptno,remarks,docserno (12+120+10)
	char kptno2[144+1];
	char kptno3[144+1];
	char kptno4[144+1];
	char kptno5[144+1];
	char kptno6[144+1];
	char kptno7[144+1];
	char kptno8[144+1];
	char kptno9[144+1];
	char kptno10[144+1];
	char kptno11[144+1];
	char kptno12[144+1];
	char kptno13[144+1];
	char kptno14[144+1];
	char kptno15[144+1];
	char kptno16[144+1];
	char kptno17[144+1];
	char kptno18[144+1];
	char kptno19[144+1];
	char kptno20[144+1];
	char kptno21[144+1];
	char kptno22[144+1];
	char kptno23[144+1];
	char kptno24[144+1];
	char kptno25[144+1];

} LI_JPN_KP13_UPD_REQ_T;



/* Utility functions (for internal use only) */
long get_buffer_size1(LI_JPN_KP13_UPD_REQ_T *req);



int li_jpn_kp13_upd_p(LI_P_HEADER_T header,
					LI_JPN_KP13_UPD_REQ_T req,
				    unsigned char *msg_id, int *error_code,
					unsigned char *pReplyMsg,
					int *iReplyMsgLen,
					char *sErrMessage);


#endif

