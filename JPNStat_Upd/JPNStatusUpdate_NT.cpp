/********************************************************************/
/*	FILE		:	JPNStatusUpdate_NT.cpp								*/
/*	DESCRIPTION	:													*/
/*	DATE		:	25 feb 2005										*/
/*	AUTHOR		:													*/
/********************************************************************/

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


#include "gscblog.h"
#include"receivervar.h"


#include "JPNStatusUpdate_NTEvents.h"
#include "errordefines.h"

#include "JPNStatusUpdate_NT.h"
#include "gscblog.h"
#include "receiverfunc.h"

/* Global variables */
char g_szErrMsg[ERRMSG_SIZE];
APPL_EXCEP_LOG_T sApplExceptLog;
//extern long g_lSlp;
bool g_bSlpState;
char g_szGCode[BRANCH_CODE_SIZE];
char* g_szDbUserId;
char* g_szDbPasswd;
//extern int g_nRetCnt;
char g_szApplid[APP_ID_SIZE];
void *sql_context;

extern int LogoutFromOracle(void * ctx);
extern int LoginToOracle(void **ctx);
extern "C" void userlog(char* szFormatString, ...);
extern long gzSleepTime;
int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nShowCmd)
{
	SERVICE_TABLE_ENTRY DispatchTable[2];
	
	DispatchTable[0].lpServiceName = (LPTSTR) new char[strlen("JPNStatusUpdate") + 1];
	strcpy(DispatchTable[0].lpServiceName, TEXT("JPNStatusUpdate"));
	DispatchTable[0].lpServiceProc = JPNStatusUpdate;
	DispatchTable[1].lpServiceName = NULL;
	DispatchTable[1].lpServiceProc = NULL;

	#ifdef DEBUG
	userlog("JPNStatusUpdate : Calling StartServiceControlDispatcher");
	#endif

	//Connecting to SCM to dispatch the Gscb Sender service
	if (!StartServiceCtrlDispatcher(DispatchTable) )
	{
		userlog("JPNStatusUpdate :StartServiceControlDispatcher failed %d", GetLastError());
		
		delete[] DispatchTable[0].lpServiceName;
		return -1;
	}

	#ifdef DEBUG
	userlog("JPNStatusUpdate : Returned from StartServiceControlDispatcher");
	userlog(" ");
	userlog(" ");
	
	#endif

	delete[] DispatchTable[0].lpServiceName;
	return 0;
}





/******************************************************************
 *	FUNCTION	:	CHECK_PROB_REC
 *	PURPOSE		:	CHECK_PROB_REC service invoking tuxedo client to fetch response
 *					data & populate the same in to the GSC database
 ********************************************************************/
VOID __stdcall JPNStatusUpdate(DWORD argc, LPSTR* argv)
{
	int nSlpDur,nRet;
	//long lRet;
	int i = 0;

	HRESULT hr;
	//Now, initialize COM.
		hr = CoInitialize(NULL); 
	//////



	itoa(JPN_STATUS_UPD_NT, sApplExceptLog.program_id, 111);
	

	//Registering handler for the Jpnstatusupd service
	g_ReceiverHdl = RegisterServiceCtrlHandler(TEXT("JPNStatusUpdate"),JPNStatusUpdateHandler);

	if(g_ReceiverHdl == (SERVICE_STATUS_HANDLE)0)
	{
		userlog("JPNStatusUpdate_NT : Control handler not installed");
		return;
	}

	#ifdef DEBUG
	userlog("JPNStatusUpdate_NT : Control Handler installed");
	
	#endif

	//Setting the service status structure
	g_ReceiverStat.dwServiceType = SERVICE_WIN32_OWN_PROCESS;
	g_ReceiverStat.dwCurrentState = SERVICE_START_PENDING;
	g_ReceiverStat.dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_PAUSE_CONTINUE;
	g_ReceiverStat.dwCheckPoint = 0;
	g_ReceiverStat.dwServiceSpecificExitCode = 0;
	g_ReceiverStat.dwWaitHint = 30000;
	g_ReceiverStat.dwWin32ExitCode = 0;

	if(!SetServiceStatus(g_ReceiverHdl, &g_ReceiverStat))
	{
		userlog("JPNStatusUpdate_NT : Time specified in WaitHint crossed , unable to start service");
		return;
	}

	
	//Calling function Register_Event to register eventsource for Gscb Receiver service
	if((nRet = Register_Event()) != 0)
	{
		if(nRet == 1)
			userlog("JPNStatusUpdate_NT : Register_Event - Unable to get UserName\n");
		if(nRet == 2)
			userlog("JPNStatusUpdate_NT : Register_Event - Unable to get Sid and DomainName\n");
		if(nRet == 3)
			userlog("JPNStatusUpdate_NT : Register_Event - Unable to register event source for JPNStatusUpdate_NT\n");

		
		return;
	}

	
	//Calling function Initialize to read parameters from registry and connect to database
	//DebugBreak();

	if (LoginToOracle(&sql_context) != GMPC_GOOD)
	{
		userlog("Failed to connect to Oracle !");	
		return;
	}
	
	#ifdef DEBUG
		userlog("Connected to Oracle");
	#endif
	
	//Initialization of Gscb Receiver complete
	ReportEvent(hEvent, EVENTLOG_INFORMATION_TYPE, CAT_JPNStatusUpdate_NT,
				EVRECV_INIT, pSid, 0, 0, NULL, NULL);
	

	g_ReceiverStat.dwCurrentState = SERVICE_RUNNING;
	g_ReceiverStat.dwCheckPoint = 0;
	g_ReceiverStat.dwWaitHint = 0;

	if(!SetServiceStatus(g_ReceiverHdl, &g_ReceiverStat))
	{
		ReportEvent(hEvent, EVENTLOG_ERROR_TYPE, CAT_JPNStatusUpdate_NT,
					EVSERVSTAT_ERR, pSid, 0, 0, NULL, NULL);
		DeregisterEventSource(hEvent);
		delete[] g_szDbUserId;
		delete[] g_szDbPasswd;
		delete[] pSid;
		delete[] szDomainName;
		delete[] szMsg;
		return;
	}

	//JPNStatusUpdate service is now running
	ReportEvent(hEvent, EVENTLOG_INFORMATION_TYPE, CAT_JPNStatusUpdate_NT,
				EVRECV_RUN, pSid, 0, 0, NULL, NULL);

	char *szComputerName;
	DWORD dwSize;
	
	szComputerName = new char[MAX_COMPUTERNAME_LENGTH + 1];
	dwSize = MAX_COMPUTERNAME_LENGTH + 1;

	if(0 == GetComputerName(szComputerName, &dwSize))
	{
		strcpy(sApplExceptLog.workstation_id, "");
	}
	else
	{
		szComputerName[WS_ID_SIZE - 1] = '\0';
		strcpy(sApplExceptLog.workstation_id, szComputerName);
	}

	delete[] szComputerName;


	/* Fill the logging variable */
	strcpy(sApplExceptLog.user_id, "SYSADMIN");
	strcpy(sApplExceptLog.application_id, "");
	strcpy(sApplExceptLog.branch_code, g_szGCode);
	sApplExceptLog.termination_flag = 'N';
	sApplExceptLog.severity = 'F';
	strcpy(sApplExceptLog.error_msg, "");
	strcpy(sApplExceptLog.error_date, "");
    
	//////////////////////////////////////////////////////////////////////////////
	STARTUPINFO stStartInfo = {0};
	PROCESS_INFORMATION stProcessInfo = {0};

	memset(&stStartInfo, 0, sizeof(STARTUPINFO));
	stStartInfo.cb = sizeof(STARTUPINFO);
	
	
	//JPNStatusUpdate processing starts here
	while(1)
	{
		userlog(" ");
		userlog("Before Start processing the Process_Response !");	
		userlog(" ");
		if(E_FAIL == Process_Responses(sql_context))
		{
			g_bSlpState = true;					

		}
		if (g_bSlpState == true)
		{
			userlog( "Entered into sleep mode... ");
			// sleep for 30 seconds
			nSlpDur = gzSleepTime * 1000 * 15;
			Sleep(nSlpDur);
			g_bSlpState = false;
			userlog( "After coming out from sleep mode... ");
			userlog(" ");
		}
		
	}


   if(GMPC_GOOD != LogoutFromOracle(sql_context))
	{
		userlog("Failed to disconnect from oracle !");
		return;
	}
	#ifdef DEBUG
		userlog("Disconnected from Oracle");
	#endif

		
	return;
}




/******************************************************************
 *	METHOD		:	CJPNStatusUpdate
 *	PURPOSE		:	Constructor. 
 *					Initializes the Tuxedo Joining buffer
 ********************************************************************/
CJPNStatusUpdate::CJPNStatusUpdate()
{

	

};


/******************************************************************
 *	METHOD		:	~CJPNStatusUpdate
 *	PURPOSE		:	Destructor.
 *					Terminates the Tuxedo cocnection.
 *					Frees the Tuxedo Joining buffer
 ********************************************************************/
CJPNStatusUpdate::~CJPNStatusUpdate()
{

}





/******************************************************************
 *	METHOD	:	JPNStatusUpdateHandler
 *	PURPOSE	:	
 ********************************************************************/

VOID __stdcall JPNStatusUpdateHandler(DWORD Opcode)
{
	switch(Opcode)     
	{         
		case SERVICE_CONTROL_PAUSE		:	g_ReceiverStat.dwCurrentState = SERVICE_PAUSED;             
											break; 
        case SERVICE_CONTROL_CONTINUE	:	g_ReceiverStat.dwCurrentState = SERVICE_RUNNING; 
											break;          
		case SERVICE_CONTROL_SHUTDOWN	:
		case SERVICE_CONTROL_STOP		:	g_ReceiverStat.dwWin32ExitCode = 0; 
											g_ReceiverStat.dwCurrentState  = SERVICE_STOP_PENDING; 
											g_ReceiverStat.dwCheckPoint = 1; 
											g_ReceiverStat.dwWaitHint = 1000;  
											g_ReceiverStat.dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_PAUSE_CONTINUE | SERVICE_ACCEPT_SHUTDOWN;
			
											if (!SetServiceStatus(g_ReceiverHdl, &g_ReceiverStat))            
											{
												ReportEvent(hEvent,EVENTLOG_ERROR_TYPE,CAT_JPNStatusUpdate_NT,
															EVSERVSTAT_ERR, pSid,0,0,NULL,NULL);
												return;
											}

											g_ReceiverStat.dwWin32ExitCode = 0; 
											g_ReceiverStat.dwCurrentState  = SERVICE_STOPPED; 
											g_ReceiverStat.dwCheckPoint = 0; 
											g_ReceiverStat.dwWaitHint = 0;  
											g_ReceiverStat.dwControlsAccepted = SERVICE_ACCEPT_STOP | SERVICE_ACCEPT_PAUSE_CONTINUE | SERVICE_ACCEPT_SHUTDOWN;
			
											if (!SetServiceStatus(g_ReceiverHdl, &g_ReceiverStat))            
											{
												ReportEvent(hEvent,EVENTLOG_ERROR_TYPE,CAT_JPNStatusUpdate_NT,
															EVSERVSTAT_ERR, pSid,0,0,NULL,NULL);
												return;
											}

											ReportEvent(hEvent,EVENTLOG_INFORMATION_TYPE,CAT_JPNStatusUpdate_NT,
														EVRECV_STOP, pSid,0,0,NULL,NULL);
            
											DeregisterEventSource(hEvent);
											delete[] g_szDbUserId;
											delete[] g_szDbPasswd;
											delete[] pSid;
											delete[] szDomainName;
											delete[] szMsg;

											return;          
		 
		case SERVICE_CONTROL_INTERROGATE:	break;  
     }   
    if (!SetServiceStatus(g_ReceiverHdl, &g_ReceiverStat))     
		ReportEvent(hEvent,EVENTLOG_ERROR_TYPE,CAT_JPNStatusUpdate_NT,
					EVSERVSTAT_ERR, pSid,0,0,NULL,NULL);
	return; 
}


int Register_Event()
{
	
	
	
	if(!GetUserName(szUserName,&dwNameSize))
		return 1;

	
	LookupAccountName(NULL, szUserName, pSid, &dwSidSize, 
					szDomainName, &dwDomainNameSize, &eUse);

	pSid = (PSID) new BYTE[dwSidSize];
	szDomainName = new TCHAR[dwDomainNameSize];

	if(!LookupAccountName(NULL, szUserName, pSid, &dwSidSize, 
					szDomainName, &dwDomainNameSize, &eUse))
	{
		delete[] pSid;
		delete[] szDomainName;
		delete[] szMsg;
		return 2;
	}

	hEvent = RegisterEventSource(NULL,"JPNStatusUpdate");

	if(hEvent == NULL)
	{
		delete[] pSid;
		delete[] szDomainName;
		delete[] szMsg;
		return 3;
	}

	return 0;
}


