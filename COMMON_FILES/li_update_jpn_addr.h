/*$Header$*/
/********************************************************************/
/* File Name   : li_update_jpn_addr.h									*/
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_update_jpn_addr_p									*/
/********************************************************************/


#ifndef _LI_UPDATE_JPN_ADDR_
#define _LI_UPDATE_JPN_ADDR_


typedef struct li_update_jpn_addr_req_s
{
	char appnt_kpt[KPT_SIZE];
	ADDRESS_T *new_address;
	//ADDRESS_T *old_address; // removed as per the IJPN requirement
	char gmpc_short_name1[GMPC_SNAME1_SIZE];
	char gmpc_short_name2[GMPC_SNAME2_SIZE];
	char gmpc_short_name3[GMPC_SNAME3_SIZE];
	char coll_center_code[KPT_COLLECTION_PLACE_SIZE];

} LI_UPDATE_JPN_ADDR_REQ_T;



/* Function prototype */
int li_update_jpn_addr_p(LI_P_HEADER_T header, 
						 LI_UPDATE_JPN_ADDR_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   );

#endif
