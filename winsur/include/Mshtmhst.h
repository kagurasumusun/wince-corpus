/* Mshtmhst.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 31 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _MSHTMHST_
#define _MSHTMHST_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DOCHOSTUIDBLCLK_DEFAULT 0
#define DOCHOSTUIDBLCLK_SHOWCODE 2
#define DOCHOSTUIDBLCLK_SHOWPROPERTIES 1
#define DOCHOSTUIFLAG_ACTIVATE_CLIENTHIT_ONLY 0x00000200
#define DOCHOSTUIFLAG_CODEPAGELINKEDFONTS 0x00000800
#define DOCHOSTUIFLAG_DIALOG 0x00000001
#define DOCHOSTUIFLAG_DISABLE_HELP_MENU 0x00000002
#define DOCHOSTUIFLAG_DISABLE_OFFSCREEN 0x00000040
#define DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE 0x00000010
#define DOCHOSTUIFLAG_DIV_BLOCKDEFAULT 0x00000100
#define DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE 0x00004000
#define DOCHOSTUIFLAG_ENABLE_INPLACE_NAVIGATION 0x00010000
#define DOCHOSTUIFLAG_FLAT_SCROLLBAR 0x00000080
#define DOCHOSTUIFLAG_IME_ENABLE_RECONVERSION 0x00020000
#define DOCHOSTUIFLAG_NO3DBORDER 0x00000004
#define DOCHOSTUIFLAG_NO3DOUTERBORDER 0x00200000
#define DOCHOSTUIFLAG_NOPICS 0x00100000
#define DOCHOSTUIFLAG_NOTHEME 0x00080000
#define DOCHOSTUIFLAG_OPENNEWWIN 0x00000020
#define DOCHOSTUIFLAG_OVERRIDEBEHAVIORFACTORY 0x00000400
#define DOCHOSTUIFLAG_SCROLL_NO 0x00000008
#define DOCHOSTUIFLAG_THEME 0x00040000
#define DOCHOSTUIFLAG_URL_ENCODING_DISABLE_UTF8 0x00001000
#define DOCHOSTUIFLAG_URL_ENCODING_ENABLE_UTF8 0x00002000
#define DOCHOSTUITYPE_AUTHOR 1
#define DOCHOSTUITYPE_BROWSE 0
#define FOCUS_DOWN 2
#define FOCUS_LEFT 3
#define FOCUS_NONE 0
#define FOCUS_RIGHT 4
#define FOCUS_UP 1

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* CreateHTMLPropertyPage  [function; ce-only; CE 5.0..599; mshtml.dll] */
HRESULT CreateHTMLPropertyPage( 
 IMoniker *pmk, 
 IPropertyPage **ppPP 
);

/* ShowHTMLDialog  [function; ce-only; CE 5.0..599; mshtml.dll] */
HRESULT ShowHTMLDialog( 
 HWND hwndParent, 
 IMoniker *pMk, 
 VARIANT *pvarArgIn, 
 WCHAR *pchOptions, 
 VARIANT *pvarArgOut 
);

/* ShowHTMLDialogEx  [function; ce-only; CE 5.0..599; mshtml.dll] */
HRESULT ShowHTMLDialogEx( 
 HWND hwndParent, 
 IMoniker *pMk, 
 DWORD dwDialogFlags, 
 VARIANT *pvarArgIn, 
 WCHAR *pchOptions, 
 VARIANT *pvarArgOut 
);

/* ShowModelessHTMLDialog  [function; ce-only; CE 5.0..599; mshtml.dll] */
HRESULT ShowModelessHTMLDialog( 
 HWND hwndParent, 
 IMoniker *pMk, 
 VARIANT *pvarArgIn, 
 WCHAR *pchOptions, 
 IHTMLWindow2 **ppWindow 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* GetFilename  [function; ce-only; CE 5.0..699] */
HRESULT GetFilename(
 BOOL fSave,
 HWND hwnd,
 DWORD idFilterRes,
 LPOLESTR lpstrFileName,
 DWORD cchFile,
 long lCustData
);

/* ShowInternalMessage  [function; ce-only; CE 5.0..699] */
HRESULT ShowInternalMessage(
 HWND hwnd,
 LPOLESTR lpstrText,
 LPOLESTR lpstrCaption,
 DWORD dwType,
 DWORD dwMessageId,
 LPOLESTR lpstrHelpFile,
 DWORD dwHelpContext,
 LRESULT * plResult
);

/* ShowPrompt  [function; ce-only; CE 5.0..699] */
HRESULT ShowPrompt(
 HWND hwnd,
 LPOLESTR lpstrMessage,
 LPOLESTR lpstrDefault,
 VARIANT *pvarText,
 LRESULT *plResult
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef HRESULT (CALLBACK *SHOWMODELESSHTMLDIALOGFN)(  HWND hwndParent,  IMoniker *pMk,  VARIANT *pvarArgIn,  TCHAR *pchOptions,  IHTMLWindow2 **ppWindow  );
typedef HRESULT (CALLBACK *SHOWHTMLDIALOGEXFN)(  HWND hwndParent,  IMoniker *pMk,  DWORD dwDialogFlags,  VARIANT *pvarArgIn,  TCHAR *pchOptions,  VARIANT *pvarArgOut  );

#endif /* _MSHTMHST_ */
