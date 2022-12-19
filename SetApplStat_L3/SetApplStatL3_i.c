/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Thu Apr 22 11:01:24 2021
 */
/* Compiler settings for D:\MTSComponents_context\SetApplStat_L3\SetApplStatL3.idl:
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

const IID IID_ISetApplStatL3Service = {0xBFDCE839,0x36EB,0x4cdf,{0xA6,0x7C,0xAD,0xE7,0xE7,0x7B,0x45,0x7D}};


const IID LIBID_SETAPPLSTATL3Lib = {0x67C932A0,0x3398,0x469f,{0x95,0xB3,0x4B,0xBC,0x80,0xB8,0x17,0x40}};


const CLSID CLSID_SetApplStatL3Service = {0x5731B854,0x6B09,0x4585,{0xB9,0xF7,0xB5,0xAD,0x20,0xB2,0x88,0x33}};


#ifdef __cplusplus
}
#endif

