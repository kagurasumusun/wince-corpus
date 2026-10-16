/* Ndis.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 9 constants, 336 declarations, 3 outlines, 0 base types, 2 extra macros, 39 extra decls
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

/* ETH_COPY_NETWORK_ADDRESS  [function, macro; ce-only] */
#define ETH_COPY_NETWORK_ADDRESS(_D, _S) \
{ \
 *((ULONG UNALIGNED *)(_D)) = *((ULONG UNALIGNED *)(_S)); \
 *((USHORT UNALIGNED *)((UCHAR *)(_D)+4)) = *((USHORT UNALIGNED *)((UCHAR *)(_S)+4)); \
}

/* NDIS_BUFFER_TO_SPAN_PAGES  [function, macro; ce-only] */
ULONG NDIS_BUFFER_TO_SPAN_PAGES( 
IN PNDIS_BUFFER Buffer );

/* NDIS_GET_ORIGINAL_PACKET  [macro, function; ce-only] */
PNDIS_PACKET NDIS_GET_ORIGINAL_PACKET(
 PNDIS_PACKET _P
);

/* NDIS_GET_PACKET_CANCEL_ID  [macro, function; ce-only] */
PVOID NDIS_GET_PACKET_CANCEL_ID(
 PNDIS_PACKET _P
);

/* NDIS_GET_PACKET_HEADER_SIZE  [macro, function; ce-only] */
#define NDIS_GET_PACKET_HEADER_SIZE(_Packet) \
((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
(_Packet)->Private.NdisPacketOobOffset))->HeaderSize

/* NDIS_GET_PACKET_MEDIA_SPECIFIC_INFO  [macro, function; ce-only] */
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

/* NDIS_GET_PACKET_STATUS  [macro, function; ce-only] */
#define NDIS_GET_PACKET_STATUS(_Packet) \
 ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
 (_Packet)->Private.NdisPacketOobOffset))->Status

/* NDIS_GET_PACKET_TIME_RECEIVED  [macro, function; ce-only] */
#define NDIS_GET_PACKET_TIME_RECEIVED(_Packet) \
 ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
 (_Packet)->Private.NdisPacketOobOffset))->TimeReceived

/* NDIS_GET_PACKET_TIME_TO_SEND  [function, macro; ce-only] */
#define NDIS_GET_PACKET_TIME_SENT(_Packet) \
 ((PNDIS_PACKET_OOB_DATA)((PUCHAR)(_Packet) + \
 (_Packet)->Private.NdisPacketOobOffset))->TimeSent

/* NDIS_OOB_DATA_FROM_PACKET  [macro, function; ce-only] */
PNDIS_PACKET_OOB_DATA NDIS_OOB_DATA_FROM_PACKET(
 PNDIS_PACKET _P
);

/* NDIS_PACKET_EXTENSION_FROM_PACKET  [macro, function; ce-only] */
PNDIS_PACKET_EXTENSION NDIS_PACKET_EXTENSION_FROM_PACKET(
 PNDIS_PACKET _P
);

/* NDIS_PACKET_OOB_DATA  [struct; ce-only] */

/* NDIS_PHYSICAL_ADDRESS_CONST  [function, macro; ce-only] */
VOID NDIS_PHYSICAL_ADDRESS_CONST( 
IN ULONG Low, 
IN LONG High );

/* NDIS_SET_PACKET_CANCEL_ID  [macro, function; ce-only] */
ULONG_PTR NDIS_SET_PACKET_CANCEL_ID(
 PNDIS_PACKET _P,
 ULONG_PTR _cId
);

/* NDIS_WORK_ITEM  [struct; ce-only] */

/* TR_COMPARE_NETWORK_ADDRESSES  [macro, function; ce-only] */
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

/* TR_COPY_NETWORK_ADDRESS  [macro, function; ce-only] */
VOID TR_COPY_NETWORK_ADDRESS(
 PCHAR _D,
 PCHAR _S
);

/* TR_IS_BROADCAST  [macro, function; ce-only] */
VOID TR_IS_BROADCAST(
 PUCHAR _Address,
 PBOOLEAN _Result
);

/* TR_IS_FUNCTIONAL  [macro, function; ce-only] */
VOID TR_IS_FUNCTIONAL(
 PUCHAR _Address,
 PBOOLEAN _Result
);

/* TR_IS_GROUP  [macro, function; ce-only] */
VOID TR_IS_GROUP(
 PUCHAR _Address,
 PBOOLEAN _Result
);

/* TR_IS_NOT_DIRECTED  [macro, function; ce-only] */
#define TR_IS_NOT_DIRECTED(_Address, _Result) \
{ \
 *(_Result) = (BOOLEAN)((_Address)[0] & 0x80); \
}

/* TR_IS_SOURCE_ROUTING  [macro, function; ce-only] */
#define TR_IS_SOURCE_ROUTING(_Address, _Result) \
{ \
 *(_Result) = (BOOLEAN)((_Address)[0] & 0x80); \
}

/* XXX_Init  [function, macro; ce-only; Ndislib.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* NDIS_PROC  [struct; ce-only] */
typedef
VOID (*NDIS_PROC) (
 struct _NDIS_WORK_ITEM *,
 PVOID
);

/* NDIS_WAN_COMPRESS_INFO  [struct; ce-only] */
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

/* MEDIA_SPECIFIC_INFORMATION  [extra struct] */
typedef struct MediaSpecificInformation { UINT NextEntryOffset; NDIS_CLASS_ID ClassId; UINT Size; UCHAR ClassInformation[1]; } MEDIA_SPECIFIC_INFORMATION;

/* PNDIS_BUFFER  [extra typedef] */
typedef MDL NDIS_BUFFER, *PNDIS_BUFFER;

/* PNDIS_HANDLE  [extra typedef] */
typedef PVOID NDIS_HANDLE,*PNDIS_HANDLE;

/* PNDIS_INTERRUPT_MODE  [extra typedef] */
typedef KINTERRUPT_MODE NDIS_INTERRUPT_MODE, *PNDIS_INTERRUPT_MODE;

/* PNDIS_OID  [extra typedef] */
typedef ULONG NDIS_OID, *PNDIS_OID;

/* PNDIS_PHYSICAL_ADDRESS  [extra typedef] */
typedef PHYSICAL_ADDRESS NDIS_PHYSICAL_ADDRESS, *PNDIS_PHYSICAL_ADDRESS;

/* PNDIS_STATUS  [extra typedef] */
typedef int NDIS_STATUS, *PNDIS_STATUS;

/* PNDIS_STRING  [extra typedef] */
typedef UNICODE_STRING NDIS_STRING, *PNDIS_STRING;

/* PPNDIS_PACKET  [extra struct] */
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

/* PNDIS_PROTOCOL_CHARACTERISTICS  [extra struct] */
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

/* PNDIS_REQUEST  [extra struct] */
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

/* PNDIS_CONFIGURATION_PARAMETER  [extra struct] */
typedef struct _NDIS_CONFIGURATION_PARAMETER {NDIS_PARAMETER_TYPE ParameterType;union { ULONG IntegerData; NDIS_STRING StringData; BINARY_DATA BinaryData;} ParameterData;} NDIS_CONFIGURATION_PARAMETER, *PNDIS_CONFIGURATION_PARAMETER;

/* PNDIS_ENCAPSULATION_FORMAT  [extra struct] */
typedef struct _NDIS_ENCAPSULATION_FORMAT {NDIS_ENCAPSULATION Encapsulation;struct { ULONG FixedHeaderSize:1;ULONG Reserved:31;} Flags;ULONG EncapsulationHeaderSize;} NDIS_ENCAPSULATION_FORMAT,*PNDIS_ENCAPSULATION_FORMAT;

/* PNDIS_INTERFACE_TYPE  [extra enum] */
typedef enum _NDIS_INTERFACE_TYPE {NdisInterfaceInternal = Internal,NdisInterfaceIsa = Isa,NdisInterfaceEisa = Eisa,NdisInterfaceMca = MicroChannel,NdisInterfaceTurboChannel = TurboChannel,NdisInterfacePci = PCIBus,NdisInterfacePcMcia = PCMCIABus,NdisInterfaceCBus = CBus,NdisInterfaceMPIBus = MPIBus,NdisInterfaceMPSABus = MPSABus,NdisInterfaceProcessorInternal = ProcessorInternal,NdisInterfaceInternalPowerBus = InternalPowerBus,NdisInterfacePNPISABus = PNPISABus,NdisInterfacePNPBus = PNPBus,NdisMaximumInterfaceType,} NDIS_INTERFACE_TYPE, *PNDIS_INTERFACE_TYPE;

/* PNDIS_MAC_LINE_DOWN  [extra struct] */
typedef struct _NDIS_MAC_LINE_DOWN {NDIS_HANDLE NdisLinkContext;} NDIS_MAC_LINE_DOWN, *PNDIS_MAC_LINE_DOWN;

/* PNDIS_MAC_LINE_UP  [extra struct] */
typedef struct _NDIS_MAC_LINE_UP {ULONG LinkSpeed;NDIS_WAN_QUALITY Quality;USHORT SendWindow;NDIS_HANDLE ConnectionWrapperID;NDIS_HANDLE NdisLinkHandle;NDIS_HANDLE NdisLinkContext;} NDIS_MAC_LINE_UP, *PNDIS_MAC_LINE_UP;

/* PTRANSPORT_HEADER_OFFSET  [extra struct] */
typedef struct _TRANSPORT_HEADER_OFFSET { USHORTProtocolType;USHORT HeaderOffset;} TRANSPORT_HEADER_OFFSET, *PTRANSPORT_HEADER_OFFSET;

/* PNDIS_PACKET_EXTENSION  [extra struct] */
typedef struct _NDIS_PACKET_EXTENSION {PVOID NdisPacketInfo[MaxPerPacketInfo];} NDIS_PACKET_EXTENSION, *PNDIS_PACKET_EXTENSION;

/* PNDIS_PACKET_STACK  [extra struct] */
typedef struct _NDIS_PACKET_STACK{ULONG_PTR IMReserved[2];ULONG_PTR NdisReserved[4];} NDIS_PACKET_STACK, *PNDIS_PACKET_STACK;

/* PNDIS_PARAMETER_TYPE  [extra enum] */
typedef enum _NDIS_PARAMETER_TYPE {NdisParameterInteger,NdisParameterHexInteger,NdisParameterString,NdisParameterMultiString,NdisParameterBinary,} NDIS_PARAMETER_TYPE, *PNDIS_PARAMETER_TYPE;

/* PNDIS_TASK_OFFLOAD  [extra struct] */
typedef struct _NDIS_TASK_OFFLOAD {ULONG Version;ULONG Size;NDIS_TASK Task;ULONG OffsetNextTask;ULONG TaskBufferLength;UCHAR TaskBuffer[1];} NDIS_TASK_OFFLOAD, *PNDIS_TASK_OFFLOAD;

/* PNDIS_TASK_OFFLOAD_HEADER  [extra struct] */
typedef struct _NDIS_TASK_OFFLOAD_HEADER {ULONG Version;ULONG Size;ULONG Reserved;ULONG OffsetFirstTask;NDIS_ENCAPSULATION_FORMAT EncapsulationFormat;} NDIS_TASK_OFFLOAD_HEADER, *PNDIS_TASK_OFFLOAD_HEADER;

/* PNDIS_TASK_TCP_IP_CHECKSUM  [extra struct] */
typedef struct _NDIS_TASK_TCP_IP_CHECKSUM {struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;ULONG IpChecksum;} V4Transmit;struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;ULONG IpChecksum;} V4Receive;struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;} V6Transmit;struct {ULONG IpOptionsSupported;ULONG TcpOptionsSupported;ULONG TcpChecksum;ULONG UdpChecksum;} V6Receive;} NDIS_TASK_TCP_IP_CHECKSUM, *PNDIS_TASK_TCP_IP_CHECKSUM;

/* PNDIS_TASK_TCP_LARGE_SEND  [extra struct] */
typedef struct _NDIS_TASK_TCP_LARGE_SEND {ULONG Version;ULONG MaxOffLoadSize;ULONG MinSegmentCount;BOOLEAN TcpOptions;BOOLEAN IpOptions;} NDIS_TASK_TCP_LARGE_SEND, *PNDIS_TASK_TCP_LARGE_SEND;

/* PNDIS_WAN_GET_COMP_INFO  [extra struct] */
typedef struct _NDIS_WAN_GET_COMP_INFO { NDIS_HANDLENdisLinkHandle;NDIS_WAN_COMPRESS_INFOSendCapabilities;NDIS_WAN_COMPRESS_INFORecvCapabilities;} NDIS_WAN_GET_COMP_INFO, *PNDIS_WAN_GET_COMP_INFO;

/* PNDIS_WAN_LINE_DOWN  [extra struct] */
typedef struct _NDIS_WAN_LINE_DOWN {UCHARRemoteAddress[6];UCHARLocalAddress[6];} NDIS_WAN_LINE_DOWN, *PNDIS_WAN_LINE_DOWN;

/* PNDIS_WAN_LINE_UP  [extra struct] */
typedef struct _NDIS_WAN_LINE_UP {ULONG LinkSpeed;ULONG MaximumTotalSize;NDIS_WAN_QUALITY Quality;USHORT SendWindow;UCHAR RemoteAddress[6];UCHAR LocalAddress[6];ULONG ProtocolBufferLength;PUCHAR ProtocolBuffer;USHORT ProtocolType;NDIS_STRING DeviceName;} NDIS_WAN_LINE_UP, *PNDIS_WAN_LINE_UP;

/* PNDIS_WAN_PACKET  [extra struct] */
typedef struct _NDIS_WAN_PACKET {LIST_ENTRY WanPacketQueue;PUCHAR CurrentBuffer;ULONG CurrentLength;PUCHAR StartBuffer;PUCHAR EndBuffer;PVOID ProtocolReserved1;PVOID ProtocolReserved2;PVOID ProtocolReserved3;PVOID ProtocolReserved4;PVOID MacReserved1;PVOID MacReserved2;PVOID MacReserved3;PVOID MacReserved4;} NDIS_WAN_PACKET, *PNDIS_WAN_PACKET;

/* PNDIS_WAN_SET_COMP_INFO  [extra struct] */
typedef struct _NDIS_WAN_SET_COMP_INFO { NDIS_HANDLE NdisLinkHandle; NDIS_WAN_COMPRESS_INFOSendCapabilities;NDIS_WAN_COMPRESS_INFORecvCapabilities;} NDIS_WAN_SET_COMP_INFO,*PNDIS_WAN_SET_COMP_INFO;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x200 && _WIN32_WCE < 0x210) || (_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400)) /* CE 2.0..209, 2.11..2.12, 3.0..399 */

/* KdBreakPoint  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID KdBreakPoint();

/* KdPrint  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID KdPrint(LPSTR *lpszString);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x200 && _WIN32_WCE < 0x210) || (_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699 */

/* NdisMSleep  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMSleep(
 ULONG MicrosecondsToSleep
);

/* NdisOpenProtocolConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisOpenProtocolConfiguration(
 PNDIS_STATUS Status,
 PNDIS_HANDLE ConfigurationHandle,
 PNDIS_STRING ProtocolSection
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

/* NdisRegisterProtocol  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisRegisterProtocol(
 PNDIS_STATUS Status,
 PNDIS_HANDLE NdisProtocolHandle,
 PNDIS_PROTOCOL_CHARACTERISTICS ProtocolCharacteristics,
 UINT CharacteristicsLength
);

/* NdisStallExecution  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399, 5.0..699; Ndislib.lib] */
VOID NdisStallExecution(
 UINT MicrosecondsToStall
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x200 && _WIN32_WCE < 0x210) || (_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* NdisAdjustBufferLength  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAdjustBufferLength(
 PNDIS_BUFFER Buffer,
 UINT Length
);

/* NdisAllocateBufferPool  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAllocateBufferPool(
 PNDIS_STATUS Status,
 PNDIS_HANDLE PoolHandle,
 UINT NumberOfDescriptors
);

/* NdisAllocatePacketPool  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisAllocatePacketPool(
 PNDIS_STATUS Status,
 PNDIS_HANDLE PoolHandle,
 UINT NumberOfDescriptors,
 UINT ProtocolReservedLength
);

/* NdisEqualString  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
BOOLEAN NdisEqualString(
 PNDIS_STRING String1,
 PNDIS_STRING String2,
 BOOLEAN CaseInsensitive
);

/* NdisFlushBuffer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFlushBuffer(
 PNDIS_BUFFER Buffer,
 BOOLEAN WriteToDevice
);

/* NdisFreeBuffer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreeBuffer(
 PNDIS_BUFFER Buffer
);

/* NdisFreeMemory  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisFreeMemory(
 PVOID VirtualAddress,
 UINT Length,
 UINT MemoryFlags
);

/* NdisGetNextBuffer  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Ndis.lib, ndis.lib, Ndislib.lib] */
VOID NdisGetNextBuffer(
 PNDIS_BUFFER CurrentBuffer,
 PNDIS_BUFFER* NextBuffer
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 2.11..2.12, 3.0..699 */

/* NdisMInitializeWrapper  [function; ce-only; CE 2.11..2.12, 3.0..699; Ndis.dll, ndis.dll, Ndislib.lib] */
VOID NdisMInitializeWrapper(
 PNDIS_HANDLE NdisWrapperHandle,
 PVOID SystemSpecific1,
 PVOID SystemSpecific2,
 PVOID SystemSpecific3
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x500) || (_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 4.0..499, 6.0..699 */

/* NdisAllocatePacketPoolEx  [function; ce-only; CE 4.0..499, 6.0..699; ndis.lib] */
VOID NdisAllocatePacketPoolEx(
 PNDIS_STATUS Status,
 PNDIS_HANDLE PoolHandle,
 UINT NumberOfDescriptors,
 UINT NumberOfOverflowDescriptors,
 UINT ProtocolReservedLength
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* NdisBufferLength  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
ULONG NdisBufferLength(
 PNDIS_BUFFER Buffer
);

/* NdisBufferVirtualAddress  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
PVOID NdisBufferVirtualAddress(
 PNDIS_BUFFER Buffer
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

/* NdisEqualAnsiString  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
BOOLEAN NdisEqualAnsiString(
 PNDIS_STRING String1,
 PNDIS_STRING String2,
 BOOLEAN CaseInSensitive
);

/* NdisEqualMemory  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
ULONG NdisEqualMemory(
 CONST VOID* Source1,
 CONST VOID* Source2,
 ULONG Length
);

/* NdisEqualUnicodeString  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
BOOLEAN NdisEqualUnicodeString(
 PNDIS_STRING String1,
 PNDIS_STRING String2,
 BOOLEAN CaseInSensitive
);

/* NdisFillMemory  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
VOID NdisFillMemory(
 PVOID Destination,
 ULONG Length,
 UCHAR Fill
);

/* NdisGeneratePartialCancelId  [function; ce-only; CE 4.0..699; Ndis.lib, ndis.lib] */
UCHAR NdisGeneratePartialCancelId(void);

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
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* NdisGetVersion  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
UINT NdisGetVersion(
);

/* NdisPacketSize  [function; ce-only; CE 5.0..699; Ndis.lib, ndis.lib] */
UINT NdisPacketSize(
 IN UINT ProtocolReservedSize
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
LONG NdisMReadDmaCounter (IN NDIS_HANDLE MiniportDmaHandle);

#endif /* _NDIS_ */
