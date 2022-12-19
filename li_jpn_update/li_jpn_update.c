/*$Header:   F:/GSCBProjectDb/archives/source/LegacyInterface/li_jpn_update.c-arc   1.18   Oct 14 2000 16:04:08   ThoratAD  $*/
/********************************************************************/
/* File Name	:li_jpn_update.c								    */
/* Author		:Vageesh Patwardhan									*/
/* Description	:Contains the li_jpn_update_p function				*/
/********************************************************************/

#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "userlog.h"


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

#include "li_jpn_update.h"
//#include <vicdefs.h>
#include <VICDEFS.H>
//#include "SagemPortraitAcq.h"
#include "li_call_dll.h"

//extern APPL_EXCEP_LOG_T excep_log;
//extern PROG_ACCESS_LOG_T prog_log;

//extern LI_PUT_DLL_FN_TYP li_put_dll;
//extern LI_GET_DLL_FN_TYP li_get_dll;


/********************************************************************/
/* Function Name : li_jpn_update_p									*/
/* Input         : header containing user id, wskstn id etc			*/
/*				   req containing the applicant's id demographics	*/
/* Outputs		 : msg_id containing the message id of the message  */
/*				   error_code containing err code at failure		*/
/* Description   : This function is to be used to queue a			*/
/*				   LI_JPN_UPDATE request with the legacy			*/
/* Return Values : int GMPC_GOOD - success                          */
/*					   GMPC_BAD - failure							*/
/* Limitations   : None                                             */
/********************************************************************/
 
int li_jpn_update_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T put_fin_data,
						   LI_JPN_UPDATE_REQ_T req,
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

	/* Structure for registry values */
	READ_REG_T read_reg = {0,0};

	
	/* misc variables */
	char *temp_ptr;
	long len;
	int ret;
	char temp_char_arr[10] = "\0";
	char temp_city_code[CITY_CODE_SIZE] = "\0";
	int i=0;


	userlog("-------------------------------------------------------------------- ");
	userlog("In the li_jpn_update lib");

	userlog("upd_appnt_demo_info : Txn type - %d", req.trans_type);
	userlog("upd_appnt_demo_info : Siren short name1 - %s", req.appnt_names.siren_short_name1);
	userlog("upd_appnt_demo_info : Siren short name2 - %s", req.appnt_names.siren_short_name2);
	userlog("upd_appnt_demo_info : GMPC short name1 - %s", req.appnt_names.gmpc_short_name1);
	userlog("upd_appnt_demo_info : GMPC short name2 - %s", req.appnt_names.gmpc_short_name2);
	userlog("upd_appnt_demo_info : GMPC short name3 - %s", req.appnt_names.gmpc_short_name3);
	userlog("upd_appnt_demo_info : Current long name - %s", req.appnt_names.current_long_name);
	userlog("upd_appnt_demo_info : Orig name - %s", req.appnt_names.original_name);
	userlog("upd_appnt_demo_info : KPT no - %s", req.misc.applicant_kpt);
	userlog("upd_appnt_demo_info : GMPC remarks1 - %s", req.misc.gmpc_remarks1);
	userlog("upd_appnt_demo_info : GMPC remarks2 - %s", req.misc.gmpc_remarks2);
	userlog("upd_appnt_demo_info : Update print ind - %c", req.misc.update_prints_ind);
	userlog("upd_appnt_demo_info : Juvenile flag - %c", req.misc.juvenile_flag);
	userlog("upd_appnt_demo_info : Quality stat - %c", req.misc.quality_status);
	userlog("upd_appnt_demo_info : Ic color code - %c", req.misc.ic_colour);
	userlog("upd_appnt_demo_info : Finger acquisition source - %c", req.misc.finger_acquision_source);
	//userlog("upd_appnt_demo_info : Card version - %d", req.misc.card_version);
	userlog("upd_appnt_demo_info : Orig name ind - %c", req.misc.original_name_indicator);
	userlog("upd_appnt_demo_info : Origin ind - %c", req.misc.origin_indicator);
	userlog("upd_appnt_demo_info : New address1 - %s", req.new_address->address1);
	userlog("upd_appnt_demo_info : New address2 - %s", req.new_address->address2);
	userlog("upd_appnt_demo_info : New address3 - %s", req.new_address->address3);
	userlog("upd_appnt_demo_info : New post code - %s", req.new_address->post_code);
	userlog("upd_appnt_demo_info : New city code - %d", req.new_address->city_code);
	userlog("upd_appnt_demo_info : New state code - %s", req.new_address->state_code);
	userlog("upd_appnt_demo_info : Old address1 - %s", req.old_address->address1);
	userlog("upd_appnt_demo_info : Old address2 - %s", req.old_address->address2);
	userlog("upd_appnt_demo_info : Old address3 - %s", req.old_address->address3);
	userlog("upd_appnt_demo_info : Old post code - %s", req.old_address->post_code);
	userlog("upd_appnt_demo_info : Old city code - %d", req.old_address->city_code);
	userlog("upd_appnt_demo_info : Old state code - %s", req.old_address->state_code);
	//userlog("upd_appnt_demo_info : HR photo size - %ld", req.hi_res_portrait.portrait_size);
	userlog("upd_appnt_demo_info : LR photo size - %ld", req.low_res_portrait.portrait_size);
	userlog("upd_appnt_demo_info : LF ind - %s", req.lfinger.finger_ind);
	userlog("upd_appnt_demo_info : LF quality score - %ld", req.lfinger.quality_score);
	userlog("upd_appnt_demo_info : LF pattern - %c", req.lfinger.finger_pattern);
	userlog("upd_appnt_demo_info : LF thumb stat - %c", req.lfinger.thumb_status);
	//userlog("upd_appnt_demo_info : LF image size - %ld", req.lfinger.fp_img_size);
	userlog("upd_appnt_demo_info : LF orig min size - %ld", req.lfinger.orginal_minutiae_size);
	userlog("upd_appnt_demo_info : LF norm min size - %ld", req.lfinger.normalized_minutiae_size);
	//userlog("upd_appnt_demo_info : LF matrix size - %ld", req.lfinger.matrix_buffer_size);
	userlog("upd_appnt_demo_info : RF ind - %s", req.rfinger.finger_ind);
	userlog("upd_appnt_demo_info : RF quality score - %ld", req.rfinger.quality_score);
	userlog("upd_appnt_demo_info : RF pattern - %c", req.rfinger.finger_pattern);
	userlog("upd_appnt_demo_info : RF thumb stat - %c", req.rfinger.thumb_status);
	//userlog("upd_appnt_demo_info : RF image size - %ld", req.rfinger.fp_img_size);
	userlog("upd_appnt_demo_info : RF orig min size - %ld", req.rfinger.orginal_minutiae_size);
	userlog("upd_appnt_demo_info : RF norm min size - %ld", req.rfinger.normalized_minutiae_size);
	//userlog("upd_appnt_demo_info : RF matrix size - %ld", req.rfinger.matrix_buffer_size);
	userlog("upd_appnt_demo_info : KPP no - %s", req.afis_1n_misc.kpp_no);
	userlog("upd_appnt_demo_info : Police_army_no - %s", req.afis_1n_misc.police_army_no);
	//userlog("upd_appnt_demo_info : Police no - %s", req.afis_1n_misc.police_no);
	//userlog("upd_appnt_demo_info : Army no - %s", req.afis_1n_misc.army_no);
	userlog("upd_appnt_demo_info : DOB - %s", req.afis_1n_misc.dob);
	userlog("upd_appnt_demo_info : Unknown birth ind - %c", req.afis_1n_misc.unknown_birth_ind);
	userlog("upd_appnt_demo_info : First time ind - %c", req.afis_1n_misc.first_time_ind);
	userlog("upd_appnt_demo_info : Birth district - %s", req.afis_1n_misc.birth_dist_code);
	userlog("upd_appnt_demo_info : Gender - %c", req.afis_1n_misc.gender);
	userlog("upd_appnt_demo_info : Religion - %c", req.afis_1n_misc.religion);
	userlog("upd_appnt_demo_info : Race - %s", req.afis_1n_misc.race);
	userlog("upd_appnt_demo_info : HK ind - %c", req.afis_1n_misc.hk_ind);
	userlog("upd_appnt_demo_info : KT ind - %s", req.afis_1n_misc.kt_ind);
	userlog("upd_appnt_demo_info : rjind - %s", req.rjind);
	userlog("upd_appnt_demo_info : Residence stat - %c", req.afis_1n_misc.resi_status);
	userlog("upd_appnt_demo_info : Lost card cnt - %d", req.afis_1n_misc.lost_card_count);
	//userlog("upd_appnt_demo_info : Lost card ind - %d", req.afis_1n_misc.lost_card_count_ind);
	userlog("upd_appnt_demo_info : Article color code - %s", req.misc.art_color_code);
	userlog("upd_appnt_demo_info : Retire date - %s", req.misc.retire_date);
	userlog("upd_appnt_demo_info : Pol/Army join date - %s", req.misc.pol_army_join_date);
	//userlog("upd_appnt_demo_info : Appl approval date - %s", req.misc.appl_approval_date);
	userlog("upd_appnt_demo_info : Green card expiry date - %s", req.misc.green_card_exp_date);
	userlog("upd_appnt_demo_info : Person status - %c", req.misc.person_status);
	userlog("upd_appnt_demo_info : Citizen nationality code - %s", req.misc.citizen_nation_code);

	/* added on 24/09/2002 by shiva.p */
	userlog("upd_appnt_demo_info : name_appr_ref_num - %s", req.misc.name_appr_ref_num);
	userlog("upd_appnt_demo_info : name_chg_reason_code - %s", req.misc.name_chg_reason_code);
	userlog("upd_appnt_demo_info : name_reg_date - %s", req.misc.name_reg_date);
	userlog("upd_appnt_demo_info : imm_ref_number - %s", req.misc.imm_ref_number);
	userlog("upd_appnt_demo_info : imm_ref_date - %s", req.misc.imm_ref_date);
	userlog("upd_appnt_demo_info : imm_expire_date - %s", req.misc.imm_expire_date);
	userlog("upd_appnt_demo_info : passport_no - %s", req.misc.passport_no);
	userlog("upd_appnt_demo_info : passport_issue_date - %s", req.misc.passport_issue_date);
	userlog("upd_appnt_demo_info : passport_issue_country - %s", req.misc.passport_issue_country);

	//userlog("upd_appnt_demo_info : req.lfinger.fp_img_buff - %X", req.lfinger.fp_img_buff);
	userlog("upd_appnt_demo_info : req.lfinger.org_minutiae_buff - %X", req.lfinger.org_minutiae_buff);
	userlog("upd_appnt_demo_info : req.lfinger.norm_minutiae_buff - %X", req.lfinger.norm_minutiae_buff);
	//userlog("upd_appnt_demo_info : req.lfinger.matrix_buffer - %X", req.lfinger.matrix_buffer);
	//userlog("upd_appnt_demo_info : req.rfinger.fp_img_buff - %X", req.rfinger.fp_img_buff);
	userlog("upd_appnt_demo_info : req.rfinger.org_minutiae_buff - %X", req.rfinger.org_minutiae_buff);
	userlog("upd_appnt_demo_info : req.rfinger.norm_minutiae_buff - %X", req.rfinger.norm_minutiae_buff);
	//userlog("upd_appnt_demo_info : req.rfinger.matrix_buffer - %X", req.rfinger.matrix_buffer);
	userlog("upd_appnt_demo_info : req.low_res_portrait.portrait_buff - %X", req.low_res_portrait.portrait_buff);
	//userlog("upd_appnt_demo_info : req.hi_res_portrait.portrait_buff - %X", req.hi_res_portrait.portrait_buff);

//Commented for GSCB upgrade- 10th March 2005
//JRS 147.
	userlog("upd_appnt_demo_info : req.misc.szPermitNo is: %s", req.misc.szPermitNo);
	userlog("upd_appnt_demo_info : jpn_upd.misc.szPermitDate is: %s", req.misc.szPermitDate);
	userlog("upd_appnt_demo_info : req.misc.nEntryPermitType is: %d", req.misc.nEntryPermitType);
	userlog("upd_appnt_demo_info : req.misc.nDocTypeCode is: %d", req.misc.nDocTypeCode);

	userlog("upd_appnt_demo_info : req.jkind - %c", req.jkind);
	userlog("upd_appnt_demo_info : req.imm_country_code - %s", req.imm_country_code);
	userlog("upd_appnt_demo_info : req.ijpn_gmpc_ind - %c", req.ijpn_gmpc_ind);

	userlog("upd_appnt_demo_info : req.appl_branch_code - %s", req.appl_branch_code);

	userlog("upd_appnt_demo_info : req.transaction_code - %s", req.transaction_code);

	userlog("upd_appnt_demo_info : req.application_type - %s", req.application_type);

	userlog("upd_appnt_demo_info : req.coll_location - %s", req.coll_location);	

	userlog("upd_appnt_demo_info : myprind - %s", req.misc.myprind);  // added on 11/07/2008 for JRS160

	userlog("upd_appnt_demo_info : req.mypr_extrafee - %s", req.mypr_extrafee);  // added on 12/09/2008 for JRS160

	userlog("upd_appnt_demo_info : req.approve_date - %s", req.approve_date);  // added on 17/04/2009
	userlog("upd_appnt_demo_info : req.apprv_user_id - %s", req.apprv_user_id);  // added on 17/04/2009
	userlog("upd_appnt_demo_info : req.appt_date - %s", req.appt_date);  // added on 19/09/2013

	userlog("upd_appnt_demo_info : req.actual_kptno - %s", req.actual_kptno);  // added on 13/02/2014

	userlog("upd_appnt_demo_info : req.lostcntneg - %d", req.lostcntneg);  // added on 19/02/2014
	userlog("upd_appnt_demo_info : req.lostcntcrime - %d", req.lostcntcrime);  // added on 19/02/2014
	userlog("upd_appnt_demo_info : req.lostcntdis - %d", req.lostcntdis);  // added on 19/02/2014

	userlog("upd_appnt_demo_info : req.ktareacode - %s", req.ktareacode); // added this filed on 28/05/2014 for CR 282.
	userlog("upd_appnt_demo_info : req.apjareacode - %s", req.apjareacode); // added this filed on 28/05/2014 for CR 282.

	userlog(" ");



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
	put_header.agency_id = JPN;
	strcpy(put_header.gsc_no,  header.gsc_no);
	put_header.msg_type = UPD_REQ;
	if(TXN_TYPE_AFIS_1N == req.trans_type)
		put_header.send_to_AFIS = 1;
	else
		put_header.send_to_AFIS = 0;

	if('1' == req.misc.update_prints_ind)
		put_header.send_to_AFIS = 1;


	ltoa(LI_ENQUIRE_1N_CHECK, put_header.trans_code, 10);
	strcpy(put_header.user_id, header.user_id);
	strcpy(put_header.workstation_id, header.workstation_id);
	strcpy(put_header.trans_date, header.trans_date);
	strcpy(put_header.trans_time, header.trans_time);
	strcpy(put_header.refer_date, "\0");
	strcpy(put_header.refer_time, "\0");

	/****************************************************************************/
	/* Format the data															*/
	/****************************************************************************/
	
	
	/* Generate the variable data */

	/* Judge the size of the variable part of the data */
	
	userlog("Before calling the judge_buffer_size");

	len = judge_buffer_size(req);

	//userlog("After calling the judge_buffer_size len: %ld",len);
	
	/* Allocate memory for the entire message. */
	put_var_data.len = len;
	put_var_data.data = (char *) malloc(put_var_data.len);
	

	if(NULL == (put_var_data.data = malloc(put_var_data.len)))
	{
		userlog("li_jpn_update_p  : Memory allocation failed at put_var_data.data");

		//strcpy(prog_log.remarks,"li_jpn_update_p  : MALLOC_ERROR - malloc call failed");
		//strcpy(excep_log.error_msg, "li_jpn_update_p  : MALLOC_ERROR - malloc call failed");
		//excep_log.severity = FATAL;
		//log_error();
		
		*error_code = MALLOC_ERROR;
		return GMPC_BAD;
	}

	//userlog("After allocating the memory to put_var_data.data");
	memset(put_var_data.data, 0, put_var_data.len);
	//memset(put_var_data.data,' ',put_var_data.len);
	/* Put the actual data */
	temp_ptr = put_var_data.data;


	//userlog("Before calling the copy_misc");
	/* Copy the miscellaneous stuff */
	ret = copy_misc(&req, &temp_ptr, error_code);
	if(GMPC_GOOD != ret)
	{
		free(put_var_data.data);
		return ret;
	}

	//userlog("After calling the copy_misc");

	/* Copy the applicants names */
	ret = copy_names(&req, &temp_ptr, error_code);
	if(GMPC_GOOD != ret)
	{
		free(put_var_data.data);
		return ret;
	}

	//userlog("After calling the copy_names");
	/* Address if new address is entered */ 
	if(NULL != req.new_address)
	{// to check with vasanth about this, is this old_address or new_address??
		ret = copy_addresses(&req, &temp_ptr, error_code);
		if(GMPC_GOOD != ret)
		{
			free(put_var_data.data);
			return ret;
		}
	}

	//userlog("After calling the copy_addresses");

	/* Added on 26th April 2005 for IJPN */

	/* Bypass AFIS indicator */
	if(req.bypass_afis_ind != '\0')
	{
	ret = add_one_fc_field(FID_BYPASS_AFIS_IND, &temp_ptr,  &req.bypass_afis_ind,	
					TYPE_CHAR, error_code);
	}

	/* define all fee columns here */	

	/* processing fee */
	if ((req.processing_fee[0] != '\0') && (req.processing_fee[0] != ' '))
	{
	//	gcvt(req.processing_fee, 10, temp_char_arr);
		add_one_fc_field(FID_AMTPF, &temp_ptr, req.processing_fee,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After processing fee");
	/* calculated compound fee */
	if ((req.calculcated_compound_fee[0] != '\0') && (req.calculcated_compound_fee[0] != ' '))
	{
	//	gcvt(req.calculcated_compound_fee, 10, temp_char_arr);
		add_one_fc_field(FID_CALCULATED_COMPOUND_FEE, &temp_ptr, req.calculcated_compound_fee,
					TYPE_CHAR_ARR, error_code);
	}
	//userlog("After calculated compound fee");
	/* special fee */
	if ((req.special_fee[0] != '\0') && (req.special_fee[0] != ' '))
	{
	//	gcvt(req.special_fee, 10, temp_char_arr);
		userlog("lireq.special_fee : %s",req.special_fee);
		add_one_fc_field(FID_AMTAF, &temp_ptr, req.special_fee,
					TYPE_CHAR_ARR, error_code);
	}
	//userlog("After special fee");

	/* paid fee */	
	if ((req.paid_fee[0] != '\0') && (req.paid_fee[0] != ' '))
	{
	//	gcvt(req.paid_fee, 10, temp_char_arr);
		userlog("lireq.paid_fee : %s",req.paid_fee);
		add_one_fc_field(FID_PAID_FEE, &temp_ptr, req.paid_fee,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After paid fee");
	/* additional fee */ // to check the field id for this
	if ((req.additional_fee[0] != '\0') && (req.additional_fee[0] != ' '))
	{
	//	gcvt(req.additional_fee, 10, temp_char_arr);
		add_one_fc_field(FID_ADDITIONAL_FEE, &temp_ptr, req.additional_fee,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After additional fee");
	/* renewal compound fee */
	if((req.renewal_compound[0] != '\0') && (req.renewal_compound[0] != ' '))
	{
	//	gcvt(req.renewal_compound, 10, temp_char_arr);
		add_one_fc_field(FID_AMTKH, &temp_ptr, req.renewal_compound,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After compound fee");
	/* renewal_18 compound fee */
	if((req.renewal_18_compound[0] != '\0') && (req.renewal_18_compound[0] != '\0'))
	{
	//	gcvt(req.renewal_18_compound, 10, temp_char_arr);
		add_one_fc_field(FID_AMTPR, &temp_ptr, req.renewal_18_compound,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After renewal_18 compound fee");
	/* lost compound fee */
	if((req.lost_compound[0] != '\0') && (req.lost_compound[0] != ' '))
	{
	//	gcvt(req.lost_compound, 10, temp_char_arr);
		add_one_fc_field(FID_AMTHG, &temp_ptr, req.lost_compound,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After lost compound fee");
	/* card expired compound fee */
	if ((req.card_expired_compound[0] != '\0') && (req.card_expired_compound[0] != ' '))
	{
	//	gcvt(req.card_expired_compound, 10, temp_char_arr);
		add_one_fc_field(FID_AMTKL, &temp_ptr, req.card_expired_compound,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After card expired compound fee");
	/* damaged compound fee */
	if ((req.damaged_compound[0] != '\0') && (req.damaged_compound[0] != ' '))
	{
	//	gcvt(req.damaged_compound, 10, temp_char_arr);
		add_one_fc_field(FID_AMTRK, &temp_ptr, req.damaged_compound,
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After damaged compound fee");
	/* Transaction code */
	if((req.transaction_code[0] != '\0') && (req.transaction_code[0] != ' '))
	{
	ret = add_one_fc_field(FID_LEG_TXN_CODE, &temp_ptr,  req.transaction_code,	
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After Transaction code");
	/* Application type */ 
	if((req.application_type[0] != '\0') && (req.application_type[0] != '\0'))
	{
	ret = add_one_fc_field(FID_APPL_TYPE, &temp_ptr,  req.application_type,	
					TYPE_CHAR_ARR, error_code);
	}
	
	//userlog("After Application type");
	/* Collection location */
	if((req.coll_location[0] != '\0') && (req.coll_location[0] != ' '))
	{
	ret = add_one_fc_field(FID_KPT_COLLECTION_PLACE_CD, &temp_ptr,  req.coll_location,	
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After Collection location");
	/* Collection date */
	/* This field id 3153 is commented on 18/10/2013 to stop sending it to host
	if((req.coll_date[0] != '\0') && (req.coll_date[0] != ' '))
	{	temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.coll_date);
	ret = add_one_fc_field(FID_KPT_COLLECTION_DT, &temp_ptr,  temp_char_arr,	
					TYPE_CHAR_ARR, error_code);
	}
    */
	//userlog("After Collection date");
	/* Indicator2 */ // 
	if((req.indicator2 != '\0') && (req.indicator2 != ' '))
	{
	ret = add_one_fc_field(FID_INDICATOR2, &temp_ptr,  &req.indicator2,	
					TYPE_CHAR, error_code);
	}

	//userlog("After Indicator2");
	/* Indicator1 (Agency on chip) */
	if((req.indicator1[0] != '\0') && (req.indicator1[0] != ' '))
	{
	ret = add_one_fc_field(FID_INDICATOR1, &temp_ptr,  req.indicator1,	
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After Indicator1");
	/* change reference no 
	if((req.change_reference_no[0] != '\0') && (req.change_reference_no[0] != ' '))
	{
	ret = add_one_fc_field(FID_APPRVLDOC, &temp_ptr,  req.change_reference_no,	
					TYPE_CHAR_ARR, error_code);
	}
	*/

	//userlog("After change reference no");
	/* Application Number */
	if((req.appl_no[0] != '\0') && (req.appl_no[0] != ' '))
	{
	ret = add_one_fc_field(FID_APPL_ID, &temp_ptr,  req.appl_no,	
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After Application Number");
	/* Sponsor kpt */
	if((req.sponsor_kpt[0] != '\0') && (req.sponsor_kpt[0] != ' '))
	{
	ret = add_one_fc_field(FID_SPONSOR_ID_NO, &temp_ptr,  req.sponsor_kpt,	
					TYPE_CHAR_ARR, error_code);
	}

	//userlog("After Sponsor kpt");
	/* Sponsor id type */
	if((req.sponsor_id_type[0] != '\0') && (req.sponsor_id_type[0] != ' '))
	{
	ret = add_one_fc_field(FID_SPONSOR_ID_TYPE, &temp_ptr,  req.sponsor_id_type,	
					TYPE_CHAR_ARR, error_code);
	}


	/* Applicant Sponsor Relationship code */
	if((req.appnt_spon_rel_code[0] != '\0') && (req.appnt_spon_rel_code[0] != ' '))
	{
	ret = add_one_fc_field(FID_RELATION_CODE, &temp_ptr,  req.appnt_spon_rel_code,	
					TYPE_CHAR_ARR, error_code);
	}


	/* Ktstart date */
	if((req.ktstartdate[0] != '\0') && (req.ktstartdate[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.ktstartdate);
	ret = add_one_fc_field(FID_KTSTARTDATE, &temp_ptr,  temp_char_arr,	
					TYPE_CHAR_ARR, error_code);
	}

	/* Ktend date */
	if((req.ktenddate[0] != '\0') && (req.ktenddate[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.ktenddate);
	ret = add_one_fc_field(FID_KTENDDATE, &temp_ptr,  temp_char_arr,	
					TYPE_CHAR_ARR, error_code);
	}

// Added this on 25/06/2010 for CR 211 for Release 3.18 for My Tentera

	//userlog("li_jpn_upd: upd_appnt_demo_info : Release 3.18");
	//added by samsuri on 6 dec 2022
	userlog("req.afis_1n_misc.police_army_id - [%c]", req.afis_1n_misc.police_army_id);

	if(req.afis_1n_misc.police_army_id == 'T') 
	{
		//added by samsuri on 6 dec 2022
		userlog("My Tentera : KT ind - [%s]", req.afis_1n_misc.kt_ind);
		userlog("My Tentera : rjind - [%s]", req.rjind);

		//added by samsuri on 6 dec 2022
		if(strcmp(req.afis_1n_misc.kt_ind,"KT") == 0)
		{
			add_one_fc_field(FID_KT_IND_CD, &temp_ptr, (char *)req.afis_1n_misc.kt_ind,
			TYPE_CHAR_ARR, error_code);
		}
		//added by samsuri on 6 dec 2022
		if(strcmp(req.rjind, "RJ")== 0)
		{
		ret = add_one_fc_field(FID_RJIND, &temp_ptr,  req.rjind,	
						TYPE_CHAR_ARR, error_code);
		}


		if(req.misc.retire_date[0] == '\0')
		{
			/* KT Indicator */
			if((req.afis_1n_misc.kt_ind[0] != '\0') && (req.afis_1n_misc.kt_ind[0] != ' '))
			{
				userlog("li_jpn_upd: upd_appnt_demo_info : Release 3.49");
				if((strcmp(req.afis_1n_misc.kt_ind,"01") == 0) || (strcmp(req.afis_1n_misc.kt_ind,"02") == 0) || (strcmp(req.afis_1n_misc.kt_ind,"03") == 0)) //modified by samsuri on 21 jan 2022, SKP025/SA/2021
				{
					userlog("li_jpn_upd: upd_appnt_demo_info : kt_ind :",req.afis_1n_misc.kt_ind);
				add_one_fc_field(FID_MIL_RANK_KT, &temp_ptr, (char *)req.afis_1n_misc.kt_ind,
					TYPE_CHAR_ARR, error_code);
				}
			}

			/* Rjindicator */
			if((req.rjind[0] != '\0') && (req.rjind[0] != ' '))
			{
				if((strcmp(req.rjind,"01") == 0) || (strcmp(req.rjind,"02") == 0) || (strcmp(req.rjind,"03") == 0))
				{
					userlog("li_jpn_upd: upd_appnt_demo_info : rjind :",req.rjind);
				ret = add_one_fc_field(FID_MIL_TYPE_RJ, &temp_ptr,  req.rjind,	
								TYPE_CHAR_ARR, error_code);
				}
			}
		}
	}
	else
	{
		/* KT Indicator */
		//if((req.afis_1n_misc.kt_ind[0] != '\0') && (req.afis_1n_misc.kt_ind[0] != ' '))

		//added by samsuri on 6 dec 2022
		userlog("My Tentera : KT ind - [%s]", req.afis_1n_misc.kt_ind);
		userlog("My Tentera : rjind - [%s]", req.rjind);

		//modified by samsuri on 6 dec 2022
		if(strcmp(req.afis_1n_misc.kt_ind,"KT") == 0 || ((req.afis_1n_misc.kt_ind[0] != '\0') && (req.afis_1n_misc.kt_ind[0] != ' ')))
		{
		add_one_fc_field(FID_KT_IND_CD, &temp_ptr, (char *)req.afis_1n_misc.kt_ind,
			TYPE_CHAR_ARR, error_code);
		}

		/* Rjindicator */
		//if((req.rjind[0] != '\0') && (req.rjind[0] != ' '))
		//modified by samsuri on 6 dec 2022
		if(strcmp(req.rjind, "RJ")== 0 || ((req.rjind[0] != '\0') && (req.rjind[0] != ' ')))
		{
		ret = add_one_fc_field(FID_RJIND, &temp_ptr,  req.rjind,	
						TYPE_CHAR_ARR, error_code);
		}
	}

// My Tentera end

	/* Rjstart date */
	if((req.rjstartdate[0] != '\0') && (req.rjstartdate[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.rjstartdate);
	ret = add_one_fc_field(FID_RJSTARTDATE, &temp_ptr,  temp_char_arr,	
					TYPE_CHAR_ARR, error_code);
	}

	/* Rjend date */
	if((req.rjenddate[0] != '\0') && (req.rjenddate[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.rjenddate);
	ret = add_one_fc_field(FID_RJENDDATE, &temp_ptr,  temp_char_arr,	
					TYPE_CHAR_ARR, error_code);
	}

	/* Jpn doc number */
	if((req.jpn_doc_no[0] != '\0') && (req.jpn_doc_no[0] != ' '))
	{
	ret = add_one_fc_field(FID_JPN_DOC_NO, &temp_ptr,  req.jpn_doc_no,	
					TYPE_CHAR_ARR, error_code);
	}

	/* IMM country code 3digit*///1179
	if((req.imm_country_code_3digit[0] != '\0') && (req.imm_country_code_3digit[0] != ' '))
	{
	ret = add_one_fc_field(FID_IMM_CTRY_CODE, &temp_ptr,  req.imm_country_code_3digit,	
					TYPE_CHAR_ARR, error_code);
	}

	/* IMM country code 4digit one*///3011
	if((req.imm_country_code[0] != '\0') && (req.imm_country_code[0] != ' '))
	{
	ret = add_one_fc_field(FID_IMM_CTR_CODE_4DIGIT, &temp_ptr,  req.imm_country_code,	
					TYPE_CHAR_ARR, error_code);
	}
	

	/* Application status */
	if((req.appl_status != '\0') && (req.appl_status != ' '))
	{
	add_one_fc_field(FID_KPT_APPLN_STAT_CD, &temp_ptr, &req.appl_status,
		TYPE_CHAR, error_code);
	}

	/* Application status2 */
	if((req.appl_status2 != '\0') && (req.appl_status2 != ' '))
	{
	add_one_fc_field(FID_APPL_STATUS2, &temp_ptr, &req.appl_status2,
		TYPE_CHAR, error_code);
	}

	/* appldate */
	if((req.appldate[0] != '\0') && (req.appldate[0] != ' '))
	{
	  temp_char_arr[0] = '\0';
	  li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req.appldate);
	  add_one_fc_field(FID_KPT_REG_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	// 
	/* JKIND */
	if((req.jkind != '\0') && (req.jkind != ' '))
	{
	add_one_fc_field(FID_JKIND, &temp_ptr, &req.jkind,
		TYPE_CHAR, error_code);
		//Added by Salmi, 11th Aug 2020, DLKP (CRAPPL-  SKP002/CR/2020)
		if(req.jkind == '8')
		{
			userlog(" req.kptno : %s",req.kptno);
			userlog(" req.remark : %s",req.remark);

			//User 2 kptno
			if((req.kptno[0] != '\0') && (req.kptno[0] != ' '))
			{
			ret = add_one_fc_field(FID_APPRVKPTNO, &temp_ptr,  req.kptno,	
				TYPE_CHAR_ARR, error_code);
			}
			//User 2 remark
			if((req.remark[0] != '\0') && (req.remark[0] != ' '))
			{
			ret = add_one_fc_field(FID_REMARK, &temp_ptr,  req.remark,	
				TYPE_CHAR_ARR, error_code);
			}
		}
		//Added by Salmi, 11th Aug 2020, DLKP (CRAPPL-  SKP002/CR/2020)
	}
	userlog(" req.jkind : %c",req.jkind);

	/* IJPN_GMPC_IND */
	if((req.ijpn_gmpc_ind != '\0') && (req.ijpn_gmpc_ind != ' '))
	{
	add_one_fc_field(FID_IJPN_GMPC_IND, &temp_ptr, &req.ijpn_gmpc_ind,
		TYPE_CHAR, error_code);
	}

	
	userlog(" req.ijpn_gmpc_ind : %c",req.ijpn_gmpc_ind);

	/* application branch code */ // added on 10/11/05
	if((req.appl_branch_code[0] != '\0') && (req.appl_branch_code[0] != ' '))
	{
	ret = add_one_fc_field(FID_GMPC_APPLN_BRANCH_CD, &temp_ptr,  req.appl_branch_code,	
					TYPE_CHAR_ARR, error_code);
	}

	userlog(" req.appl_branch_code: %s",req.appl_branch_code);

	/* telephone number */ // added on 18/04/06
	if((req.telephone_no[0] != '\0') && (req.telephone_no[0] != ' '))
	{
	ret = add_one_fc_field(FID_TELEPHONE_NO, &temp_ptr,  req.telephone_no,	
					TYPE_CHAR_ARR, error_code);
	}

	userlog(" req.telephone_no: %s",req.telephone_no);

	//added by samsuri on 20 oct 2022
	if((req.email[0] != '\0') && (req.email[0] != ' '))
	{
	ret = add_one_fc_field(FID_EMAIL, &temp_ptr,  req.email,	
					TYPE_CHAR_ARR, error_code);
	}
	userlog(" req.email: %s",req.email);

	userlog(" ");
	userlog("Before calling the copy_images");
	userlog(" ");

	/* Copy the images */	
	ret = copy_images(&req, &temp_ptr, error_code);
	if(GMPC_GOOD != ret)
	{
		//userlog("Inside the copy_images, failed");
		free(put_var_data.data);
		return ret;
	}

	userlog(" ");
	userlog("After calling the copy_images");
	userlog(" ");
	
	/* end IJPN */
	//userlog("After copying all the fields ");

	/* Calculate the acutal size of the request buffer */
	put_var_data.len = temp_ptr - put_var_data.data;

	///****************************************************************************/
	///* Call li_put																*/
	///****************************************************************************/
	//
	///* Check if the function pointer is vaild */
	//if(NULL == li_put_dll )
	//{
	//	strcpy(prog_log.remarks,"li_jpn_update_p : li_put_dll call fail");
	//	strcpy(excep_log.error_msg, "li_jpn_update_p : li_put_dll function pointer not initalized (li_init may not have been called)");
	//	excep_log.severity = FATAL;
	//	log_error();
	//	
	//	*error_code = PUT_ERROR;
	//	free(put_var_data.data);
	//	return GMPC_BAD;
	//}
	//
	//ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);

	/****************************************************************************/
	/* Call the update dll function																*/
	/****************************************************************************/

	//userlog("Before calling the li_call_dll");

	ret = li_call_dll(put_header, put_var_data, put_fin_data, msg_id, error_code,
			pReplyMsg, iReplyMsgLen, sErrMessage);
	
	//userlog("After calling the li_call_dll, ret : %d",ret);
	/* Check return code */
	if(GMPC_GOOD != ret)
	{
		
		/* Read the registry to find the sleep time and retry counts */
//		read_registry(KPP_GATE_INTERFACE_ID, &read_reg, NULL);

//		if(read_reg.retry_count  <= 0)
///		{
//			free(put_var_data.data);
//			return ret;
//		}
//		for (;read_reg.retry_count > 0; read_reg.retry_count--)
//		{
//
//			/* Log a warning */
///			strcpy(prog_log.remarks,"li_jpn_update_p : li_put_dll call fail due to LEGACY_ERROR");
//			strcpy(excep_log.error_msg, "li_jpn_update_p : li_put_dll failed.  Retrying");
//			excep_log.severity = WARNING;
//			log_error();
//
//			*error_code = PUT_ERROR;
//
//			Sleep(read_reg.sleep_time);
//			msg_id[0] = '\0';
//		
//			//ret = (li_put_dll) (put_header, put_var_data, put_fin_data, msg_id, error_code);
//
//			ret = li_call_dll(put_header, put_var_data, put_fin_data, msg_id, error_code,
//					pReplyMsg, iReplyMsgLen, sErrMessage);
//
//			if(GMPC_GOOD == ret)
//			{
//				*error_code = 0;
//				return GMPC_GOOD;
//			}
//		}

		return GMPC_BAD;
	}

	return GMPC_GOOD;

}

/********************************************************************/
/* Function Name : judge_buffer_size								*/
/* Input         : req containing the applicant's id demographics	*/
/* Outputs		 : None												*/
/* Description   : This function is to be used to estimate the size	*/
/*				   of the variable part of the message buffer		*/
/* Return Values : long - length of buffer required					*/
/* Limitations   : Exact size of the buffer is dependent on acutal	*/
/*				   lengths of data and not on the size of the vars	*/
/*				   holding them.  This fact is not taken into		*/
/*				   consideration while estimating the size			*/
/********************************************************************/

long judge_buffer_size(LI_JPN_UPDATE_REQ_T req)
{
	long len = 0;

	/* Size the commonm always present items */
	//len = KPT_SIZE + REMARK_SIZE + REMARK_SIZE + 1 + 1 + 1 + 1 + 1;
	/* KPT + two GMPC remarks + update_prints_ind + juvenile_flag + */
	/* quality_status + ic_colour + finger_acquision_source	*/

	/* LI_JPN_UPDATE_MISC_T size */
	//len = sizeof(LI_JPN_UPDATE_MISC_T);

	
	/* Names */
	//len += sizeof(NAME_T);


	/* Addresses */
	//if(NULL != req->old_address)
	//{
	//	len += 2 *( (3 * ADDRESS_SIZE) + POST_CODE_SIZE + CITY_CODE_SIZE + STATE_CODE_SIZE);
	//	/* Old and new address: 3 address lines + post code + city code + state code */
	//}

	/* afis misc size */
	//len += sizeof(LI_AFIS_1N_MISC_T);

	//len += DATE_SIZE + DIST_CODE_SIZE + RACE_CODE_SIZE + KT_CODE_SIZE + 4;
	/* dob + birth dist code + race code + hk_ind + kt_ind + resi_status	*/
	/* + gender + unknown_birth_ind											*/


	/* Size the portraits */
	/* len += req->hi_res_portrait.portrait_size; */ // commented as this has been taken care in AFIS as per IJPN requirement
	//len += req->low_res_portrait.portrait_size;

	/* Size of minutiae info */
	
	//len +=  req->lfinger.normalized_minutiae_size + req->lfinger.orginal_minutiae_size;

	//len +=  req->rfinger.normalized_minutiae_size + req->rfinger.orginal_minutiae_size;

	//len += 2 * (FINGER_IND_SIZE + 6 + 1 + 1);
	

	/* Size of fingerprint info */
	/* commented as per IJPN requirement as it is taken care in AFIS
	len += req->left_finger_prints.fp_img_size + req->left_finger_prints.matrix_buffer_size
		+ req->left_finger_prints.normalized_minutiae_size + req->left_finger_prints.orginal_minutiae_size;

	len += req->right_finger_prints.fp_img_size + req->right_finger_prints.matrix_buffer_size
		+ req->right_finger_prints.normalized_minutiae_size + req->right_finger_prints.orginal_minutiae_size;

	len += 2 * (FINGER_IND_SIZE + 6 + 1 + 1);
	*/
	/* left and right finger_ind + quality_score + fingerprint pattern + thumb status*/

	
	//len += 1+ (10 * 6) + 4 + 2 + 7 + DATE_SIZE + /* indicator2 pending */ 
		//+ 8 + 40 +24 + 12 + 2 + 2*(DATE_SIZE) + 2 + 2*(DATE_SIZE) + 15 + 4;
	/* bypass_afis_ind(1) + 10 * 6 ( float size for fees) + legtxncode_size (4) + application_type (11) +
	 collection_location (7) + colldate (DATE_SIZE) + indicator2 + agency_size +
	 change_ref_no (40) + appl_no (24) + sponsor_kpt (16) + appnt_spon_rel_code +
	 2*(DATE_SIZE) + rjind (2) + 2*(DATE_SIZE) + jpn_doc_no (15) + imm_country_code (4); */
	
	len = KPT_SIZE+2*(REMARK_SIZE)+5*(CHAR_SIZE)+INT_SIZE+2*(CHAR_SIZE)
		+ARTICLE_COLOR_CODE_SIZE+3*(DATE_SIZE)+CHAR_SIZE+COUNTRY_CODE_SIZE
		+APPROV_DOC_NO_SIZE+NAME_CHG_CODE+DATE_SIZE+IMM_REFER_NO_SIZE
		+2*(DATE_SIZE)+PASSPORT_NO_SIZE+DATE_SIZE+COUNTRY_CODE_SIZE
		+(PERMIT_NO_SIZE+1)+DATE_SIZE+2*INT_SIZE;

	//userlog("after 1st calculation len = %ld",len);

	len = len + KPP_SIZE + 2*(ID_SIZE) + DATE_SIZE + 2*(CHAR_SIZE) 
		+ DIST_CODE_SIZE + 2*(CHAR_SIZE) + RACE_CODE_SIZE + CHAR_SIZE 
		+ KT_CODE_SIZE + CHAR_SIZE + INT_SIZE;

	//userlog("after 2nd calculation len = %ld",len);

	len = len + GMPC_SNAME1_SIZE + GMPC_SNAME2_SIZE + GMPC_SNAME3_SIZE 
		+ LONG_NAME_SIZE + ORIG_NAME_SIZE;

	//userlog("after 3rd calculation len = %ld",len);

	if(NULL != req.old_address)
	len = len + 2*((3*ADDRESS_SIZE) + POST_CODE_SIZE + INT_SIZE +STATE_CODE_SIZE);

	//userlog("after 4th calculation len = %ld",len);

	len = len + LEGACY_LR_PHOTO_SIZE;

	//userlog("after LR photo calculation len = %ld",len);

	//userlog("req->lfinger.normalized_minutiae_size = %ld",req.lfinger.normalized_minutiae_size);

	//userlog("req->rfinger.normalized_minutiae_size = %ld",req.rfinger.normalized_minutiae_size);

	//userlog("req->lfinger.orginal_minutiae_size = %ld",req.lfinger.orginal_minutiae_size);

	//userlog("req->rfinger.orginal_minutiae_size = %ld",req.rfinger.orginal_minutiae_size);

	len +=  req.lfinger.normalized_minutiae_size + req.lfinger.orginal_minutiae_size;

	//userlog("after lfnorm calculation len = %ld",len);

	len +=  req.rfinger.normalized_minutiae_size + req.rfinger.orginal_minutiae_size;
	
	//userlog("after rfnorm calculation len = %ld",len);

	len = len + CHAR_SIZE + 10*(FLOAT_SIZE) + LEGTXNCODE_SIZE + 11 
		+ APPL_COLLCENTER_SIZE + DATE_SIZE + CHAR_SIZE + AGENCY_SIZE 
		+ APPROVAL_DOC_NO_SIZE + LEGAPPLID_SIZE + ID_SIZE 
		+ RELATION_CODE_SIZE + 2*(DATE_SIZE) + RJ_SIZE + 2*(DATE_SIZE)
		+ DOC_NO_SIZE + COUNTRY_CODE_SIZE + ID_TYPE_SIZE;
	
	len = len + 2*CHAR_SIZE; // Added on 14/10/05 for IJPN

	len = len + BRANCH_CODE_SIZE+2; // added on 10/11/05 for IJPN

	len = len + 3;      // added on 11/07/2008 for JRS160

	len = len + FEE_SIZE + ID_SIZE + 9;      // added on 12/09/2008 for MYPR extrafee

	/* Every field to be passed to the legacy must have 6 bytes of  additional
	   info put into it so make arrangement for the same */
	/* 1 byte data indicator 5 bytes of field id */
    len = len + (6*104); 

	//userlog("after last calculation len = %ld",len);

	return len;
	
}

/********************************************************************/
/* Function Name : copy_names										*/
/* Input         : req containing the applicant's names				*/
/*				   in_temp_ptr pointer to pointer to the current	*/
/*					location of temp_ptr in the main _p function	*/
/* Outputs		 : Names in the memory pointed to by contents of	*/
/*				   in_temp_ptr										*/
/* Description   : This function is used to copy the names of the	*/
/*				   applicant into the message buffer				*/
/* Return Values : int - GMPC_GOOD = success						*/
/* Limitations   : None												*/
/********************************************************************/

int copy_names(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code)
{

	char *temp_ptr = *in_temp_ptr;

	/* GMPC Short name 1 */
	if(req->appnt_names.gmpc_short_name1[0] != '\0')
	{
	add_one_fc_field(FID_GMPC_SHORT_NAME1, &temp_ptr,  
					req->appnt_names.gmpc_short_name1,
					TYPE_CHAR_ARR, error_code);
	}
	
	/* GMPC Short name 2 */
	if(req->appnt_names.gmpc_short_name2[0] != '\0')
	{
	add_one_fc_field(FID_GMPC_SHORT_NAME2, &temp_ptr,  
					req->appnt_names.gmpc_short_name2,
					TYPE_CHAR_ARR, error_code);
	}
	/* GMPC Short name 3 */
	if(req->appnt_names.gmpc_short_name3[0] != '\0')
	{
	add_one_fc_field(FID_GMPC_SHORT_NAME3, &temp_ptr,  
					req->appnt_names.gmpc_short_name3,
					TYPE_CHAR_ARR, error_code);
	}

	/* Current Long name */
	if(req->appnt_names.current_long_name[0] != '\0')
	{
	add_one_fc_field(FID_CURRENT_LONG_NAME, &temp_ptr,
					req->appnt_names.current_long_name,
					TYPE_CHAR_ARR, error_code);
	}
/*
	/* Short Name1 
	add_one_fc_field(FID_CURRENT_SHORT_NAME1, &temp_ptr,
					req->appnt_names.siren_short_name1,
					TYPE_CHAR_ARR, error_code);

	/* Short Name2 
	add_one_fc_field(FID_CURRENT_SHORT_NAME2, &temp_ptr,
					req->appnt_names.siren_short_name2,
					TYPE_CHAR_ARR, error_code);
*/
	/* Original Name */
	if(req->appnt_names.original_name[0] != '\0')
	{
	add_one_fc_field(FID_ORIGINAL_NAME, &temp_ptr,
					req->appnt_names.original_name,
					TYPE_CHAR_ARR, error_code);
	}



	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
}

/********************************************************************/
/* Function Name : copy_addresses									*/
/* Input         : req containing the applicant's address info		*/
/*				   in_temp_ptr pointer to pointer to the current	*/
/*					location of temp_ptr in the main _p function	*/
/* Outputs		 : Addresses in the memory pointed to by contents of*/
/*				   in_temp_ptr										*/
/* Description   : This function is used to copy the address info of*/
/*				   applicant into the message buffer				*/
/* Return Values : int - GMPC_GOOD = success						*/
/* Limitations   : None												*/
/********************************************************************/


int copy_addresses(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code)
{
	char *temp_ptr = *in_temp_ptr;
	char temp_char_arr[CITY_CODE_SIZE];
	char temp_char_arr1[10]={0};
	char temp_city_code[CITY_CODE_SIZE]= "\0";
	int i = 0;

	/************************************************************************/
	/* Copy new address														*/
	/************************************************************************/
	get_legacy_address(req->new_address->address1, req->new_address->address2,	
		req->new_address->address3);

	/* New address 1*/
	if(req->new_address->address1[0] != '\0')
	{
	add_one_fc_field(FID_ADDRESS1, &temp_ptr,  req->new_address->address1,	
					TYPE_CHAR_ARR, error_code);
	}
	
	// for address2 & 3, if they are null then try to send the the same to host also
	// when address1 is not null only
	
	/* New address 2*/
	if(req->new_address->address2[0] != '\0')
	{
	add_one_fc_field(FID_ADDRESS2, &temp_ptr,  req->new_address->address2,
					TYPE_CHAR_ARR, error_code);
	}
	else if((req->new_address->address2[0] == '\0') && (req->new_address->address1[0] != '\0'))
	{
		temp_char_arr1[0] = '\0';
	 add_one_fc_field_n(FID_ADDRESS2, &temp_ptr, temp_char_arr1, 
		TYPE_CHAR_ARR, error_code);
	}
		
	/* New address 3*/
	if(req->new_address->address3[0] != '\0')
	{
	add_one_fc_field(FID_ADDRESS3, &temp_ptr,  	req->new_address->address3,
					TYPE_CHAR_ARR, error_code);
	}
	else if((req->new_address->address3[0] == '\0') && (req->new_address->address1[0] != '\0'))
	{
			temp_char_arr1[0] = '\0';
	 add_one_fc_field_n(FID_ADDRESS3, &temp_ptr, temp_char_arr1, 
		TYPE_CHAR_ARR, error_code);
	}	


	/* New Post code */
	if(req->new_address->post_code[0] != '\0')
	{
	add_one_fc_field(FID_POSTCODE, &temp_ptr, req->new_address->post_code,
					TYPE_CHAR_ARR, error_code);
	}
	

	/* New City Code*/
	if (req->new_address->city_code > 0)
	{
		for(i=0;i<5;i++)
			temp_city_code[i] = '\0';
		// ltoa(req->new_address->city_code, temp_char_arr, 10); // commented on 13/12/2006 to pad 0 infront of city_code if it is less than 4 digits
		sprintf(temp_city_code,"%04d",req->new_address->city_code); // added this line of code on 13/12/2006
		add_one_fc_field(FID_CITY_CD, &temp_ptr, temp_city_code,
					TYPE_CHAR_ARR, error_code);

		#ifdef DEBUG
			userlog("Before padding req->new_address->city_code : %d,after padding temp_city_code : %s",req->new_address->city_code,temp_city_code);
		#endif
	}
	else
	{
		memset(temp_char_arr, ' ', CITY_CODE_SIZE - 1);
		temp_char_arr[CITY_CODE_SIZE - 1] = 0;

		// Added this on 24/09/2007 to make sure to send a blank for city_code when it is zero.

		for(i=0;i<5;i++)
			temp_city_code[i] = '\0';

		add_one_fc_field_n(FID_CITY_CD, &temp_ptr, temp_city_code, TYPE_CHAR_ARR, error_code);

		#ifdef DEBUG
			userlog("Before padding req->new_address->city_code :%d:,after padding temp_city_code :%s:",req->new_address->city_code,temp_city_code);
		#endif
	}

	
	/* New State Code */
	if(req->new_address->state_code[0] != '\0')
	{
	add_one_fc_field(FID_STATE_CD, &temp_ptr, req->new_address->state_code,
					TYPE_CHAR_ARR, error_code);
	}
	
	

	/************************************************************************/
	/* Copy old address														*/
	/************************************************************************/

	get_legacy_address(req->old_address->address1, req->old_address->address2,	
		req->old_address->address3);

	/* Old address 1*/
	if(req->old_address->address1[0] != '\0')
	{
	add_one_fc_field(FID_OLD_ADDRESS1, &temp_ptr, req->old_address->address1,
				TYPE_CHAR_ARR, error_code);
	}

	
	/* Old address 2*/
	if(req->old_address->address2[0] != '\0')
	{
	add_one_fc_field(FID_OLD_ADDRESS2, &temp_ptr, req->old_address->address2,
				TYPE_CHAR_ARR, error_code);
	}
	else if((req->old_address->address2[0] == '\0') && (req->old_address->address1[0] != '\0'))
	{
		temp_char_arr1[0] = '\0';
	 add_one_fc_field_n(FID_OLD_ADDRESS2, &temp_ptr, temp_char_arr1, 
		TYPE_CHAR_ARR, error_code);
	}

	/* Old address 3*/
	if(req->old_address->address3[0] != '\0')
	{
	add_one_fc_field(FID_OLD_ADDRESS3, &temp_ptr, req->old_address->address3,
				TYPE_CHAR_ARR, error_code);
	}
	else if((req->old_address->address3[0] == '\0') && (req->old_address->address1[0] != '\0'))
	{
			temp_char_arr1[0] = '\0';
	 add_one_fc_field_n(FID_OLD_ADDRESS3, &temp_ptr, temp_char_arr1, 
		TYPE_CHAR_ARR, error_code);
	}

	/* Old Post code */
	if(req->old_address->post_code[0] != '\0')
	{
	add_one_fc_field(FID_OLD_POSTCODE, &temp_ptr, req->old_address->post_code,
				TYPE_CHAR_ARR, error_code);
	}

	
	/* Old City Code*/
	if (req->old_address->city_code > 0)
	{
		for(i=0;i<5;i++)
			temp_city_code[i] = '\0';
		// ltoa(req->old_address->city_code, temp_char_arr, 10); // commented on 13/12/2006 to pad 0 infront of city_code if it is less than 4 digits
		sprintf(temp_city_code,"%04d",req->old_address->city_code); // added this line of code on 13/12/2006		
		add_one_fc_field(FID_OLD_CITY_CD, &temp_ptr, temp_city_code,
			TYPE_CHAR_ARR, error_code);

		#ifdef DEBUG
			userlog("Before padding req->old_address->city_code : %d,after padding temp_city_code : %s",req->old_address->city_code,temp_city_code);
		#endif
	}
	else
	{
		memset(temp_char_arr, ' ', CITY_CODE_SIZE - 1);
		temp_char_arr[CITY_CODE_SIZE - 1] = 0;

		// Added this on 24/09/2007 to make sure to send a blank for city_code when it is zero.

		for(i=0;i<5;i++)
			temp_city_code[i] = '\0';

		add_one_fc_field_n(FID_OLD_CITY_CD, &temp_ptr, temp_city_code, TYPE_CHAR_ARR, error_code);

		#ifdef DEBUG
			userlog("Before padding req->old_address->city_code :%d:,after padding temp_city_code :%s:",req->old_address->city_code,temp_city_code);
		#endif
	}
	

	/* Old State Code */
	if(req->old_address->state_code[0] != '\0')
	{
	add_one_fc_field(FID_OLD_STATE_CD, &temp_ptr, req->old_address->state_code,
					TYPE_CHAR_ARR, error_code);
	}
	

	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
}

/********************************************************************/
/* Function Name : copy_misc										*/
/* Input         : req containing the applicant's misc	info		*/
/*				   in_temp_ptr pointer to pointer to the current	*/
/*					location of temp_ptr in the main _p function	*/
/* Outputs		 : Misc Info in the memory pointed to by contents of*/
/*				   in_temp_ptr										*/
/* Description   : This function is used to copy Miscellaneous info */
/*				   of the applicant into the message buffer			*/
/* Return Values : int - GMPC_GOOD = success						*/
/* Limitations   : None												*/
/********************************************************************/

int copy_misc(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code)
{

	char *temp_ptr = *in_temp_ptr;
	char temp_char_arr[10];
	int i=0;

	/************************************************************************/
	/* Copy GMPC Names														*/
	/************************************************************************/

	
	/* copy KPT number */
	if((req->misc.applicant_kpt[0] != '\0') && (req->misc.applicant_kpt[0] != ' '))
	{
	add_one_fc_field(FID_KPT_NO, &temp_ptr,  req->misc.applicant_kpt,	
					TYPE_CHAR_ARR, error_code);
	}

	/* Copy the GMPC remarks1 */
	if((req->misc.gmpc_remarks1[0] != '\0') && (req->misc.gmpc_remarks1[0] != ' '))
	{
	add_one_fc_field(FID_GMPC_REMARK1, &temp_ptr, req->misc.gmpc_remarks1,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy the GMPC remarks1 */
	if((req->misc.gmpc_remarks1[0] != '\0') && (req->misc.gmpc_remarks1[0] != ' '))
	{
	add_one_fc_field(FID_JPN_REMARK1, &temp_ptr, req->misc.gmpc_remarks1,
		TYPE_CHAR_ARR, error_code);
	}

	
	/* Copy the GMPC remarks2 */
	if(req->misc.gmpc_remarks2[0] != '\0') 
	{
		if(req->misc.gmpc_remarks2[0] == ' ')  // added this 02/09/2009 for checking second character space
		{
			if(req->misc.gmpc_remarks2[1] != ' ')
			{
			  add_one_fc_field(FID_GMPC_REMARK2, &temp_ptr, req->misc.gmpc_remarks2,
			   TYPE_CHAR_ARR, error_code);
			}
		}
		else
		{
			add_one_fc_field(FID_GMPC_REMARK2, &temp_ptr, req->misc.gmpc_remarks2,
		      TYPE_CHAR_ARR, error_code);
		}
	}

	/* Copy the GMPC remarks2 */
	if(req->misc.gmpc_remarks2[0] != '\0')
	{
		if(req->misc.gmpc_remarks2[0] == ' ') // added this 02/09/2009 for checking second character space
		{
			if(req->misc.gmpc_remarks2[1] != ' ')
				{
				   add_one_fc_field(FID_JPN_REMARK2, &temp_ptr, req->misc.gmpc_remarks2,
					TYPE_CHAR_ARR, error_code);
				}
		}
		else
		{
			add_one_fc_field(FID_JPN_REMARK2, &temp_ptr, req->misc.gmpc_remarks2,
					TYPE_CHAR_ARR, error_code);
		}
	}


	/************************************************************************/
	/* Copy Other stuff														*/
	/************************************************************************/

	/* Copy the Update Prints Indicator */
	if((req->misc.update_prints_ind != '\0') && (req->misc.update_prints_ind != ' '))
	{
	add_one_fc_field(FID_UPDATE_PRINTS_IND, &temp_ptr, (char *)&(req->misc.update_prints_ind),
		TYPE_CHAR, error_code);
	}

	/* Copy the juvenile flag */
	if((req->misc.juvenile_flag != '\0') && (req->misc.juvenile_flag != ' '))
	{
	add_one_fc_field(FID_JUVENILE_FLAG, &temp_ptr, (char *)&(req->misc.juvenile_flag),
		TYPE_CHAR, error_code);
	}

		/* Copy the Quality Satus */
	if((req->misc.quality_status != '\0') && (req->misc.quality_status != ' '))
	{
	add_one_fc_field(FID_QUALITY_STAT, &temp_ptr, (char *)&(req->misc.quality_status),
		TYPE_CHAR, error_code);	
	}

	/* Copy the IC Colour Code
	if((req->misc.ic_colour != '\0') && (req->misc.ic_colour != ' '))
	{
	add_one_fc_field(FID_IC_COLOUR_CD, &temp_ptr, (char *)&req->misc.ic_colour,
		TYPE_CHAR, error_code);	
	}  commented on 23/09/2008 to send resident_stat valu in iccolorcode */

	/* Copy the fingerprint acquisition source */
	if((req->misc.finger_acquision_source != '\0') && (req->misc.finger_acquision_source != ' '))
	{
	add_one_fc_field(FID_FP_ACQUISITION_SRC, &temp_ptr, (char *)&(req->misc.finger_acquision_source), 
		TYPE_CHAR, error_code);
	}

	/* gmpc version number */
	if(req->misc.gmpc_version > 0)
	{
		ltoa(req->misc.gmpc_version, temp_char_arr, 10);
		add_one_fc_field(FID_GMPC_VER_NO, &temp_ptr, temp_char_arr, 
			TYPE_CHAR_ARR, error_code);
	}
	else
	{
		memset(temp_char_arr, ' ', INT_SIZE - 1);
		temp_char_arr[INT_SIZE - 1] = 0;
	}
		
	
	/* Original Name Indicator */
	if((req->misc.original_name_indicator != '\0') && (req->misc.original_name_indicator != ' '))
	{
	add_one_fc_field(FID_ORIGINAL_NAME_IND, &temp_ptr, (char *)&req->misc.original_name_indicator,
		TYPE_CHAR, error_code);
	}

	/* Origin Indicator -- for finger print ???*/
	if((req->misc.origin_indicator != '\0') && (req->misc.origin_indicator != ' '))
	{
	//add_one_fc_field(FID_ORIGIN_IND, &temp_ptr, (char *)&req->misc.origin_indicator,
	//	TYPE_CHAR, error_code); commented on 19/10/05 because of field_id conflict from vasanth

		add_one_fc_field(FID_FP_ACQUISITION_SRC, &temp_ptr, (char *)&req->misc.origin_indicator,
		TYPE_CHAR, error_code);
	}
		
	/* Copy the article colour code */
	if((req->misc.art_color_code[0] != '\0') && (req->misc.art_color_code[0] != ' '))
	{
	add_one_fc_field(FID_ARTICLE_COLOUR_CD, &temp_ptr, req->misc.art_color_code,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy Retirement date */
	if((req->misc.retire_date[0] != '\0') && (req->misc.retire_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.retire_date);
	add_one_fc_field(FID_RETIREMENT_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy police army join date */
	if((req->misc.pol_army_join_date[0] != '\0') && (req->misc.pol_army_join_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.pol_army_join_date);
	add_one_fc_field(FID_POL_ARMY_JOIN_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy green card exp date */
	if((req->misc.green_card_exp_date[0] != '\0') && (req->misc.green_card_exp_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.green_card_exp_date);
	add_one_fc_field(FID_GREEN_CARD_EXP_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy person status */
	if((req->misc.person_status != '\0') && (req->misc.person_status != ' '))
	{
	add_one_fc_field(FID_PERSON_STATUS_CD, &temp_ptr, &req->misc.person_status,
		TYPE_CHAR, error_code);
	}

	/* Copy citizen nationality code */
	if((req->misc.citizen_nation_code[0] != '\0') && (req->misc.citizen_nation_code[0] != ' '))
	{
	add_one_fc_field(FID_CITIZEN_NATIONALITY_CD, &temp_ptr, req->misc.citizen_nation_code,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy name approval ref number */
	if((req->misc.name_appr_ref_num[0] != '\0') && (req->misc.name_appr_ref_num[0] != ' '))
	{
	add_one_fc_field(FID_NAME_APPRVL_REF_NO, &temp_ptr, req->misc.name_appr_ref_num,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy name approval ref number */
	if((req->misc.name_appr_ref_num[0] != '\0') && (req->misc.name_appr_ref_num[0] != ' '))
	{
	add_one_fc_field(FID_APPRVLDOC, &temp_ptr, req->misc.name_appr_ref_num,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy name change reason code */
	if((req->misc.name_chg_reason_code[0] != '\0') && (req->misc.name_chg_reason_code[0] != ' '))
	{
	add_one_fc_field(FID_NAME_CHG_CODE, &temp_ptr, req->misc.name_chg_reason_code,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy name registration date */
	if((req->misc.name_reg_date[0] != '\0') && (req->misc.name_reg_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.name_reg_date);
	add_one_fc_field(FID_NAME_REG_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy imm ref number */
	if((req->misc.imm_ref_number[0] != '\0') && (req->misc.imm_ref_number[0] != ' '))
	{
	add_one_fc_field(FID_IMM_REF_NUM, &temp_ptr, req->misc.imm_ref_number,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy imm ref date */
	if((req->misc.imm_ref_date[0] != '\0') && (req->misc.imm_ref_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.imm_ref_date);
	add_one_fc_field(FID_IMM_APPROVAL_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy imm exp date */
	if((req->misc.imm_expire_date[0] != '\0') && (req->misc.imm_ref_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.imm_expire_date);
	add_one_fc_field(FID_IMM_EXPIRY_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy passport no */
	if((req->misc.passport_no[0] != '\0') && (req->misc.passport_no[0] != ' '))
	{
	add_one_fc_field(FID_PP_NO, &temp_ptr, req->misc.passport_no,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy passport issue date */
	if((req->misc.passport_issue_date[0] != '\0') && (req->misc.passport_issue_date[0] != ' '))
	{
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.passport_issue_date);
	add_one_fc_field(FID_PP_ISSUE_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy passport issue country */
	if((req->misc.passport_issue_country[0] != '\0') && (req->misc.passport_issue_country[0] != ' '))
	{
	add_one_fc_field(FID_PP_ISSUE_COUNTRY, &temp_ptr, req->misc.passport_issue_country,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy entry permit number */
	if((req->misc.szPermitNo[0] != '\0') && (req->misc.szPermitNo[0] != ' '))
	{
	add_one_fc_field(FID_ENTRY_PERMIT_NO, &temp_ptr, req->misc.szPermitNo,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy entry permit Date */
	if((req->misc.szPermitDate[0] != '\0') && (req->misc.szPermitDate[0] != ' '))
	{
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->misc.szPermitDate);	
	add_one_fc_field(FID_PERMIT_ISSUE_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Copy entry permit type */
	if (req->misc.nEntryPermitType > 0)
	{
		ltoa(req->misc.nEntryPermitType, temp_char_arr, 10);
		add_one_fc_field(FID_ENTRY_PERMIT_TYPE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}
	else
	{
		memset(temp_char_arr, ' ', INT_SIZE - 1);
		temp_char_arr[INT_SIZE - 1] = 0;
	}
	

	/* Copy doc type code */
	if (req->misc.nDocTypeCode > 0)
	{
		ltoa(req->misc.nDocTypeCode, temp_char_arr, 10);
		add_one_fc_field(FID_DOC_TYPE_CODE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}
	else
	{
		memset(temp_char_arr, ' ', INT_SIZE - 1);
		temp_char_arr[INT_SIZE - 1] = 0;
	}
	
	// copy the hsc color code added this new field on 11/07/2008

	if((req->misc.myprind[0] != '\0') && (req->misc.myprind[0] != ' '))
	{
		add_one_fc_field(FID_MYPRCODE, &temp_ptr, req->misc.myprind,
		TYPE_CHAR_ARR, error_code);
	}


	// NOTCONVERTED MYPR FINE FEE added this new field on 12/09/2008

	if ((req->mypr_extrafee[0] != '\0') && (req->mypr_extrafee[0] != ' '))
	{
	//	gcvt(req.mypr_extrafee, 10, temp_char_arr);
		add_one_fc_field(FID_EXTRAFEE, &temp_ptr, req->mypr_extrafee,
					TYPE_CHAR_ARR, error_code);
	}

	// copy the approve_date added this new field on 17/04/2009

	if((req->approve_date[0] != '\0') && (req->approve_date[0] != ' '))
	{
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->approve_date);	
		add_one_fc_field(FID_APPL_APPROVAL_DATE, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	// copy the apprv_user_id added this new field on 17/04/2009

	if((req->apprv_user_id[0] != '\0') && (req->apprv_user_id[0] != ' '))
	{
		add_one_fc_field(FID_APPRV_USER_ID, &temp_ptr, req->apprv_user_id,
		TYPE_CHAR_ARR, error_code);
	}

	// copy the appt_date, added this new field 1901 on 19/09/2013

	if((req->appt_date[0] != '\0') && (req->appt_date[0] != ' '))
	{		
		temp_char_arr[0] = '\0';
		li_ddmmyyyy_to_yyyymmdd(temp_char_arr, req->appt_date);	
		add_one_fc_field(FID_APPT_DATE, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}

	// copy the actual_kptno, added this new field 8197 on 13/02/2014

	if((req->actual_kptno[0] != '\0') && (req->actual_kptno[0] != ' '))
	{		
		add_one_fc_field(FID_ACTUAL_KPTNO, &temp_ptr, req->actual_kptno, TYPE_CHAR_ARR, error_code);
	}

	// copy the lostcntneg, added this new field 9109 on 19/02/2014

	if(req->lostcntneg > 0)
	{	for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req->lostcntneg, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTNEG, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}

	// copy the lostcntcrime, added this new field 9105 on 19/02/2014

	if(req->lostcntcrime >0 )
	{	for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req->lostcntcrime, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTCRIME, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}

	// copy the lostcntdis, added this new field 9107 on 19/02/2014

	if(req->lostcntdis > 0)
	{	for(i=0;i<10;i++)
			temp_char_arr[i] = '\0';
		ltoa(req->lostcntdis, temp_char_arr, 10);
		add_one_fc_field(FID_LOSTCNTDIS, &temp_ptr, temp_char_arr, TYPE_CHAR_ARR, error_code);
	}


	// copy the ktareacode added this new field on 28/05/2014

	if((req->ktareacode[0] != '\0') && (req->ktareacode[0] != ' '))
	{
		add_one_fc_field(FID_KOD_MUKIM, &temp_ptr, req->ktareacode,
		TYPE_CHAR_ARR, error_code); 
	}

	// copy the apjareacode added this new field on 28/05/2014

	if((req->apjareacode[0] != '\0') && (req->apjareacode[0] != ' '))
	{
		add_one_fc_field(FID_TEMPAT_TAHANAN, &temp_ptr, req->apjareacode,
		TYPE_CHAR_ARR, error_code); 
	}
	
	/************************************************************************/
	/* Copy Miscellaneous stuff required for AFIS 1:N check					*/
	/************************************************************************/


	/* Copy the kpp_no */
	if((req->afis_1n_misc.kpp_no[0] != '\0') && (req->afis_1n_misc.kpp_no[0] != ' '))
	{
	add_one_fc_field(FID_KPP_NO, &temp_ptr, req->afis_1n_misc.kpp_no,
		TYPE_CHAR_ARR, error_code);
	}

	// included the following 2 field id's on 7/4/2006
	/* police_army_id */
	if((req->afis_1n_misc.police_army_id != '\0') && (req->afis_1n_misc.police_army_id != ' '))
	{
	add_one_fc_field(FID_POL_ARMY_CD, &temp_ptr, (char *)&req->afis_1n_misc.police_army_id,
		TYPE_CHAR, error_code);
	}

	/* Copy the police_army_no */
	if((req->afis_1n_misc.police_army_no[0] != '\0') && (req->afis_1n_misc.police_army_no[0] != ' '))
	{
	add_one_fc_field(FID_SPONSOR_POLICE_NO, &temp_ptr, req->afis_1n_misc.police_army_no,
		TYPE_CHAR_ARR, error_code);
	}

	//commented the following 12 lines on 4/7/06
	///* Copy the police_no */
	//if((req->afis_1n_misc.police_no[0] != '\0') && (req->afis_1n_misc.police_no[0] != ' '))
	//{
	//add_one_fc_field(FID_SPONSOR_POLICE_NO, &temp_ptr, req->afis_1n_misc.police_no,
	//	TYPE_CHAR_ARR, error_code);
	//}
	/* Copy the army_no */
	//if((req->afis_1n_misc.army_no[0] != '\0') && (req->afis_1n_misc.army_no[0] != ' '))
	//{
	//add_one_fc_field(FID_SPONSOR_ARMY_NO, &temp_ptr, req->afis_1n_misc.army_no,
	//	TYPE_CHAR_ARR, error_code);
	//}

	/* Date of Birth */
	/* Transform the date to legacy format */
	if((req->afis_1n_misc.dob[0] != '\0') && (req->afis_1n_misc.dob[0] != ' '))
	{
	li_ddmmyyyy_to_yyyymmdd(temp_char_arr, (char *)req->afis_1n_misc.dob);
	add_one_fc_field(FID_DOB, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}

	/* Unknown Birth Indicator */
	if((req->afis_1n_misc.unknown_birth_ind != '\0') && (req->afis_1n_misc.unknown_birth_ind != ' '))
	{
	add_one_fc_field(FID_UNKONWN_DOB_IND, &temp_ptr, (char *)&req->afis_1n_misc.unknown_birth_ind,
		TYPE_CHAR, error_code);
	}

//	/* First Time Indicator */
//	add_one_fc_field(FID_FIRST_TIME_IND, &temp_ptr, (char *)&req->afis_1n_misc.first_time_ind,
//		TYPE_CHAR, error_code);

	//userlog(" FID_BIRTH_DIST_CD : %s",req->afis_1n_misc.birth_dist_code);

	/* Copy the Birth District Code */
	if((req->afis_1n_misc.birth_dist_code[0] != '\0') && (req->afis_1n_misc.birth_dist_code[0] != ' '))
	{
	add_one_fc_field(FID_BIRTH_DIST_CD, &temp_ptr, (char *)&req->afis_1n_misc.birth_dist_code,
		TYPE_CHAR_ARR, error_code);
	}

	/* Gender */
	if((req->afis_1n_misc.gender != '\0') && (req->afis_1n_misc.gender != ' '))
	{
	add_one_fc_field(FID_GENDER, &temp_ptr, (char *)&req->afis_1n_misc.gender,
		TYPE_CHAR, error_code);
	}

	/*  Religion */
	if((req->afis_1n_misc.religion != '\0') && (req->afis_1n_misc.religion != ' '))
	{
	add_one_fc_field(FID_RELIGION_CD, &temp_ptr, (char *)&req->afis_1n_misc.religion,
		TYPE_CHAR, error_code);
	}

	/* Race Code */
	if((req->afis_1n_misc.race[0] != '\0') && (req->afis_1n_misc.race[0] != ' '))
	{
	add_one_fc_field(FID_RACE_CD, &temp_ptr, (char *)req->afis_1n_misc.race,
		TYPE_CHAR_ARR, error_code);
	}

	/* H/K Indicator */
	if((req->afis_1n_misc.hk_ind != '\0') && (req->afis_1n_misc.hk_ind != ' '))
	{
	add_one_fc_field(FID_HK_IND, &temp_ptr, (char *)&req->afis_1n_misc.hk_ind,
		TYPE_CHAR, error_code);
	}
	
	/* Residential Status && IC Colour Code*/
	if((req->afis_1n_misc.resi_status != '\0') && (req->afis_1n_misc.resi_status != ' '))
	{
	add_one_fc_field(FID_RESI_STAT, &temp_ptr, (char *)&req->afis_1n_misc.resi_status,
		TYPE_CHAR, error_code);

	add_one_fc_field(FID_IC_COLOUR_CD, &temp_ptr, (char *)&req->afis_1n_misc.resi_status,
		TYPE_CHAR, error_code); // Added this field here to send along with residential status when ever there is a value
	}


	/* Commented this field on 27/10/2015 for CR 296 to block sending lost_card_count to host
	/* Copy lost card count 
	if (req->afis_1n_misc.lost_card_count > 0)
	{
		ltoa(req->afis_1n_misc.lost_card_count, temp_char_arr, 10);
		add_one_fc_field(FID_CARD_LOST_COUNT, &temp_ptr, temp_char_arr,
		TYPE_CHAR_ARR, error_code);
	}
	else
	{
		memset(temp_char_arr, ' ', INT_SIZE - 1);
		temp_char_arr[INT_SIZE - 1] = 0;
	}
	
	*/
	
	*in_temp_ptr = temp_ptr;

	return GMPC_GOOD;
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

int copy_images(LI_JPN_UPDATE_REQ_T *req, char **in_temp_ptr, int *error_code)
{

	

	char *temp_ptr = *in_temp_ptr;
	int ret = 0;
	//BYTE *new_buff;
	//int len;

	userlog(" Inside the copy_images");
	/* High res portrait 
	ret = add_one_image_field(FID_HIGH_RES_PORTRAIT,  &temp_ptr, 
		req->hi_res_portrait.portrait_buff,	0xfd, req->hi_res_portrait.portrait_size, 
		IMAGE_IND_JPEG, error_code);
	if(GMPC_GOOD != ret)
	{
		return ret;
	}
		Commented as per the IJPN requirement*/


	/* Low res portrait */
	/* compress the photo to fit within 2.9 K */
	// to take out the comment bellow after compilation
	/*ret = compress_photo(req->hi_res_portrait.portrait_buff, req->hi_res_portrait.portrait_size, &new_buff, &len);
	if (ret != GMPC_GOOD)
	{
		userlog("Unable to compress to low res photo");
		return GMPC_BAD;
	}*/

	//ret = add_one_image_field(FID_LOW_RES_PORTAIT,  &temp_ptr, 
	//	new_buff, 0xfd, len, IMAGE_IND_JPEG_DB2, error_code);
	//if(GMPC_GOOD != ret)
	//{
	//	return ret;
	//}

	 /* Low res portrait */
	/* according to Amargit the low resolution portrait is a compressed
		one while sending from the service, so no need to compress to get the low resolution portrait */


/*
	if(req->low_res_portrait.portrait_size > 0)
	{
	 ret = add_one_image_field(FID_LOW_RES_PORTAIT,  &temp_ptr, 
		req->low_res_portrait.portrait_buff,	0xfd, req->low_res_portrait.portrait_size, 
		IMAGE_IND_JPEG_DB2, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}
*/

	
	/* Low res photo is compressed to 2.9k size now for IJPN */
	if(req->low_res_portrait.portrait_size > 0)
	{
	 /* This functionality has been moved to the main program JPN_UPDATE
	 // comented this piece of code on 27/03/2012
	 ret = compress_photo(req->low_res_portrait.portrait_buff, req->low_res_portrait.portrait_size, &new_buff, &len);
	 if (ret != GMPC_GOOD)
	 {
		userlog("Unable to compress low res photo");
		return GMPC_BAD;
	 }

	 ret = add_one_image_field(FID_LOW_RES_PORTAIT,  &temp_ptr, 
		new_buff, 0xfd, len, IMAGE_IND_JPEG_DB2, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	 */

	 ret = add_one_image_field(FID_LOW_RES_PORTAIT,  &temp_ptr, 
		req->low_res_portrait.portrait_buff, 0xfd, req->low_res_portrait.portrait_size, IMAGE_IND_JPEG_DB2, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }

	 userlog(" The length of LOW_RES_PORTAIT size : %ld",req->low_res_portrait.portrait_size);
	 userlog(" After the  add_one_image_field for LOW_RES_PORTAIT");
	}

	ret = 0;
	/* commented at the moment
	   to be fixed by sagem in sagem dll */
	/* free(new_buff); */


	/* LFP Image */
	/* the image can be NULL if the applicant does not have a thumb */
	/*
	if (req->left_finger_prints.fp_img_buff != NULL)
	{
		ret = add_one_image_field(FID_LFP_IMAGE,  &temp_ptr, 
			req->left_finger_prints.fp_img_buff, 0xfe, req->left_finger_prints.fp_img_size, 
			IMAGE_IND_LFP_IMAGE, error_code);
		if(GMPC_GOOD != ret)
		{
			return ret;
		}
	}
	*/ // Commented as per the IJPN requirement

	/* RFP Image */
	/* the image can be NULL if the applicant does not have a thumb */
	/*
	if (req->right_finger_prints.fp_img_buff != NULL)
	{
		ret = add_one_image_field(FID_RFP_IMAGE,  &temp_ptr, 
			req->right_finger_prints.fp_img_buff, 0xfe, req->right_finger_prints.fp_img_size, 
			IMAGE_IND_RFP_IMAGE, error_code);
		if(GMPC_GOOD != ret)
		{
			return ret;
		}
	}
	*/ // Commented as per the IJPN requirement

	/* LFP Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */
	if(req->lfinger.orginal_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_LFP_ORIGINAL_MINU,  &temp_ptr, 
		&(req->lfinger), req->lfinger.orginal_minutiae_size, 
		IMAGE_IND_LFP_MINU, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}

	ret = 0;
	//userlog(" After the  add_one_minutiae_field_n for LFP_ORIGINAL_MINU");
	
	/* RFP Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */
	if(req->rfinger.orginal_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_RFP_ORIGINAL_MINU,  &temp_ptr, 
		&(req->rfinger), req->rfinger.orginal_minutiae_size, 
		IMAGE_IND_RFP_MINU, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}

	ret = 0;
	//userlog(" After the  add_one_minutiae_field_n for RFP_ORIGINAL_MINU");
	/* LFP Normalized Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */
	if(req->lfinger.normalized_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_LFP_NORM_MINU,  &temp_ptr, 
		&(req->lfinger), req->lfinger.normalized_minutiae_size, 
		IMAGE_IND_LFP_NORM_MINU, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}

	ret = 0;
	//userlog(" After the  add_one_minutiae_field_n for LFP_NORM_MINU");

	/* RFP Normalized Minutiae */
	/* Even if the applicant does not have thumb, this data has to be sent to legacy. 
	   The service will set this minutiae buffer to all NULL bytes. 
	   Hence no cheking for this case */
	if(req->rfinger.normalized_minutiae_size > 0)
	{
	 ret = add_one_minutiae_field_n(FID_RFP_NORM_MINU,  &temp_ptr, 
		&(req->rfinger), req->rfinger.normalized_minutiae_size, 
		IMAGE_IND_RFP_NORM_MINU, error_code);
	 if(GMPC_GOOD != ret)
	 {
		return ret;
	 }
	}

	//userlog(" After the  add_one_minutiae_field_n for RFP_NORM_MINU");

	/* LFP Matrix Buffer */
	/* the matrix buffer can be NULL if the applicant does not have a thumb */
	//if (req->left_finger_prints.matrix_buffer != NULL)
	//{
	//	ret = add_one_minutiae_field(FID_LFP_MATRIX_BUFF,  &temp_ptr, 
	//		&(req->left_finger_prints), req->left_finger_prints.matrix_buffer_size, 
	//		IMAGE_IND_LFP_MATRIX, error_code);
	//	if(GMPC_GOOD != ret)
	//	{
	//		return ret;
	//	}
	//}


	/* RFP Matrix Buffer */
	/* the matrix buffer can be NULL if the applicant does not have a thumb */
	//if (req->right_finger_prints.matrix_buffer != NULL)
	//{
	//	ret = add_one_minutiae_field(FID_RFP_MATRIX_BUFF,  &temp_ptr, 
	//		&(req->right_finger_prints), req->right_finger_prints.matrix_buffer_size, 
	//		IMAGE_IND_RFP_MATRIX, error_code);
	//	if(GMPC_GOOD != ret)
	//	{
	//		return ret;
	//	}
	//}
	
	*in_temp_ptr = temp_ptr;
	//userlog("after the in_temp_ptr ");

	return GMPC_GOOD;

}

// commented for IJPN
//int compress_photo(unsigned char *buff, int ori_len,
//				   BYTE **new_buff, int *new_len)
//{
//	int compression_ratio = 90; /* 90 because it gives best results for 12 k image */
//	
//	BYTE *mid;
//	int x, y;
//	int ret;
//
//	*new_len = 0;
//	ret = SagemPortraitDecompress(buff, ori_len, &mid, &x, &y);
//		
//	if (ret != PORTRAIT_COMP_OK)
//	{
//		userlog("cannot decompress error %d\n", ret);
//		return GMPC_BAD;
//	}
//	do
//	{
//		
//		ret = SagemPortraitCompress(mid, x, y, compression_ratio, new_buff, new_len);
//		if (ret != PORTRAIT_COMP_OK)
//		{
//			userlog("cannot compress error %d\n", ret);
//			/* to be fixed by sagem 
//			   commented at the moment */
//			/* free(mid); */
//			return GMPC_BAD;
//		}
//
//		compression_ratio += 10; /* image too big, so increase compression */
//
//	}while(*new_len > MAX_LOW_RES_PHOTO_SIZE);
//
//	/* to be fixed by sagem 
//	   commented at the moment */
//	/* free(mid); */
//
//	return GMPC_GOOD;
//}



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
					// Added this check on 21/12/2011 to fail the process
					// if the Quality is 100 even after compression
					if(nQuality == 100)
					{ 
						userlog("In the Quality = %d loop returning false\n", nQuality);
						return FALSE;
					}
					else
					{
						return TRUE;
					}
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
	userlog("li_jpn_update: Before jpeginfofrombuffer");
	rcode = jpeginfofrombuffer(buff, &jdat);
	if(rcode != NO_ERROR)
		return GMPC_BAD;

	nWidth = jdat.width;
	nHeight = jdat.length;

	userlog("li_jpn_update: Before allocimage");
   rcode = allocimage(&ImgOrig, jdat.width, jdat.length, jdat.vbitcount);
   if(rcode == NO_ERROR) {

		// Load the image
		userlog("li_jpn_update: Before loadjpgfrombuffer");
      rcode = loadjpgfrombuffer(buff, &ImgOrig);
		if( rcode != NO_ERROR )	{
			printf("\nError reading JPEG Image");
			return GMPC_BAD;
		}
 	}

	if(rcode == NO_ERROR)	{

		userlog("li_jpn_update: Before CreateLowResImage");
		if( !CreateLowResImage(&Img2k, &ImgOrig, maxSize, new_len) )	
		{
			userlog("li_jpn_update: Error compressing LOW_RES image");
			return GMPC_BAD; // Added this on 21/12/2011 
			                    // If the Quality is 100 even after compression then fail the compression process
			                    // to refire this later after sometime inorder to compress properly
		}
		else	{
			userlog("li_jpn_update: Before savejpgtobuffer");
			savejpgtobuffer(new_buff, &Img2k, nQuality);
			userlog("li_jpn_update: After savejpgtobuffer");
		}
	}

	userlog("li_jpn_update: Before freeimage");
	freeimage(&ImgOrig);
	freeimage(&Img2k);

	userlog("li_jpn_update: Before return GMPC_GOOD");
	return GMPC_GOOD;
}



