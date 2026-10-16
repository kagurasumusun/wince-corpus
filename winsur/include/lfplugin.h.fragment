/* lfplugin.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _LFPLUGIN_
#define _LFPLUGIN_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* PROVIDER_CONTROL_BLOCK  [struct; ce-only; CE 6.0..699] */
typedef struct _PROVIDER_CONTROL_BLOCK {
 DWORD version;
 HANDLE provContext;
 PROVIDER_INFORMATION* pProvInfo;
 DWORD (WINAPI* NewProviderReport)(HANDLE provContext, LOCATION_REPORT* pNewReport);
 DWORD (WINAPI* ProviderUnavailable)(HANDLE provContext);
} PROVIDER_CONTROL_BLOCK, *PPROVIDER_CONTROL_BLOCK;

/* RESOLVER_CONTROL_BLOCK  [struct; ce-only; CE 6.0..699] */
typedef struct _RESOLVER_CONTROL_BLOCK {
 DWORD version;
 HANDLE resContext;
 RESOLVER_INFORMATION* pResInfo;
 LOCATION_REPORT* provReport;
 GUID typesToResolve[MAX_PLUGIN_REPORT_TYPES];
 DWORD numTypesToResolve;
 DWORD (WINAPI* NewResolverReport)(HANDLE resContext, LOCATION_REPORT* pNewReport);
} RESOLVER_CONTROL_BLOCK, *PRESOLVER_CONTROL_BLOCK;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* NewProviderReport  [function; ce-only; CE 6.0..699] */
DWORD NewProviderReport( 
 HANDLE provContext, 
 LOCATION_REPORT* pNewReport 
);

/* NewResolverReport  [function; ce-only; CE 6.0..699] */
DWORD NewResolverReport( 
 HANDLE resContext, 
 LOCATION_REPORT* pNewReport 
);

/* ProviderGetLocation  [function; ce-only; CE 6.0..699] */
DWORD ProviderGetLocation(
 PROVIDER_CONTROL_BLOCK* pProvControlBlock
);

/* ProviderInitialize  [function; ce-only; CE 6.0..699] */
DWORD ProviderInitialize(
 PROVIDER_INFORMATION* pProvInfo
);

/* ProviderIoctlCall  [function; ce-only; CE 6.0..699] */
DWORD ProviderIoctlCall(
 HANDLE hProv, 
 DWORD dwCode, 
 BYTE* pBufIn, 
 DWORD cbIn, 
 BYTE* pBufOut, 
 DWORD* pcbOut
);

/* ProviderIoctlClose  [function; ce-only; CE 6.0..699] */
DWORD ProviderIoctlClose(
 HANDLE hProv
);

/* ProviderIoctlOpen  [function; ce-only; CE 6.0..699] */
HLOCATIONPLUGIN ProviderIoctlOpen(void);

/* ProviderStop  [function; ce-only; CE 6.0..699] */
DWORD ProviderStop(void)

/* ProviderUnavailable  [function; ce-only; CE 6.0..699] */
ProviderUnavailable(
 HANDLE provContext
);

/* ProviderUnInitialize  [function; ce-only; CE 6.0..699] */
DWORD ProviderStop(void);

/* ResolverGetLocation  [function; ce-only; CE 6.0..699] */
DWORD ResolverGetLocation(
 RESOLVER_CONTROL_BLOCK* pResControlBlock
);

/* ResolverInitialize  [function; ce-only; CE 6.0..699] */
DWORD ResolverInitialize(
 RESOLVER_INFORMATION* pResInfo
);

/* ResolverIoctlCall  [function; ce-only; CE 6.0..699] */
DWORD ResolverIoctlCall(
 HANDLE hProv,
 DWORD dwCode,
 BYTE* pBufIn,
 DWORD cbIn,
 BYTE* pBufOut,
 DWORD* pcbOut
);

/* ResolverIoctlClose  [function; ce-only; CE 6.0..699] */
DWORD ResolverIoctlClose(
 HANDLE hProv
);

/* ResolverIoctlOpen  [function; ce-only; CE 6.0..699] */
HLOCATIONPLUGIN ResolverIoctlOpen(void);

/* ResolverStop  [function; ce-only; CE 6.0..699] */
DWORD ResolverStop(void);

/* ResolverUnInitialize  [function; ce-only; CE 6.0..699] */
DWORD ResolverUnInitialize(void);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PROVIDER_CONTROL_BLOCK {
  DWORD version;
  HANDLE provContext;
  PROVIDER_INFORMATION* pProvInfo;
  DWORD (WINAPI* NewProviderReport)(HANDLE provContext, LOCATION_REPORT* pNewReport);
  DWORD (WINAPI* ProviderUnavailable)(HANDLE provContext);
} PROVIDER_CONTROL_BLOCK, *PPROVIDER_CONTROL_BLOCK;
typedef struct _RESOLVER_CONTROL_BLOCK {
  DWORD version;
  HANDLE resContext;
  RESOLVER_INFORMATION* pResInfo;
  LOCATION_REPORT* provReport;
  GUID typesToResolve[MAX_PLUGIN_REPORT_TYPES];
  DWORD numTypesToResolve;
  DWORD (WINAPI* NewResolverReport)(HANDLE resContext, LOCATION_REPORT* pNewReport);
} RESOLVER_CONTROL_BLOCK, *PRESOLVER_CONTROL_BLOCK;

#endif /* _LFPLUGIN_ */
