/* Aygshell.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 59 constants, 43 declarations, 2 outlines, 0 base types, 3 extra macros, 0 extra decls
 */
#ifndef _AYGSHELL_
#define _AYGSHELL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define GN_CONTEXTMENU 1000
#define IDM_NEWMENUMAX 3000
#define IDM_SHAREDNEW 10
#define IDM_SHAREDNEWDEFAULT 11
#define IDS_SHEDIT 2
#define IDS_SHFAVORITES 7
#define IDS_SHFILE 5
#define IDS_SHGO 6
#define IDS_SHNEW 1
#define IDS_SHOPEN 8
#define IDS_SHTOOLS 3
#define IDS_SHVIEW 4
#define NMN_GETAPPREGKEY 1101
#define NMN_INVOKECOMMAND 1103
#define NMN_NEWMENUDESTROY 1102
#define NOMENU 0xFFFF
#define SHCIDS_COLUMNMASK 0x0000FFFF
#define SHCMBF_COLORBK 0x08
#define SHCMBF_EMPTYBAR 0x01
#define SHCMBF_HIDDEN 0x02
#define SHCMBF_HIDESIPBUTTON 0x04
#define SHCMBF_HMENU 0x10
#define SHCMBM_GETMENU 0x0592
#define SHCMBM_GETSUBMENU 0x0591
#define SHCMBM_OVERRIDEKEY (WM_USER
#define SHCMBM_SETSUBMENU 0x0590
#define SHDB_HIDE 2
#define SHDB_SHOW 1
#define SHFS_HIDESIPBUTTON 8
#define SHFS_HIDESTARTICON 32
#define SHFS_HIDETASKBAR 2
#define SHFS_SHOWSIPBUTTON 4
#define SHFS_SHOWSTARTICON 16
#define SHFS_SHOWTASKBAR 1
#define SHIC_FEATURE_AUTOCORRECT 0x00000001
#define SHIC_FEATURE_AUTOSUGGEST 0x00000002
#define SHIC_FEATURE_CLASS 0x00000004
#define SHIC_FEATURE_HAVETRAILER 0x00000003
#define SHIC_FEATURE_RESTOREDEFAULT 0
#define SHIDIF_DONEBUTTON 0x0001
#define SHIDIF_EMPTYMENU 0x0020
#define SHIDIF_FULLSCREENNOMENUBAR 0x0010
#define SHIDIF_SIPDOWN 0x0008
#define SHIDIF_SIZEDLG 0x0002
#define SHIDIF_SIZEDLGFULLSCREEN 0x0004
#define SHIDIM_FLAGS 0x0001
#define SHMBOF_NODEFAULT 0x00000001
#define SHMBOF_NOTIFY 0x00000002
#define SHNF_CRITICAL 2
#define SHNF_DISPLAYON 16
#define SHNF_FORCEMESSAGE 8
#define SHNF_SILENT 32
#define SHNF_STRAIGHTTOTRAY 1
#define SHRG_RETURNCMD 0x0001
#define SHRT_MAX 32767
#define SHRT_MIN -32768
#define VK_TBACK VK_ESCAPE
#define WC_SIPPREF L"SIPPREF"
#define WS_NONAVDONEBUTTON WS_MINIMIZEBOX

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define SHIC_CLASS_DEFAULT TEXT("")
#define SHIC_CLASS_EMAIL TEXT("email")
#define SHIC_CLASS_PHONE TEXT("phone")

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SHGetMenu  [macro; ce-only] */
#define SHGetMenu(hWndMB) (HMENU)SendMessage((hWndMB), \
 SHCMBM_GETMENU, (WPARAM)0, (LPARAM)0);

/* SHGetSubMenu  [macro; ce-only] */
#define SHGetSubMenu(hWndMB,ID_MENU) (HMENU)SendMessage((hWndMB), \
 SHCMBM_GETSUBMENU, (WPARAM)0, (LPARAM)ID_MENU);

/* SHINITDLGINFO  [struct, macro; ce-only; aygshell.lib] */
typedef struct tagSHINITDIALOG {
 DWORD dwMask;
 HWND hDlg;
 DWORD dwFlags;
} SHINITDLGINFO, *PSHINITDLGINFO;

/* SHNOTIFICATIONDATA  [struct; ce-only; aygshell.lib] */

/* SHORTS  [typedef; ce-only; heuristic-prefix] */

/* SHSetSubMenu  [macro; ce-only] */
#define SHSetSubMenu(hWndMB,ID_MENU) (HMENU)SendMessage((hWndMB), \
 SHCMBM_SETSUBMENU, (WPARAM)0, (LPARAM)ID_MENU);

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SHCHANGENOTIFYENTRY  [struct; shared; ceshell.lib] */
typedef struct tagSHCHANGENOTIFYENTRY {
 DWORD dwEventMask;
 LPTSTR pszWatchDir;
 BOOL fRecursive;
} SHCHANGENOTIFYENTRY;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 5.0..699 */

/* SHCloseApps  [function; ce-only; CE 2.11..2.12, 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHCloseApps(
 DWORD dwMemSought
);

/* SHGetAppKeyAssoc  [function; ce-only; CE 2.11..2.12, 5.0..699; Aygshell.lib, aygshell.lib] */
BYTE SHGetAppKeyAssoc(
 LPCTSTR ptszApp
);

/* SHInitExtraControls  [function; ce-only; CE 2.11..2.12, 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHInitExtraControls(void);

/* SHSipInfo  [function; ce-only; CE 2.11..2.12, 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL WINAPI SHSipInfo(
 UINT uiAction,
 UINT uiParam,
 PVOID pvParam,
 UINT fWinIni
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SHChangeNotifyDeregister  [function; shared; CE 5.0..699; Aygshell.lib, aygshell.lib, ceshell.lib] */
BOOL WINAPI SHChangeNotifyDeregister(
 HWND hwnd
);

/* SHChangeNotifyFree  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib, ceshell.lib] */
void WINAPI SHChangeNotifyFree(
 FILECHANGENOTIFY * pfcn
);

/* SHChangeNotifyRegister  [function; shared; CE 5.0..699; Aygshell.lib, aygshell.lib, ceshell.lib] */
BOOL WINAPI SHChangeNotifyRegister(
 HWND hwnd,
 SHCHANGENOTIFYENTRY * pshcne
);

/* SHCreateMenuBar  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHCreateMenuBar(
 SHMENUBARINFO * pmb
);

/* SHCreateNewItem  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
HRESULT SHCreateNewItem(
 HWND hwndOwner,
 REFCLSID clsid
);

/* SHDoneButton  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHDoneButton(
 HWND hwndRequester,
 DWORD dwState
);

/* SHEnumPropSheetHandlers  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHEnumPropSheetHandlers(
 HKEY hkey,
 int * pcPages,
 HPROPSHEETPAGE* prghPropPages,
 IShellPropSheetExt ** prgpispse
);

/* SHFindMenuBar  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
HWND WINAPI SHFindMenuBar(
 HWND hwnd
);

/* SHFreeContextMenuExtensions  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHFreeContextMenuExtensions(
 HANDLE hCMExtensions
);

/* SHFullScreen  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHFullScreen(
 HWND hwndRequester,
 DWORD dwState
);

/* SHGetAutoRunPath  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHGetAutoRunPath(
 LPTSTR pAutoRunPath
);

/* SHGetEmergencyCallList  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
HRESULT SHGetEmergencyCallList(
 TCHAR* pwszBuffer,
 UINT uLenBuf
);

/* SHGetInputContext  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
HRESULT SHGetInputContext (
 HWND hwnd,
 DWORD dwFeature,
 LPVOID lpValue,
 LPDWORD lpdwSize
);

/* SHHandleWMActivate  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
WINSHELLAPI BOOL SHHandleWMActivate(
 HWND hwnd,
 WPARAM wParam,
 LPARAM lParam,
 SHACTIVATEINFO * psai,
 DWORD dwFlags
);

/* SHHandleWMSettingChange  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
WINSHELLAPI BOOL SHHandleWMSettingChange(
 HWND hwnd,
 WPARAM wParam,
 LPARAM lParam,
 SHACTIVATEINFO * psai
);

/* SHInitDialog  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHInitDialog(
 PSHINITDLGINFO pshidi
);

/* SHInputDialog  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
void SHInputDialog(
 HWND hwnd,
 UINT uMsg,
 WPARAM wParam
);

/* SHInvokeContextMenuCommand  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHInvokeContextMenuCommand(
 HWND hwndOwner,
 UINT idCmd,
 HANDLE hCMExtensions
);

/* SHNavigateBack  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
void SHNavigateBack(void);

/* SHNotificationAdd  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
LRESULT SHNotificationAdd(
 SHNOTIFICATIONDATA* pndAdd
);

/* SHNotificationGetData  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
LRESULT SHNotificationGetData(
 const CLSID * pclsid,
 DWORD dwID,
 SHNOTIFICATIONDATA* pndBuffer
);

/* SHNotificationRemove  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
LRESULT SHNotificationRemove(
 const CLSID* pclsid,
 DWORD dwID
);

/* SHNotificationUpdate  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
LRESULT SHNotificationUpdate(
 DWORD grnumUpdateMask,
 SHNOTIFICATIONDATA* pndNew
);

/* SHRecognizeGesture  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
WINSHELLAPI DWORD SHRecognizeGesture(
 SHRGINFO * shrg
);

/* SHSetAppKeyWndAssoc  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHSetAppKeyWndAssoc(
 BYTE bVk,
 HWND hwnd
);

/* SHSetBack  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
void SHSetBack(
 int eOp,
 HWND hwnd
);

/* SHSetInputContext  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
HRESULT SHSetInputContext (
 HWND hwnd,
 DWORD dwFeature,
 const LPVOID lpValue
);

/* SHSetNavBarText  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHSetNavBarText(
 HWND hwndRequester,
 LPCTSTR pszText
);

/* SHSipPreference  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHSipPreference(
 HWND hwnd,
 SIPSTATE st
);
#endif /* _WIN32_WCE */

#endif /* _AYGSHELL_ */
