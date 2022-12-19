/********************************************************************************/
/* Filename    : li_jpn_upd_extract_det.h											*/
/* Author      : 													            */
/* Description : This file contains the structures for I/O buffers for the		*/
/*				 li_jpn_extract_det.	    								*/
/********************************************************************************/



#ifndef _LI_JPN_UPD_EXTRACT_DET_
#define _LI_JPN_UPD_EXTRACT_DET_


#define PROG_LOG_SIZE		sizeof(PROG_ACCESS_LOG_T)
#define APPL_EXCEP_LOG_SIZE sizeof(APPL_EXCEP_LOG_T)

#define ACTIVITY_CODE_SIZE		     11
#define EXTR_NAME_SIZE	       		151
#define EXTR_RELATION_CODE_SIZE		  3
#define DOC_SERNO_SIZE			     11
#define EXTREMARKS_SIZE				 61



			  
typedef struct li_upd_extract_det_req_s
{
	char ext_idno[ID_SIZE];
	char ext_idtype[ID_TYPE_SIZE];	
	char activitytypecode[ACTIVITY_CODE_SIZE];
	char legapplid[LEGAPPLID_SIZE];
	char ext_appldate[DATE_SIZE];
	char ext_typecode;
	char extr_idno[ID_SIZE];
	char extr_idtype[ID_TYPE_SIZE];
	char citizennationcode[CITIZEN_CODE_SIZE]; // Id issue country
	char extr_relationcode[EXTR_RELATION_CODE_SIZE];
	char extr_address1[ADDRESS_SIZE];
	char extr_address2[ADDRESS_SIZE];
	char extr_address3[ADDRESS_SIZE];
	char extr_postcode[POST_CODE_SIZE];
	char extr_statecode[STATE_CODE_SIZE];
	int  extr_citycode;
	char docserno[DOC_SERNO_SIZE];	// cert serial number
	char branchcode[BRANCH_CODE_SIZE];	//application place code
	char userid[USER_ID_SIZE];
	char timestamp[DATE_TIME_SIZE]; //last update date
	char extr_name[EXTR_NAME_SIZE];	
	char extremarks[EXTREMARKS_SIZE]; // included on 28/10/05

	//Added these fields for CR 253 for Release 3.24 on 08/05/2012
	char firsticissuedate[DATE_SIZE];
	char firsticissueplace[8+1];
	char additionalinfo[150+1];
	char jpnremark3[100+1];
	char extractortype;
	
}LI_UPD_EXTRACT_DET_REQ_T;


/* Function prototypes */

#if defined(__cplusplus)
extern "C" {
#endif

int li_jpn_upd_extract_det_p(LI_P_HEADER_T header, 
						  LI_UPD_EXTRACT_DET_REQ_T req,
						   unsigned char *msg_id,
						   int *error_code,
						   unsigned char *pReplyMsg,
						   int *iReplyMsgLen,
						   char *sErrMessage);

#if defined(__cplusplus)
}
#endif

#endif /* #ifndef LI_JPN_UPD_EXTRACT_DET	*/

