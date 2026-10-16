/* Httpfilt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 15 declarations, 9 outlines, 0 base types, 0 extra macros, 2 extra decls
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
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* HTTP_FILTER_ACCESS_DENIED  [struct; ce-only] */
typedef struct _HTTP_FILTER_ACCESS_DENIED{
 const CHAR* pszURL;
 const CHAR* pszPhysicalPath;
 DWORD dwReason;
} HTTP_FILTER_ACCESS_DENIED, *PHTTP_FILTER_ACCESS_DENIED;

/* HTTP_FILTER_AUTHENT  [struct; ce-only] */
typedef struct _HTTP_FILTER_AUTHENT{ 
 CHAR* pszUser;
 DWORD cbUserBuff;
 CHAR* pszPassword;
 DWORD cbPasswordBuff;
} HTTP_FILTER_AUTHENT, *PHTTP_FILTER_AUTHENT;

/* HTTP_FILTER_LOG  [struct; ce-only] */
typedef struct _HTTP_FILTER_LOG{
 const CHAR* pszClientHostName;
 const CHAR* pszClientUserName;
 const CHAR* pszServerName;
 const CHAR* pszOperation;
 const CHAR* pszTarget;
 const CHAR* pszParameters;
 DWORD dwHttpStatus;
 DWORD dwWin32Status;
 DWORD dwBytesSent;
 DWORD dwBytesRecvd;
 DWORD msTimeForProcessing;
} HTTP_FILTER_LOG, *PHTTP_FILTER_LOG;

/* HTTP_FILTER_RAW_DATA  [struct; ce-only] */
typedef struct _HTTP_FILTER_RAW_DATA{
 PVOID pvInData;
 DWORD cbInData;
 DWORD cbInBuffer;
 DWORD dwReserved;
} HTTP_FILTER_RAW_DATA, *PHTTP_FILTER_RAW_DATA;

/* HTTP_FILTER_URL_MAP  [struct; ce-only] */
typedef struct _HTTP_FILTER_URL_MAP{
 const CHAR* pszURL;
 CHAR* pszPhysicalPath;
 DWORD cbPathBuff;
} HTTP_FILTER_URL_MAP, *PHTTP_FILTER_URL_MAP;

/* SF_REQ_TYPE  [enum; ce-only] */
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

/* SF_REQ_DISABLE_NOTIFICATIONS  [extra enum] */
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

#endif /* _HTTPFILT_ */
