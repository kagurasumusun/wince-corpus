/* Oleidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 7 declarations, 10 outlines, 0 base types, 0 extra macros, 50 extra decls
 */
#ifndef _OLEIDL_
#define _OLEIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MK_ALT 32

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 3.0..399, 5.0..599 */

/* IOleAdviseHolder  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IOleClientSite  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IOleObject  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */

/* IParseDisplayName  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObject  [interface; shared; CE 3.0..399, 5.0..599; Oleaut32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 5.0..599 */

/* IEnumOLEVERB  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IOleItemContainer  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IOleLink  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObject2  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* IOleContainer::EnumObjects  [interface, function; shared; CE 5.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT BindIfRunning(void);
HRESULT BindToSource( DWORD bindflags, IBindCtx* pbc );
HRESULT CanInPlaceActivate();
HRESULT ContextSensitiveHelp( BOOL fEnterMode);
HRESULT DragLeave(void);
HRESULT EnumAdvise( IENumSTATDATA *ppEnumAdvise,);
HRESULT EnumVerbs( IEnumOleVerb **ppEnumOleVerb);
HRESULT Freeze( DWORD dwAspect, LONG lindex, void *pvAspect, DWORD *pdwFreeze);
HRESULT GetAdvise( DWORD * pdwAspect, DWORD * padvf, IAdviseSink **ppAdvSink);
HRESULT GetClientSite( IOleClientSite **ppClientSite);
HRESULT GetMiscStatus( DWORD dwAspect, DWORD *pdwStatus);
HRESULT GetMoinker( DWORD dwAssign, DWORD dwWhichMoniker , IMoniker ** ppmk );
HRESULT GetMoniker( DWORD dwAssign, DWORD dwWhichMoniker, IMoniker **ppmk);
HRESULT GetSourceMoniker( IMoniker** ppmk );
HRESULT GetUpdateOptions( DWORD* pdwUpdateOpt );
HRESULT InitFromData( IDataObject *pDataObject, BOOL fCreation, DWORD dwReserved);
HRESULT IsUpToDate();
HRESULT OnInPlaceActivate();
HRESULT OnInPlaceDeactivate();
HRESULT OnPosRectChange( LPCRECT lprcPosRect);
HRESULT OnShowWindow( BOOL fShow);
HRESULT OnUIDeactivate( BOOL fUndoable);
HRESULT RequestNewObjectLayout();
HRESULT RequestNewObjectlayout();
HRESULT SaveObject( void );
HRESULT SendOnRename( IMoniker *pmk,);
HRESULT SetAdvise( DWORD dwAspect, DWORD advf, IAdviseSink *pAdvSink);
HRESULT SetClientSite( IOleClientSite *pClientSite);
HRESULT SetUpdateOptions( DWORD dwUpdateOpt );
HRESULT ShowObject();
HRESULT UnbindSource(void);
HRESULT Unfreeze( DWORD dwFreeze);
HRESULT Update();

#endif /* _OLEIDL_ */
