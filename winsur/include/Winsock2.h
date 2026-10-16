/* Winsock2.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 201 constants, 94 declarations, 1 outlines, 0 base types, 0 extra macros, 21 extra decls
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
#define AF_INET 2
#define AF_INET6 23
#define AF_IPX 6
#define AF_IRDA 26
#define AF_NETBIOS 17
#define AF_UNSPEC 0
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
#define PF_3DNOW_INSTRUCTIONS_AVAILABLE 7
#define PF_ARM_64BIT_LOADSTORE_ATOMIC 25
#define PF_ARM_DIVIDE_INSTRUCTION_AVAILABLE 24
#define PF_ARM_EXTERNAL_CACHE_AVAILABLE 26
#define PF_ARM_FMAC_INSTRUCTIONS_AVAILABLE 27
#define PF_ARM_LSE2_AVAILABLE 62
#define PF_ARM_SHA3_INSTRUCTIONS_AVAILABLE 64
#define PF_ARM_SHA512_INSTRUCTIONS_AVAILABLE 65
#define PF_ARM_SME2_1_INSTRUCTIONS_AVAILABLE 72
#define PF_ARM_SME2_2_INSTRUCTIONS_AVAILABLE 73
#define PF_ARM_SME2_INSTRUCTIONS_AVAILABLE 71
#define PF_ARM_SME_AES_INSTRUCTIONS_AVAILABLE 74
#define PF_ARM_SME_B16B16_INSTRUCTIONS_AVAILABLE 84
#define PF_ARM_SME_F16F16_INSTRUCTIONS_AVAILABLE 83
#define PF_ARM_SME_F64F64_INSTRUCTIONS_AVAILABLE 85
#define PF_ARM_SME_F8F16_INSTRUCTIONS_AVAILABLE 82
#define PF_ARM_SME_F8F32_INSTRUCTIONS_AVAILABLE 81
#define PF_ARM_SME_FA64_INSTRUCTIONS_AVAILABLE 88
#define PF_ARM_SME_I16I64_INSTRUCTIONS_AVAILABLE 86
#define PF_ARM_SME_INSTRUCTIONS_AVAILABLE 70
#define PF_ARM_SME_SBITPERM_INSTRUCTIONS_AVAILABLE 75
#define PF_ARM_SME_SF8DP2_INSTRUCTIONS_AVAILABLE 78
#define PF_ARM_SME_SF8DP4_INSTRUCTIONS_AVAILABLE 79
#define PF_ARM_SME_SF8FMA_INSTRUCTIONS_AVAILABLE 80
#define PF_ARM_SME_SF8MM4_INSTRUCTIONS_AVAILABLE 76
#define PF_ARM_SME_SF8MM8_INSTRUCTIONS_AVAILABLE 77
#define PF_ARM_SVE2_1_INSTRUCTIONS_AVAILABLE 48
#define PF_ARM_SVE2_INSTRUCTIONS_AVAILABLE 47
#define PF_ARM_SVE_AES_INSTRUCTIONS_AVAILABLE 49
#define PF_ARM_SVE_B16B16_INSTRUCTIONS_AVAILABLE 54
#define PF_ARM_SVE_BF16_INSTRUCTIONS_AVAILABLE 52
#define PF_ARM_SVE_BITPERM_INSTRUCTIONS_AVAILABLE 51
#define PF_ARM_SVE_EBF16_INSTRUCTIONS_AVAILABLE 53
#define PF_ARM_SVE_F32MM_INSTRUCTIONS_AVAILABLE 58
#define PF_ARM_SVE_F64MM_INSTRUCTIONS_AVAILABLE 59
#define PF_ARM_SVE_I8MM_INSTRUCTIONS_AVAILABLE 57
#define PF_ARM_SVE_INSTRUCTIONS_AVAILABLE 46
#define PF_ARM_SVE_PMULL128_INSTRUCTIONS_AVAILABLE 50
#define PF_ARM_SVE_SHA3_INSTRUCTIONS_AVAILABLE 55
#define PF_ARM_SVE_SM4_INSTRUCTIONS_AVAILABLE 56
#define PF_ARM_V81_ATOMIC_INSTRUCTIONS_AVAILABLE 34
#define PF_ARM_V82_DP_INSTRUCTIONS_AVAILABLE 43
#define PF_ARM_V82_FP16_INSTRUCTIONS_AVAILABLE 67
#define PF_ARM_V82_I8MM_INSTRUCTIONS_AVAILABLE 66
#define PF_ARM_V83_JSCVT_INSTRUCTIONS_AVAILABLE 44
#define PF_ARM_V83_LRCPC_INSTRUCTIONS_AVAILABLE 45
#define PF_ARM_V86_BF16_INSTRUCTIONS_AVAILABLE 68
#define PF_ARM_V86_EBF16_INSTRUCTIONS_AVAILABLE 69
#define PF_ARM_V8_CRC32_INSTRUCTIONS_AVAILABLE 31
#define PF_ARM_V8_CRYPTO_INSTRUCTIONS_AVAILABLE 30
#define PF_ARM_V8_INSTRUCTIONS_AVAILABLE 29
#define PF_ARM_VFP_32_REGISTERS_AVAILABLE 18
#define PF_AVX2_INSTRUCTIONS_AVAILABLE 40
#define PF_AVX512F_INSTRUCTIONS_AVAILABLE 41
#define PF_AVX_INSTRUCTIONS_AVAILABLE 39
#define PF_BMI2_INSTRUCTIONS_AVAILABLE 60
#define PF_CHANNELS_ENABLED 16
#define PF_COMPARE64_EXCHANGE128 15
#define PF_COMPARE_EXCHANGE128 14
#define PF_COMPARE_EXCHANGE_DOUBLE 2
#define PF_FASTFAIL_AVAILABLE 23
#define PF_FLOATING_POINT_EMULATED 1
#define PF_FLOATING_POINT_PRECISION_ERRATA 0
#define PF_MMX_INSTRUCTIONS_AVAILABLE 3
#define PF_MOVDIR64B_INSTRUCTION_AVAILABLE 61
#define PF_NX_ENABLED 12
#define PF_PAE_ENABLED 9
#define PF_RDTSC_INSTRUCTION_AVAILABLE 8
#define PF_RDWRFSGSBASE_AVAILABLE 22
#define PF_SECOND_LEVEL_ADDRESS_TRANSLATION 20
#define PF_SSE3_INSTRUCTIONS_AVAILABLE 13
#define PF_SSE4_1_INSTRUCTIONS_AVAILABLE 37
#define PF_SSE4_2_INSTRUCTIONS_AVAILABLE 38
#define PF_SSSE3_INSTRUCTIONS_AVAILABLE 36
#define PF_UMONITOR_INSTRUCTION_AVAILABLE 89
#define PF_VIRT_FIRMWARE_ENABLED 21
#define PF_XMMI64_INSTRUCTIONS_AVAILABLE 10
#define PF_XMMI_INSTRUCTIONS_AVAILABLE 6
#define PF_XSAVE_ENABLED 17
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
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define WSAEACCES 10013
#define WSAEADDRINUSE 10048
#define WSAEADDRNOTAVAIL 10049
#define WSAEAFNOSUPPORT 10047
#define WSAEALREADY 10037
#define WSAECONNABORTED 10053
#define WSAECONNREFUSED 10061
#define WSAECONNRESET 10054
#define WSAEDESTADDRREQ 10039
#define WSAEDISCON 10101
#define WSAEFAULT 10014
#define WSAEHOSTDOWN 10064
#define WSAEHOSTUNREACH 10065
#define WSAEINPROGRESS 10036
#define WSAEINTR 10004
#define WSAEINVAL 10022
#define WSAEISCONN 10056
#define WSAEMFILE 10024
#define WSAEMSGSIZE 10040
#define WSAENETDOWN 10050
#define WSAENETRESET 10052
#define WSAENETUNREACH 10051
#define WSAENOBUFS 10055
#define WSAENOPROTOOPT 10042
#define WSAENOTCONN 10057
#define WSAENOTSOCK 10038
#define WSAEOPNOTSUPP 10045
#define WSAEPFNOSUPPORT 10046
#define WSAEPROCLIM 10067
#define WSAEPROTONOSUPPORT 10043
#define WSAEPROTOTYPE 10041
#define WSAESHUTDOWN 10058
#define WSAESOCKTNOSUPPORT 10044
#define WSAETIMEDOUT 10060
#define WSAEWOULDBLOCK 10035
#define WSAHOST_NOT_FOUND 11001
#define WSANO_DATA 11004
#define WSANO_RECOVERY 11003
#define WSANOTINITIALISED 10093
#define WSASYSNOTREADY 10091
#define WSATRY_AGAIN 11002
#define WSATYPE_NOT_FOUND 10109
#define WSAVERNOTSUPPORTED 10092
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define COMP_EQUAL 0
#define DSCPAudio 5
#define DSCPBackground 2
#define DSCPBestEffort 1
#define DSCPControl 6
#define DSCPExcellentEffort 3
#define DSCPTypeNotSet 0
#define DSCPVideo 4
#define NumDSCPTrafficTypes 6
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* NDIS_PACKET_8021Q_INFO  [struct; ce-only; CE 6.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699 */

/* hostent  [struct; shared; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699] */
struct hostent {
 char FAR* h_name;
 char FAR* FAR* h_aliases;
 short h_addrtype;
 short h_length;
 char FAR* FAR* h_addr_list;
};

/* WSADATA  [struct, typedef; shared; CE 1.0..199, 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct WSAData {
 WORD wVersion;
 WORD wHighVersion;
 char szDescription[WSADESCRIPTION_LEN+1];
 char szSystemStatus[WSASYS_STATUS_LEN+1];
 unsigned short iMaxSockets;
 unsigned short iMaxUdpDg;
 char FAR* lpVendorInfo;
} WSADATA, *LPWSADATA;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* IN_ADDR  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
struct in_addr {
 union {
 struct { u_char s_b1,s_b2,s_b3,s_b4; } S_un_b;
 struct { u_short s_w1,s_w2; } S_un_w;
 u_long S_addr;
 } S_un;
};

/* LINGER  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
struct linger {
 u_short l_onoff;
 u_short l_linger;
};

/* SOCKADDR  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
struct sockaddr {
 u_short sa_family;
 char sa_data[14];
};

/* SOCKADDR_IN  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
struct sockaddr_in{
 short sin_family;
 unsigned short sin_port;
 IN_ADDR sin_addr;
 char sin_zero[8];
};

/* SOCKADDR_IRDA  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
struct sockaddr_irda { 
 u_short irdaAddressFamily; 
 u_char irdaDeviceID[4]; 
 char irdaServiceName[25];};
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* accept  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
SOCKET accept(
 SOCKET s,
 struct sockaddr FAR* addr,
 int FAR* addrlen
);

/* bind  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int bind(
 SOCKET s,
 const struct sockaddr FAR* name,
 int namelen
);

/* connect  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int connect(
 SOCKET s,
 const struct sockaddr FAR* name,
 int namelen
);

/* gethostbyaddr  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
struct hostent FAR* gethostbyaddr(
 const char FAR* addr,
 int len,
 int type
);

/* gethostbyname  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
struct hostent FAR* gethostbyname(
 const char FAR* name 
);

/* getpeername  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int getpeername(
 SOCKET s,
 struct sockaddr FAR* name,
 int FAR* namelen
);

/* getsockname  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int getsockname(
 SOCKET s,
 struct sockaddr FAR* name,
 int FAR* namelen
);

/* inet_ntoa  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
char FAR* inet_ntoa(
 struct in_addr in
);

/* recvfrom  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int recvfrom(
 SOCKET s,
 char FAR* buf,
 int len,
 int flags,
 struct sockaddr FAR* from,
 int FAR* fromlen
);

/* select  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int select(
 int nfds,
 fd_set FAR* readfds,
 fd_set FAR* writefds,
 fd_set FAR* exceptfds,
 const struct timeval FAR* timeout
);

/* sendto  [struct, function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int sendto(
 SOCKET s,
 const char FAR* buf, 
 int len,
 int flags,
 const struct sockaddr FAR* to,
 int tolen
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* AFPROTOCOLS  [struct; shared; CE 4.0..699] */
typedef struct _AFPROTOCOLS {
 INT iAddressFamily;
 INT iProtocol;
} AFPROTOCOLS, *PAFPROTOCOLS, *LPAFPROTOCOLS;

/* CSADDR_INFO  [struct; shared; CE 4.0..699] */
typedef struct _CSADDR_INFO { 
 SOCKET_ADDRESS LocalAddr; 
 SOCKET_ADDRESS RemoteAddr; 
 INT iSocketType; 
 INT iProtocol; 
} CSADDR_INFO;

/* fd_set  [struct, function; shared; CE 4.0..699] */
typedef struct fd_set {
 u_int fd_count;
 SOCKET fd_array[FD_SETSIZE];
} fd_set;

/* WSAAccept  [struct, function; shared; CE 4.0..699; Ws2.lib] */
SOCKET WSAAccept(
 SOCKET s,
 struct sockaddr FAR* addr,
 LPINT addrlen,
 LPCONDITIONPROC lpfnCondition,
 DWORD dwCallbackData
);

/* WSAConnect  [struct, function; shared; CE 4.0..699; Ws2.lib] */
int WSAConnect(
 SOCKET s,
 const struct sockaddr FAR* name,
 int namelen,
 LPWSABUF lpCallerData,
 LPWSABUF lpCalleeData,
 LPQOS lpSQOS,
 LPQOS lpGQOS 
);

/* WSAJoinLeaf  [struct, function; shared; CE 4.0..699; Ws2.lib] */
SOCKET WSAJoinLeaf(
 SOCKET s,
 const struct sockaddr FAR* name,
 int namelen,
 LPWSABUF lpCallerData,
 LPWSABUF lpCalleeData,
 LPQOS lpSQOS,
 LPQOS lpGQOS,
 DWORD dwFlags
);

/* WSAQUERYSET  [struct; shared; CE 4.0..699; A/W WSAQUERYSETA,WSAQUERYSETW (CE is W-side)] */
typedef struct _WSAQuerySet {
 DWORD dwSize;
 LPTSTR lpszServiceInstanceName;
 LPGUID lpServiceClassId;
 LPWSAVERSION lpVersion;
 LPTSTR lpszComment;
 DWORD dwNameSpace;
 LPGUID lpNSProviderId;
 LPTSTR lpszContext;
 DWORD dwNumberOfProtocols;
 LPAFPROTOCOLS lpafpProtocols;
 LPTSTR lpszQueryString;
 DWORD dwNumberOfCsAddrs;
 LPCSADDR_INFO lpcsaBuffer;
 DWORD dwOutputFlags;
 LPBLOB lpBlob;
} WSAQUERYSET, *PWSAQUERYSETW;

/* WSARecvFrom  [struct, function; shared; CE 4.0..699; Ws2.lib] */
int WSARecvFrom(
 SOCKET s,
 LPWSABUF lpBuffers,
 DWORD dwBufferCount,
 LPDWORD lpNumberOfBytesRecvd,
 LPDWORD lpFlags,
 struct sockaddr FAR* lpFrom,
 LPINT lpFromlen,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);

/* WSASendTo  [struct, function; shared; CE 4.0..699; Ws2.lib] */
int WSASendTo(
 SOCKET s,
 LPWSABUF lpBuffers,
 DWORD dwBufferCount,
 LPDWORD lpNumberOfBytesSent,
 DWORD dwFlags,
 const struct sockaddr FAR* lpTo,
 int iToLen,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* NS_SERVICE_INFO  [struct; shared; CE 5.0..699; A/W NS_SERVICE_INFOA,NS_SERVICE_INFOW (CE is W-side)] */
typedef struct _NS_SERVICE_INFO { 
 DWORD dwNameSpace; 
 SERVICE_INFO ServiceInfo; 
} NS_SERVICE_INFO;

/* PROTOCOL_INFO  [struct; shared; CE 5.0..699; A/W PROTOCOL_INFOA,PROTOCOL_INFOW (CE is W-side)] */
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

/* protoent  [struct; shared; CE 5.0..699] */
struct protoent {
 char FAR* p_name;
 char FAR* FAR* p_aliases;
 short p_proto;
};

/* servent  [struct; shared; CE 5.0..699] */
struct servent {
 char FAR* s_name;
 char FAR* FAR* s_aliases;
 short s_port;
 char FAR* s_proto;
};

/* SERVICE_ADDRESS  [struct; shared; CE 5.0..699] */
typedef struct _SERVICE_ADDRESS { 
 DWORD dwAddressType; 
 DWORD dwAddressFlags; 
 DWORD dwAddressLength; 
 DWORD dwPrincipalLength; 
 BYTE* lpAddress; 
 BYTE* lpPrincipal; 
} SERVICE_ADDRESS;

/* SERVICE_ADDRESSES  [struct; shared; CE 5.0..699] */
typedef struct _SERVICE_ADDRESSES { 
 DWORD dwAddressCount; 
 SERVICE_ADDRESS Addresses[1]; 
} SERVICE_ADDRESSES;

/* SERVICE_INFO  [struct; shared; CE 5.0..699; A/W SERVICE_INFOA,SERVICE_INFOW (CE is W-side)] */
typedef struct _SERVICE_INFO { 
 LPGUID lpServiceType; 
 LPTSTR lpServiceName; 
 LPTSTR lpComment; 
 LPTSTR lpLocale; 
 DWORD dwDisplayHint; 
 DWORD dwVersion; 
 DWORD dwTime; 
 LPTSTR lpMachineName; 
 LPSERVICE_ADDRESSES lpServiceAddress; 
 BLOB ServiceSpecificInfo; 
} SERVICE_INFO;

/* SERVICE_TYPE_INFO_ABS  [struct; shared; CE 5.0..699; A/W SERVICE_TYPE_INFO_ABSA,SERVICE_TYPE_INFO_ABSW (CE is W-side)] */
typedef struct _SERVICE_TYPE_INFO_ABS { 
 LPTSTR lpTypeName; 
 DWORD dwValueCount; 
 SERVICE_TYPE_VALUE_ABS Values[1]; 
} SERVICE_TYPE_INFO_ABS;

/* SERVICE_TYPE_VALUE_ABS  [struct; shared; CE 5.0..699; A/W SERVICE_TYPE_VALUE_ABSA,SERVICE_TYPE_VALUE_ABSW (CE is W-side)] */
typedef struct _SERVICE_TYPE_VALUE_ABS { 
 DWORD dwNameSpace; 
 DWORD dwValueType; 
 DWORD dwValueSize; 
 LPTSTR lpValueName; 
 PVOID lpValue; 
} SERVICE_TYPE_VALUE_ABS;

/* SOCKADDR_STORAGE  [struct; ce-only; CE 5.0..699] */
typedef struct sockaddr_storage {
 short ss_family;
 char __ss_pad1[_SS_PAD1SIZE];
 __int64 __ss_align;
 char __ss_pad2[_SS_PAD2SIZE];
} SOCKADDR_STORAGE, *PSOCKADDR_STORAGE;

/* SOCKET_ADDRESS  [struct; shared; CE 5.0..699] */
typedef struct _SOCKET_ADDRESS {
 LPSOCKADDR lpSockaddr;
 INT iSockaddrLength;
} SOCKET_ADDRESS, *PSOCKET_ADDRESS;

/* timeval  [struct; shared; CE 5.0..699] */
struct timeval {
 long tv_sec;
 long tv_usec;
};

/* TRANSMIT_FILE_BUFFERS  [struct; shared; CE 5.0..699] */
typedef struct _TRANSMIT_FILE_BUFFERS { 
 PVOID Head; 
 DWORD HeadLength; 
 PVOID Tail; 
 DWORD TailLength; 
} TRANSMIT_FILE_BUFFERS;

/* WSABUF  [struct; shared; CE 5.0..699] */
typedef struct __WSABUF {
 u_long len;
 char FAR* buf;
} WSABUF, FAR* LPWSABUF;

/* WSACOMPLETION  [struct; shared; CE 5.0..699] */
typedef struct _WSACOMPLETION {
 WSACOMPLETIONTYPE Type;
 union {
 struct {
 HWND hWnd;
 UINT uMsg;
 WPARAM context;
 } WindowMessage;
 struct {
 LPWSAOVERLAPPED lpOverlapped;
 } Event;
 struct {
 LPWSAOVERLAPPED lpOverlapped;
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpfnCompletionProc;
 } Apc;
 struct {
 LPWSAOVERLAPPED lpOverlapped;
 HANDLE hPort;
 ULONG_PTR Key;
 } Port;
 } Parameters;
} WSACOMPLETION, *PWSACOMPLETION, FAR *LPWSACOMPLETION;

/* WSAECOMPARATOR  [enum; shared; CE 5.0..699] */
typedef enum _WSAEcomparator {
 COMP_EQUAL = 0,
 COMP_NOTLESS
} WSAECOMPARATOR, *PWSAECOMPARATOR;

/* WSANAMESPACE_INFO  [struct; shared; CE 5.0..699; A/W WSANAMESPACE_INFOA,WSANAMESPACE_INFOW (CE is W-side)] */
typedef struct _WSANAMESPACE_INFO {
 GUID NSProviderId;
 DWORD dwNameSpace;
 BOOL fActive;
 DWORD dwVersion;
 LPTSTR lpszIdentifier;
} WSANAMESPACE_INFO, *PWSANAMESPACE_INFO;

/* WSANETWORKEVENTS  [struct; shared; CE 5.0..699] */
typedef struct _WSANETWORKEVENTS {
 long lNetworkEvents;
 int iErrorCode[FD_MAX_EVENTS];
} WSANETWORKEVENTS, *LPWSANETWORKEVENTS;

/* WSAOVERLAPPED  [struct; shared; CE 5.0..699] */
typedef struct _WSAOVERLAPPED {
 DWORD Internal;
 DWORD InternalHigh;
 DWORD Offset;
 DWORD OffsetHigh;
 WSAEVENT hEvent;
} WSAOVERLAPPED, *LPWSAOVERLAPPED;

/* WSAPROTOCOL_INFO  [struct; shared; CE 5.0..699; A/W WSAPROTOCOL_INFOA,WSAPROTOCOL_INFOW (CE is W-side)] */
typedef struct _WSAPROTOCOL_INFO {
 DWORD dwServiceFlags1;
 DWORD dwServiceFlags2;
 DWORD dwServiceFlags3;
 DWORD dwServiceFlags4;
 DWORD dwProviderFlags;
 GUID ProviderId;
 DWORD dwCatalogEntryId;
 WSAPROTOCOLCHAIN ProtocolChain;
 int iVersion;
 int iAddressFamily;
 int iMaxSockAddr;
 int iMinSockAddr;
 int iSocketType;
 int iProtocol;
 int iProtocolMaxOffset;
 int iNetworkByteOrder;
 int iSecurityScheme;
 DWORD dwMessageSize;
 DWORD dwProviderReserved;
 TCHAR szProtocol[WSAPROTOCOL_LEN+1];
} WSAPROTOCOL_INFO, *LPWSAPROTOCOL_INFO;

/* WSAPROTOCOLCHAIN  [struct; shared; CE 5.0..699] */
typedef struct _WSAPROTOCOLCHAIN {
 int ChainLen;
 DWORD ChainEntries[MAX_PROTOCOL_CHAIN];
} WSAPROTOCOLCHAIN, *LPWSAPROTOCOLCHAIN;

/* WSASERVICECLASSINFO  [struct; shared; CE 5.0..699; A/W WSASERVICECLASSINFOA,WSASERVICECLASSINFOW (CE is W-side)] */
typedef struct _WSAServiceClassInfo {
 LPGUID lpServiceClassId;
 LPTSTR lpszServiceClassName;
 DWORD dwCount;
 LPWSANSCLASSINFOW lpClassInfos;
} WSASERVICECLASSINFO, *PWSASERVICECLASSINFOW;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* _DSCP_TRAFFIC_TYPE  [enum; ce-only; CE 6.0..699] */
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
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 1.0..199, 2.11..2.12, 3.0..699 */

/* WSACleanup  [function; shared; CE 1.0..199, 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int WSACleanup (void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* closesocket  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int closesocket(
 SOCKET s
);

/* gethostname  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib; A/W GetHostNameW (CE is W-side)] */
int gethostname(
 char FAR* name,
 int namelen
);

/* getsockopt  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int getsockopt(
 SOCKET s,
 int level,
 int optname,
 char FAR* optval,
 int FAR* optlen
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

/* ioctlsocket  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int ioctlsocket(
 SOCKET s,
 long cmd,
 u_long FAR* argp
);

/* listen  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int listen(
 SOCKET s,
 int backlog
);

/* ntohl  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
u_long ntohl(
 u_long netlong
);

/* ntohs  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
u_short ntohs(
 u_short netshort
);

/* recv  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int recv(
 SOCKET s,
 char FAR* buf,
 int len,
 int flags
);

/* send  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int send(
 SOCKET s,
 const char FAR* buf,
 int len,
 int flags
);

/* setsockopt  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int setsockopt(
 SOCKET s,
 int level,
 int optname,
 const char FAR* optval,
 int optlen
);

/* shutdown  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int shutdown(
 SOCKET s,
 int how
);

/* socket  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
SOCKET socket(
 int af,
 int type,
 int protocol
);

/* WSAGetLastError  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int WSAGetLastError(void);

/* WSAIoctl  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int WSAIoctl(
 SOCKET s,
 DWORD dwIoControlCode,
 LPVOID lpvInBuffer,
 DWORD cbInBuffer,
 LPVOID lpvOutBuffer,
 DWORD cbOutBuffer,
 LPDWORD lpcbBytesReturned,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);

/* WSAStartup  [function; shared; CE 2.11..2.12, 3.0..699; winsock.lib, Ws2.lib] */
int WSAStartup(
 WORD wVersionRequested,
 LPWSADATA lpWSAData
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* WSAAddressToString  [function; shared; CE 4.0..699; Ws2.lib; A/W WSAAddressToStringA,WSAAddressToStringW (CE is W-side)] */
INT WSAAddressToString(
 LPSOCKADDR lpsaAddress,
 DWORD dwAddressLength,
 LPWSAPROTOCOL_INFO lpProtocolInfo,
 OUT LPTSTR lpszAddressString,
 IN OUT LPDWORD lpdwAddressStringLength
);

/* WSACloseEvent  [function; shared; CE 4.0..699; Ws2.lib] */
BOOL WSACloseEvent(
 WSAEVENT hEvent
);

/* WSACreateEvent  [function; shared; CE 4.0..699; Ws2.lib] */
WSAEVENT WSACreateEvent (void);

/* WSAEnumNameSpaceProviders  [function; shared; CE 4.0..699; Ws2.lib; A/W WSAEnumNameSpaceProvidersA,WSAEnumNameSpaceProvidersW (CE is W-side)] */
INT WSAAPI WSAEnumNameSpaceProviders(
 LPDWORD lpdwBufferLength,
 LPWSANAMESPACE_INFO lpnspBuffer
);

/* WSAEnumNetworkEvents  [function; shared; CE 4.0..699; Ws2.lib] */
int WSAEnumNetworkEvents(
 SOCKET s,
 WSAEVENT hEventObject,
 LPWSANETWORKEVENTS lpNetworkEvents
);

/* WSAEnumProtocols  [function; shared; CE 4.0..699; Ws2.lib; A/W WSAEnumProtocolsA,WSAEnumProtocolsW (CE is W-side)] */
int WSAEnumProtocols(
 LPINT lpiProtocols,
 LPWSAPROTOCOL_INFO lpProtocolBuffer,
 ILPDWORD lpdwBufferLength
);

/* WSAEventSelect  [function; shared; CE 4.0..699; Ws2.lib] */
int WSAEventSelect(
 SOCKET s,
 WSAEVENT hEventObject,
 long lNetworkEvents
);

/* WSAGetOverlappedResult  [function; shared; CE 4.0..699; Ws2.lib] */
BOOL WSAGetOverlappedResult(
 SOCKET s,
 LPWSAOVERLAPPED lpOverlapped,
 LPDWORD lpcbTransfer,
 BOOL fWait,
 LPDWORD lpdwFlags
);

/* WSAHtonl  [function; shared; CE 4.0..699; Ws2.lib] */
int WSAHtonl(
 SOCKET s,
 u_long hostlong,
 u_long FAR* lpnetlong
);

/* WSAHtons  [function; shared; CE 4.0..699; Ws2.lib] */
int WSAHtons(
 SOCKET s,
 u_short hostshort,
 u_short FAR* lpnetshort
);

/* WSALookupServiceBegin  [function; shared; CE 4.0..699; Btdrt.lib, Ws2.lib; A/W WSALookupServiceBeginA,WSALookupServiceBeginW (CE is W-side)] */
INT WSALookupServiceBegin(
 LPWSAQUERYSET lpqsRestrictions,
 DWORD dwControlFlags,
 LPHANDLE lphLookup
);

/* WSALookupServiceEnd  [function; shared; CE 4.0..699; Btdrt.lib, Ws2.lib] */
INT WSALookupServiceEnd(
 HANDLE hLookup
);

/* WSALookupServiceNext  [function; shared; CE 4.0..699; Btdrt.lib, Ws2.lib; A/W WSALookupServiceNextA,WSALookupServiceNextW (CE is W-side)] */
INT WSALookupServiceNext(
 HANDLE hLookup,
 DWORD dwControlFlags,
 LPDWORD lpdwBufferLength,
 LPWSAQUERYSET lpqsResults
);

/* WSANtohl  [function; shared; CE 4.0..699; Ws2.lib] */
int WSANtohl(
 SOCKET s,
 u_long netlong,
 u_long FAR* lphostlong
);

/* WSANtohs  [function; shared; CE 4.0..699; Ws2.lib] */
int WSANtohs(
 SOCKET s,
 u_short netshort,
 u_short FAR* lphostshort
);

/* WSARecv  [function; shared; CE 4.0..699; Ws2.lib] */
int WSARecv(
 SOCKET s,
 LPWSABUF lpBuffers,
 DWORD dwBufferCount,
 LPDWORD lpNumberOfBytesRecvd,
 LPDWORD lpFlags,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);

/* WSAResetEvent  [function; shared; CE 4.0..699; Ws2.lib] */
BOOL WSAResetEvent(
 WSAEVENT hEvent
);

/* WSASend  [function; shared; CE 4.0..699; Ws2.lib] */
int WSASend(
 SOCKET s,
 LPWSABUF lpBuffers,
 DWORD dwBufferCount,
 LPDWORD lpNumberOfBytesSent,
 DWORD dwFlags,
 LPWSAOVERLAPPED lpOverlapped,
 LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine
);

/* WSASetEvent  [function; shared; CE 4.0..699; Ws2.lib] */
BOOL WSASetEvent(
 WSAEVENT hEvent
);

/* WSASetService  [function; shared; CE 4.0..699; Btdrt.lib, Ws2.lib; A/W WSASetServiceA,WSASetServiceW (CE is W-side)] */
INT WSASetService(
 LPWSAQUERYSET lpqsRegInfo, 
 WSAESETSERVICEOP essOperation, 
 DWORD dwControlFlags
);

/* WSASocket  [function; shared; CE 4.0..699; Ws2.lib; A/W WSASocketA,WSASocketW (CE is W-side)] */
SOCKET WSASocket(
 int af,
 int type,
 int protocol,
 LPWSAPROTOCOL_INFO lpProtocolInfo,
 GROUP g,
 DWORD dwFlags
);

/* WSAStringToAddress  [function; shared; CE 4.0..699; Ws2.lib; A/W WSAStringToAddressA,WSAStringToAddressW (CE is W-side)] */
INT WSAStringToAddress(
 LPTSTR AddressString,
 INT AddressFamily,
 LPWSAPROTOCOL_INFO lpProtocolInfo,
 LPSOCKADDR lpAddress,
 LPINT lpAddressLength
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* sethostname  [function; ce-only; CE 5.0..699; Ws2.lib] */
int sethostname(
 char* pName,
 int cName
);

/* WSANSPIoctl  [function; shared; CE 5.0..699; Ws2.lib] */
int WSAAPI WSANSPIoctl(
 HANDLE hLookup,
 DWORD dwControlCode,
 LPVOID lpvInBuffer,
 DWORD cbInBuffer,
 LPVOID lpvOutBuffer,
 DWORD cbOutBuffer,
 LPDWORD lpcbBytesReturned,
 LPWSACOMPLETION lpCompletion
);

/* WSAWaitForMultipleEvents  [function; shared; CE 5.0..699; Ws2.lib] */
DWORD WSAAPI WSAWaitForMultipleEvents(
 DWORD cEvents,
 const WSAEVENT FAR* lphEvents,
 BOOL fWaitAll,
 DWORD dwTimeout,
 BOOL fAlertable
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum _DSCP_TRAFFIC_TYPE {
  DSCPTypeNotSet = 0,
  DSCPBestEffort = 1,
  DSCPBackground = 2,
  DSCPExcellentEffort = 3,
  DSCPVideo = 4,
  DSCPAudio = 5,
  DSCPControl = 6,
  NumDSCPTrafficTypes = 6
} DSCP_TRAFFIC_TYPE;
typedef enum _WSAEcomparator {COMP_EQUAL = 0,COMP_NOTLESS} WSAECOMPARATOR, *PWSAECOMPARATOR;

/* struct */
SOCKET WSAAccept(SOCKETs,struct sockaddr FAR* addr,LPINTaddrlen,LPCONDITIONPROClpfnCondition,DWORDdwCallbackData);
typedef struct _AFPROTOCOLS{INTiAddressFamily;INTiProtocol;} AFPROTOCOLS, *PAFPROTOCOLS, *LPAFPROTOCOLS;
typedef struct __WSABUF {u_long len;char FAR* buf;} WSABUF, FAR* LPWSABUF;
typedef struct _WSACOMPLETION { WSACOMPLETIONTYPE Type; union { struct { HWND hWnd; UINT uMsg; WPARAM context; } WindowMessage; struct { LPWSAOVERLAPPED lpOverlapped; } Event; struct { LPWSAOVERLAPPED lpOverlapped; LPWSAOVERLAPPED_COMPLETION_ROUTINE lpfnCompletionProc; } Apc; struct { LPWSAOVERLAPPED lpOverlapped; HANDLE hPort; ULONG_PTR Key; } Port; } Parameters;} WSACOMPLETION, *PWSACOMPLETION, FAR *LPWSACOMPLETION;
typedef struct _WSANETWORKEVENTS {long lNetworkEvents;int iErrorCode[FD_MAX_EVENTS];} WSANETWORKEVENTS, *LPWSANETWORKEVENTS;
typedef struct _WSAOVERLAPPED {DWORD Internal;DWORD InternalHigh;DWORD Offset;DWORD OffsetHigh;WSAEVENT hEvent;} WSAOVERLAPPED, *LPWSAOVERLAPPED;
typedef struct _WSAPROTOCOLCHAIN {int ChainLen;DWORD ChainEntries[MAX_PROTOCOL_CHAIN];} WSAPROTOCOLCHAIN, *LPWSAPROTOCOLCHAIN;
typedef struct _WSAPROTOCOL_INFO {DWORD dwServiceFlags1;DWORD dwServiceFlags2;DWORD dwServiceFlags3;DWORD dwServiceFlags4;DWORD dwProviderFlags;GUID ProviderId;DWORD dwCatalogEntryId;WSAPROTOCOLCHAIN ProtocolChain;int iVersion;int iAddressFamily;int iMaxSockAddr;int iMinSockAddr;int iSocketType;int iProtocol;int iProtocolMaxOffset;int iNetworkByteOrder;int iSecurityScheme;DWORD dwMessageSize;DWORD dwProviderReserved;TCHAR szProtocol[WSAPROTOCOL_LEN+1];} WSAPROTOCOL_INFO, *LPWSAPROTOCOL_INFO;
typedef struct sockaddr_storage {short ss_family;char __ss_pad1[_SS_PAD1SIZE];__int64 __ss_align;char __ss_pad2[_SS_PAD2SIZE];} SOCKADDR_STORAGE, *PSOCKADDR_STORAGE;
typedef struct _SOCKET_ADDRESS {LPSOCKADDR lpSockaddr;INT iSockaddrLength;} SOCKET_ADDRESS, *PSOCKET_ADDRESS;
typedef struct _WSANAMESPACE_INFO {GUID NSProviderId;DWORD dwNameSpace;BOOL fActive;DWORD dwVersion;LPTSTR lpszIdentifier;} WSANAMESPACE_INFO, *PWSANAMESPACE_INFO;
typedef struct _WSAQuerySet {DWORD dwSize;LPTSTR lpszServiceInstanceName;LPGUID lpServiceClassId;LPWSAVERSION lpVersion;LPTSTR lpszComment;DWORD dwNameSpace;LPGUID lpNSProviderId;LPTSTR lpszContext;DWORD dwNumberOfProtocols;LPAFPROTOCOLS lpafpProtocols;LPTSTR lpszQueryString;DWORD dwNumberOfCsAddrs;LPCSADDR_INFO lpcsaBuffer;DWORD dwOutputFlags;LPBLOB lpBlob;} WSAQUERYSET, *PWSAQUERYSETW;
typedef struct _WSAServiceClassInfo {LPGUID lpServiceClassId;LPTSTR lpszServiceClassName;DWORD dwCount;LPWSANSCLASSINFOW lpClassInfos;} WSASERVICECLASSINFO, *PWSASERVICECLASSINFOW;
typedef struct _WSACOMPLETION { WSACOMPLETIONTYPE Type; union { struct { HWND hWnd; UINT uMsg; WPARAM context; } WindowMessage;
SOCKET WSAAccept( SOCKET s, struct SOCK_ADDR* addr, LPINT addrlen, LPCONDITIONPROC lpfnCondition, DWORD dwCallbackData );
SOCKET WSAJoinLeaf(SOCKET s,const struct sockaddr FAR* name,int namelen,LPWSABUF lpCallerData,LPWSABUF lpCalleeData,LPQOS lpSQOS,LPQOS lpGQOS,DWORD dwFlags);
int WSARecvFrom(SOCKET s,LPWSABUF lpBuffers,DWORD dwBufferCount,LPDWORD lpNumberOfBytesRecvd,LPDWORD lpFlags,struct sockaddr FAR* lpFrom,LPINT lpFromlen,LPWSAOVERLAPPED lpOverlapped,LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine);
int WSAConnect(SOCKET s,const struct sockaddr FAR* name,int namelen,LPWSABUF lpCallerData,LPWSABUF lpCalleeData,LPQOS lpSQOS,LPQOS lpGQOS);

/* function */
void WSASetLastError ( int iError );

#endif /* _WINSOCK2_ */
