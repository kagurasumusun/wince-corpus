/* Storemgr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 23 declarations, 3 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _STOREMGR_
#define _STOREMGR_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CE_VOLUME_INFO  [struct; ce-only] */

/* PARTINFO  [struct; ce-only] */

/* STORAGEDEVICEINFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* OpenStore  [function; ce-only; CE 5.0..699; Storeapi.lib] */
HANDLE OpenStore(
 LPCSTR szDeviceName
);
#endif /* _WIN32_WCE */

#endif /* _STOREMGR_ */
