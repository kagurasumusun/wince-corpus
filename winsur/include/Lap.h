/* Lap.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _LAP_
#define _LAP_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* InitLAP  [function, struct; ce-only; Coredll.lib, coredll.lib] */
#ifndef __WINCE_DEFINED__INITLAP
#define __WINCE_DEFINED__INITLAP
#ifndef __WINCE_DEFINED_INITLAP
#define __WINCE_DEFINED_INITLAP
typedef struct _InitLap {
 DWORD size;
 DWORD capabilities;
} InitLap;
#endif /* __WINCE_DEFINED_INITLAP */
#endif /* __WINCE_DEFINED__INITLAP */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* CreateEnrollmentConfigDialog  [function; ce-only; CE 5.0..699; Coredll.lib] */
BOOL CreateEnrollmentConfigDialog(HWND hParentWindow);

/* DeinitLAP  [function; ce-only; CE 5.0..699; Coredll.lib] */
VOID DeinitLAP();

/* VerifyUserStop  [function; ce-only; CE 5.0..699; Coredll.lib] */
VOID VerifyUserStop();

/* VerifyUserToTop  [function; ce-only; CE 5.0..699; Coredll.lib] */
VOID VerifyUserToTop();
#endif /* _WIN32_WCE */

#endif /* _LAP_ */
