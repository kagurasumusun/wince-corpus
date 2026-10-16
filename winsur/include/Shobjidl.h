/* Shobjidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 30 declarations, 6 outlines, 0 base types, 0 extra macros, 21 extra decls
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
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SHGNO  [enum; ce-only; CE 5.0..699] */
typedef enum tagSHGDN {
 SHGDN_NORMAL,
 SHGDN_INFOLDER,
 SHGDN_FOREDITING,
 SHGDN_FORADDRESSBAR,
 SHGDN_FORPARSING
} SHGNO;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IDropTarget::DragEnter  [function; shared; CE 5.0..699] */
HRESULT DragEnter(
 IDataObject* pDataObject,
 DWORD grfKeyState,
 POINTL pt,
 DWORD* pdwEffect
);

/* IDropTarget::DragLeave  [function; shared; CE 5.0..699] */
HRESULT DragLeave(void);

/* IDropTarget::DragOver  [function; shared; CE 5.0..699] */
HRESULT DragOver(
 DWORD grfKeyState,
 POINTL pt,
 DWORD* pdwEffect
);

/* IDropTarget::Drop  [function; shared; CE 5.0..699] */
HRESULT Drop(
 IDataObject* pDataObject,
 DWORD grfKeyState,
 POINTL pt,
 DWORD* pdwEffect
);

/* IPersistFolder::Initialize  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT Initialize(
 LPCITEMIDLIST pidl
);

/* IShellFolder::BindToObject  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT BindToObject(
 LPCITEMIDLIST pidl,
 LPBC pbc,
 REFIID riid,
 VOID** ppvOut
);

/* IShellFolder::CompareIDs  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT CompareIDs(
 LPARAM lParam,
 LPCITEMIDLIST pidl1,
 LPCITEMIDLIST pidl2
);

/* IShellFolder::CreateViewObject  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT CreateViewObject(
 HWND hwndOwner,
 REFIID riid,
 VOID** ppvOut
);

/* IShellFolder::EnumObjects  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT EnumObjects(
 HWND hwndOwner,
 SHCONTF grfFlags,
 IENUMIDLIST** ppenumIDList
);

/* IShellFolder::GetAttributesOf  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT GetAttributesOf(
 UINT cidl,
 LPCITEMIDLIST* apidl,
 SFGAOF* rgfInOut
);

/* IShellFolder::GetUIObjectOf  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT GetUIObjectOf(
 HWND hwndOwner,
 UINT cidl,
 LPCITEMIDLIST* apidl,
 REFIID riid,
 UINT* rgfReserved,
 VOID** ppv
);

/* IShellFolder::ParseDisplayName  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT ParseDisplayName(
 HWND hwnd,
 LPBC pbc,
 LPOLESTR pwszDisplayName,
 ULONG* pchEaten,
 LPITEMIDLIST* ppidl,
 ULONG* pdwAttributes
);

/* IShellView::AddPropertySheetPages  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT AddPropertySheetPages(
 DWORD dwReserved,
 LPFNADDPROPSHEETPAGE lpfn,
 LPARAM lparam
);

/* IShellView::CreateViewWindow  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT CreateViewWindow(
 IShellView* psvPrevious,
 LPCFOLDERSETTINGS pfs,
 IShellBrowser* psb,
 RECT* prcView,
 HWND* phWnd
);

/* IShellView::DestroyViewWindow  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT DestroyViewWindow(void);

/* IShellView::EnableModeless  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT EnableModeless(
 BOOL fEnable
);

/* IShellView::GetCurrentInfo  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT GetCurrentInfo(
 LPFOLDERSETTINGS lpfs
);

/* IShellView::GetItemObject  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT GetItemObject(
 UINT uItem,
 REFIID riid,
 LPVOID* ppv
);

/* IShellView::Refresh  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT Refresh(VOID);

/* IShellView::SaveViewState  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT SaveViewState(void);

/* IShellView::SelectItem  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT SelectItem(
 LPCITEMIDLIST pidlItem,
 UINT uFlags
);

/* IShellView::TranslateAccelerator  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT TranslateAccelerator(
 LPMSG lpmsg
);

/* IShellView::UIActivate  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT UIActivate(
 UINT uState
);

/* ITaskbarList2::MarkFullscreenWindow  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT MarkFullscreenWindow(
 HWND hwnd,
 BOOL fFullscreen
);

/* ITaskbarList::ActivateTab  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT ActivateTab(
 HWND hwnd
);

/* ITaskbarList::AddTab  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT AddTab(
 HWND hwnd
);

/* ITaskbarList::DeleteTab  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT DeleteTab(
 HWND hwnd
);

/* ITaskbarList::HrInit  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT HrInit(VOID);

/* ITaskbarList::SetActiveAlt  [function; shared; CE 5.0..699; Shell32.dll; lib:win32-reference] */
HRESULT SetActiveAlt(
 HWND hwnd
);
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
