/* Oal_ilt.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_ILT_
#define _OAL_ILT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OAL_ILT_STATE  [struct; ce-only; CE 5.0..699] */
typedef struct {
 BOOL active;
 UINT16 interrupts;
 UINT32 isrTime1;
 UINT32 isrTime2;
 UINT32 savedPC;
 UINT32 counter;
 UINT32 counterSet;
} OAL_ILT_STATE, *POAL_ILT_STATE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALIoCtlHalILTiming  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalILTiming(
 UINT32 dwIoControlCode,
 VOID *lpInBuf,
 UINT32 nInBufsize,
 VOID *lpOutBuf,
 UINT32 nOutBufSize,
 UINT32 *lpBytesReturned
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct { BOOL active; UINT16 interrupts; UINT32 isrTime1; UINT32 isrTime2; UINT32 savedPC; UINT32 counter; UINT32 counterSet;} OAL_ILT_STATE, *POAL_ILT_STATE;

#endif /* _OAL_ILT_ */
