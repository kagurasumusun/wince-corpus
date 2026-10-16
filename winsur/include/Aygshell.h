/* Aygshell.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 59 constants, 46 declarations, 1 outlines, 0 base types, 3 extra macros, 7 extra decls
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
#define SHMBOF_NODEFAULT 0x00000001
#define SHMBOF_NOTIFY 0x00000002
#define SHNF_CRITICAL 2
#define SHNF_DISPLAYON 16
#define SHNF_FORCEMESSAGE 8
#define SHNF_SILENT 32
#define SHNF_STRAIGHTTOTRAY 1
#define SHRG_RETURNCMD 0x0001
#define VK_TBACK VK_ESCAPE
#define WC_SIPPREF L"SIPPREF"
#define WS_NONAVDONEBUTTON WS_MINIMIZEBOX
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define SHCIDS_COLUMNMASK 0x0000FFFF
#define SHIDIM_FLAGS 0x0001
#define SHRT_MAX 32767
#define SHRT_MIN -32768
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define SHIC_CLASS_DEFAULT TEXT("")
#define SHIC_CLASS_EMAIL TEXT("email")
#define SHIC_CLASS_PHONE TEXT("phone")

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SHORTS  [typedef; ce-only; heuristic-prefix] */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SHGetMenu  [macro; ce-only; CE 5.0..699] */
#define SHGetMenu(hWndMB) (HMENU)SendMessage((hWndMB), \
 SHCMBM_GETMENU, (WPARAM)0, (LPARAM)0);

/* SHGetSubMenu  [macro; ce-only; CE 5.0..699] */
#define SHGetSubMenu(hWndMB,ID_MENU) (HMENU)SendMessage((hWndMB), \
 SHCMBM_GETSUBMENU, (WPARAM)0, (LPARAM)ID_MENU);

/* SHINITDLGINFO  [struct, macro; ce-only; CE 5.0..699; aygshell.lib] */
typedef struct tagSHINITDIALOG {
 DWORD dwMask;
 HWND hDlg;
 DWORD dwFlags;
} SHINITDLGINFO, *PSHINITDLGINFO;

/* SHSetSubMenu  [macro; ce-only; CE 5.0..699] */
#define SHSetSubMenu(hWndMB,ID_MENU) (HMENU)SendMessage((hWndMB), \
 SHCMBM_SETSUBMENU, (WPARAM)0, (LPARAM)ID_MENU);
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* NMRGINFO  [struct; ce-only; aygshell.lib] */
typedef struct tagNMRGINFO { 
NMHDR hdr; 
POINT ptAction; 
DWORD dwItemSpec; 
} NMRGINFO, *PNMRGINFO;

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SHACTIVATEINFO  [struct; ce-only; CE 5.0..699; aygshell.lib] */
typedef struct {
 DWORD cbSize.;
 HWND hwndLastFocus.;
 UINT fSipUp.:1;
 UINT fSipOnDeactivation. :1;
 UINT fActive :1;
 UINT fReserved :29;
} SHACTIVATEINFO, *PSHACTIVATEINFO;

/* SHCHANGENOTIFYENTRY  [struct; shared; CE 5.0..699; ceshell.lib] */
typedef struct tagSHCHANGENOTIFYENTRY {
 DWORD dwEventMask;
 LPTSTR pszWatchDir;
 BOOL fRecursive;
} SHCHANGENOTIFYENTRY;

/* SHMENUBARINFO  [struct; ce-only; CE 5.0..699; aygshell.lib] */
typedef struct tagSHMENUBARINFO {
 DWORD cbSize;
 HWND hwndParent;
 DWORD dwFlags;
 UINT nToolBarId;
 HINSTANCE hInstRes;
 int nBmpId;
 int cBmpImages;
 HWND hwndMB;
 COLORREF clrBk;
} SHMENUBARINFO, *PSHMENUBARINFO;

/* SHNOTIFICATIONDATA  [struct; ce-only; CE 5.0..699; aygshell.lib] */
typedef struct _SHNOTIFICATIONDATA{
 DWORD cbStruct;
 DWORD dwID;
 SHNP npPriority;
 DWORD csDuration;
 HICON hicon;
 DWORD grfFlags;
 CLSID clsid;
 HWND hwndSink;
 LPCTSTR pszHTML;
 LPCTSTR pszTitle;
 LPARAM lParam;
 union
 {
 SOFTKEYMENU skm;
 SOFTKEYNOTIFY rgskn[NOTIF_NUM_SOFTKEYS];
 }
 LPCTSTR pszTodaySK;
 LPCTSTR pszTodayExec;
} SHNOTIFICATIONDATA;

/* SHNP  [enum; ce-only; CE 5.0..699] */
typedef enum _SHNP {
 SHNP_INFORM,
 SHNP_ICONIC
} SHNP;

/* SHRGINFO  [struct; ce-only; CE 5.0..699; aygshell.lib] */
typedef struct tagSHRGI {
 DWORD cbSize;
 HWND hwndClient;
 POINT ptDown;
 DWORD dwFlags;
} SHRGINFO, *PSHRGINFO;
#endif /* _WIN32_WCE */

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

/* INewMenuItemServer::CreateNewItem  [function; ce-only; CE 5.0..699] */
HRESULT CreateNewItem (
 HWND hwndParent
);

/* IShellNotificationCallback::OnCommandSelected  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
STDMETHOD(OnCommandSelected)(
 THIS_ DWORD dwID,
 WORD wCmdID
) PURE;

/* IShellNotificationCallback::OnDismiss  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
STDMETHOD(OnDismiss)(
 THIS_ DWORD dwID,
 BOOL fTimeout,
 LPARAM lParam
) PURE;

/* IShellNotificationCallback::OnLinkSelected  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
STDMETHOD(OnLinkSelected)(
 THIS_ DWORD dwID,
 LPCTSTR pszLink,
 LPARAM lParam
) PURE;

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

/* SHLoadContextMenuExtensions  [function; ce-only; CE 5.0..699; Aygshell.lib, aygshell.lib] */
BOOL SHLoadContextMenuExtensions(
 IUnknown * punkOwner,
 LPCTSTR pszContext,
 LPCTSTR pszClass,
 HMENU hmenu,
 UINT idCmdFirst,
 UINT idCmdLast,
 HANDLE * phCMExtensions
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

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct {DWORD cbSize.;HWND hwndLastFocus.;UINT fSipUp.:1;UINT fSipOnDeactivation. :1;UINT fActive :1;UINT fReserved :29;} SHACTIVATEINFO, *PSHACTIVATEINFO;
typedef struct tagSHINITDIALOG { DWORD dwMask; HWND hDlg; DWORD dwFlags;} SHINITDLGINFO, *PSHINITDLGINFO;
typedef struct tagSHMENUBARINFO { DWORD cbSize; HWND hwndParent; DWORD dwFlags; UINT nToolBarId; HINSTANCE hInstRes; int nBmpId; int cBmpImages; HWND hwndMB; COLORREF clrBk;} SHMENUBARINFO, *PSHMENUBARINFO;
typedef struct tagSHRGI { DWORD cbSize; HWND hwndClient; POINT ptDown; DWORD dwFlags;} SHRGINFO, *PSHRGINFO;

/* function */
HRESULT CreateNewItem ( HWND hwndParent );
VOID STDAPI SHGetFolderPath( HWND hwndOwner, int nFolder, HANDLE hToken, DWORD dwReserved, LPTSTR pszPath);
enum {
  SHIC_FEATURE_RESTOREDEFAULT = 0,
  SHIC_FEATURE_AUTOCORRECT = 0x00000001L,
  SHIC_FEATURE_AUTOSUGGEST = 0x00000002L,
  SHIC_FEATURE_HAVETRAILER = 0x00000003L,
  SHIC_FEATURE_CLASS = 0x00000004L
} SHIC_FEATURE;

#endif /* _AYGSHELL_ */
