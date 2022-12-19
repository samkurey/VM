// SetApplStatL3Service.cpp : Implementation of CSetApplStatL3Service
#include "stdafx.h"
#include "SetApplStatL3.h"
#include "SetApplStatL3Service.h"
#include "gscbcommon.h"
#include "gscbdef.h"
#include "gscbio.h"
#include "gscblog.h"
#include "gscblookupdef.h"
#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"
#include "SET_APPL_STAT_L3_io.h"
#include "SET_APPL_STAT_L3.h"

extern void EnableThreads();
extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);

extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);
extern int Set_Appl_Stat_L3(SET_APPL_STAT_L3_REQ_T *pReq, 
								   SET_APPL_STAT_L3_RESP_T **pResp, long *pRespSize,void * ctx);
/////////////////////////////////////////////////////////////////////////////
// CSetApplStatL3Service

HRESULT CSetApplStatL3Service::Activate()
{
	HRESULT hr = GetObjectContext(&m_spObjectContext);

	userlog("Before LoginToOracle");
	userlogr("SET_APPL_STAT_L3 : Before LoginToOracle");
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

BOOL CSetApplStatL3Service::CanBePooled()
{
	return TRUE;
} 

void CSetApplStatL3Service::Deactivate()
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
			userlogr("SET_APPL_STAT_L3 : Service Finished");
			userlogr(" ");
		#endif
	return;
} 


STDMETHODIMP CSetApplStatL3Service::Execute(SAFEARRAY *pDataReq, SAFEARRAY **pDataResp)
{
	SET_APPL_STAT_L3_RESP_T *resp=NULL;
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

	nReturn = Set_Appl_Stat_L3((SET_APPL_STAT_L3_REQ_T *)reqBuf, &resp, &lRespSize,sql_context);

	
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

	#ifdef DEBUG
		userlog("After free request");
	#endif

	//Return response buffer
	*pDataResp = SafeArrayCreateVector( VT_UI1, 0, lRespSize);
	
	//Get a pointer to the safe array. Locks the array.
	SafeArrayAccessData(*pDataResp, (void**)&pucRespData );
	resp->header.error_code = nReturn;
	//Copy the memory into the safearray
	memcpy(pucRespData, resp, lRespSize);	
	SafeArrayUnaccessData(*pDataResp);
	#ifdef DEBUG
		userlog("Before free resp");
	#endif
	free(resp);
	#ifdef DEBUG
		userlog("Service executed Successfully");
	#endif
	return S_OK;
}
