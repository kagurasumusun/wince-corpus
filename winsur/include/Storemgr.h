/* Storemgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 26 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _STOREMGR_
#define _STOREMGR_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* DeletePartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI DeletePartition(
 HANDLE hStore,
 LPCTSTR szPartitionName
);

/* DismountPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI DismountPartition(
 HANDLE hPartition
);

/* DismountStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI DismountStore(
 HANDLE hStore
);

/* FindClosePartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FindClosePartition(
 HANDLE hSearch
);

/* FindCloseStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FindCloseStore(
 HANDLE hSearch
);

/* FormatPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FormatPartition(
 HANDLE hPartition
);

/* FormatPartitionEx  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FormatPartitionEx(
 HANDLE hPartition,
 BYTE bPartType,
 BOOL bAuto
);

/* FormatStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI FormatStore(
 HANDLE hStore
);

/* MountPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI MountPartition(
 HANDLE hPartition
);

/* OpenPartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
HANDLE WINAPI OpenPartition(
 HANDLE hStore,
 LPCTSTR szPartitionName
);

/* OpenStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
HANDLE OpenStore(
 LPCSTR szDeviceName
);

/* RenamePartition  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI RenamePartition(
 HANDLE hPartition,
 LPCTSTR szNewName
);

/* SetPartitionAttributes  [function; ce-only; CE 5.0..699; Storeapi.lib] */
BOOL WINAPI SetPartitionAttributes(
 HANDLE hPartition,
 DWORD dwAttrs
);
#endif /* _WIN32_WCE */

#endif /* _STOREMGR_ */
