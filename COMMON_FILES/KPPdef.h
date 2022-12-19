/* $Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/COMMON_FILES/KPPdef.h-arc   1.0   Aug 20 2003 09:54:24   ShivamP  $ */
/********************************************************************/
/* File Name	:KPPdef.h										    */
/* Author		:Vageesh Patwardhan									*/
/* Description	:Contains defines for KPP*Gate Interface			*/
/********************************************************************/



#ifndef _KPPDEF_
#define _KPPDEF_

/* Licence types */
#define CDL_LIC_T				'C'
#define GDL_LIC_T				'G'
#define PSV_LIC_T				'P'
#define PRB_LIC_T				'R'
#define PDL_LIC_T				'L'

/* #defines for AGENCY CODE */
#define JPN						1
#define JIM						2	
#define JPJ						3

/********************************************************************/
/* JPN Transaction Codes											*/
/********************************************************************/
#define LI_GET_JPN_DATA_12Y0				201005
#define	LI_GET_JPN_DATA_OFTA				201105
#define LI_GET_JPN_DATA_CON					201205
#define LI_GET_JPN_DATA_R18Y0				201305
#define LI_GET_JPN_DATA_REPL				201405
#define LI_GET_JPN_DATA_CUP					201505
#define LI_GET_APPLICANT_KPT				201605

#define LI_JPN_UPDATE_PAYMENT_INFO			201000
#define LI_ENQUIRE_1N_CHECK					201050
#define LI_GMPC_STATUS_UPDATE				201250		
#define LI_JPN_ADDRESS_UPDATE				201150
#define LI_JPN_ADDRESS_REVERSAL				201158
#define LI_GET_AFIS_IMG						201705
#define LI_JPN_CASH_SUMMARY					201100
#define LI_JPN_KPT_ONLINE_CHECK				201805
#define LI_JPN_PHONEIN_UPDATE				201450
#define LI_JPN_CANCEL_GMPC_UPD				201550
#define LI_GET_APPLICANT_INFO				204005
#define LI_GENERATE_KPT						201905
#define LI_JPN_MISSED_OPEX_UPD				201650
#define LI_JPN_UPD_AUDIT_TRAIL				201350
#define LI_GET_GMPC_SURRENDER_INFO			204105
#define LI_UPD_GMPC_SURRENDER_INFO			201750
#define	LI_UPD_CHANGE_KPTNO					201850

/* added on 29th April 2005 for IJPN */
#define LI_UPD_MYKID_ISSUANCE				208250
#define LI_JPN_UPD_IC_DATA_MAINT			205050
#define LI_JPN_UPD_CITIZENSHIP_DATA_MAINT	205150
#define LI_JPN_UPD_IC_APPL_INFO_MAINT		205250
#define LI_JPN_UPD_EXTRACT_DET				208150
#define LI_JPN_UPD_FEE_INFO					205550
#define LI_UPD_CHANGE_NAME_GENDER			203850
#define LI_NRS_UPDATE						201450 // included on 3/10/05 for IJPN
#define LI_MYKAD_ISSUANCE					206050 // included on 5/10/05 for IJPN
#define LI_CREATE_KPT_RECORD     			201950 // included on 17/11/05 for IJPN
#define LI_JPN_EXTUPD_MISCL_PAYMENT			209000 // included on 25/11/05 for IJPN
#define LI_KP13_UPD							208350 // included on 19/10/15 for Release 3.30

/* end IJPN */

/********************************************************************/
/* JPJ Transaction Codes											*/
/********************************************************************/
#define LI_GET_JPJ_DATA_DL				202005
#define LI_GET_JPJ_DATA_BL				202105
#define LI_SUMMONS_PAYMENT_UPDATE		202000
#define LI_JPJ_ADDRESS_UPDATE			202050
#define LI_ID_TO_KPT_UPDATE				202150
#define LI_SUSPENSION_UPDATE			202250
#define LI_GET_SUMMONS_PAYMENT			202305
#define LI_REVOCATION_UPDATE			202350
#define LI_DOWNLOAD_SUMMONS				202405
#define LI_NEW_LICENSE_UPDATE			202450
#define LI_LICENSE_RENEWAL_UPDATE		202550
#define LI_ADD_NEW_CLASS_UPDATE			202650
#define LI_JPJ_GMPC_STATUS_UPDATE		202950
#define LI_JPJ_CASH_SUMMARY				202200
#define LI_JPJ_UPDATE_PAYMENT_INFO		202100

#define LI_ENQ_DRIVING_LICENCE			202205	// Sofi 21/11/2000
#define LI_VEHICLE_BL_CHECK				202505
#define LI_OWNER_VEHICLE_CHECK			202605
#define LI_OWNER_NAME_CHECK				202705
#define LI_ENQ_SUMMONS_DETAILS			202805
#define LI_UPDATE_SUMMONS_FILE			202850
#define LI_UPDATE_AUDIT_LOG_FILE		203050
#define LI_UPDATE_JPJ_ENDORSEMENT		203150
#define LI_UPDATE_JPJ_NAME_CHANGE		203250
#define LI_UPDATE_LIC_REPLACEMENT		202750
#define LI_UPDATE_GMPC_SURRENDER		203550
#define LI_UPDATE_LIC_EXPIRY_DATE		203350
#define LI_UPDATE_LIC_COURT_SUSP		203450
#define LI_UPDATE_NEW_CLASS_PSV_GDL		203650
#define LI_UPDATE_NEW_OWNER_CAT			203750

	 
/********************************************************************/
/* JIM Transaction Codes											*/
/********************************************************************/
#define LI_DOWNLOAD_PASSPORT_INFO		191005
#define LI_UPDATE_JIM_INFO_LOAD			191050
#define LI_UPDATE_IMM_AUDIT				191150
#define LI_IMM_PR_KPT_UPDATE			191250 // included on 16/09/05 for IJPN
#define LI_GET_PP_INFO					191105
#define LI_GET_IMM_PR_INFO				191205



/********************************************************************/
/* Misc Transaction Codes											*/
/********************************************************************/
#define LI_JPN_MASTER_DOWNLOAD			200010
#define LI_JPN_DISTRIBUTION_DOWNLOAD	200011
#define LI_JPJ_MASTER_DOWNLOAD			200020
#define LI_JPJ_DISTRIBUTION_DOWNLOAD	200021
#define LI_JIM_MASTER_DOWNLOAD			190010
#define LI_JIM_DISTRIBUTION_DOWNLOAD	190011

/********************************************************************/
/* REVERSAL MESSAGE Transaction Codes											*/
/********************************************************************/
#define LI_JPN_REV_UPDATE_PAYMENT		201008
#define LI_JPJ_REV_NEW_LICENSE			202458
#define LI_JPJ_REV_RENEWAL				202558
#define LI_JPJ_REV_ADD_CLASS			202658
#define LI_JPJ_REV_SUMMON_PAYMENT		202008
#define LI_JPJ_REV_UPDATE_PAYMENT		202108
#define LI_JPJ_REV_ID_TO_KPT_UPD		202158
#define LI_JPJ_REV_LIC_REPL				202758
#define LI_JPJ_REV_PSV_GDL_CLASS		203658


/* LI_UPDATE_REPLY to be used for retrieving update replies */
#define LI_GET_UPDATE_REPLY				999999
#define LI_GET_REJECT					888888

/* new message type to test for legacy status - 17/04/2001*/
#define LI_JPN_CHECK_STATUS				200015
#define LI_JPJ_CHECK_STATUS				200025
#define LI_JIM_CHECK_STATUS				190015

/* defines for msg_type*/
#define INQ_REQ					1
#define INQ_REPLY				2
#define UPD_REQ					5
#define UPD_REPLY				6
#define REJ_MSG					10
#define IMG_REQ					15
#define IMG_REPLY				16
#define AFIS_SEARCH_REPLY		20
#define AFIS_VV_REPLY			21
#define INQ_MASTER				30
#define INQ_MASTER_REPLY		31
#define INQ_DIST				32
#define INQ_DIST_REPLY			33
#define UPD_CASH_SUMMARY   		40

/* defines for JPN update transaction types */
#define TXN_TYPE_JPN_UPDATE		1
#define TXN_TYPE_AFIS_1N		2


/*Misc #defines */
#define QUEUE_MANAGER_NAME "KPPGATE"

#define INQ_REQ_QUEUE_NAME		"PGATE_INQ"
#define INQ_REPLY_QUEUE_NAME	"PGATE_INQREPLY"
#define UPD_REQ_QUEUE_NAME		"PGATE_UPD"
#define UPD_REPLY_QUEUE_NAME	"PGATE_UPDREPLY"
#define LOOKUP_REQ_QUEUE_NAME	"PGATE_DLOADREQ"
#define LOOKUP_REPLY_QUEUE_NAME	"PGATE_DLOADREPLY"
#define REJECT_QUEUE_NAME		"PGATE_REJECT"

#define MESSAGE_HEADER_SIZE		786
#define MSG_ID_SIZE				25
#define TRANS_CODE_SIZE			7
#define FIN_DATA_SIZE			200
#define FIELD_ID_SIZE			7
#define JPJ_DATE_SIZE			5
#define TYPE_CHAR_ARR			1
#define TYPE_CHAR				2



/* This define is required since the sizes of kpt number in legacy and GMPC vary*/
#define LEGACY_KPT_SIZE			13

/* defines for reply indicator in reply message header */
#define LI_HIT					0 /* To VV or Reject */
#define	LI_NO_HIT				1 /* Approved */
#define LI_OK					9
#define LI_WARNING				10
#define LI_REC_NOT_FOUND		12
#define LI_NOT_OK				15
#define LI_RESERVE				16
#define LI_COMM_ERROR			99
#define LI_INVALID_AGENCY_ID	20
#define LI_INCON_MSG_TYPE		21	

/* defines for image indicator */
#define IMAGE_IND_JPEG			1
#define IMAGE_IND_JPEG_DB2		2
#define IMAGE_IND_RFP_MINU		21
#define IMAGE_IND_LFP_MINU		26
#define IMAGE_IND_RFP_IMAGE		11
#define IMAGE_IND_LFP_IMAGE		16
#define IMAGE_IND_RFP_NORM_MINU	1	
#define IMAGE_IND_LFP_NORM_MINU	6
#define IMAGE_IND_RFP_MATRIX	31
#define IMAGE_IND_LFP_MATRIX	36

/* default value of region indicator. points to test resion */
#define TEST_IND				"9" 

/* size of license type returned by legacy 3 byte data + null terminator */
#define LEGACY_LIC_TYPE_SIZE	 4

/* maximum size of low res photo to be sent to legacy */
#define MAX_LOW_RES_PHOTO_SIZE	2900

/* address size for legacy */
#define LEGACY_ADDRESS_SIZE		31

/* The position of Reply indicator in the Legacy response */
/* after which the error message starts					  */
#define REPLY_IND_POSITION		425

#endif /* ifdef KPPDEF */
