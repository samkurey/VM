// GMPCEnquiryService.cpp : Implementation of CGMPCEnquiryService
#include "stdafx.h"
#include "GMPCEnquiry.h"
#include "GMPCEnquiryService.h"
#include "gscbcommon.h"
#include "gmpc_enquiry_io.h"
#include "gmpc_enquiry.h"

extern void EnableThreads();
extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);

extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);
extern "C" int GMPC_Enquiry(GMPC_ENQUIRY_REQ_T *pReq, 
				GMPC_ENQUIRY_RESP_T **pResp, long *pRespSize, void * ctx);

/////////////////////////////////////////////////////////////////////////////
// CGMPCEnquiryService

HRESULT CGMPCEnquiryService::Activate()
{
	userlog("In the service Activate function Added for testing on 29/12/2010");

	HRESULT hr = GetObjectContext(&m_spObjectContext);

	userlog("Before LoginToOracle");
	userlogr("GMPCEnquiry : Before LoginToOracle");
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

BOOL CGMPCEnquiryService::CanBePooled()
{
	return TRUE;
} 

void CGMPCEnquiryService::Deactivate()
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
		userlogr("GMPC_ENQUIRY: Service Finished");
		userlogr(" ");
	#endif

	return;

} 


STDMETHODIMP CGMPCEnquiryService::Execute(SAFEARRAY *pDataReq, SAFEARRAY **pDataResp)
{
	GMPC_ENQUIRY_RESP_T *resp=NULL;
	unsigned char* reqBuf = NULL;
	
	long lSize,lRespSize=0;
	int nReturn;
	
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
		userlog("Failed to execute service - Request NULL");
		return E_FAIL;
	}


	memcpy(reqBuf, pucReqData, lSize);

	SafeArrayUnaccessData(pDataReq);

	nReturn = GMPC_Enquiry((GMPC_ENQUIRY_REQ_T *)reqBuf, &resp, &lRespSize,sql_context);

	
	#ifdef DEBUG
		userlog("Return Code : %d",nReturn);
	#endif
	free(reqBuf);
	if(resp == NULL)
	{
		free(reqBuf);
		userlog("Failed to execute the service - Response NULL ");
		return E_FAIL;		
	}
	
		
	#ifdef DEBUG
		userlog("Return Code : %d",nReturn);
	#endif
	//Return response buffer
	*pDataResp = SafeArrayCreateVector( VT_UI1, 0, lRespSize);
	
	//Get a pointer to the safe array. Locks the array.
	SafeArrayAccessData(*pDataResp, (void**)&pucRespData );
	//resp->header.error_code = nReturn;
	//Copy the memory into the safearray
	memcpy(pucRespData, resp, lRespSize);
	SafeArrayUnaccessData(*pDataResp);
	free(resp);
	#ifdef DEBUG
	userlog("****Service executed Successfully****");
	#endif
	return S_OK;
}
