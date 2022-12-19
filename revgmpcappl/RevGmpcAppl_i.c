/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Aug 25 11:43:53 2022
 */
/* Compiler settings for D:\MTSComponents_context\revgmpcappl\RevGmpcAppl.idl:
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

const IID IID_IRevGmpcApplService = {0x500F2B9D,0x0B9D,0x4BFF,{0xA5,0xA6,0x97,0x57,0xC6,0xF9,0xB9,0x48}};


const IID LIBID_REVGMPCAPPLLib = {0x0AF1532A,0xF8B9,0x4144,{0x91,0x28,0x32,0x17,0x14,0x7B,0xEB,0xF2}};


const CLSID CLSID_RevGmpcApplService = {0x50E16411,0x6BA0,0x4052,{0x95,0xF2,0x5A,0x2C,0x40,0x0F,0xAB,0x4D}};


#ifdef __cplusplus
}
#endif

