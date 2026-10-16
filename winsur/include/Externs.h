/* Externs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 17 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _EXTERNS_
#define _EXTERNS_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* MiniportDisableInterrupt  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
VOID MiniportDisableInterrupt(
 NDIS_HANDLE MiniportAdapterContext
);

/* MiniportEnableInterrupt  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
VOID MiniportEnableInterrupt(
 NDIS_HANDLE MiniportAdapterContext
);

/* MiniportHalt  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
VOID MiniportHalt(
 NDIS_HANDLE MiniportAdapterContext
);

/* MiniportHandleInterrupt  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
VOID MiniportHandleInterrupt(
 NDIS_HANDLE MiniportAdapterContext
);

/* MiniportInitialize  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS MiniportInitialize(
 PNDIS_STATUS OpenErrorStatus,
 PUINT SelectedMediumIndex,
 PNDIS_MEDIUM MediumArray,
 UINT MediumArraySize,
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_HANDLE WrapperConfigurationContext
);

/* MiniportISR  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
VOID MiniportISR(
 PBOOLEAN InterruptRecognized,
 PBOOLEAN QueueMiniportHandleInterrupt,
 NDIS_HANDLE MiniportAdapterContext
);

/* MiniportReconfigure  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS MiniportReconfigure(
 PNDIS_STATUS OpenErrorStatus,
 NDIS_HANDLE MiniportAdapterContext,
 NDIS_HANDLE WrapperConfigurationContext
);

/* MiniportReset  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS MiniportReset(
 PBOOLEAN AddressingReset,
 NDIS_HANDLE MiniportAdapterContext
);

/* MiniportReturnPacket  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
VOID MiniportReturnPacket(
 NDIS_HANDLE MiniportAdapterContext,
 PNDIS_PACKET Packet
);

/* MiniportSend  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS MiniportSend(
 NDIS_HANDLE MiniportAdapterContext,
 PNDIS_PACKET Packet,
 UINT Flags
);

/* MiniportSetInformation  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS MiniportSetInformation(
 NDIS_HANDLE MiniportAdapterContext,
 NDIS_OID Oid,
 PVOID InformationBuffer,
 ULONG InformationBufferLength,
 PULONG BytesRead,
 PULONG BytesNeeded
);

/* MiniportTransferData  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS MiniportTransferData(
 PNDIS_PACKET Packet,
 PUINT BytesTransferred,
 NDIS_HANDLE MiniportAdapterContext,
 NDIS_HANDLE MiniportReceiveContext,
 UINT ByteOffset,
 UINT BytesToTransfer
);

/* MiniportWanSend  [function; ce-only; CE 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS MiniportWanSend(
 NDIS_HANDLE MiniportAdapterContext,
 NDIS_HANDLE NdisLinkHandle,
 PNDIS_WAN_PACKET WanPacket
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* MiniportCancelSendPackets  [function; ce-only; CE 5.0..699] */
VOID MiniportCancelSendPackets(
 NDIS_HANDLE MiniportAdapterContext,
 ULONG_PTR CancelId
);

/* MiniportSendPackets  [function; ce-only; CE 5.0..699] */
VOID MiniportSendPackets(
 NDIS_HANDLE MiniportAdapterContext,
 PPNDIS_PACKET PacketArray,
 UINT NumberOfPackets
);

/* MiniportShutdown  [function; ce-only; CE 5.0..699] */
VOID MiniportShutdown(
 PVOID ShutdownContext
);

/* MiniportTimer  [function; ce-only; CE 5.0..699] */
VOID MiniportTimer(
 PVOID SystemSpecific1,
 PVOID FunctionContext,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3
);
#endif /* _WIN32_WCE */

#endif /* _EXTERNS_ */
