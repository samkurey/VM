/* $Header$ */
/********************************************************************************/
/* Filename    : set_appl_stat_L3_io.h											*/
/* Author      : Bakul Waghmare, Brijesh Patil									*/
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 service SET_APPL_STAT_L3.										*/
/********************************************************************************/

#ifndef _SET_APPL_STAT_L3_IO_
#define _SET_APPL_STAT_L3_IO_

typedef struct set_appl_stat_L3_req
{
	HEADER_T header;
	char kptno[KPT_SIZE];

	/* The values of the action flag indicate if the application is			*/
	/* to be terminated or referred to the Government Query Department.		*/
	/* The valid values are: 'T' -  terminated, 'R' - referred to GQD,		*/
	char action_flag;
	/* This indicates the number of structures of type PROB_RESULT_T which	*/
	/* follow the main response structure. As of now only records which 	*/
	/* have been approved will be sent as part of this variable section		*/
	int prob_no;
	/* The collection date can be set by the Government Query Department	*/
	char cancode_colldate[DATE_SIZE];
	char gqd_branch_code[BRANCH_CODE_SIZE];
	char name_address_flag;
	char reprint_flag;
	char collection_center[BRANCH_CODE_SIZE];
	char appl_remarks[NOTE_SIZE];
	char appl_cancel_code[CANCEL_CODE_SIZE];
	char cancel_date[DATE_SIZE];

//Added by Amarjith on 27th Aug '04. JRS 147.

	char szPermitIssueDate[DATE_SIZE];
	char szImmRefDate[DATE_SIZE];
	char szImmRefNo[IMM_REF_NO_SIZE];
	char szPassportNo[PASSPORT_NO_SIZE];
	char szPassportIssueCountry[COUNTRY_CODE_SIZE];
	int  nPrDocType;
	char szImmCitizenship[IMM_CITIZENSHIP_SIZE];

// new fields add on 25/04/2007 for JRS 112
	char szPermitNo[12+1];
	int szPermittype;
	char szCurrLongName[60+1];
	//

//JRS 147.

	/* New requirement added on 12122001 */
	/* The following are the sizes of LR and HR photos which are */
	/* appended at the end of all strcutures					 */

	char aprvldocno[APPROV_DOC_NO_SIZE];  // added on 30/11/05  for IJPN
	long lr_photo_size;
	long hr_photo_size;
	/* Added on 25th Mar 2005 for IJPN to insert the latest data 
	into JPN_INFO before select*/
	char jpn_info_rec_ind;
	// Added these two fields on 01/06/2016 for release 3.32 CR 293
	char refbranchcode[BRANCH_CODE_SIZE];
	char newapplstat;
	//Added by Salmi Date:12th May, 2020 New APPRV_HISTORY_T struct. CRAPPL-  SKP002/CR/2020
	int  apprv_status;  //5,6,7
	int  apprvNo;
    char operId[USER_ID_SIZE];
	char status; 
    char intvDateTime[DATE_TIME_SIZE];
    char remark[DELWAT_REMARKS_SIZE];  //Modified by Salmi on 12th Apr, 2021 -Change from 61 to 201 (SKP007/PM/2021)
    char apprvBranch[BRANCH_CODE_SIZE];
    char dateTimeStamp[DATE_TIME_SIZE];
	char szRejectdate[DATE_TIME_SIZE]; //Added by Subramaniam.P on 10th June,2020 SKP002/CR/2020 Release 3.46(REGN_DELEWAT)
	char szAppealdate[DATE_TIME_SIZE]; //Added by Subramaniam.P on 10th June,2020 SKP002/CR/2020 Release 3.46(REGN_DELEWAT)
	char userKptno[KPT_SIZE];
	//Added by Salmi Date:12th May, 2020 New APPRV_HISTORY_T struct. CRAPPL-  SKP002/CR/2020-End
} SET_APPL_STAT_L3_REQ_T;

typedef struct set_appl_stat_L3_resp
{
	HEADER_T header;
} SET_APPL_STAT_L3_RESP_T;

typedef struct prob_result
{
	int problem_number;
	char prob_stat;
	char transaction_code[TRANSACTION_CODE_SIZE];
	char note[NOTE_SIZE];
	char bskrecd; // Added on 25th Mar 2005 for IJPN
	//Added by Salmi Date:12th May, 2020 New field for PROB_RESULT_T struct. CRAPPL-  SKP002/CR/2020
	char gUser1[USER_ID_SIZE];
	char gUser1TimeStamp[DATE_TIME_SIZE];
	char gUser2[USER_ID_SIZE];
	char gUser2TimeStamp[DATE_TIME_SIZE];
	//Added by Salmi Date:12th May, 2020 New field for PROB_RESULT_T struct. CRAPPL-  SKP002/CR/2020

} PROB_RESULT_T;


typedef struct name_address_s
{
	char currlongname[LONG_NAME_SIZE];
	char gmpcshortname1[GMPC_SNAME1_SIZE];
	char gmpcshortname2[GMPC_SNAME2_SIZE];
	char gmpcshortname3[GMPC_SNAME3_SIZE];
	char currshortname1[SIREN_SHORT_NAME];
	char currshortname2[SIREN_SHORT_NAME];
	ADDRESS_T address;
} NAME_ADDRESS_T;

/* added on 24th March 2005 for IJPN */

typedef struct jpn_info_s
{
  char kptno[KPT_SIZE];
  int  birthdistrictcode;
  char policeid[POLICE_ID_SIZE];
  char militaryid[MILITARY_ID_SIZE];
  char kppno[KPP_SIZE];
  char gender;
  char personstatcode;
  char birthdate[DATE_SIZE];
  char unknownbirthind;
  char religioncode;
  char racecode[RACE_CODE_SIZE];
  char residentstat;
  char citizenshipstatcode;
  char colourarticlecode[ARTICLE_COLOR_CODE_SIZE];
  char hkind;
  char iccolorcode;
  char origname[ORIG_NAME_SIZE];
  char currlongname[CUR_LONG_NAME_SIZE];
  char currshortname1[CUR_SHORT_NAME_SIZE];
  char currshortname2[CUR_SHORT_NAME_SIZE];
  char gmpcshortname1[GMPC_SNAME1_SIZE];
  char gmpcshortname2[GMPC_SNAME1_SIZE];
  char gmpcshortname3[GMPC_SNAME3_SIZE];
  char address1[ADDRESS1_SIZE];
  char address2[ADDRESS1_SIZE];
  char address3[ADDRESS1_SIZE];
  char postcode[POST_CODE_SIZE];
  int  citycode;
  char statecode[STATE_CODE_SIZE];
  char ktindcode[KT_CODE_SIZE];
  char jpnremarks1[JPN_REMARKS_SIZE];
  char jpnremarks2[JPN_REMARKS_SIZE];
  char afisflag;
  int  cardlostcnt;
  char kptapplstat;
  char kptappldate[DATE_SIZE];    
  char kptcollectiondate[DATE_SIZE];
  char kptcollectionplaccode[KPT_COLLECTION_PLACE_SIZE];
  char lastaddchangedate[DATE_SIZE];
  char lastcardissuedate[DATE_SIZE];
  char juvenileflag;
  int  cardversionno;
  char birthplace[BIRTH_PLACE_SIZE];
  char rjind[RJ_SIZE];
  char birthcertno[BIRTH_CERT_NO_SIZE];
  int  kptversionno;
  char polmilitaryjoindate[DATE_SIZE];
  char retirementdate[DATE_SIZE];
  char orignameind;
  char surrenderdate[DATE_SIZE];
  char citizennationcode[COUNTRY_CODE_SIZE];
  char applapprovaldate[DATE_SIZE];
  char greencardexpdate[DATE_SIZE];
  char immrefno[IMM_REF_NO_SIZE];
  char immrefdate[DATE_SIZE];
  char immexpdate[DATE_SIZE];
  char passportno[PASSPORT_NO_SIZE];
  char passportissuedate[DATE_SIZE];
  char passportissuecountry[COUNTRY_CODE_SIZE];
  char ucflag;
  char permitno[PERMITNO1_SIZE];
  char permitissuedate[DATE_SIZE];
  int  permittype;
  int  prdoctype;
  char rjstartdate[DATE_SIZE];
  char rjenddate[DATE_SIZE];
  char ktstartdate[DATE_SIZE];
  char ktenddate[DATE_SIZE];
  char blklstind;
  char blklstcode[BLKLIST_ACTIVITY_CODE_SIZE];
  char birthregndate[DATE_SIZE];
  // Added these two fields for release 3.28 on 27/05/2014
  char ktareacode[6+1];
  char apjareacode[8+1];

  
  
}JPN_INFO_T;




	/* end IJPN */

#endif /* #ifndef _SET_APPL_STAT_L3_IO_	*/

