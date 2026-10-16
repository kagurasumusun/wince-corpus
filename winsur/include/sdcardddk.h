/* sdcardddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 44 declarations, 2 outlines, 0 base types, 0 extra macros, 13 extra decls
 */
#ifndef _SDCARDDDK_
#define _SDCARDDDK_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SD_COMMAND_RESPONSE  [struct; ce-only] */

/* SDCARD_CLIENT_REGISTRATION_INFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* SDOutputBuffer  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
VOID SDOutputBuffer(
 PVOID pBuffer,
 ULONG BufferSize
);

/* SDPerformSafeCopy  [function; ce-only; CE 5.0..699; Sdcardlib.lib, sdcardlib.lib] */
BOOLEAN SDPerformSafeCopy(
 PVOID pDestination,
 PVOID pSource, 
 ULONG Length
);
#endif /* _WIN32_WCE */

#endif /* _SDCARDDDK_ */
