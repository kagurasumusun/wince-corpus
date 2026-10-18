/* Shobjidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 26 constants, 1 declarations, 6 outlines, 0 base types, 0 extra macros, 20 extra decls
 */
#ifndef _SHOBJIDL_
#define _SHOBJIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SFGAO_BROWSABLE 0x08000000
#define SFGAO_CANCOPY 0x00000001
#define SFGAO_CANDELETE 0x00000020
#define SFGAO_CANLINK 0x00000004
#define SFGAO_CANMONIKER 0x00400000
#define SFGAO_CANMOVE 0x00000002
#define SFGAO_CANRENAME 0x00000010
#define SFGAO_CAPABILITYMASK 0x00000177
#define SFGAO_COMPRESSED 0x04000000
#define SFGAO_CONTENTSMASK 0x80000000
#define SFGAO_DISPLAYATTRMASK 0x000F0000
#define SFGAO_DROPTARGET 0x00000100
#define SFGAO_FILESYSANCESTOR 0x10000000
#define SFGAO_FILESYSTEM 0x40000000
#define SFGAO_FOLDER 0x20000000
#define SFGAO_GHOSTED 0x00080000
#define SFGAO_HASPROPSHEET 0x00000040
#define SFGAO_HASSUBFOLDER 0x80000000
#define SFGAO_LINK 0x00010000
#define SFGAO_NEWCONTENT 0x00200000
#define SFGAO_NONENUMERATED 0x00100000
#define SFGAO_READONLY 0x00040000
#define SFGAO_REMOVABLE 0x02000000
#define SFGAO_SHARE 0x00020000
#define SFGAO_VALIDATE 0x01000000
#define SHCIDS_COLUMNMASK 0x0000FFFF

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 5.0..599 */

/* IDropTarget  [interface; shared; CE 5.0..599] */

/* IPersistFolder  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* IShellFolder  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* IShellView  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* ITaskbarList  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* ITaskbarList2  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SHGNO  [enum; ce-only] */
typedef enum tagSHGDN {
 SHGDN_NORMAL,
 SHGDN_INFOLDER,
 SHGDN_FOREDITING,
 SHGDN_FORADDRESSBAR,
 SHGDN_FORPARSING
} SHGNO;
typedef SHGNO *PSHGNO, *LPSHGNO;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT ActivateTab(HWND hwnd);
HRESULT AddTab(HWND hwnd);
HRESULT DeleteTab(HWND hwnd);
HRESULT DestroyViewWindow(void);
HRESULT EnableModeless(BOOL fEnable);
HRESULT HrInit(VOID);
HRESULT MarkFullscreenWindow(HWND hwnd, BOOL fFullscreen);
HRESULT SaveViewState(void);
HRESULT SetActiveAlt(HWND hwnd);
HRESULT UIActivate(UINT uState);

#endif /* _SHOBJIDL_ */
