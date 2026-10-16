/* Ras.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 21 constants, 44 declarations, 1 outlines, 0 base types, 0 extra macros, 12 extra decls
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

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RASCNTL_SERVERUSERCREDENTIALS  [struct; ce-only] */

/* RASPPPIP  [struct; ce-only] */
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

/* RASPPPIPV6  [struct, macro; ce-only] */
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

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* RASDEVINFO  [struct; ce-only] */
typedef struct tagRASDEVINFO {
 DWORD dwSize;
 CHAR szDeviceType[ RAS_MaxDeviceType + 1 ];
 CHAR szDeviceName[ RAS_MaxDeviceName + 1 ];
} RASDEVINFO;

/* RASENTRYNAME  [struct, typedef; ce-only] */
typedef struct _RASENTRYNAME {
 DWORD dwSize;
 TCHAR szEntryName[ RAS_MaxEntryName + 1 ];
} RASENTRYNAME;

/* RASIPADDR  [struct; ce-only] */
typedef struct RASIPADDR {
 BYTE a;
 BYTE b;
 BYTE c;
 BYTE d;
} RASIPADDR;

/* RASPROJECTION  [enum; ce-only] */
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

/* PBYTEpBuffer  [extra typedef] */
typedef DWORD(APIENTRY *PFNRASFREEBUFFER)(PBYTEpBuffer );

/* HANDLEhEvent  [extra typedef] */
typedef DWORD(APIENTRY *PFNRASRECEIVEBUFFER)(HANDLEhPort,PBYTEpBuffer,PDWORDpdwSize,DWORDdwTimeout,HANDLEhEvent);

/* PDWORDpdwSize  [extra typedef] */
typedef DWORD(APIENTRY *PFNRASRETRIEVEBUFFER)(HANDLEhPort,PBYTEpBuffer,PDWORDpdwSize);

/* PDWORDdwSize  [extra typedef] */
typedef DWORD(APIENTRY *PFNRASSENDBUFFER)(HANDLEhPort,PBYTEpBuffer,PDWORDdwSize);

/* PRAS_STATS  [extra struct] */
typedef struct _RAS_STATS {DWORDdwSize;DWORDdwBytesXmited;DWORDdwBytesRcved;DWORDdwFramesXmited;DWORDdwFramesRcved;DWORDdwCrcErr;DWORDdwTimeoutErr;DWORDdwAlignmentErr;DWORDdwHardwareOverrunErr;DWORDdwFramingErr;DWORDdwBufferOverrunErr;DWORDdwCompressionRatioIn;DWORDdwCompressionRatioOut;DWORDdwBps;DWORDdwConnectDuration;} RAS_STATS, *PRAS_STATS;

/* PRASCNTL_SERVERSTATUS  [extra struct] */
typedef struct tagRasCntlServerStatus {BOOLbEnable;DWORDbmFlags;BOOLbUseDhcpAddresses;DWORDdwStaticIpAddrStart;DWORDdwStaticIpAddrCount;DWORD bmAuthenticationMethods;DWORDdwNumLines;} RASCNTL_SERVERSTATUS, *PRASCNTL_SERVERSTATUS;

/* PRASCNTL_SERVERCONNECTION  [extra struct] */
typedef struct tagRasCntlServerConnection { RASDEVINFO rasDevInfo; HRASCONN hrasconn; DWORD dwServerIpAddress; DWORD dwClientIpAddress; RASCONNSTATE RasConnState; TCHAR tszUserName[DNLEN + 1 + UNLEN + 1];} RASCNTL_SERVERCONNECTION, *PRASCNTL_SERVERCONNECTION;

/* PRASCNTL_SERVER_IPV6_NET_PREFIX  [extra struct] */
typedef struct tagRasCntlServerIPV6NetPrefix { BYTE IPV6NetPrefix[16]; DWORD IPV6NetPrefixBitLength; DWORD IPV6NetPrefixCount;} RASCNTL_SERVER_IPV6_NET_PREFIX, *PRASCNTL_SERVER_IPV6_NET_PREFIX;

/* pdwSize  [extra typedef] */
typedef DWORD (APIENTRY *PFNRASGETBUFFER)( PBYTE* ppBuffer,  PDWORD pdwSize  );

/* hEvent  [extra typedef] */
typedef DWORD (APIENTRY *PFNRASRECEIVEBUFFER)( HANDLE hPort, PBYTE pBuffer, PDWORD pdwSize, DWORD dwTimeout, HANDLE hEvent );

/* RASPPPIPW  [extra struct] */
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

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 2.11..2.12, 3.0..699 */

/* RasDeleteEntry  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasDeleteEntryA,RasDeleteEntryW (CE is W-side)] */
DWORD RasDeleteEntry(
 LPWSTR lpszPhonebook, 
 LPWSTR lpszEntry 
);

/* RasRenameEntry  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasRenameEntryA,RasRenameEntryW (CE is W-side)] */
DWORD RasRenameEntry(
 LPWSTR lpszPhonebook, 
 LPWSTR lpszOldEntry, 
 LPWSTR lpszNewEntry 
);

/* RasValidateEntryName  [function; shared; CE 2.11..2.12, 3.0..699; Coredll.lib, coredll.lib, Ppp.lib, ppp.lib; A/W RasValidateEntryNameA,RasValidateEntryNameW (CE is W-side)] */
DWORD RasValidateEntryName(
 LPWSTR lpszPhonebook, 
 LPWSTR lpszEntry 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* RasSetEapUserData  [function; shared; CE 4.0..699; Coredll.lib, coredll.lib; A/W RasSetEapUserDataA,RasSetEapUserDataW (CE is W-side)] */
DWORD RasSetEapUserData(
 HANDLE hToken,
 LPCTSTR pszPhonebook, 
 LPCTSTR pszEntry,
 BYTE* pbEapData,
 DWORD dwSizeofEapData
);
#endif /* _WIN32_WCE */

#endif /* _RAS_ */
