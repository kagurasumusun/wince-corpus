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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 5.0..599 */

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
HRESULT AddTab( HWND hwnd );
HRESULT DeleteTab( HWND hwnd );
HRESULT DestroyViewWindow(void);
HRESULT EnableModeless( BOOL fEnable );
HRESULT HrInit(VOID);
HRESULT MarkFullscreenWindow( HWND hwnd, BOOL fFullscreen );
HRESULT SaveViewState(void);
HRESULT SetActiveAlt( HWND hwnd );
HRESULT UIActivate( UINT uState );

#endif /* _SHOBJIDL_ */
