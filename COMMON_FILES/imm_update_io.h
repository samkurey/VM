/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/IMM_UPDATE/imm_update_io.h-arc   1.0   Nov 28 2000 11:55:14   WaghmaBR  $ */


/*************************************************************************/
/* Filename    : imm_update_io.h							             */
/* Author      : Amit Sangrulkar, Brijesh Patil							 */
/* Description : The file consists of IO structure definitions for       */
/*				 IMM_UPDATE service                                      */
/* Limitations : None													 */
/*************************************************************************/

#ifndef _IMM_UPDATE_IO_

#define _IMM_UPDATE_IO_

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"

typedef struct update_imm_req_s
{
	HEADER_T header;
	/* The count indicating the no of structures of type IMM_INFO_T */
	int no_of_passports;

} IMM_UPDATE_REQ_T;

typedef struct imm_info_s
{
	char passport_no[PASSPORT_NO_SIZE];
	char document_type[JIM_DOC_TYPE_SIZE];
	char download_chip_ind;	/* 'Y' - YES or 'N' - NO */

} IMM_INFO_T;


typedef struct update_imm_resp_s
{
	HEADER_T header;

} IMM_UPDATE_RESP_T;

typedef struct passport_details_s
{
	char passport_no[PASSPORT_NO_SIZE];
	char document_type[JIM_DOC_TYPE_SIZE];
	char download_chip_ind;
	int msg_id;

} PASSPORT_DETAILS_T;

#endif
