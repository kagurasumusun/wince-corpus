/* conman.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 7 extra decls
 */
#ifndef _CONMAN_
#define _CONMAN_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IConman::CreateNewServerGuid  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE CreateNewServerGuid( 
 ICcDevice* in_piDevice,
 BSTR in_bstrEndPoint,
 GUID* out_pguidServer
);

/* IConman::EnumerateServerGuids  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE EnumerateServerGuids( 
 DWORD in_ArraySize,
 DWORD* out_pNoOfServerGuids,
 GUID out_ArrayOfServerGuids[ ],
 BOOL* out_pbMoreServerGuids
);

/* IConman::get_Datastore  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE get_Datastore( 
 ICcDatastore** out_ppiDatastore
);

/* IConman::GetDeviceFromServerGuid  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE GetDeviceFromServerGuid( 
 REFGUID in_guidServer,
 ICcDevice** out_ppiDevice
);

/* IConman::GetServerFromServerGuid  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE GetServerFromServerGuid( 
 REFGUID in_guidServer,
 IConManServer** out_ppunkServer
);

/* IConman::GetServerGuidInfo  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE GetServerGuidInfo( 
 REFGUID in_guidServer,
 BSTR* out_pbstrEndPoint
);

/* IConman::SetLocale  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE SetLocale( 
 DWORD in_dwLangID
);

/* IConman::SetRegistryRoot  [function; ce-only; CE 5.0..699] */
HRESULT STDMETHODCALLTYPE SetRegistryRoot( 
BSTR in_bstrRegistryRoot
);
#endif /* _WIN32_WCE */

#endif /* _CONMAN_ */
