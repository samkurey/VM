/*$Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpnmsg/jpn_missed_opex_upd/li_jpn_missed_opex_upd.c-arc   1.5   Nov 01 2001 17:13:16   SangruAL  $*/
/********************************************************************/
/* File Name	:li_jpn_missed_opex_upd.c								    */
/* Author		:Amit Sangrulkar									*/
/* Description	:Contains the li_jpn_missed_opex_upd_p function		*/
/********************************************************************/

#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <userlog.h>
#include <windows.h>
#include "gscbdef.h"
#include "gscbio.h"

#define LOG_DEFINED
#include "gscblog.h"
#undef LOG_DEFINED
#include "gscblookupdef.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "field_id.h"

#include "li_jpn_missed_opex_upd.h"
#include <vicdefs.h>

extern LI_PUT_DLL_FN_TYP li_put_dll;
extern LI_GET_DLL_FN_TYP li_get_dll;



/********************************************************************/
/* Function Name : li_jpn_missed_opex_upd_p							*/
/* Input         : Header containing user id, wskstn id etc			*/
/*				   Req containing the applicant's id, demographics	*/
/* Outputs		 : Msg_id containing the message id of the message  */
/*				   error_code containing err code at failure		*/
/* Description   : This function is to be used to queue a			*/
/*				   LI_JPN_MISSED_OPEX_UPD request with the legacy	*/
/* Return Values : int GMPC_GOOD - success                          */
/*					   GMPC_BAD - failure							*/
/* Limitations   : None                                             */
/********************************************************************/
 
int li_jpn_missed_opex_upd_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data,
						   LI_JPN_MISSED_OPEX_UPD_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code
						   )
{

	/*************************************************************************/
	/* local variables														 */
	/*************************************************************************/

	/* variables for li_put_dll */
	LI_PUT_HEADER_T put_header;
	LI_PUT_VAR_DATA_T put_var_data;

	/* Structure for registry values */
	READ_REG_T read_reg = {0,0};

	
	/* misc variables */
	char *temp_ptr;
	long len;
	int ret;
	char temp_char_arr[10] = "\0";
	char city_code[CITY_CODE_SIZE] = "\0";

#ifdef DEBUG
	userlog("li_jpn_missed_opex_upd_p : txn_type - %d", req.txn_type);
	userlog("li_jpn_missed_opex_upd_p : siren_short_name1 - %s", req.appnt_name.siren_short_name1);
	userlog("li_jpn_missed_opex_upd_p : siren_short_name2 - %s", req.appnt_name.siren_short_name2);
	userlog("li_jpn_missed_opex_upd_p : gmpc_short_name1 - %s", req.appnt_name.gmpc_short_name1);
	userlog("li_jpn_missed_opex_upd_p : gmpc_short_name2 - %s", req.appnt_name.gmpc_short_name2);
	userlog("li_jpn_missed_opex_upd_p : gmpc_short_name3 - %s", req.appnt_name.gmpc_short_name3);
	userlog("li_jpn_missed_opex_upd_p : current_long_name - %s", req.appnt_name.current_long_name);
	userlog("li_jpn_missed_opex_upd_p : original_name - %s", req.appnt_name.original_name);
	userlog("li_jpn_missed_opex_upd_p : address1 - %s", req.new_address.address1);
	userlog("li_jpn_missed_opex_upd_p : address2 - %s", req.new_address.address2);
	userlog("li_jpn_missed_opex_upd_p : address3 - %s", req.new_address.address3);
	userlog("li_jpn_missed_opex_upd_p : post_code - %s", req.new_address.post_code);
	userlog("li_jpn_missed_opex_upd_p : city_code - %d", req.new_address.city_code);
	userlog("li_jpn_missed_opex_upd_p : state_code - %s", req.new_address.state_code);
	
	userlog("li_jpn_missed_opex_upd_p : kpt_no - %s", req.misc.kpt_no);
	userlog("li_jpn_missed_opex_upd_p : kpp_no - %s", req.misc.kpp_no);
	userlog("li_jpn_missed_opex_upd_p : police_no - %s", req.misc.police_no);
	userlog("li_jpn_missed_opex_upd_p : army_no - %s", req.misc.army_no);
	userlog("li_jpn_missed_opex_upd_p : dob - %s", req.misc.dob);
	userlog("li_jpn_missed_opex_upd_p : unknown_birth_ind - %c", req.misc.unknown_birth_ind);
	userlog("li_jpn_missed_opex_upd_p : birth_place_code - %s", req.misc.birth_place_code);
	userlog("li_jpn_missed_opex_upd_p : gender - %c", req.misc.gender);
	userlog("li_jpn_missed_opex_upd_p : religion - %c", req.misc.religion);
	userlog("li_jpn_missed_opex_upd_p : race - %s", req.misc.race);
	userlog("li_jpn_missed_opex_upd_p : hk_ind - %c", req.misc.hk_ind);
	userlog("li_jpn_missed_opex_upd_p : kt_ind - %s", req.misc.kt_ind);
	userlog("li_jpn_missed_opex_upd_p : resi_status - %c", req.misc.resi_status);
	userlog("li_jpn_missed_opex_upd_p : art_color_code - %s", req.misc.art_color_code);
	userlog("li_jpn_missed_opex_upd_p : gmpc_version - %d", req.misc.gmpc_version);
	userlog("li_jpn_missed_opex_upd_p : original_name_ind - %c", req.misc.original_name_ind);
	userlog("li_jpn_missed_opex_upd_p : gmpc_remarks1 - %s", req.misc.gmpc_remarks1);
	userlog("li_jpn_missed_opex_upd_p : gmpc_remarks2 - %s", req.misc.gmpc_remarks2);
	userlog("li_jpn_missed_opex_upd_p : retire_date - %s", req.misc.retire_date);
	userlog("li_jpn_missed_opex_upd_p : pol_army_join_date - %s", req.misc.pol_army_join_date);
	userlog("li_jpn_missed_opex_upd_p : ic_color_code - %c", req.misc.ic_color_code);
	userlog("li_jpn_missed_opex_upd_p : pol_army_code - %c", req.misc.pol_army_code);

	userlog("li_jpn_missed_opex_upd_p : first_time_ind - %c", req.afis_misc.first_time_ind);
	userlog("li_jpn_missed_opex_upd_p : update_prints_ind - %c", req.afis_misc.update_prints_ind);
	userlog("li_jpn_missed_opex_upd_p : juvenile_flag - %c", req.afis_misc.juvenile_flag);
	userlog("li_jpn_missed_opex_upd_p : quality_status - %c", req.afis_misc.quality_status);
	userlog("li_jpn_missed_opex_upd_p : finger_acquision_source - %c", req.afis_misc.finger_acquision_source);
	
	userlog("li_jpn_missed_opex_upd_p : imm_refer_date - %s", req.pp_info.imm_refer_date);
	userlog("li_jpn_missed_opex_upd_p : passport_no - %s", req.pp_info.passport_no);
	userlog("li_jpn_missed_opex_upd_p : passort_expiry_date - %s", req.pp_info.passort_expiry_date);
	userlog("li_jpn_missed_opex_upd_p : passort_issue_date - %s", req.pp_info.passort_issue_date);
	userlog("li_jpn_missed_opex_upd_p : malaysia_arrival_date - %s", req.pp_info.malaysia_arrival_date);
	userlog("li_jpn_missed_opex_upd_p : permit_issue_date - %s", req.pp_info.permit_issue_date);
	userlog("li_jpn_missed_opex_upd_p : imm_refer_no - %s", req.pp_info.imm_refer_no);
	userlog("li_jpn_missed_opex_upd_p : passort_issue_country - %s", req.pp_info.passort_issue_country);
	userlog("li_jpn_missed_opex_upd_p : entry_permit_no - %s", req.pp_info.entry_permit_no);

	userlog("li_jpn_missed_opex_upd_p : finger_pattern - %c", req.left_finger_prints.finger_pattern);
	userlog("li_jpn_missed_opex_upd_p : thumb_status - %c", req.left_finger_prints.thumb_status);
	userlog("li_jpn_missed_opex_upd_p : fp_img_size - %ld", req.left_finger_prints.fp_img_size);
	userlog("li_jpn_missed_opex_upd_p : orginal_minutiae_size - %ld", req.left_finger_prints.orginal_minutiae_size);
	userlog("li_jpn_missed_opex_upd_p : normalized_minutiae_size - %ld", req.left_finger_prints.normalized_minutiae_size);
	userlog("li_jpn_missed_opex_upd_p : matrix_buffer_size - %ld", req.left_finger_prints.matrix_buffer_size);
	userlog("li_jpn_missed_opex_upd_p : finger_ind - %s", req.left_finger_prints.finger_ind);
	userlog("li_jpn_missed_opex_upd_p : quality_score - %ld", req.left_finger_prints.quality_score);

	userlog("li_jpn_missed_opex_upd_p : finger_pattern - %c", req.right_finger_prints.finger_pattern);
	userlog("li_jpn_missed_opex_upd_p : thumb_status - %c", req.right_finger_prints.thumb_status);
	userlog("li_jpn_missed_opex_upd_p : fp_img_size - %ld", req.right_finger_prints.fp_img_size);
	userlog("li_jpn_missed_opex_upd_p : orginal_minutiae_size - %ld", req.right_finger_prints.orginal_minutiae_size);
	userlog("li_jpn_missed_opex_upd_p : normalized_minutiae_size - %ld", req.right_finger_prints.normalized_minutiae_size);
	userlog("li_jpn_missed_opex_upd_p : matrix_buffer_size - %ld", req.right_finger_prints.matrix_buffer_size);
	userlog("li_jpn_missed_opex_upd_p : finger_ind - %s", req.right_finger_prints.finger_ind);
	userlog("li_jpn_missed_opex_upd_p : quality_score - %ld", req.right_finger_prints.quality_score);

	userlog("li_jpn_missed_opex_upd_p : LR portrait_size - %ld", req.low_res_portrait.portrait_size);
	userlog("li_jpn_missed_opex_upd_p : HR portrait_size - %ld", req.hi_res_portrait.portrait_size);
#endif
	/****************************************************************************/
	/* Check if input data is OK												*/
	/****************************************************************************/
	
	/* Check if the header is OK */
	ret = check_put_header(header);

	if (GMPC_BAD == ret )
	{
		/* Nothing to be done here since check_put_header has already logged the err*/
		return ret;
	}

	/* Fill the put header */
	memset(&put_header, ' ', sizeof(LI_PUT_HEADER_T));

	put_header.agency_id = JPN;
	strcpy(put_header.gsc_no,  header.gsc_no);
	put_header.msg_type = UPD_REQ;

	/* Commented on 29/10/2001 as AFIS will be updated during JPN_UPDATE message */
	/* later when the application is being approved at SSC/GQD					 */
/*	if(TXN_TYPE_AFIS_1N == req.txn_type)
		put_header.send_to_AFIS = 1;
	else
		put_header.send_to_AFIS = 0;

	if('1' == req.afis_misc.update_prints_ind)
		put_header.send_to_AFIS = 1;
*/

	put_header.send_to_AFIS = 0;

	ltoa(LI_JPN_MISSED_OPEX_UPD, put_header.trans_code, 10);
	strcpy(put_header.user_id, header.user_id);
	strcpy(put_header.workstation_id, header.workstation_id);

	strcpy(put_header.trans_date, header.trans_date);
	strcpy(put_header.trans_time, header.trans_time);

	/****************************************************************************/
	/* Format the data															*/
	/****************************************************************************/

	
	/* Generate the variable data */

	/* Calculate the size of the variable part of the data */
	
	len = get_buffer_size(&req);

	/* Allocate memory for the entire message. */
	put_var_data.len = len;
	put_var_data.data = (char *) malloc(put_var_data.len);

	if(NULL == put_var_data.data)
	{
		strcpy(prog_log.remarks,"li_jpn_missed_opex_upd_p  : Memory allocation failed");
		strcpy(excep_log.error_msg, "li_jpn_missed_opex_upd_p  : Memory allocation failed");
		excep_log.severity = FATAL;
		log_error();
		
		*error_code = MALLOC_ERROR;
		return GMPC_BAD;
	}

#ifdef DEBUG
	userlog("li_jpn_missed_opex_upd_p : Var length - %ld", len);
#endif

	memset(put_var_data.data, 0, put_var_data.len);
	/* Put the actual data */
	temp_ptr = put_var_data.data;

	/***************************************************/
	/*		 Copy the applicants names				   */
	/***************************************************/

	/* Original name */
	add_one_fc_field(FID_ORIGINAL_NAME, &temp_ptr,
					req.appnt_name.original_name,
					TYPE_CHAR_ARR, error_code);

	/* Current Long name */
	add_one_fc_field(FID_CURRENT_LONG_NAME, &temp_ptr,
					req.appnt_name.current_long_name,
					TYPE_CHAR_ARR, error_code);

	/* GMPC Short name 1 */
	add_one_fc_field(FID_GMPC_SHORT_NAME1, &temp_ptr,  
					req.appnt_name.gmpc_short_name1,
					TYPE_CHAR_ARR, error_code);
	
	/* GMPC Short name 2 */
	add_one_fc_field(FID_GMPC_SHORT_NAME2, &temp_ptr,  
					req.appnt_name.gmpc_short_name2,
					TYPE_CHAR_ARR, error_code);
	/* GMPC Short name 3 */
	add_one_fc_field(FID_GMPC_SHORT_NAME3, &temp_ptr,  
					req.appnt_name.gmpc_short_name3,
					TYPE_CHAR_ARR, error_code);

	/***************************************************/
	/*			 Copy the new address				   */
	/***************************************************/
	
	get_legacy_address(req.new_address.address1, req.new_address.address2,	
		req.new_address.address3);

	/* New address 1*/
	add_one_fc_field(FID_ADDRESS1, &temp_ptr, req.new_address.address1,	
					TYPE_CHAR_ARR, error_code);
	
	
	/* New address 2*/
	add_one_fc_field(FID_ADDRESS2, &temp_ptr, req.new_address.address2,
					TYPE_CHAR_ARR, error_code);
		
	/* New address 3*/
	add_one_fc_field(FID_ADDRESS3, &temp_ptr, req.new_address.address3,
					TYPE_CHAR_ARR, error_code);

	/* New Post code */
	add_one_fc_field(FID_POSTCODE, &temp_ptr, req.new_address.post_code,
					TYPE_CHAR_ARR, error_code);
	

	/* New City Code*/
	if (req.new_address.city_code != 0)
	{
		itoa(req.new_address.city_code, city_code, 10);
		add_one_fc_field(FID_CITY_CD, &temp_ptr, city_code,
					TYPE_CHAR_ARR, error_code);
	}
	
	/* New State Code */
	add_one_fc_field(FID_STATE_CD, &temp_ptr, req.new_address.state_code,
					TYPE_CHAR_ARR, error_code);
	

	/***************************************************/
	/*			Copy miscellaneous info				   */
	/***************************************************/

	/* KPT number */

	add_one_fc_field(FID_KPT_NO, &temp_ptr,  req.misc.kpt_no,	
					TYPE_CHAR_ARR, error_code);

	/* KPP number */

	add_one_fc_field(FID_KPP_NO, &temp_ptr,  req.misc.kpp_no,	
					TYPE_CHAR_ARR, error_code);

	/* Police no */
	add_one_fc_field(FID_POLICE_NO, &temp_ptr,  req.misc.army_no,	
					TYPE_CHAR_ARR, error_code);

	/* Army no */
	add_one_fc_field(FID_ARMY_NO, &temp_ptr,  req.misc.police_no,	
					TYPE_CHAR_ARR, error_code);

	/* Date of Birth */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.dob);
	add_one_fc_field(FID_DOB, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Unknown Birth Indicator */
	add_one_fc_field(FID_UNKONWN_DOB_IND, &temp_ptr, (char *)&req.misc.unknown_birth_ind,
		TYPE_CHAR, error_code);

	/* Copy the Birth Place Code */
	add_one_fc_field(FID_BIRTH_PLACE_CD, &temp_ptr, req.misc.birth_place_code,
		TYPE_CHAR_ARR, error_code);

	/* Gender */
	add_one_fc_field(FID_GENDER, &temp_ptr, (char *)&req.misc.gender,
		TYPE_CHAR, error_code);

	/*  Religion */
	add_one_fc_field(FID_RELIGION_CD, &temp_ptr, (char *)&req.misc.religion,
		TYPE_CHAR, error_code);

	/* Race Code */
	add_one_fc_field(FID_RACE_CD, &temp_ptr, req.misc.race,
		TYPE_CHAR_ARR, error_code);

	/* H/K Indicator */
	add_one_fc_field(FID_HK_IND, &temp_ptr, (char *)&req.misc.hk_ind,
		TYPE_CHAR, error_code);

	/* KT Indicator */
	add_one_fc_field(FID_KT_IND_CD, &temp_ptr, req.misc.kt_ind,
		TYPE_CHAR_ARR, error_code);

	/* Residential Status */
	add_one_fc_field(FID_RESI_STAT, &temp_ptr, (char *)&req.misc.resi_status,
		TYPE_CHAR, error_code);

	/* Article color code */
	add_one_fc_field(FID_ARTICLE_COLOUR_CD, &temp_ptr, req.misc.art_color_code,
		TYPE_CHAR_ARR, error_code);

	/* GMPC version number */
	itoa(req.misc.gmpc_version, temp_char_arr, 10);
	add_one_fc_field(FID_GMPC_VER_NO, &temp_ptr, temp_char_arr, 
		TYPE_CHAR_ARR, error_code);

	/* Original Name Indicator */
	add_one_fc_field(FID_ORIGINAL_NAME_IND, &temp_ptr, (char *)&req.misc.original_name_ind,
		TYPE_CHAR, error_code);

	/* GMPC remarks1 */
	add_one_fc_field(FID_GMPC_REMARK1, &temp_ptr, req.misc.gmpc_remarks1,
		TYPE_CHAR_ARR, error_code);

	/* GMPC remarks2 */
	add_one_fc_field(FID_GMPC_REMARK2, &temp_ptr, req.misc.gmpc_remarks2,
		TYPE_CHAR_ARR, error_code);


	/* Retirement Date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.retire_date);
	add_one_fc_field(FID_RETIREMENT_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Police/Army join date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.pol_army_join_date);
	add_one_fc_field(FID_POL_ARMY_JOIN_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* IC color code */
	add_one_fc_field(FID_IC_COLOUR_CD, &temp_ptr, (char *)&req.misc.ic_color_code,
		TYPE_CHAR, error_code);

	/* Police/Army code */
	add_one_fc_field(FID_POL_ARMY_CD, &temp_ptr, (char *)&req.misc.pol_army_code,
		TYPE_CHAR, error_code);

	/* Application approval date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.appl_approval_date);
	add_one_fc_field(FID_APPL_APPROVAL_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Green card expiry date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.green_card_exp_date);
	add_one_fc_field(FID_GREEN_CARD_EXP_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/***************************************************/
	/*			Copy miscellaneous info for AFIS	   */
	/***************************************************/

	/* First time indicator */
	add_one_fc_field(FID_FIRST_TIME_IND, &temp_ptr, (char *)&req.afis_misc.first_time_ind,
		TYPE_CHAR, error_code);

	/* Update prints indicator */
	add_one_fc_field(FID_UPDATE_PRINTS_IND, &temp_ptr, (char *)&req.afis_misc.update_prints_ind,
		TYPE_CHAR, error_code);

	/* Juvenile flag */
	add_one_fc_field(FID_JUVENILE_FLAG, &temp_ptr, (char *)&req.afis_misc.juvenile_flag,
		TYPE_CHAR, error_code);

	/* Quality status */
	add_one_fc_field(FID_QUALITY_STAT, &temp_ptr, (char *)&req.afis_misc.quality_status,
		TYPE_CHAR, error_code);

	/* Fingerprint acquisition source */
	add_one_fc_field(FID_FP_ACQUISITION_SRC, &temp_ptr, (char *)&(req.afis_misc.finger_acquision_source), 
		TYPE_CHAR, error_code);

	
	/***************************************************/
	/*			Copy Passport info					   */
	/***************************************************/

	/* IMM reference date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.imm_refer_date);
	add_one_fc_field(FID_IMM_APPROVAL_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Passport no */
	add_one_fc_field(FID_PP_NO, &temp_ptr, req.pp_info.passport_no,
		TYPE_CHAR_ARR, error_code);

	/* Passport expiry date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.passort_expiry_date);
	add_one_fc_field(FID_PP_EXPIRY_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Passport issue date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.passort_issue_date);
	add_one_fc_field(FID_PP_EXPIRY_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Malaysia arrival date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.malaysia_arrival_date);
	add_one_fc_field(FID_ARRIVAL_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Permit issue date */
	/* Transform the date to legacy format */
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.permit_issue_date);
	add_one_fc_field(FID_PERMIT_ISSUE_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* IMM reference no */
	add_one_fc_field(FID_PP_NO, &temp_ptr, req.pp_info.imm_refer_no,
		TYPE_CHAR_ARR, error_code);

	/* Passport issuing country */
	add_one_fc_field(FID_PP_ISSUE_COUNTRY, &temp_ptr, req.pp_info.passort_issue_country,
		TYPE_CHAR_ARR, error_code);

	/* Entry permit number */
	add_one_fc_field(FID_ENTRY_PERMIT_NO, &temp_ptr, req.pp_info.entry_permit_no,
		TYPE_CHAR_ARR, error_code);

	/***************************************************/
	/*			Copy the images						   */
	/***************************************************/
#ifdef DEBUG
	userlog("li_jpn_missed_opex_upd_p : Copying images");
#endif
	
	ret = copy_images(&req, &temp_ptr, error_code);

#ifdef DEBUG
	userlog("li_jpn_missed_opex_upd_p : ret from copy_images - %d", ret);
#endif

	if(GMPC_GOOD != ret)
	{
		free(put_var_data.data);
		return ret;
	}

	/* Calculate the acutal size of the request buffer */
	put_var_data.len = temp_ptr - put_var_data.data;

	/****************************************************************************/
	/* Call li_put																*/
	/****************************************************************************/
	
	/* Check if the function pointer is vaild */
	if(NULL == li_put_dll )
	{
		strcpy(prog_log.remarks,"li_jpn_missed_opex_upd_p : li_put_dll call fail");
		strcpy(excep_log.error_msg, "li_jpn_missed_opex_upd_p : li_put_dll function pointer not initalized (li_init may not have been called)");
		excep_log.severity = FATAL;
		log_error();
		
		*error_code = PUT_ERROR;
		free(put_var_data.data);
		return GMPC_BAD;
	}

#ifdef DEBUG
	userlog("li_jpn_missed_opex_upd_p : Calling li_put");
#endif
	ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);
	
#ifdef DEBUG
	userlog("li_jpn_missed_opex_upd_p : ret form li_put - %d", ret);
#endif
	/* Check return code */
	if(GMPC_GOOD != ret)
	{
		
		/* Read the registry to find the sleep time and retry counts */
		read_registry(KPP_GATE_INTERFACE_ID, &read_reg, NULL);

		if(read_reg.retry_count  <= 0)
		{
			free(put_var_data.data);
			return ret;
		}
		for (;read_reg.retry_count > 0; read_reg.retry_count--)
		{

			/* Log a warning */
			strcpy(prog_log.remarks,"li_jpn_missed_opex_upd_p : li_put_dll call fail due to LEGACY_ERROR");
			strcpy(excep_log.error_msg, "li_jpn_missed_opex_upd_p : li_put_dll failed.  Retrying");
			excep_log.severity = WARNING;
			log_error();

			*error_code = PUT_ERROR;

			Sleep(read_reg.sleep_time);
			msg_id[0] = '\0';
		
			ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);
			if(GMPC_GOOD == ret)
			{
				*error_code = 0;
				return GMPC_GOOD;
			}
		}

		return GMPC_BAD;
	}
#ifdef DEBUG
	userlog("li_jpn_missed_opex_upd_p : return GMPC_GOOD");
#endif
	return GMPC_GOOD;

}

/********************************************************************/
/* Function Name : get_buffer_size									*/
/* Input         : Request buffer									*/
/* Outputs		 : None												*/
/* Description   : This function is to be used to estimate the size	*/
/*				   of the variable part of the message buffer		*/
/* Return Values : long - length of buffer required					*/
/* Limitations   : Exact size of the buffer is dependent on acutal	*/
/*				   lengths of data and not on the size of the vars	*/
/*				   holding them.  This fact is not taken into		*/
/*				   consideration while estimating the size			*/
/********************************************************************/

long get_buffer_size(LI_JPN_MISSED_OPEX_UPD_REQ_T *req)
{
	long len = 0;

	/* Size the common always present items */
	/* Sizes of - Name structure + Address structure + Misc info structure */
	/*			+ Passport info structure + left and right finger_ind +    */
	/*          + quality_score + fingerprint pattern + thumb status	   */

	len += 2*(SIREN_SHORT_NAME) + GMPC_SNAME1_SIZE + GMPC_SNAME2_SIZE + GMPC_SNAME3_SIZE
			+ LONG_NAME_SIZE + ORIG_NAME_SIZE;

	len += 3*(ADDRESS_SIZE) + POST_CODE_SIZE + CITY_CODE_SIZE + STATE_CODE_SIZE;

	len += KPT_SIZE + KPP_SIZE + 2*(ID_SIZE) + 5*(DATE_SIZE) + 8*(CHAR_SIZE) + 
		BIRTH_PLACE_CODE_SIZE + RACE_CODE_SIZE + KT_CODE_SIZE + ARTICLE_COLOR_CODE_SIZE
		+ INT_SIZE + 2*(REMARK_SIZE) ;
	 
	len = len + 5*(CHAR_SIZE);

	len += 5*(DATE_SIZE) + PASSPORT_NO_SIZE + IMM_REFER_NO_SIZE + COUNTRY_CODE_SIZE +
		ENTRY_PERMIT_NO_SIZE;

	len += 2*(FINGER_IND_SIZE + LONG_SIZE + 2*CHAR_SIZE);

	/* Size of fingerprints */

	len += req->left_finger_prints.fp_img_size + req->left_finger_prints.matrix_buffer_size
		+ req->left_finger_prints.normalized_minutiae_size + req->left_finger_prints.orginal_minutiae_size;

	len += req->right_finger_prints.fp_img_size + req->right_finger_prints.matrix_buffer_size
		+ req->right_finger_prints.normalized_minutiae_size + req->right_finger_prints.orginal_minutiae_size;

	/* Size of portraits */
	len += req->hi_res_portrait.portrait_size;
	len += req->low_res_portrait.portrait_size;
	
	/* Add size for field ids and field indicator (total 58 fields ) */
	len += 58*(5 + 1);

	return len;
	
}


/********************************************************************/
/* Function Name : copy_images										*/
/* Input         : req containing the applicant's image info		*/
/*				   in_temp_ptr pointer to pointer to the current	*/
/*					location of temp_ptr in the main _p function	*/
/* Outputs		 : Image Info in the memory pointed to by contents of*/
/*				   in_temp_ptr										*/
/* Description   : This function is used to copy Image info			*/
/*				   of the applicant into the message buffer			*/
/* Return Values : int - GMPC_GOOD = success						*/
/* Limitations   : None												*/
/********************************************************************/

int copy_images(LI_JPN_MISSED_OPEX_UPD_REQ_T *req, char **in_temp_ptr, int *error_code)
{

	char *temp_ptr = *in_temp_ptr;
	int ret = 0;
	BYTE *new_buff;
	int len;

#ifdef DEBUG
		userlog("copy_images : In copy_images");
#endif

	/* High res portrait */
	ret = add_one_image_field(FID_HIGH_RES_PORTRAIT,  &temp_ptr, 
		req->hi_res_portrait.portrait_buff,	0xfd, req->hi_res_portrait.portrait_size, 
		IMAGE_IND_JPEG, error_code);

#ifdef DEBUG
		userlog("copy_images : Copied to High resolution photo - %d", ret);
#endif

	if(GMPC_GOOD != ret)
	{
		return ret;
	}

	/* Low res portrait */
	/* compress the photo to fit within 2.9 K */
	ret = compress_photo(req->hi_res_portrait.portrait_buff, req->hi_res_portrait.portrait_size, &new_buff, &len);

#ifdef DEBUG
		userlog("copy_images : Comprerssed photo - %d", ret);
#endif

	if (ret != GMPC_GOOD)
	{
#ifdef DEBUG
		userlog("copy_images : Unable to compress to low resolution photo");
#endif
		strcpy(prog_log.remarks,"copy_images  : Unable to compress to low resolution photo");
		strcpy(excep_log.error_msg, "copy_images  : Unable to compress to low resolution photo");
		excep_log.severity = FATAL;
		log_error();
		
		*error_code = GMPC_BAD;
		return GMPC_BAD;
	}

	ret = add_one_image_field(FID_LOW_RES_PORTAIT,  &temp_ptr, 
		new_buff, 0xfd, len, IMAGE_IND_JPEG_DB2, error_code);

#ifdef DEBUG
		userlog("copy_images : Copied to Low resolution photo - %d", ret);
#endif

	if(GMPC_GOOD != ret)
	{
		return ret;
	}


	/* LFP Image */
	/* the image can be NULL if the applicant does not have a thumb */
	if (req->left_finger_prints.fp_img_buff != NULL)
	{
		ret = add_one_image_field(FID_LFP_IMAGE,  &temp_ptr, 
			req->left_finger_prints.fp_img_buff, 0xfe, req->left_finger_prints.fp_img_size, 
			IMAGE_IND_LFP_IMAGE, error_code);
#ifdef DEBUG
		userlog("copy_images : Copied to LF image - %d", ret);
#endif
		if(GMPC_GOOD != ret)
		{
			return ret;
		}
	}


	/* RFP Image */
	/* the image can be NULL if the applicant does not have a thumb */
	if (req->right_finger_prints.fp_img_buff != NULL)
	{
		ret = add_one_image_field(FID_RFP_IMAGE,  &temp_ptr, 
			req->right_finger_prints.fp_img_buff, 0xfe, req->right_finger_prints.fp_img_size, 
			IMAGE_IND_RFP_IMAGE, error_code);
#ifdef DEBUG
		userlog("copy_images : Copied to RF image - %d", ret);
#endif
		if(GMPC_GOOD != ret)
		{
			return ret;
		}
	}


	/* LFP Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */

	ret = add_one_minutiae_field(FID_LFP_ORIGINAL_MINU,  &temp_ptr, 
		&(req->left_finger_prints), req->left_finger_prints.orginal_minutiae_size, 
		IMAGE_IND_LFP_MINU, error_code);
#ifdef DEBUG
		userlog("copy_images : Copied LF orig minut - %d", ret);
#endif
	if(GMPC_GOOD != ret)
	{
		return ret;
	}

	/* RFP Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */

	ret = add_one_minutiae_field(FID_RFP_ORIGINAL_MINU,  &temp_ptr, 
		&(req->right_finger_prints), req->right_finger_prints.orginal_minutiae_size, 
		IMAGE_IND_RFP_MINU, error_code);

#ifdef DEBUG
		userlog("copy_images : Copied RF orig minut - %d", ret);
#endif

	if(GMPC_GOOD != ret)
	{
		return ret;
	}


	/* LFP Normalized Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */

	ret = add_one_minutiae_field(FID_LFP_NORM_MINU,  &temp_ptr, 
		&(req->left_finger_prints), req->left_finger_prints.normalized_minutiae_size, 
		IMAGE_IND_LFP_NORM_MINU, error_code);

#ifdef DEBUG
		userlog("copy_images : Copied LF norm minut - %d", ret);
#endif

	if(GMPC_GOOD != ret)
	{
		return ret;
	}


	/* RFP Normalized Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */

	ret = add_one_minutiae_field(FID_RFP_NORM_MINU,  &temp_ptr, 
		&(req->right_finger_prints), req->right_finger_prints.normalized_minutiae_size, 
		IMAGE_IND_RFP_NORM_MINU, error_code);

#ifdef DEBUG
		userlog("copy_images : Copied RF norm minut - %d", ret);
#endif

	if(GMPC_GOOD != ret)
	{
		return ret;
	}


	/* LFP Matrix Buffer */
	/* the matrix buffer can be NULL if the applicant does not have a thumb */

	if (req->left_finger_prints.matrix_buffer != NULL)
	{
		ret = add_one_minutiae_field(FID_LFP_MATRIX_BUFF,  &temp_ptr, 
			&(req->left_finger_prints), req->left_finger_prints.matrix_buffer_size, 
			IMAGE_IND_LFP_MATRIX, error_code);

		if(GMPC_GOOD != ret)
		{
			return ret;
		}
#ifdef DEBUG
		userlog("copy_images : Copied LF matrix - %d", ret);
#endif

	}


	/* RFP Matrix Buffer */
	/* the matrix buffer can be NULL if the applicant does not have a thumb */

	if (req->right_finger_prints.matrix_buffer != NULL)
	{
		ret = add_one_minutiae_field(FID_RFP_MATRIX_BUFF,  &temp_ptr, 
			&(req->right_finger_prints), req->right_finger_prints.matrix_buffer_size, 
			IMAGE_IND_RFP_MATRIX, error_code);
#ifdef DEBUG
		userlog("copy_images : Copied RF matrix - %d", ret);
#endif

		if(GMPC_GOOD != ret)
		{
			return ret;
		}
	}

	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;

}


int nQuality = 100;

BOOL CreateLowResImage(imgdes *desImage, imgdes *srcImage, DWORD dwMaxSize, long *actual_len)
{
	HGLOBAL hMem;
	BOOL bDone = FALSE;
	unsigned char *pBuffer=NULL;
	int rcode;
	DWORD dwBufSize;
	JpegData jdat;

#ifdef DEBUG
	userlog("CreateLowResImage : Reducing image quality");
#endif

	nQuality = 100;

	do
	{
		rcode = savejpgtobuffer(&pBuffer, srcImage, nQuality);
		
		if(rcode == NO_ERROR)	
		{
			// Get the buffer size
			hMem = GlobalHandle(pBuffer);
			dwBufSize = GlobalSize(hMem);

			if( dwBufSize > dwMaxSize )
			{
				GlobalFree(hMem);
				pBuffer = NULL;
				nQuality--;
			}
			else
			{
			
				bDone = TRUE;
				*actual_len = dwBufSize;

				freeimage(desImage);
				jpeginfofrombuffer(pBuffer, &jdat);
				allocimage(desImage, jdat.width, jdat.length, jdat.vbitcount);

				if( loadjpgfrombuffer(pBuffer, desImage) != NO_ERROR)
				{
#ifdef DEBUG
					userlog("CreateLowResImage : Error converting JPEG image");
#endif
					GlobalFree(hMem);
					return FALSE;
				}
				else
				{
					GlobalFree(hMem);
#ifdef DEBUG
					userlog("CreateLowResImage : Final Image Quality = %d\n", nQuality);
#endif
					return TRUE;
				}
			}
		}
		else	
		{
#ifdef DEBUG
			userlog("CreateLowResImage : Unable to save image to buffer");
#endif
			bDone = TRUE;
			return FALSE;
		}

		if(nQuality<=0)	
		{
#ifdef DEBUG
			userlog("CreateLowResImage : Unable to compress image, the size is too small !");
#endif
		}

	} while(!bDone);

	return TRUE;
}

int compress_photo(unsigned char *buff, int ori_len,
				   BYTE **new_buff, int *new_len)
{
	int rcode;
	int maxSize=2850;
	imgdes ImgOrig, Img2k;
	JpegData jdat;
	int nWidth, nHeight;

	// Get the information
#ifdef DEBUG
	userlog("compress_photo: Before jpeginfofrombuffer");
#endif

	rcode = jpeginfofrombuffer(buff, &jdat);
	if(rcode != NO_ERROR)
		return GMPC_BAD;

	nWidth = jdat.width;
	nHeight = jdat.length;

#ifdef DEBUG
	userlog("compress_photo: Before allocimage");
#endif

   rcode = allocimage(&ImgOrig, jdat.width, jdat.length, jdat.vbitcount);

   if(rcode == NO_ERROR) {

		// Load the image
#ifdef DEBUG
		userlog("compress_photo: Before loadjpgfrombuffer");
#endif

      rcode = loadjpgfrombuffer(buff, &ImgOrig);

		if( rcode != NO_ERROR )	
		{
#ifdef DEBUG
			userlog("compress_photo: Error reading JPEG Image");
#endif
			return GMPC_BAD;
		}
 	}

	if(rcode == NO_ERROR)
	{
#ifdef DEBUG
		userlog("compress_photo: Before CreateLowResImage");
#endif
		if( !CreateLowResImage(&Img2k, &ImgOrig, maxSize, new_len) )	
		{
#ifdef DEBUG
			userlog("compress_photo: Error compressing LOW_RES image");
#endif
			return GMPC_BAD;
		}
		else	
		{
#ifdef DEBUG
			userlog("compress_photo: Before savejpgtobuffer");
#endif
			savejpgtobuffer(new_buff, &Img2k, nQuality);
#ifdef DEBUG
			userlog("compress_photo: After savejpgtobuffer");
#endif
		}
	}

#ifdef DEBUG
	userlog("compress_photo: Before freeimage");
#endif

	freeimage(&ImgOrig);
	freeimage(&Img2k);

#ifdef DEBUG
	userlog("compress_photo: Before return GMPC_GOOD");
#endif

	return GMPC_GOOD;
}


