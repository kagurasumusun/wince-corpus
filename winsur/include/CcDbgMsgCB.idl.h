/* CcDbgMsgCB.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CCDBGMSGCB_IDL_
#define _CCDBGMSGCB_IDL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ICcDbgMsgCB::MsgOut  [function; ce-only; CE 5.0..699] */
HRESULT MsgOut( LPCWSTR pszMsg, DWORD dwThrdId, DWORD dwProcId, DWORD dwTimeStamp);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT MsgOut( LPCWSTR pszMsg, DWORD dwThrdId, DWORD dwProcId, DWORD dwTimeStamp);

#endif /* _CCDBGMSGCB_IDL_ */
