/* Defragdisk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _DEFRAGDISK_
#define _DEFRAGDISK_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DefragVolume  [function; ce-only; CE 5.0..699; Fatutil.dll] */
BOOL DefragVolume(
 HANDLE hVolume,
 PDISK_INFO pdi,
 PDEFRAG_OPTIONS pdo,
 PFN_PROGRESS pfnProgress,
 PFN_MESSAGE pfnMessage
);

/* DefragVolumeEx  [function; ce-only; CE 5.0..699; Fatutil.dll] */
DWORD DefragVolumeEx(
 HANDLE hVolume,
 PDEFRAG_PARAMS pdp
);

/* DefragVolumeUI  [function; ce-only; CE 5.0..699; Fatutil.dll] */
VOID DefragVolumeUI(
 HANDLE hVolume,
 HWND hWnd
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DEFRAG_OPTIONS { DWORD dwFatToUse; DWORD dwFlags;} DEFRAG_OPTIONS, *PDEFRAG_OPTIONS;
typedef struct _FRAGNODE { DWORD dwStartCluster;DWORD dwLength;DWORD dwPrevCluster;DWORD dwNextCluster;DWORD dwDirEntryOffset;_FRAGNODE* pNext;} FRAGNODE, *PFRAGNODE;

#endif /* _DEFRAGDISK_ */
