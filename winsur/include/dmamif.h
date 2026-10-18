/* dmamif.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 4 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _DMAMIF_
#define _DMAMIF_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DMA_MDD_CHANNEL_CONTEXT  [struct; ce-only] */

/* DMA_PDD_ADAPTER_CONTEXT  [struct; ce-only] */

/* DMA_PDD_CHANNEL_CONTEXT  [struct; ce-only] */

/* DMA_PDD_TRANFER_CONTEXT  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DMA_MDD_TRANFER_CONTEXT  [struct; ce-only] */
#ifndef __WINCE_DEFINED__DMA_MDD_TRANFER_CONTEXT
#define __WINCE_DEFINED__DMA_MDD_TRANFER_CONTEXT
#ifndef __WINCE_DEFINED_DMA_MDD_TRANFER_CONTEXT
#define __WINCE_DEFINED_DMA_MDD_TRANFER_CONTEXT
typedef struct _DMA_MDD_TRANFER_CONTEXT {
 DWORD m_dwFlags;
 PVOID m_pUserBufferPtr;
 DWORD m_dwUserBufferLength;
 PHYSICAL_ADDRESS m_UserBufferPhAddr;
 PHYSICAL_ADDRESS m_OptionalDeviceAddr;
 BOOL m_fRawTransfer;
 PVOID m_lpInPtr;
 DWORD m_nInLen;
}DMA_MDD_TRANFER_CONTEXT, *PDMA_MDD_TRANFER_CONTEXT;
#endif /* __WINCE_DEFINED_DMA_MDD_TRANFER_CONTEXT */
#endif /* __WINCE_DEFINED__DMA_MDD_TRANFER_CONTEXT */

#endif /* _DMAMIF_ */
