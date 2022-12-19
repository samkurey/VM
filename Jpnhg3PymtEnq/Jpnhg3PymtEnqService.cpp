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
	unsigned char* reqBuf = NULL;
	
	long lSize,lRespSize=0;
	int nReturn;

	FILE *fptr=NULL;
	
	
    //Pointers to byte arrays
	unsigned char *pucReqData = NULL;
	unsigned char *pucRespData = NULL;
		
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

	nReturn = Jpnhg3_Pymt_Enq(( JPNHG3_PYMT_ENQ_REQ_T *)reqBuf, &resp, &lRespSize,sql_context);

	
	#ifdef DEBUG
		userlog("Return Code : %d",nReturn);
	#endif
	if(resp == NULL)
	{
		free(resp);
		userlog("Failed to execute the service - Response NULL ");
		return E_FAIL;
	}

	fptr = fopen("d:\\ijpn\\log\\hg3enqresp.txt","wb");
	fwrite(resp, 300,1,fptr);
	fclose(fptr);

	free(reqBuf);

	//Return response buffer
	*pDataResp = SafeArrayCreateVector( VT_UI1, 0, lRespSize);
	
	//Get a pointer to the safe array. Locks the array.
	SafeArrayAccessData(*pDataResp, (void**)&pucRespData );
	resp->header.error_code = nReturn;
	//Copy the memory into the safearray
	memcpy(pucRespData, resp, lRespSize);
	SafeArrayUnaccessData(*pDataResp);
	free(resp);
	#ifdef DEBUG
		userlog("Successfully executed");
	#endif
	return S_OK;
}
