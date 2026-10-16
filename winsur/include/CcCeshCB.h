/* CcCeshCB.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _CCCESHCB_
#define _CCCESHCB_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcCeshCB::CmdOut  [function; ce-only; CE 5.0..699] */
HRESULT CmdOut(
 BSTR bstrData
);

/* ICcCeshCB::FindFile  [function; ce-only; CE 5.0..699] */
HRESULT FindFile(
 BSTR bstrFileName,
 VARIANT_BOOL fUseExisting,
 BSTR* pbstrFullPath
);

/* ICcCeshCB::GetCommand  [function; ce-only; CE 5.0..699] */
HRESULT GetCommand(
 int nMaxCmdSize,
 BSTR* pbstrCommand
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CmdOut( BSTRbstrData);
HRESULT FindFile( BSTR bstrFileName,VARIANT_BOOL fUseExisting, BSTR*pbstrFullPath);
HRESULT GetCommand( intnMaxCmdSize,BSTR*pbstrCommand);

#endif /* _CCCESHCB_ */
