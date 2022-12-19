// JpnUpdateService.cpp : Implementation of CJpnUpdateService
#include "stdafx.h"
#include "JpnUpdate.h"
#include "JpnUpdateService.h"
#include "gscbcommon.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "li_jpn_update.h"
#include "li_update_gmpc_stat.h"
#include "li_update_jpn_addr.h"
#include "li_jpn_upd_payment.h"
#include "li_jpn_gmpc_surrender.h" 
#include "jpn_update_io.h"
#include "jpn_update.h"

extern void EnableThreads();
extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);

extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);
extern "C" int Jpn_Update( JPN_UPDATE_REQ_T *pReq, 
						JPN_UPDATE_RESP_T **pResp, long *pRespSize,void * ctx);
/////////////////////////////////////////////////////////////////////////////
// CJpnUpdateService

HRESULT CJpnUpdateService::Activate()
{
	HRESULT hr = GetObjectContext(&m_spObjectContext);

	userlog("Before LoginToOracle");
	userlog("JPN_UPDATE : Before LoginToOracle");
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

BOOL CJpnUpdateService::CanBePooled()
{
	return TRUE;
} 

void CJpnUpdateService::Deactivate()
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
		userlog("JPN_UPDATE : Service Finished");
		userlog(" ");
	#endif
	return;
} 


STDMETHODIMP CJpnUpdateService::Execute(SAFEARRAY *pDataReq, SAFEARRAY **pDataResp)
{
	JPN_UPDATE_RESP_T *resp=NULL;
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
	return E_FAIL;
	}


	memcpy(reqBuf, pucReqData, lSize);

	SafeArrayUnaccessData(pDataReq);

	nReturn = Jpn_Update(( JPN_UPDATE_REQ_T *)reqBuf, &resp, &lRespSize,sql_context);

	
	#ifdef DEBUG
		userlog("Return Code : %d",nReturn);
	#endif
	if(resp == NULL)
	{
		free(resp);
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
		userlog("Successfully executed");
	#endif
	return S_OK;
}
