/* $Header: $ */
/****************************************************************************/
/* Filename    : get_late_reg_L2.pc											*/
/* Author      : Srinivasa Reddy								        	*/
/* Description : This file contains the database insert functions for the	*/
/*				 service GET_LATE_REG_L2.										*/
/****************************************************************************/

/* Include files	*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"
#include "get_late_reg_L2_io.h"
#include "get_late_reg_L2.h"
#include "userlog.h"

extern PROG_ACCESS_LOG_T prog_log;
extern APPL_EXCEP_LOG_T excep_log;
extern TXN_LOG_T tran_log;

EXEC SQL INCLUDE SQLCA;

char sqlmsg[SQL_MSG_SIZE];

int Get_Late_Reg_L2(GET_LATE_REG_L2_REQ_T *pReq, 
	  GET_LATE_REG_L2_RESP_T **pResp, long *pRespSize,void * ctx)
{

	GET_LATE_REG_L2_REQ_T *req;
	GET_LATE_REG_L2_RESP_T *resp,*new_resp,*orig_resp;
	char curr_date_time[DATE_TIME_SIZE];
	int ret_val = 0; int regn_dlewat_cnt = 0;
	char program_id[PROG_ID_SIZE];
	long resp_len = 0; int j=0;

	//char agencyonchip[AGENCYONCHIP_SIZE];
	REGN_DLEWAT_T *regn_dlewat;
	memset(&prog_log, 0, PROG_LOG_SIZE);
	memset(&excep_log, 0, APPL_EXCEP_LOG_SIZE);

	/* Initialize the variables used for logging	*/
	/* Get current date-time for logging			*/
	strcpy(curr_date_time, get_date_time());
	
	/* Assign request buffer	*/
	req = (GET_LATE_REG_L2_REQ_T *) pReq;
	//regn_dlewat = (REGN_DLEWAT_T *)(req + 1);

	/* Program access log variable */
	itoa(GET_LATE_REG_ID, program_id, 10);
	strcpy(prog_log.program_id, program_id);
	strcpy(prog_log.user_id, req->header.user_id);
	strcpy(prog_log.workstation_id, req->header.workstation_id);
	strcpy(prog_log.branch_code, req->header.branch_code);
	strcpy(prog_log.access_start_time, curr_date_time);
	strcpy(prog_log.remarks, "");
	strcpy(prog_log.application_id, req->header.application_id);
	
	/* Application exception log variable */
	strcpy(excep_log.program_id, program_id);
	strcpy(excep_log.user_id, req->header.user_id); 	
	strcpy(excep_log.workstation_id, req->header.workstation_id);
	strcpy(excep_log.branch_code, req->header.branch_code);
	strcpy(excep_log.error_date, curr_date_time);
	strcpy(excep_log.error_msg, "");
	strcpy(excep_log.application_id, req->header.application_id); 	
	excep_log.severity = '\0';	
	excep_log.termination_flag = 'Y';	

	strcpy(prog_log.remarks,"GET_LATE_REG_L2: Initiated");
	
	#ifdef DEBUG
		userlog("GET_LATE_REG_L2 : GET_LATE_REG_L2: Initiated");
		userlog(" ");
		userlog("GET_LATE_REG_L2 : req->header.application_id:%s:",req->header.application_id);
		userlog("GET_LATE_REG_L2 : req->header.branch_code:%s:", req->header.branch_code);
		userlog("GET_LATE_REG_L2 : req->header.service_id:%d:", req->header.service_id);
		userlog("GET_LATE_REG_L2 : req->header.user_id:%s:", req->header.user_id);
		userlog("GET_LATE_REG_L2 : req->header.workstation_id:%s:", req->header.workstation_id);
	#endif
	resp_len = GET_LATE_REG_L2_RESP_SIZE;

	/* Allocate response buffer	*/
	if(NULL == (resp = (GET_LATE_REG_L2_RESP_T *) malloc(resp_len)))
	{
		strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Memory allocation for response buffer failed");
		sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : ");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
		return RESP_BUF_ERR;
	}

	memset(resp, 0, GET_LATE_REG_L2_RESP_SIZE);

	resp->header = req->header;
			
	if((ret_val = check_header(req->header,ctx)) != SUCCESS)
	{
	 #ifdef DEBUG
			userlog("GET_LATE_REG_L2 : check header failed");
	 #endif
		strcpy(prog_log.remarks,"GET_LATE_REG_L2 : check header failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		*pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return ret_val;
	}
	#ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Check header Successful");
	#endif
	

	/* Begin a transaction */
	if(GMPC_GOOD != (ret_val = gscbbegin_trans(ctx)))
	{
		strcpy(prog_log.remarks,"GET_LATE_REG_L2 : gscbbegin_trans failed");
		strcpy(excep_log.error_msg,"GET_LATE_REG_L2 : gscbbegin_trans failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, BEGIN_TRAN_ERROR, (char *) resp, resp_len, 0);
		*pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return BEGIN_TRAN_ERROR;
	}

	#ifdef DEBUG
		userlog("GET_LATE_REG_L2 : gscbbegin_trans begins here ...");		
	#endif	
	

	#ifdef DEBUG
		userlog("GET_LATE_REG_L2 : Request buffer");
		userlog(" ");
		userlog("GET_LATE_REG_L2 : req->branchcode:%s:",req->branchcode);
		userlog("GET_LATE_REG_L2 : req->idtype:%s:", req->idtype);
		userlog("GET_LATE_REG_L2 : req->idno:%s:", req->idno);
		userlog("GET_LATE_REG_L2 : req->fromdate:%s:", req->fromdate);
		userlog("GET_LATE_REG_L2 : req->todate:%s:", req->todate);
		userlog("GET_LATE_REG_L2 : req->intvstatus:%c:", req->intvstatus);
		userlog("GET_LATE_REG_L2 : req->intvbranch:%s:", req->intvbranch);
		userlog(" ");
	#endif
	
	/* Check for input data, which value is coming in that is 
		branchcode or idno&idtype or fromdate,todate,intvstatus,intvbranch*/

	if(strcmp(req->branchcode, "\0") != 0)
	{
	  /* get the regn_dlewat table count for the req->branchcode */		
	  ret_val = get_regn_dlewat_branch_cnt(req->branchcode,&regn_dlewat_cnt,ctx);
	  if((ret_val != SUCCESS))
	  {
	   #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for Branchcode");
	   #endif
	    strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for Branchcode");
		sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for Branchcode");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

	   //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
		return ret_val;
	  }

	/* To Attach the regn_dlewat buffer to resp, 
			reallocate the resp buffer */

	orig_resp = resp;
	resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
	resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

	 if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc(resp_len)) == NULL)
	 {
		#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for Branchcode");
		#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
	 }
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);


	 ret_val = get_regn_dlewat_data_for_branchcode(regn_dlewat, req->branchcode, regn_dlewat_cnt,ctx);
	  if(ret_val != SUCCESS)
	  {
	   #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed");
	   #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
	    *pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
		return ret_val;
	  }
/*	
	 resp->get_late_reg_L2_cnt = regn_dlewat_cnt;

	 for(j=0;j<regn_dlewat_cnt;j++,regn_dlewat++)
	 {
	  #ifdef DEBUG
		userlog(" In the *sv.c file after the get_regn_dlewat_data_for_branchcode function call");
		userlog("applid %s\n", regn_dlewat->applid);
		userlog("filerefno %s\n", regn_dlewat->filerefno);
		userlog("txncode %s\n", regn_dlewat->txncode);
		userlog("idtype %s\n", regn_dlewat->idtype);
		userlog("idno %s\n", regn_dlewat->idno);
		userlog("currlongname %s\n", regn_dlewat->currlongname);
		userlog("address1 %s\n", regn_dlewat->address1);
		userlog("address2 %s\n", regn_dlewat->address2);
		userlog("address3 %s\n", regn_dlewat->address3);
		userlog("citycode %d\n", regn_dlewat->citycode);
		userlog("statecode %s\n", regn_dlewat->statecode);
		userlog("contactno %s\n", regn_dlewat->contactno);
		userlog("branchcode %s\n", regn_dlewat->branchcode);
		userlog("intvbranch %s\n", regn_dlewat->intvbranch);			
		userlog("intvdatetime %s\n", regn_dlewat->intvdatetime);
		userlog("intvstatus %c\n", regn_dlewat->intvstatus);
		userlog("regdate %s\n", regn_dlewat->regdate);
		userlog("timestamp %s\n", regn_dlewat->timestamp);
		userlog("userid %s\n", regn_dlewat->userid);
		userlog("delwatremarks %s\n", regn_dlewat->dlewatremarks);
		userlog("paneldes %c\n", regn_dlewat->paneldes);
		userlog("sendgscflag %c\n", regn_dlewat->sendgscflag);
	  #endif
	 } /* end of for 
*/
	} /* end of branchcode check */
	else if((strcmp(req->idtype, "\0") != 0) && (strcmp(req->idno, "\0") != 0))
	{
	  /* get the regn_dlewat table count for the req->idtype & req->idno */		
	  ret_val = get_regn_dlewat_id_cnt(req->idtype,req->idno,&regn_dlewat_cnt,ctx);
	   if((ret_val != SUCCESS))
	   {
	    #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for idtype");
	    #endif
	    strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
		sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for idtype");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

	    //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
	*pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
	*pResp = resp;
		return ret_val;
	   }

	/* To Attach the regn_dlewat buffer to resp, 
			reallocate the resp buffer */

	orig_resp = resp;
	resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
	resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

	if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc(resp_len)) == NULL)
	{
		#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for idtype");
		#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
	
			return RESP_BUF_ERR;
	}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);
		
		ret_val = get_regn_dlewat_data_for_idtype(regn_dlewat, req->idtype, req->idno, regn_dlewat_cnt,ctx);
		if(ret_val != SUCCESS)
		{
		#ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
			//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		}
/*	
	 resp->get_late_reg_L2_cnt = regn_dlewat_cnt;

	 for(j=0;j<regn_dlewat_cnt;j++,regn_dlewat++)
	 {
	  #ifdef DEBUG
		userlog(" In the *sv.c file after the get_regn_dlewat_data_for_idtype function call");
		userlog("applid %s\n", regn_dlewat->applid);
		userlog("filerefno %s\n", regn_dlewat->filerefno);
		userlog("txncode %s\n", regn_dlewat->txncode);
		userlog("idtype %s\n", regn_dlewat->idtype);
		userlog("idno %s\n", regn_dlewat->idno);
		userlog("currlongname %s\n", regn_dlewat->currlongname);
		userlog("address1 %s\n", regn_dlewat->address1);
		userlog("address2 %s\n", regn_dlewat->address2);
		userlog("address3 %s\n", regn_dlewat->address3);
		userlog("citycode %d\n", regn_dlewat->citycode);
		userlog("statecode %s\n", regn_dlewat->statecode);
		userlog("contactno %s\n", regn_dlewat->contactno);
		userlog("branchcode %s\n", regn_dlewat->branchcode);
		userlog("intvbranch %s\n", regn_dlewat->intvbranch);			
		userlog("intvdatetime %s\n", regn_dlewat->intvdatetime);
		userlog("intvstatus %c\n", regn_dlewat->intvstatus);
		userlog("regdate %s\n", regn_dlewat->regdate);
		userlog("timestamp %s\n", regn_dlewat->timestamp);
		userlog("userid %s\n", regn_dlewat->userid);
		userlog("delwatremarks %s\n", regn_dlewat->dlewatremarks);
		userlog("paneldes %c\n", regn_dlewat->paneldes);
		userlog("sendgscflag %c\n", regn_dlewat->sendgscflag);
	 #endif
	 } /* end of for 
*/
	} /* end of idtype and idno check */	
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	{
		/* fromdate , todate , intvstatus and intvbranch*/
		userlog("Inside the fromdate ,todate, intvstatus and intvbranch");
		/*ret_val = get_regn_dlewat_date_cnt(req->fromdate,req->todate,
						req->intvstatus,req->intvbranch,&regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_date_cnt(&regn_dlewat_cnt,req,ctx);

		if((ret_val != SUCCESS))
		{
	 	 #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 #endif
		 strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for fromdate & todate");
		 sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 excep_log.termination_flag = 'Y';
		 excep_log.severity = FATAL;
		 log_error(ctx);

		 //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		 *pRespSize = resp_len;
		 //memcpy(*pResp, resp, resp_len);
		 *pResp = resp;
		 return ret_val;
		}

		orig_resp = resp;
		resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
		resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

		if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc( resp_len)) == NULL)
		{
			#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for date");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
		}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);

		/* pass only this function values */
		 /*ret_val = get_regn_dlewat_data_for_date(regn_dlewat,req->fromdate,
			req->todate, req->intvstatus,req->intvbranch,regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_data_for_date(regn_dlewat, regn_dlewat_cnt, req,ctx);
		 if(ret_val != SUCCESS)
		 {
		  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		  #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		  //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
		    //memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		 }

	} /* end of fromdate and todate and intvstatus and intvbranch check */
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0'))
	{
		/* fromdate and todate and intvstatus */
		userlog("Inside the fromdate and todate and intvstatus");
		/*ret_val = get_regn_dlewat_date_cnt(req->fromdate,req->todate,
						req->intvstatus,'\0',&regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_date_cnt(&regn_dlewat_cnt,req,ctx);

		if((ret_val != SUCCESS))
		{
	 	 #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 #endif
		 strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for fromdate & todate");
		 sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 excep_log.termination_flag = 'Y';
		 excep_log.severity = FATAL;
		 log_error(ctx);

		 //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		 *pRespSize = resp_len;
		 //memcpy(*pResp, resp, resp_len);
		 *pResp = resp;
		 return ret_val;
		}

		orig_resp = resp;
		resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
		resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

		if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc( resp_len)) == NULL)
		{
			#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for date");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
		}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);

		/* pass only this function values */
		/* ret_val = get_regn_dlewat_data_for_date(regn_dlewat,req->fromdate,
			req->todate, req->intvstatus,'\0',regn_dlewat_cnt,req); */

		ret_val = get_regn_dlewat_data_for_date(regn_dlewat, regn_dlewat_cnt, req,ctx);

		 if(ret_val != SUCCESS)
		 {
		  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		  #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		  //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
		    //memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		 }

	} /* end of fromdate and todate and intvstatus check */
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (strcmp(req->intvbranch,"\0") != 0))
	{
		/* fromdate and todate and intvbranch */
		userlog("Inside the fromdate and todate and intvbranch");
		/*ret_val = get_regn_dlewat_date_cnt(req->fromdate,req->todate,
						'\0',req->intvbranch,&regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_date_cnt(&regn_dlewat_cnt,req,ctx);

		if((ret_val != SUCCESS))
		{
	 	 #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 #endif
		 strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for fromdate & todate");
		 sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 excep_log.termination_flag = 'Y';
		 excep_log.severity = FATAL;
		 log_error(ctx);

		 //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		 *pRespSize = resp_len;
		 //memcpy(*pResp, resp, resp_len);
		 *pResp = resp;
		 return ret_val;
		}

		orig_resp = resp;
		resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
		resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

		if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc( resp_len)) == NULL)
		{
			#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for date");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
		}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);

		/* pass only this function values */
		/* ret_val = get_regn_dlewat_data_for_date(regn_dlewat,req->fromdate,
			req->todate, '\0',req->intvbranch,regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_data_for_date(regn_dlewat, regn_dlewat_cnt, req,ctx);

		 if(ret_val != SUCCESS)
		 {
		  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		  #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		  //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
		    //memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		 }

	} /* end of fromdate and todate and intvbranch check */	
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0))
	{
		/* fromdate and todate check */
		userlog("Inside the fromdate and todate");
		/*ret_val = get_regn_dlewat_date_cnt(req->fromdate,req->todate,
						'\0','\0',&regn_dlewat_cnt,req); */

		ret_val = get_regn_dlewat_fromdate_cnt(&regn_dlewat_cnt,req,ctx);
		#ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count for fromdate & todate ret_val : %d",ret_val);
		#endif

		if((ret_val != SUCCESS))
		{
	 	 #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 #endif
		 strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for fromdate & todate");
		 sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 excep_log.termination_flag = 'Y';
		 excep_log.severity = FATAL;
		 log_error(ctx);

		 //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		 *pRespSize = resp_len;
		 //memcpy(*pResp, resp, resp_len);
		 *pResp = resp;
		 return ret_val;
		}

		orig_resp = resp;
		resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
		resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

		if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc( resp_len)) == NULL)
		{
			#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for date");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
		}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);

		/* pass only this function values */
		userlog("before calling the fromdate and todate data selection function");
		/* ret_val = get_regn_dlewat_data_for_date(regn_dlewat,req->fromdate,
			req->todate, '\0','\0',regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_data_for_fromdate(regn_dlewat,regn_dlewat_cnt,req,ctx);
		 if(ret_val != SUCCESS)
		 {
		  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		  #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		  //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
		    //memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		 }

	} /* end of fromdate and todate check */
	else if((req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	{
		/* intvstatus and intvbranch check */
		userlog("Inside the intvstatus and intvbranch");
		/*ret_val = get_regn_dlewat_date_cnt('\0','\0',
						req->intvstatus,req->intvbranch,&regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_date_cnt(&regn_dlewat_cnt,req,ctx);

		if((ret_val != SUCCESS))
		{
	 	 #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 #endif
		 strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for fromdate & todate");
		 sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
		 excep_log.termination_flag = 'Y';
		 excep_log.severity = FATAL;
		 log_error(ctx);

		 //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
		 *pRespSize = resp_len;
		 //memcpy(*pResp, resp, resp_len);
		 *pResp = resp;
		 return ret_val;
		}

		orig_resp = resp;
		resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
		resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

		if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc( resp_len)) == NULL)
		{
			#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for date");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
		}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);

		/* pass only this function values */
		 /*ret_val = get_regn_dlewat_data_for_date(regn_dlewat,'\0',
			'\0', req->intvstatus,req->intvbranch,regn_dlewat_cnt,req); */

		ret_val = get_regn_dlewat_data_for_date(regn_dlewat, regn_dlewat_cnt, req,ctx);

		 if(ret_val != SUCCESS)
		 {
		  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		  #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		  //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
		    //memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		 }

	} /* end of intvstatus and intvbranch check */
	else if (req->intvstatus != '\0')
	{
		/* intvstatus check */
		userlog("Inside the intvstatus ");
		ret_val = get_regn_dlewat_date_cnt(&regn_dlewat_cnt,req,ctx);
		if((ret_val != SUCCESS))
		{
			#ifdef DEBUG
				userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for fromdate & todate");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
			//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		}

		orig_resp = resp;
		resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
		resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

		if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc( resp_len)) == NULL)
		{
			#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for date");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
		}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);

		/* pass only this function values */
		/*ret_val = get_regn_dlewat_data_for_date(regn_dlewat,'\0',
			'\0', req->intvstatus,'\0',regn_dlewat_cnt,req); */
		ret_val = get_regn_dlewat_data_for_date(regn_dlewat, regn_dlewat_cnt, req,ctx); 
		 if(ret_val != SUCCESS)
		 {
		  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		  #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		  //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
				*pRespSize = resp_len;
		        //memcpy(*pResp, resp, resp_len);
				*pResp = resp;
			return ret_val;
		 }
	} /* end of intvstatus check */
	else if (strcmp(req->intvbranch,"\0") != 0)
	{
		/* intvbranch check */
		userlog("Inside the intvbranch");
		ret_val = get_regn_dlewat_date_cnt(&regn_dlewat_cnt,req,ctx);

		if((ret_val != SUCCESS))
		{
			#ifdef DEBUG
				userlog("GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for fromdate & todate");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed for fromdate & todate");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
			//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
			return ret_val;
		}

		orig_resp = resp;
		resp_len = sizeof(GET_LATE_REG_L2_RESP_T);
		resp_len = resp_len + (sizeof(REGN_DLEWAT_T) * regn_dlewat_cnt);

		if ((new_resp = (GET_LATE_REG_L2_RESP_T *) malloc( resp_len)) == NULL)
		{
			#ifdef DEBUG
			/* print input data to be used for debugging */
			userlog("GET_LATE_REG_L2: Reallocation of memory Failed for date");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Service failed due to RESP_BUF_ERR at Reallocation");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Service failed due to RESP_BUF_ERR at Reallocation ");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);

			//tpreturn(TPFAIL, RESP_BUF_ERR, (char *) NULL, 0, 0);
			return RESP_BUF_ERR;
		}
				
		memset(new_resp, '\0', resp_len);
		memcpy(new_resp, orig_resp, sizeof(GET_LATE_REG_L2_RESP_T));

		resp = new_resp;

		regn_dlewat = (REGN_DLEWAT_T *)(resp + 1);

		/* pass only this function values */
		/* ret_val = get_regn_dlewat_data_for_date(regn_dlewat,'\0',
			'\0', '\0',req->intvbranch,regn_dlewat_cnt,req); */

		ret_val = get_regn_dlewat_data_for_date(regn_dlewat,regn_dlewat_cnt,req,ctx);

		 if(ret_val != SUCCESS)
		 {
		  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Select from regn_dlewat failed for idtype");
		  #endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Select count from regn_dlewat failed for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 :Select count from regn_dlewat failed idtype");
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
		
		  //tpreturn(TPSUCCESS, ret_val, (char *) resp, resp_len, 0);
				*pRespSize = resp_len;
			//memcpy(*pResp, resp, resp_len);
				*pResp = resp;
			return ret_val;
		 }

	}   /* end of intvbranch check */


	 resp->get_late_reg_L2_cnt = regn_dlewat_cnt;

	 for(j=0;j<regn_dlewat_cnt;j++,regn_dlewat++)
	 {
	  #ifdef DEBUG
		userlog(" ");
		userlog("In the response buffer final output");	
		userlog("applid %s\n", regn_dlewat->applid);			
		userlog("filerefno %s\n", regn_dlewat->filerefno);
		userlog("txncode %s\n", regn_dlewat->txncode);
		userlog("idtype %s\n", regn_dlewat->idtype);
		userlog("idno %s\n", regn_dlewat->idno);
		userlog("currlongname %s\n", regn_dlewat->currlongname);
		userlog("address1 %s\n", regn_dlewat->address1);
		userlog("address2 %s\n", regn_dlewat->address2);
		userlog("address3 %s\n", regn_dlewat->address3);
		userlog("citycode %d\n", regn_dlewat->citycode);
		userlog("statecode %s\n", regn_dlewat->statecode);
		userlog("contactno %s\n", regn_dlewat->contactno);
		userlog("branchcode %s\n", regn_dlewat->branchcode);
		userlog("intvbranch %s\n", regn_dlewat->intvbranch);			
		userlog("intvdatetime %s\n", regn_dlewat->intvdatetime);
		userlog("intvstatus %c\n", regn_dlewat->intvstatus);
		userlog("regdate %s\n", regn_dlewat->regdate);
		userlog("timestamp %s\n", regn_dlewat->timestamp);
		userlog("userid %s\n", regn_dlewat->userid);
		userlog("delwatremarks %s\n", regn_dlewat->dlewatremarks);
		userlog("paneldes %c\n", regn_dlewat->paneldes);

		userlog("intvname %s\n", regn_dlewat->intvname);
		userlog("panelname %s\n", regn_dlewat->panelname);
		userlog("panelremarks %s\n", regn_dlewat->panelremarks);
		userlog("residentstat %c\n", regn_dlewat->residentstat);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_dlewat->rejectDate);
		userlog("appealDate %s\n", regn_dlewat->appealDate);
		userlog("hostRejectDate %s\n", regn_dlewat->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_dlewat->hostAppealDate);
		userlog("iDllSabah %d\n", regn_dlewat->iDllSabah);
		userlog("iIntvCount %d\n", regn_dlewat->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_dlewat->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_dlewat->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_dlewat->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_dlewat->intvRemark1);
		userlog("intvRemark2 %s\n", regn_dlewat->intvRemark2);
		userlog("intvRemark3 %s\n", regn_dlewat->intvRemark3);
		userlog("intvBranch1 %s\n", regn_dlewat->intvBranch1);
		userlog("intvBranch2 %s\n", regn_dlewat->intvBranch2);
		userlog("intvBranch3 %s\n", regn_dlewat->intvBranch3);
		userlog("operId1 %s\n", regn_dlewat->operId1);
		userlog("operId2 %s\n", regn_dlewat->operId2);
		userlog("operId3 %s\n", regn_dlewat->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End

		

	 #endif
	 }


	 /* Commit	*/
	  if(GMPC_GOOD != (ret_val = gscbcommit_trans(ctx)))
	  {
		strcpy(prog_log.remarks,"GET_LATE_REG_L2 : Function gscbcommit_trans failed");
		strcpy(excep_log.error_msg,"GET_LATE_REG_L2 : Function gscbcommit_trans failed");
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;
		log_error(ctx);

		//tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, resp_len, 0);
			*pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
			*pResp = resp;
		return GMPC_GOOD;
	  }

	  //tpreturn(TPSUCCESS, GMPC_GOOD, (char *) resp, resp_len, 0);
	  	*pRespSize = resp_len;
		//memcpy(*pResp, resp, resp_len);
		*pResp = resp;
	  return GMPC_GOOD;
		
	  #ifdef DEBUG
			userlog("GET_LATE_REG_L2 :Commit successfull, Transaction ends here");
	  #endif
	

	  #ifdef DEBUG
		userlog("GET_LATE_REG_L2 :Service Completed");
	  #endif
}



/************************************************************************/
/* Function name: get_regn_dlewat_branch_cnt									*/
/* Description	: This function gets the count from regn_dlwat table	*/
/*					for the given branch code				            */
/* Input		: Branchcode                                        	*/
/* Return values: GMPC_GOOD, regn_dlewat_cnt,SELECT_ERROR							*/
/* Limitations	:														*/
/************************************************************************/
int get_regn_dlewat_branch_cnt(char *req_bcode,int *regn_dlewat_cnt,void * ctx)
{

	EXEC SQL BEGIN DECLARE SECTION;
		varchar lbranchcode[7];
		int     regn_cnt;
	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN

	#ifdef DEBUG
		userlog("get_regn_dlewat_cnt: input buffer branchcode (req_bcode): %s",req_bcode);
	#endif

	strcpy(lbranchcode.arr,req_bcode);
	setlen(lbranchcode);

	#ifdef DEBUG
		userlog("get_regn_dlewat_cnt: input lbranchcode : %s",lbranchcode.arr);
	#endif

	EXEC SQL SELECT COUNT(*) INTO :regn_cnt FROM REGN_DLEWAT 
				WHERE INTVBRANCH = :lbranchcode
				AND   SENDGSCFLAG    = 'N';

		if(SQLCODE != 0)
		{
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}
	
	#ifdef DEBUG
		userlog("get_regn_dlewat_cnt: regn_cnt : %d",regn_cnt);
	#endif

	*regn_dlewat_cnt = regn_cnt;

	#ifdef DEBUG
		userlog("get_regn_dlewat_cnt: regn_dlewat_cnt : %d",*regn_dlewat_cnt);
	#endif

	return SUCCESS;

}

/************************************************************************/
/* Function name: get_regn_dlewat_id_cnt									*/
/* Description	: This function gets the count from regn_dlwat table	*/
/*					for the given branch code				            */
/* Input		: idtype, idno                                        	*/
/* Return values: GMPC_GOOD, regn_dlewat_cnt,SELECT_ERROR							*/
/* Limitations	:														*/
/************************************************************************/
int get_regn_dlewat_id_cnt(char *idtype,char *idno,int *regn_dlewat_cnt,void * ctx)
{

	EXEC SQL BEGIN DECLARE SECTION;

	varchar lidtype[ID_TYPE_SIZE] = {0};
	varchar lidno[ID_SIZE] = {0};

		int     regn_cnt;

	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN

	#ifdef DEBUG
		userlog("get_regn_dlewat_id_cnt: input  idtype (idtype): %s",idtype);
		userlog("get_regn_dlewat_id_cnt: input  idno (idno): %s",idno);
	#endif

	

	strcpy(lidtype.arr,idtype);
	strcpy(lidno.arr,idno);

	setlen(lidtype);
	setlen(lidno);
	
	

	#ifdef DEBUG
		userlog("get_regn_dlewat_id_cnt:  lidtype : %s",lidtype.arr);
		userlog("get_regn_dlewat_id_cnt:  lidno : %s",lidno.arr);
	#endif

	EXEC SQL SELECT COUNT(*) INTO :regn_cnt FROM REGN_DLEWAT 
				WHERE IDTYPE = :lidtype
				AND   IDNO   = :lidno;

		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_id_cnt: select count failed from REGN_DELWAT table for idtype");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for idtype");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for idtype: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}
	
	#ifdef DEBUG
		userlog("get_regn_dlewat_cnt: regn_cnt : %d",regn_cnt);
	#endif

	*regn_dlewat_cnt = regn_cnt;

	#ifdef DEBUG
		userlog("get_regn_dlewat_cnt: regn_dlewat_cnt : %d",*regn_dlewat_cnt);
	#endif

	return SUCCESS;

}

/************************************************************************/
/* Function name: get_regn_dlewat_date_cnt									*/
/* Description	: This function gets the count from regn_dlwat table	*/
/*					for the given branch code				            */
/* Input		: (fromdate & todate) or intvstatus or intvbranch                                        	*/
/* Return values: GMPC_GOOD, regn_dlewat_cnt,SELECT_ERROR							*/
/* Limitations	:														*/
/************************************************************************/
/*int get_regn_dlewat_date_cnt(char req_fdate[],char req_tdate[],
			char req_istatus,char req_ibranch[],
			int *regn_dlewat_cnt,GET_LATE_REG_L2_REQ_T *req) */
int get_regn_dlewat_date_cnt(int *regn_dlewat_cnt, GET_LATE_REG_L2_REQ_T *req,void * ctx)
{

	EXEC SQL BEGIN DECLARE SECTION;

	varchar lfromdate[DATE_SIZE] = {0};
	varchar ltodate[DATE_SIZE] = {0};
	char lintvstatus = '\0';
	varchar lintvbranch[BRANCH_CODE_SIZE] = {0};
	int      regn_cnt = 0;
	varchar lbcode[7] = {0};
	char lbrcode[7];
	
	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN


	userlog("Inside the selecting count function");

	strcpy(lbrcode,req->header.branch_code);

	#ifdef DEBUG
	userlog("get_regn_dlewat_date_cnt: input lbrcode (lbrcode): %s",lbrcode);
	userlog("get_regn_dlewat_date_cnt: input fromdate (req_fdate): %s",req->fromdate);
	userlog("get_regn_dlewat_date_cnt: input todate (req_tdate): %s",req->todate);
	userlog("get_regn_dlewat_date_cnt: input intvstatus (req_istatus): %c",req->intvstatus);
	userlog("get_regn_dlewat_date_cnt: input intvbranch (req_ibranch): %s",req->intvbranch);
	userlog("get_regn_dlewat_date_cnt: input req->header.branch_code : %s",req->header.branch_code);
	#endif

	setnull(lbcode);
	strncpy((char*)lbcode.arr, lbrcode,2);
	setlen(lbcode);
	
	#ifdef DEBUG
		userlog("get_regn_dlewat_date_cnt: input lbcode : %s",lbcode.arr);
	#endif

	if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	{
		#ifdef DEBUG
			userlog(" ");
			userlog("get_regn_dlewat_date_cnt: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_date_cnt: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_date_cnt: input intvstatus (req_istatus): %c",req->intvstatus);
			userlog("get_regn_dlewat_date_cnt: input intvbranch (req_ibranch): %s",req->intvbranch);
			userlog("get_regn_dlewat_date_cnt: input (lbcode): %s",lbcode.arr);			
			userlog(" ");
		#endif

		
		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);
		lintvstatus = req->intvstatus;
		strcpy((char*)lintvbranch.arr,req->intvbranch);

		setlen(lfromdate);
		setlen(ltodate);
		setlen(lintvbranch);
						

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_date_cnt:  ltodate : %s",ltodate.arr);
			userlog("get_regn_dlewat_date_cnt:  lintvstatus : %c",lintvstatus);
			userlog("get_regn_dlewat_date_cnt:  lintvbranch : %s",lintvbranch.arr);			
		#endif
		
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt 
			FROM REGN_DLEWAT 
			WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
					BETWEEN TO_DATE(:lfromdate,'DDMMYYYY') 
					AND	   TO_DATE(:ltodate,'DDMMYYYY')
					AND    INTVBRANCH = :lintvbranch
					AND    INTVSTATUS = :lintvstatus;
					//AND	   SUBSTR(BRANCHCODE,1,2) = :lbcode;

		#ifdef DEBUG
			userlog("sqlca.sqlcode after count: %d",sqlca.sqlcode);
		#endif


		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for fromdate and todate");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt : %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt : %d",*regn_dlewat_cnt);
		#endif

	}
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0'))
	{
		
		#ifdef DEBUG
			userlog(" ");
			userlog("get_regn_dlewat_date_cnt: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_date_cnt: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_date_cnt: input intvstatus (req_istatus): %c",req->intvstatus);			
			userlog("get_regn_dlewat_date_cnt: input (lbcode): %s",lbcode.arr);			
			userlog(" ");
		#endif

		
		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);
		lintvstatus = req->intvstatus;
		
		setlen(lfromdate);
		setlen(ltodate);
								
	
		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_date_cnt:  ltodate : %s",ltodate.arr);
			userlog("get_regn_dlewat_date_cnt:  lintvstatus : %c",lintvstatus);
			userlog("get_regn_dlewat_date_cnt:  lintvbranch : %s",lintvbranch.arr);			
			userlog("get_regn_dlewat_date_cnt:  lbcode : %s",lbcode.arr);
		#endif
		
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt 
			FROM REGN_DLEWAT 
			WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
					BETWEEN TO_DATE(:lfromdate,'DDMMYYYY') 
					AND	   TO_DATE(:ltodate,'DDMMYYYY')					
					AND    INTVSTATUS = :lintvstatus
					AND	   SUBSTR(BRANCHCODE,1,2) = :lbcode;

		#ifdef DEBUG
			userlog("sqlca.sqlcode after count: %d",sqlca.sqlcode);
		#endif

		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for fromdate and todate");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt : %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt : %d",*regn_dlewat_cnt);
		#endif


	}
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (strcmp(req->intvbranch,"\0") != 0))
	{
		
		#ifdef DEBUG
			userlog(" ");
			userlog("get_regn_dlewat_date_cnt: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_date_cnt: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_date_cnt: input intvbranch (req_ibranch): %s",req->intvbranch);
			userlog("get_regn_dlewat_date_cnt: input (lbcode): %s",lbcode.arr);			
			userlog(" ");
		#endif
		
		
		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);		
		strcpy((char*)lintvbranch.arr,req->intvbranch);

		setlen(lfromdate);
		setlen(ltodate);
		setlen(lintvbranch);
						

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_date_cnt:  ltodate : %s",ltodate.arr);			
			userlog("get_regn_dlewat_date_cnt:  lintvbranch : %s",lintvbranch.arr);			
		#endif
		
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt 
			FROM REGN_DLEWAT 
			WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
					BETWEEN TO_DATE(:lfromdate,'DDMMYYYY') 
					AND	   TO_DATE(:ltodate,'DDMMYYYY')
					AND    INTVBRANCH = :lintvbranch;
					//AND	   SUBSTR(BRANCHCODE,1,2) = :lbcode;

		#ifdef DEBUG
			userlog("sqlca.sqlcode after count: %d",sqlca.sqlcode);
		#endif


		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for fromdate and todate");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt : %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt : %d",*regn_dlewat_cnt);
		#endif


	}
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0))
	{
		//else if((strcmp(req_fdate, "\0") != 0) && (strcmp(req_tdate,"\0") != 0))
		#ifdef DEBUG
			userlog(" ");
			userlog("get_regn_dlewat_date_cnt: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_date_cnt: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_date_cnt: input branchcode (lbcode): %s",lbcode.arr);			
			userlog(" ");
		#endif

		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);

		setlen(lfromdate);
		setlen(ltodate);
						

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_date_cnt:  ltodate : %s",ltodate.arr);
			userlog("get_regn_dlewat_date_cnt:  lbcode: %s",lbcode.arr);
		#endif
		
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt 
			FROM REGN_DLEWAT 
			WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
				   BETWEEN TO_DATE(:lfromdate,'DDMMYYYY') 
					AND	   TO_DATE(:ltodate,'DDMMYYYY')
				   AND SUBSTR(BRANCHCODE,1,2) = :lbcode;

		#ifdef DEBUG
			userlog("sqlca.sqlcode after count: %d",sqlca.sqlcode);
		#endif


		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for fromdate and todate");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt : %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt : %d",*regn_dlewat_cnt);
		#endif
	}
	else if((req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	{
		#ifdef DEBUG
			userlog(" ");
			userlog("get_regn_dlewat_date_cnt: input intvstatus (req_istatus): %c",req->intvstatus);
			userlog("get_regn_dlewat_date_cnt: input intvbranch (req_ibranch): %s",req->intvbranch);
			userlog(" ");
		#endif

		lintvstatus = req->intvstatus;		
		strcpy(lintvbranch.arr,req->intvbranch);
		setlen(lintvbranch);
		
		
		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lintvstatus : %c",lintvstatus);			
			userlog("get_regn_dlewat_date_cnt:  lintvbranch : %s",lintvbranch.arr);
		#endif
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt FROM REGN_DLEWAT 
				WHERE INTVSTATUS = :lintvstatus
				AND INTVBRANCH = :lintvbranch;
				//AND SUBSTR(BRANCHCODE,1,2) = :lbcode;

		#ifdef DEBUG
			userlog("sqlca.sqlcode after count: %d",sqlca.sqlcode);
		#endif


		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for intvstatus");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for intvstatus");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for intvstatus: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt for intvstatus: %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt for intvstatus: %d",*regn_dlewat_cnt);
		#endif

	}
	else if (req->intvstatus != '\0')
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: input intvstatus (req_istatus): %c",req->intvstatus);			
			userlog("get_regn_dlewat_date_cnt: input branchcode (lbcode): %s",lbcode.arr);
		#endif

		lintvstatus = req->intvstatus;
		
		
		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lintvstatus : %c",lintvstatus);			
			userlog("get_regn_dlewat_date_cnt:  lbcode: %s",lbcode.arr);
		#endif
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt FROM REGN_DLEWAT 
				WHERE INTVSTATUS = :lintvstatus
				AND SUBSTR(BRANCHCODE,1,2) = :lbcode;

		#ifdef DEBUG
			userlog("sqlca.sqlcode after count: %d",sqlca.sqlcode);
		#endif

		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for intvstatus");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for intvstatus");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for intvstatus: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt for intvstatus: %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt for intvstatus: %d",*regn_dlewat_cnt);
		#endif

	}
	else if (strcmp(req->intvbranch,"\0") != 0)
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: input intvbranch (req_ibranch): %s",req->intvbranch);			
		#endif

		
		strcpy(lintvbranch.arr,req->intvbranch);
		setlen(lintvbranch);
		
		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lintvbranch : %s",lintvbranch.arr);			
		#endif
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt FROM REGN_DLEWAT 
				WHERE INTVBRANCH = :lintvbranch;

		#ifdef DEBUG
			userlog("sqlca.sqlcode after count: %d",sqlca.sqlcode);
		#endif
				

		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for intvbranch");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for intvbranch");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for intvbranch: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt for intvbranch: %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt for intvbranch: %d",*regn_dlewat_cnt);
		#endif
	}

	return SUCCESS;

}


int get_regn_dlewat_fromdate_cnt(int *regn_dlewat_cnt,GET_LATE_REG_L2_REQ_T *req,void * ctx)
{

	EXEC SQL BEGIN DECLARE SECTION;

	varchar lfromdate[DATE_SIZE] = {0};
	varchar ltodate[DATE_SIZE] = {0};
	char lintvstatus = '\0';
	varchar lintvbranch[BRANCH_CODE_SIZE] = {0};
	int      regn_cnt = 0;
	varchar l_hdr_bcode[3] = {0};
	char lbrcode[7];
	
	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN

	#ifdef DEBUG
	userlog("Inside the selecting count get_regn_dlewat_fromdate_cnt function");
	#endif

	strcpy(lbrcode,req->header.branch_code);

	#ifdef DEBUG
	userlog(" ");
	userlog("get_regn_dlewat_date_cnt: input lbrcode (lbrcode): %s",lbrcode);
	userlog("get_regn_dlewat_date_cnt: input fromdate (req->fdate): %s",req->fromdate);
	userlog("get_regn_dlewat_date_cnt: input todate (req->tdate): %s",req->todate);
	userlog("get_regn_dlewat_date_cnt: input intvstatus (req->istatus): %c",req->intvstatus);
	userlog("get_regn_dlewat_date_cnt: input intvbranch (req->ibranch): %s",req->intvbranch);
	userlog("get_regn_dlewat_date_cnt: input req->header.branch_code : %s",req->header.branch_code);
	userlog(" ");
	#endif

	
	strncpy((char*)l_hdr_bcode.arr, lbrcode,2);
	setlen(l_hdr_bcode);

	#ifdef DEBUG
	userlog("get_regn_dlewat_date_cnt: input l_hdr_bcode : %s",l_hdr_bcode.arr);
	#endif

	if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0))
	{
		#ifdef DEBUG
			userlog("Inside the loop of the function");
		#endif
		//else if((strcmp(req_fdate, "\0") != 0) && (strcmp(req_tdate,"\0") != 0))
		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_date_cnt: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_date_cnt: input branchcode (l_hdr_bcode): %s",l_hdr_bcode.arr);			
		#endif

		setnull(lfromdate);
		setnull(ltodate);

		/*strcpy((char*)lfromdate.arr,req_fdate);
		strcpy((char*)ltodate.arr,req_tdate);*/

		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);

		setlen(lfromdate);
		setlen(ltodate);
						

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_date_cnt:  ltodate : %s",ltodate.arr);
			userlog("get_regn_dlewat_date_cnt: header branchcode (l_hdr_bcode): %s",l_hdr_bcode.arr);
		#endif
		
		
		EXEC SQL SELECT COUNT(*) INTO :regn_cnt 
			FROM REGN_DLEWAT 
			WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
				   BETWEEN TO_DATE(:lfromdate,'DDMMYYYY') 
					AND	   TO_DATE(:ltodate,'DDMMYYYY')
				   AND SUBSTR(BRANCHCODE,1,2) = :l_hdr_bcode;

		#ifdef DEBUG
			userlog("sqlca.sqlcode : %d",sqlca.sqlcode);
		#endif


		if(SQLCODE != 0)
		{
			#ifdef DEBUG
				userlog("get_regn_dlewat_date_cnt: select count failed from REGN_DELWAT table for fromdate and todate");
			#endif
			strcpy(prog_log.remarks,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date");
			sprintf(excep_log.error_msg,"GET_LATE_REG_L2 : select count failed from REGN_DELWAT table for date: %s",SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;
			log_error(ctx);
	
			return SELECT_ERROR;
		}

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_cnt : %d",regn_cnt);
		#endif

		*regn_dlewat_cnt = regn_cnt;

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt: regn_dlewat_cnt : %d",*regn_dlewat_cnt);
		#endif
	}
	
	return SUCCESS;

}


/********************************************************************/
/* Function name: get_regn_dlewat_data_for_branchcode								*/
/* Description	: This function selects data from REGN_DLEWAT table	*/
/* Input		: REGN_DLEWAT_T , Branchcode                        */
/* Return values: GMPC_GOOD, ret_val,SELECT_ERROR						*/
/* Limitations	:													*/
/********************************************************************/
int get_regn_dlewat_data_for_branchcode(REGN_DLEWAT_T *regn_rec, char *branchcode, int regn_dlewat_cnt,void * ctx)
{
	EXEC SQL BEGIN DECLARE SECTION;

	varchar lbranchcode[BRANCH_CODE_SIZE] = {0};
		
	  struct
	   {
		varchar applid[APP_ID_SIZE];
		varchar filerefno[FILE_REFNO_SIZE];
		char    txncode[TXN_CODE_SIZE];
		varchar idtype[ID_TYPE_SIZE];
		varchar idno[ID_SIZE];
		varchar currlongname[CUR_LONG_NAME_SIZE];
		varchar address1[ADDRESS1_SIZE];
		varchar address2[ADDRESS1_SIZE];
		varchar address3[ADDRESS1_SIZE];
		int     citycode;
		char    statecode[STATE_CODE_SIZE];
		char    postcode[POST_CODE_SIZE];
		varchar contactno[CONTACT_NO_SIZE];
		char    branchcode[BRANCH_CODE_SIZE];
		char    intvbranch[BRANCH_CODE_SIZE];
		char    intvdatetime[DATE_TIME_SIZE];
		char    intvstatus;
		char    regdate[DATE_TIME_SIZE];
		char    timestamp[DATE_TIME_SIZE];
		char    userid[USER_ID_SIZE];
		varchar dlewatremarks[DELWAT_REMARKS_SIZE];
		char    paneldes;
		char    sendgscflag;		
		varchar intvname[INTVNAME_SIZE]; 
		varchar panelname[INTVNAME_SIZE];
		varchar panelremarks[DELWAT_REMARKS_SIZE];
		char residentstat;		
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		char    rejectDate [DATE_TIME_SIZE];
		char    appealDate [DATE_TIME_SIZE];
		char    hostRejectDate [DATE_TIME_SIZE];
		char    hostAppealDate [DATE_TIME_SIZE];
		int     iDllSabah;	
		int     iIntvCount;
		char    intvDateTime1[DATE_TIME_SIZE];
		char    intvDateTime2[DATE_TIME_SIZE];
		char    intvDateTime3[DATE_TIME_SIZE];
		varchar intvRemark1[DELWAT_REMARKS_SIZE];
		varchar intvRemark2[DELWAT_REMARKS_SIZE];
		varchar intvRemark3[DELWAT_REMARKS_SIZE];
		char    intvBranch1[BRANCH_CODE_SIZE];
		char    intvBranch2[BRANCH_CODE_SIZE];
		char    intvBranch3[BRANCH_CODE_SIZE];
		char    operId1[USER_ID_SIZE];
		char    operId2[USER_ID_SIZE];
		char    operId3[USER_ID_SIZE];
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End
		
	   }local_rec;
	   
	 struct
	  {	
		short int applid_ind;
		short int filerefno_ind;
		short int txncode_ind;
		short int idtype_ind;
		short int idno_ind;
		short int currlongname_ind;
		short int address1_ind;
		short int address2_ind;
		short int address3_ind;
		short int citycode_ind;
		short int statecode_ind;
		short int postcode_ind;
		short int contactno_ind;
		short int branchcode_ind;
		short int intvbranch_ind;
		short int intvdatetime_ind;
		short int intvstatus_ind;
		short int regdate_ind;
		short int timestamp_ind;
		short int userid_ind;
		short int dlewatremarks_ind;
		short int paneldes_ind;
		short int sendgscflag_ind;		
		short int intvname_ind; 
		short int panelname_ind;
		short int panelremarks_ind;
		short int residentstat_ind;
        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
    	short int rejectDate_ind;
    	short int appealDate_ind;
    	short int hostRejectDate_ind;
    	short int hostAppealDate_ind;
    	short int iDllSabah_ind;
    	short int iIntvCount_ind;
    	short int intvDateTime1_ind;
    	short int intvDateTime2_ind;
    	short int intvDateTime3_ind;
    	short int intvRemark1_ind;
    	short int intvRemark2_ind;
    	short int intvRemark3_ind;
    	short int intvBranch1_ind;
    	short int intvBranch2_ind;
    	short int intvBranch3_ind;
    	short int intvBranch3_ind;
    	short int operId1_ind;
    	short int operId2_ind;
    	short int operId3_ind;
        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020		
	   }local_rec_ind;
	   	
		int cnt;
	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN

	#ifdef DEBUG
		userlog("input branchcode : %s",branchcode);
	#endif

	setnull(lbranchcode);
	strcpy(lbranchcode.arr,branchcode);
	setlen(lbranchcode);
		

	#ifdef DEBUG
		userlog("lbranchcode : %s",lbranchcode.arr);
	#endif
	
	EXEC SQL DECLARE regn_br_cur CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,
			INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH 
		FROM  REGN_DLEWAT
		WHERE INTVBRANCH = :lbranchcode
		AND   SENDGSCFLAG    = 'N';


	EXEC SQL OPEN regn_br_cur;

	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" get_regn_dlewat_data : Error in opening the cursor regn_br_cur : %s", SQLMSG);
	#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_br_cur");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_br_cur : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
	}
	
	for(cnt=0;cnt<regn_dlewat_cnt;cnt++,regn_rec++)
	{
	  memset(&local_rec,'\0',sizeof(local_rec));
	  memset(&local_rec_ind,'\0',sizeof(local_rec_ind));

	  EXEC SQL FETCH regn_br_cur 
				INTO :local_rec INDICATOR :local_rec_ind;

	  if(NO_DATA_FOUND) break;

	  if (SQLCODE)
	   {
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_cur : %s", SQLMSG);
		#endif
			/* Log the error */
			strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in fetching the cursor regn_cur");
			sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in fetching the cursor regn_cur : %s", SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);

			EXEC SQL CLOSE regn_br_cur;

			return CURSOR_FETCH_ERROR;
	   }

		setlen(local_rec.applid);	
	    setnull(local_rec.applid);
		setlen(local_rec.filerefno);
		setnull(local_rec.filerefno);
		setlen(local_rec.idno);
		setnull(local_rec.idno);
		setlen(local_rec.currlongname);
		setnull(local_rec.currlongname);
		setlen(local_rec.address1);
		setnull(local_rec.address1);
		setlen(local_rec.address1);
		setnull(local_rec.address2);
		setlen(local_rec.address1);
		setnull(local_rec.address3);
		setlen(local_rec.contactno);
		setnull(local_rec.contactno);
		setlen(local_rec.dlewatremarks); 
		setnull(local_rec.dlewatremarks); 
		setlen(local_rec.intvname);
		setnull(local_rec.intvname);
		setlen(local_rec.panelname);
		setnull(local_rec.panelname);
		setlen(local_rec.panelremarks);
		setnull(local_rec.panelremarks);

	#ifdef DEBUG
		userlog(" ----> from local variables for branchcode<----");
		userlog(" applid : %s",local_rec.applid.arr);
		userlog(" filerefno : %s",local_rec.filerefno.arr);
		userlog(" txncode : %s",local_rec.txncode);
		userlog(" idtype : %s",local_rec.idtype.arr);
		userlog(" idno : %s",local_rec.idno.arr);
		userlog(" currlongname : %s",local_rec.currlongname.arr);
		userlog(" address1 : %s",local_rec.address1.arr);
		userlog(" address2 : %s",local_rec.address2.arr);
		userlog(" address3 : %s",local_rec.address3.arr);
		userlog(" citycode : %d",local_rec.citycode);
		userlog(" statecode : %s",local_rec.statecode);
		userlog(" postcode : %s",local_rec.postcode);
		userlog(" contactno : %s",local_rec.contactno.arr);
		userlog(" branchcode : %s",local_rec.branchcode);
		userlog(" intvbranch : %s",local_rec.intvbranch);
		userlog(" intvdatetime : %s",local_rec.intvdatetime);
		userlog(" intvstatus : %c",local_rec.intvstatus);
		userlog(" regdate : %s",local_rec.regdate);
		userlog(" timestamp : %s",local_rec.timestamp);
		userlog(" userid : %s",local_rec.userid);
		userlog(" dlewatremarks : %s",local_rec.dlewatremarks.arr);
		userlog(" paneldes : %c",local_rec.paneldes);
		userlog(" sendgscflag : %c",local_rec.sendgscflag);
		userlog(" intvname : %s",local_rec.intvname.arr);
		userlog(" panelname : %s",local_rec.panelname.arr);
		userlog(" panelremarks : %s",local_rec.panelremarks.arr);
		userlog(" residentstat : %c",local_rec.residentstat);
		
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog(" rejectDate : %s\n", local_rec.rejectDate);
		userlog(" appealDate : %s\n", local_rec.appealDate);
		userlog(" hostRejectDate : %s\n", local_rec.hostRejectDate);
		userlog(" hostAppealDate : s\n", local_rec.hostAppealDate);
		userlog(" iDllSabah : %d\n", local_rec.iDllSabah);
		userlog(" iIntvCount : %d\n", local_rec.iIntvCount);
		userlog(" intvDateTime1 : %s\n", local_rec.intvDateTime1);
		userlog(" intvDateTime2 : %s\n", local_rec.intvDateTime2);
		userlog(" intvDateTime3 : %s\n",local_rec.intvDateTime3);
		userlog(" intvRemark1 : %s\n", local_rec.intvRemark1);
		userlog(" intvRemark2 : %s\n", local_rec.intvRemark2);
		userlog(" intvRemark3 : %s\n", local_rec.intvRemark3);
		userlog(" intvBranch1 : %s\n", local_rec.intvBranch1);
		userlog(" intvBranch2 : %s\n", local_rec.intvBranch2);
		userlog(" intvBranch3 : %s\n", local_rec.intvBranch3);
		userlog(" operId1 : %s\n", local_rec.operId1);
		userlog(" operId2 : %s\n", local_rec.operId2);
		userlog(" operId3 : %s\n", local_rec.operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End
		
	#endif


	   if(local_rec_ind.applid_ind != -1)
			strcpy(regn_rec->applid, local_rec.applid.arr);

		if(local_rec_ind.filerefno_ind != -1)
			strcpy(regn_rec->filerefno, local_rec.filerefno.arr);

		if(local_rec_ind.txncode_ind != -1)
			strcpy(regn_rec->txncode, local_rec.txncode);

		if(local_rec_ind.idtype_ind != -1)
			strcpy(regn_rec->idtype, local_rec.idtype.arr);

		if(local_rec_ind.idno_ind != -1)
			strcpy(regn_rec->idno, local_rec.idno.arr);

		if(local_rec_ind.currlongname_ind != -1)
			strcpy(regn_rec->currlongname, local_rec.currlongname.arr);

		if(local_rec_ind.address1_ind != -1)
			strcpy(regn_rec->address1, local_rec.address1.arr);

		if(local_rec_ind.address2_ind != -1)
			strcpy(regn_rec->address2, local_rec.address2.arr);

		if(local_rec_ind.address3_ind != -1)
			strcpy(regn_rec->address3, local_rec.address3.arr);

		if(local_rec_ind.citycode_ind != -1)
			regn_rec->citycode = local_rec.citycode;

		if(local_rec_ind.statecode_ind != -1)
			strcpy(regn_rec->statecode, local_rec.statecode);

		if(local_rec_ind.postcode_ind != -1)
			strcpy(regn_rec->postcode, local_rec.postcode);

		if(local_rec_ind.contactno_ind != -1)
			strcpy(regn_rec->contactno, local_rec.contactno.arr);

		if(local_rec_ind.branchcode_ind != -1)
			strcpy(regn_rec->branchcode, local_rec.branchcode);

		if(local_rec_ind.intvbranch_ind != -1)
			strcpy(regn_rec->intvbranch, local_rec.intvbranch);

		if(local_rec_ind.intvdatetime_ind != -1)
			strcpy(regn_rec->intvdatetime, local_rec.intvdatetime);

		if(local_rec_ind.intvstatus_ind != -1)
			regn_rec->intvstatus = local_rec.intvstatus;

		if(local_rec_ind.regdate_ind != -1)
			strcpy(regn_rec->regdate, local_rec.regdate);

		if(local_rec_ind.timestamp_ind != -1)
			strcpy(regn_rec->timestamp, local_rec.timestamp);

		if(local_rec_ind.userid_ind != -1)
			strcpy(regn_rec->userid, local_rec.userid);

		if(local_rec_ind.dlewatremarks_ind != -1)
			strcpy(regn_rec->dlewatremarks, local_rec.dlewatremarks.arr);

		if(local_rec_ind.paneldes_ind != -1)
			regn_rec->paneldes = local_rec.paneldes;

		if(local_rec_ind.sendgscflag_ind != -1)
			regn_rec->sendgscflag = local_rec.sendgscflag;

		if(local_rec_ind.intvname_ind != -1)
			strcpy(regn_rec->intvname, local_rec.intvname.arr);

		if(local_rec_ind.panelname_ind != -1)
			strcpy(regn_rec->panelname, local_rec.panelname.arr);
		
		if(local_rec_ind.panelremarks_ind != -1)
			strcpy(regn_rec->panelremarks, local_rec.panelremarks.arr);

		if(local_rec_ind.residentstat_ind != -1)
			regn_rec->residentstat = local_rec.residentstat;
		
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		if(local_rec_ind.rejectDate_ind != -1)
			strcpy(regn_rec->rejectDate_ind, local_rec.rejectDate.arr);

		if(local_rec_ind.appealDate_ind != -1)
			strcpy(regn_rec->appealDate_ind, local_rec.appealDate.arr);
		
		if(local_rec_ind.hostRejectDate_ind != -1)
			strcpy(regn_rec->hostRejectDate, local_rec.hostRejectDate.arr);

		if(local_rec_ind.hostAppealDate_ind != -1)
			regn_rec->hostAppealDate = local_rec.hostAppealDate.arr;		
		
		if(local_rec_ind.iDllSabah_ind != -1)
			strcpy(regn_rec->iDllSabah, local_rec.iDllSabah);

		if(local_rec_ind.iIntvCount_ind != -1)
			strcpy(regn_rec->iIntvCount, local_rec.iIntvCount);
		
		if(local_rec_ind.intvDateTime1_ind != -1)
			strcpy(regn_rec->intvDateTime1, local_rec.intvDateTime1.arr);

		if(local_rec_ind.intvDateTime2_ind != -1)
			regn_rec->intvDateTime2 = local_rec.intvDateTime2.arr;	
		
		if(local_rec_ind.intvDateTime3_ind != -1)
			regn_rec->intvDateTime3 = local_rec.intvDateTime3.arr;	
		
		if(local_rec_ind.intvRemark1_ind != -1)
			strcpy(regn_rec->intvRemark1, local_rec.intvRemark1.arr);

		if(local_rec_ind.intvRemark2_ind != -1)
			regn_rec->intvRemark2 = local_rec.intvRemark2.arr;	
		
		if(local_rec_ind.intvRemark3_ind != -1)
			regn_rec->intvRemark3 = local_rec.intvRemark3.arr;

		if(local_rec_ind.intvBranch1_ind != -1)
			strcpy(regn_rec->intvBranch1, local_rec.intvBranch1.arr);

		if(local_rec_ind.intvBranch2_ind != -1)
			regn_rec->intvBranch2 = local_rec.intvBranch2.arr;	
		
		if(local_rec_ind.intvBranch3_ind != -1)
			regn_rec->intvBranch3 = local_rec.intvBranch3.arr;		
		
		if(local_rec_ind.operId1_ind != -1)
			strcpy(regn_rec->operId1, local_rec.operId1.arr);

		if(local_rec_ind.operId2_ind != -1)
			regn_rec->operId2 = local_rec.operId2.arr;	
		
		if(local_rec_ind.operId3_ind != -1)
			regn_rec->operId3_ind = local_rec.operId3.arr;		
	
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020

		EXEC SQL UPDATE REGN_DLEWAT
				SET SENDGSCFLAG = 'Y'
				WHERE INTVBRANCH = :lbranchcode
				AND   SENDGSCFLAG    = 'N'
				AND APPLID = :local_rec.applid;

	#ifdef DEBUG
		userlog(" ----> from the buffer for for branchcode<----");	
		userlog("applid %s\n", regn_rec->applid);
		userlog("fileref %s\n", regn_rec->filerefno); 
		userlog("txncode %s\n", regn_rec->txncode); 
		userlog("idtype %s\n", regn_rec->idtype);
		userlog("idno %s\n", regn_rec->idno); 
		userlog("currlongname %s\n", regn_rec->currlongname); 
		userlog("address1 %s\n", regn_rec->address1); 
		userlog("address2 %s\n", regn_rec->address2); 
		userlog("address3 %s\n", regn_rec->address3); 
		userlog("citycode %d\n", regn_rec->citycode);
		userlog("statecode %s\n", regn_rec->statecode); 
		userlog("postcode %s\n", regn_rec->postcode); 
		userlog("contactno %s\n", regn_rec->contactno); 
		userlog("branchcode %s\n", regn_rec->branchcode); 
		userlog("intvbranch %d\n", regn_rec->intvbranch);
		userlog("intvdatetime %s\n", regn_rec->intvdatetime); 
		userlog("intvstatus %c\n", regn_rec->intvstatus); 
		userlog("regdate %s\n", regn_rec->regdate); 
		userlog("timestamp %s\n", regn_rec->timestamp);		
		userlog("userid %s\n", regn_rec->userid); 
		userlog("delwatremarks %s\n", regn_rec->dlewatremarks); 
		userlog("paneldes %c\n", regn_rec->paneldes); 
		userlog("sendgscflag %c\n", regn_rec->sendgscflag); 
		
		userlog("intvname %s\n", regn_rec->intvname); 
		userlog("panelname %s\n", regn_rec->panelname); 
		userlog("panelremarks %s\n", regn_rec->panelremarks); 
		userlog("residentstat %c\n", regn_rec->residentstat); 
		
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_dlewat->rejectDate);
		userlog("appealDate %s\n", regn_dlewat->appealDate);
		userlog("hostRejectDate %s\n", regn_dlewat->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_dlewat->hostAppealDate);
		userlog("iDllSabah %d\n", regn_dlewat->iDllSabah);
		userlog("iIntvCount %d\n", regn_dlewat->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_dlewat->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_dlewat->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_dlewat->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_dlewat->intvRemark1);
		userlog("intvRemark2 %s\n", regn_dlewat->intvRemark2);
		userlog("intvRemark3 %s\n", regn_dlewat->intvRemark3);
		userlog("intvBranch1 %s\n", regn_dlewat->intvBranch1);
		userlog("intvBranch2 %s\n", regn_dlewat->intvBranch2);
		userlog("intvBranch3 %s\n", regn_dlewat->intvBranch3);
		userlog("operId1 %s\n", regn_dlewat->operId1);
		userlog("operId2 %s\n", regn_dlewat->operId2);
		userlog("operId3 %s\n", regn_dlewat->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End
		
	
	#endif

		
		
	} /* end of for loop */

	EXEC SQL CLOSE regn_br_cur;

	return SUCCESS;
}


/********************************************************************/
/* Function name: get_regn_dlewat_data_for_idtype					*/
/* Description	: This function selects data from REGN_DLEWAT table	*/
/*				   based on IDTYPE and IDNO from the input buffer   */
/* Input		: REGN_DLEWAT_T , IDTYPE, IDNO                      */
/* Return values: GMPC_GOOD, ret_val,SELECT_ERROR					*/
/* Limitations	:													*/
/********************************************************************/
int get_regn_dlewat_data_for_idtype(REGN_DLEWAT_T *regn_rec, char *idtype,char *idno, int regn_dlewat_cnt,void * ctx)
{
	EXEC SQL BEGIN DECLARE SECTION;

	varchar lidtype[ID_TYPE_SIZE]={0}; 
	varchar lidno[ID_SIZE]={0};
		
	  struct
	   {		
		varchar applid[APP_ID_SIZE];
		varchar filerefno[FILE_REFNO_SIZE];
		char    txncode[TXN_CODE_SIZE];
		char    idtype[ID_TYPE_SIZE];
		varchar idno[ID_SIZE];
		varchar currlongname[CUR_LONG_NAME_SIZE];
		varchar address1[ADDRESS1_SIZE];
		varchar address2[ADDRESS1_SIZE];
		varchar address3[ADDRESS1_SIZE];
		int     citycode;
		char    statecode[STATE_CODE_SIZE];
		char    postcode[POST_CODE_SIZE];
		varchar contactno[CONTACT_NO_SIZE];
		char    branchcode[BRANCH_CODE_SIZE];
		char    intvbranch[BRANCH_CODE_SIZE];
		char    intvdatetime[DATE_TIME_SIZE];
		char    intvstatus;
		char    regdate[DATE_TIME_SIZE];
		char    timestamp[DATE_TIME_SIZE];
		char    userid[USER_ID_SIZE];
		varchar dlewatremarks[DELWAT_REMARKS_SIZE];
		char    paneldes;
		char	sendgscflag;
		varchar intvname[INTVNAME_SIZE]; 
		varchar panelname[INTVNAME_SIZE];
		varchar panelremarks[DELWAT_REMARKS_SIZE];
		char	residentstat;
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		char    rejectDate [DATE_TIME_SIZE];
		char    appealDate [DATE_TIME_SIZE];
		char    hostRejectDate [DATE_TIME_SIZE];
		char    hostAppealDate [DATE_TIME_SIZE];
		int     iDllSabah;	
		int     iIntvCount;
		char    intvDateTime1[DATE_TIME_SIZE];
		char    intvDateTime2[DATE_TIME_SIZE];
		char    intvDateTime3[DATE_TIME_SIZE];
		varchar intvRemark1[DELWAT_REMARKS_SIZE];
		varchar intvRemark2[DELWAT_REMARKS_SIZE];
		varchar intvRemark3[DELWAT_REMARKS_SIZE];
		char    intvBranch1[BRANCH_CODE_SIZE];
		char    intvBranch2[BRANCH_CODE_SIZE];
		char    intvBranch3[BRANCH_CODE_SIZE];
		char    operId1[USER_ID_SIZE];
		char    operId2[USER_ID_SIZE];
		char    operId3[USER_ID_SIZE];
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End
		
	   }local_rec;
	   
	 struct
	  {	
		short int applid;
		short int filerefno_ind;
		short int txncode_ind;
		short int idtype_ind;
		short int idno_ind;
		short int currlongname_ind;
		short int address1_ind;
		short int address2_ind;
		short int address3_ind;
		short int citycode_ind;
		short int statecode_ind;
		short int postcode_ind;
		short int contactno_ind;
		short int branchcode_ind;
		short int intvbranch_ind;
		short int intvdatetime_ind;
		short int intvstatus_ind;
		short int regdate_ind;
		short int timestamp_ind;
		short int userid_ind;
		short int dlewatremarks_ind;
		short int paneldes_ind;
		short int sendgscflag_ind;
		short int intvname_ind; 
		short int panelname_ind;
		short int panelremarks_ind;
		short int residentstat_ind;
        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
    	short int rejectDate_ind;
    	short int appealDate_ind;
    	short int hostRejectDate_ind;
    	short int hostAppealDate_ind;
    	short int iDllSabah_ind;
    	short int iIntvCount_ind;
    	short int intvDateTime1_ind;
    	short int intvDateTime2_ind;
    	short int intvDateTime3_ind;
    	short int intvRemark1_ind;
    	short int intvRemark2_ind;
    	short int intvRemark3_ind;
    	short int intvBranch1_ind;
    	short int intvBranch2_ind;
    	short int intvBranch3_ind;
    	short int intvBranch3_ind;
    	short int operId1_ind;
    	short int operId2_ind;
    	short int operId3_ind;
        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-END
	   }local_rec_ind;
	   	
		int cnt;

	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN

	#ifdef DEBUG
		userlog("input idtype : %s",idtype);
		userlog("input idno : %s",idno);
	#endif

	
	strcpy(lidtype.arr,idtype);
	strcpy(lidno.arr,idno);
	
	setlen(lidtype);
	setnull(lidtype);
	setlen(lidno);	
	setnull(lidno);

	#ifdef DEBUG
		userlog(" lidtype : %s",lidtype.arr);
		userlog(" lidno : %s",lidno.arr);
	#endif
	
	EXEC SQL DECLARE regn_id_cur CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS,	TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,
			INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE IDTYPE = :lidtype
		AND   IDNO   = :lidno;


	EXEC SQL OPEN regn_id_cur;

	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" get_regn_dlewat_data : Error in opening the cursor regn_id_cur : %s", SQLMSG);
	#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_id_cur");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_id_cur : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
	}
	
	for(cnt=0;cnt<regn_dlewat_cnt;cnt++,regn_rec++)
	{
	  memset(&local_rec,'\0',sizeof(local_rec));
	  memset(&local_rec_ind,'\0',sizeof(local_rec_ind));
	
	  EXEC SQL FETCH regn_id_cur 
				INTO :local_rec INDICATOR :local_rec_ind;

	  if(NO_DATA_FOUND) break;

	  if (SQLCODE)
	   {
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_id_cur : %s", SQLMSG);
		#endif
			/* Log the error */
			strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in fetching the cursor regn_id_cur");
			sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in fetching the cursor regn_id_cur : %s", SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);

			EXEC SQL CLOSE regn_id_cur;

			return CURSOR_FETCH_ERROR;
	   }

		setnull(local_rec.applid);
		setnull(local_rec.filerefno);
		setnull(local_rec.idno);
		setnull(local_rec.currlongname);
		setnull(local_rec.address1);
		setnull(local_rec.address2);
		setnull(local_rec.address3);
		setnull(local_rec.contactno);
		setnull(local_rec.dlewatremarks);		
		setnull(local_rec.intvname);
		setnull(local_rec.panelname);
		setnull(local_rec.panelremarks);		
		

	#ifdef DEBUG
		userlog(" ----> from local variables for idno&idtype <----");		
		userlog(" applid : %s",local_rec.applid.arr);
		userlog(" filerefno : %s",local_rec.filerefno.arr);
		userlog(" txncode : %s",local_rec.txncode);
		userlog(" idtype : %s",local_rec.idtype);
		userlog(" idno : %s",local_rec.idno.arr);
		userlog(" currlongname : %s",local_rec.currlongname.arr);
		userlog(" address1 : %s",local_rec.address1.arr);
		userlog(" address2 : %s",local_rec.address2.arr);
		userlog(" address3 : %s",local_rec.address3.arr);
		userlog(" citycode : %d",local_rec.citycode);
		userlog(" statecode : %s",local_rec.statecode);
		userlog(" postcode : %s",local_rec.postcode);
		userlog(" contactno : %s",local_rec.contactno.arr);
		userlog(" branchcode : %s",local_rec.branchcode);
		userlog(" intvbranch : %s",local_rec.intvbranch);
		userlog(" intvdatetime : %s",local_rec.intvdatetime);
		userlog(" intvstatus : %c",local_rec.intvstatus);
		userlog(" regdate : %s",local_rec.regdate);
		userlog(" timestamp : %s",local_rec.timestamp);
		userlog(" userid : %s",local_rec.userid);
		userlog(" dlewatremarks : %s",local_rec.dlewatremarks.arr);
		userlog(" paneldes : %c",local_rec.paneldes);	
		userlog(" sendgscflag : %c",local_rec.sendgscflag);
		userlog("intvname %s\n", local_rec.intvname.arr); 
		userlog("panelname %s\n", local_rec.panelname.arr); 
		userlog("panelremarks %s\n", local_rec.panelremarks.arr); 
		userlog("residentstat %c\n", local_rec.residentstat); 
		
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_dlewat->rejectDate);
		userlog("appealDate %s\n", regn_dlewat->appealDate);
		userlog("hostRejectDate %s\n", regn_dlewat->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_dlewat->hostAppealDate);
		userlog("iDllSabah %d\n", regn_dlewat->iDllSabah);
		userlog("iIntvCount %d\n", regn_dlewat->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_dlewat->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_dlewat->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_dlewat->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_dlewat->intvRemark1);
		userlog("intvRemark2 %s\n", regn_dlewat->intvRemark2);
		userlog("intvRemark3 %s\n", regn_dlewat->intvRemark3);
		userlog("intvBranch1 %s\n", regn_dlewat->intvBranch1);
		userlog("intvBranch2 %s\n", regn_dlewat->intvBranch2);
		userlog("intvBranch3 %s\n", regn_dlewat->intvBranch3);
		userlog("operId1 %s\n", regn_dlewat->operId1);
		userlog("operId2 %s\n", regn_dlewat->operId2);
		userlog("operId3 %s\n", regn_dlewat->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End

	#endif


		strcpy(regn_rec->applid, local_rec.applid.arr);

		if(local_rec_ind.filerefno_ind != -1)
			strcpy(regn_rec->filerefno, local_rec.filerefno.arr);

		if(local_rec_ind.txncode_ind != -1)
			strcpy(regn_rec->txncode, local_rec.txncode);

		if(local_rec_ind.idtype_ind != -1)
			strcpy(regn_rec->idtype, local_rec.idtype);

		if(local_rec_ind.idno_ind != -1)
			strcpy(regn_rec->idno, local_rec.idno.arr);

		if(local_rec_ind.currlongname_ind != -1)
			strcpy(regn_rec->currlongname, local_rec.currlongname.arr);

		if(local_rec_ind.address1_ind != -1)
			strcpy(regn_rec->address1, local_rec.address1.arr);

		if(local_rec_ind.address2_ind != -1)
			strcpy(regn_rec->address2, local_rec.address2.arr);

		if(local_rec_ind.address3_ind != -1)
			strcpy(regn_rec->address3, local_rec.address3.arr);

		if(local_rec_ind.citycode_ind != -1)
			regn_rec->citycode = local_rec.citycode;

		if(local_rec_ind.statecode_ind != -1)
			strcpy(regn_rec->statecode, local_rec.statecode);

		if(local_rec_ind.postcode_ind != -1)
			strcpy(regn_rec->postcode, local_rec.postcode);

		if(local_rec_ind.contactno_ind != -1)
			strcpy(regn_rec->contactno, local_rec.contactno.arr);

		if(local_rec_ind.branchcode_ind != -1)
			strcpy(regn_rec->branchcode, local_rec.branchcode);

		if(local_rec_ind.intvbranch_ind != -1)
			strcpy(regn_rec->intvbranch, local_rec.intvbranch);

		if(local_rec_ind.intvdatetime_ind != -1)
			strcpy(regn_rec->intvdatetime, local_rec.intvdatetime);

		if(local_rec_ind.intvstatus_ind != -1)
			regn_rec->intvstatus = local_rec.intvstatus;

		if(local_rec_ind.regdate_ind != -1)
			strcpy(regn_rec->regdate, local_rec.regdate);

		if(local_rec_ind.timestamp_ind != -1)
			strcpy(regn_rec->timestamp, local_rec.timestamp);

		if(local_rec_ind.userid_ind != -1)
			strcpy(regn_rec->userid, local_rec.userid);

		if(local_rec_ind.dlewatremarks_ind != -1)
			strcpy(regn_rec->dlewatremarks, local_rec.dlewatremarks.arr);

		if(local_rec_ind.paneldes_ind != -1)
			regn_rec->paneldes = local_rec.paneldes;

		if(local_rec_ind.sendgscflag_ind != -1)
			regn_rec->sendgscflag = local_rec.sendgscflag;

		if(local_rec_ind.intvname_ind != -1)
			strcpy(regn_rec->intvname, local_rec.intvname.arr);

		if(local_rec_ind.panelname_ind != -1)
			strcpy(regn_rec->panelname, local_rec.panelname.arr);
		
		if(local_rec_ind.panelremarks_ind != -1)
			strcpy(regn_rec->panelremarks, local_rec.panelremarks.arr);

		if(local_rec_ind.residentstat_ind != -1)
			regn_rec->residentstat = local_rec.residentstat;

		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		if(local_rec_ind.rejectDate_ind != -1)
			strcpy(regn_rec->rejectDate_ind, local_rec.rejectDate.arr);

		if(local_rec_ind.appealDate_ind != -1)
			strcpy(regn_rec->appealDate_ind, local_rec.appealDate.arr);
		
		if(local_rec_ind.hostRejectDate_ind != -1)
			strcpy(regn_rec->hostRejectDate, local_rec.hostRejectDate.arr);

		if(local_rec_ind.hostAppealDate_ind != -1)
			regn_rec->hostAppealDate = local_rec.hostAppealDate.arr;		
		
		if(local_rec_ind.iDllSabah_ind != -1)
			strcpy(regn_rec->iDllSabah, local_rec.iDllSabah);

		if(local_rec_ind.iIntvCount_ind != -1)
			strcpy(regn_rec->iIntvCount, local_rec.iIntvCount);
		
		if(local_rec_ind.intvDateTime1_ind != -1)
			strcpy(regn_rec->intvDateTime1, local_rec.intvDateTime1.arr);

		if(local_rec_ind.intvDateTime2_ind != -1)
			regn_rec->intvDateTime2 = local_rec.intvDateTime2.arr;	
		
		if(local_rec_ind.intvDateTime3_ind != -1)
			regn_rec->intvDateTime3 = local_rec.intvDateTime3.arr;	
		
		if(local_rec_ind.intvRemark1_ind != -1)
			strcpy(regn_rec->intvRemark1, local_rec.intvRemark1.arr);

		if(local_rec_ind.intvRemark2_ind != -1)
			regn_rec->intvRemark2 = local_rec.intvRemark2.arr;	
		
		if(local_rec_ind.intvRemark3_ind != -1)
			regn_rec->intvRemark3 = local_rec.intvRemark3.arr;

		if(local_rec_ind.intvBranch1_ind != -1)
			strcpy(regn_rec->intvBranch1, local_rec.intvBranch1.arr);

		if(local_rec_ind.intvBranch2_ind != -1)
			regn_rec->intvBranch2 = local_rec.intvBranch2.arr;	
		
		if(local_rec_ind.intvBranch3_ind != -1)
			regn_rec->intvBranch3 = local_rec.intvBranch3.arr;		
		
		if(local_rec_ind.operId1_ind != -1)
			strcpy(regn_rec->operId1, local_rec.operId1.arr);

		if(local_rec_ind.operId2_ind != -1)
			regn_rec->operId2 = local_rec.operId2.arr;	
		
		if(local_rec_ind.operId3_ind != -1)
			regn_rec->operId3_ind = local_rec.operId3.arr;		
	
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020

		
		
	#ifdef DEBUG
		userlog(" ----> from the buffer idno&idtype<----");			
		userlog("applid %s\n", regn_rec->applid); 
		userlog("fileref %s\n", regn_rec->filerefno); 
		userlog("txncode %s\n", regn_rec->txncode); 
		userlog("idtype %s\n", regn_rec->idtype);
		userlog("idno %s\n", regn_rec->idno); 
		userlog("currlongname %s\n", regn_rec->currlongname); 
		userlog("address1 %s\n", regn_rec->address1); 
		userlog("address2 %s\n", regn_rec->address2); 
		userlog("address3 %s\n", regn_rec->address3); 
		userlog("citycode %d\n", regn_rec->citycode);
		userlog("statecode %s\n", regn_rec->statecode); 
		userlog("postcode %s\n", regn_rec->postcode); 
		userlog("contactno %s\n", regn_rec->contactno); 
		userlog("branchcode %s\n", regn_rec->branchcode); 
		userlog("intvbranch %d\n", regn_rec->intvbranch);
		userlog("intvdatetime %s\n", regn_rec->intvdatetime); 
		userlog("intvstatus %c\n", regn_rec->intvstatus); 
		userlog("regdate %s\n", regn_rec->regdate); 
		userlog("timestamp %s\n", regn_rec->timestamp);		
		userlog("userid %s\n", regn_rec->userid); 
		userlog("delwatremarks %s\n", regn_rec->dlewatremarks); 
		userlog("paneldes %c\n", regn_rec->paneldes); 		

		userlog("intvname %s\n", regn_rec->intvname); 
		userlog("panelname %s\n", regn_rec->panelname); 
		userlog("panelremarks %s\n", regn_rec->panelremarks); 
		userlog("residentstat %c\n", regn_rec->residentstat); 
		
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_rec->rejectDate);
		userlog("appealDate %s\n", regn_rec->appealDate);
		userlog("hostRejectDate %s\n", regn_rec->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_rec->hostAppealDate);
		userlog("iDllSabah %d\n", regn_rec->iDllSabah);
		userlog("iIntvCount %d\n", regn_rec->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_rec->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_rec->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_rec->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_rec->intvRemark1);
		userlog("intvRemark2 %s\n", regn_rec->intvRemark2);
		userlog("intvRemark3 %s\n", regn_rec->intvRemark3);
		userlog("intvBranch1 %s\n", regn_rec->intvBranch1);
		userlog("intvBranch2 %s\n", regn_rec->intvBranch2);
		userlog("intvBranch3 %s\n", regn_rec->intvBranch3);
		userlog("operId1 %s\n", regn_rec->operId1);
		userlog("operId2 %s\n", regn_rec->operId2);
		userlog("operId3 %s\n", regn_rec->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End

	#endif

	} /* end of for loop */

	EXEC SQL CLOSE regn_id_cur;

	return SUCCESS;
}

int get_regn_dlewat_data_for_fromdate(REGN_DLEWAT_T *regn_rec,
			int regn_dlewat_cnt,GET_LATE_REG_L2_REQ_T *req,void * ctx)
{
	EXEC SQL BEGIN DECLARE SECTION;

	varchar lfromdate[DATE_SIZE] = {0};
	varchar ltodate[DATE_SIZE] = {0};
	char lintvstatus = '\0';
	varchar lintvbranch[BRANCH_CODE_SIZE] = {0};		
	varchar	req_hdr_bcode[7] = {0};	
	char lbrcode[7];
		
	  struct
	   {
		varchar applid[APP_ID_SIZE];
		varchar filerefno[FILE_REFNO_SIZE];
		char    txncode[TXN_CODE_SIZE];
		char    idtype[ID_TYPE_SIZE];
		varchar idno[ID_SIZE];
		varchar currlongname[CUR_LONG_NAME_SIZE];
		varchar address1[ADDRESS_SIZE];
		varchar address2[ADDRESS_SIZE];
		varchar address3[ADDRESS_SIZE];
		int     citycode;
		char    statecode[STATE_CODE_SIZE];
		char    postcode[POST_CODE_SIZE];
		varchar contactno[CONTACT_NO_SIZE];
		char    branchcode[BRANCH_CODE_SIZE];
		char    intvbranch[BRANCH_CODE_SIZE];
		char    intvdatetime[DATE_TIME_SIZE];
		char    intvstatus;
		char    regdate[DATE_TIME_SIZE];
		char    timestamp[DATE_TIME_SIZE];
		char    userid[USER_ID_SIZE];
		varchar dlewatremarks[DELWAT_REMARKS_SIZE];
		char    paneldes;
		char	sendgscflag;
		varchar intvname[INTVNAME_SIZE]; 
		varchar panelname[INTVNAME_SIZE];
		varchar panelremarks[DELWAT_REMARKS_SIZE];
		char residentstat;
	    //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
	    char    rejectDate [DATE_TIME_SIZE];
	    char    appealDate [DATE_TIME_SIZE];
	    char    hostRejectDate [DATE_TIME_SIZE];
	    char    hostAppealDate [DATE_TIME_SIZE];
	    int     iDllSabah;	
	    int     iIntvCount;
	    char    intvDateTime1[DATE_TIME_SIZE];
	    char    intvDateTime2[DATE_TIME_SIZE];
	    char    intvDateTime3[DATE_TIME_SIZE];
	    char    intvRemark1[DELWAT_REMARKS_SIZE];
	    char    intvRemark2[DELWAT_REMARKS_SIZE];
	    char    intvRemark3[DELWAT_REMARKS_SIZE];
	    char    intvBranch1[BRANCH_CODE_SIZE];
	    char    intvBranch2[BRANCH_CODE_SIZE];
	    char    intvBranch3[BRANCH_CODE_SIZE];
	    char    operId1[USER_ID_SIZE];
	    char    operId2[USER_ID_SIZE];
	    char    operId3[USER_ID_SIZE];
	    //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End

		
	   }local_rec;
	   
	 struct
	  {	
		short int applid_ind;
		short int filerefno_ind;
		short int txncode_ind;
		short int idtype_ind;
		short int idno_ind;
		short int currlongname_ind;
		short int address1_ind;
		short int address2_ind;
		short int address3_ind;
		short int citycode_ind;
		short int statecode_ind;
		short int postcode_ind;
		short int contactno_ind;
		short int branchcode_ind;
		short int intvbranch_ind;
		short int intvdatetime_ind;
		short int intvstatus_ind;
		short int regdate_ind;
		short int timestamp_ind;
		short int userid_ind;
		short int dlewatremarks_ind;
		short int paneldes_ind;
		short int sendgscflag_ind;
		short int intvname_ind; 
		short int panelname_ind;
		short int panelremarks_ind;
		short int residentstat_ind;

        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
	    short int rejectDate_ind;
	    short int appealDate_ind;
	    short int hostRejectDate_ind;
	    short int hostAppealDate_ind;
	    short int iDllSabah_ind;
	    short int iIntvCount_ind;
	    short int intvDateTime1_ind;
	    short int intvDateTime2_ind;
	    short int intvDateTime3_ind;
	    short int intvRemark1_ind;
	    short int intvRemark2_ind;
	    short int intvRemark3_ind;
	    short int intvBranch1_ind;
	    short int intvBranch2_ind;
	    short int intvBranch3_ind;
	    short int operId1_ind;
	    short int operId2_ind;
	    short int operId3_ind;
        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
	
	   }local_rec_ind;
	   	
		int cnt = 0;

	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN


	strcpy(lbrcode,req->header.branch_code);
	
	strncpy((char*)req_hdr_bcode.arr, lbrcode,2);
	setlen(req_hdr_bcode);
	
		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input fromdate (req->fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_data: input todate (req->tdate): %s",req->todate);
			userlog("get_regn_dlewat_date_cnt: input branchcode (req_hdr_bcode): %s",req_hdr_bcode.arr);			
		#endif		

		strcpy(lfromdate.arr,req->fromdate);
		strcpy(ltodate.arr,req->todate);

		setlen(lfromdate);
		setnull(lfromdate);
		setlen(ltodate);
		setnull(ltodate);
		

		#ifdef DEBUG
			userlog("get_regn_dlewat_date_cnt:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_date_cnt:  ltodate : %s",ltodate.arr);
		#endif
				
		
	EXEC SQL DECLARE regn_date_cur CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,INTVNAME,
			PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH 
			
		FROM  REGN_DLEWAT
		WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
			BETWEEN TO_DATE(:lfromdate,'DDMMYYYY')
			AND	TO_DATE(:ltodate,'DDMMYYYY')
			AND SUBSTR(BRANCHCODE,1,2) = :req_hdr_bcode;
		

	EXEC SQL OPEN regn_date_cur;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur4 for fromdate &todate: %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur4 for fromdate &todate");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur4 for fromdate &todate : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
		}
		userlog("after opening the curosr");

		for(cnt=0;cnt<regn_dlewat_cnt;cnt++,regn_rec++)
		{
			userlog("Inside the for loop count : %d",cnt);
			memset(&local_rec,'\0',sizeof(local_rec));
			memset(&local_rec_ind,'\0',sizeof(local_rec_ind));


	   userlog("before the cursor fetch for regn_date_cur ");

	   EXEC SQL FETCH regn_date_cur 
				INTO :local_rec INDICATOR :local_rec_ind;

	   userlog("after the cursor fetch for regn_date_cur ");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);

	   if(NO_DATA_FOUND) break;

	   if (SQLCODE)
	    {		 
			/* Log the error */
			strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in fetching the cursor regn_date_cur");
			sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in fetching the cursor regn_date_cur : %s", SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);

			#ifdef DEBUG
				userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur4 : %s", SQLMSG);
			#endif

			EXEC SQL CLOSE regn_date_cur;

			return CURSOR_FETCH_ERROR;
	    }
		

		setnull(local_rec.applid);
		setnull(local_rec.filerefno);
		setnull(local_rec.idno);
		setnull(local_rec.currlongname);
		setnull(local_rec.address1);
		setnull(local_rec.address2);
		setnull(local_rec.address3);
		setnull(local_rec.contactno);
		setnull(local_rec.dlewatremarks);			
		setnull(local_rec.intvname);
		setnull(local_rec.panelname);
		setnull(local_rec.panelremarks);

	   userlog("outside the cursor fetch for date after the fetch");
		
	 #ifdef DEBUG
		userlog(" --*--> from local variables  <--*--");		
		userlog(" applid : %s",local_rec.applid.arr);
		userlog(" filerefno : %s",local_rec.filerefno.arr);
		userlog(" txncode : %s",local_rec.txncode);
		userlog(" idtype : %s",local_rec.idtype);
		userlog(" idno : %s",local_rec.idno.arr);
		userlog(" currlongname : %s",local_rec.currlongname.arr);
		userlog(" address1 : %s",local_rec.address1.arr);
		userlog(" address2 : %s",local_rec.address2.arr);
		userlog(" address3 : %s",local_rec.address3.arr);
		userlog(" citycode : %d",local_rec.citycode);
		userlog(" statecode : %s",local_rec.statecode);
		userlog(" postcode : %s",local_rec.postcode);
		userlog(" contactno : %s",local_rec.contactno.arr);
		userlog(" branchcode : %s",local_rec.branchcode);
		userlog(" intvbranch : %s",local_rec.intvbranch);
		userlog(" intvdatetime : %s",local_rec.intvdatetime);
		userlog(" intvstatus : %c",local_rec.intvstatus);
		userlog(" regdate : %s",local_rec.regdate);
		userlog(" timestamp : %s",local_rec.timestamp);
		userlog(" userid : %s",local_rec.userid);
		userlog(" dlewatremarks : %s",local_rec.dlewatremarks.arr);
		userlog(" paneldes : %c",local_rec.paneldes);
		userlog(" sendgscflag : %c",local_rec.sendgscflag);
		userlog("intvname %s\n", local_rec.intvname.arr); 
		userlog("panelname %s\n", local_rec.panelname.arr); 
		userlog("panelremarks %s\n", local_rec.panelremarks.arr); 
		userlog("residentstat %c\n", local_rec.residentstat); 
	 	//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_rec->rejectDate);
		userlog("appealDate %s\n", regn_rec->appealDate);
		userlog("hostRejectDate %s\n", regn_rec->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_rec->hostAppealDate);
		userlog("iDllSabah %d\n", regn_rec->iDllSabah);
		userlog("iIntvCount %d\n", regn_rec->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_rec->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_rec->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_rec->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_rec->intvRemark1);
		userlog("intvRemark2 %s\n", regn_rec->intvRemark2);
		userlog("intvRemark3 %s\n", regn_rec->intvRemark3);
		userlog("intvBranch1 %s\n", regn_rec->intvBranch1);
		userlog("intvBranch2 %s\n", regn_rec->intvBranch2);
		userlog("intvBranch3 %s\n", regn_rec->intvBranch3);
		userlog("operId1 %s\n", regn_rec->operId1);
		userlog("operId2 %s\n", regn_rec->operId2);
		userlog("operId3 %s\n", regn_rec->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End


	 #endif


		strcpy(regn_rec->applid, local_rec.applid.arr);

		if(local_rec_ind.filerefno_ind != -1)
			strcpy(regn_rec->filerefno, local_rec.filerefno.arr);

		if(local_rec_ind.txncode_ind != -1)
			strcpy(regn_rec->txncode, local_rec.txncode);

		if(local_rec_ind.idtype_ind != -1)
			strcpy(regn_rec->idtype, local_rec.idtype);

		if(local_rec_ind.idno_ind != -1)
			strcpy(regn_rec->idno, local_rec.idno.arr);

		if(local_rec_ind.currlongname_ind != -1)
			strcpy(regn_rec->currlongname, local_rec.currlongname.arr);

		if(local_rec_ind.address1_ind != -1)
			strcpy(regn_rec->address1, local_rec.address1.arr);

		if(local_rec_ind.address2_ind != -1)
			strcpy(regn_rec->address2, local_rec.address2.arr);

		if(local_rec_ind.address3_ind != -1)
			strcpy(regn_rec->address3, local_rec.address3.arr);

		if(local_rec_ind.citycode_ind != -1)
			regn_rec->citycode = local_rec.citycode;

		if(local_rec_ind.statecode_ind != -1)
			strcpy(regn_rec->statecode, local_rec.statecode);

		if(local_rec_ind.postcode_ind != -1)
			strcpy(regn_rec->postcode, local_rec.postcode);

		if(local_rec_ind.contactno_ind != -1)
			strcpy(regn_rec->contactno, local_rec.contactno.arr);

		if(local_rec_ind.branchcode_ind != -1)
			strcpy(regn_rec->branchcode, local_rec.branchcode);

		if(local_rec_ind.intvbranch_ind != -1)
			strcpy(regn_rec->intvbranch, local_rec.intvbranch);

		if(local_rec_ind.intvdatetime_ind != -1)
			strcpy(regn_rec->intvdatetime, local_rec.intvdatetime);

		if(local_rec_ind.intvstatus_ind != -1)
			regn_rec->intvstatus = local_rec.intvstatus;

		if(local_rec_ind.regdate_ind != -1)
			strcpy(regn_rec->regdate, local_rec.regdate);

		if(local_rec_ind.timestamp_ind != -1)
			strcpy(regn_rec->timestamp, local_rec.timestamp);

		if(local_rec_ind.userid_ind != -1)
			strcpy(regn_rec->userid, local_rec.userid);

		if(local_rec_ind.dlewatremarks_ind != -1)
			strcpy(regn_rec->dlewatremarks, local_rec.dlewatremarks.arr);

		if(local_rec_ind.paneldes_ind != -1)
			regn_rec->paneldes = local_rec.paneldes;

		if(local_rec_ind.sendgscflag_ind != -1)
			regn_rec->sendgscflag = local_rec.sendgscflag;

		if(local_rec_ind.intvname_ind != -1)
			strcpy(regn_rec->intvname, local_rec.intvname.arr);

		if(local_rec_ind.panelname_ind != -1)
			strcpy(regn_rec->panelname, local_rec.panelname.arr);
		
		if(local_rec_ind.panelremarks_ind != -1)
			strcpy(regn_rec->panelremarks, local_rec.panelremarks.arr);

		if(local_rec_ind.residentstat_ind != -1)
			regn_rec->residentstat = local_rec.residentstat;

		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		if(local_rec_ind.rejectDate_ind != -1)
			strcpy(regn_rec->rejectDate_ind, local_rec.rejectDate.arr);

		if(local_rec_ind.appealDate_ind != -1)
			strcpy(regn_rec->appealDate_ind, local_rec.appealDate.arr);
		
		if(local_rec_ind.hostRejectDate_ind != -1)
			strcpy(regn_rec->hostRejectDate, local_rec.hostRejectDate.arr);

		if(local_rec_ind.hostAppealDate_ind != -1)
			regn_rec->hostAppealDate = local_rec.hostAppealDate.arr;		
		
		if(local_rec_ind.iDllSabah_ind != -1)
			strcpy(regn_rec->iDllSabah, local_rec.iDllSabah);

		if(local_rec_ind.iIntvCount_ind != -1)
			strcpy(regn_rec->iIntvCount, local_rec.iIntvCount);
		
		if(local_rec_ind.intvDateTime1_ind != -1)
			strcpy(regn_rec->intvDateTime1, local_rec.intvDateTime1.arr);

		if(local_rec_ind.intvDateTime2_ind != -1)
			regn_rec->intvDateTime2 = local_rec.intvDateTime2.arr;	
		
		if(local_rec_ind.intvDateTime3_ind != -1)
			regn_rec->intvDateTime3 = local_rec.intvDateTime3.arr;	
		
		if(local_rec_ind.intvRemark1_ind != -1)
			strcpy(regn_rec->intvRemark1, local_rec.intvRemark1.arr);

		if(local_rec_ind.intvRemark2_ind != -1)
			regn_rec->intvRemark2 = local_rec.intvRemark2.arr;	
		
		if(local_rec_ind.intvRemark3_ind != -1)
			regn_rec->intvRemark3 = local_rec.intvRemark3.arr;

		if(local_rec_ind.intvBranch1_ind != -1)
			strcpy(regn_rec->intvBranch1, local_rec.intvBranch1.arr);

		if(local_rec_ind.intvBranch2_ind != -1)
			regn_rec->intvBranch2 = local_rec.intvBranch2.arr;	
		
		if(local_rec_ind.intvBranch3_ind != -1)
			regn_rec->intvBranch3 = local_rec.intvBranch3.arr;		
		
		if(local_rec_ind.operId1_ind != -1)
			strcpy(regn_rec->operId1, local_rec.operId1.arr);

		if(local_rec_ind.operId2_ind != -1)
			regn_rec->operId2 = local_rec.operId2.arr;	
		
		if(local_rec_ind.operId3_ind != -1)
			regn_rec->operId3_ind = local_rec.operId3.arr;		
	
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		

		
	 #ifdef DEBUG
		userlog(" --*--> from the buffer <--*--");			
		userlog("applid %s\n", regn_rec->applid);
		userlog("fileref %s\n", regn_rec->filerefno); 
		userlog("txncode %s\n", regn_rec->txncode); 
		userlog("idtype %s\n", regn_rec->idtype);
		userlog("idno %s\n", regn_rec->idno); 
		userlog("currlongname %s\n", regn_rec->currlongname); 
		userlog("address1 %s\n", regn_rec->address1); 
		userlog("address2 %s\n", regn_rec->address2); 
		userlog("address3 %s\n", regn_rec->address3); 
		userlog("citycode %d\n", regn_rec->citycode);
		userlog("statecode %s\n", regn_rec->statecode); 
		userlog("postcode %s\n", regn_rec->postcode); 
		userlog("contactno %s\n", regn_rec->contactno); 
		userlog("branchcode %s\n", regn_rec->branchcode); 
		userlog("intvbranch %d\n", regn_rec->intvbranch);
		userlog("intvdatetime %s\n", regn_rec->intvdatetime); 
		userlog("intvstatus %c\n", regn_rec->intvstatus); 
		userlog("regdate %s\n", regn_rec->regdate); 
		userlog("timestamp %s\n", regn_rec->timestamp);		
		userlog("userid %s\n", regn_rec->userid); 
		userlog("delwatremarks %s\n", regn_rec->dlewatremarks); 
		userlog("paneldes %c\n", regn_rec->paneldes); 		
		userlog("intvname %s\n", regn_rec->intvname); 
		userlog("panelname %s\n", regn_rec->panelname); 
		userlog("panelremarks %s\n", regn_rec->panelremarks); 
		userlog("residentstat %c\n", regn_rec->residentstat); 
	 	//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_rec->rejectDate);
		userlog("appealDate %s\n", regn_rec->appealDate);
		userlog("hostRejectDate %s\n", regn_rec->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_rec->hostAppealDate);
		userlog("iDllSabah %d\n", regn_rec->iDllSabah);
		userlog("iIntvCount %d\n", regn_rec->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_rec->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_rec->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_rec->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_rec->intvRemark1);
		userlog("intvRemark2 %s\n", regn_rec->intvRemark2);
		userlog("intvRemark3 %s\n", regn_rec->intvRemark3);
		userlog("intvBranch1 %s\n", regn_rec->intvBranch1);
		userlog("intvBranch2 %s\n", regn_rec->intvBranch2);
		userlog("intvBranch3 %s\n", regn_rec->intvBranch3);
		userlog("operId1 %s\n", regn_rec->operId1);
		userlog("operId2 %s\n", regn_rec->operId2);
		userlog("operId3 %s\n", regn_rec->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End

	 #endif
	
	 } /* end of for loop */

	 EXEC SQL CLOSE regn_date_cur;

	 return SUCCESS;
	
}



/*********************************************************************/
/* Function name: get_regn_dlewat_data_for_date						 */
/* Description	: This function selects data from REGN_DLEWAT table	 */
/*				   based on FROMDATE and TODATE or INTVSTATUS		 */
/*				 or INTVBRANCH from the input buffer				 */
/* Input		: REGN_DLEWAT_T,FROMDATE,TODATE,INTVSTATUS,INTVBRANCH*/
/* Return values: GMPC_GOOD, ret_val,SELECT_ERROR					 */
/* Limitations	:													 */
/*********************************************************************/
/*int get_regn_dlewat_data_for_date(REGN_DLEWAT_T *regn_rec,char req_fdate[],
			char req_tdate[], char req_istatus,char req_ibranch[],
			int regn_dlewat_cnt,GET_LATE_REG_L2_REQ_T *req) */
int get_regn_dlewat_data_for_date(REGN_DLEWAT_T *regn_rec,
			int regn_dlewat_cnt,GET_LATE_REG_L2_REQ_T *req,void * ctx)
{
	EXEC SQL BEGIN DECLARE SECTION;

	varchar lfromdate[DATE_SIZE] = {0};
	varchar ltodate[DATE_SIZE] = {0};
	char lintvstatus = '\0';
	varchar lintvbranch[BRANCH_CODE_SIZE] = {0};		
	varchar	lbcode[7] = {0};	
	char lbrcode[7];
		
	  struct
	   {
		varchar applid[APP_ID_SIZE];
		varchar filerefno[FILE_REFNO_SIZE];
		char    txncode[TXN_CODE_SIZE];
		char    idtype[ID_TYPE_SIZE];
		varchar idno[ID_SIZE];
		varchar currlongname[CUR_LONG_NAME_SIZE];
		varchar address1[ADDRESS_SIZE];
		varchar address2[ADDRESS_SIZE];
		varchar address3[ADDRESS_SIZE];
		int     citycode;
		char    statecode[STATE_CODE_SIZE];
		char    postcode[POST_CODE_SIZE];
		varchar contactno[CONTACT_NO_SIZE];
		char    branchcode[BRANCH_CODE_SIZE];
		char    intvbranch[BRANCH_CODE_SIZE];
		char    intvdatetime[DATE_TIME_SIZE];
		char    intvstatus;
		char    regdate[DATE_TIME_SIZE];
		char    timestamp[DATE_TIME_SIZE];
		char    userid[USER_ID_SIZE];
		varchar dlewatremarks[DELWAT_REMARKS_SIZE];
		char    paneldes;
		char	sendgscflag;
		varchar intvname[INTVNAME_SIZE]; 
		varchar panelname[INTVNAME_SIZE];
		varchar panelremarks[DELWAT_REMARKS_SIZE];
		char residentstat;
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		char    rejectDate [DATE_TIME_SIZE];
		char    appealDate [DATE_TIME_SIZE];
		char    hostRejectDate [DATE_TIME_SIZE];
		char    hostAppealDate [DATE_TIME_SIZE];
		int     iDllSabah;	
		int     iIntvCount;
		char    intvDateTime1[DATE_TIME_SIZE];
		char    intvDateTime2[DATE_TIME_SIZE];
		char    intvDateTime3[DATE_TIME_SIZE];
		varchar intvRemark1[DELWAT_REMARKS_SIZE];
		varchar intvRemark2[DELWAT_REMARKS_SIZE];
		varchar intvRemark3[DELWAT_REMARKS_SIZE];
		char    intvBranch1[BRANCH_CODE_SIZE];
		char    intvBranch2[BRANCH_CODE_SIZE];
		char    intvBranch3[BRANCH_CODE_SIZE];
		char    operId1[USER_ID_SIZE];
		char    operId2[USER_ID_SIZE];
		char    operId3[USER_ID_SIZE];
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End
		
	   }local_rec;
	   
	 struct
	  {	
		short int applid_ind;
		short int filerefno_ind;
		short int txncode_ind;
		short int idtype_ind;
		short int idno_ind;
		short int currlongname_ind;
		short int address1_ind;
		short int address2_ind;
		short int address3_ind;
		short int citycode_ind;
		short int statecode_ind;
		short int postcode_ind;
		short int contactno_ind;
		short int branchcode_ind;
		short int intvbranch_ind;
		short int intvdatetime_ind;
		short int intvstatus_ind;
		short int regdate_ind;
		short int timestamp_ind;
		short int userid_ind;
		short int dlewatremarks_ind;
		short int paneldes_ind;	
		short int sendgscflag_ind;
		short int intvname_ind; 
		short int panelname_ind;
		short int panelremarks_ind;
		short int residentstat_ind;
        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
    	short int rejectDate_ind;
    	short int appealDate_ind;
    	short int hostRejectDate_ind;
    	short int hostAppealDate_ind;
    	short int iDllSabah_ind;
    	short int iIntvCount_ind;
    	short int intvDateTime1_ind;
    	short int intvDateTime2_ind;
    	short int intvDateTime3_ind;
    	short int intvRemark1_ind;
    	short int intvRemark2_ind;
    	short int intvRemark3_ind;
    	short int intvBranch1_ind;
    	short int intvBranch2_ind;
    	short int intvBranch3_ind;
    	short int intvBranch3_ind;
    	short int operId1_ind;
    	short int operId2_ind;
    	short int operId3_ind;
        //Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-END

	   }local_rec_ind;
	   	
		int cnt = 0;

	sql_context pcCtx; // Modification for IJPN
	EXEC SQL END DECLARE SECTION;

	
	pcCtx = ctx; // Modification for IJPN
	EXEC SQL CONTEXT USE :pcCtx;// Modification for IJPN


	strcpy(lbrcode,req->header.branch_code);
	
	strncpy((char*)lbcode.arr, lbrcode,2);
	setlen(lbcode);
		
	
	if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	{

		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_data: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_data: input req_istatus (req_istatus): %c",req->intvstatus);
			userlog("get_regn_dlewat_data: input req_ibranch (req_ibranch): %s",req->intvbranch);
			userlog("get_regn_dlewat_data: input lbcode: %s",lbcode.arr);			
		#endif	
		
		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);
		lintvstatus = req->intvstatus;
		strcpy((char*)lintvbranch.arr,req->intvbranch);

		setlen(lfromdate);
		setlen(ltodate);
		setlen(lintvbranch);

	
		#ifdef DEBUG
			userlog("get_regn_dlewat_data:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_data:  ltodate : %s",ltodate.arr);
			userlog("get_regn_dlewat_data:  lintvstatus : %c",lintvstatus);
			userlog("get_regn_dlewat_data:  lintvbranch : %s",lintvbranch.arr);		
		#endif
				
		
	EXEC SQL DECLARE regn_date_cur1 CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 	USERID,DLEWATREMARKS, 
			PANELDES,SENDGSCFLAG,INTVNAME,PANELNAME,PANELREMARKS, 
			RESIDENTSTAT, REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
				BETWEEN TO_DATE(:lfromdate,'DDMMYYYY')
				AND	TO_DATE(:ltodate,'DDMMYYYY')
				AND INTVBRANCH = :lintvbranch
				AND INTVSTATUS = :lintvstatus;
						

	EXEC SQL OPEN regn_date_cur1;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur1 for fromdate ,todate ,status and branch: %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur1 for fromdate ,todate ,status and branch");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur1 for fromdate ,todate ,status and branch : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
		}
		userlog("after opening the curosr");
	
	}
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0'))
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_data: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_data: input req_istatus (req_istatus): %c",req->intvstatus);			
			userlog("get_regn_dlewat_data: input lbcode: %s",lbcode.arr);
		#endif	
			
		
		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);
		lintvstatus = req->intvstatus;		

		setlen(lfromdate);
		setlen(ltodate);
				
		#ifdef DEBUG
			userlog("get_regn_dlewat_data:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_data:  ltodate : %s",ltodate.arr);
			userlog("get_regn_dlewat_data:  lintvstatus : %c",lintvstatus);
			userlog("get_regn_dlewat_data:  lbcode: %s",lbcode.arr);			
		#endif
				
		
	EXEC SQL DECLARE regn_date_cur2 CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),INTVSTATUS,
			TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), TO_CHAR(TIMESTAMP,'DDMMYYYY'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG , INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
				BETWEEN TO_DATE(:lfromdate,'DDMMYYYY')
				AND	TO_DATE(:ltodate,'DDMMYYYY')				
				AND INTVSTATUS = :lintvstatus 
				AND SUBSTR(BRANCHCODE,1,2) = :lbcode;
		

	EXEC SQL OPEN regn_date_cur2;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur2 for fromdate ,todate and status: %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur2 for fromdate ,todate and status");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur2 for fromdate ,todate and status : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
		}
		userlog("after opening the curosr");

	}
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (strcmp(req->intvbranch,"\0") != 0))
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_data: input todate (req_tdate): %s",req->todate);			
			userlog("get_regn_dlewat_data: input req_ibranch (req_ibranch): %s",req->intvbranch);
			userlog("get_regn_dlewat_data: input branchcode (lbcode): %s",lbcode.arr);			
		#endif		

		
		strcpy((char*)lfromdate.arr,req->fromdate);
		strcpy((char*)ltodate.arr,req->todate);		
		strcpy((char*)lintvbranch.arr,req->intvbranch);

		setlen(lfromdate);
		setlen(ltodate);
		setlen(lintvbranch);

	
		#ifdef DEBUG
			userlog("get_regn_dlewat_data:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_data:  ltodate : %s",ltodate.arr);		
			userlog("get_regn_dlewat_data:  lintvbranch : %s",lintvbranch.arr);		
		#endif
				
		
	EXEC SQL DECLARE regn_date_cur3 CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,
			INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
				BETWEEN TO_DATE(:lfromdate,'DDMMYYYY')
				AND	TO_DATE(:ltodate,'DDMMYYYY')
				AND INTVBRANCH = :lintvbranch;				
						

	EXEC SQL OPEN regn_date_cur3;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur3 for fromdate ,todate and branch: %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur3 for fromdate ,todate and branch");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur3 for fromdate ,todate and branch : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
		}
		userlog("after opening the curosr");

	}
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0))
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input fromdate (req_fdate): %s",req->fromdate);
			userlog("get_regn_dlewat_data: input todate (req_tdate): %s",req->todate);
			userlog("get_regn_dlewat_data: input branchcode (lbcode): %s",lbcode.arr);			
		#endif		

		strcpy(lfromdate.arr,req->fromdate);
		strcpy(ltodate.arr,req->todate);

		setlen(lfromdate);
		setlen(ltodate);
		

		#ifdef DEBUG
			userlog("get_regn_dlewat_data:  lfromdate : %s",lfromdate.arr);
			userlog("get_regn_dlewat_data:  ltodate : %s",ltodate.arr);
			userlog("get_regn_dlewat_data:  lbcode: %s",lbcode.arr);
		#endif
				
		
	EXEC SQL DECLARE regn_date_cur4 CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,
			INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE TO_DATE(TO_CHAR(TO_DATE(SUBSTR(APPLID,1,8),'YYYYMMDD'),'DDMMYYYY'),'DDMMYYYY') 
				BETWEEN TO_DATE(:lfromdate,'DDMMYYYY')
				AND	TO_DATE(:ltodate,'DDMMYYYY')
				AND SUBSTR(BRANCHCODE,1,2) = :lbcode;
		

	EXEC SQL OPEN regn_date_cur4;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur4 for fromdate &todate: %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur4 for fromdate &todate");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur4 for fromdate &todate : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
		}
		userlog("after opening the curosr");

	}
	else if((req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input intvstatus (req_istatus): %c",req->intvstatus);			
			userlog("get_regn_dlewat_data: input intvbranch (req_ibranch): %s",req->intvbranch);
		#endif

		lintvstatus = req->intvstatus;
		strcpy((char*)lintvbranch.arr,req->intvbranch);

		setlen(lintvbranch);
		
		
		#ifdef DEBUG
			userlog("get_regn_dlewat_data:  lintvstatus : %c",lintvstatus);
			userlog("get_regn_dlewat_data:  lintvbranch : %s",lintvbranch.arr);
		#endif
		
	EXEC SQL DECLARE regn_date_cur5 CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,
			INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE INTVSTATUS = :lintvstatus
		AND INTVBRANCH   = :lintvbranch;
		

	EXEC SQL OPEN regn_date_cur5;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur5 for intvstatus and intvbranch: %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur5 for intvstatus and intvbranch");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur5 for intvstatus and intvbranch: %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;

		}
	}
	else if (req->intvstatus != '\0')
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input intvstatus (req_istatus): %c",req->intvstatus);
			userlog("get_regn_dlewat_data: input branchcode (lbcode): %s",lbcode.arr);
		#endif

		lintvstatus = req->intvstatus;
		
		
		#ifdef DEBUG
			userlog("get_regn_dlewat_data:  lintvstatus : %c",lintvstatus);
			userlog("get_regn_dlewat_data:  lbcode: %s",lbcode.arr);
		#endif
		
	EXEC SQL DECLARE regn_date_cur6 CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,
			INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE INTVSTATUS = :lintvstatus
		AND SUBSTR(BRANCHCODE,1,2) = :lbcode;


	EXEC SQL OPEN regn_date_cur6;
		
	if (SQLCODE != 0)
	{
	#ifdef DEBUG
		userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur6 for intvstatus: %s", SQLMSG);
	#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur6 for intvstatus");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur6 for intvstatus: %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
	}

	}
	else if (strcmp(req->intvbranch,"\0") != 0)
	{
		#ifdef DEBUG
			userlog("get_regn_dlewat_data: input intvbranch (req_ibranch): %s",req->intvbranch);			
		#endif

		
		strcpy(lintvbranch.arr,req->intvbranch);		
		setlen(lintvbranch);
				

		#ifdef DEBUG
			userlog("get_regn_dlewat_data:  lintvbranch : %s",lintvbranch.arr);			
		#endif
		
		EXEC SQL DECLARE regn_date_cur7 CURSOR FOR 
		SELECT APPLID,FILEREFNO,TXNCODE,IDTYPE,IDNO,CURRLONGNAME,ADDRESS1,
			ADDRESS2, ADDRESS3,CITYCODE,STATECODE,POSTCODE, CONTACTNO,
			BRANCHCODE,INTVBRANCH,TO_CHAR(INTVDATETIME,'DDMMYYYY HH24MISS'),
			INTVSTATUS, TO_CHAR(REGDATE,'DDMMYYYY HH24MISS'), 
			TO_CHAR(TIMESTAMP,'DDMMYYYY HH24MISS'), 
			USERID,DLEWATREMARKS, PANELDES,SENDGSCFLAG,
			INTVNAME,PANELNAME,PANELREMARKS, RESIDENTSTAT,
			REJECTDATE, APPEALDATE, HOSTREJECTDATE, HOSTAPPEALDATE, DLLSABAH
		FROM  REGN_DLEWAT
		WHERE INTVBRANCH = :lintvbranch;				

		EXEC SQL OPEN regn_date_cur7;
		
		if (SQLCODE != 0)
		{
		#ifdef DEBUG
			userlog(" get_regn_dlewat_data : Error in opening the cursor regn_date_cur7 for intvbranch: %s", SQLMSG);
		#endif
		/* Log the error */
		strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in opening the cursor regn_date_cur for intvbranch");
		sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in opening the cursor regn_ibranch_cur for intvbranch : %s", SQLMSG);
		excep_log.termination_flag = 'Y';
		excep_log.severity = FATAL;

		log_error(ctx);

		return CURSOR_OPEN_ERROR;
		}
	}
	
	
	for(cnt=0;cnt<regn_dlewat_cnt;cnt++,regn_rec++)
	{
	  userlog("Inside the for loop");
	  memset(&local_rec,'\0',sizeof(local_rec));
	  memset(&local_rec_ind,'\0',sizeof(local_rec_ind));

	    setnull(local_rec.applid);
		setnull(local_rec.filerefno);
		setnull(local_rec.idno);
		setnull(local_rec.currlongname);
		setnull(local_rec.address1);
		setnull(local_rec.address2);
		setnull(local_rec.address3);
		setnull(local_rec.contactno);
		setnull(local_rec.dlewatremarks);

		setnull(local_rec.intvname);
		setnull(local_rec.panelname);
		setnull(local_rec.panelremarks);

	  if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	  {
	   userlog("inside the cursor fetch for regn_date_cur1 ");
	   EXEC SQL FETCH regn_date_cur1 
				INTO :local_rec INDICATOR :local_rec_ind;
	   userlog("inside the cursor fetch for regn_date_cur1 after the fetch");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);
	
	  }
	  else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0'))
	  {
	   userlog("inside the cursor fetch for regn_date_cur2 ");
	   EXEC SQL FETCH regn_date_cur2 
				INTO :local_rec INDICATOR :local_rec_ind;
	   userlog("inside the cursor fetch for regn_date_cur2 after the fetch");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);

	  }
	  else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (strcmp(req->intvbranch,"\0") != 0))
	  {
	   userlog("inside the cursor fetch for regn_date_cur3 ");
	   EXEC SQL FETCH regn_date_cur3 
				INTO :local_rec INDICATOR :local_rec_ind;
	   userlog("inside the cursor fetch for regn_date_cur3 after the fetch");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);

	  }
	  else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0))
	  {
		  userlog("inside the cursor fetch for regn_date_cur4 ");
	   EXEC SQL FETCH regn_date_cur4 
				INTO :local_rec INDICATOR :local_rec_ind;
	   userlog("inside the cursor fetch for regn_date_cur4 after the fetch");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);
	  }
	  else if((req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	  {
		  	  userlog("inside the cursor fetch for regn_date_cur5 ");
	   EXEC SQL FETCH regn_date_cur5 
				INTO :local_rec INDICATOR :local_rec_ind;
	   userlog("inside the cursor fetch for regn_date_cur5 after the fetch");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);

	  }
	  else if (req->intvstatus != '\0')
	  {
	   	  	  userlog("inside the cursor fetch for regn_date_cur6 ");
	   EXEC SQL FETCH regn_date_cur6 
				INTO :local_rec INDICATOR :local_rec_ind;
	   userlog("inside the cursor fetch for regn_date_cur6 after the fetch");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);
	  }
	  else if (strcmp(req->intvbranch,"\0") != 0)
	  {
			  	  userlog("inside the cursor fetch for regn_date_cur7");
	   EXEC SQL FETCH regn_date_cur7 
				INTO :local_rec INDICATOR :local_rec_ind;
	   userlog("inside the cursor fetch for regn_date_cur7 after the fetch");
	   userlog("sqlca.sqlcode  : %s",sqlca.sqlcode);
	  }

	   if(NO_DATA_FOUND) break;

	   if (SQLCODE)
	    {		 
			/* Log the error */
			strcpy(prog_log.remarks,"get_regn_dlewat_data : Error in fetching the cursor regn_date_cur");
			sprintf(excep_log.error_msg,"get_regn_dlewat_data : Error in fetching the cursor regn_date_cur : %s", SQLMSG);
			excep_log.termination_flag = 'Y';
			excep_log.severity = FATAL;

			log_error(ctx);

			if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
			{
				#ifdef DEBUG
					userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur1 : %s", SQLMSG);
				#endif
				EXEC SQL CLOSE regn_date_cur1;

	
			}
			else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0'))
			{
				#ifdef DEBUG
					userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur2 : %s", SQLMSG);
				#endif
				EXEC SQL CLOSE regn_date_cur2;

			}
			else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (strcmp(req->intvbranch,"\0") != 0))
			{
				#ifdef DEBUG
					userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur3: %s", SQLMSG);
				#endif
				EXEC SQL CLOSE regn_date_cur3;

			}
			else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0))
			{
				#ifdef DEBUG
					userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur4 : %s", SQLMSG);
				#endif
				EXEC SQL CLOSE regn_date_cur4;
			}
			else if((req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
			{
				#ifdef DEBUG
					userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur5 : %s", SQLMSG);
				#endif
				EXEC SQL CLOSE regn_date_cur5;

			}
			else if (req->intvstatus != '\0')
			{
				#ifdef DEBUG
					userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur6 : %s", SQLMSG);
				#endif
				EXEC SQL CLOSE regn_date_cur6;
			}
			else if (strcmp(req->intvbranch,"\0") != 0)
			{
				#ifdef DEBUG
					userlog(" get_regn_dlewat_data : Error in fetching the cursor regn_date_cur7 : %s", SQLMSG);
				#endif
				EXEC SQL CLOSE regn_date_cur7;
			}

			return CURSOR_FETCH_ERROR;
	    }
		
	   userlog("outside the cursor fetch for date after the fetch");
		
	#ifdef DEBUG
		userlog(" --*--> from local variables  <--*--");		
		userlog(" applid : %s",local_rec.applid.arr);
		userlog(" filerefno : %s",local_rec.filerefno.arr);
		userlog(" txncode : %s",local_rec.txncode);
		userlog(" idtype : %s",local_rec.idtype);
		userlog(" idno : %s",local_rec.idno.arr);
		userlog(" currlongname : %s",local_rec.currlongname.arr);
		userlog(" address1 : %s",local_rec.address1.arr);
		userlog(" address2 : %s",local_rec.address2.arr);
		userlog(" address3 : %s",local_rec.address3.arr);
		userlog(" citycode : %d",local_rec.citycode);
		userlog(" statecode : %s",local_rec.statecode);
		userlog(" postcode : %s",local_rec.postcode);
		userlog(" contactno : %s",local_rec.contactno.arr);
		userlog(" branchcode : %s",local_rec.branchcode);
		userlog(" intvbranch : %s",local_rec.intvbranch);
		userlog(" intvdatetime : %s",local_rec.intvdatetime);
		userlog(" intvstatus : %c",local_rec.intvstatus);
		userlog(" regdate : %s",local_rec.regdate);
		userlog(" timestamp : %s",local_rec.timestamp);
		userlog(" userid : %s",local_rec.userid);
		userlog(" dlewatremarks : %s",local_rec.dlewatremarks.arr);
		userlog(" paneldes : %c",local_rec.paneldes);
		userlog(" sendgscflag : %c",local_rec.sendgscflag);
		userlog("intvname %s\n", local_rec.intvname.arr); 
		userlog("panelname %s\n", local_rec.panelname.arr); 
		userlog("panelremarks %s\n", local_rec.panelremarks.arr); 
		userlog("residentstat %c\n", local_rec.residentstat); 
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_dlewat->rejectDate);
		userlog("appealDate %s\n", regn_dlewat->appealDate);
		userlog("hostRejectDate %s\n", regn_dlewat->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_dlewat->hostAppealDate);
		userlog("iDllSabah %d\n", regn_dlewat->iDllSabah);
		userlog("iIntvCount %d\n", regn_dlewat->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_dlewat->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_dlewat->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_dlewat->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_dlewat->intvRemark1);
		userlog("intvRemark2 %s\n", regn_dlewat->intvRemark2);
		userlog("intvRemark3 %s\n", regn_dlewat->intvRemark3);
		userlog("intvBranch1 %s\n", regn_dlewat->intvBranch1);
		userlog("intvBranch2 %s\n", regn_dlewat->intvBranch2);
		userlog("intvBranch3 %s\n", regn_dlewat->intvBranch3);
		userlog("operId1 %s\n", regn_dlewat->operId1);
		userlog("operId2 %s\n", regn_dlewat->operId2);
		userlog("operId3 %s\n", regn_dlewat->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End

	#endif


		strcpy(regn_rec->applid, local_rec.applid.arr);

		if(local_rec_ind.filerefno_ind != -1)
			strcpy(regn_rec->filerefno, local_rec.filerefno.arr);

		if(local_rec_ind.txncode_ind != -1)
			strcpy(regn_rec->txncode, local_rec.txncode);

		if(local_rec_ind.idtype_ind != -1)
			strcpy(regn_rec->idtype, local_rec.idtype);

		if(local_rec_ind.idno_ind != -1)
			strcpy(regn_rec->idno, local_rec.idno.arr);

		if(local_rec_ind.currlongname_ind != -1)
			strcpy(regn_rec->currlongname, local_rec.currlongname.arr);

		if(local_rec_ind.address1_ind != -1)
			strcpy(regn_rec->address1, local_rec.address1.arr);

		if(local_rec_ind.address2_ind != -1)
			strcpy(regn_rec->address2, local_rec.address2.arr);

		if(local_rec_ind.address3_ind != -1)
			strcpy(regn_rec->address3, local_rec.address3.arr);

		if(local_rec_ind.citycode_ind != -1)
			regn_rec->citycode = local_rec.citycode;

		if(local_rec_ind.statecode_ind != -1)
			strcpy(regn_rec->statecode, local_rec.statecode);

		if(local_rec_ind.postcode_ind != -1)
			strcpy(regn_rec->postcode, local_rec.postcode);

		if(local_rec_ind.contactno_ind != -1)
			strcpy(regn_rec->contactno, local_rec.contactno.arr);

		if(local_rec_ind.branchcode_ind != -1)
			strcpy(regn_rec->branchcode, local_rec.branchcode);

		if(local_rec_ind.intvbranch_ind != -1)
			strcpy(regn_rec->intvbranch, local_rec.intvbranch);

		if(local_rec_ind.intvdatetime_ind != -1)
			strcpy(regn_rec->intvdatetime, local_rec.intvdatetime);

		if(local_rec_ind.intvstatus_ind != -1)
			regn_rec->intvstatus = local_rec.intvstatus;

		if(local_rec_ind.regdate_ind != -1)
			strcpy(regn_rec->regdate, local_rec.regdate);

		if(local_rec_ind.timestamp_ind != -1)
			strcpy(regn_rec->timestamp, local_rec.timestamp);

		if(local_rec_ind.userid_ind != -1)
			strcpy(regn_rec->userid, local_rec.userid);

		if(local_rec_ind.dlewatremarks_ind != -1)
			strcpy(regn_rec->dlewatremarks, local_rec.dlewatremarks.arr);

		if(local_rec_ind.paneldes_ind != -1)
			regn_rec->paneldes = local_rec.paneldes;

		if(local_rec_ind.sendgscflag_ind != -1)
			regn_rec->sendgscflag = local_rec.sendgscflag;

	     if(local_rec_ind.intvname_ind != -1)
			strcpy(regn_rec->intvname, local_rec.intvname.arr);

		if(local_rec_ind.panelname_ind != -1)
			strcpy(regn_rec->panelname, local_rec.panelname.arr);
		
		if(local_rec_ind.panelremarks_ind != -1)
			strcpy(regn_rec->panelremarks, local_rec.panelremarks.arr);

		if(local_rec_ind.residentstat_ind != -1)
			regn_rec->residentstat = local_rec.residentstat;

		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		if(local_rec_ind.rejectDate_ind != -1)
			strcpy(regn_rec->rejectDate_ind, local_rec.rejectDate.arr);

		if(local_rec_ind.appealDate_ind != -1)
			strcpy(regn_rec->appealDate_ind, local_rec.appealDate.arr);
		
		if(local_rec_ind.hostRejectDate_ind != -1)
			strcpy(regn_rec->hostRejectDate, local_rec.hostRejectDate.arr);

		if(local_rec_ind.hostAppealDate_ind != -1)
			regn_rec->hostAppealDate = local_rec.hostAppealDate.arr;		
		
		if(local_rec_ind.iDllSabah_ind != -1)
			strcpy(regn_rec->iDllSabah, local_rec.iDllSabah);

		if(local_rec_ind.iIntvCount_ind != -1)
			strcpy(regn_rec->iIntvCount, local_rec.iIntvCount);
		
		if(local_rec_ind.intvDateTime1_ind != -1)
			strcpy(regn_rec->intvDateTime1, local_rec.intvDateTime1.arr);

		if(local_rec_ind.intvDateTime2_ind != -1)
			regn_rec->intvDateTime2 = local_rec.intvDateTime2.arr;	
		
		if(local_rec_ind.intvDateTime3_ind != -1)
			regn_rec->intvDateTime3 = local_rec.intvDateTime3.arr;	
		
		if(local_rec_ind.intvRemark1_ind != -1)
			strcpy(regn_rec->intvRemark1, local_rec.intvRemark1.arr);

		if(local_rec_ind.intvRemark2_ind != -1)
			regn_rec->intvRemark2 = local_rec.intvRemark2.arr;	
		
		if(local_rec_ind.intvRemark3_ind != -1)
			regn_rec->intvRemark3 = local_rec.intvRemark3.arr;

		if(local_rec_ind.intvBranch1_ind != -1)
			strcpy(regn_rec->intvBranch1, local_rec.intvBranch1.arr);

		if(local_rec_ind.intvBranch2_ind != -1)
			regn_rec->intvBranch2 = local_rec.intvBranch2.arr;	
		
		if(local_rec_ind.intvBranch3_ind != -1)
			regn_rec->intvBranch3 = local_rec.intvBranch3.arr;		
		
		if(local_rec_ind.operId1_ind != -1)
			strcpy(regn_rec->operId1, local_rec.operId1.arr);

		if(local_rec_ind.operId2_ind != -1)
			regn_rec->operId2 = local_rec.operId2.arr;	
		
		if(local_rec_ind.operId3_ind != -1)
			regn_rec->operId3_ind = local_rec.operId3.arr;		
	
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020

		
		
	#ifdef DEBUG
		userlog(" --*--> from the buffer <--*--");			
		userlog("applid %s\n", regn_rec->applid);
		userlog("fileref %s\n", regn_rec->filerefno); 
		userlog("txncode %s\n", regn_rec->txncode); 
		userlog("idtype %s\n", regn_rec->idtype);
		userlog("idno %s\n", regn_rec->idno); 
		userlog("currlongname %s\n", regn_rec->currlongname); 
		userlog("address1 %s\n", regn_rec->address1); 
		userlog("address2 %s\n", regn_rec->address2); 
		userlog("address3 %s\n", regn_rec->address3); 
		userlog("citycode %d\n", regn_rec->citycode);
		userlog("statecode %s\n", regn_rec->statecode); 
		userlog("postcode %s\n", regn_rec->postcode); 
		userlog("contactno %s\n", regn_rec->contactno); 
		userlog("branchcode %s\n", regn_rec->branchcode); 
		userlog("intvbranch %d\n", regn_rec->intvbranch);
		userlog("intvdatetime %s\n", regn_rec->intvdatetime); 
		userlog("intvstatus %c\n", regn_rec->intvstatus); 
		userlog("regdate %s\n", regn_rec->regdate); 
		userlog("timestamp %s\n", regn_rec->timestamp);		
		userlog("userid %s\n", regn_rec->userid); 
		userlog("delwatremarks %s\n", regn_rec->dlewatremarks); 
		userlog("paneldes %c\n", regn_rec->paneldes); 		

		userlog("intvname %s\n", regn_rec->intvname); 
		userlog("panelname %s\n", regn_rec->panelname); 
		userlog("panelremarks %s\n", regn_rec->panelremarks); 
		userlog("residentstat %c\n", regn_rec->residentstat); 

		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020
		userlog("rejectDate %s\n", regn_dlewat->rejectDate);
		userlog("appealDate %s\n", regn_dlewat->appealDate);
		userlog("hostRejectDate %s\n", regn_dlewat->hostRejectDate);
		userlog("hostAppealDate %s\n", regn_dlewat->hostAppealDate);
		userlog("iDllSabah %d\n", regn_dlewat->iDllSabah);
		userlog("iIntvCount %d\n", regn_dlewat->iIntvCount);
		userlog("intvDateTime1 %s\n", regn_dlewat->intvDateTime1);
		userlog("intvDateTime2 %s\n", regn_dlewat->intvDateTime2);
		userlog("intvDateTime3 %s\n", regn_dlewat->intvDateTime3);
		userlog("intvRemark1 %s\n", regn_dlewat->intvRemark1);
		userlog("intvRemark2 %s\n", regn_dlewat->intvRemark2);
		userlog("intvRemark3 %s\n", regn_dlewat->intvRemark3);
		userlog("intvBranch1 %s\n", regn_dlewat->intvBranch1);
		userlog("intvBranch2 %s\n", regn_dlewat->intvBranch2);
		userlog("intvBranch3 %s\n", regn_dlewat->intvBranch3);
		userlog("operId1 %s\n", regn_dlewat->operId1);
		userlog("operId2 %s\n", regn_dlewat->operId2);
		userlog("operId3 %s\n", regn_dlewat->operId3);
		//Added by Salmi Date:7th Apr, 2020 New field for REGN_DLEWAT_T struct. CRAPPL-  SKP002/CR/2020-End


	#endif
	
	} /* end of for loop */

	if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	 {
		EXEC SQL CLOSE regn_date_cur1;	
	 }
    else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (req->intvstatus != '\0'))
	 {
		EXEC SQL CLOSE regn_date_cur2;
	 }
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0) && (strcmp(req->intvbranch,"\0") != 0))
	 {
		EXEC SQL CLOSE regn_date_cur3;
	 }
	else if((strcmp(req->fromdate, "\0") != 0) && (strcmp(req->todate,"\0") != 0))
	 {
		EXEC SQL CLOSE regn_date_cur4;
	 }
	else if((req->intvstatus != '\0') && (strcmp(req->intvbranch,"\0") != 0))
	{  
		EXEC SQL CLOSE regn_date_cur5;
	}
	 else if (req->intvstatus != '\0')
	 {
		EXEC SQL CLOSE regn_date_cur6;
	 }
	 else if (strcmp(req->intvbranch,"\0") != 0)
	 {
		EXEC SQL CLOSE regn_date_cur7;
	 }
 
 return SUCCESS;

}
















