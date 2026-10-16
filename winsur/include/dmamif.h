/* dmamif.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 24 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _DMAMIF_
#define _DMAMIF_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DMA_MDD_CHANNEL_CONTEXT {
  CE_DMA_ADAPTER m_DmaAdapterInfo;
  ULONG m_ulAddressSpace;
  PHYSICAL_ADDRESS m_phDeviceIoAddress;
  DWORD m_dwChannelIndex;
  LPTransferCompleteNotify m_lpTransferCompleteNotify;
}DMA_MDD_CHANNEL_CONTEXT, *PDMA_MDD_CHANNEL_CONTEXT;
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
typedef struct _DMA_PDD_ADAPTER_CONTEXT {
  DWORD dwAdapterIndex;
  DWORD dwNumOfChannel;
  DWORD dwNumOfHardwareMappingRegister;
  DWORD dwMaximumSizeOfEachRegister;
  DWORD dwMaximumAddressBoundary;
  DWORD dwAddressAlignment;
  DWORD dwDmaSystemMemoryRangeStart;
  DWORD dwDmaSystemMemoryRangeLength;
  LPGetDmaAdapter lpGetDmaAdapter;
  LPAllocateChannel lpAllocateChannel;
  LPFreeDmaChannel lpFreeDmaChannel;
  LPPowerMgmtCallback lpPowerMgmtCallback;
  LPOALAllocateCommonBuffer lpOALAllocateCommonBuffer;
  LPOALFreeCommoneBuffer lpOALFreeCommonBuffer;
  LPPowerOnReset lpPowerOnReset;
  LPIsChannelSuitable lpIsChannelSuitable;
  LPUpdateFlags lpUpdateFlags;
  LPIsPhysAddrSupported lpIsPhysAddrSupported;
}DMA_PDD_ADAPTER_CONTEXT, *PDMA_PDD_ADAPTER_CONTEXT;
typedef struct _DMA_PDD_CHANNEL_CONTEXT {
  LPCanArmDma lpCanArmDma;
  LPArmTransfer lpArmTransfer;
  LPTerminateTransfer lpTerminateTransfer;
  LPStartDmaTransfer lpStartDmaTransfer;
  LPPollingForTransferDone lpPollingForTransferDone;
  LPPollingTransferRemaining lpPollingTransferRemaining;
  LPCreateDmaPDDTransfer lpCreateDmaPDDTransfer;
  LPCreateRawDmaPDDTransfer lpCreateRawDmaPDDTransfer;
  LPFreeDmaTransfer lpFreeDmaTransfer;
}DMA_PDD_CHANNEL_CONTEXT, *PDMA_PDD_CHANNEL_CONTEXT;
typedef struct _DMA_PDD_TRANFER_CONTEXT { LPDMAPDDTransferIoControl lpDMAPDDTransferIoControl; }DMA_PDD_TRANFER_CONTEXT, *PDMA_PDD_TRANFER_CONTEXT;

#endif /* _DMAMIF_ */
