/* Atlctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 58 extra decls
 */
#ifndef _ATLCTL_
#define _ATLCTL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT DoVerbDiscardUndo(LPCRECT prcPosRect, HWND hwndParent);
HRESULT DoVerbHide(LPCRECT prcPosRect, HWND hwndParent);
HRESULT DoVerbInPlaceActivate(LPCRECT prcPosRect, HWND hwndParent);
HRESULT DoVerbOpen(LPCRECT prcPosRect, HWND hwndParent);
HRESULT DoVerbPrimary(LPCRECT prcPosRect, HWND hwndParent);
HRESULT DoVerbProperties(LPCRECT prcPosRect, HWND hwndParent);
HRESULT DoVerbShow(LPCRECT prcPosRect, HWND hwndParent);
HRESULT DoVerbUIActivate(LPCRECT prcPosRect, HWND hwndParent);
BOOL DoesVerbActivate(LONG iVerb);
BOOL DoesVerbUIActivate(LONG iVerb);
HRESULT FireDataChange();
HRESULT FireViewChange();
HRESULT FreezeEvents(BOOL bFreeze);
HRESULT GetActivationPolicy(DWORD* pdwPolicy);
#ifdef __cplusplus
HRESULT GetAmbientAppearance(short& nAppearance);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientAutoClip(BOOL& bAutoClip);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientDisplayAsDefault(BOOL& bDisplayAsDefault);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientLocaleID(LCID& lcid);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientMessageReflect(BOOL& bMessageReflect);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientPalette(HPALETTE& hPalette);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientShowGrabHandles(BOOL& bShowGrabHandles);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientShowHatching(BOOL& bShowHatching);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientSupportsMnemonics(BOOL& bSupportsMnemonics);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientTextAlign(short& nTextAlign);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientUIDead(BOOL& bUIDead);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT GetAmbientUserMode(BOOL& bUserMode);
#endif /* __cplusplus */
BOOL GetDirty();
HRESULT HandsOffStorage();
HRESULT InPlaceDeactivate(HWND* phwnd);
#ifdef __cplusplus
LRESULT OnGetDlgCode(UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
#endif /* __cplusplus */
HRESULT OnInactiveMouseMove(LPCRECT pRectBounds, long x, long y, DWORD dwMouseMsg);
HRESULT OnInactiveSetCursor(LPCRECT pRectBounds, long x, long y, DWORD dwMouseMsg, BOOL fSetAlways);
#ifdef __cplusplus
LRESULT OnKillFocus(UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
#endif /* __cplusplus */
HRESULT OnMnemonic(LPMSG pMsg);
#ifdef __cplusplus
LRESULT OnPaint(UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& lResult);
#endif /* __cplusplus */
#ifdef __cplusplus
LRESULT OnSetFocus(UINT nMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
#endif /* __cplusplus */
HRESULT OnWindowMessage(UINT msg, WPARAM WParam, LPARAM LParam, LRESULT plResultParam);
HRESULT ReactivateAndUndo();
#ifdef __cplusplus
HRESULT SendOnDataChange(DWORD advf = 0);
#endif /* __cplusplus */
#ifdef __cplusplus
HRESULT SendOnViewChange(DWORD dwAspect, LONG lindex = -1);
#endif /* __cplusplus */
BOOL SetControlFocus(BOOL bGrab);
HRESULT SetObjectRects(LPCRECT prcPos, LPCRECT prcClip);
HRESULT UIDeactivate();

#endif /* _ATLCTL_ */
