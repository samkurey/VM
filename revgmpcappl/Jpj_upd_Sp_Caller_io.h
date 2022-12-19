/* $Header:   
/****************************************************************************/
/* Filename    : Jpj_Upd_Sp_Caller_io.h										*/
/* Author      : 											                */
/* Description : This file contains the structures for I/O buffers for the	*/
/*				 service Jpj_Upd_Sp_Caller.									*/
/****************************************************************************/

//#include "Jpj_Upd_Caller.h"


#ifndef _JPJ_UPD_SP_CALLER_IO_
#define _JPJ_UPD_SP_CALLER_IO_

//#define CPF_FILE_SIZE		30721     // 30KB
//#define CPF_FILE_NAME		50



typedef struct jpj_upd_caller_request
{
	HEADER_T header;	
	char strname[300];
	char jpjreqtype[2];
	
} JPJ_UPD_CALLER_REQ_T; 




typedef struct jpj_upd_caller_response
{
	HEADER_T header;	
	char RETURNCODE[5+1];
	int com_result;

} JPJ_UPD_CALLER_RESP_T;






#endif /* #ifndef _JPJ_UPD_SP_CALLER_IO_ */
