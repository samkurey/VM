/*$Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_get_jpj_blacklist.h-arc   1.2   Jun 04 2000 19:36:34   ThoratAD  $*/
/********************************************************************/
/* File Name   : li_get_jpj_blacklist.h                             */
/* Author      : Vageesh Patwardhan				                    */
/* Description : This file contains io structures and function		*/
/*				 prototypes required for li_get_jpj_blacklist_p & g	*/
/********************************************************************/

#ifndef _LI_GET_JPJ_BLACKLIST_
#define _LI_GET_JPJ_BLACKLIST_

typedef struct li_get_jpj_blacklist_request
{
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
} LI_GET_JPJ_BLACKLIST_REQ_T;

typedef struct li_get_bl_data_response
{
	char license_type[LIC_TYPE_SIZE];
	char blacklist_reason_code[BLACKLIST_REASON_CODE_SIZE];
	char branch_code[JPJ_BRANCH_CODE_SIZE];
	char uplift_level;
	char status;
	/* New requirement - Added on 04/07/2001 */
	char duration[BLACKLIST_DURATION_SIZE];
	char duration_ind;
	struct li_get_bl_data_response *next_blacklist;
} LI_GET_JPJ_BLACKLIST_RESP_T;

int li_get_jpj_blacklist_p(LI_P_HEADER_T header, 
					  LI_GET_JPJ_BLACKLIST_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );
int li_get_jpj_blacklist_g(LI_G_HEADER_T *header, 
						   LI_GET_JPJ_BLACKLIST_RESP_T *resp,
						   int *error_code, char *error_msg);

#endif /*_LI_GET_JPJ_BLACKLIST_*/
