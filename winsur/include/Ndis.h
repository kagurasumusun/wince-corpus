/* Ndis.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 9 constants, 321 declarations, 4 outlines, 0 base types, 2 extra macros, 43 extra decls
 */
#ifndef _NDIS_
#define _NDIS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define Ndis802_11RadioPowerState_Off 0
#define Ndis802_11RadioPowerState_On 1
#define NDIS_802_11_AUTH_REQUEST_GROUP_ERROR 0x0E
#define NDIS_802_11_AUTH_REQUEST_KEYUPDATE 0x02
#define NDIS_802_11_AUTH_REQUEST_PAIRWISE_ERROR 0x06
#define NDIS_802_11_AUTH_REQUEST_REAUTH 0x01
#define NDIS_802_11_PMKID_CANDIDATE_PREAUTH_ENABLED 0x01
#define NDIS_ERROR_CODE ULONG
#define NdisRingStateOpened 1

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define NDIS_INIT_FUNCTION(_F) message("NDIS_INIT_FUNCTION Ignored")
#define NDIS_SET_ORIGINAL_PACKET(_P, _OP) NDIS_PER_PACKET_INFO_FROM_PACKET(_P, OriginalPacketInfo) = _OP

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699 */

/* NDIS_BUFFER_TO_SPAN_PAGES  [function, macro; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699] */
ULONG NDIS_BUFFER_TO_SPAN_PAGES( 
IN PNDIS_BUFFER Buffer );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* ETH_COPY_NETWORK_ADDRESS  [function, macro; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699] */
#define ETH_COPY_NETWORK_ADDRESS(_D, _S) \
{ \
 *((ULONG UNALIGNED *)(_D)) = *((ULONG UNALIGNED *)(_S)); \
 *((USHORT UNALIGNED *)((UCHAR *)(_D)+4)) = *((USHORT UNALIGNED *)((UCHAR *)(_S)+4)); \
}

/* NDIS_PHYSICAL_ADDRESS_CONST  [function, macro; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699] */
VOID NDIS_PHYSICAL_ADDRESS_CONST( 
IN ULONG Low, 
IN LONG High );

/* NDIS_SET_PACKET_HEADER_SIZE  [function, macro; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699] */
NDIS_SET_PACKET_HEADER_SIZE( 
IN PNDIS_PACKET Packet, 
IN UINT HdrSize );

/* NDIS_SET_PACKET_MEDIA_SPECIFIC_INFO  [function, macro; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699] */
NDIS_SET_PACKET_MEDIA_SPECIFIC_INFO( 
IN PNDIS_PACKET Packet, 
IN PVOID MediaSpecificInfo, 
IN UINT SizeMediaSpecificInfo );

/* XXX_Init  [function, macro; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndislib.lib] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* NDIS_PACKET_OOB_DATA  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* NDIS_SET_PACKET_CANCEL_ID  [macro, function; ce-only; CE 4.0..699] */
ULONG_PTR NDIS_SET_PACKET_CANCEL_ID(
 PNDIS_PACKET _P,
 ULONG_PTR _cId
);

/* NDIS_TASK_TCP_LARGE_SEND  [struct; ce-only; CE 4.0..699] */

/* NDIS_WORK_ITEM  [struct; ce-only; CE 4.0..699] */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NDIS_GET_ORIGINAL_PACKET  [macro, function; ce-only; CE 5.0..699] */
PNDIS_PACKET NDIS_GET_ORIGINAL_PACKET(
 PNDIS_PACKET _P
);

/* NDIS_GET_PACKET_CANCEL_ID  [macro, function; ce-only; CE 5.0..699] */
PVOID NDIS_GET_PACKET_CANCEL_ID(
 PNDIS_PACKET _P
);

/* NDIS_GET_PACKET_HEADER_SIZE  [macro, function; ce-only; CE 5.0..699] */
#define NDIS_GET_PACKET_HEADER_SIZE(_Packet) \
((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
(_Packet)->Private.NdisPacketOobOffset))->HeaderSize

/* NDIS_GET_PACKET_MEDIA_SPECIFIC_INFO  [macro, function; ce-only; CE 5.0..699] */
#define NDIS_GET_PACKET_MEDIA_SPECIFIC_INFO(_Packet, \
 _pMediaSpecificInfo, \
 _pSizeMediaSpecificInfo) \
{ \
 if (!((_Packet)->Private.NdisPacketFlags & fPACKET_ALLOCATED_BY_NDIS) ||\
 !((_Packet)->Private.NdisPacketFlags & fPACKET_CONTAINS_MEDIA_SPECIFIC_INFO))\
 { \
 *(_pMediaSpecificInfo) = NULL; \
 *(_pSizeMediaSpecificInfo) = 0; \
 } \
 else \
 { \
 *(_pMediaSpecificInfo) =((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +\
 (_Packet)->Private.NdisPacketOobOffset))->MediaSpecificInformation;\
 *(_pSizeMediaSpecificInfo) = ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) +\
 (_Packet)->Private.NdisPacketOobOffset))->SizeMediaSpecificInfo;\
 } \
}

/* NDIS_GET_PACKET_STATUS  [macro, function; ce-only; CE 5.0..699] */
#define NDIS_GET_PACKET_STATUS(_Packet) \
 ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
 (_Packet)->Private.NdisPacketOobOffset))->Status

/* NDIS_GET_PACKET_TIME_RECEIVED  [macro, function; ce-only; CE 5.0..699] */
#define NDIS_GET_PACKET_TIME_RECEIVED(_Packet) \
 ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
 (_Packet)->Private.NdisPacketOobOffset))->TimeReceived

/* NDIS_GET_PACKET_TIME_TO_SEND  [function, macro; ce-only; CE 5.0..699] */
#define NDIS_GET_PACKET_TIME_SENT(_Packet) \
 ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
 (_Packet)->Private.NdisPacketOobOffset))->TimeSent

/* NDIS_OOB_DATA_FROM_PACKET  [macro, function; ce-only; CE 5.0..699] */
PNDIS_PACKET_OOB_DATA NDIS_OOB_DATA_FROM_PACKET(
 PNDIS_PACKET _P
);

/* NDIS_PACKET_EXTENSION_FROM_PACKET  [macro, function; ce-only; CE 5.0..699] */
PNDIS_PACKET_EXTENSION NDIS_PACKET_EXTENSION_FROM_PACKET(
 PNDIS_PACKET _P
);

/* TR_COMPARE_NETWORK_ADDRESSES  [macro, function; ce-only; CE 5.0..699] */
#define TR_COMPARE_NETWORK_ADDRESSES(_A, _B, _Result) \
{ \
 if (*(ULONG UNALIGNED *)&(_A)[2] > \
 *(ULONG UNALIGNED *)&(_B)[2]) \
 { \
 *(_Result) = 1; \
 } \
 else if (*(ULONG UNALIGNED *)&(_A)[2] < \
 *(ULONG UNALIGNED *)&(_B)[2]) \
 { \
 *(_Result) = (UINT)-1; \
 } \
 else if (*(USHORT UNALIGNED *)(_A) > \
 *(USHORT UNALIGNED *)(_B)) \
 { \
 *(_Result) = 1; \
 } \
 else if (*(USHORT UNALIGNED *)(_A) < \
 *(USHORT UNALIGNED *)(_B)) \
 { \
 *(_Result) = (UINT)-1; \
 } \
 else \
 { \
 *(_Result) = 0; \
 } \
}

/* TR_COPY_NETWORK_ADDRESS  [macro, function; ce-only; CE 5.0..699] */
VOID TR_COPY_NETWORK_ADDRESS(
 PCHAR _D,
 PCHAR _S
);

/* TR_IS_BROADCAST  [macro, function; ce-only; CE 5.0..699] */
VOID TR_IS_BROADCAST(
 PUCHAR _Address,
 PBOOLEAN _Result
);

/* TR_IS_FUNCTIONAL  [macro, function; ce-only; CE 5.0..699] */
VOID TR_IS_FUNCTIONAL(
 PUCHAR _Address,
 PBOOLEAN _Result
);

/* TR_IS_GROUP  [macro, function; ce-only; CE 5.0..699] */
VOID TR_IS_GROUP(
 PUCHAR _Address,
 PBOOLEAN _Result
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* NDIS_PACKET  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _NDIS_PACKET {
 NDIS_PACKET_PRIVATE Private;
 union {
 struct {
 UCHAR MiniportReserved[2*sizeof(PVOID)];
 UCHAR WrapperReserved[2*sizeof(PVOID)];
 };
 struct {
 UCHAR MiniportReservedEx[3*sizeof(PVOID)];
 UCHAR WrapperReservedEx[sizeof(PVOID)];
 };
 struct {
 UCHAR MacReserved[4*sizeof(PVOID)];
 };
 };
 ULONG_PTR Reserved[2];
 UCHAR ProtocolReserved[1];
} NDIS_PACKET, *PNDIS_PACKET, **PPNDIS_PACKET;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* MediaSpecificInformation  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct MediaSpecificInformation {
 UINT NextEntryOffset;
 NDIS_CLASS_ID ClassId;
 UINT Size;
 UCHAR ClassInformation[1];
} MEDIA_SPECIFIC_INFORMATION;

/* NDIS_PROTOCOL_CHARACTERISTICS  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct _NDIS_PROTOCOL_CHARACTERISTICS {
 UCHAR MajorNdisVersion;
 UCHAR MinorNdisVersion;
 UINT Reserved;
 OPEN_ADAPTER_COMPLETE_HANDLER OpenAdapterCompleteHandler;
 CLOSE_ADAPTER_COMPLETE_HANDLER CloseAdapterCompleteHandler;
 SEND_COMPLETE_HANDLER SendCompleteHandler;
 TRANSFER_DATA_COMPLETE_HANDLER TransferDataCompleteHandler;
 RESET_COMPLETE_HANDLER ResetCompleteHandler;
 REQUEST_COMPLETE_HANDLER RequestCompleteHandler;
 RECEIVE_HANDLER ReceiveHandler;
 RECEIVE_COMPLETE_HANDLER ReceiveCompleteHandler;
 STATUS_HANDLER StatusHandler;
 STATUS_COMPLETE_HANDLER StatusCompleteHandler;
 NDIS_STRING Name;
 RECEIVE_PACKET_HANDLER ReceivePacketHandler;
 BIND_HANDLER BindAdapterHandler;
 UNBIND_HANDLER UnbindAdapterHandler;
 TRANSLATE_HANDLER TranslateHandler;
 UNLOAD_PROTOCOL_HANDLER UnloadHandler;
} NDIS_PROTOCOL_CHARACTERISTICS, *PNDIS_PROTOCOL_CHARACTERISTICS

/* NDIS_REQUEST  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct _ NDIS_REQUEST {
 UCHAR MacReserved[16];
 NDIS_REQUEST_TYPE RequestType;
 union _DATA {
 struct QUERY_INFORMATION {
 NDIS_OID Oid;
 PVOID InformationBuffer;
 UINT InformationBufferLength;
 UINT BytesWritten;
 UINT BytesNeeded;
 } QUERY_INFORMATION;
 struct SET_INFORMATION {
 NDIS_OID Oid;
 PVOID InformationBuffer;
 UINT InformationBufferLength;
 UINT BytesRead;
 UINT BytesNeeded;
 } SET_INFORMATION;
 } DATA;
} NDIS_REQUEST, *PNDIS_REQUEST;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* NDIS_BUFFER  [typedef; ce-only; CE 4.0..699] */
typedef 
MDL NDIS_BUFFER, *PNDIS_BUFFER;

/* NDIS_ENCAPSULATION_FORMAT  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_ENCAPSULATION_FORMAT {
 NDIS_ENCAPSULATION Encapsulation;
 struct {
 ULONG FixedHeaderSize:1;
 ULONG Reserved:31;
 } Flags;
 ULONG EncapsulationHeaderSize;
} NDIS_ENCAPSULATION_FORMAT,*PNDIS_ENCAPSULATION_FORMAT;

/* NDIS_HANDLE  [typedef; ce-only; CE 4.0..699] */
typedef 
PVOID NDIS_HANDLE,
*PNDIS_HANDLE;

/* NDIS_INTERFACE_TYPE  [enum; ce-only; CE 4.0..699] */
typedef enum _NDIS_INTERFACE_TYPE {
 NdisInterfaceInternal = Internal,
 NdisInterfaceIsa = Isa,
 NdisInterfaceEisa = Eisa,
 NdisInterfaceMca = MicroChannel,
 NdisInterfaceTurboChannel = TurboChannel,
 NdisInterfacePci = PCIBus,
 NdisInterfacePcMcia = PCMCIABus,
 NdisInterfaceCBus = CBus,
 NdisInterfaceMPIBus = MPIBus,
 NdisInterfaceMPSABus = MPSABus,
 NdisInterfaceProcessorInternal = ProcessorInternal,
 NdisInterfaceInternalPowerBus = InternalPowerBus,
 NdisInterfacePNPISABus = PNPISABus,
 NdisInterfacePNPBus = PNPBus,
 NdisMaximumInterfaceType,
} NDIS_INTERFACE_TYPE, *PNDIS_INTERFACE_TYPE;

/* NDIS_INTERRUPT_MODE  [typedef; ce-only; CE 4.0..699] */
typedef 
KINTERRUPT_MODE NDIS_INTERRUPT_MODE, 
*PNDIS_INTERRUPT_MODE;

/* NDIS_MAC_FRAGMENT  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_MAC_FRAGMENT {
 NDIS_HANDLE 
 NdisLinkContext
 ;
 ULONG
 Errors
 ;
 } NDIS_MAC_FRAGMENT, *PNDIS_MAC_FRAGMENT;

/* NDIS_MINIPORT_CHARACTERISTICS  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_MINIPORT_CHARACTERISTICS {
 UCHAR MajorNdisVersion;
 UCHAR MinorNdisVersion;
 UINT Reserved;
 W_CHECK_FOR_HANG_HANDLER CheckForHangHandler;
 W_DISABLE_INTERRUPT_HANDLER DisableInterruptHandler;
 W_ENABLE_INTERRUPT_HANDLER EnableInterruptHandler;
 W_HALT_HANDLER HaltHandler;
 W_HANDLE_INTERRUPT_HANDLER HandleInterruptHandler;
 W_INITIALIZE_HANDLER InitializeHandler;
 W_ISR_HANDLER ISRHandler;
 W_QUERY_INFORMATION_HANDLER QueryInformationHandler;
 W_RECONFIGURE_HANDLER ReconfigureHandler;
 W_RESET_HANDLER ResetHandler;
 W_SEND_HANDLER SendHandler;
 W_SET_INFORMATION_HANDLER SetInformationHandler;
 W_TRANSFER_DATA_HANDLER TransferDataHandler;
 W_RETURN_PACKET_HANDLER ReturnPacketHandler;
 W_SEND_PACKETS_HANDLER SendPacketsHandler;
 W_ALLOCATE_COMPLETE_HANDLER AllocateCompleteHandler;
 W_CANCEL_SEND_PACKETS_HANDLER CancelSendPacketsHandler;
 W_MINIPORT_SHUTDOWN_HANDLER AdapterShutdownHandler;
} NDIS_MINIPORT_CHARACTERISTICS, *PNDIS_MINIPORT_CHARACTERISTICS;

/* NDIS_OID  [typedef; ce-only; CE 4.0..699] */
typedef 
ULONG NDIS_OID, 
*PNDIS_OID;

/* NDIS_PACKET_STACK  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_PACKET_STACK {
 ULONG_PTR IMReserved[2];
 ULONG_PTR NdisReserved[4];
} NDIS_PACKET_STACK, *PNDIS_PACKET_STACK;

/* NDIS_PARAMETER_TYPE  [enum; ce-only; CE 4.0..699] */
typedef enum _NDIS_PARAMETER_TYPE {
 NdisParameterInteger,
 NdisParameterHexInteger,
 NdisParameterString,
 NdisParameterMultiString,
 NdisParameterBinary,
} NDIS_PARAMETER_TYPE, *PNDIS_PARAMETER_TYPE;

/* NDIS_PHYSICAL_ADDRESS  [typedef; ce-only; CE 4.0..699] */
typedef
PHYSICAL_ADDRESS NDIS_PHYSICAL_ADDRESS, 
*PNDIS_PHYSICAL_ADDRESS;

/* NDIS_PROC  [struct; ce-only; CE 4.0..699] */
typedef
VOID (*NDIS_PROC) (
 struct _NDIS_WORK_ITEM *,
 PVOID
);

/* NDIS_STATUS  [typedef; ce-only; CE 4.0..699] */
typedef 
int NDIS_STATUS, 
*PNDIS_STATUS;

/* NDIS_STRING  [typedef; ce-only; CE 4.0..699] */
typedef 
UNICODE_STRING NDIS_STRING, 
*PNDIS_STRING;

/* NDIS_TASK_OFFLOAD_HEADER  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TASK_OFFLOAD_HEADER {
 ULONG Version;
 ULONG Size;
 ULONG Reserved;
 ULONG OffsetFirstTask;
 NDIS_ENCAPSULATION_FORMAT EncapsulationFormat;
} NDIS_TASK_OFFLOAD_HEADER, *PNDIS_TASK_OFFLOAD_HEADER;

/* NDIS_TASK_TCP_IP_CHECKSUM  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TASK_TCP_IP_CHECKSUM {
 struct {
 ULONG IpOptionsSupported;
 ULONG TcpOptionsSupported;
 ULONG TcpChecksum;
 ULONG UdpChecksum;
 ULONG IpChecksum;
 } V4Transmit;
 struct {
 ULONG IpOptionsSupported;
 ULONG TcpOptionsSupported;
 ULONG TcpChecksum;
 ULONG UdpChecksum;
 ULONG IpChecksum;
 } V4Receive;
 struct {
 ULONG IpOptionsSupported;
 ULONG TcpOptionsSupported;
 ULONG TcpChecksum;
 ULONG UdpChecksum;
 } V6Transmit;
 struct {
 ULONG IpOptionsSupported;
 ULONG TcpOptionsSupported;
 ULONG TcpChecksum;
 ULONG UdpChecksum;
 } V6Receive;
} NDIS_TASK_TCP_IP_CHECKSUM, *PNDIS_TASK_TCP_IP_CHECKSUM;

/* NDIS_TCP_IP_CHECKSUM_PACKET_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_TCP_IP_CHECKSUM_PACKET_INFO {
union {
 struct { 
 ULONG NdisPacketChecksumV4:1;
 ULONG NdisPacketChecksumV6:1;
 ULONG NdisPacketTcpChecksum:1;
 ULONG NdisPacketUdpChecksum:1;
 ULONG NdisPacketIpChecksum:1;
 } Transmit;
 struct {
 ULONG NdisPacketTcpChecksumFailed:1;
 ULONG NdisPacketUdpChecksumFailed:1;
 ULONG NdisPacketIpChecksumFailed:1;
 ULONG NdisPacketTcpChecksumSucceeded:1;
 ULONG NdisPacketUdpChecksumSucceeded:1;
 ULONG NdisPacketIpChecksumSucceeded:1;
 ULONG NdisPacketLoopback:1;
 } Receive;
 ULONG Value;
};
} NDIS_TCP_IP_CHECKSUM_PACKET_INFO, *PNDIS_TCP_IP_CHECKSUM_PACKET_INFO;

/* NDIS_WAN_COMPRESS_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_COMPRESS_INFO { 
 UCHAR SessionKey[8]; 
 ULONG MSCompType; 
 UCHAR CompType; 
 USHORT CompLength; 
 union { 
 struct { 
 UCHAR CompOUI[3]; 
 UCHAR CompSubType; 
 UCHAR CompValues[32]; 
 } Proprietary; 
 struct { 
 UCHAR CompValues[32]; 
 } Public; 
 }; 
} NDIS_WAN_COMPRESS_INFO;

/* NDIS_WAN_GET_COMP_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_GET_COMP_INFO { 
 NDIS_HANDLE NdisLinkHandle; 
 NDIS_WAN_COMPRESS_INFO SendCapabilities; 
 NDIS_WAN_COMPRESS_INFO RecvCapabilities; 
} NDIS_WAN_GET_COMP_INFO, *PNDIS_WAN_GET_COMP_INFO;

/* NDIS_WAN_GET_LINK_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_GET_LINK_INFO { 
 NDIS_HANDLE NdisLinkHandle; 
 ULONG MaxSendFrameSize; 
 ULONG MaxRecvFrameSize; 
 ULONG HeaderPadding; 
 ULONG TailPadding; 
 ULONG SendFramingBits; 
 ULONG RecvFramingBits; 
 ULONG SendCompressionBits; 
 ULONG RecvCompressionBits; 
 ULONG SendACCM; 
 ULONG RecvACCM; 
} NDIS_WAN_GET_LINK_INFO, *PNDIS_WAN_GET_LINK_INFO;

/* NDIS_WAN_GET_STATS_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_GET_STATS_INFO { 
 NDIS_HANDLE NdisLinkHandle; 
 ULONG BytesSent; 
 ULONG BytesRcvd; 
 ULONG FramesSent; 
 ULONG FramesRcvd; 
 ULONG CRCErrors; 
 ULONG TimeoutErrors; 
 ULONG AlignmentErrors; 
 ULONG SerialOverrunErrors; 
 ULONG FramingErrors; 
 ULONG BufferOverrunErrors; 
 ULONG BytesTransmittedUncompressed; 
 ULONG BytesReceivedUncompressed; 
 ULONG BytesTransmittedCompressed; 
 ULONG BytesReceivedCompressed; 
} NDIS_WAN_GET_STATS_INFO, *PNDIS_WAN_GET_STATS_INFO;

/* NDIS_WAN_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_INFO {
 ULONG MaxFrameSize; 
 ULONG MaxTransmit; 
 ULONG HeaderPadding; 
 ULONG TailPadding; 
 ULONG Endpoints; 
 UINT MemoryFlags; 
 NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress; 
 ULONG FramingBits; 
 ULONG DesiredACCM; 
} NDIS_WAN_INFO, *PNDIS_WAN_INFO;

/* NDIS_WAN_LINE_DOWN  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_LINE_DOWN {
 UCHAR RemoteAddress[6];
 UCHAR LocalAddress[6];
} NDIS_WAN_LINE_DOWN, *PNDIS_WAN_LINE_DOWN;

/* NDIS_WAN_LINE_UP  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_LINE_UP {
 ULONG LinkSpeed;
 ULONG MaximumTotalSize;
 NDIS_WAN_QUALITY Quality;
 USHORT SendWindow;
 UCHAR RemoteAddress[6];
 UCHAR LocalAddress[6];
 ULONG ProtocolBufferLength;
 PUCHAR ProtocolBuffer;
 USHORT ProtocolType;
 NDIS_STRING DeviceName;
} NDIS_WAN_LINE_UP, *PNDIS_WAN_LINE_UP;

/* NDIS_WAN_PACKET  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_PACKET {
 LIST_ENTRY WanPacketQueue;
 PUCHAR CurrentBuffer;
 ULONG CurrentLength;
 PUCHAR StartBuffer;
 PUCHAR EndBuffer;
 PVOID ProtocolReserved1;
 PVOID ProtocolReserved2;
 PVOID ProtocolReserved3;
 PVOID ProtocolReserved4;
 PVOID MacReserved1;
 PVOID MacReserved2;
 PVOID MacReserved3;
 PVOID MacReserved4;
} NDIS_WAN_PACKET, *PNDIS_WAN_PACKET;

/* NDIS_WAN_SET_COMP_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_SET_COMP_INFO { 
 NDIS_HANDLE NdisLinkHandle; 
 NDIS_WAN_COMPRESS_INFO SendCapabilities; 
 NDIS_WAN_COMPRESS_INFO RecvCapabilities; 
} NDIS_WAN_SET_COMP_INFO, *PNDIS_WAN_SET_COMP_INFO;

/* NDIS_WAN_SET_LINK_INFO  [struct; ce-only; CE 4.0..699] */
typedef struct _NDIS_WAN_SET_LINK_INFO { 
 NDIS_HANDLE NdisLinkHandle; 
 ULONG MaxSendFrameSize; 
 ULONG MaxRecvFrameSize; 
 ULONG HeaderPadding; 
 ULONG TailPadding; 
 ULONG SendFramingBits; 
 ULONG RecvFramingBits; 
 ULONG SendCompressionBits; 
 ULONG RecvCompressionBits; 
 ULONG SendACCM; 
 ULONG RecvACCM; 
} NDIS_WAN_SET_LINK_INFO, *PNDIS_WAN_SET_LINK_INFO;

/* NDIS_WLAN_BSSID  [struct; ce-only; CE 4.0..699] */
struct _NDIS_WLAN_BSSID {
 ULONG Length;
 NDIS_802_11_MAC_ADDRESS MacAddress;
 Uchar Reserved[2];
 NDIS_802_11_SSID Ssid;
 ULONG Privacy;
 NDIS_802_11_RSSI Rssi;
 NDIS_802_11_NETWORK_TYPE NetworkTypeInUse;
 NDIS_802_11_CONFIGURATION Configuration;
 NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode;
 NDIS_802_11_RATES SupportedRates;
} NDIS_WLAN_BSSID, *PNDIS_WLAN_BSSID;

/* NETWORK_ADDRESS  [struct; ce-only; CE 4.0..699] */
typedef struct _NETWORK_ADDRESS {
 USHORT AddressLength; 
 USHORT AddressType; 
 UCHAR Address[1]; 
} NETWORK_ADDRESS, *PNETWORK_ADDRESS;

/* NETWORK_ADDRESS_LIST  [struct; ce-only; CE 4.0..699] */
typedef struct _NETWORK_ADDRESS_LIST {
 LONG AddressCount; 
 USHORT AddressType; 
 NETWORK_ADDRESS Address[1]; 
} NETWORK_ADDRESS_LIST, *PNETWORK_ADDRESS_LIST;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NDIS_CONFIGURATION_PARAMETER  [struct; ce-only; CE 5.0..699] */
typedef struct _NDIS_CONFIGURATION_PARAMETER {
 NDIS_PARAMETER_TYPE ParameterType;
 union {
 ULONG IntegerData;
 NDIS_STRING StringData;
 BINARY_DATA BinaryData;
 } ParameterData;
} NDIS_CONFIGURATION_PARAMETER, *PNDIS_CONFIGURATION_PARAMETER;

/* NDIS_MAC_LINE_DOWN  [struct; ce-only; CE 5.0..699] */
typedef struct _NDIS_MAC_LINE_DOWN {
 NDIS_HANDLE NdisLinkContext;
} NDIS_MAC_LINE_DOWN, *PNDIS_MAC_LINE_DOWN;

/* NDIS_MAC_LINE_UP  [struct; ce-only; CE 5.0..699] */
typedef struct _NDIS_MAC_LINE_UP {
 ULONG LinkSpeed;
 NDIS_WAN_QUALITY Quality;
 USHORT SendWindow;
 NDIS_HANDLE ConnectionWrapperID;
 NDIS_HANDLE NdisLinkHandle;
 NDIS_HANDLE NdisLinkContext;
} NDIS_MAC_LINE_UP, *PNDIS_MAC_LINE_UP;

/* NDIS_PACKET_EXTENSION  [struct; ce-only; CE 5.0..699] */
typedef struct _NDIS_PACKET_EXTENSION {
 PVOID NdisPacketInfo[MaxPerPacketInfo];
} NDIS_PACKET_EXTENSION, *PNDIS_PACKET_EXTENSION;

/* NDIS_TASK_OFFLOAD  [struct; ce-only; CE 5.0..699] */
typedef struct _NDIS_TASK_OFFLOAD {
 ULONG Version;
 ULONG Size;
 NDIS_TASK Task;
 ULONG OffsetNextTask;
 ULONG TaskBufferLength;
 UCHAR TaskBuffer[1];
} NDIS_TASK_OFFLOAD, *PNDIS_TASK_OFFLOAD;

/* TRANSPORT_HEADER_OFFSET  [struct; ce-only; CE 5.0..699] */
typedef struct _TRANSPORT_HEADER_OFFSET {
 USHORT ProtocolType; 
 USHORT HeaderOffset; 
} TRANSPORT_HEADER_OFFSET, *PTRANSPORT_HEADER_OFFSET;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* NdisMDeregisterInterupt  [function; ce-only; CE 2.0..209] */
VOID NdisMDeregisterInterrupt(
IN PNDIS_MINIPORT_INTERRUPT Interrupt);

/* NdisMInitizlizeWrapper  [function; ce-only; CE 2.0..209] */
VOID NdisMInitializeWrapper(OUT PNDIS_HANDLE NdisWrapperHandle, IN PVOID SystemSpecific1, IN PVOID SystemSpecific2, 
IN PVOID SystemSpecific3);

/* NidsMRegisterAdapterShutdownHandler  [function; ce-only; CE 2.0..209] */
VOID NdisMRegisterAdapterShutdownHandler(
IN NDIS_HANDLE MiniportHandle, IN PVOID ShutdownContext, 
IN ADAPTER_SHUTDOWN_HANDLER ShutdownHandler);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 2.0..209, 2.11..2.12, 3.0..399 */

/* KdBreakPoint  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID KdBreakPoint();

/* KdPrint  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID KdPrint(LPSTR *lpszString);

/* NdisQueryMapRegisterCount  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399; Ndislib.lib] */
NDIS_STATUS NdisQueryMapRegisterCount( 
IN NDIS_INTERFACE_TYPE BusType, 
OUT PUINT MapRegisterCount );

/* NdisResetComplete  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID NdisReset(OUT PNDIS_STATUS Status, 
IN NDIS_HANDLE NdisBindingHandle );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699 */

/* NdisMDeregisterIoPortRange  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMDeregisterIoPortRange(
 NDIS_HANDLE MiniportAdapterHandle,
 UINT InitialPort,
 UINT NumberOfPorts,
 PVOID PortOffset
);

/* NdisMMapIoSpace  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
NDIS_STATUS NdisMMapIoSpace(
 PVOID* VirtualAddress,
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_PHYSICAL_ADDRESS PhysicalAddress,
 UINT Length
);

/* NdisMPciAssignResources  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
NDIS_STATUS NdisMPciAssignResources(
 NDIS_HANDLE MiniportHandle,
 ULONG SlotNumber,
 PNDIS_RESOURCE_LIST* AssignedResources
);

/* NdisMQueryInformationComplete  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMQueryInformationComplete(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_STATUS Status
);

/* NdisMRegisterIoPortRange  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
NDIS_STATUS NdisMRegisterIoPortRange(
 PVOID* PortOffset,
 NDIS_HANDLE MiniportAdapterHandle,
 UINT InitialPort,
 UINT NumberOfPorts
);

/* NdisMRegisterMiniport  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
NDIS_STATUS NdisMRegisterMiniport(
 NDIS_HANDLE NdisWrapperHandle,
 PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
 UINT CharacteristicsLength
);

/* NdisMSendComplete  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSendComplete(
 NDIS_HANDLE MiniportAdapterHandle,
 PNDIS_PACKET Packet,
 NDIS_STATUS Status
);

/* NdisMSendResourcesAvailable  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSendResourcesAvailable(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMSetAttributesEx  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSetAttributesEx(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_HANDLE MiniportAdapterContext,
 UINT CheckForHangTimeInSeconds,
 ULONG AttributeFlags,
 NDIS_INTERFACE_TYPE AdapterType
);

/* NdisMSetInformationComplete  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSetInformationComplete(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_STATUS Status
);

/* NdisMSetPeriodicTimer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSetPeriodicTimer(
 PNDIS_MINIPORT_TIMER Timer,
 UINT MillisecondsPeriod
);

/* NdisMSetTimer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSetTimer(
 PNDIS_MINIPORT_TIMER Timer,
 UINT MillisecondsToDelay
);

/* NdisMSleep  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSleep(
 ULONG MicrosecondsToSleep
);

/* NdisMTransferDataComplete  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMTransferDataComplete(
 NDIS_HANDLE MiniportAdapterHandle,
 PNDIS_PACKET Packet,
 NDIS_STATUS Status,
 UINT BytesTransferred
);

/* NdisMUnmapIoSpace  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMUnmapIoSpace(
 NDIS_HANDLE MiniportAdapterHandle,
 PVOID VirtualAddress,
 UINT Length
);

/* NdisMUpdateSharedMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMUpdateSharedMemory(
 NDIS_HANDLE MiniportAdapterHandle,
 ULONG Length,
 PVOID VirtualAddress,
 NDIS_PHYSICAL_ADDRESS PhysicalAddress
);

/* NdisOpenAdapter  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID
 NdisOpenAdapter(
 PNDIS_STATUS
 Status
 ,
 PNDIS_STATUS
 OpenErrorStatus
 ,
 PNDIS_HANDLE
 NdisBindingHandle
 ,
 PUINT
 SelectedMediumIndex
 ,
 PNDIS_MEDIUM
 MediumArray
 ,
 UINT
 MediumArraySize
 ,
 NDIS_HANDLE
 NdisProtocolHandle
 ,
 NDIS_HANDLE
 ProtocolBindingContext
 ,
 PNDIS_STRING
 AdapterName
 ,
 UINT
 OpenOptions
 ,
 PSTRING
 AddressingInformation
 );

/* NdisOpenConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisOpenConfiguration(
 PNDIS_STATUS Status,
 PNDIS_HANDLE ConfigurationHandle,
 NDIS_HANDLE WrapperConfigurationContext
);

/* NdisOpenProtocolConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisOpenProtocolConfiguration(
 PNDIS_STATUS Status,
 PNDIS_HANDLE ConfigurationHandle,
 PNDIS_STRING ProtocolSection
);

/* NdisPrintString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
ULONG NdisPrintString(
 PNDIS_STRING String
);

/* NdisQueryBuffer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisQueryBuffer(
 PNDIS_BUFFER Buffer,
 PVOID* VirtualAddress OPTIONAL,
 PUINT Length
);

/* NdisQueryBufferOffset  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisQueryBufferOffset(
 PNDIS_BUFFER Buffer,
 PUINT Offset,
 PUINT Length
);

/* NdisQueryPacket  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisQueryPacket(
 PNDIS_PACKET Packet,
 PUINT PhysicalBufferCount,
 PUINT BufferCount,
 PNDIS_BUFFER* FirstBuffer,
 PUINT TotalPacketLength
);

/* NdisRawReadPortBufferUchar  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawReadPortBufferUchar(
 ULONG Port,
 PUCHAR Buffer,
 ULONG Length
);

/* NdisRawReadPortBufferUlong  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawReadPortBufferUlong(
 ULONG Port,
 PULONG Buffer,
 ULONG Length
);

/* NdisRawReadPortBufferUshort  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawReadPortBufferUshort(
 ULONG Port,
 PUSHORT Buffer,
 ULONG Length
);

/* NdisRawReadPortUchar  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawReadPortUchar(
 ULONG Port,
 PUCHAR Data
);

/* NdisRawReadPortUlong  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawReadPortUlong(
 ULONG Port,
 PULONG Data
);

/* NdisRawReadPortUshort  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawReadPortUshort(
 ULONG Port,
 PUSHORT Data
);

/* NdisRawWritePortBufferUchar  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawWritePortBufferUchar(
 ULONG Port,
 PUCHAR Buffer,
 ULONG Length
);

/* NdisRawWritePortBufferUlong  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawWritePortBufferUlong(
 ULONG Port,
 PULONG Buffer,
 ULONG Length
);

/* NdisRawWritePortBufferUshort  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawWritePortBufferUshort(
 ULONG Port,
 PUSHORT Buffer,
 ULONG Length
);

/* NdisRawWritePortUchar  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawWritePortUchar(
 ULONG Port,
 UCHAR Data
);

/* NdisRawWritePortUlong  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawWritePortUlong(
 ULONG Port,
 ULONG Data
);

/* NdisRawWritePortUshort  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRawWritePortUshort(
 ULONG Port,
 USHORT Data
);

/* NdisReadConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisReadConfiguration(
 PNDIS_STATUS Status,
 PNDIS_CONFIGURATION_PARAMETER* ParameterValue,
 NDIS_HANDLE ConfigurationHandle,
 PNDIS_STRING Keyword,
 NDIS_PARAMETER_TYPE ParameterType
);

/* NdisReadNetworkAddress  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisReadNetworkAddress(
 PNDIS_STATUS Status,
 PVOID* NetworkAddress,
 PUINT NetworkAddressLength,
 NDIS_HANDLE ConfigurationHandle
);

/* NdisReadPciSlotInformation  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
ULONG NdisReadPciSlotInformation(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG SlotNumber,
 ULONG Offset,
 PVOID Buffer,
 ULONG Length
);

/* NdisRecalculatePacketCounts  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRecalculatePacketCounts(
 PNDIS_PACKET Packet
);

/* NdisRegisterProtocol  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRegisterProtocol(
 PNDIS_STATUS Status,
 PNDIS_HANDLE NdisProtocolHandle,
 PNDIS_PROTOCOL_CHARACTERISTICS ProtocolCharacteristics,
 UINT CharacteristicsLength
);

/* NdisReinitializePacket  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisReinitializePacket(
 PNDIS_PACKET Packet
);

/* NdisReleaseSpinLock  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisReleaseSpinLock(
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisRequest  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRequest(
 PNDIS_STATUS Status,
 NDIS_HANDLE NdisBindingHandle,
 PNDIS_REQUEST NdisRequest
);

/* NdisReset  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisReset(
 PNDIS_STATUS Status,
 NDIS_HANDLE NdisBindingHandle
);

/* NdisReturnPackets  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisReturnPackets(
 PNDIS_PACKET* PacketsToReturn,
 UINT NumberOfPackets
);

/* NdisSend  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisSend(
 PNDIS_STATUS Status,
 NDIS_HANDLE NdisBindingHandle,
 PNDIS_PACKET Packet
);

/* NdisSetPacketFlags  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisSetPacketFlags(
 PNDIS_PACKET Packet,
 UINT Flags
);

/* NdisSetPhysicalAddressHigh  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisSetPhysicalAddressHigh(
 NDIS_PHYSICAL_ADDRESS PhysicalAddress,
 ULONG Value
);

/* NdisSetPhysicalAddressLow  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisSetPhysicalAddressLow(
 NDIS_PHYSICAL_ADDRESS PhysicalAddress,
 ULONG Value
);

/* NdisStallExecution  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisStallExecution(
 UINT MicrosecondsToStall
);

/* NdisTerminateWrapper  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisTerminateWrapper(
 NDIS_HANDLE NdisWrapperHandle,
 PVOID SystemSpecific
);

/* NdisTransferData  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisTransferData(
 PNDIS_STATUS Status,
 NDIS_HANDLE NdisBindingHandle,
 NDIS_HANDLE MacReceiveContext,
 UINT ByteOffset,
 UINT BytesToTransfer,
 PNDIS_PACKET Packet,
 PUINT BytesTransferred
);

/* NdisUnchainBufferAtBack  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisUnchainBufferAtBack(
 PNDIS_PACKET Packet,
 PNDIS_BUFFER* Buffer
);

/* NdisUnchainBufferAtFront  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisUnchainBufferAtFront(
 PNDIS_PACKET Packet,
 PNDIS_BUFFER* Buffer
);

/* NdisUnicodeStringToAnsiString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
NDIS_STATUS NdisUnicodeStringToAnsiString(
 PNDIS_ANSI_STRING DestinationString,
 PNDIS_STRING SourceString
);

/* NdisWriteConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisWriteConfiguration(
 PNDIS_STATUS Status,
 NDIS_HANDLE ConfigurationHandle,
 PNDIS_STRING Keyword,
 PNDIS_CONFIGURATION_PARAMETER ParameterValue
);

/* NdisWriteErrorLogEntry  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisWriteErrorLogEntry(
 NDIS_HANDLE NdisAdapterHandle,
 NDIS_ERROR_CODE ErrorCode,
 ULONG NumberOfErrorValues,
 ULONG ...
);

/* NdisWritePciSlotInformation  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
ULONG NdisWritePciSlotInformation(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG SlotNumber,
 ULONG Offset,
 PVOID Buffer,
 ULONG Length
);

/* NdisZeroMappedMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisZeroMappedMemory(
 PVOID Destination,
 ULONG Length
);

/* NdisZeroMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisZeroMemory(
 PVOID Destination,
 ULONG Length
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* NdisAcquireSpinLock  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAcquireSpinLock(
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisAdjustBufferLength  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAdjustBufferLength(
 PNDIS_BUFFER Buffer,
 UINT Length
);

/* NdisAllocateBuffer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAllocateBuffer(
 PNDIS_STATUS Status,
 PNDIS_BUFFER* Buffer,
 NDIS_HANDLE PoolHandle,
 PVOID VirtualAddress,
 UINT Length
);

/* NdisAllocateBufferPool  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAllocateBufferPool(
 PNDIS_STATUS Status,
 PNDIS_HANDLE PoolHandle,
 UINT NumberOfDescriptors
);

/* NdisAllocateMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
NDIS_STATUS NdisAllocateMemory(
 PVOID* VirtualAddress,
 UINT Length,
 UINT MemoryFlags,
 NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress
);

/* NdisAllocatePacket  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAllocatePacket(
 PNDIS_STATUS Status,
 PNDIS_PACKET* Packet,
 NDIS_HANDLE PoolHandle
);

/* NdisAllocatePacketPool  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAllocatePacketPool(
 PNDIS_STATUS Status,
 PNDIS_HANDLE PoolHandle,
 UINT NumberOfDescriptors,
 UINT ProtocolReservedLength
);

/* NdisAnsiStringToUnicodeString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
NDIS_STATUS NdisAnsiStringToUnicodeString(
 PNDIS_STRING DestinationString,
 PNDIS_ANSI_STRING SourceString
);

/* NdisChainBufferAtBack  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisChainBufferAtBack(
 PNDIS_PACKET Packet,
 PNDIS_BUFFER Buffer
);

/* NdisChainBufferAtFront  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisChainBufferAtFront(
 PNDIS_PACKET Packet,
 PNDIS_BUFFER Buffer
);

/* NdisCloseAdapter  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisCloseAdapter(
 PNDIS_STATUS Status,
 NDIS_HANDLE NdisBindingHandle
);

/* NdisCloseConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisCloseConfiguration(
 NDIS_HANDLE ConfigurationHandle
);

/* NdisCopyFromPacketToPacket  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisCopyFromPacketToPacket(
 PNDIS_PACKET Destination,
 UINT DestinationOffset,
 UINT BytesToCopy,
 PNDIS_PACKET Source,
 UINT SourceOffset,
 PUINT BytesCopied
);

/* NdisDeregisterProtocol  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisDeregisterProtocol(
 PNDIS_STATUS Status,
 NDIS_HANDLE NdisProtocolHandle
);

/* NdisDprAcquireSpinLock  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisDprAcquireSpinLock(
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisDprReleaseSpinLock  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisDprReleaseSpinLock(
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisFreeBuffer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreeBuffer(
 PNDIS_BUFFER Buffer
);

/* NdisFreeBufferPool  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreeBufferPool(
 NDIS_HANDLE PoolHandle
);

/* NdisFreeMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreeMemory(
 PVOID VirtualAddress,
 UINT Length,
 UINT MemoryFlags
);

/* NdisFreePacket  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreePacket(
 PNDIS_PACKET Packet
);

/* NdisFreePacketPool  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreePacketPool(
 NDIS_HANDLE PoolHandle
);

/* NdisFreeString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreeString(
 NDIS_STRING String
);

/* NdisGetFirstBufferFromPacket  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisGetFirstBufferFromPacket(
 PNDIS_PACKET Packet,
 PNDIS_BUFFER* FirstBuffer,
 PVOID* FirstBufferVA,
 PUINT FirstBufferLength,
 PUINT TotalBufferLength
);

/* NdisGetNextBuffer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisGetNextBuffer(
 PNDIS_BUFFER CurrentBuffer,
 PNDIS_BUFFER* NextBuffer
);

/* NdisGetPacketFlags  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
UINT NdisGetPacketFlags(
 PNDIS_PACKET Packet
);

/* NdisGetPhysicalAddressHigh  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
ULONG NdisGetPhysicalAddressHigh(
 NDIS_PHYSICAL_ADDRESS PhysicalAddress
);

/* NdisGetPhysicalAddressLow  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
ULONG NdisGetPhysicalAddressLow(
 NDIS_PHYSICAL_ADDRESS PhysicalAddress
);

/* NdisInitAnsiString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisInitAnsiString(
 PNDIS_ANSI_STRING DestinationString,
 PCSTR SourceString
);

/* NdisInitializeString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisInitializeString(
 PNDIS_STRING DestinationString,
 PUCHAR SourceString
);

/* NdisInitUnicodeString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisInitUnicodeString(
 PNDIS_STRING DestinationString,
 PCWSTR SourceString
);

/* NdisMCancelTimer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMCancelTimer(
 PNDIS_MINIPORT_TIMER 
 Timer
 ,
 PBOOLEAN 
 TimerCanceled
 );

/* NdisMDeregisterAdapterShutdownHandler  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMDeregisterAdapterShutdownHandler(
 NDIS_HANDLE MiniportHandle
);

/* NdisMEthIndicateReceive  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMEthIndicateReceive(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_HANDLE MiniportReceiveContext,
 PVOID HeaderBuffer,
 UINT HeaderBufferSize,
 PVOID LookaheadBuffer,
 UINT LookaheadBufferSize,
 UINT PacketSize
);

/* NdisMEthIndicateReceiveComplete  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMEthIndicateReceiveComplete(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMIndicateReceivePacket  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMIndicateReceivePacket(
 NDIS_HANDLE MiniportAdapterHandle,
 PPNDIS_PACKET ReceivePackets,
 UINT NumberOfPackets
);

/* NdisMIndicateStatus  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMIndicateStatus(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_STATUS GeneralStatus,
 PVOID StatusBuffer,
 UINT StatusBufferSize
);

/* NdisMIndicateStatusComplete  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMIndicateStatusComplete(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMInitializeTimer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMInitializeTimer(
 PNDIS_MINIPORT_TIMER Timer,
 NDIS_HANDLE MiniportAdapterHandle,
 PNDIS_TIMER_FUNCTION TimerFunction,
 PVOID FunctionContext
);

/* NdisMoveFromMappedMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMoveFromMappedMemory(
 PVOID Destination,
 PVOID Source,
 ULONG Length
);

/* NdisMoveMappedMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMoveMappedMemory(
 PVOID Destination,
 PVOID Source,
 ULONG Length
);

/* NdisMoveMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMoveMemory(
 PVOID Destination,
 PVOID Source,
 ULONG Length
);

/* NdisMoveToMappedMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMoveToMappedMemory(
 PVOID Destination,
 PVOID Source,
 ULONG Length
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 2.11..2.12, 3.0..399 */

/* EthDeleteFilter  [function; ce-only; CE 2.11..2.12, 3.0..399; Ndislib.lib] */
VOID EthDeleteFilter( 
IN PETH_FILTER Filter );

/* EthDeleteFilterOpenAdapter  [function; ce-only; CE 2.11..2.12, 3.0..399; Ndislib.lib] */
NDIS_STATUS EthDeleteFilterOpenAdapter( 
IN PETH_FILTER Filter, 
IN NDIS_HANDLE NdisFilterHandle, 
IN PNDIS_REQUEST NdisRequest );

/* EthFilterIndicateReceive  [function; ce-only; CE 2.11..2.12, 3.0..399; Ndislib.lib] */
VOID EthFilterIndicateReceive( 
IN PETH_FILTER Filter, 
IN NDIS_HANDLE MacReceiveContext, 
IN PCHAR Address, 
IN PVOID HeaderBuffer, 
IN UINT HeaderBufferSize, 
IN PVOID LookaheadBuffer, 
IN UINT LookaheadBufferSize, 
IN UINT PacketSize );

/* EthFilterIndicateReceiveComplete  [function; ce-only; CE 2.11..2.12, 3.0..399; Ndislib.lib] */
VOID EthFilterIndicateReceiveComplete( 
IN PETH_FILTER Filter );

/* EthNumberOfOpenFilterAddresses  [function; ce-only; CE 2.11..2.12, 3.0..399; Ndislib.lib] */
UINT EthNumberOfOpenFilterAddresses( 
IN PETH_FILTER Filter, 
IN NDIS_HANDLE NdisFilterHandle );

/* EthQueryGlobalFilterAddresses  [function; ce-only; CE 2.11..2.12, 3.0..399; Ndislib.lib] */
VOID EthQueryGlobalFilterAddresses( 
OUT PNDIS_STATUS Status, 
IN PETH_FILTER Filter, 
IN UINT SizeOfArray, 
OUT PUINT NumberOfAddresses, 
IN OUT CHAR AddressArray[][ETH_LENGTH_OF_ADDRESS] );

/* EthQueryOpenFilterAddresses  [function; ce-only; CE 2.11..2.12, 3.0..399; Ndislib.lib] */
VOID EthQueryOpenFilterAddresses( 
OUT PNDIS_STATUS Status, 
IN PETH_FILTER Filter, 
IN NDIS_HANDLE NdisFilterHandle, 
IN UINT SizeOfArray, 
OUT PUINT NumberOfAddresses, 
OUT CHAR AddressArray[][ETH_LENGTH_OF_ADDRESS] );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 2.11..2.12, 3.0..399, 5.0..599 */

/* NdisIMRevertBack  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..599; Ndis.lib, Ndislib.lib] */
VOID NdisIMRevertBack( 
IN NDIS_HANDLE MiniportAdapterHandle, 
IN NDIS_HANDLE SwitchHandle );
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* NdisMAllocateMapRegisters  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMAllocateMapRegisters(
 NDIS_HANDLE MiniportAdapterHandle,
 UINT DmaChannel,
 NDIS_DMA_SIZE DmaSize,
 ULONG PhysicalMapRegistersNeeded,
 ULONG MaximumPhysicalMapping
);

/* NdisMRegisterAdapterShutdownHandler  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMRegisterAdapterShutdownHandler(
 NDIS_HANDLE MiniportHandle,
 PVOID ShutdownContext,
 ADAPTER_SHUTDOWN_HANDLER ShutdownHandler
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* NdisAllocateSpinLock  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAllocateSpinLock(
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisInitializeListHead  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisInitializeListHead(
 PLIST_ENTRY ListHead
);

/* NdisInterlockedInsertHeadList  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
PLIST_ENTRY NdisInterlockedInsertHeadList(
 PLIST_ENTRY ListHead,
 PLIST_ENTRY ListEntry,
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisInterlockedInsertTailList  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
PLIST_ENTRY NdisInterlockedInsertTailList(
 PLIST_ENTRY ListHead,
 PLIST_ENTRY ListEntry,
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisInterlockedRemoveHeadList  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
PLIST_ENTRY NdisInterlockedRemoveHeadList(
 PLIST_ENTRY ListHead,
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisMDeregisterInterrupt  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMDeregisterInterrupt(
 PNDIS_MINIPORT_INTERRUPT Interrupt
);

/* NdisMFreeMapRegisters  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMFreeMapRegisters(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMInitializeWrapper  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMInitializeWrapper(
 PNDIS_HANDLE NdisWrapperHandle,
 PVOID SystemSpecific1,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* DriverEntry  [function; ce-only; CE 3.0..399, 5.0..699] */
NDIS_STATUS DriverEntry(
 PVOID Argument1,
 PVOID Argument2 
);

/* NdisMTrIndicateReceive  [function; ce-only; CE 3.0..399, 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMTrIndicateReceive(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_HANDLE MiniportReceiveContext,
 PVOID HeaderBuffer,
 UINT HeaderBufferSize,
 PVOID LookaheadBuffer,
 UINT LookaheadBufferSize,
 UINT PacketSize
);

/* NdisMTrIndicateReceiveComplete  [function; ce-only; CE 3.0..399, 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMTrIndicateReceiveComplete(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMWanIndicateReceive  [function; ce-only; CE 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMWanIndicateReceive(
 PNDIS_STATUS Status,
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_HANDLE NdisLinkContext,
 PUCHAR PacketBuffer,
 UINT PacketSize
);

/* NdisMWanIndicateReceiveComplete  [function; ce-only; CE 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMWanIndicateReceiveComplete(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_HANDLE NdisLinkContext
);

/* NdisMWanSendComplete  [function; ce-only; CE 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMWanSendComplete(
 NDIS_HANDLE MiniportAdapterHandle,
 PNDIS_WAN_PACKET Packet,
 NDIS_STATUS Status
);

/* NdisRegisterAdapter  [function; ce-only; CE 3.0..399, 5.0..699] */
VOID NdisRegisterAdapter(
 PNDIS_STATUS Status,
 PWSTR MiniportDriverName,
 PWSTR AdapterInstanceName
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* NdisDeregisterAdapter  [function; ce-only; CE 3.0..699; Ndis.lib, ndis.lib] */
VOID NdisDeregisterAdapter(
 PNDIS_STATUS Status,
 PWSTR AdapterInstanceName
);

/* NdisIMDeInitializeDeviceInstance  [function; ce-only; CE 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
NDIS_STATUS NdisIMDeInitializeDeviceInstance(
 NDIS_HANDLE NdisMiniportHandle
);

/* NdisIMGetDeviceContext  [function; ce-only; CE 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
NDIS_HANDLE NdisIMGetDeviceContext(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisIMInitializeDeviceInstance  [function; ce-only; CE 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
NDIS_STATUS NdisIMInitializeDeviceInstance(
 NDIS_HANDLE DriverHandle,
 PNDIS_STRING DeviceInstance
);

/* NdisIMInitializeDeviceInstanceEx  [function; ce-only; CE 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
NDIS_STATUS NdisIMInitializeDeviceInstanceEx(
 NDIS_HANDLE DriverHandle,
 PNDIS_STRING DriverInstance,
 NDIS_HANDLE DeviceContext OPTIONAL
);

/* NdisIMRegisterLayeredMiniport  [function; ce-only; CE 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
NDIS_STATUS NdisIMRegisterLayeredMiniport(
 NDIS_HANDLE NdisWrapperHandle,
 PNDIS_MINIPORT_CHARACTERISTICS MiniportCharacteristics,
 UINT CharacteristicsLength,
 PNDIS_HANDLE DriverHandle
);

/* NdisRebindProtocolsToAdapter  [function; ce-only; CE 3.0..699] */
VOID NdisRebindProtocolsToAdapter(
 PNDIS_STATUS pStatus,
 PWSTR wszAdapterInstanceName,
 PWSTR wszProtocolName
);

/* ProtocolBindAdapter  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolBindAdapter(
 PNDIS_STATUS Status,
 NDIS_HANDLE BindContext,
 PNDIS_STRING DeviceName,
 PVOID SystemSpecific1,
 PVOID SystemSpecific2
);

/* ProtocolCloseAdapterComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolCloseAdapterComplete(
 NDIS_HANDLE ProtocolBindingContext,
 NDIS_STATUS Status
);

/* ProtocolOpenAdapterComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolOpenAdapterComplete(
 NDIS_HANDLE ProtocolBindingContext,
 NDIS_STATUS Status,
 NDIS_STATUS OpenErrorStatus
);

/* ProtocolReceive  [function; ce-only; CE 3.0..699; Ndislib.lib] */
NDIS_STATUS ProtocolReceive(
 NDIS_HANDLE ProtocolBindingContext,
 NDIS_HANDLE MacReceiveContext,
 PVOID pHeader,
 UINT HeaderSize,
 PVOID LookAheadBuffer,
 UINT LookAheadBufferSize,
 UINT PacketSize 
);

/* ProtocolReceiveComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolReceiveComplete(
 NDIS_HANDLE ProtocolBindingContext 
);

/* ProtocolReceivePacket  [function; ce-only; CE 3.0..699; Ndislib.lib] */
INT ProtocolReceivePacket(
 NDIS_HANDLE ProtocolBindingContext,
 PNDIS_PACKET Packet 
);

/* ProtocolRequestComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolRequestComplete(
 NDIS_HANDLE ProtocolBindingContext,
 PNDIS_REQUEST NdisRequest,
 NDIS_STATUS Status
);

/* ProtocolResetComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolResetComplete(
 NDIS_HANDLE ProtocolBindingContext,
 NDIS_STATUS Status
);

/* ProtocolSendComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolSendComplete(
 NDIS_HANDLE ProtocolBindingContext,
 PNDIS_PACKET Packet,
 NDIS_STATUS Status
);

/* ProtocolStatus  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolStatus(
 NDIS_HANDLE ProtocolBindingContext,
 NDIS_STATUS GeneralStatus,
 PVOID StatusBuffer,
 UINT StatusBufferSize
);

/* ProtocolStatusComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolStatusComplete(
 NDIS_HANDLE ProtocolBindingContext
);

/* ProtocolTransferDataComplete  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolTransferDataComplete(
 NDIS_HANDLE ProtocolBindingContext,
 PNDIS_PACKET Packet,
 NDIS_STATUS Status,
 UINT BytesTransferred
);

/* ProtocolUnbindAdapter  [function; ce-only; CE 3.0..699; Ndislib.lib] */
VOID ProtocolUnbindAdapter(
 PNDIS_STATUS Status,
 NDIS_HANDLE ProtocolBindingContext,
 NDIS_HANDLE UnbindContext
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500) || (_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 4.0..499, 6.0..699 */

/* NdisAllocatePacketPoolEx  [function; ce-only; CE 4.0..499, 6.0..699; ndis.lib] */
VOID NdisAllocatePacketPoolEx(
 PNDIS_STATUS Status,
 PNDIS_HANDLE PoolHandle,
 UINT NumberOfDescriptors,
 UINT NumberOfOverflowDescriptors,
 UINT ProtocolReservedLength
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* NdisAllocateMemoryWithTag  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
NDIS_STATUS NdisAllocateMemoryWithTag(
 PVOID* VirtualAddress,
 UINT Length,
 ULONG Tag
);

/* NdisBindProtocolsToAdapter  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisBindProtocolsToAdapter(
 PNDIS_STATUS pStatus,
 PWSTR wszAdapterInstanceName,
 PWSTR wszProtocolName
);

/* NdisBufferLength  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
ULONG NdisBufferLength(
 PNDIS_BUFFER Buffer
);

/* NdisBufferVirtualAddress  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
PVOID NdisBufferVirtualAddress(
 PNDIS_BUFFER Buffer
);

/* NdisBufferVirtualAddressSafe  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
PVOID NdisBufferVirtualAddressSafe(
 PNDIS_BUFFER Buffer,
 MM_PAGE_PRIORITY Priority
);

/* NdisCancelSendPackets  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisCancelSendPackets(
 NDIS_HANDLE NdisBindingHandle,
 ULONG_PTR CancelId
);

/* NdisCancelTimer  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisCancelTimer(
 PNDIS_TIMER Timer,
 PBOOLEAN TimerCanceled
);

/* NdisCloseFile  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisCloseFile(
 NDIS_HANDLE FileHandle
);

/* NdisCompleteBindAdapter  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisCompleteBindAdapter(
 NDIS_HANDLE BindAdapterContext,
 NDIS_STATUS Status,
 NDIS_STATUS OpenStatus
);

/* NdisCompleteUnbindAdapter  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisCompleteUnbindAdapter(
 NDIS_HANDLE UnbindAdapterContext,
 NDIS_STATUS Status
);

/* NdisCopyBuffer  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisCopyBuffer(
 PNDIS_STATUS Status,
 PNDIS_BUFFER* Buffer,
 NDIS_HANDLE PoolHandle,
 PVOID MemoryDescriptor,
 UINT Offset,
 UINT Length
);

/* NdisCopyLookaheadData  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisCopyLookaheadData(
 PVOID Destination,
 PVOID Source,
 ULONG Length,
 ULONG MacOptions
);

/* NdisCreateLookaheadBufferFromSharedMemory  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID teLookaheadBufferFromSharedMemory(
 PVOID pSharedMemory,
 UINT LookaheadLength,
 PVOID* pLookaheadBuffer
);

/* NdisDestroyLookaheadBufferFromSharedMemory  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisDestroyLookaheadBufferFromSharedMemory(
 PVOID pLookaheadBuffer
);

/* NdisDprAllocatePacket  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisDprAllocatePacket(
 PNDIS_STATUS Status,
 PNDIS_PACKET* Packet,
 NDIS_HANDLE PoolHandle
);

/* NdisDprAllocatePacketNonInterlocked  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisDprAllocatePacketNonInterlocked(
 PNDIS_STATUS Status,
 PNDIS_PACKET* Packet,
 NDIS_HANDLE PoolHandle
);

/* NdisDprFreePacket  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisDprFreePacket(
 PNDIS_PACKET Packet
);

/* NdisDprFreePacketNonInterlocked  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisDprFreePacketNonInterlocked(
 PNDIS_PACKET Packet
);

/* NdisEqualMemory  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
ULONG NdisEqualMemory(
 CONST VOID* Source1,
 CONST VOID* Source2,
 ULONG Length
);

/* NdisFillMemory  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisFillMemory(
 PVOID Destination,
 ULONG Length,
 UCHAR Fill
);

/* NdisGeneratePartialCancelId  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
UCHAR NdisGeneratePartialCancelId(void);

/* NdisGetAdapterBindings  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisGetAdapterBindings(
 PNDIS_STATUS pStatus,
 PWSTR wszAdapterInstanceName,
 PBYTE pOutBuf,
 DWORD cbOutBufSize,
 PDWORD pcbReturned
);

/* NdisGetAdapterNames  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisGetAdapterNames(
 PNDIS_STATUS Status,
 PBYTE pOutBuf,
 DWORD cbOutBufSize,
 PDWORD pcbReturned
);

/* NdisGetCacheFillSize  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
ULONG NdisGetCacheFillSize();

/* NdisGetCurrentSystemTime  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisGetCurrentSystemTime(
 PLARGE_INTEGER pSystemTime
);

/* NdisGetDriverHandle  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisGetDriverHandle(
 PNDIS_HANDLE NdisBindingHandle,
 PNDIS_HANDLE NdisDriverHandle
);

/* NdisGetFirstBufferFromPacketSafe  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisGetFirstBufferFromPacketSafe(
 PNDIS_PACKET Packet,
 PNDIS_BUFFER* FirstBuffer,
 PVOID* FirstBufferVA,
 PUINT FirstBufferLength,
 PUINT TotalBufferLength,
 MM_PAGE_PRIORITY Priority
);

/* NdisGetPoolFromPacket  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
NDIS_Handle NdisGetPoolFromPacket(
 PNDIS_PACKET Packet
);

/* NdisGetProtocolNames  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisGetProtocolNames(
 PNDIS_STATUS pStatus,
 PBYTE pOutBuf,
 DWORD cbOutBufSize,
 PDWORD pcbReturned
);

/* NdisGetReceivedPacket  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
PNDIS_PACKET NdisGetReceivedPacket(
 PNDIS_HANDLE NdisBindingHandle,
 PNDIS_HANDLE MacContext
);

/* NdisGetSystemUpTime  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisGetSystemUpTime(
 PULONG pSystemUpTime
);

/* NdisIMAssociateMiniport  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisIMAssociateMiniport(
 NDIS_HANDLE DriverHandle,
 NDIS_HANDLE ProtocolHandle
);

/* NdisIMCancelInitializeDeviceInstance  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
NDIS_STATUS NdisIMCancelInitializeDeviceInstance(
 NDIS_HANDLE DriverHandle,
 PNDIS_STRING DeviceInstance
);

/* NdisIMCopySendCompletePerPacketInfo  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisIMCopySendCompletePerPacketInfo(
 PNDIS_PACKET DstPacket,
 PNDIS_PACKET SrcPacket
);

/* NdisIMCopySendPerPacketInfo  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisIMCopySendPerPacketInfo(
 PNDIS_PACKET DstPacket,
 PNDIS_PACKET SrcPacket
);

/* NdisIMDeregisterLayeredMiniport  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisIMDeregisterLayeredMiniport(
 NDIS_HANDLE DriverHandle
);

/* NdisIMGetBindingContext  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
NDIS_HANDLE NdisIMGetBindingContext(
 NDIS_HANDLE NdisBindingHandle
);

/* NdisIMNotifyPnPEvent  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
NDIS_STATUS NdisIMNotifyPnPEvent(
 NDIS_HANDLE MiniportHandle,
 PNET_PNP_EVENT NetPnPEvent
);

/* NdisInitializeEvent  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisInitializeEvent(
 PNDIS_EVENT Event
);

/* NdisInitializeReadWriteLock  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisInitializeReadWriteLock(
 PNDIS_RW_LOCK Lock
);

/* NdisInitializeTimer  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisInitializeTimer(
 PNDIS_TIMER Timer,
 PNDIS_TIMER_FUNCTION TimerFunction,
 PVOID FunctionContext
);

/* NdisInitializeWorkItem  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisInitializeWorkItem(
 PNDIS_WORK_ITEM WorkItem,
 NDIS_PROC Routine,
 PVOID Context
);

/* NdisInterlockedAddUlong  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisInterlockedAddUlong(
 PULONG Addend,
 ULONG Increment,
 PNDIS_SPIN_LOCK SpinLock
);

/* NdisInterlockedDecrement  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
LONG NdisInterlockedDecrement(
 PLONG Addend
);

/* NdisInterlockedIncrement  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
LONG NdisInterlockedIncrement(
 PLONG Addend
);

/* NdisUnbindProtocolsFromAdapter  [function; ce-only; CE 4.0..699] */
VOID NdisUnbindProtocolsFromAdapter(
 PNDIS_STATUS pStatus,
 PWSTR wszAdapterInstanceName,
 PWSTR wszProtocolName,
);

/* ProtocolPnPEvent  [function; ce-only; CE 4.0..699; Ndislib.lib] */
NDIS_STATUS ProtocolPnPEvent(
 NDIS_HANDLE ProtocolBindingContext,
 PNET_PNP_EVENT NetPnPEvent
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NdisAllocateFromNPagedLookasideList  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
PVOID NdisAllocateFromNPagedLookasideList( IN PNPAGED_LOOKASIDE_LIST Lookaside);

/* NdisCompletePnPEvent  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
VOID NdisCompletePnPEvent(
 IN NDIS_STATUS Status,
 IN NDIS_HANDLE NdisBindingHandle,
 IN PNET_PNP_EVENT NetPnPEvent
 );

/* NdisDeleteNPagedLookasideList  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
VOID NdisDeleteNPagedLookasideList( IN PNPAGED_LOOKASIDE_LIST Lookaside);

/* NdisFreeEvent  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
VOID NdisFreeEvent(
 PNDIS_EVENT Event
);

/* NdisFreeReadWriteLock  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
VOID NdisFreeReadWriteLock(
 PNDIS_RW_LOCK Lock
);

/* NdisFreeToNPagedLookasideList  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
VOID NdisFreeToNPagedLookasideList( IN PNPAGED_LOOKASIDE_LIST Lookaside, IN PVOID Entry);

/* NdisGetPacketCancelId  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
PVOID NdisGetPacketCancelId(
 PNDIS_PACKET Packet
);

/* NdisGetVersion  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
UINT NdisGetVersion(
);

/* NdisIMQueueMiniportCallback  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
NDIS STATUS_NdisIMQueueMiniportCallback (
 IN NDIS_HANDLE MiniportAdapterHandle,
 IN W_MINIPORT_CALLBACK CallbackRoutine,
 IN PVOID CallbackContext
);

/* NdisInitializeNPagedLookasideList  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
VOID NdisInitializeNPagedLookasideList( IN PNPAGED_LOOKASIDE_LIST Lookaside, IN PALLOCATE_FUNCTION Allocate OPTIONAL, IN PFREE_FUNCTION Free OPTIONAL, IN ULONG Flags, IN ULONG Size, IN ULONG Tag, IN USHORT Depth);

/* NdisMapFile  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMapFile(
 PNDIS_STATUS
 Status
 ,
 PVOID* 
 MappedBuffer
 ,
 NDIS_HANDLE
 FileHandle
 );

/* NdisMCloseLog  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMCloseLog(
 NDIS_HANDLE
 LogHandle
 );

/* NdisMCompleteBufferPhysicalMapping  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMCompleteBufferPhysicalMapping(
 NDIS_HANDLE
 MiniportAdapterHandle
 ,
 PNDIS_BUFFER
 Buffer
 ,
 ULONG
 PhysicalMapRegister
 );

/* NdisMCreateLog  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
NDIS_STATUS NdisMCreateLog(
 NDIS_HANDLE
 MiniportAdapterHandle
 ,
 UINT
 Size
 ,
 PNDIS_HANDLE
 LogHandle
 );

/* NdisMFlushLog  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMFlushLog(
 NDIS_HANDLE LogHandle
);

/* NdisMPromoteMiniport  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
NDIS_STATUS NdisMPromoteMiniport(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMQueryAdapterInstanceName  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
NDIS_STATUS NdisMQueryAdapterInstanceName(
 PNDIS_STRING AdapterInstanceName,
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMQueryAdapterResources  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMQueryAdapterResources(
 PNDIS_STATUS Status,
 NDIS_HANDLE WrapperConfigurationContext,
 PNDIS_RESOURCE_LIST ResourceList,
 PUINT BufferSize
);

/* NdisMRebindProtocolsToAdapter  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMRebindProtocolsToAdapter(
 NDIS_HANDLE MiniportAdapterHandle 
);

/* NdisMRegisterUnloadHandler  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
VOID NdisMRegisterUnloadHandler(
 NDIS_HANDLE NdisWrapperHandle,
 PDRIVER_UNLOAD UnloadHandler
);

/* NdisMRemoveMiniport  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
NDIS_STATUS NdisMRemoveMiniport(
 NDIS_HANDLE MiniportAdapterHandle
);

/* NdisMSetMiniportSecondary  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
NDIS_STATUS NdisMSetMiniportSecondary(
 NDIS_HANDLE MiniportAdapterHandle,
 NDIS_HANDLE PrimaryMiniportAdapterHandle
);

/* NdisMWriteLogData  [function; ce-only; CE 5.0..699; Ndis.dll, ndis.dll] */
NDIS_STATUS NdisMWriteLogData(
 NDIS_HANDLE LogHandle,
 PVOID LogBuffer,
 UINT LogBufferSize
);

/* NdisOpenConfigurationKeyByIndex  [function; ce-only; CE 5.0..699] */
VOID NdisOpenConfigurationKeyByIndex(
 PNDIS_STATUS Status,
 NDIS_HANDLE ConfigurationHandle,
 ULONG Index,
 PNDIS_STRING KeyName,
 PNDIS_HANDLE KeyHandle
);

/* NdisOpenConfigurationKeyByName  [function; ce-only; CE 5.0..699] */
VOID NdisOpenConfigurationKeyByName(
 PNDIS_STATUS Status,
 NDIS_HANDLE ConfigurationHandle,
 PNDIS_STRING SubKeyName,
 PNDIS_HANDLE SubKeyHandle
);

/* NdisOpenFile  [function; ce-only; CE 5.0..699] */
VOID NdisOpenFile(
 PNDIS_STATUS Status,
 PNDIS_HANDLE FileHandle,
 PUINT FileLength,
 PNDIS_STRING FileName,
 NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress
);

/* NdisPacketSize  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
UINT NdisPacketSize(
 IN UINT ProtocolReservedSize
);

/* NdisQueryAdapterInstanceName  [function; ce-only; CE 5.0..699] */
NDIS_STATUS NdisQueryAdapterInstanceName(
 PNDIS_STRING AdapterInstanceName,
 NDIS_HANDLE NdisBindingHandle
);

/* NdisQueryBufferSafe  [function; ce-only; CE 5.0..699] */
VOID NdisQueryBufferSafe(
 PNDIS_BUFFER Buffer,
 PVOID* VirtualAddress OPTIONAL,
 PUINT Length,
 MM_PAGE_PRIORITY Priority
);

/* NdisQueryPendingIoCount  [function; ce-only; CE 5.0..699] */
NDIS_STATUS NdisQueryPendingIoCount(
 PVOID NdisBindingHandle,
 PULONG IoCount
);

/* NdisReadPcmciaAttributeMemory  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
ULONG NdisReadPcmciaAttributeMemory(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Offset,
 PVOID Buffer,
 ULONG Length
);

/* NdisReadPortUchar  [function; ce-only; CE 5.0..699] */
VOID NdisReadPortUchar(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Port,
 PUCHAR Data 
);

/* NdisReadPortUlong  [function; ce-only; CE 5.0..699] */
VOID NdisReadPortUlong(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Port,
 PULONG Data 
);

/* NdisReadPortUshort  [function; ce-only; CE 5.0..699] */
VOID NdisReadPortUshort(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Port,
 PUSHORT Data 
);

/* NdisReadRegisterUchar  [function; ce-only; CE 5.0..699] */
VOID NdisReadRegisterUchar(
 PUCHAR Register,
 PUCHAR Data
);

/* NdisReadRegisterUlong  [function; ce-only; CE 5.0..699] */
VOID NdisReadRegisterUlong(
 PULONG Register,
 PULONG Data
);

/* NdisReadRegisterUshort  [function; ce-only; CE 5.0..699] */
VOID NdisReadRegisterUshort(
 PUSHORT Register,
 PUSHORT Data
);

/* NdisReEnumerateProtocolBindings  [function; ce-only; CE 5.0..699] */
VOID NdisReEnumerateProtocolBindings(
 NDIS_HANDLE NdisProtocolHandle
);

/* NdisReleaseReadWriteLock  [function; ce-only; CE 5.0..699] */
VOID NdisReleaseReadWriteLock(
 PNDIS_RW_LOCK Lock,
 PLOCK_STATE LockState
);

/* NdisResetEvent  [function; ce-only; CE 5.0..699] */
VOID NdisResetEvent(
 PNDIS_EVENT Event
);

/* NdisRetrieveUlong  [function; ce-only; CE 5.0..699] */
VOID NdisRetrieveUlong(
 PULONG DestinationAddress,
 PULONG SourceAddress
);

/* NdisScheduleWorkItem  [function; ce-only; CE 5.0..699] */
NDIS_STATUS NdisScheduleWorkItem(
 PNDIS_WORK_ITEM WorkItem
);

/* NdisSendPackets  [function; ce-only; CE 5.0..699] */
VOID NdisSendPackets(
 NDIS_HANDLE NdisBindingHandle,
 PPNDIS_PACKET PacketArray,
 UINT NumberOfPackets
);

/* NdisSetEvent  [function; ce-only; CE 5.0..699] */
VOID NdisSetEvent(
 PNDIS_EVENT Event
);

/* NdisSetPacketCancelId  [function; ce-only; CE 5.0..699] */
VOID NdisSetPacketCancelId(
 PNDIS_PACKET Packet,
 ULONG_PTR CancelId
);

/* NdisSetPacketPoolProtocolId  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
VOID NdisSetPacketPoolProtocolId(
 IN NDIS_HANDLE PacketPoolHandle,
 IN UINT ProtocolId
);

/* NdisSetTimer  [function; ce-only; CE 5.0..699] */
VOID NdisSetTimer(
 PNDIS_TIMER Timer,
 UINT MillisecondsToDelay
);

/* NdisStoreUlong  [function; ce-only; CE 5.0..699] */
VOID NdisStoreUlong(
 PULONG DestinationAddress,
 ULONG Value
);

/* NdisSystemProcessorCount  [function; ce-only; CE 5.0..699] */
CCHAR NdisSystemProcessorCount(VOID);

/* NdisUnmapFile  [function; ce-only; CE 5.0..699] */
VOID NdisUnmapFile(
 NDIS_HANDLE FileHandle
);

/* NdisUpcaseUnicodeString  [function; ce-only; CE 5.0..699] */
NTSTATUS NdisUpcaseUnicodeString(
 PUNICODE_STRING DestinationString,
 PUNICODE_STRING SourceString
);

/* NdisWritePcmciaAttributeMemory  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
ULONG NdisWritePcmciaAttributeMemory(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Offset,
 PVOID Buffer,
 ULONG Length
);

/* NdisWritePortUchar  [function; ce-only; CE 5.0..699] */
VOID NdisWritePortUchar(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Port,
 UCHAR Data
);

/* NdisWritePortUlong  [function; ce-only; CE 5.0..699] */
VOID NdisWritePortUlong(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Port,
 ULONG Data
);

/* NdisWritePortUshort  [function; ce-only; CE 5.0..699] */
VOID NdisWritePortUshort(
 NDIS_HANDLE NdisAdapterHandle,
 ULONG Port,
 USHORT Data
);

/* NdisWriteRegisterUchar  [function; ce-only; CE 5.0..699] */
VOID NdisWriteRegisterUchar(
 PUCHAR Register,
 UCHAR Data
);

/* NdisWriteRegisterUlong  [function; ce-only; CE 5.0..699] */
VOID NdisWriteRegisterUlong(
 PULONG Register,
 ULONG Data
);

/* NdisWriteRegisterUshort  [function; ce-only; CE 5.0..699] */
VOID NdisWriteRegisterUshort(
 PUSHORT Register,
 USHORT Data
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* NdisPacketPoolUsage  [function; ce-only; CE 6.0..699] */
UINT NdisPacketPoolUsage(
 NDIS_HANDLE PoolHandle
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef MDL NDIS_BUFFER, *PNDIS_BUFFER;
typedef PVOID NDIS_HANDLE,*PNDIS_HANDLE;
typedef KINTERRUPT_MODE NDIS_INTERRUPT_MODE, *PNDIS_INTERRUPT_MODE;
typedef ULONG NDIS_OID, *PNDIS_OID;
typedef PHYSICAL_ADDRESS NDIS_PHYSICAL_ADDRESS, *PNDIS_PHYSICAL_ADDRESS;
typedef int NDIS_STATUS, *PNDIS_STATUS;
typedef UNICODE_STRING NDIS_STRING, *PNDIS_STRING;

/* enum */
typedef enum _NDIS_INTERFACE_TYPE {NdisInterfaceInternal = Internal,NdisInterfaceIsa = Isa,NdisInterfaceEisa = Eisa,NdisInterfaceMca = MicroChannel,NdisInterfaceTurboChannel = TurboChannel,NdisInterfacePci = PCIBus,NdisInterfacePcMcia = PCMCIABus,NdisInterfaceCBus = CBus,NdisInterfaceMPIBus = MPIBus,NdisInterfaceMPSABus = MPSABus,NdisInterfaceProcessorInternal = ProcessorInternal,NdisInterfaceInternalPowerBus = InternalPowerBus,NdisInterfacePNPISABus = PNPISABus,NdisInterfacePNPBus = PNPBus,NdisMaximumInterfaceType,} NDIS_INTERFACE_TYPE, *PNDIS_INTERFACE_TYPE;
typedef enum _NDIS_PARAMETER_TYPE {NdisParameterInteger,NdisParameterHexInteger,NdisParameterString,NdisParameterMultiString,NdisParameterBinary,} NDIS_PARAMETER_TYPE, *PNDIS_PARAMETER_TYPE;

/* struct */
typedef struct MediaSpecificInformation { UINT NextEntryOffset; NDIS_CLASS_ID ClassId; UINT Size; UCHAR ClassInformation[1]; } MEDIA_SPECIFIC_INFORMATION;
typedef struct _NDIS_CONFIGURATION_PARAMETER {NDIS_PARAMETER_TYPE ParameterType;union { ULONG IntegerData; NDIS_STRING StringData; BINARY_DATA BinaryData;} ParameterData;} NDIS_CONFIGURATION_PARAMETER, *PNDIS_CONFIGURATION_PARAMETER;
typedef struct _NDIS_ENCAPSULATION_FORMAT {NDIS_ENCAPSULATION Encapsulation;struct { ULONG FixedHeaderSize:1;ULONG Reserved:31;} Flags;ULONG EncapsulationHeaderSize;} NDIS_ENCAPSULATION_FORMAT,*PNDIS_ENCAPSULATION_FORMAT;
typedef struct _NDIS_MAC_LINE_DOWN {NDIS_HANDLE NdisLinkContext;} NDIS_MAC_LINE_DOWN, *PNDIS_MAC_LINE_DOWN;
typedef struct _NDIS_MAC_LINE_UP {ULONG LinkSpeed;NDIS_WAN_QUALITY Quality;USHORT SendWindow;NDIS_HANDLE ConnectionWrapperID;NDIS_HANDLE NdisLinkHandle;NDIS_HANDLE NdisLinkContext;} NDIS_MAC_LINE_UP, *PNDIS_MAC_LINE_UP;
typedef struct _NDIS_PACKET_EXTENSION {PVOID NdisPacketInfo[MaxPerPacketInfo];} NDIS_PACKET_EXTENSION, *PNDIS_PACKET_EXTENSION;
typedef struct _NDIS_PACKET_STACK{ULONG_PTR IMReserved[2];ULONG_PTR NdisReserved[4];} NDIS_PACKET_STACK, *PNDIS_PACKET_STACK;
typedef struct _NDIS_PROTOCOL_CHARACTERISTICS {
  UCHAR MajorNdisVersion;
  UCHAR MinorNdisVersion;
  UINT Reserved;
  OPEN_ADAPTER_COMPLETE_HANDLER OpenAdapterCompleteHandler;
  CLOSE_ADAPTER_COMPLETE_HANDLER CloseAdapterCompleteHandler;
  SEND_COMPLETE_HANDLER SendCompleteHandler;
  TRANSFER_DATA_COMPLETE_HANDLER TransferDataCompleteHandler;
  RESET_COMPLETE_HANDLER ResetCompleteHandler;
  REQUEST_COMPLETE_HANDLER RequestCompleteHandler;
  RECEIVE_HANDLER ReceiveHandler;
  RECEIVE_COMPLETE_HANDLER ReceiveCompleteHandler;
  STATUS_HANDLER StatusHandler;
  STATUS_COMPLETE_HANDLER StatusCompleteHandler;
  NDIS_STRING Name;
  RECEIVE_PACKET_HANDLER ReceivePacketHandler;
  BIND_HANDLER BindAdapterHandler;
  UNBIND_HANDLER UnbindAdapterHandler;
  TRANSLATE_HANDLER TranslateHandler;
  UNLOAD_PROTOCOL_HANDLER UnloadHandler;
} NDIS_PROTOCOL_CHARACTERISTICS, *PNDIS_PROTOCOL_CHARACTERISTICS;
typedef struct _ NDIS_REQUEST {
  UCHAR MacReserved[16];
  NDIS_REQUEST _TYPE RequestType;
  union _DATA {
    struct QUERY_INFORMATION {
      NDIS_OID Oid;
      PVOID InformationBuffer;
      UINT InformationBufferLength;
      UINT BytesWritten;
      UINT BytesNeeded;
    } QUERY_INFORMATION;
    struct SET_INFORMATION {
      NDIS_OID Oid;
      PVOID InformationBuffer;
      UINT InformationBufferLength;
      UINT BytesRead;
      UINT BytesNeeded;
    } SET_INFORMATION;
  } DATA;
} NDIS_REQUEST, *PNDIS_REQUEST;
typedef struct _NDIS_TASK_OFFLOAD {ULONG Version;ULONG Size;NDIS_TASK Task;ULONG OffsetNextTask;ULONG TaskBufferLength;UCHAR TaskBuffer[1];} NDIS_TASK_OFFLOAD, *PNDIS_TASK_OFFLOAD;
typedef struct _NDIS_TASK_OFFLOAD_HEADER {ULONG Version;ULONG Size;ULONG Reserved;ULONG OffsetFirstTask;NDIS_ENCAPSULATION_FORMAT EncapsulationFormat;} NDIS_TASK_OFFLOAD_HEADER, *PNDIS_TASK_OFFLOAD_HEADER;
typedef struct _NDIS_TASK_TCP_IP_CHECKSUM {struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;ULONG IpChecksum;} V4Transmit;struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;ULONG IpChecksum;} V4Receive;struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;} V6Transmit;struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;} V6Receive;} NDIS_TASK_TCP_IP_CHECKSUM, *PNDIS_TASK_TCP_IP_CHECKSUM;
typedef struct _NDIS_WAN_GET_COMP_INFO { NDIS_HANDLENdisLinkHandle;NDIS_WAN_COMPRESS_INFOSendCapabilities;NDIS_WAN_COMPRESS_INFORecvCapabilities;} NDIS_WAN_GET_COMP_INFO, *PNDIS_WAN_GET_COMP_INFO;
typedef struct _NDIS_WAN_LINE_DOWN {UCHARRemoteAddress[6];UCHARLocalAddress[6];} NDIS_WAN_LINE_DOWN, *PNDIS_WAN_LINE_DOWN;
typedef struct _NDIS_WAN_LINE_UP {ULONG LinkSpeed;ULONG MaximumTotalSize;NDIS_WAN_QUALITY Quality;USHORT SendWindow;UCHAR RemoteAddress[6];UCHAR LocalAddress[6];ULONG ProtocolBufferLength;PUCHAR ProtocolBuffer;USHORT ProtocolType;NDIS_STRING DeviceName;} NDIS_WAN_LINE_UP, *PNDIS_WAN_LINE_UP;
typedef struct _NDIS_WAN_PACKET {LIST_ENTRY WanPacketQueue;PUCHAR CurrentBuffer;ULONG CurrentLength;PUCHAR StartBuffer;PUCHAR EndBuffer;PVOID ProtocolReserved1;PVOID ProtocolReserved2;PVOID ProtocolReserved3;PVOID ProtocolReserved4;PVOID MacReserved1;PVOID MacReserved2;PVOID MacReserved3;PVOID MacReserved4;} NDIS_WAN_PACKET, *PNDIS_WAN_PACKET;
typedef struct _NDIS_WAN_SET_COMP_INFO { NDIS_HANDLE NdisLinkHandle; NDIS_WAN_COMPRESS_INFOSendCapabilities;NDIS_WAN_COMPRESS_INFORecvCapabilities;} NDIS_WAN_SET_COMP_INFO,*PNDIS_WAN_SET_COMP_INFO;
typedef struct _NDIS_PACKET {
  NDIS_PACKET_PRIVATE Private;
  union {
    struct {
      UCHAR MiniportReserved[8];
      UCHAR WrapperReserved[8];
    }; struct {
      UCHAR MacReserved[16];
    };
  };
  UCHAR ProtocolReserved[1];
} NDIS_PACKET, *PNDIS_PACKET, **PPNDIS_PACKET;
typedef struct _TRANSPORT_HEADER_OFFSET { USHORTProtocolType;USHORT HeaderOffset;} TRANSPORT_HEADER_OFFSET, *PTRANSPORT_HEADER_OFFSET;
typedef struct _NDIS_CONFIGURATION_PARAMETER {NDIS_PARAMETER_TYPE ParameterType;union { ULONG IntegerData; NDIS_STRING StringData; BINARY_DATA BinaryData;} ParameterData;
typedef struct _ NDIS_REQUEST { UCHAR MacReserved[16]; NDIS_REQUEST _TYPE RequestType; union _DATA { struct QUERY_INFORMATION { NDIS_OID Oid; PVOID InformationBuffer; UINT InformationBufferLength; UINT BytesWritten; UINT BytesNeeded; } QUERY_INFORMATION;
typedef struct _NDIS_TASK_TCP_IP_CHECKSUM {struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;ULONG IpChecksum;} V4Transmit;
typedef struct _NDIS_PACKET { NDIS_PACKET_PRIVATE Private; union { struct { UCHAR MiniportReserved[8]; UCHAR WrapperReserved[8]; };

/* function */
PVOID NDIS_BUFFER_LINKAGE(  IN PNDIS_BUFFER Buffer );
UINT NDIS_GET_PACKET_PROTOCOL_TYPE(PNDIS_PACKET_Packet_,);
LONG NDIS_GET_PACKET_TIME_SENT(PNDIS_PACKET_Packet);
LONG NdisMReadDmaCounter (IN NDIS_HANDLE MiniportDmaHandle);
VOID TR_IS_NOT_DIRECTED( PUCHAR _Address, PBOOLEAN _Result );
VOID TR_IS_SOURCE_ROUTING( PUCHAR _Address, PBOOLEAN _Result );

#endif /* _NDIS_ */
