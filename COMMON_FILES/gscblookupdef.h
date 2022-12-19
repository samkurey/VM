/* $Header:   F:/PVCS_GMPC/archives/GSCB_SERVICES/COMMON_FILES/gscblookupdef.h-arc   1.0   Aug 20 2003 09:52:38   ShivamP  $ */

/********************************************************************/
/* File Name   : gscblookupdef.h                                    */
/* Author      : Vageesh Patwardhan, Sangeeta Natu                  */
/* Description : This file contains common #defines used for lookup */
/*               table codes                                        */
/********************************************************************/

#ifndef _GSCBLOOKUPDEF_
#define _GSCBLOOKUPDEF_

/* codes for document types */
#define ID_TYPE_KPT				90 
#define ID_TYPE_KPP				91
#define ID_TYPE_KPK				94
#define ID_TYPE_MILITARY		92
#define ID_TYPE_POLICE			93
#define ID_TYPE_TEMP			6
#define ID_TYPE_GMPC			95
#define ID_TYPE_BIRTH_CERT		1
#define ID_TYPE_PASSPORT		2
#define ID_TYPE_BORANG_W		7	/*Birth Certificate issued to Malaysian Born Overseas  */
#define ID_TYPE_SAA				10  /*Child Adoption Certificate (DAFTAR ANAK ANGKAT) */
#define ID_TYPE_PTW				26  /*Citizenship Status Acknowledgement (PENGESAHAN TARAF KE WGANEGARAAN) */
#define ID_TYPE_SWN				3	/*Citizenship Certificate (SIJIL WARGA NEGARA) */
#define ID_TYPE_OTHER			99  /*Not to be used*/
/*Added on 04042002 after told by Ms. Soraya*/
#define ID_TYPE_ENTERANCE_PERMIT	30  /*Not to be used*/

/* codes for transaction types */
#define TXN_12YO_BL				101		/* 12YO Born Locally		*/
#define TXN_12YO_BO				102		/* 12YO Born Overseas		*/
#define TXN_12YO_AC				103		/* 12YO Adopted Child		*/
#define TXN_12YO_BO_PR			104		/* 12YO Born Overseas PR	*/
#define TXN_12YO_OA				105		/* 12YO Orang Asli			*/
#define TXN_12YO_GREEN			106		/* 12YO Green Card			*/


#define TXN_FT_MY_BL			201		/* First Time Malaysian Born Locally	*/
#define TXN_FT_MY_BO			202		/* First Time Malaysian Born Overseas	*/
#define TXN_FT_PR				203		/* First Time PR						*/

#define TXN_FT_MO_BC			204		/* First Time Missed Opex (with BC)		*/
#define TXN_FT_MO_KPK			205		/* First Time Missed Opex (with KPK/WN) */
#define TXN_FT_MO_PM_BC			206		/* First Time Missed Opex Police/Military(with BC)	*/
#define TXN_FT_MO_PM_KPK		207		/* First Time Missed Opex or PR Police/Military (with KPK/WN)	*/

#define TXN_FT_LA_BC			208		/* First Time Late Appln Malaysian (with BC)	*/
#define TXN_FT_LA_BO			209		/* First Time Late Appln Malaysian born overseas*/
#define TXN_FT_LA_AC			210		/* First Time Late Appln Malaysian Adopted Child*/
#define TXN_FT_OA				211		/* First Time Orang Asli						*/
#define TXN_FT_LA_PR			212		/* First Time Late Appln for PR					*/
#define TXN_FT_SI				213		/* First Time Singaporean (With BC)				*/
#define TXN_FT_SI_BIRU			214		/* First Time Singaporean (PT/PTW) KP BIRU		*/
#define TXN_FT_GREEN			215		/* First Time Green Card						*/

#define TXN_CON_NORM			300		/* Conversion from Laminated KPT to GMPC (Normal)	*/
#define TXN_CON_REN_18			301		/* Conversion from Laminated KPT to GMPC (Renewal for Rule 18) */
#define TXN_CON_EM_ORIG_CHNG	302		/* Conversion from Laminated KPT to GMPC (due to East Malaysia Origin Change)	*/
#define TXN_CON_LOSS			303		/* Conversion from Laminated KPT to GMPC (due to loss of KPP/KPT)	*/
#define TXN_CON_DAMAGE			304		/* Conversion from Laminated KPT to GMPC (due to damage of KPP/KPT)	*/
#define TXN_CON_ADDR_CH			305		/* Conversion from Laminated KPT to GMPC (due to address change)	*/
#define TXN_CON_NAME_CH			306		/* Conversion from Laminated KPT to GMPC (due to name change)	*/
#define TXN_CON_RE_ISSUE		307		/* Conversion from Laminated KPT to GMPC (due to re-issue)		*/
#define TXN_CON_GREEN_TO_RED	308		/* Conversion from Laminated KPT to GMPC (due to citizenship change green to red)	*/
#define TXN_CON_GREEN_TO_BLUE	309		/* Conversion from Laminated KPT to GMPC (due to citizenship change green to blue)	*/
#define TXN_CON_APJ_REM			310		/* Conversion from Laminated KPT to GMPC (due to removal of APJ)	*/
#define TXN_CON_APJ_ADD			311		/* Conversion from Laminated KPT to GMPC (due to addition of APJ)	*/
#define TXN_CON_ERROR_CARD		312		/* Conversion from Laminated KPT to GMPC (due to error on card)	*/
#define TXN_CON_RELIGION_CHNG	313		/* Conversion from Laminated KPT to GMPC (due to religion change)	*/
#define TXN_CON_PRB_APPL		314		/* Conversion from Laminated KPT to GMPC (due to application for PRB)	*/
#define TXN_CON_POLICE			315		/* Conversion from Laminated KPT to GMPC (for police/ex-police)	*/
#define TXN_CON_RED_TO_BLUE		316		/* Conversion from Laminated KPT to GMPC (due to citizenship change red to blue) */
#define TXN_CON_BLUE_TO_RED		317		/* Conversion from Laminated KPT to GMPC (due to citizenship change blue to red) */
#define TXN_CON_GREEN			318		/* Conversion Green Card */
#define TXN_CON_KPTC_GMPC		350     /* Conversion from KPTC to GMPC  */
#define TXN_CON_KPTNO_CHANGE	321     /* Conversion due to KPTNO change added on 11/10/2002 */

#define TXN_REPL_NOR			400		/* Replacement					*/
#define TXN_REPL_RULE18			401		/* Replacement for (Rule 18)	*/
#define TXN_REPL_EMO_CHNG		402		/* Replacement for (East malaysia origin change)	*/
#define TXN_REPL_LOSS			403		/* Replacement due to loss	*/
#define TXN_REPL_DMG			404		/* Replacement due to Damage*/
#define TXN_REPL_ADDR_CHNG		405		/* Replacement due to Address Change*/
#define TXN_REPL_NAME_CHNG		406		/* Replacement due to Name Change	*/
#define TXN_REPL_RE_ISSUE		407		/* Replacement due re-issue			*/
#define TXN_REPL_GREEN_TO_RED	408		/* Replacement due to Citizenship Change green to red */
#define TXN_REPL_GREEN_TO_BLUE	409		/* Replacement due to Citizenship Change green to blue	*/
#define TXN_REPL_APJ_REM		410		/* Replacement due to removal of APJ	*/
#define TXN_REPL_APJ_ADD		411		/* Replacement due to addition of APJ	*/
#define TXN_REPL_CARD_ERR		412		/* Replacement due to Error on Card		*/
#define TXN_REPL_RELIGION_CHNG	413		/* Replacement due to religion change	*/
#define TXN_REPL_PRB_APPL		414		/* Replacement due to application for PRB	*/
#define TXN_REPL_EX_MILITARY	415		/* Replacement txn for ex-military	*/
#define TXN_REPL_RED_TO_BLUE	416		/* Replacement due to Citizenship Change red to blue	*/
#define TXN_REPL_BLUE_TO_RED	417		/* Replacement due to Citizenship Change blue to red	*/
#define TXN_REPL_GREEN			418		/* Replacement Green Card */
#define TXN_REPL_UNCLAIMED_CARD	419		/* Replacement of Unclaimed Card */
#define TXN_REPL_CHIP_CARD_DMG	420		/* Replacement of Chip/Card Damage*/
#define TXN_REPL_KPTNO_CHANGE	421     /* Replacement due to KPTNO change added on 11/10/2002 */
#define TXN_REPL_B_DATE_CHANGE	424     /* Replacement due to Birthdate Change added on 22nd Jyly,2018 */

#define TXN_DL_UPD				501		/* Update of chip for DL		*/
#define TXN_IMM_UPD				502		/* Update of chip for IMM		*/
#define TXN_ADDR_UPD			503		/* Update of chip for Address	*/
#define TXN_MISC_UPD			504		/* Update of chip miscellenous	*/
#define TXN_PDRM_UPD			505		/* Update of chip for PDRM summons */
#define TXN_JPJ_SUMM_UPD		506		/* Update of chip for JPJ summons */

#define TXN_PDL_NEW				601		/* PDL New		*/
#define TXN_PDL_RENEW			602		/* PDL renew	*/
#define TXN_PDL_CLASS_ADD		603		/* PDL add class*/
#define TXN_PDL_REPL			604		/* PDL replace	*/
#define TXN_PRB_NEW				605		/* PRB New		*/
#define TXN_PRB_CLASS_ADD		606		/* PRB add class*/
#define TXN_PRB_REPL			607		/* PRB replace	*/
#define TXN_CDL_NEW				608		/* CDL New		*/
#define TXN_CDL_RENEW			609		/* CDL renew	*/
#define TXN_CDL_CLASS_ADD		610		/* CDL add class*/
#define TXN_CDL_REPL			611		/* CDL replace	*/
#define TXN_PSV_NEW				612		/* PSV New		*/
#define TXN_PSV_RENEW			613		/* PSV renew	*/
#define TXN_PSV_CLASS_ADD		614		/* PSV add class*/
#define TXN_PSV_REPL			615		/* PSV replace	*/
#define TXN_GDL_NEW				616		/* GDL New		*/
#define TXN_GDL_RENEW			617		/* GDL renew	*/
#define TXN_GDL_CLASS_ADD		618		/* GDL add class*/
#define TXN_GDL_REPL			619		/* GDL replace	*/
#define TXN_PRN_MDL				620		/* Print MDL	*/

#define TXN_ISSUANCE			701		/* Card Issuance	*/
#define TXN_LOAD_DL				702		/* Load DL info		*/
#define TXN_UNCLAIMED_CARDS		704		/* Cards Unclaimed 	*/

#define TXN_LOAD_JPJ_SUMM		801		/* Load JPJ summons		*/
#define TXN_LOAD_PDRM_SUMM		802		/* Load PDRM summons	*/

#define TXN_DISHONOURED_CHK		900		/* Payment of dishonoured cheque */
#define TXN_TMP_ID_LOSS			901		/* Loss of temp id	*/
#define TXN_DISHONOURED_CHK_JPN	902		/* Dishonoured check JPN	*/
#define TXN_DISHONOURED_CHK_JPJ	903		/* Dishonoured check JPJ	*/
#define TXN_PRN_CHIP			904		/* Print of chip contents	*/
#define TXN_LOSS_ID				905		/* Loss of Id	*/ /* commented as per vasanth's req*/
//#define TXN_PRN_KP11			906		/* Print of KP 11 */
#define TXN_PRINT_MDL			907		/* This is same as 620 */
#define TXN_PRN_KP15			908		/* Print of KP 15 */

#define TXN_PRN_KP11			914		/* Print of KP 11 */

/* Relation codes */
#define FATHER					1
#define MOTHER					2
#define	STEP_FATHER				3
#define GUARDIAN				5
#define	SIBLING					6
#define GRANDFATHER				7
#define GRANDMOTHER				8
#define	UNCLE					9
#define AUNTY					10
#define COUSIN					11
#define	OTHER					99

/* codes for service ids */

#define VERIFY_APPNT_ID 			1
#define GET_APPNT_KPT_ID			2

#define QUAL_CHECK_ID				3
#define JPN_QUAL_CHECK_ID			4
#define JPJ_QUAL_CHECK_ID			5
#define GET_JPN_DATA_ID				6
#define GET_JPJ_DATA_ID				7


#define GET_APPNT_DATA_ID			8
#define GET_APPL_DET_ID				9
#define TERMINATE_APP_ID			10

#define CREATE_PROB_REC_ID			11
#define CREATE_APPLNT_ID			12
#define CARD_ENQ_ID					13

#define GET_CARD_DET_ID				14
#define UPD_CARD_DET_ID				15
#define CARD_ISSUANCE_ID			16
#define CARD_REPRINT_ID				17
#define DESTROY_OLD_DOC_ID			18

#define SIGNON_ID					19
#define SIGNOFF_ID					20
#define USER_MAINT_ID				21
#define LOGIN_RESET_ID				22
#define GET_USER_TASKS_ID			23

#define END_SESSION_ENQ_ID			24
#define REVENUE_COL_ENQ_ID			25
#define UPDATE_GSCB_PAY_ID			26
#define END_SESSION_DAY_ID			27

#define CARD_PRODUCTION_ID			28

#define JPN_UPDATE_ID				29
#define JPJ_UPDATE_ID				30
#define UPD_LEGACY_STAT_ID			31
#define LOOKUP_TBL_UPD_ID			32
#define ACL_API_ID					33
#define GET_IMM_DATA_ID				34
#define IMM_UPDATE_ID				35
#define SET_APPL_STAT_ID			36
#define GET_PROB_DATA_ID			37
#define ENQ_GMPC_TXN_ID				38
#define GMPC_CHECK_ID				39 //commented on 28/09/2015
#define JPN_KP13_UPD_ID				39 // modified on 28/09/2015
#define ENQ_JPJ_SUMM_ID				40
#define GET_PDRM_DATA_ID			41
#define PDRM_UPDATE_ID				42
#define JPN_PERSON_INQ_ID			43
#define GENERATE_KPT_ID				44
#define GET_PROB_REC_ID				45
#define GET_PROB_DETAIL_ID			46
#define REV_GMPC_APPL_ID			47
#define PAY_AMEND_LOG_ID			48
#define VERIFY_DOCSERNO_ID			49
#define GET_JPJ_SUMMONS_ID			52
#define GET_SURRENDER_ID			53
#define UPD_SURRENDER_ID			54
#define GET_SURREND_DET_ID			55
#define GET_AFIS_IMAGES_ID			56 /* ADDED ON 05/07/2002 */

#define KPP_GATE_INTERFACE_ID		50
#define GSCB_TIMER_ID				51
#define GET_LEGACY_STAT_ID			71

/* Added for IJPN  */
#define UPD_LATE_REG_ID				59 /* Added on 21/02/2005 for IJPN */
#define DOC_IMG_UPD_ID				72 /* Added on 22/02/2005 for IJPN */
#define JPN_EXTRACT_UPD_ID			73 /* Added on 22/02/2005 for IJPN */
#define FASTLANE_PRIORITY_ENQ_ID	75 /* Added on 10/03/2005 for IJPN */
#define JPN_DATA_MAINT_ID			19 /* Added on 14/03/2005 for IJPN */
#define GET_LATE_REG_ID				58 /* Added on 16/03/2005 for IJPN */
#define MYKID_KPTC_ISSUANCE_ID		20 /* Added on 30/03/2005 for IJPN */
#define JPN_STATUS_UPD_ID			77 /* Added on 02/06/2005 for IJPN */
/* end IJPN */

/* Added for KP12Online CR No:SKP023/CR/2019  Release 3.45 Added by Subramaniam.P*/
#define JPN_KP12_ONLINE_INQ_ID		58
#define JPN_KP12_ONLINE_UPD_ID		75
/* Added for KP12Online CR No:SKP023/CR/2019  Release 3.45 Added by Subramaniam.P*/

/* PCS Service */
#define RESEND_PAY_INFO_ID			60
#define CONFIRM_PAY_ID				61
#define PAYIN_SLIP_UPD_ID			62
#define CREATE_DEBTOR_ID			63
#define DOWNLOAD_DEBTOR_ID			64
#define UPDATE_AMT_CONF_ID			65
#define UPD_CASH_SUMM_ID			66


/* Licence types */
#define CDL_LIC						"CDL"
#define GDL_LIC						"GDL"
#define PSV_LIC						"PSV"
#define PRB_LIC						"PRB"
#define PDL_LIC						"LDL" //"PDL"
//#define LDL_LIC						"LDL"

/* Category of Owner values */
#define	PR							'0'
#define MALAYSIAN					'1'
#define POLICE						'2'
#define ARMY						'3'
#define OTHERS						'9'


/* GMPC blacklist reason codes */
#define BL_REPL_RULE_18				9		/* Card is blacklisted due to Replacement under Rule 18 */
#define BL_CARD_LOST				10		/* Card is blacklisted due to Loss */
#define BL_CARD_DMG					11		/* Card is blacklisted due to Damage */
#define BL_CARD_ADDR_CHG			12		/* Card is blacklisted due to Address Change */
#define BL_CARD_NAME_CHG			13		/* Card is blacklisted due to Name Change */
#define BL_CARD_CARD_ERR			14		/* Card is blacklisted due to Card Error */
#define BL_CARD_SURRENDER			15		/* Card is blacklisted due to Surrender */

/* GMPC user types */
#define GSCB_ADMIN					'B'
#define GSC_ADMIN					'G'
#define NORMAL_USER					'N'

/* Added on 17/05/2005 for IJPN */
#define AFIS_UPDATE_ID			     76

#define GET_IMM_PR_INFO_ID			57 //JRS 147

#define BRANCH_REFIRE_ID			78
#define GET_SUPERSAM_DET_ID			99

#define EPAYMENT_UPDATE_ID			79  // added on 16/05/06

#define TMP_CASH_SUMM_ID			80  // added on 24/05/06

#define JPJ_UPD_CASH_SUMM_ID		81  // added on 01/06/06

#define XPRESS_UPDGSCB_ID			88  // added on 26/01/07

#define GET_CPF_DATA_ID				110  // added on 29/12/2009

#define SUPER_SAM_PIN_PIC_ID		111  // added on 18/05/2011

#define XPRESS_CPF_BACKUP_ID		112  // added on 18/05/2011

#define JPJ_UPD_CALLER_ID    		115  // added on 06/02/2015

#define JPNHG3_PYMT_ENQ_ID			93   // Added on 04/05/2016 

#define JPNHG3_PYMT_REV_UPD_ID		94   // Added on 05/05/2016 

#define JPNHG3_PYMT_REV_UPD_ID		94   // Added on 05/05/2016 

#define DPP2_CARD_INFO_UPD_ID		84   // Added on 27/12/2016 

#define APPL_12YRS_WEB_ID           120   //Added by Salmi on 9th June 2020, 12 Yrs Web

#define SET_JKIND_JPN_ID            121  //Added by Salmi on 31 Mar 2021, My Kas Tamat Tempoh

#define GET_PROB_REC_L2_ID          122  //Added by Salmi on 31 Mar 2021, My Kas Tamat Tempoh


#endif /* _GSCBLOOKUPDEF_ */


