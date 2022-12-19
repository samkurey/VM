/* $Header:   F:/GSCBProjectDb/archives/CIS/GSCB/LegacySimulation/common/li_upd_summons.h-arc   1.0   Dec 26 2000 20:01:04   AbhyanSC  $ */
/********************************************************************/
/* File Name   : li_upd_summons.h                                */
/* Author      : Amol Thorat    				                    */
/* Description : This file contains io structures required for		*/
/*				 li_upd_suspension_p								*/
/********************************************************************/

#ifndef _LI_UPDATE_SUMMONS_
#define _LI_UPDATE_SUMMONS_


/* Structs for li_upd_summons_p */
typedef struct li_upd_summons_req
{
	char kpt_number[KPT_SIZE];
	char license_id[LIC_ID_SIZE];
	char category_of_owner;
	//char new_category_of_owner; // not in doc, added from mail 
	char summons_no[SUMMON_NO_SIZE];
	char issue_branch_code[JPJ_BRANCH_CODE_SIZE]; // define in newdef.h
	char issue_date[YEAR_SIZE];		// only the year required
	char summon_type;
	char summon_issue_code[SUMMONS_ISSUE_CODE_LEN];
	/* New requirement - added on 26/07/2001 */
	char gmpc_short_name1[GMPC_SNAME1_SIZE];
	char gmpc_short_name2[GMPC_SNAME2_SIZE];
	char gmpc_short_name3[GMPC_SNAME3_SIZE];
	ADDRESS_T address;
	char birth_date[DATE_SIZE];
	char gender;
	char mobile_cad_id[CAD_ID_SIZE];	
	char summons_amt[LONG_SIZE];
	

} LI_UPD_SUMMONS_REQ_T;



/* Function Prototypes */
int li_upd_summons_p(LI_P_HEADER_T header, LI_PUT_FIN_DATA_T fin_data, 
					  LI_UPD_SUMMONS_REQ_T req,
					  unsigned char *msg_id,
					  int *error_code
						   );

#endif /* _LI_UPDATE_SUMMONS_ */


