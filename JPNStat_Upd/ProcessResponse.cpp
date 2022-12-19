/*********************************************************************
 *	FILE		:	processresponses.cpp							 *
 *	DESCRIPTION	:	File for fetching responses all problem Records  *
 *					to insert data into Branch database				 *
 *	DATE		:													 *
 *	AUTHOR		:	Viswanadh										 *
********************************************************************/
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <winsvc.h>
#include <winbase.h>
#include <winnt.h>
#include <lmcons.h>
#include <lmaccess.h>
#include "gscbdef.h"
#include "gscbio.h"
#include "errordefines.h"
#include "defines.h"
#include "gscblog.h"
#include "JPNStatusUpdate_NT.h"
#include "jpn_status_upd_io.h"
#include "JPNStat_upd.h"

#import "JpnStatusUpd.tlb" no_namespace

extern char g_szGCode[BRANCH_CODE_SIZE];
extern bool g_bSlpState;
extern char g_szErrMsg[ERRMSG_SIZE];
extern APPL_EXCEP_LOG_T sApplExceptLog;
extern char g_szApplid[APP_ID_SIZE];


extern "C" void userlog(char* szFormatString, ...);
extern int FillRequest(JPN_STATUS_UPD_REQ_T *req,void * ctx);
extern int Jpn_Status_Upd(JPN_STATUS_UPD_REQ_T *req,void * ctx);
//extern int update_gmpc_status_to_host(JPN_STATUS_UPD_REQ_T *req, int msgid, char request_flag,LI_P_HEADER_T hdr,void * ctx);


//Function for processing responses
long Process_Responses(void * ctx)
{
	
	CJPNStatusUpdate JPNStatusUpdate;		
	JPN_STATUS_UPD_REQ_T* pstSendBuf;
//	JPN_STATUS_UPD_RESP_T* pstRecvBuf;
			
	//char tempStr[1000];
	long ret_code = 0;
	long ret = 0;	
	//AppendToFile("beginning of check_prob_rec");
	long ReqLen = sizeof(JPN_STATUS_UPD_REQ_T);
	long RespLen = sizeof(JPN_STATUS_UPD_RESP_T);
	//int serviceId = 46;
	//char reqflag = 'P';
	//char applType = 'O';
    //char dataFlag = 'N';
	//char commitFlag = 'N';
	//char szQuery[5000];
	HRESULT hr = NULL;
	//char applDate[9];
	//char papplid[20];
	//char conApplDate[13];
//	SAFEARRAY *psa;
//	SAFEARRAY *psaRsp ;
	unsigned char *pData = NULL;
//	long lSize;

	if((pstSendBuf = (JPN_STATUS_UPD_REQ_T *)malloc(ReqLen)) == NULL)
	{
		#ifdef DEBUG
			userlog("Memory allocation failed to Send Bufffer");
		#endif

		return E_FAIL;
	}
	memset(pstSendBuf, '\0', ReqLen);
	
	#ifdef DEBUG
		userlog("Memory allocated to Send Buf");
	#endif

	if (FillRequest(pstSendBuf,ctx) != CALL_REQUIRED)	
	{		
		userlog("No data found !");	
		return E_FAIL;
	}


	userlog("Process_Responses: The Jpn_Status_Upd execution finished" );
/*
	try
	{
		
		#ifdef DEBUG
				userlog("Starting........");
			
		#endif
		
		IJpnStatusUpdServicePtr pI("JpnStatusUpd.JpnStatusUpdService.1");
		
		#ifdef DEBUG
				userlog("After object creation");
			
		#endif
		// create a safe array to store the stream data
		psa = SafeArrayCreateVector( VT_UI1, 0, sizeof(JPN_STATUS_UPD_REQ_T));
		
		if(!psa)
		{
		
				#ifdef DEBUG
				userlog("REQ SafeArrayCreateVector() Failed.");
				
				#endif
			
			return E_FAIL;
		}

		if(FAILED(	SafeArrayAccessData( psa, (void**)&pData )))
		{

				#ifdef DEBUG
				userlog("REQ SafeArrayAccessData() Failed.");
				
				#endif
			
			return E_FAIL;
		}

		
		// copy the memory into the safearray
		memcpy( pData, pstSendBuf, sizeof(JPN_STATUS_UPD_REQ_T));		
		
		
		SafeArrayUnaccessData(psa);

		if(FAILED(pI->Execute(psa, &psaRsp)))
		{
			#ifdef DEBUG
			userlog("Error while executing service GetProbRec. Call to Method Execute() Failed.");
			
			#endif
			if(pstSendBuf)
			free(pstSendBuf);
			return E_FAIL;
		}
		
		//read response
		
		if(FAILED(SafeArrayAccessData(psaRsp, (void**)&pData)))
		{
			#ifdef DEBUG
			userlog("RESP SafeArrayAccessData() Failed.");
			
			#endif

			if(pstSendBuf)
				free(pstSendBuf);
		return E_FAIL;
		}
		// lock access to array data
	// get number of elements in array. This is the number of bytes
		lSize = psaRsp->rgsabound->cElements;

		pstRecvBuf = (JPN_STATUS_UPD_RESP_T*)malloc(lSize);
		if(pstRecvBuf == NULL)
		{
			#ifdef DEBUG
			userlog("Failed to Allocate Memory for Response Buffer.");
			
			#endif
		return E_FAIL;
		}
		// copy the memory from the safearray
		memcpy(pstRecvBuf, pData, lSize);
					
		SafeArrayUnaccessData(psaRsp);
		//free(resp);
		
	}
	// Handle any COM exceptions from smart pointers
	catch (_com_error e)
	{
		#ifdef DEBUG
			userlog("JPN_STATUS_UPD Service failed: %s \n ", e.ErrorMessage() );
		#endif
		return E_FAIL;
	}

  */
	#ifdef DEBUG
			userlog("JPN_STATUS_UPD Service executed successfully   : \n");
	#endif	
    	 	
	free((char*)pstSendBuf);
//	free((char*)pstRecvBuf);
	return S_OK;
}

char *ReplaceSingleQuote(char newString[])
{
  char localString[500];
  strcpy(localString,newString);
  int len = strlen(localString);
  int j = 0;
  for(int i = 0; i < len; i++)
  {
       newString[j++] =  localString[i];
	   if(localString[i] == '\'')
		 newString[j++] = '\'';
  }     
 newString[j] = '\0'; 
 return 0;

}
