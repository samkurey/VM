/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Dec 10 14:42:57 2020
 */
/* Compiler settings for D:\MTSComponents_context\gmpcenquiry\GMPCEnquiry.idl:
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

//20895085-6956-4AF3-9831-B6CAAD0E532C - new
const IID IID_IGMPCEnquiryService_L2 = {0x20895085,0x6956,0x4AF3,{0x98,0x31,0xB6,0xCA,0xAD,0x0E,0x53,0x2C}};

//F374B0C9-444F-4A27-8D6C-DFC69B241C60 - new
const IID LIBID_GMPCENQUIRYLib = {0xF374B0C9,0x444F,0x4A27,{0x8D,0x6C,0xDF,0xC6,0x9B,0x24,0x1C,0x60}};

//5EC3DED9-9A69-456E-8BE6-7036DF56499C
const CLSID CLSID_GMPCEnquiryService_L2 = {0x5EC3DED9,0x9A69,0x456E,{0x8B,0xE6,0x70,0x36,0xDF,0x56,0x49,0x9C}};


#ifdef __cplusplus
}
#endif

