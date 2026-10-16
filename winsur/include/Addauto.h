/* Addauto.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _ADDAUTO_
#define _ADDAUTO_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 600)) /* CE 4.0..599 */

/* IDSAddIn::OnConnection  [function; ce-only; CE 4.0..599] */
HRESULT OnConnection (
 IApplication* pApp,
 VARIANT BOOL bFirstTime,
 Long dwCookie 
 VARIANT_BOOL* OnConnection
);

/* IDSAddIn::OnDisconnection  [function; ce-only; CE 4.0..599] */
HRESULT OnDisconnection ( VARIANT_BOOL bLastTime);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT OnConnection ( IApplication* pApp,VARIANT BOOLbFirstTime,LongdwCookie VARIANT_BOOL* OnConnection );
HRESULT OnDisconnection ( VARIANT_BOOL bLastTime);

#endif /* _ADDAUTO_ */
