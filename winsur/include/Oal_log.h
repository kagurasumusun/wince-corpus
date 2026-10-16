/* Oal_log.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 7 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OAL_LOG_
#define _OAL_LOG_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALLED  [macro; ce-only; CE 5.0..699] */

/* OALLog  [macro; ce-only; CE 5.0..699] */

/* OALLogV  [macro; ce-only; CE 5.0..699] */

/* OALMASK  [macro; ce-only; CE 5.0..699] */

/* OALMSG  [macro; ce-only; CE 5.0..699] */

/* OALMSGS  [macro; ce-only; CE 5.0..699] */

/* OALZONE  [macro; ce-only; CE 5.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALLogPrintf  [function; ce-only; CE 5.0..699] */
void OALLogPrintf(
 LPWSTR buffer,
 UINT32 maxChars,
 LPCWSTR format,
 ...
);

/* OALLogSerial  [function; ce-only; CE 5.0..699] */
void OALLogSerial(
 LPCWSTR format,
 ...
);

/* OALLogSetZones  [function; ce-only; CE 5.0..699] */
void OALLogSetZones(
 UINT32 zones
);
#endif /* _WIN32_WCE */

#endif /* _OAL_LOG_ */
