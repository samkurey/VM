/* $Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_update_passport_load.h-arc   1.1   Jun 06 2000 16:04:18   ThoratAD  $ */
/********************************************************************/
/* File Name   : li_update_passport_load.h                          */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures required for		*/
/*				 li_update_passport_load_p							*/
/********************************************************************/

#ifndef _LI_UPDATE_PASSPORT_LOAD_
#define _LI_UPDATE_PASSPORT_LOAD_

/* Structs for li_update_passport_load_p */

typedef struct li_update_passport_load_req
{
	char passport_no[PASSPORT_NO_SIZE];
	char document_type[JIM_DOC_TYPE_SIZE];
	char download_chip_ind;
} LI_UPDATE_PASSPORT_LOAD_REQ_T;


/* Function Prototypes */
int li_update_passport_load_p(LI_P_HEADER_T header, 
						   LI_UPDATE_PASSPORT_LOAD_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code
						   );

#endif

