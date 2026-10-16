/* Ocidl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 13 declarations, 9 outlines, 0 base types, 0 extra macros, 20 extra decls
 */
#ifndef _OCIDL_
#define _OCIDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define mpReadyStateComplete 4
#define MpReadyStateComplete 4
#define mpReadyStateInteractive 3
#define MpReadyStateInteractive 3
#define mpReadyStateLoading 1
#define MpReadyStateLoading 1
#define mpReadyStateUninitialized 0
#define MpReadyStateUninitialized 0
#define XFORMCOORDS_CONTAINERTOHIMETRIC 0x8
#define XFORMCOORDS_EVENTCOMPAT 0x10
#define XFORMCOORDS_HIMETRICTOCONTAINER 0x4
#define XFORMCOORDS_POSITION 0x1
#define XFORMCOORDS_SIZE 0x2

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 3.0..399, 5.0..599 */

/* IClassFactory  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IClassFactory2  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IConnectionPoint  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IConnectionPointContainer  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */

/* IPersistStreamInit  [interface; shared; CE 3.0..399, 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 5.0..599 */

/* IProvideClassInfo  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IProvideClassInfo2  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */

/* IViewObjectEx  [interface; shared; CE 5.0..599; Ole32.lib, Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CONTROLINFO  [struct; shared] */
typedef struct tagCONTROLINFO {
 ULONG cb;
 HACCEL hAccel;
 USHORT cAccel;
 DWORD dwFlags;
} CONTROLINFO;

/* LICINFO  [struct; shared] */
typedef struct tagLICINFO {
 ULONG cbLicInfo; 
 BOOL fRuntimeKeyAvail; 
 BOOL fLicVerified; 
} LICINFO;

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x600)) /* CE 3.0..399, 5.0..599 */

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
#endif /* _WIN32_WCE */


/* CONNECTDATA  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   pUnk */
/*   dwCookie */

/* READYSTATE  [extra enum] */
typedef enum tagREADYSTATE {
  READYSTATE_UNINITIALIZED = 0,
  READYSTATE_LOADING = 1,
  READYSTATE_LOADED = 2,
  READYSTATE_INTERACTIVE = 3,
  READYSTATE_COMPLETE = 4
} READYSTATE;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT EnumConnectionPoints( IEnumConnectionPoints **ppEnum );
HRESULT EnumConnections( IEnumConnections **ppEnum );
HRESULT GetConnectionPointContainer( IConnectionPointContainer **ppCPC );
HRESULT GetLicInfo( LICINFO *pLicInfo );
HRESULT GetPages( CAUUID *pPages //Pointer to structure );
HRESULT GetViewStatus( DWORD* pdwStatus );
HRESULT LockInPlaceActive( BOOL fLock);
HRESULT OnControlInfoChanged(void);
HRESULT OnFocus( BOOL fGotFocus);
HRESULT QueryHitRect( DWORD dwAspect, LPRECT pRectBounds, LPRECT pRectLoc, LONG lCloseHint, DWORD* pHitResult );
HRESULT ShowPropertyFrame(void);
HRESULT Unadvise( DWORD dwCookie );

#endif /* _OCIDL_ */
