/* Atlwin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 32 extra decls
 */
#ifndef _ATLWIN_
#define _ATLWIN_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CAxWindow  [typedef; ce-only] */
typedef CAxWindowT<CWindow> CAxWindow;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.12..399 */

/* AtlHiMetricToPixel  [function; ce-only; CE 2.12..399] */
extern void AtlHiMetricToPixel( const SIZEL* lpSizeInHiMetric, 
LPSIZEL lpSizeInPix );

/* AtlPixelToHiMetric  [function; ce-only; CE 2.12..399] */
extern void AtlPixelToHiMetric( const SIZEL* lpSizeInPix, 
LPSIZEL lpSizeInHiMetric );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AttachControl( IUnknown* pControl, IUnknown** ppUnkContainer );
CContainedWindow(LPSTR lpszClassName, CMessageMap* pObject, DWORD dwMsgMapID = 0 );
BOOL CallChain( DWORD dwChainID, HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam, LRESULT& lResult );
BOOL CreateGrayCaret( int nWidth, int nHeight );
BOOL CreateSolidCaret( int nWidth, int nHeight );
static LPCTSTR GetWndClassName( );
BOOL ModifyStyle( DWORD dwRemove, DWORD dwAdd, UINT nFlags = 0 );
BOOL ModifyStyleEx( DWORD dwRemove, DWORD dwAdd, UINT nFlags = 0 );
HRESULT QueryControl( REFIID iid, void** ppUnk );
HRESULT QueryHost( REFIID iid, void** ppUnk );
ATOM RegisterWndSuperClass( );
BOOL RemoveChainEntry( DWORD dwChainID );
BOOL SetChainEntry( DWORD dwChainID, CMessageMap* pObject, DWORD dwMsgMapID = 0 );
int SetDlgCtrlID( int nID );
HRESULT SetExternalDispatch( IDispatch* pDisp );
HRESULT SetExternalUIHandler( IDocHostUIHandlerDispatch* pUIHandler );
BOOL SubclassWindow( HWND hWnd);
void SwitchMessageMap( DWORD dwMsgMapID);
HWND UnsubclassWindow( );

#endif /* _ATLWIN_ */
