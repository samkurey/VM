// RevGmpcApplService.cpp : Implementation of CRevGmpcApplService
#include "stdafx.h"
#include "RevGmpcAppl.h"
#include "RevGmpcApplService.h"
#include "gscbcommon.h"
#include "KPPdef.h"
#include "KPPstruct.h"
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"
#include "KPPproto.h"
#include "li_rev_add_new_class.h"
#include "rev_gmpc_appl_io.h"
#include "rev_gmpc_appl.h"

extern void EnableThreads();
extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);


extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);
extern "C" int Rev_Gmpc_Appl(REV_GMPC_APPL_REQ_T  *pReq, 
					REV_GMPC_APPL_RESP_T  **pResp, long *pRespSize,void * ctx);
/////////////////////////////////////////////////////////////////////////////
// CRevGmpcApplService

HRESULT CRevGmpcApplService::Activate()
{
	HRESULT hr = GetObjectContext(&m_spObjectContext);

	userlog("Before LoginToOracle");
	userlogr("REV_GMPC_APPL : Before LoginToOracle");
	if (LoginToOracle(&sql_context) != GMPC_GOOD)
	{
		userlog("Failed to connect to Oracle !");	
		return S_FALSE;
	}
	
	EnableThreads();
	#ifdef DEBUG
		userlog("Connected to Oracle");
	#endif



#ifdef DEBUG
	userlog("Connected to Oracle");
#endif

	if (SUCCEEDED(hr))
		return S_OK;
	return hr;
} 

BOOL CRevGmpcApplService::CanBePooled()
{
	return TRUE;
} 

void CRevGmpcApplService::Deactivate()
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
		userlogr("REV_GMPC_APPL : Service Finished");
		userlogr(" ");
	#endif
	return;

} 


STDMETHODIMP CRevGmpcApplService::Execute(SAFEARRAY *pDataReq, SAFEARRAY **pDataResp)
{
	REV_GMPC_APPL_RESP_T  *resp=NULL;
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

	nReturn = Rev_Gmpc_Appl((REV_GMPC_APPL_REQ_T  *)reqBuf, &resp, &lRespSize,sql_context);

	
	#ifdef DEBUG
		userlog("Return Code : %d",nReturn);
	#endif
	if(resp == NULL)
	{
		free(reqBuf);
		userlog("Failed to execute the service - Response NULL ");
		return E_FAIL;
	}


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
		userlog("Service executed Successfully");
	#endif
	return S_OK;
}
