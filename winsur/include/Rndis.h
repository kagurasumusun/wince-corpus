/* Rndis.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 21 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _RNDIS_
#define _RNDIS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define REMOTE_NDIS_HALT_MSG 0x00000003
#define REMOTE_NDIS_INDICATE_STATUS_MSG 0x00000007
#define REMOTE_NDIS_INITIALIZE_CMPLT 0x80000002
#define REMOTE_NDIS_INITIALIZE_MSG 0x00000002
#define REMOTE_NDIS_KEEPALIVE_CMPLT 0x80000008
#define REMOTE_NDIS_KEEPALIVE_MSG 0x00000008
#define REMOTE_NDIS_QUERY_CMPLT 0x80000004
#define REMOTE_NDIS_QUERY_MSG 0x00000004
#define REMOTE_NDIS_RESET_CMPLT 0x80000006
#define REMOTE_NDIS_RESET_MSG 0x00000006
#define REMOTE_NDIS_SET_CMPLT 0x80000005
#define REMOTE_NDIS_SET_MSG 0x00000005
#define RNDIS_MEDIUM_802_3 0x00000000
#define RNDIS_STATUS_BUFFER_OVERFLOW 0x80000005L
#define RNDIS_STATUS_FAILURE 0xC0000001L
#define RNDIS_STATUS_INVALID_DATA 0xC0010015
#define RNDIS_STATUS_MEDIA_CONNECT 0x4001000B
#define RNDIS_STATUS_MEDIA_DISCONNECT 0x4001000C
#define RNDIS_STATUS_NOT_SUPPORTED 0xC00000BB
#define RNDIS_STATUS_RESOURCES 0xC000009AL
#define RNDIS_STATUS_SUCCESS 0x00000000
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* RNDIS_MEDIUM  [typedef; ce-only; CE 4.0..699] */
typedef UINT32 RNDIS_MEDIUM;

/* RNDIS_STATUS  [typedef; ce-only; CE 4.0..699] */
typedef UINT32 RNDIS_STATUS;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* RNDIS_CLASS_ID  [typedef; ce-only; CE 5.0..699] */
typedef UINT32 RNDIS_CLASS_ID;

/* RNDIS_DIAGNOSTIC_INFO  [struct; ce-only; CE 5.0..699] */
typedef struct _RNDIS_DIAGNOSTIC_INFO {
 RNDIS_STATUS DiagStatus;
 UINT32 ErrorOffset;
} RNDIS_DIAGNOSTIC_INFO, *PRNDIS_DIAGNOSTIC_INFO;

/* RNDIS_OID  [typedef; ce-only; CE 5.0..699] */
typedef UINT32 RNDIS_OID;

/* RNDIS_OOBD  [struct; ce-only; CE 5.0..699] */
typedef struct _RNDIS_OOBD {
 UINT32 Size;
 RNDIS_CLASS_ID Type;
 UINT32 ClassInformationOffset;
} RNDIS_OOBD, *PRNDIS_OOBD;

/* RNDIS_PACKET  [struct; ce-only; CE 5.0..699] */
typedef struct _RNDIS_PACKET {
 UINT32 DataOffset;
 UINT32 DataLength;
 UINT32 OOBDataOffset;
 UINT32 OOBDataLength;
 UINT32 NumOOBDataElements;
 UINT32 PerPacketInfoOffset;
 UINT32 PerPacketInfoLength;
 RNDIS_HANDLE VcHandle;
 UINT32 Reserved;
} RNDIS_PACKET, *PRNDIS_PACKET;

/* RNDIS_PDD_CHARACTERISTICS  [struct; ce-only; CE 5.0..699] */
struct RNDIS_PDD_CHARACTERISTICS {
 PFN_PDD_SEND_RNDIS_MESSAGE SendRndisMessageHandler;
 PFN_PDD_SEND_RNDIS_PACKET SendRndisPacketHandler;
 PFN_PDD_INDICATE_RNDIS_PACKET_COMPLETE 
 IndicateRndisPacketCompleteHandler;
 PFN_PDD_SET SetHandler;
 PFN_PDD_GET GetHandler;
 PFN_PDD_ISR ISRHandler;
 DWORD dwIRQ;
 DWORD dwMaxRx;
 DWORD dwBaseAddr;
};

/* RNDIS_PER_PACKET_INFO  [struct; ce-only; CE 5.0..699] */
typedef struct _RNDIS_PER_PACKET_INFO {
 UINT32 Size;
 UINT32 Type;
 UINT32 PerPacketInformationOffset;
} RNDIS_PER_PACKET_INFO, *PRNDIS_PER_PACKET_INFO;

/* RNDIS_REQUEST_ID  [typedef; ce-only; CE 5.0..699] */
typedef UINT32 RNDIS_REQUEST_ID;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct RNDIS_PDD_CHARACTERISTICS { PFN_PDD_SEND_RNDIS_MESSAGE SendRndisMessageHandler; PFN_PDD_SEND_RNDIS_PACKETSendRndisPacketHandler; PFN_PDD_INDICATE_RNDIS_PACKET_COMPLETEIndicateRndisPacketCompleteHandler; PFN_PDD_SET SetHandler; PFN_PDD_GETGetHandler; PFN_PDD_ISRISRHandler; DWORDdwIRQ; DWORD dwMaxRx; DWORDdwBaseAddr;};
typedef struct _RNDIS_DIAGNOSTIC_INFO {RNDIS_STATUSDiagStatus;UINT32ErrorOffset;} RNDIS_DIAGNOSTIC_INFO, *PRNDIS_DIAGNOSTIC_INFO;
typedef struct _RNDIS_OOBD {UINT32Size;RNDIS_CLASS_IDType;UINT32ClassInformationOffset;} RNDIS_OOBD, *PRNDIS_OOBD;
typedef struct _RNDIS_PACKET {UINT32DataOffset;UINT32DataLength;UINT32OOBDataOffset;UINT32OOBDataLength;UINT32NumOOBDataElements;UINT32PerPacketInfoOffset;UINT32PerPacketInfoLength;RNDIS_HANDLEVcHandle;UINT32Reserved;} RNDIS_PACKET, *PRNDIS_PACKET;
typedef struct _RNDIS_PER_PACKET_INFO {UINT32Size;UINT32Type;UINT32PerPacketInformationOffset;} RNDIS_PER_PACKET_INFO, *PRNDIS_PER_PACKET_INFO;
struct RNDIS_PDD_CHARACTERISTICS {
  PFN_PDD_SEND_RNDIS_MESSAGE SendRndisMessageHandler;
  PFN_PDD_SEND_RNDIS_PACKET SendRndisPacketHandler;
  PFN_PDD_INDICATE_RNDIS_PACKET_COMPLETE
  IndicateRndisPacketCompleteHandler;
  PFN_PDD_SET SetHandler;
  PFN_PDD_GET GetHandler;
  PFN_PDD_ISR ISRHandler;
  DWORD dwIRQ;
  DWORD dwMaxRx;
  DWORD dwBaseAddr;
};

#endif /* _RNDIS_ */
