/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 14:58:39 2020
 */
/* Compiler settings for D:\MTSComponents_context\TerminateAppl\TerminateAppl.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_ITerminateApplService = {0x8B80608A,0xF7C7,0x4684,{0x90,0xF3,0xB7,0x04,0xA9,0x9F,0x4C,0xF1}};


const IID LIBID_TERMINATEAPPLLib = {0xDA20547B,0xEE95,0x443B,{0x99,0x66,0xFF,0x31,0x6B,0xD1,0x22,0xB3}};


const CLSID CLSID_TerminateApplService = {0xEDF3FB53,0x7E49,0x4405,{0x8F,0x2B,0xF1,0x4B,0xB1,0x73,0x8D,0xB8}};


#ifdef __cplusplus
}
#endif

