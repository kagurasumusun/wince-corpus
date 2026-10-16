/* Ntddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _NTDDK_
#define _NTDDK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 212 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.12..399, 5.0..699 */

/* String  [struct, function; shared; CE 2.0..209, 2.12..399, 5.0..699; entity-headers] */
typedef struct String {
 WORD wLength;
 WORD wValueLength;
 WORD wType;
 WCHAR szKey[];
 WORD Padding[];
 WORD Value[];
} String;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* CONTAINING_RECORD  [function; shared; CE 2.0..209, 2.11..2.12, 3.0..699] */
PCHAR CONTAINING_RECORD(
 PCHAR Address,
 TYPE Type,
 PCHAR Field
);
#endif /* _WIN32_WCE */

#endif /* _NTDDK_ */
