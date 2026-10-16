/* lockmgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _LOCKMGR_
#define _LOCKMGR_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FSDMGR_AcquireFileLock  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL FSDMGR_AcquireFileLock(
 PACQUIREFILELOCKSTATE pAcquireFileLockState
 PRELEASEFILELOCKSTATE pReleaseFileLockState
 DWORD dwHandle, 
 DWORD dwFlags, 
 DWORD dwReserved, 
 DWORD nNumberOfBytesToLockLow, 
 DWORD nNumberOfBytesToLockHigh, 
 LPOVERLAPPED lpOverlapped
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FSDMGR_InstallFileLock  [function; ce-only; CE 6.0..699] */
BOOL
FSDMGR_InstallFileLock(
 PACQUIREFILELOCKSTATE pAcquireFileLockState,
 PRELEASEFILELOCKSTATE pReleaseFileLockState,
 DWORD dwHandle,
 DWORD dwFlags,
 DWORD dwReserved,
 DWORD nNumberOfBytesToLockLow,
 DWORD nNumberOfBytesToLockHigh,
 LPOVERLAPPED lpOverlapped
 );

/* FSDMGR_RemoveFileLockEx  [function; ce-only; CE 6.0..699] */
BOOL
FSDMGR_RemoveFileLockEx(
 PACQUIREFILELOCKSTATE pAcquireFileLockState,
 PRELEASEFILELOCKSTATE pReleaseFileLockState,
 DWORD dwHandle
 );

/* FSDMGR_TestFileLock  [function; ce-only; CE 6.0..699; Fsdmgr.lib] */
BOOL
FSDMGR_TestFileLock(
 PACQUIREFILELOCKSTATE pAcquireFileLockState,
 PRELEASEFILELOCKSTATE pReleaseFileLockState,
 DWORD dwHandle,
 BOOL fRead,
 DWORD cbReadWrite
 );

/* FSDMGR_TestFileLockEx  [function; ce-only; CE 6.0..699] */
BOOL
FSDMGR_TestFileLockEx(
 PACQUIREFILELOCKSTATE pAcquireFileLockState,
 PRELEASEFILELOCKSTATE pReleaseFileLockState,
 DWORD dwHandle,
 BOOL fRead,
 DWORD cbReadWrite,
 DWORD dwOffsetLow,
 DWORD dwOffsetHigh
 );
#endif /* _WIN32_WCE */

#endif /* _LOCKMGR_ */
