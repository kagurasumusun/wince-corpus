/* Ocidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 28 constants, 57 declarations, 8 outlines, 0 base types, 0 extra macros, 24 extra decls
 */
#ifndef _OCIDL_
#define _OCIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DVASPECTINFOFLAG_CANOPTIMIZE 1
#define DVEXTENT_CONTENT 0
#define HITRESULT_CLOSE 2
#define HITRESULT_HIT 3
#define HITRESULT_OUTSIDE 0
#define HITRESULT_TRANSPARENT 1
#define mpReadyStateComplete 4
#define MpReadyStateComplete 4
#define mpReadyStateInteractive 3
#define MpReadyStateInteractive 3
#define mpReadyStateLoading 1
#define MpReadyStateLoading 1
#define mpReadyStateUninitialized 0
#define MpReadyStateUninitialized 0
#define READYSTATE_COMPLETE 4
#define READYSTATE_INTERACTIVE 3
#define READYSTATE_LOADED 2
#define READYSTATE_LOADING 1
#define READYSTATE_UNINITIALIZED 0
#define VIEWSTATUS_DVASPECTOPAQUE 4
#define VIEWSTATUS_DVASPECTTRANSPARENT 8
#define VIEWSTATUS_OPAQUE 1
#define VIEWSTATUS_SOLIDBKGND 2
#define XFORMCOORDS_CONTAINERTOHIMETRIC 0x8
#define XFORMCOORDS_EVENTCOMPAT 0x10
#define XFORMCOORDS_HIMETRICTOCONTAINER 0x4
#define XFORMCOORDS_POSITION 0x1
#define XFORMCOORDS_SIZE 0x2

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* IClassFactory  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IClassFactory2  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IConnectionPoint  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IConnectionPointContainer  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IPersistStreamInit  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IProvideClassInfo  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IProvideClassInfo2  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObjectEx  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* CONTROLINFO  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct tagCONTROLINFO {
 ULONG cb;
 HACCEL hAccel;
 USHORT cAccel;
 DWORD dwFlags;
} CONTROLINFO;

/* DVEXTENTINFO  [struct; shared; CE 2.11..2.12, 3.0..699] */
typedef struct tagDVEXTENTINFO{
 ULONG cb;
 DWORD dwExtentMode;
 SIZEL sizelProposed;
} DVEXTENTINFO;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 3.0..399, 5.0..599 */

/* IEnumConnectionPoints  [function, interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
HRESULT Next( 
 ULONG cConnections, //[in]Number of IConnectionPoint values 
 // returned in rgpcn array 
 IConnectionPoint **rgpcn, 
 //[out]Array to receive enumerated connection 
 // points 
 ULONG *pcFetched //[out]Pointer to the actual number of 
 // connection points returned in rgpcn array 
); 
HRESULT Skip( 
 ULONG cConnections //[in]Number of elements to skip 
); 
HRESULT Reset(void); 
HRESULT Clone( 
 IEnumConnectionPoints **ppEnum //[out]Address of output variable 
 // that receives the 
 // IEnumConnectionPoints interface 
 // pointer 
);

/* IEnumConnections  [function, interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
HRESULT Next( 
 ULONG cConnections, //[in]Number of CONNECTDATA structures 
 // returned in rgpcd 
 CONNECTDATA **rgpcd, //[out]Array to receive enumerated 
 // CONNECTDATA structures 
 ULONG *pcFetched //[out]Pointer to actual number of 
 // CONNECTDATA structures 
); 
HRESULT Skip( 
 ULONG cConnections //[in]Number of elements to skip 
); 
HRESULT Reset(void); 
HRESULT Clone( 
 IEnumConnections **ppEnum //[out]Address of output variable that 
 // receives the IEnumConnections interface 
 // pointer 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CONNECTDATA  [struct; shared; CE 4.0..699] */
typedef struct tagCONNECTDATA { 
 IUnknown* pUnk; 
 DWORD dwCookie; 
} CONNECTDATA;

/* DVASPECT2  [enum; shared; CE 4.0..699] */
typedef enum tagDVASPECT2 { 
 DVASPECT_OPAQUE = 16, 
 DVASPECT_TRANSPARENT = 32 
} DVASPECT2;

/* DVASPECTINFO  [struct; shared; CE 4.0..699] */
typedef struct STRUCT tagDVASPECTINFO {
 UNIT cb; 
 DWORD dwFlags; 
} DVASPECTINFO;

/* DVASPECTINFOFLAG  [enum; shared; CE 4.0..699] */
typedef enum tagDVASPECTINFOFLAG { 
 DVASPECTINFOFLAG_CANOPTIMIZE = 1 
} DVASPECTINFOFLAG;

/* DVEXTENTMODE  [enum; shared; CE 4.0..699] */
typedef enum tagDVEXTENTMODE { 
 DVEXTENT_CONTENT = 0, 
 DVEXTENT_INTEGRAL = DVEXTENT_CONTENT + 1
} DVEXTENTMODE;

/* HITRESULT  [enum; shared; CE 4.0..699] */
typedef enum tagHITRESULT { 
 HITRESULT_OUTSIDE = 0, 
 HITRESULT_TRANSPARENT = 1, 
 HITRESULT_CLOSE = 2, 
 HITRESULT_HIT = 3 
} HITRESULT;

/* LICINFO  [struct; shared; CE 4.0..699] */
typedef struct tagLICINFO {
 ULONG cbLicInfo; 
 BOOL fRuntimeKeyAvail; 
 BOOL fLicVerified; 
} LICINFO;

/* VIEWSTATUS  [enum; shared; CE 4.0..699] */
typedef enum tagVIEWSTATUS { 
 VIEWSTATUS_OPAQUE = 1, 
 VIEWSTATUS_SOLIDBKGND = 2, 
 VIEWSTATUS_DVASPECTOPAQUE = 4, 
 VIEWSTATUS_DVASPECTTRANSPARENT = 8 
} VIEWSTATUS;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ReadyState  [enum; shared; CE 5.0..699] */
enum tagREADYSTATE{
 READYSTATE_UNINITIALIZED = 0,
 READYSTATE_LOADING = 1,
 READYSTATE_LOADED = 2,
 READYSTATE_INTERACTIVE = 3,
 READYSTATE_COMPLETE = 4
} READYSTATE;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CAUUID  [struct; shared; CE 6.0..699] */
typedef struct tagCAUUID { 
 ULONG cElems; 
 GUID FAR* pElems; 
} CAUUID;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* IClassFactory::CreateInstance  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CreateInstance( 
 IUnknown* pUnkOuter, 
 REFIID riid, 
 void** ppvObject
);

/* IClassFactory::LockServer  [function; shared; CE 2.11..2.12, 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESUTL LockServer( 
 BOOL fLock
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* IPersistStreamInit::GetSizeMax  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetSizeMax(
 ULARGE_INTEGER* pcbSize 
);

/* IPersistStreamInit::InitNew  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT InitNew(void);

/* IPersistStreamInit::IsDirty  [function; shared; CE 3.0..399, 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT IsDirty(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* IClassFactory2::CreateInstanceLic  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT CreateInstanceLic(
 IUnknown* pUnkOuter,
 IUnknown* pUnkReserved,
 REFIID riid,
 BSTR bstrKey,
 void** ppvObject 
);

/* IClassFactory2::GetLicInfo  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetLicInfo(
 LICINFO* pLicInfo 
);

/* IClassFactory2::RequestLicKey  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT RequestLicKey(
 DWORD dwReserved,
 BSTR* pbstrKey 
);

/* IConnectionPoint::Advise  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Advise(
 IUnknown* pUnk,
 DWORD* pdwCookie 
);

/* IConnectionPoint::EnumConnections  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumConnections(
 IEnumConnections** ppEnum 
);

/* IConnectionPoint::GetConnectionInterface  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetConnectionInterface(
 IID* pIID 
);

/* IConnectionPoint::GetConnectionPointContainer  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetConnectionPointContainer(
 IConnectionPointContainer** ppCPC 
);

/* IConnectionPoint::Unadvise  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Unadvise(
 DWORD dwCookie 
);

/* IConnectionPointContainer::EnumConnectionPoints  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT EnumConnectionPoints(
 IEnumConnectionPoints** ppEnum 
);

/* IConnectionPointContainer::FindConnectionPoint  [function; shared; CE 3.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT FindConnectionPoint(
 REFIID riid,
 IConnectionPoint** ppCP 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IEnumConnectionPoints::Clone  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone(
 IEnumConnectionPoints** ppEnum 
);

/* IEnumConnectionPoints::Next  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG cConnections, 
 IConnectionPoint** rgpcn, 
 ULONG* pcFetched 
);

/* IEnumConnectionPoints::Reset  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumConnectionPoints::Skip  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Skip(
 ULONG cConnections 
);

/* IEnumConnections::Clone  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Clone(
 IEnumConnectionPoints** ppEnum 
);

/* IEnumConnections::Next  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Next(
 ULONG cConnections, 
 CONNECTDATA** rgpcd, 
 ULONG* pcFetched 
);

/* IEnumConnections::Reset  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Reset(void);

/* IEnumConnections::Skip  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Skip(
 ULONG cConnections 
);

/* IPersistPropertyBag::InitNew  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT InitNew(void);

/* IPersistPropertyBag::Load  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Load( 
 IPropertyBag* pPropBag, 
 IErrorlog* pErrorLog 
);

/* IPersistPropertyBag::Save  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Save( 
 IPropertyBag* pPropBag,
 BOOL fClearDirty,
 BOOL fSaveAllProperties
);

/* IPropertyBag::Read  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Read( 
 LPCOLESTR pszPropName, 
 VARIANT* pVar, 
 IErrorlog* pErrorLog 
);

/* IPropertyBag::Write  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT Write( 
 LPCOLESTR pszPropName, 
 VARIANT* pVar 
);

/* IViewObjectEx::GetNaturalExtent  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetNaturalExtent(
 DWORD dwAspect,
 LONG lindex,
 DVTARGETDEVICE* ptd,
 HDC hicTargetDev,
 DVEXTENTINFO* pExtentInfo,
 LPSIZEL pSizel
);

/* IViewObjectEx::GetRect  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetRect(
 DWORD dwAspect, 
 LPRECTL pRect
);

/* IViewObjectEx::GetViewStatus  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetViewStatus(
 DWORD* pdwStatus
);

/* IViewObjectEx::QueryHitPoint  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT QueryHitPoint(
 DWORD dwAspect,
 LPRECT pRectBounds,
 POINTL ptlLoc,
 LONG lCloseHint,
 DWORD* pHitResult
);

/* IViewObjectEx::QueryHitRect  [function; shared; CE 4.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT QueryHitRect(
 DWORD dwAspect,
 LPRECT pRectBounds,
 LPRECT pRectLoc,
 LONG lCloseHint,
 DWORD* pHitResult
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IOleControlSite::GetExtendedControl  [function; shared; CE 5.0..699] */
HRESULT GetExtendedControl( 
 IDispatch** ppDisp 
);

/* IOleControlSite::LockInPlaceActive  [function; shared; CE 5.0..699] */
HRESULT LockInPlaceActive( 
 BOOL fLock
);

/* IOleControlSite::OnControlInfoChanged  [function; shared; CE 5.0..699] */
HRESULT OnControlInfoChanged(void);

/* IOleControlSite::OnFocus  [function; shared; CE 5.0..699] */
HRESULT OnFocus( 
 BOOL fGotFocus 
);

/* IOleControlSite::ShowPropertyFrame  [function; shared; CE 5.0..699] */
HRESULT ShowPropertyFrame(void);

/* IOleControlSite::TransformCoords  [function; shared; CE 5.0..699] */
HRESULT TransformCoords( 
 POINTL* pPtlHimetric , 
 POINTF* pPtfContainer , 
 DWORD dwFlags 
);

/* IOleControlSite::TranslateAccelerator  [function; shared; CE 5.0..699] */
HRESULT TranslateAccelerator( 
 LPMSG pMsg ,
 DWORD grfModifiers 
);

/* IProvideClassInfo2::GetGUID  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetGUID(
 DWORD dwGuidKind, 
 GUID* pGUID 
);

/* IProvideClassInfo::GetClassInfo  [function; shared; CE 5.0..699; Ole32.lib, ole32.lib, Uuid.lib, uuid.lib] */
HRESULT GetClassInfo(
 ITypeInfo** ppTI 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* ISpecifyPropertyPages::GetPages  [function; shared; CE 6.0..699] */
HRESULT GetPages( 
 CAUUID *pPages //Pointer to structure
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum tagREADYSTATE {
  READYSTATE_UNINITIALIZED = 0,
  READYSTATE_LOADING = 1,
  READYSTATE_LOADED = 2,
  READYSTATE_INTERACTIVE = 3,
  READYSTATE_COMPLETE = 4
} READYSTATE;

/* function */
HRESULT Advise( IUnknown *pUnk, DWORD *pdwCookie );
HRESULT CreateInstanceLic( IUnknown *pUnkOuter, IUnknown *pUnkReserved, REFIID riid, BSTR bstrKey, void **ppvObject );
HRESULT EnumConnectionPoints( IEnumConnectionPoints **ppEnum );
HRESULT EnumConnections( IEnumConnections **ppEnum );
HRESULT FindConnectionPoint( REFIID riid, IConnectionPoint **ppCP );
HRESULT GetConnectionInterface( IID *pIID );
HRESULT GetConnectionPointContainer( IConnectionPointContainer **ppCPC );
HRESULT GetExtendedControl( IDispatch** ppDisp);
HRESULT GetLicInfo( LICINFO *pLicInfo );
HRESULT GetNaturalExtent( DWORD dwAspect, LONG lindex, DVTARGETDEVICE* ptd, HDC hicTargetDev, DVEXTENTINFO* pExtentInfo, LPSIZEL pSizel );
HRESULT GetPages( CAUUID *pPages //Pointer to structure );
HRESULT GetRect( DWORD dwAspect, LPRECTL pRect );
HRESULT GetSizeMax( ULARGE_INTEGER *pcbSize );
HRESULT GetViewStatus( DWORD* pdwStatus );
HRESULT LockInPlaceActive( BOOL fLock);
HRESULT OnControlInfoChanged(void);
HRESULT OnFocus( BOOL fGotFocus);
HRESULT QueryHitPoint( DWORD dwAspect, LPRECT pRectBounds, POINTL ptlLoc, LONG lCloseHint, DWORD* pHitResult );
HRESULT QueryHitRect( DWORD dwAspect, LPRECT pRectBounds, LPRECT pRectLoc, LONG lCloseHint, DWORD* pHitResult );
HRESULT RequestLicKey( DWORD dwReserved, BSTR *pbstrKey );
HRESULT ShowPropertyFrame(void);
HRESULT TransformCoords( POINTL* pPtlHimetric , POINTF* pPtfContainer , DWORD dwFlags);
HRESULT Unadvise( DWORD dwCookie );

#endif /* _OCIDL_ */
