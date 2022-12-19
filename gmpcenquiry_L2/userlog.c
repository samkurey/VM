#include <stdio.h>
#include <stdarg.h>
#include <string.h>

char * get_date_time(void);
char * get_date(void);

void userlog(char* szFormatString, ...)
{
	FILE *pLogFile = NULL;

	va_list args;
	char szFileName[50] = {0};

	strcpy(szFileName, "D:\\IJPN\\Log\\GMPCEnquiry_");
	strcat(szFileName, get_date());
	strcat(szFileName, ".log");

	pLogFile = fopen(szFileName,"a+");
	va_start(args, szFormatString);

	if(pLogFile)
	{
		fprintf(pLogFile, "%s: ", get_date_time());
		vfprintf(pLogFile,szFormatString,args);
		fprintf(pLogFile, "\n");
		fclose(pLogFile);
	}
	va_end(args);
	
}
