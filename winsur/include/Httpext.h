/* Httpext.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 21 constants, 4 declarations, 4 outlines, 0 base types, 0 extra macros, 6 extra decls
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

/* ServerSupportFunction  [enum, function; ce-only; httpextn.lib, Httpfilt.lib, httpfilt.lib] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL WINAPIGetExtensionVersion(HSE_VERSION_INFO* pVer );
BOOL WINAPITerminateExtension(DWORD dwFlags );

#endif /* _HTTPEXT_ */
