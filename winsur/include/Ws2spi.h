/* Ws2spi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 57 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _WS2SPI_
#define _WS2SPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define WSPAPI WSAAPI
#define WSPDESCRIPTION_LEN 255

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* NSPLookupServiceEnd  [function; ce-only; CE 5.0..699; Ws2.lib] */
int NSPLookupServiceEnd(
 HANDLE hLookup
);
#endif /* _WIN32_WCE */

#endif /* _WS2SPI_ */
