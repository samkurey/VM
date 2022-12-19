/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Aug 18 16:58:53 2022
 */
/* Compiler settings for D:\MTSComponents_context\JpnUpdate\JpnUpdate.idl:
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

const IID IID_IJpnUpdateService = {0x54C1CCF8,0xAC76,0x4754,{0xA7,0x6E,0xD4,0x39,0x80,0xD5,0xC8,0x20}};


const IID LIBID_JPNUPDATELib = {0x793F603A,0x4D3C,0x49F8,{0x91,0xB2,0xE3,0xA5,0xC4,0xF4,0xDE,0x03}};


const CLSID CLSID_JpnUpdateService = {0x4E9737B6,0x3AED,0x42A2,{0x86,0xCC,0xC8,0x1D,0xC7,0x63,0x18,0xF2}};


#ifdef __cplusplus
}
#endif

