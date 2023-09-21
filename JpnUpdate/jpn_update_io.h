/* $Header$ */

/********************************************************************/
/* File Name   : jpn_update_io.h	                                */
/* Author      : Amit Sangrulkar                                    */
/* Description : This file contains IO structures used by			*/
/*               JPN_UPDATE service .								*/
/********************************************************************/

#ifndef _JPN_UPDATE_IO_
#define _JPN_UPDATE_IO_

typedef struct jpn_update_req_s
{
	HEADER_T header;
	char invoke_mode;

} JPN_UPDATE_REQ_T;

typedef struct jpn_update_resp_s
{
	HEADER_T header;
	//char kptNo[13]; //added by samsuri on 29 Dec 2022

} JPN_UPDATE_RESP_T;

/* Miscalleneous structures used in the service */

typedef struct txn_info_s
{
	int txn_sr_no;
	int txn_type;
	char txn_code[TRANSACTION_CODE_SIZE];
	char legacy_req_flag;
	int message_id;
	int request_status;
	
} TXN_INFO_T;

#endif






