/* Ras.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 20 constants, 43 declarations, 1 outlines, 0 base types, 14 extra macros, 2 extra decls
 */
#ifndef _RAS_
#define _RAS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
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

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#ifndef CNLEN
#define CNLEN 15 /* DERIVED value -- w32api-cegcc reference lmcons.h (sources/w32api-cegcc); CE pages state the name only */
#endif
#ifndef DNLEN
#define DNLEN 15 /* DERIVED value -- w32api-cegcc reference lmcons.h (sources/w32api-cegcc); CE pages state the name only */
#endif
#ifndef NNLEN
#define NNLEN 80 /* DERIVED value -- w32api-cegcc reference lmcons.h (sources/w32api-cegcc); CE pages state the name only */
#endif
#ifndef PWLEN
#define PWLEN 256 /* DERIVED value -- w32api-cegcc reference lmcons.h (sources/w32api-cegcc); CE pages state the name only */
#endif
#ifndef RAS_MaxCallbackNumber
#define RAS_MaxCallbackNumber RAS_MaxPhoneNumber /* DERIVED value -- w32api-cegcc reference ras.h (sources/w32api-cegcc) */
#endif
#ifndef RAS_MaxDeviceName
#define RAS_MaxDeviceName 128 /* DERIVED value -- w32api-cegcc reference ras.h (sources/w32api-cegcc) */
#endif
#ifndef RAS_MaxDeviceType
#define RAS_MaxDeviceType 16 /* DERIVED value -- w32api-cegcc reference ras.h (sources/w32api-cegcc) */
#endif
#ifndef RAS_MaxEntryName
#define RAS_MaxEntryName 256 /* DERIVED value -- w32api-cegcc reference ras.h (sources/w32api-cegcc) */
#endif
#ifndef RAS_MaxIpAddress
#define RAS_MaxIpAddress 15 /* DERIVED value -- w32api-cegcc reference ras.h (sources/w32api-cegcc) */
#endif
#ifndef RAS_MaxIpxAddress
#define RAS_MaxIpxAddress 21 /* DERIVED value -- w32api-cegcc reference ras.h (sources/w32api-cegcc) */
#endif
#ifndef RAS_MaxPhoneNumber
#define RAS_MaxPhoneNumber 128 /* DERIVED value -- w32api-cegcc reference ras.h (sources/w32api-cegcc) */
#endif
#ifndef RMLEN
#define RMLEN (UNCLEN+1+NNLEN) /* DERIVED value -- w32api-cegcc reference lmcons.h (sources/w32api-cegcc) */
#endif
#ifndef UNCLEN
#define UNCLEN (CNLEN + 2) /* DERIVED value -- w32api-cegcc reference lmcons.h (sources/w32api-cegcc) */
#endif
#ifndef UNLEN
#define UNLEN 256 /* DERIVED value -- w32api-cegcc reference lmcons.h (sources/w32api-cegcc); CE pages state the name only */
#endif

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RASENTRY  [typedef, function; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* RAS_STATS  [struct; shared] */
#ifndef __WINCE_DEFINED__RAS_STATS
#define __WINCE_DEFINED__RAS_STATS
#ifndef __WINCE_DEFINED_RAS_STATS
#define __WINCE_DEFINED_RAS_STATS
#ifndef __WINCE_DEFINED_PRAS_STATS
#define __WINCE_DEFINED_PRAS_STATS
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
#endif /* __WINCE_DEFINED_PRAS_STATS */
#endif /* __WINCE_DEFINED_RAS_STATS */
#endif /* __WINCE_DEFINED__RAS_STATS */

/* RASCNTL_SERVER_IPV6_NET_PREFIX  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGRASCNTLSERVERIPV6NETPREFIX
#define __WINCE_DEFINED_TAGRASCNTLSERVERIPV6NETPREFIX
#ifndef __WINCE_DEFINED_RASCNTL_SERVER_IPV6_NET_PREFIX
#define __WINCE_DEFINED_RASCNTL_SERVER_IPV6_NET_PREFIX
#ifndef __WINCE_DEFINED_PRASCNTL_SERVER_IPV6_NET_PREFIX
#define __WINCE_DEFINED_PRASCNTL_SERVER_IPV6_NET_PREFIX
typedef struct tagRasCntlServerIPV6NetPrefix {
 BYTE IPV6NetPrefix[16];
 DWORD IPV6NetPrefixBitLength;
 DWORD IPV6NetPrefixCount;
} RASCNTL_SERVER_IPV6_NET_PREFIX, *PRASCNTL_SERVER_IPV6_NET_PREFIX;
#endif /* __WINCE_DEFINED_PRASCNTL_SERVER_IPV6_NET_PREFIX */
#endif /* __WINCE_DEFINED_RASCNTL_SERVER_IPV6_NET_PREFIX */
#endif /* __WINCE_DEFINED_TAGRASCNTLSERVERIPV6NETPREFIX */

/* RASCNTL_SERVERSTATUS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGRASCNTLSERVERSTATUS
#define __WINCE_DEFINED_TAGRASCNTLSERVERSTATUS
#ifndef __WINCE_DEFINED_RASCNTL_SERVERSTATUS
#define __WINCE_DEFINED_RASCNTL_SERVERSTATUS
#ifndef __WINCE_DEFINED_PRASCNTL_SERVERSTATUS
#define __WINCE_DEFINED_PRASCNTL_SERVERSTATUS
typedef struct tagRasCntlServerStatus {
 BOOL bEnable;
 DWORD bmFlags;
 BOOL bUseDhcpAddresses;
 DWORD dwStaticIpAddrStart;
 DWORD dwStaticIpAddrCount;
 DWORD bmAuthenticationMethods;
 DWORD dwNumLines;
} RASCNTL_SERVERSTATUS, *PRASCNTL_SERVERSTATUS;
#endif /* __WINCE_DEFINED_PRASCNTL_SERVERSTATUS */
#endif /* __WINCE_DEFINED_RASCNTL_SERVERSTATUS */
#endif /* __WINCE_DEFINED_TAGRASCNTLSERVERSTATUS */

/* RasCntlEnum  [enum; ce-only] */
#ifndef __WINCE_DEFINED_TAGRASCNTLENUM
#define __WINCE_DEFINED_TAGRASCNTLENUM
#ifndef __WINCE_DEFINED_RASCNTLENUM
#define __WINCE_DEFINED_RASCNTLENUM
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
 RASCNTL_SERVER_GET_IPV6_NET_PREFIX,
 RASCNTL_SERVER_SET_IPV6_NET_PREFIX,
 RASCNTL_SERVER_LINE_GET_CONNECTION_INFO
} RasCntlEnum;
#endif /* __WINCE_DEFINED_RASCNTLENUM */
#endif /* __WINCE_DEFINED_TAGRASCNTLENUM */
#ifndef __WINCE_DEFINED_PRASCNTLENUM
#define __WINCE_DEFINED_PRASCNTLENUM
typedef RasCntlEnum *PRasCntlEnum, *LPRasCntlEnum;
#endif /* __WINCE_DEFINED_PRASCNTLENUM */

/* RASCONNSTATE  [enum, typedef; ce-only] */
#ifndef __WINCE_DEFINED__RASCONNSTATE
#define __WINCE_DEFINED__RASCONNSTATE
#ifndef __WINCE_DEFINED_RASCONNSTATE
#define __WINCE_DEFINED_RASCONNSTATE
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
#endif /* __WINCE_DEFINED_RASCONNSTATE */
#endif /* __WINCE_DEFINED__RASCONNSTATE */
#ifndef __WINCE_DEFINED_PRASCONNSTATE
#define __WINCE_DEFINED_PRASCONNSTATE
typedef RASCONNSTATE *PRASCONNSTATE, *LPRASCONNSTATE;
#endif /* __WINCE_DEFINED_PRASCONNSTATE */

/* RASCONNSTATUS  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED__RASCONNSTATUS
#define __WINCE_DEFINED__RASCONNSTATUS
#ifndef __WINCE_DEFINED_RASCONNSTATUS
#define __WINCE_DEFINED_RASCONNSTATUS
typedef struct _RASCONNSTATUS {
 DWORD dwSize;
 RASCONNSTATE rasconnstate;
 DWORD dwError;
 TCHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
 TCHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
} RASCONNSTATUS;
#endif /* __WINCE_DEFINED_RASCONNSTATUS */
#endif /* __WINCE_DEFINED__RASCONNSTATUS */
#ifndef __WINCE_DEFINED_PRASCONNSTATUS
#define __WINCE_DEFINED_PRASCONNSTATUS
typedef RASCONNSTATUS *PRASCONNSTATUS, *LPRASCONNSTATUS;
#endif /* __WINCE_DEFINED_PRASCONNSTATUS */

/* RASDEVINFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGRASDEVINFO
#define __WINCE_DEFINED_TAGRASDEVINFO
#ifndef __WINCE_DEFINED_RASDEVINFO
#define __WINCE_DEFINED_RASDEVINFO
typedef struct tagRASDEVINFO {
 DWORD dwSize;
 CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
 CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
} RASDEVINFO;
#endif /* __WINCE_DEFINED_RASDEVINFO */
#endif /* __WINCE_DEFINED_TAGRASDEVINFO */
#ifndef __WINCE_DEFINED_PRASDEVINFO
#define __WINCE_DEFINED_PRASDEVINFO
typedef RASDEVINFO *PRASDEVINFO, *LPRASDEVINFO;
#endif /* __WINCE_DEFINED_PRASDEVINFO */

/* RASDIALPARAMS  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED__RASDIALPARAMS
#define __WINCE_DEFINED__RASDIALPARAMS
#ifndef __WINCE_DEFINED_RASDIALPARAMS
#define __WINCE_DEFINED_RASDIALPARAMS
typedef struct _RASDIALPARAMS {
 DWORD dwSize;
 TCHAR szEntryName[ RAS_MaxEntryName + 1 ];
 TCHAR szPhoneNumber[ RAS_MaxPhoneNumber + 1 ];
 TCHAR szCallbackNumber[ RAS_MaxCallbackNumber + 1 ];
 TCHAR szUserName[ UNLEN + 1 ];
 TCHAR szPassword[ PWLEN + 1 ];
 TCHAR szDomain[ DNLEN + 1 ];
} RASDIALPARAMS;
#endif /* __WINCE_DEFINED_RASDIALPARAMS */
#endif /* __WINCE_DEFINED__RASDIALPARAMS */
#ifndef __WINCE_DEFINED_PRASDIALPARAMS
#define __WINCE_DEFINED_PRASDIALPARAMS
typedef RASDIALPARAMS *PRASDIALPARAMS, *LPRASDIALPARAMS;
#endif /* __WINCE_DEFINED_PRASDIALPARAMS */

/* RASENTRYNAME  [struct, typedef; ce-only] */
#ifndef __WINCE_DEFINED__RASENTRYNAME
#define __WINCE_DEFINED__RASENTRYNAME
#ifndef __WINCE_DEFINED_RASENTRYNAME
#define __WINCE_DEFINED_RASENTRYNAME
typedef struct _RASENTRYNAME {
 DWORD dwSize;
 TCHAR szEntryName[ RAS_MaxEntryName + 1 ];
} RASENTRYNAME;
#endif /* __WINCE_DEFINED_RASENTRYNAME */
#endif /* __WINCE_DEFINED__RASENTRYNAME */
#ifndef __WINCE_DEFINED_PRASENTRYNAME
#define __WINCE_DEFINED_PRASENTRYNAME
typedef RASENTRYNAME *PRASENTRYNAME, *LPRASENTRYNAME;
#endif /* __WINCE_DEFINED_PRASENTRYNAME */

/* RASIPADDR  [struct; ce-only] */
#ifndef __WINCE_DEFINED_RASIPADDR
#define __WINCE_DEFINED_RASIPADDR
typedef struct RASIPADDR {
 BYTE a;
 BYTE b;
 BYTE c;
 BYTE d;
} RASIPADDR;
#endif /* __WINCE_DEFINED_RASIPADDR */
#ifndef __WINCE_DEFINED_PRASIPADDR
#define __WINCE_DEFINED_PRASIPADDR
typedef RASIPADDR *PRASIPADDR, *LPRASIPADDR;
#endif /* __WINCE_DEFINED_PRASIPADDR */

/* RASPROJECTION  [enum; ce-only] */
#ifndef __WINCE_DEFINED__RASPROJECTION
#define __WINCE_DEFINED__RASPROJECTION
#ifndef __WINCE_DEFINED_RASPROJECTION
#define __WINCE_DEFINED_RASPROJECTION
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
#endif /* __WINCE_DEFINED_RASPROJECTION */
#endif /* __WINCE_DEFINED__RASPROJECTION */
#ifndef __WINCE_DEFINED_PRASPROJECTION
#define __WINCE_DEFINED_PRASPROJECTION
typedef RASPROJECTION *PRASPROJECTION, *LPRASPROJECTION;
#endif /* __WINCE_DEFINED_PRASPROJECTION */

/* RASCNTL_SERVERLINE  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGRASCNTLSERVERLINE
#define __WINCE_DEFINED_TAGRASCNTLSERVERLINE
#ifndef __WINCE_DEFINED_RASCNTL_SERVERLINE
#define __WINCE_DEFINED_RASCNTL_SERVERLINE
#ifndef __WINCE_DEFINED_PRASCNTL_SERVERLINE
#define __WINCE_DEFINED_PRASCNTL_SERVERLINE
typedef struct tagRasCntlServerLine {
 RASDEVINFO rasDevInfo;
 BOOL bEnable;
 DWORD bmFlags;
 UINT DisconnectIdleSeconds;
 DWORD dwDevConfigSize;
 BYTE DevConfig[1];
} RASCNTL_SERVERLINE, *PRASCNTL_SERVERLINE;
#endif /* __WINCE_DEFINED_PRASCNTL_SERVERLINE */
#endif /* __WINCE_DEFINED_RASCNTL_SERVERLINE */
#endif /* __WINCE_DEFINED_TAGRASCNTLSERVERLINE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 2.11..2.12, 3.0..699 */

/* RasDeleteEntry  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasDeleteEntryA,RasDeleteEntryW (CE is W-side)] */
DWORD RasDeleteEntry(LPWSTR lpszPhonebook,
 LPWSTR lpszEntry);

/* RasEnumEntries  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasEnumEntriesA,RasEnumEntriesW (CE is W-side)] */
DWORD RasEnumEntries(LPWSTR Reserved,
 LPWSTR lpszPhoneBookPath,
 LPRASENTRYNAME lprasentryname,
 LPDWORD lpcb,
 LPDWORD lpcEntries);

/* RasGetEntryDialParams  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasGetEntryDialParamsA,RasGetEntryDialParamsW (CE is W-side)] */
DWORD RasGetEntryDialParams(LPWSTR lpszPhoneBook,
 LPRASDIALPARAMS lpRasDialParams,
 LPBOOL lpfPassword);

/* RasRenameEntry  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasRenameEntryA,RasRenameEntryW (CE is W-side)] */
DWORD RasRenameEntry(LPWSTR lpszPhonebook,
 LPWSTR lpszOldEntry,
 LPWSTR lpszNewEntry);

/* RasSetEntryDialParams  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasSetEntryDialParamsA,RasSetEntryDialParamsW (CE is W-side)] */
DWORD RasSetEntryDialParams(LPWSTR lpszPhoneBook,
 LPRASDIALPARAMS lpRasDialParams,
 BOOL fRemovePassword);

/* RasValidateEntryName  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasValidateEntryNameA,RasValidateEntryNameW (CE is W-side)] */
DWORD RasValidateEntryName(LPWSTR lpszPhonebook,
 LPWSTR lpszEntry);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* RasGetEapConnectionData  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
DWORD RasGetEapConnectionData(LPCTSTR pszPhonebook,
 LPCTSTR pszEntry,
 PBYTE pbEapData,
 PDWORD pdwSizeofEapData);

/* RasGetEapUserData  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib; A/W RasGetEapUserDataA,RasGetEapUserDataW (CE is W-side)] */
DWORD RasGetEapUserData(HANDLE hToken,
 LPCTSTR pszPhonebook,
 LPCTSTR pszEntry,
 PBYTE pbEapData,
 PDWORD pdwSizeofEapData);

/* RasSetEapConnectionData  [function; ce-only; CE 4.0..699; Coredll.lib, coredll.lib] */
DWORD RasSetEapConnectionData (LPCTSTR pszPhonebook,
 LPCTSTR pszEntry,
 PBYTE pbEapData,
 PDWORD pdwSizeofEapData);

/* RasSetEapUserData  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib; A/W RasSetEapUserDataA,RasSetEapUserDataW (CE is W-side)] */
DWORD RasSetEapUserData(HANDLE hToken,
 LPCTSTR pszPhonebook,
 LPCTSTR pszEntry,
 BYTE* pbEapData,
 DWORD dwSizeofEapData);
#endif /* _WIN32_WCE */

#endif /* _RAS_ */
