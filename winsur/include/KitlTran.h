/* KitlTran.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _KITLTRAN_
#define _KITLTRAN_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* PFN_EnumProc  [callback; ce-only; CE 4.0..699] */
typedef BOOL (* PFN_EnumProc)(
 LPCWSTR pszDevName,
 LPVOID pData
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* TranCreate  [function; ce-only; CE 4.0..699] */
TRANSPORTID TranCreate(
 LPCWSTR pszDeviceName
);

/* TranDeInitLibrary  [function; ce-only; CE 4.0..699] */
BOOL TranDeInit Library (void);

/* TranDelete  [function; ce-only; CE 4.0..699] */
BOOL TranDelete(
 TRANSPORTID id
);

/* TranEnumKnownDevice  [function; ce-only; CE 4.0..699] */
BOOL TranEnumKnownDevice(
 PFN_EnumProc pfnCB,
 LPVOID pUserData
);

/* TranGetHostCfg  [function; ce-only; CE 4.0..699] */
BOOL TranGetHostCfg(
 TRANSPORTID id,
 LPVOID pBuffer,
 PUSHORT cbBuffer
);

/* TranGetInfo  [function; ce-only; CE 4.0..699] */
BOOL TranGetInfo(
 PTRANPORTINFOSTRUCT pInfo
);

/* TranInitLibrary  [function; ce-only; CE 4.0..699] */
BOOL TranInit Library(
 LPCWSTR pszRegKeyRoot
);

/* TranRecv  [function; ce-only; CE 4.0..699] */
BOOL TranRecv(
 TRANSPORTID id,
 LPVOID pBuffer,
 USHORT* pcbBuffer,
 DWORD dwTimeout
);

/* TranSend  [function; ce-only; CE 4.0..699] */
BOOL TranSend(
 TRANSPORTID id,
 LPCVOID pData,
 USHORT cbData,
 DWORD dwTimeout
);

/* TranSetDevCfg  [function; ce-only; CE 4.0..699] */
BOOL TranSetDevCfg(
 TRANSPORTID id,
 LPCVOID pData,
 USHORT cbData
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 700)) /* CE 4.2..699 */

/* TranGetXMLParams  [function; ce-only; CE 4.2..699] */
BOOL TranGetXMLParams(
 LPCWSTR* ppstrXML
);

/* TranSetParam  [function; ce-only; CE 4.2..699] */
BOOL TranSetParam(
 LPCWSTR strName,
 LPCWSTR strValue,
 LPWSTR pstrError,
 long lErrorStringSize
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _TRANPORTINFOSTRUCT {WORDcbData;WORDwVersion;WORDwTranGuid;WORDwFlags;DWORDdwBandWidth;} TRANPORTINFOSTRUCT, *PTRANPORTINFOSTRUCT;

/* function */
BOOL TranDeInit Library (void);

#endif /* _KITLTRAN_ */
