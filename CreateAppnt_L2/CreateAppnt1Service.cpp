// CreateAppnt1Service.cpp : Implementation of CCreateAppnt1App and DLL registration.

#include "stdafx.h"
#include "CreateAppnt1.h"
#include "CreateAppnt1Service.h"
#include "gscbcommon.h"
#include "create_applnt_io.h"
#include "create_applnt.h"


extern void EnableThreads();
extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);


extern "C" void userlog(char* szFormatString, ...);
extern "C" void userlogr(char* szFormatString, ...);
extern int Create_Applnt(CREATE_APPLNT_REQ_T *pReq, 
			CREATE_APPLNT_RESP_T **pResp, long *pRespSize,void * ctx);


///////////////////////////////////////////////////////////////////////////////


HRESULT CCreateAppntService_L2::Activate()
{
	HRESULT hr = GetObjectContext(&m_spObjectContext);

	userlog("Before LoginToOracle");
	userlogr("CREATE_APPLNT : Before LoginToOracle");
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

BOOL CCreateAppntService_L2::CanBePooled()
{
	return TRUE;
} 

void CCreateAppntService_L2::Deactivate()
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
		userlogr("CREATE_APPLNT : Service Finished");
		userlogr(" ");
	#endif

	return;
} 


STDMETHODIMP CCreateAppntService_L2::Execute(SAFEARRAY *pDataReq, SAFEARRAY **pDataResp)
{
	// TODO: Add your implementation code here

//	DebugBreak();  //to be removed later

	CREATE_APPLNT_RESP_T *resp = NULL;
	unsigned char* reqBuf = NULL;
	
	long lSize,lRespSize=0;
	int nReturn;

////	_CrtMemDumpAllObjectsSince(NULL);

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

	//_CrtCheckMemory();

//Copy the memory from the safearray
	memcpy(reqBuf, pucReqData, lSize);

	//_CrtCheckMemory();



	SafeArrayUnaccessData(pDataReq);
	nReturn = Create_Applnt((CREATE_APPLNT_REQ_T *)reqBuf, &resp, &lRespSize,sql_context);
	#ifdef DEBUG
		userlog("Return Code : %d",nReturn);
	#endif
	if(resp == NULL)
	{
		free(reqBuf);
		userlog("Failed to execute the service - Response NULL ");
		return E_FAIL;
	}

	userlog("Before freeing the reqBuf");

	free(reqBuf);
	
	userlog("After freeing the reqBuf");

//Return response buffer
	*pDataResp = SafeArrayCreateVector( VT_UI1, 0, lRespSize);

	userlog("After SafeArrayCreateVector");
	
//Get a pointer to the safe array. Locks the array.
	SafeArrayAccessData(*pDataResp, (void**)&pucRespData );
	userlog("After SafeArrayAccessData");
	resp->header.error_code = nReturn;
//Copy the memory into the safearray
	userlog("lRespSize : %d",lRespSize);
	memcpy(pucRespData, resp, lRespSize);
	
	SafeArrayUnaccessData(*pDataResp);
	userlog("After SafeArrayAccessData");
	#ifdef DEBUG
		userlog("****Service executed Successfully****\n");
	#endif

	userlog("Before freeing the resp");

	free(resp);

	userlog("After freeing the resp");

////	_CrtDumpMemoryLeaks();

	userlog("After the CrtDumpMemoryLeaks");


return S_OK;
}



/*
STDMETHODIMP CCreateAppntService_L2::InterfaceSupportsErrorInfo(REFIID riid)
{
	static const IID* arr[] = 
	{
		&IID_ICreateAppntService_L2,
	};

	for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
	{
		if (InlineIsEqualGUID(*arr[i],riid))
			return S_OK;
	}
	return S_FALSE;
}
*/