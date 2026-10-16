/* Shobjidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 6 outlines, 0 base types, 0 extra macros, 21 extra decls
 */
#ifndef _SHOBJIDL_
#define _SHOBJIDL_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IDropTarget  [interface; shared; CE 5.0..599] */

/* IPersistFolder  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* IShellFolder  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* IShellView  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* ITaskbarList  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */

/* ITaskbarList2  [interface; shared; CE 5.0..599; Shell32.dll; lib:win32-reference] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT ActivateTab( HWND hwnd );
HRESULT AddPropertySheetPages( DWORD dwReserved, LPFNADDPROPSHEETPAGE lpfn, LPARAM lparam );
HRESULT AddTab( HWND hwnd );
HRESULT CompareIDs( LPARAM lParam, LPCITEMIDLIST pidl1, LPCITEMIDLIST pidl2 );
HRESULT CreateViewObject( HWND hwndOwner, REFIID riid, VOID** ppvOut );
HRESULT CreateViewWindow( IShellView* psvPrevious, LPCFOLDERSETTINGS pfs, IShellBrowser* psb, RECT* prcView, HWND* phWnd );
HRESULT DeleteTab( HWND hwnd );
HRESULT DestroyViewWindow(void);
HRESULT EnableModeless( BOOL fEnable );
HRESULT EnumObjects( HWND hwndOwner, SHCONTF grfFlags, IENUMIDLIST** ppenumIDList );
HRESULT GetAttributesOf( UINT cidl, LPCITEMIDLIST* apidl, SFGAOF* rgfInOut );
HRESULT GetCurrentInfo( LPFOLDERSETTINGS lpfs );
HRESULT GetItemObject( UINT uItem, REFIID riid, LPVOID* ppv );
HRESULT GetUIObjectOf( HWND hwndOwner, UINT cidl, LPCITEMIDLIST* apidl, REFIID riid, UINT* rgfReserved, VOID** ppv );
HRESULT HrInit(VOID);
HRESULT MarkFullscreenWindow( HWND hwnd, BOOL fFullscreen );
HRESULT SaveViewState(void);
HRESULT SelectItem( LPCITEMIDLIST pidlItem, UINT uFlags );
HRESULT SetActiveAlt( HWND hwnd );
HRESULT SetNameOf( HWND hwndOwner, LPCITEMIDLIST pidl, LPCOLESTR lpszName, DWORD uFlags, LPITEMIDLIST* ppidlOut );
HRESULT UIActivate( UINT uState );

#endif /* _SHOBJIDL_ */
