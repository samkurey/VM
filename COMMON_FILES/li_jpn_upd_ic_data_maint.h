/*$Header$*/
/********************************************************************/
/* File Name   : li_jpn_upd_ic_data_maint.h							*/
/* Author      : Srinivasa Reddy     			                    */
/* Description : This file contains io structures requried for		*/
/*				 									                */
/********************************************************************/


#ifndef _LI_JPN_UPD_IC_DATA_MAINT_
#define _LI_JPN_UPD_IC_DATA_MAINT_



/* input buffer */
typedef struct li_ic_data_req_s
{
	char kptno[KPT_SIZE];
	char kpp_no[KPP_SIZE];
	char police_army_id[ID_TYPE_SIZE];
	char police_army_no[ID_SIZE];
	char current_long_name[LONG_NAME_SIZE]; // make sure the size of this field, now it is 151 or should it be 60
	char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME1_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];

	char siren_short_name1[SIREN_SHORT_NAME];
	char siren_short_name2[SIREN_SHORT_NAME];
	
	ADDRESS_T new_address;
	ADDRESS_T old_address;	

	char dob[DATE_SIZE];
	char birth_place_code[BIRTH_PLACE_CODE_SIZE];
	char gender;
	char religioncode;
	char racecode[RACE_CODE_SIZE];
	char hkind;
	char ktindcode[KT_CODE_SIZE];		
	char retirementdate[DATE_SIZE];
	char pol_army_join_date[DATE_SIZE];		
	char person_status;
	char citizennationacode[CITIZEN_CODE_SIZE];
	char polmilitarycode;
	char name_chg_reason_code[NAME_CHG_CODE];
	char name_reg_date[DATE_SIZE];
	char imm_ref_number[IMM_REFER_NO_SIZE];
	char imm_ref_date[DATE_SIZE];
	char imm_expire_date[DATE_SIZE];
	char passport_no[PASSPORT_NO_SIZE];
	char passport_issue_date[DATE_SIZE];
	char passport_issue_country[COUNTRY_CODE_SIZE];
	char permit_number[PERMITNO1_SIZE]; //appnt_jpn_info.permitno
	char permitdate[DATE_SIZE]; //appnt_jpn_info.permitdate	
	char jpnremarks1[JPNREMARKS1_SIZE];
	char jpnremarks2[JPNREMARKS2_SIZE];
	char ktstartdate[DATE_SIZE];
	char ktenddate[DATE_SIZE];
	char rjind[RJIND_SIZE];	
	char rjstartdate[DATE_SIZE];
	char rjenddate[DATE_SIZE];			
	char migration_to_new_country_date[DATE_SIZE];
	char birthstatecode[BIRTHSTATECODE_SIZE];
	char birthcountrycode[BIRTHCOUNTRYCODE_SIZE];
	char perakuan_taraf_no[PT_WNO_SIZE];

	char marital_status;    // included on 23/09/05
	char unknown_birth_ind; // included on 23/09/05
	char father_kpt[KPT_SIZE];    // included on 23/09/05
	char mother_kpt[KPT_SIZE];    // included on 23/09/05

	// Added these 3 fields on 07/09/2010 for CR 201
	char legapplid[LEGAPPLID_SIZE];
	char branchcodejpn[COLLJPNBRANCHCODE_SIZE];
	char legtxncode[LEGTXNCODE_SIZE+2];
	
	char ktareacode[6+1];     // Added this for Release 3.28
	char apjareacode[8+1]; // Added this for Release 3.28

	// added on 12 March 2016 for CR 304 and Release 3.31
	char kpkno[15+1]; 
	//char kpkno[30+1];
	// The following four fields added on 27/04/2017 for CR 326 Reease 3.35
	char requserid[USER_ID_SIZE];
	char reqkptno[KPT_SIZE];
	char reqtimestamp[DATE_TIME_SIZE];
	char apprvkptno[KPT_SIZE]; 


} LI_IC_DATA_REQ_T;


/* Function prototype */

#if defined(__cplusplus)
extern "C" {
#endif

/* maintenance of IC data */
int li_jpn_upd_ic_data_p(LI_P_HEADER_T header, 
						  LI_IC_DATA_REQ_T req ,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);

long get_buffer_size(LI_IC_DATA_REQ_T *req);

int copy_addresses(LI_IC_DATA_REQ_T req, char **temp_ptr, int *error_code);

#if defined(__cplusplus)
}
#endif



#endif
