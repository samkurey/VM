/* $Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/COMMON_FILES/gscbdef.h-arc   1.2   Apr 16 2004 16:06:40   ShivamP  $ */

/********************************************************************/
/* File Name   : gscbdef.h                                          */
/* Author      : Brijesh Patil, Sangeeta Natu, Bakul Waghmare	    */
/*               Amit Sangrulkar	                            */
/* Description : This file contains common #defines and function    */
/*               prototypes required by all services.               */
/********************************************************************/
#ifndef _GSCBDEF_
#define _GSCBDEF_

/* Macro definitions */

#define setlen(x) x.len = strlen((char *)x.arr)
#define setnull(x)  x.arr[x.len]='\0'


#define ADDRESS_SIZE				41
#define AGENCY_SIZE					8
#define AGENCY_IND_SIZE				2			
#define AGENCY_ON_CHIP_SIZE			9
#define AG_REV_CODE_SIZE			8			
#define APP_ID_SIZE					20
#define APPLN_TYPE_SIZE				3 
#define APPL_STAGE_SIZE				4
#define	ARTICLE_COLOR_CODE_SIZE     3
#define ARTICLE_COLOR_DESC_SIZE		31
#define APPROV_DOC_NO_SIZE			41 /* added - brijesh */
#define APPROVAL_DOC_NO_SIZE		36 /* added on 24/09/2002 - shiva.p */

#define BACKUPPATH_SIZE				80
#define BATCH_NO_SIZE				23			
#define BIRTH_PLACE_SIZE			26
#define	BL_APPL_NO_SIZE				25
#define BL_CANCEL_REASON_SIZE		41
#define	BL_USER_ID_SIZE				9
#define BLACKLIST_REASON_CODE_SIZE	6		
#define BLKLIST_ACTIVITY_CODE_SIZE  3
#define BLKLIST_ACTIVITY_DESC_SIZE  31	
#define BLACKLIST_CENTRE_SIZE		3
#define BLKLIST_NAME_SIZE			41
#define BLKLIST_REASON_CODE_SIZE	BLACKLIST_REASON_CODE_SIZE
#define BLKLIST_REG_PLACE_CODE_SIZE 9
#define BLKLIST_REMARK_SIZE			51
#define BLKLIST_REP_AGENCY_SIZE     3
#define BLKLIST_REP_REF_NO_SIZE     51
#define BRANCH_NAME_SIZE            51
#define BRANCH_ADDRESS_SIZE         26
#define BRANCH_CODE_SIZE			7				
#define BRANCH_DESC_SIZE			21	
#define CANCEL_CODE_SIZE			3				
#define CARD_BL_CODE_SIZE			3
#define CARDSRNO_SIZE				19
#define CARD_VERSION_SIZE			3
#define CAT_SIZE					2		/* Category of owner */
#define CDF1_SIZE					80
#define CDF2_SIZE					80
#define CRF_SIZE					80
#define CGF_SIZE					80
#define CHASSIS_NO_SIZE				26
#define CHEQUE_NO_SIZE				17				

#define CITIZEN_CODE_SIZE			5
#define CITY_CODE_SIZE				5			
#define CITY_DESC_SIZE				21
#define COLOUR_CODE_SIZE			2				
#define COLOR_CODE_DESC_SIZE		21
#define COMPOUND_RATE_SIZE          8
#define CONNECTSTRING_SIZE			21
#define CONTACT_PERSON_NAME_SIZE    31
#define COUNTRY_CODE_SIZE			5
#define BIRTH_COUNTRY_CODE_SIZE		3
#define BIRTHCOUNTRYCODE_SIZE		5 // add for IJPN
#define COUNTRY_DESC_SIZE			51
#define COURT_CODE_SIZE				7
#define COURT_DESC_SIZE				31

#define FILE_TYPE					2 /* Added for jpn_person_blacklist partial download */
#define DATE_SIZE					9			
#define DATE_TIME_SIZE				16				
#define DEPT_SIZE					31			
#define DISP_DATA_REMARK_SIZE		81						
#define DIST_CODE_SIZE				5	
#define DIST_DESC_SIZE				26
#define DOC_NO_SIZE					16	
#define DOC_PLACE_CODE_SIZE			9
#define DOC_TYPE_DESC_SIZE			51
#define DOC_TYPE_SIZE				3
#define EMAIL_ID_SIZE				51				
#define ENDORSEMENT_REMARK_SIZE		41					
#define ENDS_REMARK_SIZE			41				
#define ENGINE_NO_SIZE				31
#define EOD_SIZE					10
#define ERROR_MSG_SIZE				201
#define FEE_TYPE_SIZE				4
#define FILE_REF_NO_SIZE			41
#define FILENAME_SIZE				51				
#define FINGER_ACQ_SIZE				16
#define FINGER_IND_SIZE				3			
#define FINGER_PATTERN_SIZE			4
#define FLAG_SIZE					2
#define FORM_NAME_SIZE				51			
#define FP_REMARK_SIZE				51				
#define GENDER_SIZE               	2						
#define GMPC_SNAME1_SIZE			31					
#define GMPC_SNAME3_SIZE			21					
#define GSC_SIZE					BRANCH_CODE_SIZE
#define GROUPID_SIZE				100
#define HANDICAPPED_REG_NO_SIZE		11		
#define IC_COLOR_DESC_SIZE			31
#define ID_SIZE						16
#define ID_TYPE_SIZE				3
#define ISSUINGCOUNTRY_SIZE			5			
#define IMG_REMARK_SIZE				51		/* Remarks regarding images */	
#define JANM_SIZE					6			
#define JOB_SIZE					11	
#define JOBPOSITION_SIZE			31 	
#define JPJ_BL_REASON_CODE_SIZE     6
#define JPJ_BL_REASON_DESC_SIZE		41
#define JPJ_BRANCH_CODE_SIZE		7		
#define JPJ_BRANCH_DESC_SIZE		162
#define JPJ_LIC_TYPE_SIZE			2
#define JPN_APPL_NO_SIZE			25
#define JPN_BL_REASON_CODE_SIZE		3
#define JPN_BL_REASON_DESC_SIZE		41
#define JPN_COURT_CODE_SIZE			5
#define JPJ_DIST_CODE_SIZE          16
#define JPJ_POST_CODE_SIZE          6
#define KPP_SIZE					9		
#define KPT_COLLECTION_PLACE_SIZE	10		/* Arbitrary since legacy stores this as integer */						
#define KPT_SIZE					13			
#define APPL_ID_SIZE				20
#define KT_CODE_SIZE				3		/* Restricted resident code */			
#define KPT_CANCEL_REMARKS_SIZE		41     /* Added on 26/09/2002 */
/*#define LEGACY_LR_PHOTO_SIZE		2850 */ // commented on 05/01/2017
#define LEGACY_LR_PHOTO_SIZE		3000
#define LEGACY_LR_PHOTO_SIZE1		3175    /* Added on 09/01/2017 */
#define LIC_CLS_SIZE				3				
#define	LIC_CLS_DESC_SIZE           81
#define LIC_CODE_SIZE 				11		/*Added for License Endorsement, Suspension, Revokation, Cancellation Codes*/
#define LIC_TYPE_SIZE				4
#define LIC_USAGE_DESC_SIZE			51
#define LIC_USAGE_SIZE				3	
#define LOCATION_CATEGORY_DESC_SIZE 21
#define LOG_REMARK_SIZE				81				
#define LONG_NAME_SIZE				151			
#define MILITARY_ID_SIZE			12					
#define MSG_SIZE					201				
#define NAME_SIZE					51		/* User name size in user_maint_request */
#define NAME_SIZE1					31		/* for spons_dtl_otherid table */
#define NAME_SIZE2					21
#define NOTE_SIZE					501		/* Notes on the action taken on problem */
#define NAME_CHG_CODE				3 /* added on 24/09/2002 by shiva.p */
#define OFFENCE_CAT_SIZE			6
#define OFFENCE_DESC_SIZE			201
#define OFFENCE_TYPE_SIZE			3
#define OFFENCE_POINT_SIZE			10
#define OPR_TYPE_SIZE	 			2			
#define	OPER_SIZE					3		/* Operation size for get_user_tasks */
#define ORIG_NAME_SIZE				151				
#define OWNER_CATEGORY_DESC_SIZE    81
#define PASSWD_SIZE					16
#define PAY_MODE_SIZE				3				
#define PAYTXNNO_SIZE				17				
#define PAYTXNTYPE_SIZE				2				
#define PERSON_STAT_DESC_SIZE       51
#define PHONE_SIZE					31			
#define PLACE_CODE_SIZE				5		/* Birth place code */			
#define POB_SIZE					26				
#define POLICE_ID_SIZE				12				
#define POST_CODE_SIZE				6			
#define PROB_REMARK_SIZE			151					
#define PROCESS_IND_SIZE			3
#define PROG_REMARK_SIZE			133					
#define PROG_ID_SIZE				9
#define Q_NO_SIZE					6
#define RACE_CODE_SIZE				5			
#define RACE_DESC_SIZE				51
#define REASON_CODE_SIZE			6					
#define REASON_SIZE					50
#define RECEIPT_NO_SIZE				13
#define RECEIPT_SIZE				11
#define REFERENCE_SIZE				41
#define REG_NO_SIZE					11
#define REJECT_REASON_SIZE			30
#define RELATION_CODE_SIZE			3
#define RELATION_DESC_SIZE			51
#define RELIGION_DESC_SIZE			21
#define RELIGION_SIZE				12			
#define REMARK_SIZE					61		/* JPN remark size */	
#define REQ_TYPE_SIZE				3
#define RETRYCOUNT					60
#define RETRYCOUNT_SIZE				2
#define REVENUE_CODE_SIZE			16
#define REVENUE_DESC_SIZE			31
#define REVENUE_SIZE				6				
#define RJ_SIZE						3
#define	REQ_ID_SIZE					22		/* Request ID for Corelating Tuxedo requests and responses */
#define SDATE_SIZE					5		/* Required for batch number generation */	
#define SECTION_SIZE                21
#define SERIAL_NO_SIZE				9
#define SERVICE_ID_SIZE				3
#define SIREN_SHORT_NAME			21				
#define SLEEPTIME					10000
#define SLEEPTIME_SIZE				6
#define SQL_MSG_SIZE				70
#define STAFF_REMARKS_SIZE			51	
#define STATE_CODE_SIZE				3	
#define STATE_DESC_SIZE				31		
#define STATUS_DESC_SIZE			51	
#define STATUS_SIZE					2			
#define SUMMONS_CODE_SIZE			2
#define SUMMONS_DESC_SIZE			51
#define SUPERVISOR_NOTE_SIZE		501		
#define SYS_PARAM_NAME_SIZE			31
#define TABLE_NAME_SIZE				51				
#define TASK_LIST_SIZE				1025				
#define TASK_LIBRARYID_SIZE			100	
#define TEL_NO_SIZE                 11
#define TIME_SIZE					7	
#define TIMEOUT						1000  
#define TIMEOUT_SIZE				10
#define TRANSACTION_CODE_SIZE		4						
#define USER_ID_SIZE				9		
#define VALUE_NAME_SIZE				26	
#define VEHICLE_NO_SIZE				11
#define VEHICLE_TYPE_CODE_SIZE		4
#define VEHICLE_TYPE_DESC_SIZE		51
#define WS_ID_SIZE					16		
#define WHERE_CLAUSE_SIZE			2048
#define YEAR_SIZE					5
#define ARTICLE_SIZE				ARTICLE_COLOR_CODE_SIZE
#define CLASS_USAGE_SIZE			LIC_USAGE_SIZE				
#define COUNTRY_SIZE				COUNTRY_DESC_SIZE							
#define DOB_SIZE					DATE_SIZE			
#define GMPC_SNAME2_SIZE			GMPC_SNAME1_SIZE					
#define LICENSE_CLASS_SIZE			LIC_CLS_SIZE				
#define LICENSE_TYPE_SIZE			LIC_TYPE_SIZE				
#define LIC_ID_SIZE					ID_SIZE		
#define IQC_REASON_SIZE				LOG_REMARK_SIZE	

#define INSU_COMPANY_CODE_SIZE		3
#define INSU_COMPANY_DESC_SIZE		31
#define LOC_AREA_CODE_SIZE			6
#define LOC_AREA_DESC_SIZE			51
#define OPER_TYPE_CODE_SIZE			4
#define OPER_TYPE_DESC_SIZE			51
#define NOTICE_TYPE_DESC_SIZE		51
#define WTBRIDGE_CODE_SIZE			7
#define WTBRIDGE_DESC_SIZE			51
#define JPJ_REVENUE_CODE_SIZE		AG_REV_CODE_SIZE
#define AG_CODE_SIZE				6
#define REVENUE_AMT_SIZE			8
#define JPN_REVENUE_CODE_SIZE		REVENUE_CODE_SIZE
#define BIRTH_PLACE_CODE_SIZE		9
#define BIRTH_PLACE_DESC_SIZE		61
#define LIC_VALIDITY_PERIOD_SIZE	3

#define LEGAPPLID_SIZE				25  /*  Added on 16th Feb 2005 for IJPN*/
#define LEGTXNCODE_SIZE				5   /*  Added on 16th Feb 2005 for IJPN*/
#define INTVNAME_SIZE				81  /*  Added on 29th Aug 2005 for IJPN*/
#define PANEL_NAME_SIZE				81  //Added by Salmi, Date 14th June 2020, CRAPPL-  SKP002/CR/2020

/* Added on 16 FEb 2005 for IJPN */

#define BLKLSTCODE_SIZE				 3
#define IDTYPE_SIZE					 3
#define IDNUMBER_SIZE				16
#define ORIGNAME_SIZE			   151
#define CURRLONGNAME_SIZE		   151
#define CURRSHORTNAME1_SIZE			21
#define CURRSHORTNAME2_SIZE			21
#define GMPCSHORTNAME1_SIZE			31
#define GMPCSHORTNAME2_SIZE			31
#define ADDRESS1_SIZE				31
#define ADDRESS2_SIZE				31
#define ADDRESS3_SIZE				31
#define POSTCODE_SIZE				 6
#define STATECODE_SIZE				 3
#define RACECODE_SIZE				 5
#define KTINDCODE_SIZE				 3
#define COLOURARTICLECODE_SIZE		 3
#define FATHERIDTYPE_SIZE			 3
#define FATHERIDNO_SIZE				16
#define MOTHERIDTYPE_SIZE            3
#define MOTHERIDNO_SIZE             16
#define PERMITNO_SIZE               16
#define IMMREFNO_SIZE				31
#define PASSPORTNO_SIZE				16
#define PASSPORTISSUECOUNTRY_SIZE	 5
#define KPTNO_SIZE					13
#define MILITARYID_SIZE				12
#define POLICEID_SIZE				12
#define KPPNO_SIZE					 9
#define GMPCSHORTNAME3_SIZE			21
#define RELATIONCODE_SIZE			 3
#define SPONSORIDTYPE_SIZE			 3
#define SPONSORIDNO_SIZE			16
#define SPONSSORCURRLONGNAME_SIZE  181
#define BIRTHSTATECODE_SIZE 		 3
#define	BIRTHPLACECODE_SIZE			 9
#define CITIZENNATIONCODE_SIZE		 5
#define PTWNO_SIZE				    16
#define JPNREMARKS1_SIZE			61
#define JPNREMARKS2_SIZE			61
#define KPTCOLLECTIONPLACCODE_SIZE  10
#define BIRTHPLACE_SIZE				26
#define	RJIND_SIZE					 3
#define BIRTHCERTNO_SIZE			16
#define FEE_SIZE                                11


/*Added by Amarjith on 20th Aug '04. JRS 147.*/

#define PERMIT_NO_SIZE				12	
#define PP_ISSUED_COUNTRY_SIZE		3
#define IMM_REF_NO_SIZE				31 //30
#define CURRENT_LONG_NAME_SIZE		60
#define IMM_CITIZENSHIP_SIZE		4
#define FIN_NO_SIZE					24
#define PERMIT_TYPE_SIZE			3
/*JRS 147.*/					


/* download_summons */
#define OFFENCE_CATEGORY_LEN		6
#define OFFENCE_STATUS_LEN			3
#define OFFENCE_TYPE_SIZE			3
#define OFFENCE_CODE_SIZE			4
#define JPJ_COURT_CODE_SIZE			7
#define COURT_CODE_LEN				JPJ_COURT_CODE_SIZE
#define JPJ_COURT_CODE_DESC			21
#define COURT_DESCRIPTION_LEN		JPJ_COURT_CODE_DESC
#define ISSUED_PLACE_CODE_LEN		6
#define ISSUED_PLACE_LEN			26
#define OFFICER_ID_LEN				14
#define OFFICER_NAME_LEN			41
#define TRAILER_NUMBER_LEN			11
#define AMOUNT_SIZE					7
#define UNPAID_TIMES_SIZE			4


/* vehicle and black list check */
#define VEHICLE_ID_SIZE						31
#define VEHICLE_REGISTRATION_NUMBER_SIZE	11
#define ENGINE_NUMBER_SIZE					23
#define CHASSIS_NUMBER_SIZE					31
#define VEHICLE_MADE_SIZE					4
#define BODY_TYPE_SIZE						4
#define VEHICLE_MODEL_SIZE					31
#define ROAD_TAX_SERIAL_NUMBER_SIZE			8
#define ROAD_TAX_EXPIRY_DATE_SIZE			11
#define CLASS_OF_USAGE_SIZE 				4
#define PERMIT_NUMBER_SIZE					16
#define OTHER_PERMIT_SIZE					16
#define OTHER_PERMIT_START_DATE_SIZE		DATE_SIZE
#define OTHER_PERMIT_END_DATE_SIZE			DATE_SIZE
#define LPKP_END_SUSPEND_DATE_SIZE			11

#define VEHICLE_INSPECTION_DATE_SIZE		11
#define VEHICLE_NEXT_INSPECTION_DATE_SIZE	11


#define INSURANCE_CODE_SIZE					3
#define INSURANCE_POLICY_NO_SIZE			11
#define INSURANCE_EXPIRY_DATE				DATE_SIZE

#define CATEGORY_OF_OWNER2_SIZE				2
#define ID_NUMBER2_SIZE						13

/* owner name check */
#define JPJ_ADDRESS_SIZE					30
#define JPJ_CITY_CODE_SIZE					6
#define JPJ_STATE_CODE_SIZE					6

/* update summons */
#define NOTICE_SERIAL_NUMBER_LEN			11
#define PATH_LEN							11
#define PATH_SIZE							PATH_LEN
#define LKM_NUMBER_SIZE						8
#define LKM_TRAILER_NUMBER_SIZE				8
#define LPKP_NUMBER_LEN						26
#define LPKP_TRAILER_NUMBER_LEN				26
#define GOODS_PASSENGER_SIZE				16
#define WEIGHING_SERIAL_NUMBER_SIZE			11
#define MCAD_OFFENCE_CAT_SIZE				6

/* Sizes for download_Summons */
#define UPD_SUMMONS_OFFICER_ID_LEN			9
#define YEAR_SIZE							5
#define LOCATION_DETAIL_SIZE				41
#define LOCATION_CODE_SIZE					6
#define SECTION_CODE_SIZE					23
#define JPJ_NAME_SIZE						41

/* upload audit */
#define OP_CODE_LEN							4
#define TRANS_ID_SIZE						4
#define TEAM_SIZE							6

/* upload imm audit */
#define IMM_TRANS_SIZE						3
#define CAD_SERIAL_SIZE						9

/* update jpj endorsement */
#define REPORTER_CODE_SIZE					 7
#define COURT_NUMBER_SIZE					 7
#define CASE_NUMBER_SIZE					13
#define ENDORSEMENT_SECTION_SIZE			16
#define ACTION_SIZE							ENDORSEMENT_REMARK_SIZE

/* update jpj summons (20 2000) */
#define SUMMON_NO_SIZE 						11
#define SUMMON_NO_LEN						SUMMON_NO_SIZE
#define SUMMONS_NUMBER_LEN					SUMMON_NO_SIZE
#define SUMMON_ISSUE_CODE_SIZE				9
#define SUMMONS_ISSUE_CODE_LEN				SUMMON_ISSUE_CODE_SIZE	
#define ISSUE_BRANCH_CODE_SIZE				7
#define SUMMON_ISSUE_YEAR_SIZE				5

/* enquire blacklist check */
#define BLACKLIST_DURATION_SIZE				3

/* new requiremnt for Download DL Information */
#define JPJ_GENERATION_NUMBER_SIZE			3
#define JPJ_KEJARA_POINT_SIZE				3
#define JPJ_DURATION_SIZE					3
#define JPJ_REPORTER_REFNO_SIZE				31
#define UPDATE_USER_SIZE					10

/* new requirement for JPN Update GMPC Application */
#define CARD_LOST_COUNT_SIZE				3

/* reversal message */
#define JPN_REVERSAL_DESC_SIZE				50
#define JPJ_REVERSAL_DESC_SIZE				50

/* a new define for LEGACY_BRANCH_CODE_SIZE	as 9 since jpn branches have 8 digit legacy codes */
#define LEGACY_BRANCH_CODE_SIZE				9

/* a new define for AGENCY_REV_CODE_SIZE since download lookup uses 16 chars */
#define AGENCY_REV_CODE_SIZE				8

/* new requirement for Update missed opex application */
#define IMM_REFER_NO_SIZE					31
#define ENTRY_PERMIT_NO_SIZE				11

/* New requirement for JPN Person Inquiry */
#define	SWN_NO_SIZE							11
#define	SAA_NO_SIZE							16
#define	PTW_NO_SIZE							11

/* Image sizes */					
#define MINUTIAE_SIZE				600
#define FINGERPRINT_SIZE			30000
#define	HIGH_RES_PHOTO_SIZE			16500
#define LOW_RES_PHOTO_SIZE			5000
#define MATRIX_BUFFER_SIZE			10000			
#define ALLOWABLE_LR_PHOTO_SIZE		4000
#define IMM_PHOTO_SIZE				30000	//Added by Amarjith on 23rd Aug '04. JRS 144.

/* #defines for IMM */
#define PASSPORT_NO_SIZE			16
#define JIM_PP_NO_SIZE				13
#define JIM_NAME_SIZE				61
#define JIM_DOC_TYPE_SIZE			4
#define JIM_ID_SIZE                 13
#define ID_TYPE_DESC_SIZE           31
#define JIM_ID_TYPE_SIZE            ID_TYPE_SIZE

/* PCS #defines */
#define ACCOUNT_NO_SIZE			19
#define ACCOUNT_NAME_SIZE		76
#define BANK_BRANCHCODE_SIZE	6
#define BANK_ID_SIZE			3
#define BANK_LOCATION_SIZE		31
#define BANK_SNAME_SIZE			11
#define BDRAFT_TYPE_SIZE		3
#define BANK_DRAFT_NO_SIZE      7
#define BANK_DRAFT_NO_SIZE1     9 // included for IJPN on 1/09/2005
#define CAD_ID_SIZE				9
#define CARD_NO_SIZE			20
#define CHQ_NO_SIZE				16  //7 changed this to 16 on 30/11/05
#define CHQ_NO_SIZE1			9 // included for IJPN on 1/09/2005
#define CHQ_TYPE_SIZE			3
#define COLL_STAT_NO_SIZE		6
#define CONTACT_INFO_SIZE		101
#define DEBTOR_STATUS_SIZE		2
#define EPAY_APPR_CODE_SIZE		7
#define EPAY_BATCH_NO_SIZE		7
#define EPAY_REF_NO_SIZE		13
#define EPAY_TRACE_NO_SIZE		7
#define MEPS_ID_SIZE			20
#define MEPS_TXN_NO_SIZE		11
#define MO_PO_NO_SIZE			11
#define MO_PO_NO_SIZE1			16 // included for IJPN on 1/09/2005
#define PAYIN_SLIP_NO_SIZE		11
#define PAYIN_SLIP_STATUS_SIZE	2
#define PAYIN_SLIP_TYPE_SIZE	3
#define POSTING_SLIP_NO_SIZE	6
#define RCPT_NO_SIZE			11
#define DIS_REASON_SIZE			51

/* Size definitions required for PDRM  */

#define SUMM_DIST_SIZE				7
#define DEVICE_SIZE					7
#define COMPOUND_SIZE				5
#define OFFENDER_NAME_SIZE			51
#define PDRM_OFFENCE_CODE_SIZE		25
#define VEHICLE_TYPE_SIZE			21
#define PDRM_TIME_SIZE				6
#define PDRM_EXP_DT_SIZE			7
#define PDRM_OFFENCE_PLACE_SIZE		31
#define PDRM_CAD_SR_SIZE			7
#define PDRM_OPER_CODE_SIZE			3
#define PDRM_OPER_DESC_SIZE			31
#define PDRM_LAW_CODE_SIZE			15
#define PDRM_SECTION_CODE_SIZE		11
#define PDRM_OFF_SHORT_DESC			31
#define PDRM_OFF_LONG_DESC			256
#define PDRM_OFFENCE_CAT_SIZE		3
#define PDRM_OFFENCE_GROUP_SIZE		3
#define PDRM_OFFENCE_UOM_SIZE		2
#define PDRM_UNIT_CODE_SIZE			2
#define PDRM_UNIT_DESC_SIZE			31
#define PDRM_UNIT_DESC_SIZE			31
#define PDRM_UNIT_NO_SIZE			4
#define PDRM_VEH_TYPE_SIZE			3
#define PDRM_VEH_DESC_SIZE			31
#define PDRM_DIST_CODE_SIZE			7
#define PDRM_POST_CODE_SIZE			7
#define PDRM_DIST_ADDR1_SIZE		41
#define PDRM_DIST_ADDR2_SIZE		41
#define PDRM_VEH_COLOR_CODE_SIZE	4
#define PDRM_VEH_COLOUR_DESC_SIZE	31
#define PDRM_VEH_MANUF_CODE_SIZE	4
#define PDRM_VEH_MANUF_DESC_SIZE	31
#define PDRM_VEH_PLATE_STAT_SIZE	2
#define PDRM_VEH_PLATE_SEQ_SIZE		4
#define PDRM_VEH_PLATE_DESC_SIZE	31

#define COLLECTION_TYPE_SIZE	3
#define DB_CR_CARD_SIZE			20
#define APPROVAL_CODE_SIZE		7
#define ERROR_CODE_SIZE			5
#define LEGACY_TYPE_SIZE		4	/*Legacy Type Size in Problem Record*/
#define INT_SIZE				5
#define LONG_SIZE				9
#define CHAR_SIZE				2
#define IMAGE_LEN_SIZE			6
#define FLOAT_SIZE				9 // Added for IJPN on 14/07/2005

/* -------------------- KP12 ONLINE SIZE DEFINITION HERE -------------------- */
// added by Samsuri (22 jan 2020) CR NO:SKP023/CR/2019 Release 3.45
#define KP12_SLIPNO_SIZE 				19
#define KP12_KPTNUMBER_SIZE  			16
#define KP12_COLLBRANCH_SIZE  			7
#define KP12_KPPNO_SIZE  				16
#define KP12_KPKNO_SIZE  				16
#define KP12_CURRLONGNAME_SIZE  		151
#define KP12_GMPCSHORTNAME1_SIZE  		GMPCSHORTNAME1_SIZE
#define KP12_GMPCSHORTNAME2_SIZE  		GMPCSHORTNAME2_SIZE
#define KP12_GMPCSHORTNAME3_SIZE  		GMPCSHORTNAME3_SIZE
#define KP12_ORIGINALNAME_SIZE  		151
#define KP12_RACE_SIZE  				5
#define KP12_GENDER_SIZE  				2
#define KP12_RESIDENTSTAT_SIZE  		2
#define KP12_BIRTHSTATECODE_SIZE  		9
#define KP12_BIRTHCOUNTRYCODE_SIZE  	5
#define KP12_BIRTHCERTNO_SIZE  			16
#define KP12_BIRTHPLACECODE_SIZE  		9
#define KP12_POLICEID_SIZE  			16
#define KP12_SERVICETYPE_SIZE  			3
#define KP12_PERSONSTATUS_SIZE  		2
#define KP12_VERIFYSTATCODE_SIZE  		2
#define KP12_HKIND_SIZE  				2
#define KP12_ADDRESS1_SIZE  			51
#define KP12_ADDRESS2_SIZE  			51
#define KP12_ADDRESS3_SIZE  			51
#define KP12_STATECODE_SIZE  			3
#define KP12_POSTCODE_SIZE  			POSTCODE_SIZE + 1
#define KP12_AFISIND_SIZE  				2
#define KP12_PERMITNO_SIZE  			13
#define KP12_HIAINDICATOR_SIZE  		2
#define KP12_FIRSTICISSUEPLACE_SIZE 	9
#define KP12_ADDITIONALINFO_SIZE  		151
#define KP12_JPNREMARK3_SIZE  			101
#define KP12_PAYMMODE_SIZE  			3
#define KP12_APPLID_SIZE  				20
#define KP12_RECEIPTNO_SIZE  			11
#define KP12_LEGAPPLID_SIZE  			25
#define KP12_EXTRACTORTYPE_SIZE  		2
#define KP12_APPLPURPOSE_SIZE  			3  //Added by Salmi Date: 25th Feb,2020  Suggested or advised by <Subramaniam. P> Change from 151 -> 3
#define KP12_TELNO_SIZE  				31
#define KP12_EXTTYPECODE_SIZE  			2
#define KP12_RELATIONCODE_SIZE  		3
#define KP12_DOCSERNO_SIZE  			11
#define KP12_PAYCOLLIND_SIZE  			2
// added by Samsuri (22 jan 2020) CR NO:SKP023/CR/2019 Release 3.45
/* -------------------- KP12 ONLINE SIZE DEFINITION HERE - FINISH -------------------- */



/* Debtor status values */
#define	PAID		'P'
#define UNPAID		'U'
#define REMINDER	'R'

#define YES					'Y'
#define NO					'N'


/* Card Status Values */
#define PRODUCTION				1	/* Application sent to PC for card production */
#define PERSONALISED			2   /* Card is printed and ready for packing and
									distribution */
#define SENT_GSC				3	/* Card is in transit from PC to GSC */
#define RECVD_GSC				4   /* Card has been received at the GSC branch */
#define MISSING_GSC				5   /* Card has been sent to GSC, but not received 
									after turn-around time i.e. 7 days */
#define RETURNED_PC				6	/* Card has been received at GSC due to missing
									or card has been returned to PC due to wrong 
									collection centre */
#define DEFECT_CHIP				7	/* Card has been received at the GSC but card 
									could not be issued dut to error in the chip.*/
#define DEFECT_SURFACE			8	/* Card has been received at the GSC but card 
									could not be issued dut to error on the surface.*/
#define UNLOCATED				9	/* Card has been received at the GSC but card 
									could not be located during issuance.*/
#define WITHHELD				10	/* Card is withheld from issuance */
#define UNCLAIMED				11	/* Card has not been collected by the applicant and
									has passed the end of the 3 month collection 
									period */	
#define SENT_REPRODUCTION		12	/* Card that is confirmed missing or unlocated and sent for 
									reprinting */
#define LOST_FOUND				13	/* Card that is missing or unlocated and later found */
#define SENT_DESTRUCTION		14	/* Card has been sent to PC for destruction */
#define DESTROYED				15	/* Card has been received and destroyed at the PC */
#define ACTIVE 					16	/* Card has been issued and collected by the 
									applicant */
#define LOST					17	/* Card has been reported lost / stolen by the 
									cardholder */
#define RETAINED_BLACKLIST		18	/* Card is retained at the GSC because it is 
									blacklisted */
#define RETAINED_RENEWAL		19	/* Old card that is retained at the GSC from applicant
									who performs Renewal under Rule 18 */
#define RETAINED_REPLACE		20	/* Old card that is retained at the GSC from applicant
									who performs Replacement due to damage/change in 
									cardholder information / error on the card surface */
#define REJECTED_PC				21	/* Card rejected by PC */
#define SENT_GQD_GSC			22	/* Card has been sent to GQD by GSC */
#define SENT_GQD				23	/* Card has been sent to GQD due to Data error */
#define RECEIVED_GQD			24	/* Card has been recieved at GQD */
#define SENT_PC_BY_GQD			25	/* Card has been sent to PC from GQD */
#define FURTHUR_INVESTIGATE		26	/* Card is withheld and referred to SSC/GQD */
#define REPRODUCE_INVESTIGATE	27	/* Card is to be reproduced after investigation */
#define RECEIVED_BY_PC			28	/* Cpf file has been received by PC */								   
#define TERMINATED_AT_GSC		29	/* The application has been terminated at GSC */								   
#define REPLACE_AT_SIREN		30	/* The application has been replaced from SIREN (KPTC) branch */								   
#define SURREND_DEATH			31	/* The card has been surrendered due to death of the card holder */								   
#define SURREND_MIGRATE			32	/* The card has been surrendered due to migration of the card holder to other country */								   
#define SURREND_POL_SERVICE		33	/* The card has been surrendered when card holder joins the Police/Army service */								   
#define SURREND_CITIZEN_DEPRIVE 34	/* The card has been surrendered due to derivation/renunciation of the citizenship */								   
#define SURREND_TERMINATION		35	/* The card has been surrendered termination of GMPC */								   
#define SURREND_SPECIALBRANCH	37	/* The card has been surrendered DUE TO SPECIAL BRANCH CARDS */								   

/* Application Status Values */
#define INITIATED					'I'  /* Application has been initiated at the GSC				 */
#define NEW							'N'  /* GMPC Application has passed the Qualification Check		 */
										 /* with GSCB and Legacy */
#define COMPLETED_GSC				'C'  /* Application is completed at the GSC and ready for AFIS   */
										 /* 1:n check												 */
#define PENDING_1N					'A'  /* Application has been captured at GSCB and has been sent  */
										 /* to legacy for update and to AFIS for 1:n check			 */
#define READY_PROD					'D'  /* Card is ready for printing. No 1:n check required or	 */
 									     /* 1:n check completed successfully						 */
#define PRODUCED					'P'  /* Card has been personalized by PC and ready for packing   */
										 /* and distribution to GSC branches						 */
#define ISSUED						'R'  /* Card has been issued and collected by cardholder		 */
#define TERMINATED_GSC				'T'  /* GMPC Application has been terminated at GSC				 */
#define TERMINATED_GSCB				'G'  /* GMPC Application has been terminated at GQD as			 */
										 /* result of investigation, or due to failure in 1:n  check */
#define SENT_PROD					'S'  /* GMPC Application has been sent to PC for card			 */
										 /* production												 */
#define PENDING_PAY					'E'	 /* GMPC Application completed at GSC and pending on		 */
										 /* payment													 */
#define PENDING_VV					'F'	 /* Application is pending for Visual Verification at AFIS	 */
#define REFFERED_SSC				'X'	 /* GMPC Application has been referred to SSC				 */
#define REFFERED_GQD				'Q'	 /* GMPC Application has been referred to GQD				 */
#define PENDING_CANCEL				'L'	 /* The application will be cancelled if the payments		 */
										 /* are reversed successfully								 */
#define FAST_LANE_COMPLETE			'M'	 /* The application processing is being completed at		 */
										 /* Fast lane counter										 */
#define SENT_REVIEW					'W'	 /* Application has been sent for review					 */
#define APPROVED					'V'	 /* Application has been approved							 */
#define SENT_PHOTO_COUNTER			'O'	 /* Application has been sent to photo counter				 */
#define CANCELLED					'H'	 /* Application is being cancelled at workstation			 */
#define OFFLINE_CAPTURE_COMPLETE	'B'	 /* Data capture has been completed for Offline application  */
#define ENQ_INITIATED				'Y'	 /* Enquiry for the application has been initiated			 */
#define ENQ_COMPLETED				'X'	 /* Enquiry for the application has been completed			 */
#define PENDING_LEGACY_UPD			'U'	 /* Application has been pending for data update at Legacy	 */
#define UNCLAIMED_CARD_APPL			'K'	 /* GMPC is unclaimed for the application					 */

/* Process indicator values */
#define APPL_REGISTER		"AR"
#define APPL_PROCESS		"AP"
#define APPL_PHOTO_CAPTURE	"AO"
#define APPL_CANCEL			"AC"
#define	ISSUE_REGISTER		"IR"
#define	ISSUE_CARD			"IC"
#define REPRINT				"RP"
#define	PAY_DISHONOURED_CHK	"PC"
#define	KPT_REGISTER		"KP"  //shiva

/* Check Agency Codes */
#define JPN_ID				'1'
#define JIM_ID				'2'
#define JPJ_ID				'3'
#define PDRM_ID				'4'
#define AFIS_ID				'5'
#define SIREN_ID			'9'

/* Log path */
#define LOG_PATH			"d:\\gmpc\\gscb\\log\\"

/* Message dump path */
#define DUMP_PATH			"d:\\gmpc\\gscb\\dump\\"

/* Error / Return Codes */
#define GMPC_GOOD		 0
#define GMPC_BAD		-1
#define GMPC_WARN		-2

#define TRUE			1
#define FALSE			0

#define VALID			1
#define INVALID			0

#define SUCCESS			0
#define FAILURE			1

#define EXISTS			1


/* Oracle errors */
#define SQLCODE			sqlca.sqlcode
#define SQLMSG			sqlca.sqlerrm.sqlerrmc
#define NO_DATA_FOUND	sqlca.sqlcode==1403?sqlca.sqlcode:0
#define CONN_FAIL		sqlca.sqlcode==900?sqlca.sqlcode:0
#define NULL_VALUE		sqlca.sqlcode==-1405?sqlca.sqlcode:0
#define RECORD_EXISTS	sqlca.sqlcode==-1?sqlca.sqlcode:0


/* Severity codes */
#define FATAL			'F'
#define NON_FATAL		'N'
#define WARNING			'W'

/* Transaction / Program status codes */
#define COMPLETED		'C'
#define INIT			'I'
#define FAIL			'F'
#define TERMINATED		'T'

/* Problem status values */
#define PROBLEM_OPEN    'O' 
#define PROBLEM_CLOSED  'C'

/* Problem reason codes used by Card Production	*/
#define CP_IMAGE_PROB	"C0100"
#define CP_DATA_PROB	"C0101"

/* Transaction type values */
#define TXN_12YO			1
#define TXN_FT				2
#define TXN_CONV			3
#define TXN_REPL			4
#define TXN_CHIP_UPD		5
#define TXN_LIC				6
#define TXN_UNCLAIMED_CARD  7
#define TXN_ISSUE			8
#define TXN_MISC			9
#define TXN_REVERSAL		10

/* Application Priority values	*/
#define NORM_PRIORITY		0
#define HIGH_PRIORITY		1

/* Transaction cancellation codes	*/
#define CANCEL_CARD_REPRINT	1

/* Legacy request status values */
#define REQ_NOT_SENT		-1
#define REPLY_NOT_RECIEVED  -2
#define REPLY_REJECTED		-3 /*Added on 22/04/2003 by shiva.p */
#define REPLY_RECEIVED		0
//#define REQ_SENT			1 Commented for IJPN as we are not using this code anymore since we use 0 for successful updation to host
#define REQ_SENT			0 // added for IJPN on 15th July 2005, if host updation is successful we update the status as 0 in the IJPN_LEGACY_TABLE
#define AFIS_CHECK			2		/* Received response from AFIS indicating 1:n check will be done */
#define REPLY_WARN_RECEIVED 10	/* If partial update in legacy is successfull,treated as reply recieved. Added on 30102001 by shiva.p */	

/* Request flag to be put in LEGACY_REQUEST table */

#define DEMO_UPD		'D'	
#define GMPC_STAT_UPD	'C'
#define APPL_IN_PROG	'F'
#define APPL_TERMINATE  'G'
#define ADDRESS_UPD		'A'
#define PAYMENT_UPD		'P'
#define NEW_LIC			'N'
#define RENEW_LIC		'R'
#define REPLACE_LIC		'E'
#define ADD_CLASS		'L'
#define ADD_SUMMONS		'S'
#define NAME_CHANGE		'M'
#define ADD_SUSP		'U'
#define ADD_REVOK		'V'
#define ID_TO_KPT		'K'
#define UPD_PDRM_SUMM	'H'
#define UNKNOWN         'X'		/* Used when CREATE_APPLNT fires the Update services */
#define UPD_CASH_SUMM   'Z'
#define IMM_UPD		    'I'
#define OWNER_UPD		'W'
#define SURRENDER_UPD	'Y'		/* Used by UPD_SURRENDER service */
#define KPTC_GMPC_UPD	'J'
#define MYKID_ISSU		'B'	 // Added for IJPN on 21st July 2005
#define KPTC_ISSU		'Q'	 // Added for IJPN on 21st July 2005
#define EXTRACT_UPD		'O'	 // Added for IJPN on 21st July 2005
#define IMM_PR_UPD		'T'	 // Added for IJPN on 19th Sept 2005

#define MISSED_OPEX_UPD		'1'	 // Added for IJPN on 3rd Oct  2005
#define UPD_CHANGE_KPTNO	'2'	 // Added for IJPN on 3rd Oct  2005
#define NRS_UPD				'3'	 // Added for IJPN on 3rd Oct  2005
#define CREATE_KPT_RECORD	'4'	 // Added for IJPN on 17th Nov  2005
#define MISCL_PAYMENT_UPD	'5'	 // Added for IJPN on 25th Nov  2005
#define TMP_CASH_SUMM		'6'	 // Added for IJPN on 25th May  2006
#define JPJ_UPD_CASH_SUMM	'7'	 // Added for IJPN on 1st June  2006


/* Surrender status values */
#define SURREND_INIT		'I'		/* Surrender initiated at GSC */
#define SURREND_APPROVE		'A'		/* Surrender approved at GSC */
#define SURREND_SEND_LEG	'U'		/* Surrender request send to legacy */
#define SURREND_COMPLETE	'C'		/* Surrender completed at GSC */
#define SURREND_FAIL		'F'		/* Surrender update failed at legacy */
#define SURREND_TERMINATE	'T'		/* Surrender terminated at GSC */

/* Surrender code values */
#define SURRENDER_DEATH				'1'		/* Surrender due to death of GMPC owner */
#define SURRENDER_MIGRATION			'2'		/* Surrender due to PR leaving the country */
#define SURRENDER_JOIN_POLICE		'3'		/* Surrender due person joining Police/Army */
#define SURRENDER_CITIZEN_DEPRIVE	'4'		/* Surrender due to citizenship deprivation */
#define SURRENDER_TERM_GMPC			'5'		/* Surrender due GMPC terminated */
#define SURRENDER_CHAWANGAN_KHAS	'9'		/* Surrender due to Special Branch card */ // added this on 23/03/2017 for CR 317 Rel 3.35

/* Invoking modes for Legacy update services */
#define MANUAL_CALL		'M'
#define SERVICE_CALL	'S'

/* Start and End values for Phone-In GMPC Queue ticket numbers */
#define PHONE_IN_Q_NO_START			40001
#define PHONE_IN_Q_NO_END			60000

/* System errors codes */
#define RESP_BUF_ERR				2001
#define REQ_BUF_ERR					2002
#define SELECT_ERROR				2003
#define INSERT_ERROR				2004
#define UPDATE_ERROR				2005
#define DELETE_ERROR				2006
#define READ_REG_ERR				2007
#define CURSOR_OPEN_ERROR			2008
#define STORED_PROC_ERROR			2009
#define ROLLBACK_TRAN_ERROR			2010
#define END_TRAN_ERROR				2011
#define BEGIN_TRAN_ERROR			2012
#define MALLOC_ERROR				2013
#define CURSOR_CLOSE_ERROR			2014
#define CURSOR_FETCH_ERROR			2015
#define TPACALL_ERROR				2016
#define TPCALL_ERROR				2017
#define TPGETREPLY_ERROR			2018


/* Common error codes */
#define WS_ID_NULL					12001
#define INVALID_APPL_STAT			12002
#define APPNT_ID_NULL				12003
#define INVALID_ID_TYPE				12004
#define APP_ID_NULL					12005
#define INVALID_TXN_TYPE			12006
#define KPT_NO_NULL					12007
#define CARD_VERSION_NULL			12008
#define USER_ID_NULL				12009
#define INVALID_CARD_VERSION		12010
#define CARD_STATUS_NULL			12011
#define INVALID_AGENCY_IND			12012
#define BRANCH_CD_NULL				12013
#define INVALID_BRANCH_CD			12014
#define INVALID_PAY_MODE			12015
#define INVALID_APPL_ID				12016
#define LIC_ID_NULL					12017
#define LIC_ID_TYPE_NULL			12018
#define OWNER_CAT_NULL				12019
#define INVALID_CARD_STAT			12020
#define NO_APPL_EXISTS				12021
#define NO_TXN_EXISTS				12022
#define ID_TYPE_NULL				12023
#define HSC_COLOR_CD_NULL			12024
#define APPL_CANCELLED				12025
#define APPL_NOT_COMPLETED			12026 
#define INVALID_RACE_CODE			12027
#define INAVLID_RELIGION_CODE		12028
#define INVALID_CITY_CODE			12029
#define INVALID_STATE_CODE			12030
#define GMPC_NAME1_NULL				12031
#define	TERM_BEFORE_GSCB_COMPLETE	12032
#define INVALID_COUNTRY_CODE		12033
#define	DUPLICATE_KPTNO_EXISTS		12034
/* Added for KP12Online CR No:SKP023/CR/2019  Release 3.45 Added by Subramaniam.P*/
#define	SLIP_NO_NULL				12035
#define	SLIP_BR_NO_MATCH			12036
/* Added for KP12Online CR No:SKP023/CR/2019  Release 3.45 Added by Subramaniam.P*/
/*Added by Salmi Date: 24th Feb,2020  Suggested or advised by <Subramaniam.P>. New error code*/
#define	RECORD_NOT_FOUND			41001
/* Return/Error codes specific to the services */

/* Error codes used by QC services */
#define PUT_ERROR					21101
#define GET_ERROR					21102
#define CONN_ERROR					21103
#define APPL_ERROR					21104
#define LEGACY_DATA_ERROR			21105
#define NO_MSG_ERROR				21106

/* GET_APPNT_KPT */
#define GET_KPT_BEGIN_TRAN_ERROR	21201	
#define GET_KPT_END_TRAN_ERROR		21202
#define GET_KPT_SELECT_ERROR		21203
#define GET_KPT_INSERT_ERROR		21204
#define GET_KPT_UPDATE_ERROR		21205	
#define GET_KPT_DELETE_ERROR		21206	
#define GET_KPT_RESP_BUF_ERR		21207
#define GET_KPT_REC_NOT_FOUND		21208
#define GET_KPT_NOT_OK				21209
#define GET_KPT_COMM_ERROR			21210
#define GET_KPT_NO_MSG_ERROR		21211
#define GET_KPT_PUT_ERROR			21212
#define GET_KPT_GET_ERROR			21213
#define GET_KPT_CONN_ERROR			21214
#define GET_KPT_APPL_ERROR			21215
#define GET_KPT_LEGACY_DATA_ERROR	21216
					
/* GET_JPN_DATA */
#define JPN_BEGIN_TRAN_ERROR		21301
#define JPN_END_TRAN_ERROR			21302
#define JPN_SELECT_ERROR			21303
#define JPN_INSERT_ERROR			21304
#define JPN_UPDATE_ERROR			21305
#define JPN_DELETE_ERROR			21306
#define JPN_RESP_BUF_ERR			21307
#define JPN_REC_NOT_FOUND			21308
#define JPN_NOT_OK					21309
#define JPN_COMM_ERROR				21310
#define JPN_NO_MSG_ERROR			21311
#define JPN_PUT_ERROR				21312
#define JPN_GET_ERROR				21313
#define JPN_CONN_ERROR				21314
#define JPN_APPL_ERROR				21315
#define JPN_LEGACY_DATA_ERROR		21316
#define JPN_CURSOR_OPEN_ERROR		21317
#define JPN_CURSOR_CLOSE_ERROR		21318
#define JPN_CURSOR_FETCH_ERROR		21319
#define JPN_SPONSOR_REC_NOTFOUND	21320

/* GET_JPJ_DATA */
#define JPJ_BEGIN_TRAN_ERROR		21401
#define JPJ_END_TRAN_ERROR			21402
#define JPJ_SELECT_ERROR			21403
#define JPJ_INSERT_ERROR			21404
#define JPJ_UPDATE_ERROR			21405
#define JPJ_DELETE_ERROR			21406
#define JPJ_RESP_BUF_ERR			21407
#define JPJ_REC_NOT_FOUND			21408
#define JPJ_NOT_OK					21409
#define JPJ_COMM_ERROR				21410
#define JPJ_NO_MSG_ERROR			21411
#define JPJ_PUT_ERROR				21412
#define JPJ_GET_ERROR				21413
#define JPJ_CONN_ERROR				21414
#define JPJ_APPL_ERROR				21415
#define JPJ_LEGACY_DATA_ERROR		21416
#define NULL_SUMMONS_NO				21417

/* GET_IMM_DATA */
#define IMM_BEGIN_TRAN_ERROR		21501
#define IMM_END_TRAN_ERROR			21502
#define IMM_SELECT_ERROR			21503
#define IMM_INSERT_ERROR			21504
#define IMM_UPDATE_ERROR			21505
#define IMM_DELETE_ERROR			21506
#define IMM_RESP_BUF_ERR			21507
#define IMM_REC_NOT_FOUND			21508
#define IMM_NOT_OK					21509
#define IMM_COMM_ERROR				21510
#define IMM_NO_MSG_ERROR			21511
#define IMM_PUT_ERROR				21512
#define IMM_GET_ERROR				21513
#define IMM_CONN_ERROR				21514
#define IMM_APPL_ERROR				21515
#define IMM_LEGACY_DATA_ERROR		21516

/* GET_PDRM_DATA */
#define PDRM_BEGIN_TRAN_ERROR		21601
#define PDRM_END_TRAN_ERROR			21602
#define PDRM_SELECT_ERROR			21603
#define PDRM_INSERT_ERROR			21604
#define PDRM_UPDATE_ERROR			21605
#define PDRM_DELETE_ERROR			21606
#define PDRM_RESP_BUF_ERR			21607
#define PDRM_REQ_BUF_ERR			21608
#define PDRM_TPINIT_ERROR			21609
#define PDRM_TPCALL_ERROR			21610
#define PDRM_MALLOC_ERROR			21611
#define PDRM_CURSOR_OPEN_ERROR		21612
#define PDRM_CURSOR_CLOSE_ERROR		21613
#define PDRM_CURSOR_FETCH_ERROR		21614

#define DATA_ERROR					21516 // included on 5/10/05 for IJPN

/* Error codes used by Card Application and miscellaneous services */

/* CARD_REPRINT */
#define NO_CARD_EXISTS				22501
#define INVALID_BATCH_NO			22502

/* CREATE_APPLNT */
#define IMG_SIZE_ERROR				22503
#define NO_ACTIVE_CARD				22504
#define INVALID_VALIDITY_PERIOD		22505
#define NO_PASSPORT_INFO			22506
#define APPL_DUE_CANCEL				22507
#define APPROVAL_DATE_NULL			22508

/* TERMINATE_APPL */
#define INVALID_TERM_FLAG_ERR		22510
#define TXN_COUNT_ERR				22511
#define INVALID_ISSUANCE_FLAG_ERR	22512
#define INVALID_CANCEL_CODE_ERROR	22513

/* IMM_UPDATE */
#define PASSPORTNO_NULL				22514
#define DWNLDCHP_IND_NULL			22515

/* PDRM_UPDATE */
#define NO_SUMMON_INFO				22516

/* JPN_UPDATE */
#define WRONG_MINUT_SIZE			22519

/* VERIFY_DOCSERNO */
#define DOC_ALREADY_ISSUED			22520

/* UPD_SURRENDER */
#define SURREND_DATE_NULL			22521
#define SURREND_CODE_NULL			22522

/* GET_SURREND_DET */
#define NO_CARD_SURRENDERED			22523
#define SURREND_CODE_NON_ELIGIBLE	22524
#define SURRENDER_NOT_ALLOWED		22525

/* Error codes used by Card Arrival services */

/* GET_CARD_DET */
#define DATA_ABSENT					24501
#define	INVALID_REQ_IND				24502
#define BATCHNO_NOT_NULL			24503

/* Error codes used by Issuance services */

/* DESTROY_OLD_DOC */
#define ZERO_DOC					25501
#define INVALID_DOC_TYPE			25502

/* CARD_ISSUANCE */
#define CHIPSERNO_NULL				25503

/* CARD_REPRINT */
#define INSUFFICIENT_INPUT			25504

/* UPD_CARD_DET */
#define INVALID_BATCHNO_BRCODE		25505
#define INVALID_KPTNO_BRCODE		25506

/* Error codes used by Card Production services */
#define PING_PC_ERROR				23001
#define PING_CSM_ERROR				23002
#define FILE_OPEN_ERROR				23003
#define HIGH_RES_PHOTO_ERROR		23004
#define LOW_RES_PHOTO_ERROR			23005
#define PHOTO_TO_NEG_ERROR			23006
#define NEG_TO_GHOST_ERROR			23007
#define FILE_DEL_ERROR				23008
#define WRONG_CARD_APPL_STATUS		23009
#define MERGE_FILE_ERROR			23010
#define INVALID_REJECT_REASON		23011

/* Error codes used by SSC/GQD services */

/* CREATE_PROB_REC */
#define	PROBL_NO_NULL				28501
#define PROB_DATE_NULL				28502
#define INVALID_REASON_CODE			28503

/* GET_PROB_DATA */
#define NO_PROBL_REC				28504

/* SET_APPL_STAT */
#define RET_INVAL_AFIS_FLAG			28505
#define NOT_ALL_PROB_CLOSED			28506

/* Error codes used by AAS services */

/* LOOKUP_UPDATE */
#define NULL_TIME_INTERVAL			41501
#define DEFER_CONSTRAINT_ERROR		41502
#define NO_TABLE					41503
#define NO_DOWNLOAD					41504
#define LEGACY_PUT_ERROR			41510
#define SEQ_VAL_ERROR				41511
#define NO_FILE						41512

/* SIGNON */
#define LOGON_ERROR					41505
#define NO_SUCH_USER				41506
#define BRANCH_NOT_MATCH			41507

/* SIGNOFF */
#define ALREADY_LOG_OUT				41508
#define INVALID_WS_ID				41509

/* Error codes used by PCS services */

/* UPDATE_GSCB_PAY	*/
#define INCORRECT_AMT_ERROR			30490

/* Error codes used by ATL COM */
#define TPALLOC_RESPONSE_BUF_FAIL	3001
#define TPALLOC_SEND_BUF_FAIL		3002
#define REG_READ_ERROR				3003
#define INVALID_REG_ENTRY_VALUE		3004
#define TPINIT_FAIL					3005
#define TPCALL_FAIL					3006
#define CREATE_COM_INSTANCE_FAIL	3007
#define TPALLOC_TPINFO_FAIL			3008
#define BAD_BRANCH_CODE_FAIL		3009
#define COLLECTION_EMPTY			3010
#define FILE_OPEN_W_ERROR			3011
#define FILE_OPEN_R_ERROR			3012
#define FILE_WRITE_ERROR			3013
#define FILE_READ_ERROR				3014
#define INVALID_USRID_PASSWD		3015
#define GET_COMP_NAME_FAIL			13001
#define GET_USER_NAME_FAIL			13002
#define GSCB_DOWN					13003				
#define APPL_ID_PRESENT				13004
#define NO_IMG_REC					13005
#define NO_IMG_REC_KPT				13006
#define INVALID_INPUT_PARA			13007
#define ENQ_FLAG_INVALID			13008

/* Legacy enquiry transaction codes */

#define TXN_GET_KPT					100
#define TXN_AFIS					101
#define TXN_JPJ_DL					102
#define TXN_JPJ_BL					103
#define TXN_SUMM_DL					104
#define TXN_SUMM_PAY				105
#define RESPONSE_MESSAGE_SIZE		161

#define APPLREMARKS_SIZE			151



//IJPN
#define SSC_BRANCH_CODE_SIZE		7
#define SPONSOR_IDTYPE_SIZE			3
#define SPONSOR_IDNO_SIZE			16
#define SPONSOR_NAME_SIZE			51
#define ADDRESS1_SIZE				31
#define ADDRESS2_SIZE				31
#define ADDRESS3_SIZE				31
#define POSTCODE_SIZE				6
#define CITYCODE_SIZE				5
#define STATECODE_SIZE				3
#define LICTYPE_SIZE				4
#define LICCLASS_SIZE				3
#define LICUSAGECODE_SIZE			3
#define PASSPORTNO_SIZE				16
#define COLLECTION_CENTER_SIZE		7
#define IMM_REFNO_SIZE				31
#define JPN_REMARKS_SIZE			61
#define PT_NO_SIZE					16
#define APPR_REFNO_SIZE				41
#define FILE_REFNO_SIZE				51
#define TXN_CODE_SIZE				4
#define CUR_LONG_NAME_SIZE			151
#define IDNO_SIZE					16
#define CONTACT_NO_SIZE				31
#define DELWAT_REMARKS_SIZE			201
#define CUR_SHORT_NAME_SIZE			21
#define BIRTH_CERT_NO_SIZE			16
#define SPONSER_CUR_LONG_NAME		181
#define PTWNO_SIZE					16
#define LEGACY_APPLID_SIZE			25
#define LEG_TXNCODE_SIZE			5


//IJPN

//IJPN- MTS ERROR CODES
#define SAFE_ARRAY_REQ_ALLOC_FAILED		4001
#define SAFE_ARRAY_RESP_ALLOC_FAILED	4002
#define SAFE_ARRAY_REQ_ACCESS_FAILED	4003
#define SAFE_ARRAY_RESP_ACCESS_FAILED	4004
#define MTS_EXECUTE_CALL_FAILED			4005
#define MTS_COM_EXCEPTION				4006

/* Added on 23 MAR 2005 for IJPN */
#define PERMITNO1_SIZE		    13
#define COLLJPNBRANCHCODE_SIZE   9 // Added on 28 MAR 2005 for IJPN
#define BATCHNO_SIZE			23 // Added on 28 MAR 2005 for IJPN
#define BIRTHDISTRICTCODE_SIZE	 5 // Added on 28 MAR 2005 for IJPN
#define APPL_COLLCENTER_SIZE	 7 // added on 4th May 2005 for IJPN 
#define APPRREFNO_SIZE			31 // Added on 5th May 2005 for IJPN
#define PT_WNO_SIZE				16 // Added on 17th May 2005 for IJPN
#define PINDAN_CHK_LST_SIZE		21 // Added on 17th May 2005 for IJPN   //3rd June 2020, Added by Salmi for DLKP


#define FILEREFNO_SIZE			51
#define TXNCODE_SIZE			 40...
#define CURRENTLONGNAMESIZE	   151 
#define CONTACTNO_SIZE			31
#define DELWAT_REMARKS_SIZE	   201


#define DEBTOR_NAME_SIZE			101  /*  Added on 15th Nov 2005 for IJPN*/
#define ADDRESS_LINE4_SIZE          101  /*  Added on 15th Nov 2005 for IJPN*/
#define TEL_CMN_NO_SIZE				13   /*  Added on 15th Nov 2005 for IJPN*/
#define REASON_CHQ_DISHON_SIZE      201  /*  Added on 15th Nov 2005 for IJPN*/

/* Added for IJPN LI's on 9th July 2005 */
#define LI_REPLY_MSG_SIZE				10000+1
#define LI_ERROR_MSG_SIZE				1024+1

#define EXTREMARKS_SIZE			61 // included on 24/11/2005 for IJPN for 209000 message

/* New defination for CLMS 22/08/2005*/

#define CLMS_TRANSACTION_CODE_SIZE 6
#define CLMS_TRANSACTION_TYPE_SIZE 81
#define CLMS_AID_SIZE 33
#define CLMS_APPVERNO_SIZE 5
#define CLMS_RETURN_CODE_SIZE 6
#define CLMS_RETURN_STATUS_SIZE 51
#define CLMS_CHIPSN_SIZE 19
#define CLMS_DATETIME_SIZE 15

#define CLMS_TNGOSN_SIZE 11
#define CLMS_CPID_SIZE 11
#define CLMS_PPID_SIZE 11
#define CLMS_APPQTY_SIZE 3
#define CLMS_AIDLIST_SIZE 251
#define CLSM_CAPPSTATCODE_SIZE 6

/* New defination for CLMS 22/08/2005 */


#define RED_CARD_APPL_IN_PROGRESS	10400

/* xpress card definitions, included on 26/01/07 */ 

#define CPFNAME_SIZE	21
#define CGFNAME_SIZE	26
#define CDFNAME_SIZE	26
#define MEPS_PANNO_SIZE	17
#define TNG_SERNO_SIZE	11
#define PURSE_ID_SIZE	11

/* added on 20/12/2016 for distributed printing service */

#define CHIPSN_SIZE 19

////////////////////////////////Added by Salmi for Branch Service compiler///////////////////////////////
#define PASSPORTISSUER_SIZE			251 //CR 165 Release 3.24 Added by Subramaniam.P  on 19th Apr,2012
#define PASSPORTISSUEPLACE_SIZE		251 //CR 165 Release 3.24 Added by Subramaniam.P  on 19th Apr,2012
////////////////////////////////Added by Salmi for Branch Service compiler//////////////////////////////

/* This file is included here to compensate for the movement of */
/* function prototypes from here to gscbio.h.  Double inclusion */
/* will not happen												*/
#include "gscbio.h"

#endif

