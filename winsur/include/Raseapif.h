/* Raseapif.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _RASEAPIF_
#define _RASEAPIF_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define raatAcctEventTimeStamp 55
#define raatAcctInterimInterval 85
#define raatAcctMultiSessionId 50
#define raatAcctStatusType 40
#define raatARAPChallengeResponse 84
#define raatARAPGuestLogon 8096
#define raatARAPPassword 70
#define raatCallbackNumber 20
#define raatCalledStationId 30
#define raatFramedRouting 10
#define raatMD5CHAPChallenge 60
#define raatMinimum 0
#define raatReserved 0xFFFFFFFF
#define raatSignature 80

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* PPP_EAP_ACTION  [enum; shared] */
typedef enum _PPP_EAP_ACTION {
 EAPACTION_NoAction,
 EAPACTION_Authenticate, 
 EAPACTION_Done, 
 EAPACTION_SendAndDone,
 EAPACTION_Send,
 EAPACTION_SendWithTimeout,
 EAPACTION_SendWithTimeoutInteractive
} PPP_EAP_ACTION;

/* RAS_AUTH_ATTRIBUTE_TYPE  [enum; shared] */
typedef enum _RAS_AUTH_ATTRIBUTE_TYPE_ {
 raatMinimum = 0,
 raatUserName,
 raatUserPassword,
 raatMD5CHAPPassword,
 raatNASIPAddress,
 raatNASPort,
 raatServiceType,
 raatFramedProtocol,
 raatFramedIPAddress,
 raatFramedIPNetmask,
 raatFramedRouting = 10,
 raatFilterId,
 raatFramedMTU,
 raatFramedCompression,
 raatLoginIPHost,
 raatLoginService,
 raatLoginTCPPort,
 raatUnassigned17,
 raatReplyMessage,
 raatCallbackNumber = 20,
 raatCallbackId,
 raatUnassigned21,
 raatFramedRoute,
 raatFramedIPXNetwork,
 raatState,
 raatClass,
 raatVendorSpecific,
 raatSessionTimeout,
 raatIdleTimeout,
 raatTerminationAction,
 raatCalledStationId = 30,
 raatCallingStationId,
 raatNASIdentifier,
 raatProxyState,
 raatLoginLATService,
 raatLoginLATNode,
 raatLoginLATGroup,
 raatFramedAppleTalkLink,
 raatFramedAppleTalkNetwork,
 raatFramedAppleTalkZone,
 raatAcctStatusType = 40,
 raatAcctDelayTime,
 raatAcctInputOctets,
 raatAcctOutputOctets,
 raatAcctSessionId,
 raatAcctAuthentic,
 raatAcctSessionTime,
 raatAcctInputPackets,
 raatAcctOutputPackets,
 raatAcctTerminateCause,
 raatAcctMultiSessionId = 50,
 raatAcctLinkCount,
 raatAcctEventTimeStamp = 55,
 raatMD5CHAPChallenge = 60,
 raatNASPortType,
 raatPortLimit,
 raatLoginLATPort,
 raatTunnelType,
 raatTunnelMediumType,
 raatTunnelClientEndpoint,
 raatTunnelServerEndpoint,
 raatARAPPassword = 70,
 raatARAPFeatures,
 raatARAPZoneAccess,
 raatARAPSecurity,
 raatARAPSecurityData,
 raatPasswordRetry,
 raatPrompt,
 raatConnectInfo,
 raatConfigurationToken,
 raatEAPMessage,
 raatSignature = 80,
 raatARAPChallengeResponse = 84,
 raatAcctInterimInterval = 85,
 raatARAPGuestLogon = 8096,
 raatReserved = 0xFFFFFFFF
} RAS_AUTH_ATTRIBUTE_TYPE;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* RasEapBegin  [function; ce-only; CE 4.0..699] */
DWORD(*RasEapBegin)(
 VOID** ppWorkBuffer, 
 PPP_EAP_INPUT* pPppEapInput
);

/* RasEapEnd  [function; ce-only; CE 4.0..699] */
DWORD (*RasEapEnd) (
 VOID* pWorkBuffer
);

/* RasEapFreeMemory  [function; shared; CE 4.0..699] */
DWORD RasEapFreeMemory(
 BYTE* pMemory
);

/* RasEapGetIdentity  [function; shared; CE 4.0..699] */
DWORD RasEapGetIdentity(
 DWORD dwEapTypeId, 
 HWND hwndParent, 
 DWORD dwFlags, 
 const WCHAR* pwszPhonebook, 
 const WCHAR* pwszEntry, 
 BYTE* pConnectionDataIn, 
 DWORD dwSizeOfConnectionDataIn, 
 BYTE* pUserDataIn, 
 DWORD dwSizeOfUserDataIn, 
 BYTE** ppUserDataOut, 
 DWORD* pdwSizeOfUserDataOut, 
 WCHAR** ppwszIdentity
);

/* RasEapGetInfo  [function; shared; CE 4.0..699] */
DWORD RasEapGetInfo(
 DWORD dwEapTypeId,
 PPP_EAP_INFO* pEapInfo
);

/* RasEapInitialize  [function; ce-only; CE 4.0..699] */
DWORD RasEapInitialize(
 BOOL fInitialize
);

/* RasEapInvokeConfigUI  [function; shared; CE 4.0..699] */
DWORD RasEapInvokeConfigUI(
 DWORD dwEapTypeId, 
 HINSTANCE hInstance, 
 HWND hwndParent, 
 DWORD dwFlags, 
 BYTE* pConnectionDataIn, 
 DWORD dwSizeOfConnectionDataIn, 
 BYTE** ppConnectionDataOut, 
 DWORD* pdwSizeOfConnectionDataOut 
);

/* RasEapInvokeInteractiveUI  [function; shared; CE 4.0..699] */
DWORD RasEapInvokeInteractiveUI(
 DWORD dwEapTypeId, 
 HINSTANCE hInstance, 
 HWND hwndParent, 
 BYTE* pUIContextData, 
 DWORD dwSizeofUIContextData, 
 BYTE** ppDataFromInteractiveUI, 
 DWORD* pdwSizeOfDataFromInteractiveUI
);

/* RasEapMakeMessage  [function; ce-only; CE 4.0..699] */
DWORD ( *RasEapMakeMessage ) (
 VOID* pWorkBuf, 
 PPP_EAP_PACKET* pReceivePacket, 
 PPP_EAP_PACKET* pSendPacket, 
 DWORD cbSendPacket, 
 PPP_EAP_OUTPUT* pEapOutput, 
 PPP_EAP_INPUT* pEapInput
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _PPP_EAP_INFO {DWORDdwSizeInBytes;DWORDdwEapTypeId;DWORD(*RasEapInitialize)(BOOLfInitialize);DWORD(*RasEapBegin)(VOID** ppWorkBuffer,PPP_EAP_INPUT* pPppEapInput);DWORD(*RasEapEnd)(VOID* pWorkBuffer);DWORD(*RasEapMakeMessage)(VOID* pWorkBuf,PPP_EAP_PACKET* pReceivePacket,PPP_EAP_PACKET* pSendPacket,DWORDcbSendPacket,PPP_EAP_OUTPUT* pEapOutput,PPP_EAP_INPUT* pEapInput);}PPP_EAP_INFO,*PPPP_EAP_INFO;
typedef struct _PPP_EAP_INPUT {DWORDdwSizeInBytes;DWORDfFlags;BOOLfAuthenticator; WCHAR* pwszIdentity; WCHAR* pwszPassword; BYTEbInitialId; RAS_AUTH_ATTRIBUTE* pUserAttributes; BOOLfAuthenticationComplete; DWORDdwAuthResultCode; HANDLEhTokenImpersonateUser;BOOLfSuccessPacketReceived;BOOLfDataReceivedFromInteractiveUI;PBYTEpDataFromInteractiveUI;DWORDdwSizeOfDataFromInteractiveUI;PBYTEpConnectionData;DWORDdwSizeOfConnectionData;PBYTEpUserData;DWORDdwSizeOfUserData;HANDLEhReserved;} PPP_EAP_INPUT, *PPPP_EAP_INPUT;
typedef struct _PPP_EAP_OUTPUT {DWORD dwSizeInBytes;PPP_EAP_ACTION Action;DWORD dwAuthResultCode;RAS_AUTH_ATTRIBUTE* pUserAttributes;BOOL fInvokeInteractiveUI;PBYTE pUIContextData;DWORD dwSizeOfUIContextData;BOOL fSaveConnectionData;PBYTE pConnectionData;DWORD dwSizeOfConnectionData;BOOL fSaveUserData;PBYTE pUserData;DWORD dwSizeOfUserData;} PPP_EAP_OUTPUT, *PPPP_EAP_OUTPUT;
typedef struct _RAS_AUTH_ATTRIBUTE {RAS_AUTH_ATTRIBUTE_TYPEraaType;DWORDdwLength;PVOIDValue;} RAS_AUTH_ATTRIBUTE, *PRAS_AUTH_ATTRIBUTE;

#endif /* _RASEAPIF_ */
