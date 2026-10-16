/* Httpfilt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 17 declarations, 9 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _HTTPFILT_
#define _HTTPFILT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* HTTP_FILTER_VERSION  [typedef, struct; ce-only] */

/* SF_NOTIFY_ACCESS_DENIED  [function, typedef; ce-only; entity-headers] */

/* SF_NOTIFY_AUTHENTICATION  [function, typedef; ce-only; entity-headers] */

/* SF_NOTIFY_LOG  [function, typedef; ce-only; entity-headers] */

/* SF_NOTIFY_PREPROC_HEADERS  [function, typedef; ce-only; entity-headers] */

/* SF_NOTIFY_READ_RAW_DATA  [function, typedef; ce-only; entity-headers] */

/* SF_NOTIFY_SEND_RAW_DATA  [function, typedef; ce-only; entity-headers] */

/* SF_NOTIFY_SEND_RESPONSE  [function, typedef; ce-only; entity-headers] */

/* SF_NOTIFY_URL_MAP  [function, typedef; ce-only; entity-headers] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* AddHeader  [function; ce-only; CE 3.0..399, 5.0..699; Httpfilt.lib, httpfilt.lib] */
BOOL WINAPI* AddHeader(
 PHTTP_FILTER_CONTEXT pfc, 
 LPSTR lpszName, 
 LPSTR lpszValue
);

/* AddResponseHeaders  [function; ce-only; CE 3.0..399, 5.0..699] */
BOOL WINAPI* AddResponseHeaders(
 PHTTP_FILTER_CONTEXT pfc,
 LPSTR lpszHeaders,
 LPSTR dwReserved 
);

/* AllocMem  [function; ce-only; CE 3.0..399, 5.0..699; Httpfilt.lib, httpfilt.lib] */
VOID* WINAPI* AllocMem(
 PHTTP_FILTER_CONTEXT pfc,
 DWORD cbSize,
 DWORD dwReserved 
);

/* GetFilterVersion  [function; ce-only; CE 3.0..399, 5.0..699; httpfilt.lib] */
BOOL WINAPI GetFilterVersion(
 PHTTP_FILTER_VERSION pVer
);

/* GetHeader  [function; ce-only; CE 3.0..399, 5.0..699; Httpfilt.lib, httpfilt.lib] */
BOOL (WINAPI* GetHeader)(
 PHTTP_FILTER_CONTEXT pfc, 
 LPSTR lpszName, 
 LPVOID lpvBuffer, 
 LPDWORD lpdwSize 
);

/* HttpFilterProc  [function; ce-only; CE 3.0..399, 5.0..699; httpfilt.lib] */
DWORD WINAPI HttpFilterProc(
 PHTTP_FILTER_CONTEXT pfc, 
 DWORD NotificationType, 
 VOID* pvNotification
);

/* SetHeader  [function; ce-only; CE 3.0..399, 5.0..699; Httpfilt.lib, httpfilt.lib] */
BOOL (WINAPI* SetHeader)(
 PHTTP_FILTER_CONTEXT pfc, 
 LPSTR lpszName, 
 LPSTR lpszValue 
);

/* TerminateFilter  [function; ce-only; CE 3.0..399, 5.0..699; httpfilt.lib] */
BOOL WINAPI TerminateFilter(
 DWORD dwFlags
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
enum SF_REQ_TYPE{
  SF_REQ_SEND_RESPONSE_HEADER,
  SF_REQ_ADD_HEADERS_ON_DENIAL,
  SF_REQ_SET_NEXT_READ_SIZE,
  SF_REQ_SET_PROXY_INFO,
  SF_REQ_GET_CONNID,
  SF_REQ_SET_CERTIFICATE_INFO,
  SF_REQ_GET_PROPERTY,
  SF_REQ_NORMALIZE_URL,
  SF_REQ_DISABLE_NOTIFICATIONS
} ;

/* struct */
typedef struct _HTTP_FILTER_ACCESS_DENIED{const CHAR*pszURL; const CHAR*pszPhysicalPath; DWORDdwReason; } HTTP_FILTER_ACCESS_DENIED, *PHTTP_FILTER_ACCESS_DENIED;
typedef struct _HTTP_FILTER_AUTHENT{ CHAR*pszUser;
DWORDcbUserBuff;
CHAR*pszPassword;
DWORDcbPasswordBuff;
} HTTP_FILTER_AUTHENT, *PHTTP_FILTER_AUTHENT;
typedef struct _HTTP_FILTER_LOG{const CHAR*pszClientHostName;
const CHAR*pszClientUserName;
const CHAR*pszServerName;
const CHAR*pszOperation;
const CHAR*pszTarget;
const CHAR*pszParameters;
DWORDdwHttpStatus;
DWORDdwWin32Status;
DWORDdwBytesSent;
DWORDdwBytesRecvd;
DWORDmsTimeForProcessing;
} HTTP_FILTER_LOG, *PHTTP_FILTER_LOG;
typedef struct _HTTP_FILTER_RAW_DATA{PVOIDpvInData;
DWORDcbInData;
DWORDcbInBuffer;
DWORDdwReserved;
} HTTP_FILTER_RAW_DATA, *PHTTP_FILTER_RAW_DATA;
typedef struct _HTTP_FILTER_URL_MAP{
  const CHAR*pszURL;
  CHAR*pszPhysicalPath;
  DWORDcbPathBuff;
} HTTP_FILTER_URL_MAP, *PHTTP_FILTER_URL_MAP;

#endif /* _HTTPFILT_ */
