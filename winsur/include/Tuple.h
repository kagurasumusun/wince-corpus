/* Tuple.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _TUPLE_
#define _TUPLE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..209, 2.11..2.12, 3.0..699 */

/* PARSED_CONFIG  [struct; ce-only; CE 1.0..209, 2.11..2.12, 3.0..699] */
typedef struct {-

/* POWER_DESCR  [struct; ce-only; CE 1.0..209, 2.11..2.12, 3.0..699] */
typedef struct {-
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* PARSED_CFTABLE  [struct; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699] */
typedef struct { 
 POWER_DESCR VccDescr;
 POWER_DESCR Vpp1Descr;
 POWER_DESCR Vpp2Descr;
 UINT32 IOLength[MAX_IO_RANGES];
 UINT32 IOBase[MAX_IO_RANGES];
 UINT8 NumIOEntries;
 UINT8 ConfigIndex;
 UINT8 ContainsDefaults;
 UINT8 IFacePresent;
 UINT8 IFaceType;
 UINT8 BVDActive;
 UINT8 WPActive;
 UINT8 ReadyActive;
 UINT8 WaitRequired;
 UINT8 IOAccess;
 UINT8 NumIOAddrLines;
} PARSED_CFTABLE;
#endif /* _WIN32_WCE */

#endif /* _TUPLE_ */
