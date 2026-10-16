/* Netui.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 4 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _NETUI_
#define _NETUI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* ADDCONNECT_DLGPARAMS  [struct; ce-only] */

/* GETDRIVERNAMEPARMS  [struct; ce-only] */

/* NETUI_RESPWD  [struct; ce-only] */

/* NETUI_USERPWD  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 3.0..699 */

/* AdapterIPProperties  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL AdapterIPProperties(
 HWND hWndOwner, 
 LPTSTR szAdapterName
);

/* DisconnectDialog  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL DisconnectDialog( 
 HWND hParent, 
 DWORD dwType
);

/* GetIPAddress  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
DWORD GetIPAddress(
 HWND hParent
);

/* GetNetString  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
int GetNetString(
 UINT uID, 
 LPTSTR lpBuffer, 
 int cchBufferMax
);

/* NetMsgBox  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL NetMsgBox(
 HWND hParent, 
 DWORD dwFlags, 
 TCHAR* szStr
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* CreateScanDevice  [function; ce-only; CE 4.0..699; Netui.lib] */
int CreateScanDevice(
 HINSTANCE hInstance, 
 HWND hWnd
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* CloseUsernamePasswordDialog  [function; ce-only; CE 5.0..699; Netui.lib] */
BOOL CloseUsernamePasswordDialog(
 HWND hDlg
);

/* RegisterIPClass  [function; ce-only; CE 5.0..699; Netui.lib] */
void RegisterIPClass(
 HINSTANCE hInst
);

/* UnregisterIPClass  [function; ce-only; CE 5.0..699; Netui.lib] */
void UnregisterIPClass(
 HINSTANCE hInst
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
DWORD LineTranslateDialog ( HWND hParent, HWND *pDialogWnd);

#endif /* _NETUI_ */
