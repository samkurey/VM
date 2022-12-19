/****************************************************************************/
/* File Name   : gscbutil.c													*/
/* Author      : Vageesh Patwardhan, Sangeeta Natu, Bakul Waghmare			*/
/* Description : This file contains common utility functions				*/
/*               required by all services.									*/
/****************************************************************************/

#include <windows.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <userlog.h>
#include "gscbdef.h"
#include "gscblookupdef.h"
#include "KPPdef.h"
#include "gscbio.h"


#define LOG_DEFINED
#include "gscblog.h"

char *RemoveDoubleQuotes(char newString[]);
/****************************************************************************/
/* Function Name : get_date_time()											*/
/* Input         : None														*/
/* Description   : This function is used to get the current					*/
/*                 date-time in the format ddmmyyyy HH24MISS, used			*/
/*                 for inserting dates into tables							*/
/* Return Values : date string												*/
/* Limitations   : None														*/
/****************************************************************************/
char * get_date_time(void)
{

	time_t ltime;
	struct tm *today;

	/*static is required because we are returning the pointer*/
	static char date_time[DATE_TIME_SIZE];
	
	/* Get date time*/
	time(&ltime);
	today = localtime(&ltime);

	/* Format time to required format*/
	strftime(date_time, DATE_TIME_SIZE,"%d%m%Y %H%M%S",today);
	
	return date_time;
}


/********************************************************************/
/* Function Name : get_date()		                                */
/* Input         : None                                             */
/* Description   : This function is used to get the current date    */
/*                 in the format ddmmyyyy, used to contsruct file   */
/*                 names for logging.                               */
/* Return Values : date string                                      */
/* Limitations   : None                                             */
/********************************************************************/
char * get_date(void)
{
	time_t ltime;
	struct tm *today;

	/*static is required because we are returning the pointer*/
	static char date[DATE_SIZE];
	
	/* Get date time*/
	time(&ltime);
	today = localtime(&ltime);

	/* Format time to required format*/
	strftime(date, DATE_SIZE,"%d%m%Y",today);

	return date;
}


/********************************************************************/
/* Function Name : c_rtrim()		                                */
/* Input         : max_size - maximum size of array					*/
/* Input/Output	 : buffer - character array to rtrim                */
/* Description   : This function will null terminate a given char   */
/*				   array at the first non blank character after		*/
/*				   scanning from right to left. Remember to allow	*/
/*				   one extra byte in the buffer for the null term	*/
/*				   THE BEHAVIOUR OF THE FUNCTION IS UNDEFINED IF	*/
/*				   MAX_SIZE IS EXACTLY EQUAL TO THE SIZE OF BUFFER	*/
/*				   max_size should ALWAYS be 1 less than bytes in	*/
/*				   buffer											*/
/* Return Values : GMPC_GOOD = ok                                   */
/* Limitations   : String scan is not a very good idea if max_size  */
/*				   is large.  It might be a better idea to use the  */
/*				   SQL RTRIM function against DUAL in such cases	*/
/********************************************************************/
int c_rtrim(char *buffer, int max_size)
{
	int i;
	char * temp_ptr;

	temp_ptr = buffer + max_size - 1;

	for (i = max_size; i > 0; i--)
	{
		if (' ' != *temp_ptr)
		{
			
			*(temp_ptr + 1) = 0;
			break;
		}
		temp_ptr--;
	}

	return GMPC_GOOD;
}


/********************************************************************/
/* Function Name : read_registry	                                */
/* Input         : service_id -	service id of the caller			*/
/* Output		 : read_reg - structrue containing sleep time and   */
/*				   retry count										*/
/* Description   : This function will retrieve the values for sleep */
/*				   time and retry count for a given service.  If no	*/
/*				   value is available for the given service, the	*/
/*				   default values will be read off from the registry*/
/* Return Values : GMPC_GOOD = ok                                   */
/*				   GMPC_BAD = fail									*/
/* Limitations   : None												*/
/********************************************************************/

int read_registry(int service_id, READ_REG_T *read_reg, READ_REG_GENERIC_T *other_data)
{
	long ret;

	LPTSTR lpSubKey; 
	HKEY handle;
	DWORD size = 0;
	DWORD type;
	char svc_id[3];
	char strKey[50]= {0};
	char strNewKey[50]= {0};
	char *strValue;
	char strLine[500]= {0};
	char strULine[500]= {0};

	int divPosition = 0;
	int sectionFlag = 0;
	int configFlag = 0;  // Added on 22/12/2006 for configuration file
	DWORD *retry_count;
	DWORD *sleep_time;
	FILE *fp;
	
	
	
	/* Check if input parameters are correct */
	if((service_id < 0) | (service_id > 100))
	{
		/* Null service name is not allowed */
		//sprintf(excep_log.error_msg, "read_reg : Invalid service id recieved");

		return GMPC_BAD;
	}
	else
	{
		ltoa(service_id,svc_id, 10);

	}
	

   

	if(configFlag == 0)
	{

		lpSubKey = (LPTSTR)malloc(strlen("[HKEY_LOCAL_MACHINE\\SOFTWARE\\gmpc\\Gscb") + 15);
		sprintf(lpSubKey, "[HKEY_LOCAL_MACHINE\\Software\\GMPC\\GSCB\\%s]",svc_id);
		
		fp = fopen("D:\\ijpn\\bin\\gmpc.ini","r");
		if(fp == NULL)
		{
			userlog("Unable to open INI File...");
			configFlag = 1;

		}
		else
		{
			while(fscanf(fp,"%s",strLine) != EOF)
			{
				
				if(sectionFlag == 1)
				{
					if(strncmp(lpSubKey,strLine,20) == 0)
					{
						configFlag = 2;
						fclose(fp);
						return GMPC_BAD;
					}

				}

				if(strcmpi(lpSubKey,strLine) == 0)
				{

					sectionFlag = 1;
				}
				if(sectionFlag == 1)
				{
					strValue = strstr(strLine,"=");
					if(strValue != NULL)
					{
						

						divPosition = strlen(strLine) - strlen(strValue);
						if(divPosition > 0)
						{
							
								strncat(strKey,strLine,divPosition);
								RemoveDoubleQuotes(strKey);
								RemoveDoubleQuotes(strValue);
								if(strcmpi(strKey,other_data->value_name ) == 0)
								{
									strcpy((char *)other_data->value ,strValue);
									userlog("Reading Info from INI File...");
									fclose(fp);
									return GMPC_GOOD;
								}
								strKey[0] = '\0';
								
							

						}

					
						
					}

				}


			}
			
			

		}


		
	
	}
//	else if(configFlag == 1)//Commented by Amarjith on 4th Jan '07
	if(configFlag == 1)//Added by Amarjith on 4th Jan '07
	{



		/* The key to be opened is								*/
		/* HKEY_LOCAL_MACHINE\Software\GMPC\GSCB\'service id'	*/
		/* Additional 10 allocated to take care of "default"	*/
		/* which is used if theres no entry for service id in	*/
		/* the registry.										*/

		userlog("Reading Info from Registry...");
		lpSubKey = (LPTSTR)malloc(strlen("Software\\GMPC\\GSCB") + 10);
		sprintf(lpSubKey, "Software\\GMPC\\GSCB\\%s",svc_id);

		
		/* Open the registry key */
		ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpSubKey, 0,KEY_EXECUTE, &handle);

		if (ERROR_SUCCESS != ret)
		{
			/* This may happen if the particular service does not have an entry */
			/* in the registry.  Try reading the default values key				*/
			strcpy(lpSubKey, "Software\\GMPC\\GSCB\\default");
			ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpSubKey, 0,KEY_EXECUTE, &handle);

			if (ERROR_SUCCESS != ret)
			{
				//sprintf(excep_log.error_msg, "read_reg : Failed to open registry for reading(RegOpenKeyEx failed)");
				return GMPC_BAD;
			}
		}


		if(NULL == other_data)
		{
			size = sizeof(DWORD);

			/* The caller wants sleep time and retry count	*/
			/* Retry count is stored in 4 bytes DWORD		*/
			retry_count = (DWORD *)malloc(4);
			
			/* Get the value for retry count */
			ret = RegQueryValueEx(handle, "RetryCount", NULL, &type,
								 (BYTE *)retry_count,&size);

			if(ERROR_SUCCESS != ret)
			{
				#ifdef DEBUG
					userlog("read_registry : Value : Failed to read registry retry count");
				#endif
			//	sprintf(excep_log.error_msg, "read_reg : Failed to read registry for retry count(RegQueryValueEx failed)");
				RegCloseKey(handle);
				return GMPC_BAD;
			}

			read_reg->retry_count = *retry_count;

			sleep_time = (DWORD *)malloc(4);

			size = sizeof(DWORD);

			/* Get the value for sleep time */
			ret = RegQueryValueEx(handle, "SleepTime", NULL, &type, (BYTE *)sleep_time,&size);

			if(ERROR_SUCCESS != ret)
			{
				#ifdef DEBUG
					userlog("read_registry : Failed to read registry retry count");
				#endif

				//sprintf(excep_log.error_msg, "read_reg : Failed to read registry for sleep time (RegQueryValueEx failed)");
				RegCloseKey(handle);
				return GMPC_BAD;
			}

			read_reg->sleep_time= *sleep_time;

			RegCloseKey(handle);
			return GMPC_GOOD;

		}
		else
		{
			/* The caller want's a specific value */
			size = 0;

			/* Get the size of the data */
			ret = RegQueryValueEx(handle, other_data->value_name, NULL, &type, 
				(BYTE *)other_data->value,&size);

			if(ERROR_MORE_DATA != ret)
			{
	#ifdef DEBUG
				userlog("read_registry : Failed to read registry retry count");
	#endif
			//	sprintf(excep_log.error_msg, "read_reg : Failed to read registry for %s size (RegQueryValueEx failed)", other_data->value_name);
				RegCloseKey(handle);
				return GMPC_BAD;
			}

			/* Get the actual data */
			ret = RegQueryValueEx(handle, other_data->value_name, NULL, &type, 
				 				 (BYTE *)other_data->value,&size);

			if(ERROR_SUCCESS != ret)
			{
			#ifdef DEBUG
				userlog("read_registry : Failed to read registry retry count");
		#endif

			//	sprintf(excep_log.error_msg, "read_reg : Failed to read registry for %s (RegQueryValueEx failed)", other_data->value_name);
				RegCloseKey(handle);
				return GMPC_BAD;
			}

			RegCloseKey(handle);
			return GMPC_GOOD;
		}
   }
   
   return GMPC_BAD;

  
}

char *RemoveDoubleQuotes(char newString[])
{
  char localString[500];
  int j = 0;
  int len = 0;
  int i;
  strcpy(localString,newString);
  len = strlen(localString);
  for(i = 0; i < len; i++)
  {
	  if(localString[i] == '=') 
			continue;
	  if(localString[i] != '\"') 
       newString[j++] =  localString[i];
	   		 
  }     
 newString[j] = '\0'; 
 return 0;

}


int read_registry_old(int service_id, READ_REG_T *read_reg, READ_REG_GENERIC_T *other_data)
{
	long ret;

	LPTSTR lpSubKey; 
	HKEY handle;
	DWORD size = 0;
	DWORD type;
	char svc_id[3];

	DWORD *retry_count;
	DWORD *sleep_time;
	
	/* Check if input parameters are correct */
	if((service_id < 0) | (service_id > 100))
	{
		/* Null service name is not allowed */
		//sprintf(excep_log.error_msg, "read_reg : Invalid service id recieved");
		return GMPC_BAD;
	}

	ltoa(service_id,svc_id, 10);

	/* The key to be opened is								*/
	/* HKEY_LOCAL_MACHINE\Software\GMPC\GSCB\'service id'	*/
	/* Additional 10 allocated to take care of "default"	*/
	/* which is used if theres no entry for service id in	*/
	/* the registry.										*/
	lpSubKey = (LPTSTR)malloc(strlen("Software\\GMPC\\GSCB") + 10);
	sprintf(lpSubKey, "Software\\GMPC\\GSCB\\%s",svc_id);
	
	
	/* Open the registry key */
	ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpSubKey, 0,KEY_EXECUTE, &handle);

	if (ERROR_SUCCESS != ret)
	{
		/* This may happen if the particular service does not have an entry */
		/* in the registry.  Try reading the default values key				*/
		strcpy(lpSubKey, "Software\\GMPC\\GSCB\\default");
		
		ret = RegOpenKeyEx(HKEY_LOCAL_MACHINE, lpSubKey, 0,KEY_EXECUTE, &handle);

		if (ERROR_SUCCESS != ret)
		{
			//sprintf(excep_log.error_msg, "read_reg : Failed to open registry for reading(RegOpenKeyEx failed)");
			return GMPC_BAD;
		}
	}


	if(NULL == other_data)
	{
		size = sizeof(DWORD);

		/* The caller wants sleep time and retry count	*/
		/* Retry count is stored in 4 bytes DWORD		*/
		retry_count = (DWORD *)malloc(4);
		
		/* Get the value for retry count */
		ret = RegQueryValueEx(handle, "RetryCount", NULL, &type,
							 (BYTE *)retry_count,&size);

		if(ERROR_SUCCESS != ret)
		{
#ifdef DEBUG
			userlog("read_registry : Value : Failed to read registry retry count");
#endif
		//	sprintf(excep_log.error_msg, "read_reg : Failed to read registry for retry count(RegQueryValueEx failed)");
			RegCloseKey(handle);
			return GMPC_BAD;
		}

		read_reg->retry_count = *retry_count;

		sleep_time = (DWORD *)malloc(4);

		size = sizeof(DWORD);

		/* Get the value for sleep time */
		ret = RegQueryValueEx(handle, "SleepTime", NULL, &type, (BYTE *)sleep_time,&size);

		if(ERROR_SUCCESS != ret)
		{
#ifdef DEBUG
			userlog("read_registry : Failed to read registry retry count");
#endif

			//sprintf(excep_log.error_msg, "read_reg : Failed to read registry for sleep time (RegQueryValueEx failed)");
			RegCloseKey(handle);
			return GMPC_BAD;
		}

		read_reg->sleep_time= *sleep_time;

		RegCloseKey(handle);
		return GMPC_GOOD;

	}
	else
	{
		/* The caller want's a specific value */
		size = 0;

		/* Get the size of the data */
		ret = RegQueryValueEx(handle, other_data->value_name, NULL, &type, 
			(BYTE *)other_data->value,&size);

		if(ERROR_MORE_DATA != ret)
		{
#ifdef DEBUG
			userlog("read_registry : Failed to read registry retry count");
#endif
		//	sprintf(excep_log.error_msg, "read_reg : Failed to read registry for %s size (RegQueryValueEx failed)", other_data->value_name);
			RegCloseKey(handle);
			return GMPC_BAD;
		}

		/* Get the actual data */
		ret = RegQueryValueEx(handle, other_data->value_name, NULL, &type, 
				 			 (BYTE *)other_data->value,&size);

		if(ERROR_SUCCESS != ret)
		{
#ifdef DEBUG
			userlog("read_registry : Failed to read registry retry count");
#endif

		//	sprintf(excep_log.error_msg, "read_reg : Failed to read registry for %s (RegQueryValueEx failed)", other_data->value_name);
			RegCloseKey(handle);
			return GMPC_BAD;
		}

		RegCloseKey(handle);
		return GMPC_GOOD;
	}
}


/********************************************************************/
/* Function Name : write_registry	                                */
/* Input         : service_id -	service id of the caller			*/
/*				 : input_data - structrue the value type and value	*/
/*				   to be created									*/
/* Description   : This function will update the contents of a		*/
/*				   value in the registry.  If the specified value	*/
/*				   does not exisit, this function will create it	*/
/* Return Values : GMPC_GOOD = ok                                   */
/*				   GMPC_BAD = fail									*/
/* Limitations   : None												*/
/********************************************************************/
int write_registry(int service_id, WRITE_REG_T input_data)
{
	long ret;

	LPTSTR lpSubKey; 
	HKEY handle;
	DWORD disposition;

	char svc_id[3];


	/* Check if input parameters are correct */
	if((service_id < 0) | (service_id > 100))
	{
		/* Null service name is not allowed */
		//sprintf(excep_log.error_msg, "read_reg : Invalid service id recieved");
		return GMPC_BAD;
	}


	ltoa(service_id,svc_id, 10);

	/* The key to be opened is HKEY_LOCAL_MACHINE\Software\GMPC\GSCB\'service id' */
	lpSubKey = (LPTSTR)malloc(strlen("Software\\GMPC\\GSCB") +  2);
	sprintf(lpSubKey, "Software\\GMPC\\GSCB\\%s",svc_id);

	
	/* Open the registry key */
	ret = RegCreateKeyEx(HKEY_LOCAL_MACHINE, lpSubKey, 0, NULL, 
						REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, 
						NULL, &handle, &disposition);

	if ((ERROR_SUCCESS == ret) && (REG_CREATED_NEW_KEY == disposition))
	{
		/* Key does not exist */
	//	excep_log.severity = WARNING;
	//	sprintf(excep_log.error_msg, "write_reg : Service id %s does not have entry " \
	//		"in registry.  Creating new entry", svc_id);
		//appl_excep_log(excep_log);
	}
	else if(ERROR_SUCCESS != ret)
	{
		/* Severe error */
	//	sprintf(excep_log.error_msg, "write_reg : Could not open/create key for " \
	//		"service id %s in registry. RegCreateKeyEx failed", svc_id);
		return GMPC_BAD;
	}


	if(REG_SZ == input_data.type)
		ret = RegSetValueEx(handle, input_data.value_name, 0, input_data.type,
					(BYTE *)input_data.value, strlen(input_data.value) + 1);
	else
		ret = RegSetValueEx(handle, input_data.value_name, 0, input_data.type,
					(BYTE *)input_data.value, 4);

	if(ERROR_SUCCESS != ret)
	{
		/* Error */
		//sprintf(excep_log.error_msg, "write_reg : Could not open/create key for " \
		//	"service id %s in registry.  Creating new entry", svc_id);

		RegCloseKey(handle);
		return GMPC_BAD;
	}

	RegCloseKey(handle);
	return GMPC_GOOD;
}

/************************************************************************/
/* Function Name  : get_return_code()									*/
/* Input		  :	Reply indicator returned by legacy					*/
/*					Service_id of the invoking service					*/
/* Description    : This function is used to interpret the reply		*/
/*                  indicator returned by legacy						*/
/* Return Values  : Return code 										*/
/* Limitations    : None												*/
/************************************************************************/
int get_return_code(int reply_ind, int service_id)
{
	int return_code = reply_ind;

	switch(service_id)
	{
		case GET_APPNT_KPT_ID	  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = GET_KPT_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = GET_KPT_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = GET_KPT_COMM_ERROR;
				break;	
			case NO_MSG_ERROR	  :
				return_code = GET_KPT_NO_MSG_ERROR;
				break;	
			case PUT_ERROR	  :
				return_code = GET_KPT_PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = GET_KPT_GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = GET_KPT_CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = GET_KPT_APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = GET_KPT_LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
		case GET_JPN_DATA_ID	  :
		case JPN_PERSON_INQ_ID	  :
			{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = JPN_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = JPN_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = JPN_COMM_ERROR;
				break;	
			case NO_MSG_ERROR	  :
				return_code = JPN_NO_MSG_ERROR;
				break;	
			case PUT_ERROR	  :
				return_code = JPN_PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = JPN_GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = JPN_CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = JPN_APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = JPN_LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
		case GET_JPJ_DATA_ID	  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = JPJ_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = JPJ_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = JPJ_COMM_ERROR;
				break;
			case NO_MSG_ERROR	  :
				return_code = JPJ_NO_MSG_ERROR;
				break;
			case PUT_ERROR	  :
				return_code = JPJ_PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = JPJ_GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = JPJ_CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = JPJ_APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = JPJ_LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
		case GET_IMM_DATA_ID	  :
		{
			switch(reply_ind)
			{
			case LI_REC_NOT_FOUND :
				return_code = IMM_REC_NOT_FOUND;
				break;
			case LI_NOT_OK		  :
				return_code = IMM_NOT_OK;
				break;
			case LI_COMM_ERROR	  :
				return_code = IMM_COMM_ERROR;
				break;
			case NO_MSG_ERROR	  :
				return_code = IMM_NO_MSG_ERROR;
				break;
			case PUT_ERROR	  :
				return_code = IMM_PUT_ERROR;
				break;
			case GET_ERROR	  :
				return_code = IMM_GET_ERROR;
				break;
			case CONN_ERROR	  :
				return_code = IMM_CONN_ERROR;
				break;
			case APPL_ERROR	  :
				return_code = IMM_APPL_ERROR;
				break;
			case LEGACY_DATA_ERROR	  :
				return_code = IMM_LEGACY_DATA_ERROR;
				break;
			default			      :
				break;
			}
			break;
		}
		default	:
			break;
	}

	return return_code;
}




	