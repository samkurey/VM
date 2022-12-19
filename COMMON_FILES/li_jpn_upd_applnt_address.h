/* $Header$ */
/********************************************************************/
/* File Name   : li_jpn_upd_applnt_address.h                        */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_jpn_upd_applnt_address_p					    */
/********************************************************************/

#ifndef _LI_JPN_UPD_APPLNT_ADDRESS_
#define _LI_JPN_UPD_APPLNT_ADDRESS_

/* Structs for li_jpn_upd_applnt_address_p */
typedef struct li_address_info_req_s
{
	char kptno[KPT_SIZE];
	ADDRESS_T new_address;
	char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME2_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];
	char new_collcenter[APPL_COLLCENTER_SIZE+2];
	//char old_collcenter[APPL_COLLCENTER_SIZE];

} LI_ADDRESS_INFO_REQ_T;

/* Function Prototypes */
int li_update_jpn_addr_p(LI_P_HEADER_T header,
							LI_ADDRESS_INFO_REQ_T req,
							unsigned char *msg_id, int *error_code,
							unsigned char *pReplyMsg,
							int *iReplyMsgLen,
							char *sErrMessage);


#endif /* _LI_JPN_UPD_APPLNT_ADDRESS_ */


