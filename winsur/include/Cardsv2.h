/* Cardsv2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 39 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CARDSV2_
#define _CARDSV2_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CARD_WINDOW_HANDLE  [typedef; ce-only] */
typedef PVOID CARD_WINDOW_HANDLE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.0..209, 2.11..2.12, 3.0..699 */

/* CardAccessConfigurationRegister  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardAccessConfigurationRegister(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSocket,
 UINT8 rw_flag,
 UINT8 offset,
 UINT8* pValue 
);

/* CardDeregisterClient  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardDeregisterClient(
 CARD_CLIENT_HANDLE hCardClient 
);

/* CardGetEventMask  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardGetEventMask(
 CARD_CLIENT_HANDLE hCardClient,
 PCARD_EVENT_MASK_PARMS pMaskParms 
);

/* CardGetFirstTuple  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardGetFirstTuple(
 PCARD_TUPLE_PARMS pGetTupleParms 
);

/* CardGetNextTuple  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardGetNextTuple(
 PCARD_TUPLE_PARMS pGetTupleParms 
);

/* CardGetParsedTuple  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardGetParsedTuple(
 CARD_SOCKET_HANDLE hSocket,
 UINT8 uDesiredTuple,
 PVOID pBuf,
 PUINT32 pnItems 
);

/* CardGetStatus  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardGetStatus(
 PCARD_STATUS pStatus 
);

/* CardMapWindow  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
PVOID CardMapWindow(
 CARD_WINDOW_HANDLE hCardWindow,
 UINT32 uCardAddress,
 UINT32 uSize,
 PUINT32 pGranularity 
);

/* CardModifyWindow  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardModifyWindow(
 CARD_WINDOW_HANDLE hCardWindow,
 UINT16 fAttributes,
 UINT8 fAccessSpeed 
);

/* CardRegisterClient  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
CARD_CLIENT_HANDLE CardRegisterClient(
 CLIENT_CALLBACK CallBackFn,
 PCARD_REGISTER_PARMS pParms 
);

/* CardReleaseConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardReleaseConfiguration(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock 
);

/* CardReleaseExclusive  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardReleaseExclusive(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSocket 
);

/* CardReleaseIRQ  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardReleaseIRQ(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSocket 
);

/* CardReleaseWindow  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardReleaseWindow(
 CARD_WINDOW_HANDLE hCardWin 
);

/* CardRequestConfiguration  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardRequestConfiguration(
 CARD_CLIENT_HANDLE hCardClient,
 PCARD_CONFIG_INFO pParms 
);

/* CardRequestExclusive  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardRequestExclusive(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSocket 
);

/* CardRequestWindow  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
CARD_WINDOW_HANDLE CardRequestWindow(
 CARD_CLIENT_HANDLE hCardClient,
 PCARD_WINDOW_PARMS pCardWinParms 
);

/* CardResetFunction  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardResetFunction(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock 
);

/* CardSetEventMask  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardSetEventMask(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_EVENT_MASK_PARMS pMaskParms 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* CardGetTupleData  [function; ce-only; CE 2.11..2.12, 3.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardGetTupleData(
 PCARD_DATA_PARMS pTupleDataParms 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* CardModifyConfiguration  [function; ce-only; CE 4.0..699; Cardserv.lib, Pcc_serv.dll] */
STATUS CardRequestConfiguration(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock,
 PUINT16 fAttributes
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* CardMapWindowPhysical  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS CardMapWindowPhysical(
 CARD_WINDOW_HANDLE hCardWindow,
 PCARD_WINDOW_ADDRESS pCardWindowAddr
);

/* CardRequestConfigRegisterPhAddr  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS CardRequestConfigRegisterPhAddr(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock,
 PCARD_WINDOW_ADDRESS pCardWindowAddr,
 PDWORD pOffset
);

/* CardRequestDisable  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS CardRequestDisable(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSock
);

/* CardRequestIRQLine  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS CardRequestIRQLine(
 CARD_CLIENT_HANDLE hCardClient,
 CARD_SOCKET_HANDLE hSocket,
 UINT16 uSupportedIrqBit,
 PDWORD pdwIrqOrSysIntrNumber,
 PDWORD pdwIsSysIntr
);

/* EnumCard  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS EnumCard(
 PDWORD pdwNumOfStructure,
 PCARD_DESCRIPTOR pCardDescriptorArray,
 PDWORD pdwNumOfStructureCopied
);

/* EnumSocket  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS EnumSocket(
 PDWORD pdwNumOfStructure,
 PSOCKET_DESCRIPTOR pSocketDescriptorArray,
 PDWORD pdwNumOfStructureCopied
);

/* GetSocketIndex  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS GetSocketIndex(
 CARD_SOCKET_HANDLE hCard,
 PDWORD pdwSocketIndex
);

/* GetSocketStatus  [function; ce-only; CE 5.0..699; Pcc_serv.dll] */
STATUS GetSocketStatus(
 DWORD dwSocketIndex,
 PDWORD pdwStatus
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct CARD_WINDOW_ADDRESS {CARD_SOCKET_HANDLEhSocket;UINT32uCardAddress;UINT32uSize;UINT32uWindowPhAddr;UINT32uGranularity;UINT16fAttributes;UINT8fAccessSpeed;UINT8Reserved;} CARD_WINDOW_ADDRESS, *PCARD_WINDOW_ADDRESS;

#endif /* _CARDSV2_ */
