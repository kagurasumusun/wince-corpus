/* af_irda.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _AF_IRDA_
#define _AF_IRDA_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define IRLMP_ENUMDEVICES 0x00000010
#define SOL_IRLMP 0x00FF

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* IAS_QUERY  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED_IAS_QUERY
#define __WINCE_DEFINED_IAS_QUERY
#ifndef __WINCE_DEFINED_PIAS_QUERY
#define __WINCE_DEFINED_PIAS_QUERY
typedef struct IAS_QUERY {
 /* DERIVED member omitted -- type body unprinted: u_char irdaDeviceID[4]; */
 char irdaClassName[61];
 char irdaAttribName[61];
 /* DERIVED member omitted -- type body unprinted: u_short irdaAttribType; */
 union {
 int irdaAttribInt;
 struct {
 int Len;
 /* DERIVED member omitted -- type body unprinted: u_char OctetSeq[1]; */
 /* DERIVED member omitted -- type body unprinted: u_char Reserved[3]; */
 } irdaAttribOctetSeq;
 struct {
 int Len;
 /* DERIVED member omitted -- type body unprinted: u_char CharSet; */
 /* DERIVED member omitted -- type body unprinted: u_char UsrStr[1]; */
 /* DERIVED member omitted -- type body unprinted: u_char Reserved[2]; */
 } irda AttribUsrStr;
 } irdaAttribute;
} _IAS_QUERY, *PIAS_QUERY;
#endif /* __WINCE_DEFINED_PIAS_QUERY */
#endif /* __WINCE_DEFINED_IAS_QUERY */

/* IAS_SET  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED__IAS_SET
#define __WINCE_DEFINED__IAS_SET
#ifndef __WINCE_DEFINED_IAS_SET
#define __WINCE_DEFINED_IAS_SET
#ifndef __WINCE_DEFINED_PIAS_SET
#define __WINCE_DEFINED_PIAS_SET
typedef struct _IAS_SET {
 char irdaClassName[61];
 char irdaAttribName[61];
 /* DERIVED member omitted -- type body unprinted: u_short irdaAttribType; */
 union {
 int irdaAttribInt;
 struct {
 int Len;
 /* DERIVED member omitted -- type body unprinted: u_char OctetSeq[1]; */
 /* DERIVED member omitted -- type body unprinted: u_char Reserved[3]; */
 } irdaAttribOctetSeq;
 struct {
 int Len;
 /* DERIVED member omitted -- type body unprinted: u_char CharSet; */
 /* DERIVED member omitted -- type body unprinted: u_char UsrStr[1]; */
 /* DERIVED member omitted -- type body unprinted: u_char Reserved[2]; */
 } irda AttribUsrStr;
 } irdaAttribute;
} _IAS_SET, *PIAS_SET;
#endif /* __WINCE_DEFINED_PIAS_SET */
#endif /* __WINCE_DEFINED_IAS_SET */
#endif /* __WINCE_DEFINED__IAS_SET */

/* IRDA_DEVICE_INFO  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED_IRDA_DEVICE_INFO
#define __WINCE_DEFINED_IRDA_DEVICE_INFO
typedef struct IRDA_DEVICE_INFO {
 /* DERIVED member omitted -- type body unprinted: u_char irdaDeviceID[4]; */
 char irdaDeviceName[22];
 /* DERIVED member omitted -- type body unprinted: u_char Reserved[2]; */
} _IRDA_DEVICE_INFO;
#endif /* __WINCE_DEFINED_IRDA_DEVICE_INFO */

/* DEVICELIST  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED_DEVICELIST
#define __WINCE_DEFINED_DEVICELIST
#ifndef __WINCE_DEFINED_PWCE_DEVICELIST
#define __WINCE_DEFINED_PWCE_DEVICELIST
typedef struct DEVICELIST{
 ULONG numDevice;
 IRDA_DEVICE_INFO Device [1];
}_DEVICELIST, *PWCE_DEVICELIST;
#endif /* __WINCE_DEFINED_PWCE_DEVICELIST */
#endif /* __WINCE_DEFINED_DEVICELIST */

/* irdaServiceName  [extra struct] */
#ifndef __WINCE_DEFINED_SOCKADDR_IRDA
#define __WINCE_DEFINED_SOCKADDR_IRDA
#ifndef __WINCE_DEFINED_IRDASERVICENAME
#define __WINCE_DEFINED_IRDASERVICENAME
struct sockaddr_irda { /* DERIVED member omitted -- type body unprinted: u_short irdaAddressFamily; */ /* DERIVED member omitted -- type body unprinted: u_char irdaDeviceID[4]; */ char irdaServiceName[25];};
#endif /* __WINCE_DEFINED_IRDASERVICENAME */
#endif /* __WINCE_DEFINED_SOCKADDR_IRDA */

#endif /* _AF_IRDA_ */
