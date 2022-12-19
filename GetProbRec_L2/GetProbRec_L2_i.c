/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Aug 23 16:35:30 2021
 */
/* Compiler settings for D:\MTSComponents_context\GetProbRec_L2\GetProbRec_L2.idl:
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

const IID IID_IGetProbRecL2Service = {0xA9388405,0xEF28,0x4E46,{0x9D,0x24,0xE5,0xD9,0x4E,0x0D,0x43,0x7A}};


const IID LIBID_GETPROBREC_L2Lib = {0x2DB54A75,0xE019,0x4473,{0xAC,0xCE,0xB7,0x60,0xBF,0xD0,0x63,0x73}};


const CLSID CLSID_GetProbRecL2Service = {0x06AACDA2,0xE482,0x47CE,{0x88,0x45,0x3B,0x9F,0xF3,0xC9,0x5A,0x97}};


#ifdef __cplusplus
}
#endif

