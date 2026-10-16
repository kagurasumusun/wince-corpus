/* oaldma.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 2 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _OALDMA_
#define _OALDMA_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CE_DMA_ADAPTER  [struct; ce-only] */

/* DEVICE_DMA_REQUIREMENT_INFO  [struct; ce-only] */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* DMACancelTransfer  [function; ce-only; CE 6.0..699; CEDDK.lib] */
BOOL DMACancelTransfer(
 DMACancelTransfer DmaTransferHandle
);
#endif /* _WIN32_WCE */

#endif /* _OALDMA_ */
