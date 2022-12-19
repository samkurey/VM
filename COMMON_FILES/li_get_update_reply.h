/* $Header$ */
/********************************************************************/
/* File Name   : li_get_update_reply.h                              */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures requried for		*/
/*				 li_get_update_reply_g								*/
/********************************************************************/

#ifndef _LI_GET_UPDATE_REPLY_
#define _LI_GET_UPDATE_REPLY_

typedef struct li_get_update_reply_resp
{
	REPLY_HEADER_T reply;
	unsigned char msg_type;
} LI_GET_UPDATE_REPLY_RESP_T;

int li_get_update_reply_g(LI_G_HEADER_T *header, 
						   LI_GET_UPDATE_REPLY_RESP_T *resp,
						   int *error_code);



#endif /*_LI_GET_UPDATE_REPLY_*/
