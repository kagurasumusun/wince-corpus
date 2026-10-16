/* bt_api.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 12 constants, 66 declarations, 1 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _BT_API_
#define _BT_API_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ACTIVE 0x00
#define BT_AVDTP_STATE_DISCONNECTED 0
#define BT_AVDTP_STATE_STREAMING 2
#define BT_AVDTP_STATE_SUSPENDED 1
#define BTE_CLASS_CONNECTIONS 1
#define BTE_CLASS_DEVICE 4
#define BTE_CLASS_PAIRING 2
#define BTE_CLASS_STACK 8
#define RFCOMM_PORT_FLAGS_AUTHENTICATE 0x00000004
#define RFCOMM_PORT_FLAGS_ENCRYPT 0x00000008
#define RFCOMM_PORT_FLAGS_KEEP_DCD 0x00000002
#define RFCOMM_PORT_FLAGS_REMOTE_DCB 0x00000001

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IOCTL_BLUETOOTH_GET_PEER_DEVICE  [typedef; ce-only; CE 5.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BASEBAND_CONNECTION  [struct; ce-only; CE 4.0..699] */
typedef struct _BASEBAND_CONNECTION {
 USHORT hConnection;
 BT_ADDR baAddress;
 int cDataPacketsPending;
 UINT fLinkType : 1;
 UINT fEncrypted : 1;
 UINT fAuthenticated : 1;
 UINT fMode : 3;
} BASEBAND_CONNECTION, *PBASEBAND_CONNECTION;

/* PORTEMUPortParams  [struct; ce-only; CE 4.0..699] */
typedef struct _portemu_port_params {
 int channel;
 int flocal;
 BT_ADDR device;
 int imtu;
 int iminmtu;
 int imaxmtu;
 int isendquota;
 int irecvquota;
 GUID uuidService;
 unsigned int uiportflags;
} PORTEMUPortParams;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* BT_CONNECT_EVENT  [struct; ce-only; CE 6.0..699] */
typedef struct { DWORD dwSize;
 USHORT hConnection;
 BT_ADDR bta;
 UCHAR ucLinkType;
 UCHAR ucEncryptMode;
} BT_CONNECT_EVENT, *PBT_CONNECT_EVENT;

/* BT_DISCONNECT_EVENT  [struct; ce-only; CE 6.0..699] */
typedef struct { 
 DWORD dwSize;
 USHORT hConnection;
 UCHAR ucReason;
} BT_DISCONNECT_EVENT, *PBT_DISCONNECT_EVENT;

/* BT_LINK_KEY_EVENT  [struct; ce-only; CE 6.0..699] */
typedef struct { 
 DWORD dwSize;
 BT_ADDR bta;
 UCHAR link_key[16];
 UCHAR key_type;
} BT_LINK_KEY_EVENT, *PBT_LINK_KEY_EVENT;

/* BT_MODE_CHANGE_EVENT  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD dwSize;
 USHORT hConnection;
 BT_ADDR bta;
 BYTE bMode;
 USHORT usInterval;
} BT_MODE_CHANGE_EVENT, *PBT_MODE_CHANGE_EVENT;

/* BT_ROLE_SWITCH_EVENT  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD dwSize;
 BT_ADDR bta;
 UINT fRole : 1;
} BT_ROLE_SWITCH_EVENT, *PBT_ROLE_SWITCH_EVENT;

/* BT_SERVICE_REQUEST  [struct; ce-only; CE 6.0..699] */
typedef struct {
 DWORD dwSize;
 BT_ADDR btAddr;
 GUID uuidService;
} BT_SERVICE_REQUEST, *PBT_SERVICE_REQUEST;

/* BTEVENT  [struct; ce-only; CE 6.0..699] */
typedef struct _BTEVENT {
 DWORD dwEventId;
 DWORD dwReserved;
 BYTE baEventData[64];
} BTEVENT, *PBTEVENT;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BthAuthenticate  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthAuthenticate(
 BT_ADDR* pba
);

/* BthCancelInquiry  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthCancelInquiry(void);

/* BthClearInquiryFilter  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthClearInquiryFilter(void);

/* BthCloseConnection  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthCloseConnection(
 unsigned short handle
);

/* BthCreateACLConnection  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthCreateACLConnection(
 BT_ADDR* pbt,
 unsigned short* phandle
);

/* BthCreateSCOConnection  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthCreateSCOConnection(
 BT_ADDR* pbt,
 unsigned short* phandle
);

/* BthEnterHoldMode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthEnterHoldMode(
 BT_ADDR* pba,
 unsigned short hold_mode_max,
 unsigned short hold_mode_min,
 unsigned short* pinterval
);

/* BthEnterParkMode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthEnterParkMode(
 BT_ADDR* pba,
 unsigned short beacon_max,
 unsigned short beacon_min,
 unsigned short* pinterval
);

/* BthEnterSniffMode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthEnterSniffMode(
 BT_ADDR* pba,
 unsigned short sniff_mode_max,
 unsigned short sniff_mode_min,
 unsigned short sniff_attempt,
 unsigned short sniff_timeout,
 unsigned short* pinterval
);

/* BthExitParkMode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthExitParkMode(
 BT_ADDR* pba
);

/* BthExitSniffMode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthExitSniffMode(
 BT_ADDR* pba
);

/* BthGetAddress  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthGetAddress(
 unsigned short handle,
 BT_ADDR* pba
);

/* BthGetBasebandConnections  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthGetBasebandConnections(
 int cConnections,
 BASEBAND_CONNECTION* pConnections,
 int* pcConnectionsReturned
);

/* BthGetBasebandHandles  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthGetBasebandHandles(
 int cHandles,
 unsigned short* pHandles,
 int* pcHandlesReturned
);

/* BthGetCurrentMode  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthGetCurrentMode(
 BT_ADDR* pba,
 unsigned char* pmode
);

/* BthGetHardwareStatus  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthGetHardwareStatus(
 int* pistatus
);

/* BthGetLinkKey  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthGetLinkKey(
 BT_ADDR* pba,
 unsigned char key[16]
);

/* BthGetPINRequest  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthGetPINRequest(
 BT_ADDR* pbt
);

/* BthNsLookupServiceBegin  [function; ce-only; CE 4.0..699; Btdrt.lib] */
INT BthNsLookupServiceBegin(
 LPWSAQUERYSET pQuerySet,
 DWORD dwFlags,
 LPHANDLE lphLookup
);

/* BthNsLookupServiceEnd  [function; ce-only; CE 4.0..699; Btdrt.lib] */
INT BthNsLookupServiceEnd(
 HANDLE hLookup
);

/* BthNsLookupServiceNext  [function; ce-only; CE 4.0..699; Btdrt.lib] */
INT BthNsLookupServiceNext(
 HANDLE hLookup,
 DWORD dwFlags,
 LPDWORD lpdwBufferLength,
 LPWSAQUERYSET pResults
);

/* BthNsSetService  [function; ce-only; CE 4.0..699; Btdrt.lib] */
INT BthNsSetService(
 LPWSAQUERYSET lpqsRegInfo,
 WSAESETSERVICEOP essoperation,
 DWORD dwControlFlags
);

/* BthPerformInquiry  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthPerformInquiry(
 unsigned int LAP,
 unsigned char length,
 unsigned char num_responses,
 unsigned int cElems,
 unsigned int* pcDiscoveredDevices,
 BthInquiryResult* InquiryList
);

/* BthReadAuthenticationEnable  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadAuthenticationEnable(
 unsigned char* pae
);

/* BthReadCOD  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadCOD(
 unsigned int* pcod
);

/* BthReadLinkPolicySettings  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadLinkPolicySettings(
 BT_ADDR* pba,
 unsigned short* plps
);

/* BthReadLocalAddr  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadLocalAddr(
 BT_ADDR* pba
);

/* BthReadLocalVersion  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadLocalVersion(
 unsigned char* phci_version,
 unsigned short* phci_revision,
 unsigned char* plmp_version,
 unsigned short* plmp_subversion,
 unsigned short* pmanufacturer,
 unsigned char* plmp_features
);

/* BthReadPageTimeout  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadPageTimeout(
 unsigned short* ptimeout
);

/* BthReadRemoteVersion  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadRemoteVersion(
 BT_ADDR* pba,
 unsigned char* plmp_version,
 unsigned short* plmp_subversion,
 unsigned short* pmanufacturer,
 unsigned char* plmp_features
);

/* BthReadScanEnableMask  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthReadScanEnableMask(
 unsigned char* pmask
);

/* BthRefusePINRequest  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthRefusePINRequest(
 BT_ADDR* pbt
);

/* BthRemoteNameQuery  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthRemoteNameQuery(
 BT_ADDR* pba,
 unsigned int cBuffer,
 unsigned int* pcRequired,
 WCHAR* szString
);

/* BthRevokeLinkKey  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthRevokeLinkKey(
 BT_ADDR* pba
);

/* BthRevokePIN  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthRevokePIN(
 BT_ADDR* pba
);

/* BthSetEncryption  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthSetEncryption(
 BT_ADDR* pba,
 int fOn
);

/* BthSetInquiryFilter  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthSetInquiryFilter(
 BT_ADDR* pba
);

/* BthSetLinkKey  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthSetLinkKey (
 BT_ADDR* pba,
 unsigned char key[16]
);

/* BthSetPIN  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthSetPIN(
 BT_ADDR* pba,
 int cPinLength,
 unsigned char* ppin
);

/* BthSetSecurityUI  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthSetSecurityUI(
 HANDLE hEvent,
 DWORD dwStoreTimeout,
 DWORD dwProcTimeout
);

/* BthTerminateIdleConnections  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthTerminateIdleConnections(void);

/* BthWriteAuthenticationEnable  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthWriteAuthenticationEnable(
 unsigned char ae
);

/* BthWriteCOD  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthWriteCOD(
 unsigned int cod
);

/* BthWriteLinkPolicySettings  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthWriteLinkPolicySettings(
 BT_ADDR* pba,
 unsigned short lps
);

/* BthWritePageTimeout  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthWritePageTimeout(
 unsigned short timeout
);

/* BthWriteScanEnableMask  [function; ce-only; CE 4.0..699; Btdrt.lib] */
int BthWriteScanEnableMask(
 unsigned char mask
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* BthAcceptSCOConnections  [function; ce-only; CE 5.0..699; Btdrt.lib] */
int BthAcceptSCOConnections ( BOOL fAccept);

/* BthAnswerPairRequest  [function; ce-only; CE 5.0..699; Btdrt.lib] */
int BthAnswerPairRequest ( 
 BT_ADDR* pba, 
 int cPinLength, 
 unsigned char *ppin
);

/* BthGetRemoteCOD  [function; ce-only; CE 5.0..699; Btdrt.lib] */
int BthGetRemoteCOD ( 
 BT_ADDR* pbt,
 unsigned int* pcod
);

/* BthPairRequest  [function; ce-only; CE 5.0..699; Btdrt.lib] */
int BthPairRequest ( 
 BT_ADDR* pba, 
 int cPinLength, 
 unsigned char *ppin
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* BthActivatePAN  [function; ce-only; CE 6.0..699; Btdrt.lib] */
int BthActivatePAN (
 BOOL fActivate
);

/* BthNotifyEvent  [function; ce-only; CE 6.0..699; heuristic-prefix] */
HANDLE BthNotifyEvent(
 PBTEVENT pbtEvent,
 DWORD dwEventClass
);

/* BthReadRSSI  [function; ce-only; CE 6.0..699; Btdrt.lib] */
int BthReadRSSI (
 BT_ADDR* pbt, 
 BYTE* pbRSSI
);

/* BthSetCODInquiryFilter  [function; ce-only; CE 6.0..699; Btdrt.lib] */
int BthSetCODInquiryFilter (
 unsigned int cod,
 unsigned int codMask
);

/* BthSwitchRole  [function; ce-only; CE 6.0..699; Btdrt.lib] */
int BthSwitchRole (
 BT_ADDR* pbt,
 USHORT usRole
);

/* RequestBluetoothNotifications  [function; ce-only; CE 6.0..699; coredll.lib] */
HANDLE RequestBluetoothNotifications(
 DWORD dwClass,
 HANDLE hMsgQ
);

/* StopBluetoothNotifications  [function; ce-only; CE 6.0..699; coredll.lib] */
BOOL StopBluetoothNotifications(
 HANDLE h
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct __bth_inquiry_result {BT_ADDRba;unsigned intcod;unsigned shortclock_offset;unsigned charpage_scan_mode;unsigned charpage_scan_period_mode;unsigned charpage_scan_repetition_mode;} BthInquiryResult;
typedef struct _BASEBAND_CONNECTION { USHORT hConnection; BT_ADDR baAddress; int cDataPacketsPending; UINT fLinkType : 1; UINT fEncrypted : 1; UINT fAuthenticated : 1; UINT fMode : 3;} BASEBAND_CONNECTION, *PBASEBAND_CONNECTION;
typedef struct _BTEVENT {
  DWORD dwEventId;
  DWORD dwReserved;
  BYTE baEventData[64];
} BTEVENT, *PBTEVENT;

/* function */
DWORD BthAGNetworkHangupCall(DWORD dwFlags);
DWORD BthAgNetworkHoldCall(void);

#endif /* _BT_API_ */
