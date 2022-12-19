/* $Header:   $ */
/********************************************************************************/
/* Filename    : jpn_status_upd_io.h										*/
/* Author      : Srinivasa Reddy													            */
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 service JPN_STATUS_UPD.									*/
/********************************************************************************/

#ifndef _JPN_STATUS_UPD_IO_
#define _JPN_STATUS_UPD_IO_

#define CALL_NOT_REQUIRED 2
#define CALL_REQUIRED	  0

typedef struct jpn_status_upd_req_s
{
	HEADER_T header;		
	char applid[APP_ID_SIZE];

} JPN_STATUS_UPD_REQ_T;


typedef struct jpn_status_upd_resp_s
{
	HEADER_T header;
	

} JPN_STATUS_UPD_RESP_T;



#endif /* #ifndef _JPN_STATUS_UPD_IO_	*/
