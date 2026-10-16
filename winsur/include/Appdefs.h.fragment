/* Appdefs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _APPDEFS_
#define _APPDEFS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 600)) /* CE 4.0..599 */

/* IApplication::AddCommand  [function; ce-only; CE 4.0..599; Devshl.dll] */
HRESULT AddCommand(
 BSTR szCmdName,
 BSTR szMethodName,
 long nBitmapOffset,
 long dwCookie
 VARIANT_BOOL FAR* pbResult
);

/* IApplication::AddCommandBarButton  [function; ce-only; CE 4.0..599; Devshl.dll] */
HRESULT AddCommandBarButton(
 long nButtonType,
 BSTR szCmdName,
 long dwCookie
);

/* IApplication::EnableModeless  [function; ce-only; CE 4.0..599; Devshl.dll] */
HRESULT EnableModeless(
 VARIANT_BOOL bEnable);

/* IApplication::SetAddInInfo  [function; ce-only; CE 4.0..599; Devshl.dll] */
HRESULT SetAddInInfo(
 long nInstanceHandle,
 IDispatch* pCmdDispatch,
 long nIDBitmapResourceMedium,
 long nIDBitmapResourceLarge,
 long dwCookie
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddCommand( BSTRszCmdName,BSTRszMethodName,longnBitmapOffset,longdwCookieVARIANT_BOOL FAR* pbResult);
HRESULT AddCommandBarButton( longnButtonType, BSTRszCmdName, longdwCookie);
HRESULT SetAddInInfo( longnInstanceHandle,IDispatch* pCmdDispatch,longnIDBitmapResourceMedium,longnIDBitmapResourceLarge,longdwCookie);

#endif /* _APPDEFS_ */
