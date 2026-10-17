/* Winsock2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 71 constants, 96 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _WINSOCK2_
#define _WINSOCK2_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define AF_APPLETALK 16
#define AF_BTH 32
#define AF_INET 2
#define AF_INET6 23
#define AF_IPX 6
#define AF_IRDA 26
#define AF_NETBIOS 17
#define BTHPROTO_RFCOMM 3
#define IPPROTO_ICMP 1
#define IPPROTO_ICMPV6 58
#define IPPROTO_IGMP 2
#define IPPROTO_RM 113
#define IPPROTO_TCP 6
#define IPPROTO_UDP 17
#define LUP_CONTAINERS 0x0002
#define LUP_DEEP 0x0001
#define LUP_FLUSHCACHE 0x2000
#define LUP_FLUSHPREVIOUS 0x1000
#define LUP_NEAREST 0x0008
#define LUP_NOCONTAINERS 0x0004
#define LUP_RES_SERVICE 0x8000
#define LUP_RETURN_ADDR 0x0100
#define LUP_RETURN_ALIASES 0x0400
#define LUP_RETURN_ALL 0x0FF0
#define LUP_RETURN_BLOB 0x0200
#define LUP_RETURN_COMMENT 0x0080
#define LUP_RETURN_NAME 0x0010
#define LUP_RETURN_QUERY_STRING 0x0800
#define LUP_RETURN_TYPE 0x0020
#define LUP_RETURN_VERSION 0x0040
#define PFL_HIDDEN 0x00000004
#define PFL_MATCHES_PROTOCOL_ZERO 0x00000008
#define PFL_MULTIPLE_PROTO_ENTRIES 0x00000001
#define PFL_NETWORKDIRECT_PROVIDER 0x00000010
#define PFL_RECOMMENDED_PROTO_ENTRY 0x00000002
#define SD_BOTH 2
#define SD_RECEIVE 0
#define SD_SEND 1
#define SG_CONSTRAINED_GROUP 0x02
#define SG_UNCONSTRAINED_GROUP 0x01
#define SOCK_DGRAM 2
#define SOCK_RAW 3
#define SOCK_RDM 4
#define SOCK_SEQPACKET 5
#define SOCK_STREAM 1
#define WSA_FLAG_ACCESS_SYSTEM_SECURITY 0x40
#define WSA_FLAG_MULTIPOINT_C_LEAF 0x04
#define WSA_FLAG_MULTIPOINT_C_ROOT 0x02
#define WSA_FLAG_MULTIPOINT_D_LEAF 0x10
#define WSA_FLAG_MULTIPOINT_D_ROOT 0x08
#define WSA_FLAG_NO_HANDLE_INHERIT 0x80
#define WSA_FLAG_OVERLAPPED 0x01
#define XP1_CONNECT_DATA 0x00000080
#define XP1_CONNECTIONLESS 0x00000001
#define XP1_DISCONNECT_DATA 0x00000100
#define XP1_EXPEDITED_DATA 0x00000040
#define XP1_GRACEFUL_CLOSE 0x00000020
#define XP1_GUARANTEED_DELIVERY 0x00000002
#define XP1_GUARANTEED_ORDER 0x00000004
#define XP1_IFS_HANDLES 0x00020000
#define XP1_MESSAGE_ORIENTED 0x00000008
#define XP1_MULTIPOINT_CONTROL_PLANE 0x00000800
#define XP1_MULTIPOINT_DATA_PLANE 0x00001000
#define XP1_PARTIAL_MESSAGE 0x00040000
#define XP1_PSEUDO_STREAM 0x00000010
#define XP1_QOS_SUPPORTED 0x00002000
#define XP1_SAN_SUPPORT_SDP 0x00080000
#define XP1_SUPPORT_BROADCAST 0x00000200
#define XP1_SUPPORT_MULTIPOINT 0x00000400
#define XP1_UNI_RECV 0x00010000
#define XP1_UNI_SEND 0x00008000

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* _DSCP_TRAFFIC_TYPE  [enum; ce-only] */
typedef enum _DSCP_TRAFFIC_TYPE {
 DSCPTypeNotSet = 0,
 DSCPBestEffort = 1,
 DSCPBackground = 2,
 DSCPExcellentEffort = 3,
 DSCPVideo = 4,
 DSCPAudio = 5,
 DSCPControl = 6,
 NumDSCPTrafficTypes = 6
} DSCP_TRAFFIC_TYPE

/* AFPROTOCOLS  [struct; shared] */
typedef struct _AFPROTOCOLS {
 INT iAddressFamily;
 INT iProtocol;
} AFPROTOCOLS, *PAFPROTOCOLS, *LPAFPROTOCOLS;

/* BLOB  [struct; shared] */
typedef struct _BLOB {
 ULONG cbSize; 
 BYTE* pBlobData; 
} BLOB, LPBLOB;

/* gethostbyaddr  [struct, function; shared; winsock.lib, Ws2.lib] */
struct hostent FAR* gethostbyaddr(
 const char FAR* addr,
 int len,
 int type
);

/* gethostbyname  [struct, function; shared; winsock.lib, Ws2.lib] */
struct hostent FAR* gethostbyname(
 const char FAR* name 
);

/* hostent  [struct; shared] */
struct hostent {
 char FAR* h_name;
 char FAR* FAR* h_aliases;
 short h_addrtype;
 short h_length;
 char FAR* FAR* h_addr_list;
};

/* IN_ADDR  [struct, typedef; shared] */
struct in_addr {
 union {
 struct { u_char s_b1,s_b2,s_b3,s_b4; } S_un_b;
 struct { u_short s_w1,s_w2; } S_un_w;
 u_long S_addr;
 } S_un;
};

/* inet_ntoa  [struct, function; shared; winsock.lib, Ws2.lib] */
char FAR* inet_ntoa(
 struct in_addr in
);

/* LINGER  [struct, typedef; shared] */
struct linger {
 u_short l_onoff;
 u_short l_linger;
};

/* PROTOCOL_INFO  [struct; shared; A/W PROTOCOL_INFOA,PROTOCOL_INFOW (CE is W-side)] */
typedef struct _PROTOCOL_INFO { 
 DWORD dwServiceFlags; 
 INT iAddressFamily; 
 INT iMaxSockAddr; 
 INT iMinSockAddr; 
 INT iSocketType; 
 INT iProtocol; 
 DWORD dwMessageSize; 
 LPTSTR lpProtocol;
} PROTOCOL_INFO;
typedef PROTOCOL_INFO *PPROTOCOL_INFO, *LPPROTOCOL_INFO;

/* protoent  [struct; shared] */
struct protoent {
 char FAR* p_name;
 char FAR* FAR* p_aliases;
 short p_proto;
};

/* select  [struct, function; shared; winsock.lib, Ws2.lib] */
int select(
 int nfds,
 fd_set FAR* readfds,
 fd_set FAR* writefds,
 fd_set FAR* exceptfds,
 const struct timeval FAR* timeout
);

/* servent  [struct; shared] */
struct servent {
 char FAR* s_name;
 char FAR* FAR* s_aliases;
 short s_port;
 char FAR* s_proto;
};

/* SERVICE_ADDRESS  [struct; shared] */
typedef struct _SERVICE_ADDRESS { 
 DWORD dwAddressType; 
 DWORD dwAddressFlags; 
 DWORD dwAddressLength; 
 DWORD dwPrincipalLength; 
 BYTE* lpAddress; 
 BYTE* lpPrincipal; 
} SERVICE_ADDRESS;
typedef SERVICE_ADDRESS *PSERVICE_ADDRESS, *LPSERVICE_ADDRESS;

/* SERVICE_ADDRESSES  [struct; shared] */
typedef struct _SERVICE_ADDRESSES { 
 DWORD dwAddressCount; 
 SERVICE_ADDRESS Addresses[1]; 
} SERVICE_ADDRESSES;
typedef SERVICE_ADDRESSES *PSERVICE_ADDRESSES, *LPSERVICE_ADDRESSES;

/* SERVICE_TYPE_VALUE_ABS  [struct; shared; A/W SERVICE_TYPE_VALUE_ABSA,SERVICE_TYPE_VALUE_ABSW (CE is W-side)] */
typedef struct _SERVICE_TYPE_VALUE_ABS { 
 DWORD dwNameSpace; 
 DWORD dwValueType; 
 DWORD dwValueSize; 
 LPTSTR lpValueName; 
 PVOID lpValue; 
} SERVICE_TYPE_VALUE_ABS;
typedef SERVICE_TYPE_VALUE_ABS *PSERVICE_TYPE_VALUE_ABS, *LPSERVICE_TYPE_VALUE_ABS;

/* SOCKADDR  [struct, typedef; shared] */
struct sockaddr {
 u_short sa_family;
 char sa_data[14];
};

/* SOCKADDR_IN  [struct, typedef; shared] */
struct sockaddr_in{
 short sin_family;
 unsigned short sin_port;
 IN_ADDR sin_addr;
 char sin_zero[8];
};

/* SOCKADDR_IRDA  [struct, typedef; shared] */
struct sockaddr_irda { 
 u_short irdaAddressFamily; 
 u_char irdaDeviceID[4]; 
 char irdaServiceName[25];};

/* SOCKADDR_STORAGE  [struct; ce-only] */
typedef struct sockaddr_storage {
 short ss_family;
 char __ss_pad1[_SS_PAD1SIZE];
 __int64 __ss_align;
 char __ss_pad2[_SS_PAD2SIZE];
} SOCKADDR_STORAGE, *PSOCKADDR_STORAGE;

/* SOCKET_ADDRESS  [struct; shared] */
typedef struct _SOCKET_ADDRESS {
 LPSOCKADDR lpSockaddr;
 INT iSockaddrLength;
} SOCKET_ADDRESS, *PSOCKET_ADDRESS;

/* timeval  [struct; shared] */
struct timeval {
 long tv_sec;
 long tv_usec;
};

/* TRANSMIT_FILE_BUFFERS  [struct; shared] */
typedef struct _TRANSMIT_FILE_BUFFERS { 
 PVOID Head; 
 DWORD HeadLength; 
 PVOID Tail; 
 DWORD TailLength; 
} TRANSMIT_FILE_BUFFERS;
typedef TRANSMIT_FILE_BUFFERS *PTRANSMIT_FILE_BUFFERS, *LPTRANSMIT_FILE_BUFFERS;

/* WSABUF  [struct; shared] */
typedef struct __WSABUF {
 u_long len;
 char FAR* buf;
} WSABUF, FAR* LPWSABUF;

/* WSADATA  [struct, typedef; shared] */
typedef struct WSAData {
 WORD wVersion;
 WORD wHighVersion;
 char szDescription[WSADESCRIPTION_LEN+1];
 char szSystemStatus[WSASYS_STATUS_LEN+1];
 unsigned short iMaxSockets;
 unsigned short iMaxUdpDg;
 char FAR* lpVendorInfo;
} WSADATA, *LPWSADATA;

/* WSAECOMPARATOR  [enum; shared] */
typedef enum _WSAEcomparator {
 COMP_EQUAL = 0,
 COMP_NOTLESS
} WSAECOMPARATOR, *PWSAECOMPARATOR;

/* CSADDR_INFO  [struct; shared] */
typedef struct _CSADDR_INFO { 
 SOCKET_ADDRESS LocalAddr; 
 SOCKET_ADDRESS RemoteAddr; 
 INT iSocketType; 
 INT iProtocol; 
} CSADDR_INFO;
typedef CSADDR_INFO *PCSADDR_INFO, *LPCSADDR_INFO;

/* SERVICE_TYPE_INFO_ABS  [struct; shared; A/W SERVICE_TYPE_INFO_ABSA,SERVICE_TYPE_INFO_ABSW (CE is W-side)] */
typedef struct _SERVICE_TYPE_INFO_ABS { 
 LPTSTR lpTypeName; 
 DWORD dwValueCount; 
 SERVICE_TYPE_VALUE_ABS Values[1]; 
} SERVICE_TYPE_INFO_ABS;
typedef SERVICE_TYPE_INFO_ABS *PSERVICE_TYPE_INFO_ABS, *LPSERVICE_TYPE_INFO_ABS;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 0x200) || (_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* WSACleanup  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int WSACleanup (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x700)) /* CE 2.11..2.12, 3.0..699 */

/* gethostname  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib; A/W GetHostNameW (CE is W-side)] */
int gethostname(
 char FAR* name,
 int namelen
);

/* htonl  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
u_long htonl(
 u_long hostlong
);

/* htons  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
u_short htons(
 u_short hostshort
);

/* inet_addr  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
unsigned long inet_addr(
 const char FAR* cp
);

/* ntohl  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
u_long ntohl(
 u_long netlong
);

/* ntohs  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
u_short ntohs(
 u_short netshort
);

/* WSAGetLastError  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int WSAGetLastError(void);

/* WSAStartup  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int WSAStartup(
 WORD wVersionRequested,
 LPWSADATA lpWSAData
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* WSALookupServiceEnd  [function; shared; CE 4.0..699; Btdrt.lib, Ws2.lib] */
INT WSALookupServiceEnd(
 HANDLE hLookup
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* sethostname  [function; ce-only; CE 5.0..699; Ws2.lib] */
int sethostname(
 char* pName,
 int cName
);
#endif /* _WIN32_WCE */

#endif /* _WINSOCK2_ */
