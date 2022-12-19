/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/GENERATE_KPT/generate_kpt_io.h-arc   1.1   Nov 29 2002 09:30:54   PatilBB  $ */


/*************************************************************************/
/* Filename    : generate_kpt_io.h							             */
/* Author      : Brijesh Patil											 */
/* Description : The file consists of IO structure definitions for       */
/*				 GENERATE_KPT service                                    */
/* Limitations : None													 */
/*************************************************************************/

#ifndef _GENERATE_KPT_IO_

#define _GENERATE_KPT_IO_

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "li_jpn_missed_opex_upd.h"
#include "li_upd_change_kptno.h"
#include "li_nrs_update.h"

typedef struct generate_kpt_req_s
{
	HEADER_T header;
	char date_of_birth[DATE_SIZE];
	char state_of_birth[STATE_CODE_SIZE];
	char gender;
//	char txn_date[DATE_SIZE];
//	char txn_time[TIME_SIZE];
	char upd_flag;
	char new_kptno[KPT_SIZE];
} GENERATE_KPT_REQ_T;

/* Part of this structure is commented for IJPN as the image part is moved to AFIS */
typedef struct jpn_missed_opex_upd_req_s
{
	int txn_type; 
	NAME_T appnt_name;
	ADDRESS_T new_address;
	LI_MISSED_OPEX_MISC_T misc;
	LI_AFIS_MISC_T afis_misc;
	LI_PASSPORT_INFO_T pp_info;

	char lf_finger_ind[FINGER_IND_SIZE];
	long lf_quality_score;
	unsigned char lf_finger_pattern;
	unsigned char lf_thumb_status;
	//long lf_fp_img_size;
	long lf_orginal_minutiae_size;
	long lf_normalized_minutiae_size;
	//long lf_matrix_buffer_size;

	char rf_finger_ind[FINGER_IND_SIZE];
	long rf_quality_score;
	unsigned char rf_finger_pattern;
	unsigned char rf_thumb_status;
	//long rf_fp_img_size;
	long rf_orginal_minutiae_size;
	long rf_normalized_minutiae_size;
	//long rf_matrix_buffer_size;

	long lowres_portrait_size;
	//long highres_portrait_size;

	//FINGER_T left_finger_prints;
	//FINGER_T right_finger_prints;
	//PORTRAIT_T low_res_portrait;
	//PORTRAIT_T hi_res_portrait;
	
} JPN_MISSED_OPEX_UPD_REQ_T;

/*
typedef struct nrs_update_req_s
{
	char current_long_name[LONG_NAME_SIZE];  
	char gmpc_short_name1[GMPC_SNAME1_SIZE]; 
	char gmpc_short_name2[GMPC_SNAME2_SIZE]; 
	
	ADDRESS_T new_address;
	LI_MISSED_OPEX_MISC_T misc;	
	LI_PASSPORT_INFO_T pp_info;

	long lf_normalized_minutiae_size;
	long rf_normalized_minutiae_size;
	
} NRS_UPDATE_REQ_T;
*/

typedef struct generate_kpt_resp_s
{
	HEADER_T header;
	char kptno[KPT_SIZE];
	char leg_err_msg[RESPONSE_MESSAGE_SIZE];
} GENERATE_KPT_RESP_T;

#endif
