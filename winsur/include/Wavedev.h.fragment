/* Wavedev.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _WAVEDEV_
#define _WAVEDEV_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699 */

/* ACMDRV_MESSAGE_PARAMS  [struct; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct { 
 DWORD dwDeviceID;
 HANDLE hDriver;
 UINT uMsg;
 LPARAM lParam1;
 LPARAM lParam2;
} ACMDRV_MESSAGE_PARAMS;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* MMDRV_MESSAGE_PARAMS  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct {
 UINT uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD dwParam1;
 DWORD dwParam2;
} MMDRV_MESSAGE_PARAMS;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct {
  DWORD dwDriverID;
  HANDLE hDriver;
  UINT uMsg;
  LPARAM lParam1;
  LPARAM lParam2;
} CMDRV_MESSAGE_PARAMS;

#endif /* _WAVEDEV_ */
