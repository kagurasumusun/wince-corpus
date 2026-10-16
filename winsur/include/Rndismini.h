/* Rndismini.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 8 constants, 17 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _RNDISMINI_
#define _RNDISMINI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define REQ_ID_DEVICE_MACADDR 0x80000004
#define REQ_ID_DEVICE_MAX_RX 0x80000003
#define REQ_ID_DISABLE_INT 0x00000004
#define REQ_ID_ENABLE_INT 0x00000003
#define REQ_ID_HARD_RESET 0x00000001
#define REQ_ID_SOFT_RESET 0x00000002
#define REQ_ID_VENDOR_DESCRIPTION 0x80000002
#define REQ_ID_VENDOR_ID 0x80000001
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* DATA_WRAPPER  [struct; ce-only; CE 4.0..699] */
typedef struct _DATA_WRAPPER {
 LIST_ENTRY Link;
 UCHAR* pucData;
 DWORD dwDataSize;
} DATA_WRAPPER, *PDATA_WRAPPER;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SendRndisMessageHandler  [callback; ce-only; CE 5.0..699] */
typedef void(* PFN_PDD_SEND_RNDIS_MESSAGE)(
 PDATA_WRAPPER pDataWrapper
);

/* SendRndisPacketHandler  [callback; ce-only; CE 5.0..699] */
typedef void (* PFN_PDD_SEND_RNDIS_PACKET)(
 PDATA_WRAPPER pDataWrapper
);

/* SetHandler  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* PFN_PDD_SET)(
 UINT uiRequestId,
 PVOID pvData,
 ULONG ulDataLength
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* GetHandler  [callback; ce-only; CE 4.0..699] */
Typedef BOOL (* PFN_PDD_GET)(
 UINT uiRequestId,
 PVOID pvData,
 ULONG ulDataLength,
 ULONG* pulRequiredLength
);

/* IndicateRndisPacketCompleteHandler  [callback; ce-only; CE 4.0..699] */
Typedef void (* PFN_PDD_INDICATE_RNDIS_PACKET_COMPLETE)(
 PDATA_WRAPPER pDataWrapper
);

/* PDDDeinit  [function; ce-only; CE 4.0..699] */
void pdddEINIT(void);

/* PDDInit  [function; ce-only; CE 4.0..699] */
BOOL PDDInit(
 RNDIS_PDD_CHARACTERISTICS* pRndisPddCharacteristics,
 PBYTE pBaseAddress
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* MDDAllocDataWrapper  [function; ce-only; CE 5.0..699] */
PDATA_WRAPPER MDDAllocDataWrapper(void);

/* MDDAllocMem  [function; ce-only; CE 5.0..699] */
PBYTE MDDAllocMem(void);

/* MddDisconnect  [function; ce-only; CE 5.0..699] */
void MddDisconnect();

/* MDDFreeDataWrapper  [function; ce-only; CE 5.0..699] */
void MDDFreeDataWrapper(
 PDATA_WRAPPER pDataWrapper
);
PBYTE MDDAllocMem(void);

/* MDDFreeMem  [function; ce-only; CE 5.0..699] */
void MDDFreeMem(
 PBYTE pBuffer
);

/* MddIndicateRndisMessage  [function; ce-only; CE 5.0..699] */
void MddIndicateRndisMessage(
 PDATA_WRAPPER pDataWrapper
);

/* MddIndicateRndisPacket  [function; ce-only; CE 5.0..699] */
void MddIndicateRndisPacket(
 PDATA_WRAPPER pDataWrapper
);

/* MddSendRndisPacketComplete  [function; ce-only; CE 5.0..699] */
void MddSendRndisMessageComplete(
 PDATA_WRAPPER pDataWrapper
);

/* PFN_PDD_ISR  [callback; ce-only; CE 5.0..699] */
Typedef BOOL (* PFN_PDD_ISR)(
 PDWORD pdwWaitTime
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _DATA_WRAPPER { LIST_ENTRY Link; UCHAR* pucData; DWORDdwDataSize;} DATA_WRAPPER, *PDATA_WRAPPER;

/* callback */
Typedef BOOL(* PFN_PDD_GET)(UINT uiRequestId,PVOID pvData,ULONG ulDataLength,ULONG* pulRequiredLength);

/* function */
void MddSendRndisMessageComplete(PDATA_WRAPPER pDataWrapper);

#endif /* _RNDISMINI_ */
