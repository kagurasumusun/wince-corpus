/* Fatutil.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _FATUTIL_
#define _FATUTIL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* FORMAT_OPTIONS  [struct; ce-only] */
typedef struct _FORMAT_OPTIONS {
 DWORD dwClusSize;
 DWORD dwRootEntries;
 DWORD dwFatVersion;
 DWORD dwNumFats;
 DWORD dwFlags;
} FORMAT_OPTIONS;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DEFRAG_PARAMS { DWORD cbSize; DEFRAG_OPTIONS dopt; DEFRAG_RESULTS dr; PFN_PROGRESS pfnProgress; PFN_MESSAGE pfnMessage;} DEFRAG_PARAMS, *PDEFRAG_PARAMS;
typedef struct _DEFRAG_RESULTS { SCAN_RESULTS sr;} DEFRAG_RESULTS, *PDEFRAG_RESULTS;
typedef struct _FORMAT_PARAMS { DWORD cbSize; FORMAT_OPTIONS fo; FORMAT_RESULTS fr; PFN_PROGRESS pfnProgress; PFN_MESSAGE pfnMessage;} FORMAT_PARAMS, *PFORMAT_PARAMS;
typedef struct _FORMAT_RESULTS{ DWORD dwSectorsPerFat; DWORD dwReservedSectors; DWORD dwSectorsPerCluster; DWORD dwRootSectors; DWORD dwTotalSectors; DWORD dwNumFats; DWORD dwFatVersion;} FORMAT_RESULTS, *PFORMAT_RESULTS;
typedef struct _SCAN_PARAMS { DWORD cbSize; SCAN_OPTIONS so; SCAN_RESULTS sr; PFN_PROGRESS pfnProgress; PFN_MESSAGE pfnMessage;} SCAN_PARAMS, *PSCAN_PARAMS;
typedef struct _SCAN_RESULTS { DWORD dwLostClusters; DWORD dwInvalidClusters; DWORD dwLostChains; DWORD dwInvalidDirs; DWORD dwInvalidFiles; DWORD dwTotalErrors; DWORD dwPercentFrag; BOOL fConsistentFats; BOOL fErrorNotFixed;} SCAN_RESULTS, *PSCAN_RESULTS;

#endif /* _FATUTIL_ */
