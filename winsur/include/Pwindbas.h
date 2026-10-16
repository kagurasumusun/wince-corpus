/* Pwindbas.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _PWINDBAS_
#define _PWINDBAS_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* REPLCHANGEINFO  [struct; ce-only; CE 5.0..699] */
struct REPLCHANGEINFO {
 WORD wVersion;
 WORD wStatus;
 WORD wObjType;
 CEOID oidChanged;
 CEOID oidDbase;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* GetSystemMemoryDivision  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
BOOL GetSystemMemoryDivision(
 LPDWORD lpdwStorePages,
 LPDWORD lpdwRamPages,
 LPDWORD lpdwPageSize
);

/* SetSystemMemoryDivision  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
DWORD SetSystemMemoryDivision(
 DWORD dwStorePages
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ReplChangeSyncSettings  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReplChangeSyncSettings(
 HREPL hRepl,
 DWORD dwSyncFlags,
 LPDWORD lpdwOldFlags
);

/* ReplCheckpoint  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReplCheckpoint(
 HREPL hRepl,
 DWORD dwReserved
);

/* ReplCloseSync  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReplCloseSync(
 HREPL hRepl
);

/* ReplFindNextChange  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReplFindNextChange(
 HREPL hRepl,
 REPLCHANGEINFO* lpChangeInfo,
 BOOL fRestart
);

/* ReplGetOidStatus  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReplGetOidStatus(
 HREPL hRepl,
 CEOID oid,
 REPLCHANGEINFO* lpChangeInfo
);

/* ReplGetSyncState  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReplGetSyncState(
 HREPL hRepl,
 LPBYTE lpSyncState,
 LPDWORD lpdwSize,
 BOOL fFailIfUnchanged
);

/* ReplOpenSync  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL ReplOpenSync(
 CEGUID* pguid,
 LPBYTE lpSyncState,
 DWORD dwSize,
 DWORD dwSyncFlags,
 HREPL* phRepl
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct REPLCHANGEINFO {WORDwVersion;WORDwStatus;WORDwObjType;CEOIDoidChanged;CEOIDoidDbase;};
struct REPLCHANGEINFO {
  WORD wVersion;
  WORD wStatus;
  WORD wObjType;
  CEOID oidChanged;
  CEOID oidDbase;
};

#endif /* _PWINDBAS_ */
