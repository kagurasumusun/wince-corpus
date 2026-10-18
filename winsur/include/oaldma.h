/* oaldma.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 4 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _OALDMA_
#define _OALDMA_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CE_DMA_BUFFER_BLOCK  [struct; ce-only] */
#ifndef __WINCE_DEFINED__CE_DMA_BUFFER_BLOCK
#define __WINCE_DEFINED__CE_DMA_BUFFER_BLOCK
#ifndef __WINCE_DEFINED_CE_DMA_BUFFER_BLOCK
#define __WINCE_DEFINED_CE_DMA_BUFFER_BLOCK
typedef struct _CE_DMA_BUFFER_BLOCK {
 DWORD dwLength;
 PVOID virtualAddress;
 PHYSICAL_ADDRESS physicalAddress;
} CE_DMA_BUFFER_BLOCK, *PCE_DMA_BUFFER_BLOCK;
#endif /* __WINCE_DEFINED_CE_DMA_BUFFER_BLOCK */
#endif /* __WINCE_DEFINED__CE_DMA_BUFFER_BLOCK */

/* DMA_STATUS_CODE  [enum; ce-only] */
#ifndef __WINCE_DEFINED__DMA_STATUS
#define __WINCE_DEFINED__DMA_STATUS
#ifndef __WINCE_DEFINED_DMA_STATUS_CODE
#define __WINCE_DEFINED_DMA_STATUS_CODE
typedef enum _DMA_STATUS {
 DMA_TRANSFER_COMPLETE = 0,
 DMA_TRANSFER_IN_PROGRESS,
 DMA_TRANSFER_IN_QUEUE,
 DMA_TRANSFER_COMPLETE_WITH_ERROR,
 DMA_TRANSFER_COMPLETE_WITH_CANCELED
} DMA_STATUS_CODE, *PDMA_STATUS_CODE;
#endif /* __WINCE_DEFINED_DMA_STATUS_CODE */
#endif /* __WINCE_DEFINED__DMA_STATUS */

#endif /* _OALDMA_ */
