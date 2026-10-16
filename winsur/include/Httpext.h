/* Httpext.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 21 constants, 8 declarations, 3 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _HTTPEXT_
#define _HTTPEXT_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define HSE_IO_ASYNC 0x00000002
#define HSE_IO_DISCONNECT_AFTER_SEND 0x00000004
#define HSE_IO_SEND_HEADERS 0x00000008
#define HSE_IO_SYNC 0x00000001
#define HSE_LOG_BUFFER_LEN 80
#define HSE_MAX_EXT_DLL_NAME_LEN 256
#define HSE_REQ_BASE 0
#define HSE_REQ_DONE_WITH_SESSION 4
#define HSE_REQ_END_RESERVED 1000
#define HSE_REQ_SEND_RESPONSE_HEADER 3
#define HSE_REQ_SEND_RESPONSE_HEADER_EX 1016
#define HSE_REQ_SEND_URL 2
#define HSE_REQ_SEND_URL_REDIRECT_RESP 1
#define HSE_STATUS_ERROR 4
#define HSE_STATUS_PENDING 3
#define HSE_STATUS_SUCCESS 1
#define HSE_STATUS_SUCCESS_AND_KEEP_CONN 2
#define HSE_TERM_ADVISORY_UNLOAD 0x00000001
#define HSE_TERM_MUST_UNLOAD 0x00000002
#define HSE_VERSION_MAJOR 2
#define HSE_VERSION_MINOR 0

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* EXTENSION_CONTROL_BLOCK  [struct; ce-only] */

/* HSE_URL_MAPEX_INFO  [typedef, struct; ce-only] */

/* HSE_VERSION_INFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* GetExtensionVersion  [function; ce-only; CE 3.0..399, 5.0..699] */
BOOL WINAPI GetExtensionVersion(
 HSE_VERSION_INFO* pVer 
);

/* GetServerVariable  [function; ce-only; CE 3.0..399, 5.0..699; httpextn.lib, Httpfilt.lib, httpfilt.lib] */
BOOL (WINAPI* GetServerVariable) (
 PHTTP_FILTER_CONTEXT pfc,
 LPSTR lpszVariableName,
 LPVOID lpvBuffer,
 LPDWORD lpdwSize
);

/* HttpExtensionProc  [function; ce-only; CE 3.0..399, 5.0..699] */
DWORD WINAPI HttpExtensionProc(
 EXTENSION_CONTROL_BLOCK* pECB
);

/* ReadClient  [function; ce-only; CE 3.0..399, 5.0..699; Httpextn.lib, httpextn.lib] */
BOOL (WINAPI* ReadClient)(
 HCONN ConnID,
 LPVOID lpvBuffer,
 LPDWORD lpdwSize 
);

/* TerminateExtension  [function; ce-only; CE 3.0..399, 5.0..699] */
BOOL WINAPI TerminateExtension(
 DWORD dwFlags 
);

/* WriteClient  [function; ce-only; CE 3.0..399, 5.0..699; Httpextn.lib, httpextn.lib, Httpfilt.lib, httpfilt.lib] */
BOOL (WINAPI* WriteClient)(
 HCONN ConnID,
 LPVOID Buffer,
 LPDWORD lpdwBytes,
 DWORD dwReserved 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
BOOL (WINAPI* ServerSupportFunction)(PHTTP_FILTER_CONTEXTpfc,enum SF_REQ_TYPE sfReq,PVOID pData,DWORDul1,DWORD ul2);

/* struct */
typedef struct _EXTENSION_CONTROL_BLOCK{DWORDcbSize;DWORDdwVersion;HCONNConnID;DWORDdwHttpStatusCode;CHAR lpszLogData[HSE_LOG_BUFFER_LEN];LPSTRlpszMethod;LPSTRlpszQueryString;LPSTRlpszPathInfo;LPSTRlpszPathTranslated;DWORDcbTotalBytes;DWORDcbAvailable;LPBYTElpbData;LPSTRlpszContentType;BOOL (WINAPI* GetServerVariable);BOOL (WINAPI* WriteClient);BOOL (WINAPI* ReadClient);BOOL (WINAPI* ServerSupportFunction);} EXTENSION_CONTROL_BLOCK, LPEXTENSION_CONTROL_BLOCK;
typedef struct _HSE_SEND_HEADER_EX_INFO{ LPCSTR pszStatus; LPCSTR pszHeader; DWORD cchStatus; DWORD cchHeader; BOOL fKeepConn;} HSE_SEND_HEADER_EX_INFO, *LPHSE_SEND_HEADER_EX_INFO;
typedef struct _HSE_VERSION_INFO{DWORDdwExtensionVersion; CHARlpszExtensionDesc[HSE_MAX_EXT_DLL_NAME_LEN];} HSE_VERSION_INFO,*LPHSE_VERSION_INFO;

/* function */
BOOL WINAPIGetExtensionVersion(HSE_VERSION_INFO* pVer );
BOOL WINAPITerminateExtension(DWORD dwFlags );

#endif /* _HTTPEXT_ */
