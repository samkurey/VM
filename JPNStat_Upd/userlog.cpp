#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <time.h>

char* GetLogDate(void)
{
	time_t ltime;
	struct tm *today;

	/*static is required because we are returning the pointer*/
	static char date[9];
	
	/* Get date time*/
	time(&ltime);
	today = localtime(&ltime);

	/* Format time to required format*/
	strftime(date, 9,"%d%m%Y",today);

	return date;
}

char* GetLogTime(void)
{
	time_t ltime;
	struct tm *today;

	/*static is required because we are returning the pointer*/
	static char curr_time[9];
	
	/* Get date time*/
	time(&ltime);
	today = localtime(&ltime);

	/* Format time to required format*/
	strftime(curr_time, 9,"%H:%M:%S",today);
	
	return curr_time;
}

void userlog(char* szFormatString, ...)
{
	FILE *pLogFile = NULL;

	va_list args;
	char szFileName[50] = {0};

	strcpy(szFileName, "D:\\IJPN\\Log\\JPNStat_Upd_");
	strcat(szFileName, GetLogDate());
	strcat(szFileName, ".log");

	pLogFile = fopen(szFileName,"a+");
	va_start(args, szFormatString);

	if(pLogFile)
	{
		fprintf(pLogFile, "%s: ", GetLogTime());
		vfprintf(pLogFile,szFormatString,args);
		fprintf(pLogFile, "\n");
		fclose(pLogFile);
	}
	va_end(args);
	
}
