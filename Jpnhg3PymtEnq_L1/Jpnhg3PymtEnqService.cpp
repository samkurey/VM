// Jpnhg3PymtEnqService.cpp : Implementation of CJpnhg3PymtEnqService
#include "stdafx.h"
#include "Jpnhg3PymtEnq.h"
#include "Jpnhg3PymtEnqService.h"
#include "gscbcommon.h"
#include <stdio.h>

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"

#include "jpnhg3_pymt_enq_io.h"
#include "jpnhg3_pymt_enq.h"

extern void EnableThreads();
extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);

extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);
extern "C" int Jpnhg3_Pymt_Enq( JPNHG3_PYMT_ENQ_REQ_T *pReq, 
						JPNHG3_PYMT_ENQ_RESP_T **pResp, long *pRespSize,void * ctx);

/////////////////////////////////////////////////////////////////////////////
// CJpnhg3PymtEnqService

HRESULT CJpnhg3PymtEnqService::Activate()
{
	HRESULT hr = GetObjectContext(&m_spObjectContext);

	userlog("Before LoginToOracle");
	userlog("JPNHG3_PYMT_ENQ : Before LoginToOracle");
	if (LoginToOracle(&sql_context) != GMPC_GOOD)
	{
		userlog("Failed to connect to Oracle !");	
		return S_FALSE;
	}
	
	EnableThreads();
	#ifdef DEBUG
		userlog("Connected to Oracle");
	#endif
	if (SUCCEEDED(hr))
		return S_OK;
	return hr;
} 

BOOL CJpnhg3PymtEnqService::CanBePooled()
{
	return TRUE;
} 


void CJpnhg3PymtEnqService::Deactivate()
{
	m_spObjectContext.Release();

	/* Disconnect from Oracle	*/
	if(GMPC_GOOD != LogoutFromOracle(sql_context))
	{
		userlog("Failed to disconnect from oracle !");
		return;
	}
	#ifdef DEBUG
		userlog("Disconnected from Oracle");
		userlog("JPNHG3_PYMT_ENQ : Service Finished");
		userlog(" ");
	#endif
	return;
} 


STDMETHODIMP CJpnhg3PymtEnqService::Execute(SAFEARRAY *pDataReq, SAFEARRAY **pDataResp)
{

	JPNHG3_PYMT_ENQ_RESP_T *resp=NULL;
	//JPNHG3_PYMT_ENQ_REQ_T *req=NULL; //added by samsuri on 13 mar 2023
	unsigned char* reqBuf = NULL;
	
	long lSize,lRespSize=0;
	int nReturn;

	FILE *fptr=NULL;
	
//	char szError[251] = {0};
	
	//Pointers to byte arrays
	unsigned char *pucReqData = NULL;
	unsigned char *pucRespData = NULL;

	try
	{							
		//Lock access to array data
		SafeArrayAccessData( pDataReq, (void**)&pucReqData);

		//Get number of elements in array. This is the number of bytes
		lSize = pDataReq->rgsabound->cElements;
		reqBuf = (unsigned char *)malloc(lSize);
		if(!reqBuf)
		{
		return E_FAIL;
		}

		memcpy(reqBuf, pucReqData, lSize);

		SafeArrayUnaccessData(pDataReq);

		// fptr = fopen("d:\\ijpn\\log\\hg3enqreq.txt","wb");
		// fwrite(pucReqData, 250,1,fptr); //2500
		// fclose(fptr);

		nReturn = Jpnhg3_Pymt_Enq(( JPNHG3_PYMT_ENQ_REQ_T *)reqBuf, &resp, &lRespSize,sql_context);
		
		userlog("Return Code : %d lRespSize: %d",nReturn,lRespSize);
		
		if(resp == NULL)
		{
			free(resp);
			userlog("Failed to execute the service - Response NULL ");
			return E_FAIL;
		}

		fptr = fopen("d:\\ijpn\\log\\hg3enqresp.txt","wb");
		fwrite(resp, lRespSize,1,fptr); //2500
		fclose(fptr);

		userlog("before free reqBuf");
		reqBuf = NULL;
		free(reqBuf);
		userlog("after free reqBuf");

		//Return response buffer
		*pDataResp = SafeArrayCreateVector( VT_UI1, 0, lRespSize);
		//Get a pointer to the safe array. Locks the array.
		SafeArrayAccessData(*pDataResp, (void**)&pucRespData );
		resp->header.error_code = nReturn;
		userlog("after assign error_code");

		//Copy the memory into the safearray
		memcpy(pucRespData, resp, lRespSize);
		SafeArrayUnaccessData(*pDataResp);

		// if(resp == NULL || lRespSize < 1000)
		// {
		// 	free(resp); //need to remark this to prevent hang
		// 	userlog("resp freed");
		// }
        userlog("Before free resp");
		resp = NULL;
		free(resp); //need to remark this to prevent hang	
		
		userlog("Successfully executed");

	}
	catch(...)
	//catch(_com_error e)
	{
		//strcpy(szError, e.ErrorMessage());
		userlog("Jpnhg3_Pymt_Enq Failed. Exception ERROR");

		// reqBuf = NULL;
		// free(reqBuf);
		// resp = NULL;
		// free(resp); 

		// userlog("Jpnhg3_Pymt_Enq Failed. after free");
		
		// // //added by samsuri on 13 mar 2023
		// lSize = sizeof(JPNHG3_PYMT_ENQ_RESP_T);	
		// req = (JPNHG3_PYMT_ENQ_REQ_T *)malloc(lSize);
		// memcpy(req, pucReqData, lSize);

		// strcpy(resp->header.user_id, req->header.user_id);
		// strcpy(resp->header.workstation_id, req->header.workstation_id);
		// strcpy(resp->header.branch_code, req->header.branch_code);
		// strcpy(resp->header.application_id, req->header.application_id);		
		// resp->header.error_code = 21607;

		// memcpy(pucRespData, resp, lRespSize);
		// SafeArrayUnaccessData(*pDataResp);

		// userlog("Jpnhg3_Pymt_Enq Failed. after SafeArrayUnaccessData");
		// userlog("Jpnhg3_Pymt_Enq Failed. application_id: %s branch_code %s error_code: %d",resp->header.application_id,
		// 		resp->header.branch_code,resp->header.error_code);


	}

	return S_OK;
}
