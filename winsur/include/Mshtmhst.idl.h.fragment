/* Mshtmhst.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 11 declarations, 0 outlines, 0 base types, 0 extra macros, 11 extra decls
 */
#ifndef _MSHTMHST_IDL_
#define _MSHTMHST_IDL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IOleControlNavigation2::ActivateRect  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT STDMETHODCALLTYPE ActivateRect(
 DWORD rectToActivate
);

/* IOleControlNavigation2::DeactivateRect  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT STDMETHODCALLTYPE DectivateRect(VOID);

/* IOleControlNavigation2::GetControlNavigationCapabilities  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT GetControlNavigationCapabilities(
 DWORD* navigationFlags
);

/* IOleControlNavigation2::GetCurrentRectIndex  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT STDMETHODCALLTYPE GetCurrentRectIndex(
 DWORD __RPC_FAR* current
);

/* IOleControlNavigation2::GetNavigationRectCount  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT GetNavigationRectCount(
 DWORD __RPC_FAR* rectCount
);

/* IOleControlNavigation2::GetNavigationRects  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
virtual HRESULT STDMETHODCALLTYPE GetNavigationRects(
 DWORD rectCount,
 RECT __RPC_FAR rects[ ]
);

/* IOleControlNavigation2::NavigateInControl  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT STDMETHODCALLTYPE NavigateInControl(
 RECT lastRect,
 NVFOCUS_DIRECTION direction
);

/* IOleControlNavigation2AdviseSink::NavigateOutControl  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT STDMETHODCALLTYPE NavigateOutControl( 
 RECT currentRect, 
 NVFOCUS_DIRECTION direction
);

/* IOleControlNavigation2AdviseSink::OnFocusRectChange  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT STDMETHODCALLTYPE OnFocusRectChange(
 RECT* newRect
);

/* IOleControlNavigation2AdviseSink::OnNavigationStatusChange  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
virtual HRESULT STDMETHODCALLTYPE OnNavigationStatusChange( 
 DWORD navigationStatus
);

/* IOleControlNavigation2AdviseSink::OnRectsChange  [function; ce-only; CE 4.0..699; Mshtml.dll, mshtml.dll] */
HRESULT STDMETHODCALLTYPE OnRectsChange();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT STDMETHODCALLTYPE ActivateRect(  DWORD rectToActivate  );
HRESULT STDMETHODCALLTYPE DectivateRect(VOID);
HRESULT GetControlNavigationCapabilities( DWORD* navigationFlags );
HRESULT STDMETHODCALLTYPE GetCurrentRectIndex(  DWORD __RPC_FAR* current  );
HRESULT GetNavigationRectCount( DWORD __RPC_FAR* rectCount );
virtual HRESULT STDMETHODCALLTYPE GetNavigationRects(  DWORD rectCount,  RECT __RPC_FAR rects[ ]  );
HRESULT STDMETHODCALLTYPE NavigateInControl(  RECT lastRect,  NVFOCUS_DIRECTION direction  );
HRESULT STDMETHODCALLTYPE NavigateOutControl(  RECT currentRect,  NVFOCUS_DIRECTION direction  );
HRESULT STDMETHODCALLTYPE OnFocusRectChange(  RECT* newRect  );
virtual HRESULT STDMETHODCALLTYPE OnNavigationStatusChange(  DWORD navigationStatus  );
HRESULT STDMETHODCALLTYPE OnRectsChange();

#endif /* _MSHTMHST_IDL_ */
