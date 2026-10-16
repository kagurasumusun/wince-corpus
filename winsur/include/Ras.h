/* Ras.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 30 constants, 46 declarations, 0 outlines, 0 base types, 0 extra macros, 13 extra decls
 */
#ifndef _RAS_
#define _RAS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define RAS_SIZE 128
#define RASADFUNC RASADFUNCW
#define RASCS_DONE 0x2000
#define RASCS_PAUSED 0x1000
#define RASDIALEVENT "RasDialEvent"
#define RASDT_SW56 TEXT("SW56")
#define RASDT_X25 TEXT("x25")
#define RASIPO_VJ 0x00000001
#define RASLCPAD_CHAP_MD5 0x05
#define RASLCPAD_CHAP_MS 0x80
#define RASLCPAD_CHAP_MSV2 0x81
#define RASLCPAP_CHAP 0xC223
#define RASLCPAP_EAP 0xC227
#define RASLCPAP_PAP 0xC023
#define RASLCPAP_SPAP 0xC027
#define RASLCPO_3_DES 0x00000010
#define RASLCPO_ACFC 0x00000002
#define RASLCPO_DES_56 0x00000008
#define RASLCPO_PFC 0x00000001
#define RASLCPO_SSHF 0x00000004
#define WM_RASDIALEVENT 0xCCCD
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define RASCS_OpenPort 0
#define RASP_Amb 0x10000
#define RASP_PppIp 0x8021
#define RASP_PppIpx 0x802B
#define RASP_PppNbf 0x803F
#define RASP_Slip 0x20000
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define RASP_PppCcp 0x80FD
#define RASP_PppIpV6 0x8057
#define RASP_PppLcp 0xC021
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* RASPPPIP  [struct; ce-only; CE 3.0..699] */
#define RASPPPIPW struct tagRASPPPIPW
RASPPPIPW
{
 // Required members
 DWORD dwSize;
 DWORD dwError;
 WCHAR szIpAddress[ RAS_MaxIpAddress + 1 ];
 // Optional members
 WCHAR szServerIpAddress[ RAS_MaxIpAddress + 1 ];
 DWORD dwOptions;
 DWORD dwServerOptions;
};
#define RASPPPIP RASPPPIPW
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* RASPPPIPV6  [struct, macro; ce-only; CE 4.0..699] */
#define RASPPPIPV6 struct tagRASPPPIPV6
RASPPPIPV6
{
 DWORD dwSize;
 DWORD dwError;
 BYTE LocalInterfaceIdentifier[8];
 BYTE PeerInterfaceIdentifier[8];
 BYTE LocalCompressionProtocol[2];
 BYTE PeerCompressionProtocol[2];
};
#define LPRASPPPIPV6 RASPPPIPV6*
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* RASDIALPARAMS  [struct, typedef; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699] */
typedef struct _RASDIALPARAMS { 
 DWORD dwSize; 
 TCHAR szEntryName[ RAS_MaxEntryName + 1 ]; 
 TCHAR szPhoneNumber[ RAS_MaxPhoneNumber + 1 ]; 
 TCHAR szCallbackNumber[ RAS_MaxCallbackNumber + 1 ]; 
 TCHAR szUserName[ UNLEN + 1 ]; 
 TCHAR szPassword[ PWLEN + 1 ]; 
 TCHAR szDomain[ DNLEN + 1 ]; 
} RASDIALPARAMS;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* RASCONN  [struct, typedef; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct _RASCONN { 
 DWORD dwSize; 
 HRASCONN hrasconn; 
 TCHAR szEntryName[ RAS_MaxEntryName + 1 ]; 
} RASCONN;

/* RASCONNSTATE  [enum, typedef; ce-only; CE 2.11..2.12, 3.0..699] */
typedef enum _RASCONNSTATE { 
 RASCS_OpenPort = 0, 
 RASCS_PortOpened, 
 RASCS_ConnectDevice, 
 RASCS_DeviceConnected, 
 RASCS_AllDevicesConnected, 
 RASCS_Authenticate, 
 RASCS_AuthNotify, 
 RASCS_AuthRetry, 
 RASCS_AuthCallback, 
 RASCS_AuthChangePassword, 
 RASCS_AuthProject, 
 RASCS_AuthLinkSpeed, 
 RASCS_AuthAck, 
 RASCS_ReAuthenticate, 
 RASCS_Authenticated, 
 RASCS_PrepareForCallback, 
 RASCS_WaitForModemReset, 
 RASCS_WaitForCallback,
 RASCS_Projected, 
 RASCS_Interactive = RASCS_PAUSED, 
 RASCS_RetryAuthentication, 
 RASCS_CallbackSetByCaller, 
 RASCS_PasswordExpired, 
 RASCS_Connected = RASCS_DONE, 
 RASCS_Disconnected 
} RASCONNSTATE;

/* RASCONNSTATUS  [struct, typedef; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct _RASCONNSTATUS { 
 DWORD dwSize; 
 RASCONNSTATE rasconnstate; 
 DWORD dwError; 
 TCHAR szDeviceType[ RAS_MaxDeviceType + 1 ]; 
 TCHAR szDeviceName[ RAS_MaxDeviceName + 1 ]; 
} RASCONNSTATUS;

/* RASENTRYNAME  [struct, typedef; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct _RASENTRYNAME {
 DWORD dwSize;
 TCHAR szEntryName[ RAS_MaxEntryName + 1 ];
} RASENTRYNAME;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* RASDEVINFO  [struct; ce-only; CE 3.0..699] */
typedef struct tagRASDEVINFO {
 DWORD dwSize;
 CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
 CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
} RASDEVINFO;

/* RASIPADDR  [struct; ce-only; CE 3.0..699] */
typedef struct RASIPADDR {
 BYTE a;
 BYTE b;
 BYTE c;
 BYTE d;
} RASIPADDR;

/* RASPROJECTION  [enum; ce-only; CE 3.0..699] */
typedef enum _RASPROJECTION { 
 RASP_Amb = 0x10000, 
 RASP_PppNbf = 0x803F, 
 RASP_PppIpx = 0x802B, 
 RASP_PppIp = 0x8021,
 RASP_PppIpV6 = 0x8057,
 RASP_PppCcp = 0x80FD,
 RASP_PppLcp = 0xC021,
 RASP_Slip = 0x20000
} RASPROJECTION;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* RAS_STATS  [struct; shared; CE 4.0..699] */
typedef struct _RAS_STATS {
 DWORD dwSize;
 DWORD dwBytesXmited;
 DWORD dwBytesRcved;
 DWORD dwFramesXmited;
 DWORD dwFramesRcved;
 DWORD dwCrcErr;
 DWORD dwTimeoutErr;
 DWORD dwAlignmentErr;
 DWORD dwHardwareOverrunErr;
 DWORD dwFramingErr;
 DWORD dwBufferOverrunErr;
 DWORD dwCompressionRatioIn;
 DWORD dwCompressionRatioOut;
 DWORD dwBps;
 DWORD dwConnectDuration;
} RAS_STATS, *PRAS_STATS;

/* RASCNTL_SERVERLINE  [struct; ce-only; CE 4.0..699] */
typedef struct tagRasCntlServerLine {
 RASDEVINFO rasDevInfo;
 BOOL bEnable;
 DWORD bmFlags;
 UINT DisconnectIdleSeconds;
 DWORD dwDevConfigSize;
 BYTE DevConfig[1];
} RASCNTL_SERVERLINE, *PRASCNTL_SERVERLINE;

/* RASCNTL_SERVERSTATUS  [struct; ce-only; CE 4.0..699] */
typedef struct tagRasCntlServerStatus {
 BOOL bEnable;
 DWORD bmFlags;
 BOOL bUseDhcpAddresses;
 DWORD dwStaticIpAddrStart;
 DWORD dwStaticIpAddrCount;
 DWORD bmAuthenticationMethods;
 DWORD dwNumLines;
} RASCNTL_SERVERSTATUS, *PRASCNTL_SERVERSTATUS;

/* RASCNTL_SERVERUSERCREDENTIALS  [struct; ce-only; CE 4.0..699] */
typedef struct tagRasCntlServerUser{
 TCHAR tszUserName[UNLEN + 1];
 TCHAR tszDomainName[DNLEN + 1];
 BYTE password[PWLEN];
 DWORD cbPassword;
} RASCNTL_SERVERUSERCREDENTIALS, *PRASCNTL_SERVERUSERCREDENTIALS;

/* RasCntlEnum  [enum; ce-only; CE 4.0..699] */
typedef enum tagRasCntlEnum {
 RASCNTL_SERVER_GET_STATUS,
 RASCNTL_SERVER_ENABLE,
 RASCNTL_SERVER_DISABLE,
 RASCNTL_SERVER_GET_PARAMETERS,
 RASCNTL_SERVER_SET_PARAMETERS,
 RASCNTL_SERVER_LINE_ADD,
 RASCNTL_SERVER_LINE_REMOVE,
 RASCNTL_SERVER_LINE_ENABLE,
 RASCNTL_SERVER_LINE_DISABLE,
 RASCNTL_SERVER_LINE_GET_PARAMETERS,
 RASCNTL_SERVER_LINE_SET_PARAMETERS,
 RASCNTL_SERVER_USER_SET_CREDENTIALS,
 RASCNTL_SERVER_USER_DELETE_CREDENTIALS,
 RASCNTL_SERVER_GET_IPV6_NET_PREFIX
 RASCNTL_SERVER_SET_IPV6_NET_PREFIX
 RASCNTL_SERVER_LINE_GET_CONNECTION_INFO
} RasCntlEnum;

/* RasFreeBuffer  [typedef; ce-only; CE 4.0..699; Ppp.lib] */
typedef DWORD (APIENTRY *PFNRASFREEBUFFER)(
 PBYTE pBuffer 
);

/* RasGetBuffer  [typedef, function; ce-only; CE 4.0..699; Ppp.lib] */
typedef DWORD (APIENTRY *PFNRASGETBUFFER)(
 PBYTE* ppBuffer, 
 PDWORD pdwSize 
);

/* RasReceiveBuffer  [typedef; ce-only; CE 4.0..699; Ppp.lib] */
typedef DWORD (APIENTRY *PFNRASRECEIVEBUFFER)(
 HANDLE hPort,
 PBYTE pBuffer,
 PDWORD pdwSize,
 DWORD dwTimeout,
 HANDLE hEvent
);

/* RasRetrieveBuffer  [typedef; ce-only; CE 4.0..699; Ppp.lib] */
typedef DWORD (APIENTRY *PFNRASRETRIEVEBUFFER)(
 HANDLE hPort,
 PBYTE pBuffer,
 PDWORD pdwSize
);

/* RasSendBuffer  [typedef; ce-only; CE 4.0..699; Ppp.lib] */
typedef DWORD (APIENTRY *PFNRASSENDBUFFER)(
 HANDLE hPort,
 PBYTE pBuffer,
 PDWORD dwSize
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* RASCNTL_SERVER_IPV6_NET_PREFIX  [struct; ce-only; CE 5.0..699] */
typedef struct tagRasCntlServerIPV6NetPrefix {
 BYTE IPV6NetPrefix[16];
 DWORD IPV6NetPrefixBitLength;
 DWORD IPV6NetPrefixCount;
} RASCNTL_SERVER_IPV6_NET_PREFIX, *PRASCNTL_SERVER_IPV6_NET_PREFIX;

/* RASCNTL_SERVERCONNECTION  [struct; ce-only; CE 5.0..699] */
typedef struct tagRasCntlServerConnection {
 RASDEVINFO rasDevInfo;
 HRASCONN hrasconn;
 DWORD dwServerIpAddress;
 DWORD dwClientIpAddress;
 RASCONNSTATE RasConnState;
 TCHAR tszUserName[DNLEN + 1 + UNLEN + 1];
} RASCNTL_SERVERCONNECTION, *PRASCNTL_SERVERCONNECTION;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* RASENTRY  [typedef, function; ce-only; CE 1.0..199, 2.11..2.12, 3.0..699] */
typedef_struct_RASENTRY {
 DWORD dwSize;
 DWORD dwfOptions;
 DWORD dwCountryID;
 DWORD dwCountryCode;
 TCHAR szAreaCode[ RAS_MaxAreaCode + 1 ];
 TCHAR szLocalPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
 DWORD dwAlternatesOffset;
 RASIPADDR ipaddr;
 RASIPADDR ipaddrDns;
 RASIPADDR ipaddrDnsAlt;
 RASIPADDR ipaddrWins;
 RASIPADDR ipaddrWinsAlt;
 DWORD dwFrameSize;
 DWORD dwfNetProtocols;
 DWORD dwFramingProtocol;
 TCHAR szScript[ MAX_PATH ];
 TCHAR szAutoDialDll[ MAX_PATH ];
 TCHAR szAutoDialFunc[ MAX_PATH ];
 TCHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
 TCHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
 TCHAR szX25PadType[ RAS_MaxPadType + 1 ];
 TCHAR szX25Address[ RAS_MaxX25Address + 1 ];
 TCHAR szX25Facilities[ RAS_MaxFacilities + 1 ];
 TCHAR szX25UserData[ RAS_MaxUserData + 1 ];
 DWORD dwChannels;
 DWORD dwReserved1;
 DWORD dwReserved2;
 DWORD dwCustomAuthKey;
} RASENTRY;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* RasDeleteEntry  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasDeleteEntryA,RasDeleteEntryW (CE is W-side)] */
DWORD RasDeleteEntry(
 LPWSTR lpszPhonebook, 
 LPWSTR lpszEntry 
);

/* RasDial  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasDialA,RasDialW (CE is W-side)] */
DWORD RasDial(
 LPRASDIALEXTENSIONS dialExtensions, 
 LPTSTR phoneBookPath, 
 LPRASDIALPARAMS rasDialParam, 
 DWORD NotifierType, 
 LPVOID notifier, 
 LPHRASCONN pRasConn 
);

/* RasEnumConnections  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasEnumConnectionsA,RasEnumConnectionsW (CE is W-side)] */
DWORD RasEnumConnections(
 LPRASCONN lprasconn, 
 LPDWORD lpcb, 
 LPDWORD lpcConnections 
);

/* RasEnumEntries  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasEnumEntriesA,RasEnumEntriesW (CE is W-side)] */
DWORD RasEnumEntries(
 LPWSTR Reserved, 
 LPWSTR lpszPhoneBookPath, 
 LPRASENTRYNAME lprasentryname, 
 LPDWORD lpcb, 
 LPDWORD lpcEntries 
);

/* RasGetConnectStatus  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasGetConnectStatusA,RasGetConnectStatusW (CE is W-side)] */
DWORD RasGetConnectStatus(
 HRASCONN rasconn, 
 LPRASCONNSTATUS lprasconnstatus 
);

/* RasGetEntryDialParams  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasGetEntryDialParamsA,RasGetEntryDialParamsW (CE is W-side)] */
DWORD RasGetEntryDialParams(
 LPWSTR lpszPhoneBook, 
 LPRASDIALPARAMS lpRasDialParams, 
 LPBOOL lpfPassword 
);

/* RasGetEntryProperties  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasGetEntryPropertiesA,RasGetEntryPropertiesW (CE is W-side)] */
DWORD RasGetEntryProperties(
 LPWSTR lpszPhoneBook, 
 LPWSTR szEntry, 
 LPRASENTRY lpbEntry, 
 LPDWORD lpdwEntrySize, 
 LPBYTE lpb, 
 LPDWORD lpdwSize 
);

/* RasHangUp  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasHangUpA,RasHangUpW (CE is W-side)] */
DWORD RasHangUp(
 HRASCONN Session 
);

/* RasRenameEntry  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasRenameEntryA,RasRenameEntryW (CE is W-side)] */
DWORD RasRenameEntry(
 LPWSTR lpszPhonebook, 
 LPWSTR lpszOldEntry, 
 LPWSTR lpszNewEntry 
);

/* RasSetEntryDialParams  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasSetEntryDialParamsA,RasSetEntryDialParamsW (CE is W-side)] */
DWORD RasSetEntryDialParams(
 LPWSTR lpszPhoneBook, 
 LPRASDIALPARAMS lpRasDialParams, 
 BOOL fRemovePassword 
);

/* RasSetEntryProperties  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasSetEntryPropertiesA,RasSetEntryPropertiesW (CE is W-side)] */
DWORD RasSetEntryProperties(
 LPWSTR lpszPhoneBook, 
 LPWSTR szEntry, 
 LPRASENTRY lpbEntry, 
 DWORD dwEntrySize, 
 LPBYTE lpb, 
 DWORD dwSize 
);

/* RasValidateEntryName  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasValidateEntryNameA,RasValidateEntryNameW (CE is W-side)] */
DWORD RasValidateEntryName(
 LPWSTR lpszPhonebook, 
 LPWSTR lpszEntry 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* RasEnumDevices  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasEnumDevicesA,RasEnumDevicesW (CE is W-side)] */
DWORD RasEnumDevices( 
 LPRASDEVINFOW lpRasDevinfo, 
 LPDWORD lpcb, 
 LPDWORD lpcDevices 
);

/* RasGetLinkStatistics  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib] */
DWORD RasGetLinkStatistics(
 HRASCONN hRasConn, 
 DWORD dwSubEntry, 
 RAS_STATS* lpStatistics 
);

/* RasGetProjectionInfo  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasGetProjectionInfoA,RasGetProjectionInfoW (CE is W-side)] */
DWORD RasGetProjectionInfo(
 HRASCONN hrasconn, 
 RASPROJECTION rasprojection, 
 LPVOID lpprojection, 
 LPDWORD lpcb 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* RasCustomScriptExecute  [function; ce-only; CE 4.0..699; heuristic-prefix] */
DWORD RasCustomScriptExecute(
 HANDLE hPort, 
 LPCWSTR lpszPhonebook, 
 LPCWSTR lpszEntryName, 
 PFNRASGETBUFFER pfnRasGetBuffer, 
 PFNRASFREEBUFFER pfnRasFreeBuffer, 
 PFNRASSENDBUFFER pfnRasSendBuffer, 
 PFNRASRECEIVEBUFFER pfnRasReceiveBuffer, 
 PFNRASRETRIEVEBUFFER pfnRasRetrieveBuffer, 
 HWND hWnd, 
 RASDIALPARAMS* pRasDialParams, 
 RASCUSTOMSCRIPTEXTENSIONS* pRasCustomScriptExtensions 
);

/* RasDevConfigDialogEdit  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
DWORD RasDevConfigDialogEdit(
 LPCWSTR szDeviceName,
 LPCWSTR szDeviceType,
 HWND hWndOwner,
 LPVOID lpDeviceConfigIn,
 DWORD dwSize,
 LPVARSTRING lpDeviceConfigOut
);

/* RasGetDispPhoneNum  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
RasGetDispPhoneNum(
 LPCWSTR szPhonebook,
 LPCWSTR szEntry,
 LPWSTR szPhoneNum,
 DWORD dwPhoneNumLen
);

/* RasGetEapConnectionData  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
DWORD RasGetEapConnectionData(
 LPCTSTR pszPhonebook,
 LPCTSTR pszEntry, 
 PBYTE pbEapData, 
 PDWORD pdwSizeofEapData
);

/* RasGetEapUserData  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib; A/W RasGetEapUserDataA,RasGetEapUserDataW (CE is W-side)] */
DWORD RasGetEapUserData(
 HANDLE hToken,
 LPCTSTR pszPhonebook, 
 LPCTSTR pszEntry, 
 PBYTE pbEapData, 
 PDWORD pdwSizeofEapData
);

/* RasIOControl  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
RasIOControl IMPLICIT_DECL(
 LPVOID hRasConn,
 DWORD dwCode,
 PBYTE pBufIn,
 DWORD dwLenIn,
 PBYTE pBufOut,
 DWORD dwLenOut,
 PDWORD pdwActualOut
);

/* RasSetEapConnectionData  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
DWORD RasSetEapConnectionData (
 LPCTSTR pszPhonebook,
 LPCTSTR pszEntry, 
 PBYTE pbEapData, 
 PDWORD pdwSizeofEapData
);

/* RasSetEapUserData  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib; A/W RasSetEapUserDataA,RasSetEapUserDataW (CE is W-side)] */
DWORD RasSetEapUserData(
 HANDLE hToken,
 LPCTSTR pszPhonebook, 
 LPCTSTR pszEntry,
 BYTE* pbEapData,
 DWORD dwSizeofEapData
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef DWORD(APIENTRY *PFNRASRECEIVEBUFFER)(HANDLEhPort,PBYTEpBuffer,PDWORDpdwSize,DWORDdwTimeout,HANDLEhEvent);
typedef DWORD(APIENTRY *PFNRASFREEBUFFER)(PBYTEpBuffer );
typedef DWORD(APIENTRY *PFNRASSENDBUFFER)(HANDLEhPort,PBYTEpBuffer,PDWORDdwSize);
typedef DWORD(APIENTRY *PFNRASRETRIEVEBUFFER)(HANDLEhPort,PBYTEpBuffer,PDWORDpdwSize);
typedef DWORD (APIENTRY *PFNRASRECEIVEBUFFER)( HANDLE hPort, PBYTE pBuffer, PDWORD pdwSize, DWORD dwTimeout, HANDLE hEvent );
typedef DWORD (APIENTRY *PFNRASGETBUFFER)( PBYTE* ppBuffer,  PDWORD pdwSize  );

/* struct */
typedef struct tagRasCntlServerConnection { RASDEVINFO rasDevInfo; HRASCONN hrasconn; DWORD dwServerIpAddress; DWORD dwClientIpAddress; RASCONNSTATE RasConnState; TCHAR tszUserName[DNLEN + 1 + UNLEN + 1];} RASCNTL_SERVERCONNECTION, *PRASCNTL_SERVERCONNECTION;
typedef struct tagRasCntlServerStatus {BOOLbEnable;DWORDbmFlags;BOOLbUseDhcpAddresses;DWORDdwStaticIpAddrStart;DWORDdwStaticIpAddrCount;DWORD bmAuthenticationMethods;DWORDdwNumLines;} RASCNTL_SERVERSTATUS, *PRASCNTL_SERVERSTATUS;
typedef struct tagRasCntlServerUser{TCHAR tszUserName[UNLEN + 1];TCHARtszDomainName[DNLEN + 1];BYTEpassword[PWLEN];DWORDcbPassword;} RASCNTL_SERVERUSERCREDENTIALS, *PRASCNTL_SERVERUSERCREDENTIALS;
typedef struct tagRasCntlServerIPV6NetPrefix { BYTE IPV6NetPrefix[16]; DWORD IPV6NetPrefixBitLength; DWORD IPV6NetPrefixCount;} RASCNTL_SERVER_IPV6_NET_PREFIX, *PRASCNTL_SERVER_IPV6_NET_PREFIX;
typedef struct _RAS_STATS {DWORDdwSize;DWORDdwBytesXmited;DWORDdwBytesRcved;DWORDdwFramesXmited;DWORDdwFramesRcved;DWORDdwCrcErr;DWORDdwTimeoutErr;DWORDdwAlignmentErr;DWORDdwHardwareOverrunErr;DWORDdwFramingErr;DWORDdwBufferOverrunErr;DWORDdwCompressionRatioIn;DWORDdwCompressionRatioOut;DWORDdwBps;DWORDdwConnectDuration;} RAS_STATS, *PRAS_STATS;
#define RASPPPIPW struct tagRASPPPIPW
RASPPPIPW
{
  DWORD dwSize;
  DWORD dwError;
  WCHAR szIpAddress[ RAS_MaxIpAddress + 1 ];
  WCHAR szServerIpAddress[ RAS_MaxIpAddress + 1 ];
  DWORD dwOptions;
  DWORD dwServerOptions;
};
#define RASPPPIP RASPPPIPW;

/* function */
RasIOControl IMPLICIT_DECL(LPVOIDhRasConn,DWORDdwCode,PBYTEpBufIn,DWORDdwLenIn,PBYTEpBufOut,DWORDdwLenOut,PDWORDpdwActualOut);

#endif /* _RAS_ */
