/* lockmgrhelp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _LOCKMGRHELP_
#define _LOCKMGRHELP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FSDMGR_CloseFileLockState  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
void FSDMGR_CloseFileLockState (
 PFILELOCKSTATE pFileLockState
);

/* FSDMGR_OpenFileLockState  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
void FSDMGR_OpenFileLockState (
 PFILELOCKSTATE pFileLockState
);

/* FSDMGR_RemoveFileLock  [function; ce-only; CE 5.0..699; Fsdmgr.lib] */
BOOL MyFSD_UnlockFileEx(
 PACQUIREFILELOCKSTATE pAcquireFileLockState
 PRELEASEFILELOCKSTATE pReleaseFileLockState
 DWORD dwHandle,
 DWORD dwReserved,
 DWORD nNumberOfBytesToUnlockLow,
 DWORD nNumberOfBytesToUnlockHigh,
 LPOVERLAPPED lpOverlapped
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL MyFSD_UnlockFileEx( PACQUIREFILELOCKSTATE pAcquireFileLockState PRELEASEFILELOCKSTATE pReleaseFileLockState DWORD dwHandle, DWORDdwReserved, DWORDnNumberOfBytesToUnlockLow, DWORDnNumberOfBytesToUnlockHigh, LPOVERLAPPEDlpOverlapped );

#endif /* _LOCKMGRHELP_ */
