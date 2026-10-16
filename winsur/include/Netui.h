/* Netui.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 4 outlines, 0 base types, 0 extra macros, 6 extra decls
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* AdapterIPProperties  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL AdapterIPProperties(
 HWND hWndOwner, 
 LPTSTR szAdapterName
);

/* ConnectionDialog  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL ConnectionDialog(
 HWND hParent, 
 PADDCONNECT_DLGPARAMS pDlgParams
);

/* DisconnectDialog  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL DisconnectDialog( 
 HWND hParent, 
 DWORD dwType
);

/* GetDriverName  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL GetDriverName(
 HWND hParent, 
 PGETDRIVERNAMEPARMS pDriverParms
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

/* GetResourcePassword  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL GetResourcePassword(
 HWND hParent, 
 PNETUI_RESPWD pResPwd
);

/* GetUsernamePassword  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL GetUsernamePassword(
 HWND hParent, 
 PNETUI_USERPWD pUserPwd
);

/* LineConfigEdit  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL LineConfigEdit(
 HWND hParent, 
 PLINECONFIGDATA pLineConfigData
);

/* NetMsgBox  [function; ce-only; CE 3.0..699; Netui.lib, netui.lib] */
BOOL NetMsgBox(
 HWND hParent, 
 DWORD dwFlags, 
 TCHAR* szStr
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CreateScanDevice  [function; ce-only; CE 4.0..699; Netui.lib] */
int CreateScanDevice(
 HINSTANCE hInstance, 
 HWND hWnd
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CloseUsernamePasswordDialog  [function; ce-only; CE 5.0..699; Netui.lib] */
BOOL CloseUsernamePasswordDialog(
 HWND hDlg
);

/* GetNewPassword  [function; ce-only; CE 5.0..699; Netui.lib] */
BOOL WINAPI GetNewPassword (
 HWND hParent, 
 OUT PNETUI_NEWPWD pNewPwd
);

/* GetNewPasswordEx  [function; ce-only; CE 5.0..699; Netui.lib] */
BOOL WINAPI GetNewPasswordEx (
 HWND hParent, 
 OUT PNETUI_NEWPWD pNewPwd, 
 OUT OPTIONAL HWND* phDlg
);

/* GetUsernamePasswordEx  [function; ce-only; CE 5.0..699; Netui.lib] */
BOOL GetUsernamePasswordEx (
 HWND hParent, 
 PNETUI_USERPWD pUserPwd, 
 OPTIONAL HWND* phDlg
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

/* struct */
typedef struct ADDCONNECT_DLGPARAMS {WCHARLocalName[RMLEN + 10];WCHARRemoteName[RMLEN];BOOLbReadOnly;} ADDCONNECT_DLGPARAMS, *PADDCONNECT_DLGPARAMS;
typedef struct _LINECONFIGDATA {DWORD dwVersion;DWORD dwBaudRate;DWORDdwSettableBaud;BYTEbByteSize;BYTEbParity;BYTEbStopBits;BYTEbReserved;WORDwSettableData;WORDwWaitBong;DWORDdwCallSetupFailTimer;DWORDdwModemOptions;DWORDdwTermOptions;DWORDdwDdevCapFlags;DWORDdwModMaxLen;TCHARszDialModifier[NETUI_LCD_DIAL_MOD_LEN + 1];WORDwSettableStopParity;} LINECONFIGDATA, *PLINECONFIGDATA;
typedef struct _NETUI_NEWPWD{ TCHAR szNewPassword[PWLEN+1];} NETUI_NEWPWD, *PNETUI_NEWPWD;
typedef struct _NETUI_RESPWD {TCHARszPassword[PWLEN +1];TCHARszResourceName[RMLEN];} NETUI_RESPWD, *PNETUI_RESPWD;
typedef struct _NETUI_USERPWD {TCHARszUserName[UNLEN + 1];TCHARszPassword[PWLEN + 1];TCHARszDomain[DNLEN +1];DWORDdwFlags;TCHARszResourceName[RMLEN];} NETUI_USERPWD, *PNETUI_USERPWD;

/* function */
DWORD LineTranslateDialog ( HWND hParent, HWND *pDialogWnd);

#endif /* _NETUI_ */
