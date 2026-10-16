/* Atlcom.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 15 extra decls
 */
#ifndef _ATLCOM_
#define _ATLCOM_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CComObjectRoot  [typedef; ce-only] */
typedef CComObjectRootEx <CComObjectThreadModel> CComObjectRoot;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 212 && _WIN32_WCE < 400)) /* CE 2.12..399 */

/* AtlAdviseSinkMap  [function; ce-only; CE 2.12..399] */
HRESULT AtlAdviseSinkMap( T* pT, bool bAdvise );

/* AtlReportError  [function; ce-only; CE 2.12..399] */
HRESULT WINAPI AtlReportError( const CLSID& clsid, LPCOLESTR lpszDesc, 
const IID& iid = GUID_NULL, HRESULT hRes = 0 );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CComAggObject( void* pv );
CComCachedTearOffObject( void* pv );
CComContainedObject( void* pv );
CComPolyObject( void* pv );
CComTearOffObject( void* p);
HRESULT FinalConstruct( );
void FinalRelease( );
ULONG InternalAddRef( );
HRESULT InternalQueryInterface( void* pThis, const _ATL_INTMAP_ENTRY* pEntries, REFIiD iid, void** ppvObject);
ULONG InternalRelease( );
ULONG OuterAddRef( );
HRESULT OuterQueryInterface( REFIID iid, void** ppvObject);
ULONG OuterRelease( );

#endif /* _ATLCOM_ */
