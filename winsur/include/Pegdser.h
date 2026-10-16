/* Pegdser.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _PEGDSER_
#define _PEGDSER_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SERIAL_DEV_STATUS  [struct; ce-only; CE 5.0..699] */
typedef struct _SERIAL_DEV_STATUS {
 DWORD Errors;
 COMSTAT ComStat;
} SERIAL_DEV_STATUS, *PSERIAL_DEV_STATUS;

/* SERIAL_QUEUE_SIZES  [struct; ce-only; CE 5.0..699] */
typedef struct _SERIAL_QUEUE_SIZES {
 DWORD cbInQueue;
 DWORD cbOutQueue;
} SERIAL_QUEUE_SIZES, *PSERIAL_QUEUE_SIZES;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _SERIAL_DEV_STATUS { DWORD Errors; COMSTAT ComStat;} SERIAL_DEV_STATUS, *PSERIAL_DEV_STATUS;
typedef struct _SERIAL_QUEUE_SIZES { DWORD cbInQueue; DWORD cbOutQueue;} SERIAL_QUEUE_SIZES, *PSERIAL_QUEUE_SIZES;

#endif /* _PEGDSER_ */
