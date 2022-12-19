/*$Header:   F:/GSCBProjectDb/archives/LegacyInterface/jpnmsg/jpn_missed_opex_upd/li_jpn_missed_opex_upd.c-arc   1.8   Jul 17 2002 16:17:10   ShivamP  $*/
/********************************************************************/
/* File Name	:li_nrs_update.c						        	*/
/* Author		:Srinivasa Reddy									*/
/* Description	:Contains the li_nrs_update_p function		        */
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

#include "li_nrs_update.h"
//#include <vicdefs.h>
#include <VICDEFS.H>
#include "li_call_dll.h"


//extern PROG_ACCESS_LOG_T prog_log;
//extern APPL_EXCEP_LOG_T excep_log;

//extern LI_PUT_DLL_FN_TYP li_put_dll;
//extern LI_GET_DLL_FN_TYP li_get_dll;


/********************************************************************/
/* Function Name : li_nrs_update_p							        */
/* Input         : Header containing user id, wskstn id etc			*/
/*				   Req containing the applicant's id, demographics	*/
/* Outputs		 : Msg_id containing the message id of the message  */
/*				   error_code containing err code at failure		*/
/* Description   : This function is to be used to queue a			*/
/*				   LI_NRS_UPDATE request with the legacy         	*/
/* Return Values : int GMPC_GOOD - success                          */
/*					   GMPC_BAD - failure							*/
/* Limitations   : None                                             */
/********************************************************************/
 
int li_nrs_update_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data,
						   LI_NRS_UPDATE_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage
						   )
{

	/*************************************************************************/
	/* local variables														 */
	/*************************************************************************/

	/* variables for li_put_dll */
	LI_PUT_HEADER_T put_header;
	LI_PUT_VAR_DATA_T put_var_data;

	/* misc variables */
	char *temp_ptr;
	long len;
	int ret;
	char temp_char_arr[10] = "\0";
	char city_code[CITY_CODE_SIZE] = "\0";
	char permit_type[4] = "\0";	
	char szDocTypeCode[10] = {0};
	char temp_city_code[CITY_CODE_SIZE];
	int i=0;
	


#ifdef DEBUG
	userlog("li_nrs_update_p : idno - %s", req.misc.idno);
	userlog("li_nrs_update_p : idtype - %s", req.misc.idtype);
	userlog("li_nrs_update_p : txncode - %s", req.misc.txncode);
	userlog("li_nrs_update_p : gmpc_short_name1 - %s", req.misc.gmpc_short_name1);
	userlog("li_nrs_update_p : gmpc_short_name2 - %s", req.misc.gmpc_short_name2);
	userlog("li_nrs_update_p : gmpc_short_name3 - %s", req.misc.gmpc_short_name3);	
	userlog("li_nrs_update_p : current_long_name - %s", req.misc.current_long_name);	
	userlog("li_nrs_update_p : address1 - %s", req.new_address.address1);
	userlog("li_nrs_update_p : address2 - %s", req.new_address.address2);
	userlog("li_nrs_update_p : address3 - %s", req.new_address.address3);
	userlog("li_nrs_update_p : post_code - %s", req.new_address.post_code);
	userlog("li_nrs_update_p : city_code - %d", req.new_address.city_code);
	userlog("li_nrs_update_p : state_code - %s", req.new_address.state_code);	
	userlog("li_nrs_update_p : kpp_no - %s", req.misc.kpp_no);
	
	userlog("li_nrs_update_p : dob - %s", req.misc.dob);
	userlog("li_nrs_update_p : unknown_birth_ind - %c", req.misc.unknown_birth_ind);
	userlog("li_nrs_update_p : birth_place_code - %s", req.misc.birth_place_code);
	userlog("li_nrs_update_p : gender - %c", req.misc.gender);
	userlog("li_nrs_update_p : religion - %c", req.misc.religion);
	userlog("li_nrs_update_p : race - %s", req.misc.race);
	userlog("li_nrs_update_p : hk_ind - %c", req.misc.hk_ind);
	userlog("li_nrs_update_p : kt_ind - %s", req.misc.kt_ind);
	userlog("li_nrs_update_p : resi_status - %c", req.misc.resi_status);
	userlog("li_nrs_update_p : art_color_code - %s", req.misc.art_color_code);	
	
	userlog("li_nrs_update_p : gmpc_remarks1 - %s", req.misc.gmpc_remarks1);
	userlog("li_nrs_update_p : gmpc_remarks2 - %s", req.misc.gmpc_remarks2);
	userlog("li_nrs_update_p : retire_date - %s", req.misc.retire_date);
	
	userlog("li_nrs_update_p : pol_army_id - %c", req.misc.pol_army_id);
	userlog("li_nrs_update_p : police_army_no - %s", req.misc.police_army_no);	
	
	userlog("li_nrs_update_p : quality_status - %c", req.misc.quality_status);
	userlog("li_nrs_update_p : finger_acquision_source - %c", req.misc.finger_acquision_source);

	userlog("li_nrs_update_p : appl_no - %s", req.misc.appl_no);

	userlog("li_nrs_update_p : father idno - %s", req.misc.father_idno);
	userlog("li_nrs_update_p : father_idtype - %s", req.misc.father_idtype);
	userlog("li_nrs_update_p : mother idno - %s", req.misc.mother_idno);
	userlog("li_nrs_update_p : mother_idtype - %s", req.misc.mother_idtype);
	userlog("li_nrs_update_p : sponsor idno - %s", req.misc.sponsor_idno);
	userlog("li_nrs_update_p : sponsor_idtype - %s", req.misc.sponsor_idtype);
	userlog("li_nrs_update_p : sponsor_name - %s", req.misc.sponsor_name);
	userlog("li_nrs_update_p : sponsor_relcode - %s", req.misc.sponsor_relcode);
	
	userlog("li_nrs_update_p : imm_refer_date - %s", req.pp_info.imm_refer_date);
	userlog("li_nrs_update_p : passport_no - %s", req.pp_info.passport_no);
	userlog("li_nrs_update_p : passort_expiry_date - %s", req.pp_info.passort_expiry_date);
	userlog("li_nrs_update_p : passort_issue_date - %s", req.pp_info.passort_issue_date);
	userlog("li_nrs_update_p : malaysia_arrival_date - %s", req.pp_info.malaysia_arrival_date);
	
	userlog("li_nrs_update_p : imm_refer_no - %s", req.pp_info.imm_refer_no);
	userlog("li_nrs_update_p : passort_issue_country - %s", req.pp_info.passort_issue_country);
	userlog("li_nrs_update_p : entry_permit_no - %s", req.pp_info.entry_permit_no);	
	
	userlog("li_nrs_update_p : normalized_minutiae_size - %ld", req.lfinger.normalized_minutiae_size);
	userlog("li_nrs_update_p : normalized_minutiae_size - %ld", req.rfinger.normalized_minutiae_size);
	userlog("li_nrs_update_p : Birth Country code - %s", req.misc.birth_country_code);
	
	userlog("li_nrs_update_p : Document Type Code - %d", req.pp_info.nDocTypeCode);
	userlog("li_nrs_update_p : telephone_no - %s", req.misc.telephone_no);

	userlog("li_nrs_update_p : kptno : %s",req.misc.kptno);
	userlog("li_nrs_update_p : status_date : %s",req.misc.status_date);
	userlog("li_nrs_update_p : operator_id : %s",req.misc.operator_id);
	userlog("li_nrs_update_p : gmpc_version : %d",req.misc.gmpc_version);
	userlog("li_nrs_update_p : jpn_remarks1 : %s",req.misc.jpn_remarks1);
	userlog("li_nrs_update_p : jpn_remarks2 : %s",req.misc.jpn_remarks2);
	userlog("li_nrs_update_p : probl_reason_code : %s",req.misc.probl_reason_code);
	userlog("li_nrs_update_p : indicator2 : %c",req.misc.indicator2);

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

	put_header.send_to_AFIS = 0;

	ltoa(LI_NRS_UPDATE, put_header.trans_code, 10);
	strcpy(put_header.user_id, header.user_id);
	strcpy(put_header.workstation_id, header.workstation_id);

	strcpy(put_header.trans_date, header.trans_date);
	strcpy(put_header.trans_time, header.trans_time);

	/****************************************************************************/
	/* Format the data															*/
	/****************************************************************************/
	
	/* Generate the variable data */

	/* Calculate the size of the variable part of the data */
	
	len = get_buffer_size1(&req);

	/* Allocate memory for the entire message. */
	put_var_data.len = len;
	put_var_data.data = (char *) malloc(put_var_data.len);

	if(NULL == put_var_data.data)
	{
		userlog("li_nrs_update_p  : Memory allocation failed");

		//strcpy(prog_log.remarks,"li_nrs_update_p  : Memory allocation failed");
		//strcpy(excep_log.error_msg, "li_nrs_update_p  : Memory allocation failed");
		//excep_log.severity = FATAL;
		//log_error();
		
		*error_code = MALLOC_ERROR;
		return GMPC_BAD;
	}

	#ifdef DEBUG
		userlog("li_nrs_update_p : Var length - %ld", len);
	#endif

	memset(put_var_data.data, 0, put_var_data.len);
	/* Put the actual data */
	temp_ptr = put_var_data.data;

	/***************************************************/
	/*		 Copy the applicant names				   */
	/***************************************************/

	/* GMPC Short name 1 */
	if(req.misc.gmpc_short_name1[0] != '\0')
	{
	add_one_fc_field(FID_GMPC_SHORT_NAME1, &temp_ptr,  
					req.misc.gmpc_short_name1,
					TYPE_CHAR_ARR, error_code);
	}
	
	/* GMPC Short name 2 */
	if(req.misc.gmpc_short_name2[0] != '\0')
	{
	add_one_fc_field(FID_GMPC_SHORT_NAME2, &temp_ptr,  
					req.misc.gmpc_short_name2,
					TYPE_CHAR_ARR, error_code);
	}

	/* GMPC Short name 2 */
	if(req.misc.gmpc_short_name3[0] != '\0')
	{
	add_one_fc_field(FID_GMPC_SHORT_NAME3, &temp_ptr,  
					req.misc.gmpc_short_name3,
					TYPE_CHAR_ARR, error_code);
	}

	/* Current Long name */
	if(req.misc.current_long_name[0] != '\0')
	{
	add_one_fc_field(FID_CURRENT_LONG_NAME, &temp_ptr,
					req.misc.current_long_name,
					TYPE_CHAR_ARR, error_code);
	}


	/***************************************************/
	/*			 Copy the new address				   */
	/***************************************************/
	
	get_legacy_address(req.new_address.address1, req.new_address.address2,	
		req.new_address.address3);

	/* New address 1*/
	ret = add_one_fc_field(FID_ADDRESS1, &temp_ptr, req.new_address.address1,	
					TYPE_CHAR_ARR, error_code);
	
	
	/* New address 2*/
	ret = add_one_fc_field(FID_ADDRESS2, &temp_ptr, req.new_address.address2,
					TYPE_CHAR_ARR, error_code);
		
	/* New address 3*/
	ret = add_one_fc_field(FID_ADDRESS3, &temp_ptr, req.new_address.address3,
					TYPE_CHAR_ARR, error_code);

	/* New Post code */
	ret = add_one_fc_field(FID_POSTCODE, &temp_ptr, req.new_address.post_code,
					TYPE_CHAR_ARR, error_code);
	

	/* New City Code*/
	if (req.new_address.city_code > 0)
	{
		for(i=0;i<5;i++)
			temp_city_code[i] = '\0';

		//itoa(req.new_address.city_code, city_code, 10); // commented this on 14/12/2006 to pad 0 infront if city_code is not 4 digits
		sprintf(temp_city_code,"%04d",req.new_address.city_code);
		ret = add_one_fc_field(FID_CITY_CD, &temp_ptr, temp_city_code,
					TYPE_CHAR_ARR, error_code);
		#ifdef DEBUG
			userlog("Before padding req.new_address.city_code : %d,after padding temp_city_code : %s",req.new_address.city_code,temp_city_code);
		#endif
	}
	
	/* New State Code */
	ret = add_one_fc_field(FID_STATE_CD, &temp_ptr, req.new_address.state_code,
					TYPE_CHAR_ARR, error_code);
	

	/***************************************************/
	/*			Copy miscellaneous info				   */
	/***************************************************/

	
	/* ID NUMBER */
	ret = add_one_fc_field(FID_ID_NO, &temp_ptr, req.misc.idno,	
					TYPE_CHAR_ARR, error_code);

	/* ID TYPE */
	ret = add_one_fc_field(FID_ID_TYPE, &temp_ptr,  req.misc.idtype,	
					TYPE_CHAR_ARR, error_code);

	/* Transaction code */
	ret = add_one_fc_field(FID_LEG_TXN_CODE, &temp_ptr,  req.misc.txncode,	
					TYPE_CHAR_ARR, error_code);

	/* KPP number */
	ret = add_one_fc_field(FID_KPP_NO, &temp_ptr,  req.misc.kpp_no,	
					TYPE_CHAR_ARR, error_code);

	/* Date of Birth */
	/* Transform the date to legacy format */
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.dob);
	ret = add_one_fc_field(FID_DOB, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Unknown Birth Indicator */
	ret = add_one_fc_field(FID_UNKONWN_DOB_IND, &temp_ptr, (char *)&req.misc.unknown_birth_ind,
		TYPE_CHAR, error_code);

	/* Copy the Birth Place Code */
	if(req.misc.birth_place_code[0] != ' ')
	{
	ret = add_one_fc_field(FID_BIRTH_PLACE_CD, &temp_ptr, req.misc.birth_place_code,
		TYPE_CHAR_ARR, error_code);
	}

	/* Gender */
	if(req.misc.gender != ' ')
	{
	ret = add_one_fc_field(FID_GENDER, &temp_ptr, (char *)&req.misc.gender,
		TYPE_CHAR, error_code);
	}

	/*  Religion code*/
	ret = add_one_fc_field(FID_RELIGION_CD, &temp_ptr, (char *)&req.misc.religion,
		TYPE_CHAR, error_code);

	/* Race Code */
	ret = add_one_fc_field(FID_RACE_CD, &temp_ptr, req.misc.race,
		TYPE_CHAR_ARR, error_code);

	/* H/K Indicator */
	if(req.misc.hk_ind != ' ')
	{
	ret = add_one_fc_field(FID_HK_IND, &temp_ptr, (char *)&req.misc.hk_ind,
		TYPE_CHAR, error_code);
	}

	/* GMPC remarks1 */
	ret = add_one_fc_field(FID_GMPC_REMARK1, &temp_ptr, req.misc.gmpc_remarks1,
		TYPE_CHAR_ARR, error_code);

	/* GMPC remarks2 */
	ret = add_one_fc_field(FID_GMPC_REMARK2, &temp_ptr, req.misc.gmpc_remarks2,
		TYPE_CHAR_ARR, error_code);

	/* KT Indicator */
	ret = add_one_fc_field(FID_KT_IND_CD, &temp_ptr, req.misc.kt_ind,
		TYPE_CHAR_ARR, error_code);

	/* Residential Status */
	ret = add_one_fc_field(FID_RESI_STAT, &temp_ptr, (char *)&req.misc.resi_status,
		TYPE_CHAR, error_code);

	/* Article color code */
	ret = add_one_fc_field(FID_ARTICLE_COLOUR_CD, &temp_ptr, req.misc.art_color_code,
		TYPE_CHAR_ARR, error_code);

	/* Police/Army code */
	if(req.misc.pol_army_id != ' ')
	{
	ret = add_one_fc_field(FID_POL_ARMY_CD, &temp_ptr, (char *)&req.misc.pol_army_id,
		TYPE_CHAR, error_code);
	}

	/* Police Army no */
	ret = add_one_fc_field(FID_SPONSOR_POLICE_NO, &temp_ptr,  req.misc.police_army_no,	
					TYPE_CHAR_ARR, error_code);


	/* Retirement Date */
	/* Transform the date to legacy format */
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.retire_date);
	ret = add_one_fc_field(FID_RETIREMENT_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Citizen nationality code */
	ret = add_one_fc_field(FID_CITIZEN_NATIONALITY_CD, &temp_ptr, req.misc.citizen_nation_code,
		TYPE_CHAR_ARR, error_code);

	/* birth country code */
	ret = add_one_fc_field(FID_BIRTH_COUNTRY, &temp_ptr, req.misc.birth_country_code,
		TYPE_CHAR_ARR, error_code);

	/* FIN */


	/* Application Number */
	ret = add_one_fc_field(FID_APPL_ID, &temp_ptr,  req.misc.appl_no,	
					TYPE_CHAR_ARR, error_code);

	/* Quality status */
	ret = add_one_fc_field(FID_QUALITY_STAT, &temp_ptr, (char *)&req.misc.quality_status,
		TYPE_CHAR, error_code);

	/* Fingerprint acquisition source */
	ret = add_one_fc_field(FID_FP_ACQUISITION_SRC, &temp_ptr, (char *)&(req.misc.finger_acquision_source), 
		TYPE_CHAR, error_code);

	/* Father idtype */
	ret = add_one_fc_field(FID_FATHER_DOC_TYPE, &temp_ptr,  req.misc.father_idtype,	
					TYPE_CHAR_ARR, error_code);		

	/* Father idno */
	ret = add_one_fc_field(FID_FATHER_DOC_NUMBER, &temp_ptr,  req.misc.father_idno,	
					TYPE_CHAR_ARR, error_code);

	/* Mother idtype */
	ret = add_one_fc_field(FID_MOTHER_DOC_TYPE, &temp_ptr,  req.misc.mother_idtype,	
					TYPE_CHAR_ARR, error_code);	

	/* Mother idno */
	ret = add_one_fc_field(FID_MOTHER_DOC_NUMBER, &temp_ptr,  req.misc.mother_idno,	
					TYPE_CHAR_ARR, error_code);

	/* Sponsor idtype */
	if(req.misc.sponsor_idtype[0] != ' ')
	{
	ret = add_one_fc_field(FID_SPONSOR_ID_TYPE, &temp_ptr,  req.misc.sponsor_idtype,	
					TYPE_CHAR_ARR, error_code);	
	}

	/* Sponsor idno */
	ret = add_one_fc_field(FID_SPONSOR_ID_NO, &temp_ptr,  req.misc.sponsor_idno,	
					TYPE_CHAR_ARR, error_code);	

	/* Sponsor name */
	ret = add_one_fc_field(FID_SPONSOR_LONG_NAME, &temp_ptr,  req.misc.sponsor_name,	
					TYPE_CHAR_ARR, error_code);

	/* Sponsor relation code */
	if(req.misc.sponsor_relcode[0] != ' ')
	{
	ret = add_one_fc_field(FID_RELATION_CODE, &temp_ptr,  req.misc.sponsor_relcode,	
					TYPE_CHAR_ARR, error_code);
	}

	/* Apply place code */
	ret = add_one_fc_field(FID_GMPC_APPLN_BRANCH_CD, &temp_ptr,  req.misc.apply_place_cd,	
					TYPE_CHAR_ARR, error_code);

	/* Registration date */	
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.reg_date);
	ret = add_one_fc_field(FID_KPT_REG_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* telephone number */ // added on 18/04/06
	if((req.misc.telephone_no[0] != '\0') && (req.misc.telephone_no[0] != ' '))
	{
	ret = add_one_fc_field(FID_TELEPHONE_NO, &temp_ptr,  req.misc.telephone_no,	
					TYPE_CHAR_ARR, error_code);
	}

	userlog(" req.misc.telephone_no: %s",req.misc.telephone_no);

	// the following columns added on 22/09/06

	userlog(" req.misc.kptno: %s",req.misc.kptno);

	/* kptno */
	if((req.misc.kptno[0] != '\0') && (req.misc.kptno[0] != ' '))
	{
	ret = add_one_fc_field(FID_KPT_NO, &temp_ptr,  req.misc.kptno,
					TYPE_CHAR_ARR, error_code);
	}

	userlog(" req.misc.status_date: %s",req.misc.status_date);
	/* status date */	
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.misc.status_date);
	ret = add_one_fc_field(FID_KPT_APPLN_DT, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* operator_id */
	userlog(" req.misc.operator_id: %s",req.misc.operator_id);
	if((req.misc.operator_id[0] != '\0') && (req.misc.operator_id[0] != ' '))
	{
	ret = add_one_fc_field(FID_GMPC_APPLN_STAFF_ID, &temp_ptr,  req.misc.operator_id,
					TYPE_CHAR_ARR, error_code);
	}

	/*gmpc_version*/
	temp_char_arr[0] = '\0';
	userlog(" req.misc.gmpc_version: %d",req.misc.gmpc_version);
	if(req.misc.gmpc_version != 0)
	{
		itoa(req.misc.gmpc_version, temp_char_arr, 10);
		ret = add_one_fc_field(FID_GMPC_VERSION_NO, &temp_ptr, temp_char_arr,
					TYPE_CHAR_ARR, error_code);	
	}

	/* jpn_remarks1 */
	userlog(" req.misc.jpn_remarks1: %s",req.misc.jpn_remarks1);
	if((req.misc.jpn_remarks1[0] != '\0') && (req.misc.jpn_remarks1[0] != ' '))
	{
	ret = add_one_fc_field(FID_JPN_REMARK1, &temp_ptr,  req.misc.jpn_remarks1,
					TYPE_CHAR_ARR, error_code);
	}

	/* jpn_remarks2 */
	userlog(" req.misc.jpn_remarks2: %s",req.misc.jpn_remarks2);
	if((req.misc.jpn_remarks2[0] != '\0') && (req.misc.jpn_remarks2[0] != ' '))
	{
	ret = add_one_fc_field(FID_JPN_REMARK2, &temp_ptr,  req.misc.jpn_remarks2,
					TYPE_CHAR_ARR, error_code);
	}

	/* probl_reason_code */
	userlog(" req.misc.probl_reason_code: %s",req.misc.probl_reason_code);
	if((req.misc.probl_reason_code[0] != '\0') && (req.misc.probl_reason_code[0] != ' '))
	{
	ret = add_one_fc_field(FID_PROBL_REASON_CODE, &temp_ptr,  req.misc.probl_reason_code,
					TYPE_CHAR_ARR, error_code);
	}

	/* indicator2 */
	userlog(" req.misc.indicator2: %c",req.misc.indicator2);
	if((req.misc.indicator2 != '\0') && (req.misc.indicator2 != ' '))
	{
	ret = add_one_fc_field(FID_INDICATOR2, &temp_ptr, (char *)&req.misc.indicator2,
		TYPE_CHAR, error_code);
	}


	
	/***************************************************/
	/*			Copy Passport info					   */
	/***************************************************/

	/* IMM reference no */
	ret = add_one_fc_field(FID_IMM_REF_NUM, &temp_ptr, req.pp_info.imm_refer_no,
		TYPE_CHAR_ARR, error_code);

	/* IMM reference date */
	/* Transform the date to legacy format */
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.imm_refer_date);
	ret = add_one_fc_field(FID_IMM_APPROVAL_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Passport no */
	ret = add_one_fc_field(FID_PP_NO, &temp_ptr, req.pp_info.passport_no,
		TYPE_CHAR_ARR, error_code);

	/* Passport issue date */
	/* Transform the date to legacy format */
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.passort_issue_date);
	ret = add_one_fc_field(FID_PP_ISSUE_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Passport issuing country */
	ret = add_one_fc_field(FID_PP_ISSUE_COUNTRY, &temp_ptr, req.pp_info.passort_issue_country,
		TYPE_CHAR_ARR, error_code);

	/* Passport expiry date */
	/* Transform the date to legacy format */
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.passort_expiry_date);
	ret = add_one_fc_field(FID_PP_EXPIRY_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Malaysia arrival date */
	/* Transform the date to legacy format */
	temp_char_arr[0] = '\0';
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.pp_info.malaysia_arrival_date);
	ret = add_one_fc_field(FID_ARRIVAL_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);

	/* Entry permit number */
	ret = add_one_fc_field(FID_ENTRY_PERMIT_NO, &temp_ptr, req.pp_info.entry_permit_no,
		TYPE_CHAR_ARR, error_code);

	//Document Type Code
	if(req.pp_info.nDocTypeCode != 0)
	{
		itoa(req.pp_info.nDocTypeCode, szDocTypeCode, 10);
		ret = add_one_fc_field(FID_DOC_TYPE_CODE, &temp_ptr, szDocTypeCode,
					TYPE_CHAR_ARR, error_code);	
	}

	/***************************************************/
	/*			Copy the images						   */
	/***************************************************/
#ifdef DEBUG
	userlog("li_nrs_update_p : Copying minutiae");
#endif
	
	ret = copy_images1(&req, &temp_ptr, error_code);

#ifdef DEBUG
	userlog("li_nrs_update_p : ret from copy_images - %d", ret);
#endif

	if(GMPC_GOOD != ret)
	{
		free(put_var_data.data);
		return ret;
	}


	/* Calculate the acutal size of the request buffer */
	put_var_data.len = temp_ptr - put_var_data.data;

	///****************************************************************************/
	///* Call li_put																*/
	///****************************************************************************/
	//
	///* Check if the function pointer is vaild */
	//if(NULL == li_put_dll )
	//{
	//	strcpy(prog_log.remarks,"li_nrs_update_p : li_put_dll call fail");
	//	strcpy(excep_log.error_msg, "li_nrs_update_p : li_put_dll function pointer not initalized (li_init may not have been called)");
	//	excep_log.severity = FATAL;
	//	log_error();
	//	
	//	*error_code = PUT_ERROR;
	//	free(put_var_data.data);
	//	return GMPC_BAD;
	//}

	//#ifdef DEBUG
	//userlog("li_nrs_update_p : Calling li_put");
	//#endif
	//ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);

	/****************************************************************************/
	/* Call the Update dll function																*/
	/****************************************************************************/

	ret = li_call_dll(put_header, put_var_data, put_fin_data, msg_id, error_code,
		pReplyMsg,iReplyMsgLen,sErrMessage);
	
#ifdef DEBUG
	userlog("li_nrs_update_p : ret form li_put - %d", ret);
#endif
	/* Check return code */
	if(GMPC_GOOD != ret)
	{
/* Commeneted for IJPN	
		/* Read the registry to find the sleep time and retry counts 
		read_registry(KPP_GATE_INTERFACE_ID, &read_reg, NULL);

		if(read_reg.retry_count  <= 0)
		{
			free(put_var_data.data);
			return ret;
		}
		for (;read_reg.retry_count > 0; read_reg.retry_count--)
		{

			/* Log a warning 
			strcpy(prog_log.remarks,"li_nrs_update_p : li_put_dll call fail due to LEGACY_ERROR");
			strcpy(excep_log.error_msg, "li_nrs_update_p : li_put_dll failed.  Retrying");
			excep_log.severity = WARNING;
			log_error();

			*error_code = PUT_ERROR;

			Sleep(read_reg.sleep_time);
			msg_id[0] = '\0';
		
			//ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);

			ret = li_call_dll(put_header, put_var_data, put_fin_data, msg_id, error_code,
					pReplyMsg, iReplyMsgLen, sErrMessage);

			if(GMPC_GOOD == ret)
			{
				*error_code = 0;
				return GMPC_GOOD;
			}
		}
*/
		return GMPC_BAD;
	}
#ifdef DEBUG
	userlog("li_nrs_update_p : return GMPC_GOOD");
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

long get_buffer_size1(LI_NRS_UPDATE_REQ_T *req)
{
	long len = 0;

	/* Size the common always present items */	  

	len += 3*(ADDRESS_SIZE) + POST_CODE_SIZE + CITY_CODE_SIZE + STATE_CODE_SIZE;

	len += GMPC_SNAME1_SIZE + GMPC_SNAME2_SIZE + LONG_NAME_SIZE;

	len += ID_SIZE + ID_TYPE_SIZE + TXNCODE_SIZE + KPP_SIZE + DATE_SIZE
		   + CHAR_SIZE + BIRTH_PLACE_CODE_SIZE + 2*CHAR_SIZE + RACE_CODE_SIZE
		   + CHAR_SIZE + 2*REMARK_SIZE + KT_CODE_SIZE + CHAR_SIZE 
		   + ARTICLE_COLOR_CODE_SIZE + CHAR_SIZE + ID_SIZE + DATE_SIZE
		   + 2*COUNTRY_CODE_SIZE + LEGAPPLID_SIZE + 2*CHAR_SIZE
		   + 3*ID_TYPE_SIZE + 3*ID_SIZE + CURRLONGNAME_SIZE + RELATIONCODE_SIZE
		   + CHAR_SIZE + DATE_SIZE + CONTACTNO_SIZE;

	len += IMM_REFER_NO_SIZE + DATE_SIZE + PASSPORT_NO_SIZE + DATE_SIZE
		   + COUNTRY_CODE_SIZE + 2*DATE_SIZE + ENTRY_PERMIT_NO_SIZE 
		   + INT_SIZE;

	//added this new len on 25/09/06
	len += KPT_SIZE + DATE_SIZE + USER_ID_SIZE + INT_SIZE
		   + 2*REMARK_SIZE + REASON_CODE_SIZE + CHAR_SIZE;

	/* Size of l&r minutiae */
	len +=  req->lfinger.normalized_minutiae_size;

	len +=  req->rfinger.normalized_minutiae_size;
	
	/* Add size for field ids and field indicator (total 54 + 8 fields)  */

	//len += 54*(FIELD_ID_SIZE + 1);
	len += 62*(FIELD_ID_SIZE + 1);

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

int copy_images1(LI_NRS_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code)
{

	char *temp_ptr = *in_temp_ptr;
	int ret = 0;
//	BYTE *new_buff;
//	int len;

#ifdef DEBUG
		userlog("copy_images : In copy_images");
#endif
	
	/* Low res photo is compressed to 2.9k size now for IJPN 
	if(req->low_res_portrait.portrait_size > 0)
	{
	 ret = compress_photo(req->low_res_portrait.portrait_buff, req->low_res_portrait.portrait_size, &new_buff, &len);
	 if (ret != GMPC_GOOD)
	 {
		userlog("Unable to compress to low res photo");
		return GMPC_BAD;
	 }

	 ret = add_one_image_field(FID_LOW_RES_PORTAIT,  &temp_ptr, 
		new_buff, 0xfd, len, IMAGE_IND_JPEG_DB2, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }

	 userlog(" The length of LOW_RES_PORTAIT size after compression : %ld",len);
	 userlog(" After the  add_one_image_field for LOW_RES_PORTAIT");
	}
	*/

	ret = 0;



	/* LFP Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case 
	if(req->lfinger.orginal_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_LFP_ORIGINAL_MINU,  &temp_ptr, 
		&(req->lfinger), req->lfinger.orginal_minutiae_size, 
		IMAGE_IND_LFP_MINU, error_code);
	 #ifdef DEBUG
		userlog("copy_images : Copied LF orig minut - %d", ret);
	 #endif
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}

	ret = 0;
	/* RFP Minutiae 
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case 

	if(req->rfinger.orginal_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_RFP_ORIGINAL_MINU,  &temp_ptr, 
		&(req->rfinger), req->rfinger.orginal_minutiae_size, 
		IMAGE_IND_RFP_MINU, error_code);

	 #ifdef DEBUG
		userlog("copy_images : Copied RF orig minut - %d", ret);
	 #endif

	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}
	*/

	 ret = 0;
	/* LFP Normalized Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */

	if(req->lfinger.normalized_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_LFP_NORM_MINU,  &temp_ptr, 
		&(req->lfinger), req->lfinger.normalized_minutiae_size, 
		IMAGE_IND_LFP_NORM_MINU, error_code);

	 #ifdef DEBUG
		userlog("copy_images : Copied LF norm minutiae - %d", ret);
	 #endif

	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}


	ret = 0;
	/* RFP Normalized Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */

	if(req->rfinger.normalized_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_RFP_NORM_MINU,  &temp_ptr, 
		&(req->rfinger), req->rfinger.normalized_minutiae_size, 
		IMAGE_IND_RFP_NORM_MINU, error_code);

	 #ifdef DEBUG
		userlog("copy_images : Copied RF norm minutiae - %d", ret);
	 #endif

	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}



	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;

}

// commeted for IJPN as this is no more in use here
//int nQuality = 100;

/*
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
*/
/*
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
*/

/*
int nQuality = 100;

BOOL CreateLowResImage(imgdes *desImage, imgdes *srcImage, DWORD dwMaxSize, long *actual_len)
{
	HGLOBAL hMem;
	BOOL bDone = FALSE;
	unsigned char *pBuffer=NULL;
	int rcode;
	DWORD dwBufSize;
	JpegData jdat;

	userlog("Reducing image quality");
	nQuality = 100;

	do {
		rcode = savejpgtobuffer(&pBuffer, srcImage, nQuality);
		
		if(rcode == NO_ERROR)	{
			// Get the buffer size
			hMem = GlobalHandle(pBuffer);
			dwBufSize = GlobalSize(hMem);
			if( dwBufSize > dwMaxSize )	{
				GlobalFree(hMem);
				pBuffer = NULL;
				nQuality--;
			}
			else	{
			
				bDone = TRUE;
				*actual_len = dwBufSize;

				freeimage(desImage);
				jpeginfofrombuffer(pBuffer, &jdat);
				allocimage(desImage, jdat.width, jdat.length, jdat.vbitcount);

				if( loadjpgfrombuffer(pBuffer, desImage) != NO_ERROR)	{
					userlog("Error converting JPEG image");
					GlobalFree(hMem);
					return FALSE;
				}
				else	{
					GlobalFree(hMem);
					userlog("Final Image Quality = %d\n", nQuality);
					return TRUE;
				}
			}
		}
		else	{
			userlog("Unable to save image to buffer");
			bDone = TRUE;
			return FALSE;
		}

		if(nQuality<=0)	{
			userlog("Unable to compress image, the size is too small !");
		}

	} while(!bDone);

	return TRUE;
}


int compress_photo(unsigned char *buff, int ori_len,
				   BYTE **new_buff, int *new_len)
{
	int rcode;
	int maxSize=LEGACY_LR_PHOTO_SIZE;
	imgdes ImgOrig, Img2k;
	JpegData jdat;
	int nWidth, nHeight;

	// Get the information
	userlog("compress_photo: Before jpeginfofrombuffer");
	rcode = jpeginfofrombuffer(buff, &jdat);
	if(rcode != NO_ERROR)
		return GMPC_BAD;

	nWidth = jdat.width;
	nHeight = jdat.length;

	userlog("compress_photo: Before allocimage");
   rcode = allocimage(&ImgOrig, jdat.width, jdat.length, jdat.vbitcount);
   if(rcode == NO_ERROR) {

		// Load the image
		userlog("compress_photo: Before loadjpgfrombuffer");
      rcode = loadjpgfrombuffer(buff, &ImgOrig);
		if( rcode != NO_ERROR )	{
			printf("\nError reading JPEG Image");
			return GMPC_BAD;
		}
 	}

	if(rcode == NO_ERROR)	{

		userlog("compress_photo: Before CreateLowResImage");
		if( !CreateLowResImage(&Img2k, &ImgOrig, maxSize, new_len) )	{
			userlog("compress_photo: Error compressing LOW_RES image");
		}
		else	{
			userlog("compress_photo: Before savejpgtobuffer");
			savejpgtobuffer(new_buff, &Img2k, nQuality);
			userlog("compress_photo: After savejpgtobuffer");
		}
	}

	userlog("compress_photo: Before freeimage");
	freeimage(&ImgOrig);
	freeimage(&Img2k);

	userlog("compress_photo: Before return GMPC_GOOD");
	return GMPC_GOOD;
}

  */