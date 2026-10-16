/* Lap.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _LAP_
#define _LAP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* InitLAP  [function, struct; ce-only; Coredll.lib, coredll.lib] */
typedef struct _InitLap {
 DWORD size;
 DWORD capabilities;
} InitLap;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CreateEnrollmentConfigDialog  [function; ce-only; CE 5.0..699; Coredll.lib] */
BOOL CreateEnrollmentConfigDialog(
 HWND hParentWindow
);

/* DeinitLAP  [function; ce-only; CE 5.0..699; Coredll.lib] */
VOID DeinitLAP();

/* LAPCreateEnrollmentConfigDialog  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL LAPCreateEnrollmentConfigDialog(
 HWND hParentWindow,
 DWORD dwOptions
);

/* VerifyUser  [function; ce-only; CE 5.0..699; Coredll.lib, coredll.lib] */
BOOL VerifyUser(
 const GUID* AEKey,
 LPCWSTR pwszAEDisplayText,
 HWND hWndParent,
 DWORD dwOptions,
 PVOID pExtended
);

/* VerifyUserStart  [function; ce-only; CE 5.0..699; Coredll.lib] */
VOID VerifyUserStart(
 const GUID* AEKey,
 LPCWSTR pwszAEDisplayText,
 HWND hWndParent,
 DWORD dwOptions,
 PVOID pExtended
);

/* VerifyUserStop  [function; ce-only; CE 5.0..699; Coredll.lib] */
VOID VerifyUserStop();

/* VerifyUserToTop  [function; ce-only; CE 5.0..699; Coredll.lib] */
VOID VerifyUserToTop();
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* LAPCancelVerifySequence  [function; ce-only; CE 6.0..699] */
BOOL LAPCancelVerifySequence()

/* LAPDisplayCodeword  [function; ce-only; CE 6.0..699] */
BOOL LAPDisplayCodeword(
 HWND hwndParent,
 LPCWSTR pwszCodeword
);

/* LAPDisplayPreWipe  [function; ce-only; CE 6.0..699] */
BOOL LAPDisplayPreWipe(
 HWND hwndParent
);

/* LAPLockoutUser  [function; ce-only; CE 6.0..699] */
BOOL LAPLockoutUser(
 HWND hwnd,
 LPCWSTR pwszAEDisplayText,
 DWORD cSecondsToLockout
);

/* LASSClose  [function; ce-only; CE 6.0..699] */
BOOL LASSClose(
 LASSHandle hLASS
);

/* LASSGetResult  [function; ce-only; CE 6.0..699] */
BOOL LASSGetResult (
 LASSHandle hLASS
);

/* LASSGetValue  [function; ce-only; CE 6.0..699] */
BOOL LASSGetValue(
 DWORD ValueId,
 PVOID pOutBuffer,
 DWORD cbOutBuffer,
 DWORD* pcbReturned
);

/* VerifyUserAsync  [function; ce-only; CE 6.0..699] */
LASSHandle VerifyUserAsync(
 const GUID *AEKey,
 LPCWSTR wszAEDisplayText,
 HWND hWndParent, 
 DWORD dwOptions,
 PVOID pExtended
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _InitLap { DWORD size; DWORD Capabilities; } InitLap;

#endif /* _LAP_ */
