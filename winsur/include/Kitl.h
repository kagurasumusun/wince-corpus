/* Kitl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 27 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _KITL_
#define _KITL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* KITLTRANSPORT  [struct; ce-only; CE 4.0..699] */
typedef struct _KITLTRANSPORT{
 DWORD dwBootFlags; 
 char szName[KITL_MAX_DEV_NAMELEN];
 UCHAR Interrupt;
 UCHAR WindowSize;
 UCHAR FrmHdrSize;
 UCHAR FrmTlrSize;
 DWORD dwPhysBuffer;
 DWORD dwPhysBufLen;
 PFN_ENCODE pfnEncode;
 PFN_DECODE pfnDecode;
 PFN_SENDFRAME pfnSend;
 PFN_RECVFRAME pfnRecv;
 PFN_ENABLEINT pfnEnableInt;
 PFN_GETDEVCFG pfnGetDevCfg;
 PFN_SETHOSTCFG pfnSetHostCfg;
} KITLTRANSPORT, *PKITLTRANSPORT;

/* PFN_KITLTIMERCB  [callback; ce-only; CE 4.0..699; Kitl.lib] */
typedef void( *PFN_KITLTIMERCB)(
 LPVOID lpParam
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 400 && _WIN32_WCE < 600)) /* CE 1.0..199, 2.11..2.12, 4.0..599 */

/* TransportRecv  [function; ce-only; CE 1.0..199, 2.11..2.12, 4.0..599; Kitl.lib] */
BOOL TransportRecv(
 LPBYTE pbBuffer,
 PUSHORT pcbBuffer
);

/* TransportSend  [function; ce-only; CE 1.0..199, 2.11..2.12, 4.0..599; Kitl.lib] */
BOOL TransportSend(LPBYTE pbFrame,USHORT cbFrame);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 600)) /* CE 4.0..599 */

/* KitlInit  [function; ce-only; CE 4.0..599; Kitl.lib] */
BOOL KitlInit(
 BOOL fStartKitl
);

/* KITLOutputDebugString  [function; ce-only; CE 4.0..599; Kitl.lib] */
void KITLOutputDebugString(const char* fmt,
 ...
);

/* KitlSendRawData  [function; ce-only; CE 4.0..599; Kitl.lib] */
BOOL KitlSendRawData(
 LPBYTE pbData,
 WORD wLength
);

/* KitlSetTimerCallback  [function; ce-only; CE 4.0..599; Kitl.lib] */
BOOL KitlSetTimerCallback(
 int nSecs,
 PFN_KITLTIMERCB pfnCB,
 LPVOID lpParam
);

/* KitlStopTimerCallback  [function; ce-only; CE 4.0..599; Kitl.lib] */
BOOL KitlStopTimerCallback(
 PFN_KITLTIMERCB pfnCB,
 LPVOID lpParam
);

/* TransportDecode  [function; ce-only; CE 4.0..599; Kitl.lib] */
LPBYTE TransportDecode(
 LPBYTE pbFrame,
 PUSHORT pcbData
);

/* TransportEnableInt  [function; ce-only; CE 4.0..599; Kitl.lib] */
void TransportEnableInt(BOOL fEnable);

/* TransportEncode  [function; ce-only; CE 4.0..599; Kitl.lib] */
BOOL TransportEncode(
 LPBYTE pbFrame,
 USHORT cbData
);

/* TransportGetDevCfg  [function; ce-only; CE 4.0..599; Kitl.lib] */
BOOL TransportGetDevCfg(
 LPBYTE pbBuffer,
 PUSHORT pcbBuffer
);

/* TransportSetHostCfg  [function; ce-only; CE 4.0..599; Kitl.lib] */
BOOL TransportSetHostCfg(
 LPBYTE pbBuffer,
 PUSHORT pcbBuffer
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* OEMKitlGetSecs  [function; ce-only; CE 4.0..699; Kitl.lib] */
DWORD OEMKitlGetSecs(void);

/* OEMKitlInit  [function; ce-only; CE 4.0..699; Kitl.lib] */
BOOL OEMKitlInit(
 PKITLTRANSPORT pKitl
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 700)) /* CE 4.2..699 */

/* KITLGetTranXMLParams  [function; ce-only; CE 4.2..699] */
BOOL KITLGetTranXMLParams(
 KITLTRANLIB klib,
 LPCWSTR* ppstrXML
);

/* KITLLoadTransportLib  [function; ce-only; CE 4.2..699] */
KITLTRANLIB KITLLoadTransportLib(
 LPCWSTR pszDllName
);

/* KITLSetTranParam  [function; ce-only; CE 4.2..699] */
BOOL KITLSetTranParam(
 KITLTRANLIB klib,
 LPCWSTR strName,
 LPCWSTR strValue,
 LPWSTR strError,
 ULONG lErrorStringSize 
);

/* KITLUnloadTransportLib  [function; ce-only; CE 4.2..699] */
BOOL KITLUnloadTransportLib(
 KITLTRANLIB klib
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PFN_DECODE  [function; ce-only; CE 6.0..699; Kitl.lib] */
LPBYTE TransportDecode(
 LPBYTE pbFrame,
 PUSHORT pcbData
);

/* PFN_ENABLEINT  [function; ce-only; CE 6.0..699; Kitl.lib] */
void TransportEnableInt(
 BOOL Enable
);

/* PFN_ENCODE  [function; ce-only; CE 6.0..699; Kitl.lib] */
BOOL TransportEncode(
 LPBYTE pbFrame,
 USHORT cbData
);

/* PFN_GETDEVCFG  [function; ce-only; CE 6.0..699; Kitl.lib] */
BOOL TransportGetDevCfg(
 LPBYTE pbBuffer,
 PUSHORT pcbBuffer
);

/* PFN_RECVFRAME  [function; ce-only; CE 6.0..699; Kitl.lib] */
BOOL TransportRecv(
 LPBYTE pbBuffer,
 PUSHORT pcbBuffer
);

/* PFN_SENDFRAME  [function; ce-only; CE 6.0..699; Kitl.lib] */
BOOL TransportSend(
 LPBYTE pbFrame,
 USHORT cbFrame
);

/* PFN_SETHOSTCFG  [function; ce-only; CE 6.0..699; Kitl.lib] */
BOOL TransportSetHostCfg(
 LPBYTE pbBuffer,
 PUSHORT pcbBuffer
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _KITLTRANSPORT{DWORDdwBootFlags;charszName[KITL_MAX_DEV_NAMELEN];UCHARInterrupt;UCHARWindowSize;UCHARFrmHdrSize;UCHARFrmTlrSize;DWORDdwPhysBuffer;DWORDdwPhysBufLen;PFN_ENCODEpfnEncode;PFN_DECODEpfnDecode;PFN_SENDFRAMEpfnSend;PFN_RECVFRAMEpfnRecv;PFN_ENABLEINTpfnEnableInt;PFN_GETDEVCFGpfnGetDevCfg;PFN_SETHOSTCFGpfnSetHostCfg;} KITLTRANSPORT, *PKITLTRANSPORT;

#endif /* _KITL_ */
