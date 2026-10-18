/* Atlwin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _ATLWIN_
#define _ATLWIN_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CAxWindow  [typedef; ce-only] */
typedef CAxWindowT<CWindow> CAxWindow;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
#ifdef __cplusplus
BOOL CallChain(DWORD dwChainID, HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult);
#endif /* __cplusplus */
BOOL CreateGrayCaret(int nWidth, int nHeight);
BOOL CreateSolidCaret(int nWidth, int nHeight);
static LPCTSTR GetWndClassName();
#ifdef __cplusplus
BOOL ModifyStyle(DWORD dwRemove, DWORD dwAdd, UINT nFlags = 0);
#endif /* __cplusplus */
#ifdef __cplusplus
BOOL ModifyStyleEx(DWORD dwRemove, DWORD dwAdd, UINT nFlags = 0);
#endif /* __cplusplus */
ATOM RegisterWndSuperClass();
BOOL RemoveChainEntry(DWORD dwChainID);
#ifdef __cplusplus
BOOL SetChainEntry(DWORD dwChainID, CMessageMap* pObject, DWORD dwMsgMapID = 0);
#endif /* __cplusplus */
int SetDlgCtrlID(int nID);
BOOL SubclassWindow(HWND hWnd);
void SwitchMessageMap(DWORD dwMsgMapID);
HWND UnsubclassWindow();

#endif /* _ATLWIN_ */
