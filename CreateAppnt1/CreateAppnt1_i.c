/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 12:47:47 2020
 */
/* Compiler settings for D:\MTSComponents_context\CreateAppnt1\CreateAppnt1.idl:
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

const IID IID_ICreateAppnt1Service = {0xD17CDF01,0x01AD,0x42C7,{0xB0,0x9A,0x1E,0xB7,0x63,0xA6,0xD9,0x3F}};


const IID LIBID_CREATEAPPNT1Lib = {0xBB34EFD9,0xD6B1,0x45C5,{0xB0,0xED,0x43,0xF3,0x5E,0x18,0xE7,0xC2}};


const CLSID CLSID_CreateAppnt1Service = {0x687662D8,0x5C0C,0x413D,{0x8D,0x1C,0x2B,0xB5,0x26,0x10,0x9F,0xB1}};


#ifdef __cplusplus
}
#endif

