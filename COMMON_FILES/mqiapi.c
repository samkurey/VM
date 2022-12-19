/********************************************************************/
/* File Name	:mqiapi.c										    */
/* Author		:Vageesh Patwardhan									*/
/* Description	:Contains stubs for MQSeries Interface APIs in dll	*/
/********************************************************************/
#include <windows.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <userlog.h>


#include "gscbdef.h"
#define LOG_DEFINED
#include "gscblog.h"
#include "gscblookupdef.h"

#include "KPPdef.h"
#include "KPPstruct.h"
#include "KPPproto.h"

extern LI_INIT_DLL_FN_TYP li_init_dll;
extern LI_END_DLL_FN_TYP li_end_dll;


/************************************************************************/
/* Function Name	: li_init										    */
/* Description		: Function stub for li_init_dll						*/
/* Input			: int request_type									*/
/* Return Values	: int return code GMPC_GOOD = success				*/
/*									  GMPC_BAD = failure				*/	
/* Limitations		: none												*/
/************************************************************************/
int li_init(int request_type)
{

	int ret;

	READ_REG_T read_reg;

	/* Load the dll into memory */
	ret = load_lib();

	if (GMPC_GOOD != ret)
	{
		return APPL_ERROR;
	}
	/* Everything OK so call the function */

	
	ret = (li_init_dll) (request_type, excep_log);

	if(GMPC_GOOD != ret)
	{
		/* Log a warning */
		strcpy(prog_log.remarks, "li_init: li_init_dll failed.  Retrying");
		strcpy(excep_log.error_msg, "li_init: li_init_dll failed.  Retrying");
		excep_log.severity = WARNING;
		log_error();

		/* Read the registry to find the sleep time and retry counts */
		ret = read_registry(KPP_GATE_INTERFACE_ID, &read_reg, NULL);
		if(read_reg.retry_count  <= 0)
			return CONN_ERROR;
		else
		{
			for (;read_reg.retry_count > 0; read_reg.retry_count--)
			{

				Sleep(read_reg.sleep_time);
				ret = (li_init_dll) (request_type, excep_log);
				if(GMPC_GOOD == ret)
					return GMPC_GOOD;

				/* Log a warning */
				strcpy(prog_log.remarks, "li_init: li_init_dll failed.  Retrying");
				sprintf(excep_log.error_msg, "li_init: li_init_dll failed.  Retrying in %d", read_reg.sleep_time);
				excep_log.severity = WARNING;
				log_error();

			}

			return CONN_ERROR;
		}
	
	}

	return ret;
}

/************************************************************************/
/* Function Name	: li_end										    */
/* Description		: Function stub for li_end_dll						*/
/* Input			: none												*/
/* Return Values	: int return code GMPC_GOOD = success				*/
/* Limitations		: Currently assuming that li_init is being done		*/ 
/*					  BEFORE calling li_end.  So this function is not	*/
/*					  calling load_lib.									*/ 
/************************************************************************/
int li_end(void)
{
	int ret;
	
	/* Everything OK so call the function */

	ret = (li_end_dll) ();
	
	/* Since this is supposed to be the last call to the Interface, unload
	   the dll from memory */
	unload_lib();

	return ret;
}

