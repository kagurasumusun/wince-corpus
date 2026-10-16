/* KoreanImeUI.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 18 declarations, 0 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _KOREANIMEUI_
#define _KOREANIMEUI_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IKoreanImeUI::GetCandWndPos  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD GetCandWndPos(
 LONG* px, 
 LONG* py
);

/* IKoreanImeUI::GetCompositionFont  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD GetCompoitionFont(
 DWORD dwSize, 
 BYTE* pLogFont
);

/* IKoreanImeUI::GetCompWndPos  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD GetCompWndPos(
 LONG* px, 
 LONG* py
);

/* IKoreanImeUI::GetStatusWndPos  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD GetStatusWndPos(
 LONG* px, 
 LONG* py
);

/* IKoreanImeUI::InitializeUIWindows  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD InitializeUIWindows(VOID);

/* IKoreanImeUI::RedrawCandWnd  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD RedrawCandWnd(VOID);

/* IKoreanImeUI::RedrawCompWnd  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD RedrawCompWnd(VOID);

/* IKoreanImeUI::RedrawStatusWnd  [function; ce-only; CE 4.0..699; Uuid.lib, uuid.lib] */
STDMETHOD RedrawStatusWnd(VOID);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IKoreanImeUI::SetCandData  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD SetCandData(
 DWORD dwSize, 
 BYTE* lpCandList
);

/* IKoreanImeUI::SetCandWndPos  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD SetCandWndPos(
 DWORD dwFlag, 
 RECT* pRect, 
 LONG x, 
 LONG y
);

/* IKoreanImeUI::SetCompData  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD SetCompData(
 DWORD dwCompLen, 
 WCHAR* lpCompStr
);

/* IKoreanImeUI::SetCompWndPos  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD SetCompWndPos(
 LONG x, 
 LONG y
);

/* IKoreanImeUI::SetStatusData  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD SetStatusData(
 DWORD dwState
);

/* IKoreanImeUI::SetStatusWndPos  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD SetStatusWndPos(
 LONG x, 
 LONG y
);

/* IKoreanImeUI::ShowHideCandWnd  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD ShowHideCandWnd(
 int bShow
);

/* IKoreanImeUI::ShowHideCompWnd  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD ShowHideCompWnd(
 int bShow
);

/* IKoreanImeUI::ShowHideStatusWnd  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD ShowHideStatusWnd(
 int bShow
);

/* IKoreanImeUI::UninitializeUIWindows  [function; ce-only; CE 5.0..699; Uuid.lib, uuid.lib] */
STDMETHOD UninitializeUIWindows(VOID);
#endif /* _WIN32_WCE */

#endif /* _KOREANIMEUI_ */
