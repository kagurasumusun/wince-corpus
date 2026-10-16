/* GweBypassCoredllThunk.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 60 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _GWEBYPASSCOREDLLTHUNK_HPP_
#define _GWEBYPASSCOREDLLTHUNK_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CreateIconIndirect_I  [function; ce-only; CE 4.0..699] */
HICON WINAPI CreateIconIndirect_I(
 PICONINFO pii
);

/* DestroyIcon_I  [function; ce-only; CE 4.0..699] */
BOOL WINAPI DestroyIcon_I(
 HICON hicon
);

/* DrawIconEx_I  [function; ce-only; CE 4.0..699] */
BOOL WINAPI DrawIconEx_I(
 HDC hdc,
 int X,
 int Y,
 HICON hicon,
 int cx,
 int cy,
 UINT istepIfAniCur,
 HBRUSH hbrFlickerFreeDraw,
 UINT diFlags
);

/* GetForegroundWindow_I  [function; ce-only; CE 4.0..699] */
HWND WINAPI GetForegroundWindow_I(void);

/* GweBypassCoredllThunk_t::BeginPaint_I  [function; ce-only; CE 4.0..699] */
static HDC WINAPI BeginPaint_I(
 HWND hwndThis,
 PPAINTSTRUCT pps
);

/* GweBypassCoredllThunk_t::BringWindowToTop_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI BringWindowToTop_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::ChildWindowFromPoint_I  [function; ce-only; CE 4.0..699] */
static HWND WINAPI ChildWindowFromPoint_I(
 HWND hwndThis,
 POINT pt
);

/* GweBypassCoredllThunk_t::ClientToScreen_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI ClientToScreen_I(
 HWND hwndThis,
 POINT* pPoint
);

/* GweBypassCoredllThunk_t::DefWindowProcW_I  [function; ce-only; CE 4.0..699] */
static LRESULT WINAPI DefWindowProcW_I(
 HWND hwndThis,
 UINT msg,
 WPARAM wParam,
 LPARAM lParam
);

/* GweBypassCoredllThunk_t::DestroyWindow_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI DestroyWindow_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::EnableWindow_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI EnableWindow_I(
 HWND hwndThis,
 BOOL bEnable
);

/* GweBypassCoredllThunk_t::EndPaint_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI EndPaint_I(
 HWND hwndThis,
 PPAINTSTRUCT pps
);

/* GweBypassCoredllThunk_t::EnumPropsEx_I  [function; ce-only; CE 4.0..699] */
static int EnumPropsEx_I(
 HWND hWnd,
 PROPENUMPROCEX lpEnumFunc,
 LPARAM lParam
 HPROCESS hProcCallingContext
);

/* GweBypassCoredllThunk_t::GetAssociatedMenu_I  [function; ce-only; CE 4.0..699] */
static HMENU WINAPI GetAssociatedMenu_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::GetClassLongW_I  [function; ce-only; CE 4.0..699] */
static DWORD WINAPI GetClassLongW_I(
 HWND hwndThis,
 INT nIndex
);

/* GweBypassCoredllThunk_t::GetClassNameW_I  [function; ce-only; CE 4.0..699] */
static int WINAPI GetClassNameW_I(
 HWND hwndThis,
 PTSTR szClassName,
 int cchClassName
);

/* GweBypassCoredllThunk_t::GetClientRect_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI GetClientRect_I(
 HWND hwndThis,
 LPRECT prc
);

/* GweBypassCoredllThunk_t::GetDC_I  [function; ce-only; CE 4.0..699] */
static HDC WINAPI GetDC_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::GetDCEx_I  [function; ce-only; CE 4.0..699] */
static HDC WINAPI GetDCEx_I(
 HWND hwndThis,
 HRGN hrgnClip,
 DWORD flags
);

/* GweBypassCoredllThunk_t::GetParent_I  [function; ce-only; CE 4.0..699] */
static HWND WINAPI GetParent_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::GetProp_I  [function; ce-only; CE 4.0..699] */
static HANDLE GetProp_I(
 HWND hWnd,
 LPCTSTR lpString
);

/* GweBypassCoredllThunk_t::GetSBInfoInternal  [function; ce-only; CE 4.0..699] */
static ScrollBarInfoInternal* GetSBInfoInternal(
 HWND hwnd,
 BOOL fVert
);

/* GweBypassCoredllThunk_t::GetUpdateRect_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI GetUpdateRect_I(
 HWND hwndThis,
 LPRECT lpRect,
 BOOL bErase
);

/* GweBypassCoredllThunk_t::GetUpdateRgn_I  [function; ce-only; CE 4.0..699] */
static int WINAPI GetUpdateRgn_I(
 HWND hwndThis,
 HRGN hRgn,
 BOOL bErase
);

/* GweBypassCoredllThunk_t::GetWindow_I  [function; ce-only; CE 4.0..699] */
static HWND WINAPI GetWindow_I(
 HWND hwndThis,
 UINT32 relation
);

/* GweBypassCoredllThunk_t::GetWindowDC_I  [function; ce-only; CE 4.0..699] */
static HDC WINAPI GetWindowDC_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::GetWindowLongW_I  [function; ce-only; CE 4.0..699] */
static LONG WINAPI GetWindowLongW_I(
 HWND hwndThis,
 int nIndex
);

/* GweBypassCoredllThunk_t::GetWindowRect_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI GetWindowRect_I(
 HWND hwndThis,
 PRECT prc
);

/* GweBypassCoredllThunk_t::GetWindowRgn_I  [function; ce-only; CE 4.0..699] */
static int WINAPI GetWindowRgn_I(
 HWND hwndThis,
 HRGN hrgn
);

/* GweBypassCoredllThunk_t::GetWindowTextLengthW_I  [function; ce-only; CE 4.0..699] */
static int WINAPI GetWindowTextLengthW_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::GetWindowTextW_I  [function; ce-only; CE 4.0..699] */
static INT WINAPI GetWindowTextW_I(
 HWND hwndThis,
 LPTSTR psz,
 int cchMax
);

/* GweBypassCoredllThunk_t::GetWindowThreadProcessId_I  [function; ce-only; CE 4.0..699] */
static DWORD WINAPI GetWindowThreadProcessId_I(
 HWND hwndThis,
 LPDWORD lpdwProcessId
);

/* GweBypassCoredllThunk_t::InvalidateRect_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI InvalidateRect_I(
 HWND hwndThis,
 LPCRECT prc,
 BOOL fErase
);

/* GweBypassCoredllThunk_t::IsChild_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI IsChild_I(
 HWND hwndThis,
 HWND hWnd
);

/* GweBypassCoredllThunk_t::IsWindow_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI IsWindow_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::IsWindowEnabled_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI IsWindowEnabled_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::IsWindowVisible_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI IsWindowVisible_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::MoveWindow_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI MoveWindow_I(
 HWND hwndThis,
 int X,
 int Y,
 int nWidth,
 int nHeight,
 BOOL bRepaint
);

/* GweBypassCoredllThunk_t::RectangleAnimation_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI RectangleAnimation_I(
 HWND hwndThis,
 LPCRECT prc,
 BOOL fMaximize
);

/* GweBypassCoredllThunk_t::ReleaseDC_I  [function; ce-only; CE 4.0..699] */
static int WINAPI ReleaseDC_I(
 HWND hwndThis,
 HDC hdc
);

/* GweBypassCoredllThunk_t::RemoveProp_I  [function; ce-only; CE 4.0..699] */
static HANDLE RemoveProp_I(
 HWND hWnd,
 LPCTSTR lpString
);

/* GweBypassCoredllThunk_t::ScreenToClient_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI ScreenToClient_I(
 HWND hwndThis,
 POINT* pPoint
);

/* GweBypassCoredllThunk_t::ScrollWindowEx_I  [function; ce-only; CE 4.0..699] */
static int WINAPI ScrollWindowEx_I(
 HWND hwndThis,
 int dx,
 int dy,
 CONST RECT* prcScroll,
 CONST RECT* prcClip,
 HRGN hrgnUpdate,
 LPRECT prcUpdate,
 UINT flags
);

/* GweBypassCoredllThunk_t::SetAssociatedMenu_I  [function; ce-only; CE 4.0..699] */
static void WINAPI SetAssociatedMenu_I(
 HWND hwndThis,
 HMENU hmenu
);

/* GweBypassCoredllThunk_t::SetClassLongW_I  [function; ce-only; CE 4.0..699] */
static DWORD WINAPI SetClassLongW_I(
 HWND hwndThis,
 INT nIndex,
 LONG lNewValue
);

/* GweBypassCoredllThunk_t::SetParent_I  [function; ce-only; CE 4.0..699] */
static HWND WINAPI SetParent_I(
 HWND hwndThis,
 HWND hwndNewParent
);

/* GweBypassCoredllThunk_t::SetProp_I  [function; ce-only; CE 4.0..699] */
static BOOL SetProp_I(
 HWND hWnd,
 LPCTSTR lpString,
 HANDLE hData
);

/* GweBypassCoredllThunk_t::SetWindowLongW_I  [function; ce-only; CE 4.0..699] */
static LONG WINAPI SetWindowLongW_I(
 HWND hwndThis,
 int nIndex,
 LONG lNewLong
);

/* GweBypassCoredllThunk_t::SetWindowPos_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI SetWindowPos_I(
 HWND hwndThis,
 HWND hwndInsertAfter,
 int x,
 int y,
 int cx,
 int cy,
 UINT fuFlags
);

/* GweBypassCoredllThunk_t::SetWindowRgn_I  [function; ce-only; CE 4.0..699] */
static int WINAPI SetWindowRgn_I(
 HWND hwndThis,
 HRGN hrgn,
 BOOL bRedraw
);

/* GweBypassCoredllThunk_t::SetWindowTextW_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI SetWindowTextW_I(
 HWND hwndThis,
 LPCTSTR psz
);

/* GweBypassCoredllThunk_t::ShowWindow_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI ShowWindow_I(
 HWND hwndThis,
 INT nCmdShow
);

/* GweBypassCoredllThunk_t::UpdateWindow_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI UpdateWindow_I(
 HWND hwndThis
);

/* GweBypassCoredllThunk_t::ValidateRect_I  [function; ce-only; CE 4.0..699] */
static BOOL WINAPI ValidateRect_I(
 HWND hwndThis,
 CONST RECT* lpRect
);

/* SendMessageW_I  [function; ce-only; CE 4.0..699] */
LRESULT WINAPI SendMessageW_I(
 HWND hWnd,
 UINT uMsg,
 WPARAM wParam,
 LPARAM lParam
);

/* SetForegroundWindow_I  [function; ce-only; CE 4.0..699] */
BOOL WINAPI SetForegroundWindow_I(
 HWND hwnd
);

/* SetTimer_I  [function; ce-only; CE 4.0..699] */
UINT WINAPI SetTimer_I(
 HWND hwnd,
 UINT idTimer,
 UINT uTimeout,
 TIMERPROC tmprc
);

/* StockObjectHandles::GetStockObject_I  [function; ce-only; CE 4.0..699] */
static HGDIOBJ GetStockObject_I(
 int IdxObject
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* KillTimer_I  [function; ce-only; CE 5.0..699] */
BOOL WINAPI KillTimer_I(
 HWND hwnd,
 UINT uIDEvent
);

/* LoadIconW_I  [function; ce-only; CE 5.0..699] */
HICON WINAPI LoadIconW_I(
 HINSTANCE hinst,
 PCTSTR pszIcon
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
static ScrollBarInfoInternal* GetSBInfoInternal(  HWND hwnd,  BOOL fVert  );

#endif /* _GWEBYPASSCOREDLLTHUNK_HPP_ */
