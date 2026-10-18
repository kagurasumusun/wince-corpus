/* Iprtrmib.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 60 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _IPRTRMIB_
#define _IPRTRMIB_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define IF_TYPE_ATM 37
#define IF_TYPE_ETHERNET_CSMACD 6
#define IF_TYPE_FDDI 15
#define IF_TYPE_IEEE1394 144
#define IF_TYPE_IEEE80211 71
#define IF_TYPE_IEEE80216_WMAN 237
#define IF_TYPE_ISO88025_TOKENRING 9
#define IF_TYPE_OTHER 1
#define IF_TYPE_PPP 23
#define IF_TYPE_SOFTWARE_LOOPBACK 24
#define IF_TYPE_TUNNEL 131
#define IF_TYPE_WWANPP 243
#define IF_TYPE_WWANPP2 244
#define MAX_INTERFACE_NAME_LEN 256
#define MAXLEN_IFDESCR 256
#define MAXLEN_PHYSADDR 8
#define MIB_IPNET_TYPE_DYNAMIC 3
#define MIB_IPNET_TYPE_INVALID 2
#define MIB_IPNET_TYPE_OTHER 1
#define MIB_IPNET_TYPE_STATIC 4
#define MIB_IPPROTO_BBN 12
#define MIB_IPPROTO_BGP 14
#define MIB_IPPROTO_CISCO 11
#define MIB_IPPROTO_EGP 5
#define MIB_IPPROTO_ES_IS 10
#define MIB_IPPROTO_GGP 6
#define MIB_IPPROTO_HELLO 7
#define MIB_IPPROTO_ICMP 4
#define MIB_IPPROTO_IS_IS 9
#define MIB_IPPROTO_LOCAL 2
#define MIB_IPPROTO_NETMGMT 3
#define MIB_IPPROTO_NT_AUTOSTATIC 10002
#define MIB_IPPROTO_NT_STATIC 10006
#define MIB_IPPROTO_NT_STATIC_NON_DOD 10007
#define MIB_IPPROTO_OSPF 13
#define MIB_IPPROTO_OTHER 1
#define MIB_IPPROTO_RIP 8
#define MIB_IPROUTE_TYPE_DIRECT 3
#define MIB_IPROUTE_TYPE_INDIRECT 4
#define MIB_IPROUTE_TYPE_INVALID 2
#define MIB_IPROUTE_TYPE_OTHER 1
#define MIB_TCP_MAXCONN_DYNAMIC ((DWORD)-1)
#define MIB_TCP_RTO_CONSTANT 2
#define MIB_TCP_RTO_OTHER 1
#define MIB_TCP_RTO_RSRE 3
#define MIB_TCP_RTO_VANJ 4
#define MIB_TCP_STATE_CLOSE_WAIT 8
#define MIB_TCP_STATE_CLOSED 1
#define MIB_TCP_STATE_CLOSING 9
#define MIB_TCP_STATE_DELETE_TCB 12
#define MIB_TCP_STATE_ESTAB 5
#define MIB_TCP_STATE_FIN_WAIT1 6
#define MIB_TCP_STATE_FIN_WAIT2 7
#define MIB_TCP_STATE_LAST_ACK 10
#define MIB_TCP_STATE_LISTEN 2
#define MIB_TCP_STATE_SYN_RCVD 4
#define MIB_TCP_STATE_SYN_SENT 3
#define MIB_TCP_STATE_TIME_WAIT 11
#define MIB_USE_CURRENT_FORWARDING ((DWORD)-1)
#define MIB_USE_CURRENT_TTL ((DWORD)-1)

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MIB_IFROW  [struct; shared] */
#ifndef __WINCE_DEFINED__MIB_IFROW
#define __WINCE_DEFINED__MIB_IFROW
typedef struct _MIB_IFROW {
 WCHAR wszName[MAX_INTERFACE_NAME_LEN];
 DWORD dwIndex;
 DWORD dwType;
 DWORD dwMtu;
 DWORD dwSpeed;
 DWORD dwPhysAddrLen;
 BYTE bPhysAddr[MAXLEN_PHYSADDR];
 DWORD dwAdminStatus;
 DWORD dwOperStatus;
 DWORD dwLastChange;
 DWORD dwInOctets;
 DWORD dwInUcastPkts;
 DWORD dwInNUcastPkts;
 DWORD dwInDiscards;
 DWORD dwInErrors;
 DWORD dwInUnknownProtos;
 DWORD dwOutOctets;
 DWORD dwOutUcastPkts;
 DWORD dwOutNUcastPkts;
 DWORD dwOutDiscards;
 DWORD dwOutErrors;
 DWORD dwOutQLen;
 DWORD dwDescrLen;
 BYTE bDescr[MAXLEN_IFDESCR];
} MIB_IFROW, *PMIB_IFROW;
#endif /* __WINCE_DEFINED__MIB_IFROW */

/* MIB_IPADDRROW  [struct; ce-only] */
#ifndef __WINCE_DEFINED__MIB_IPADDRROW
#define __WINCE_DEFINED__MIB_IPADDRROW
typedef struct _MIB_IPADDRROW {
 DWORD dwAddr;
 DWORD dwIndex;
 DWORD dwMask;
 DWORD dwBCastAddr;
 DWORD dwReasmSize;
 unsigned short unused1;
 unsigned short unused2;
} MIB_IPADDRROW, *PMIB_IPADDRROW;
#endif /* __WINCE_DEFINED__MIB_IPADDRROW */

/* MIB_IPFORWARDROW  [struct; shared] */
#ifndef __WINCE_DEFINED__MIB_IPFORWARDROW
#define __WINCE_DEFINED__MIB_IPFORWARDROW
typedef struct _MIB_IPFORWARDROW {
 DWORD dwForwardDest;
 DWORD dwForwardMask;
 DWORD dwForwardPolicy;
 DWORD dwForwardNextHop;
 DWORD dwForwardIfIndex;
 DWORD dwForwardType;
 DWORD dwForwardProto;
 DWORD dwForwardAge;
 DWORD dwForwardNextHopAS;
 DWORD dwForwardMetric1;
 DWORD dwForwardMetric2;
 DWORD dwForwardMetric3;
 DWORD dwForwardMetric4;
 DWORD dwForwardMetric5;
} MIB_IPFORWARDROW, *PMIB_IPFORWARDROW;
#endif /* __WINCE_DEFINED__MIB_IPFORWARDROW */

/* MIB_IPNETROW  [struct; ce-only] */
#ifndef __WINCE_DEFINED__MIB_IPNETROW
#define __WINCE_DEFINED__MIB_IPNETROW
typedef struct _MIB_IPNETROW {
 DWORD dwIndex;
 DWORD dwPhysAddrLen;
 BYTE bPhysAddr[MAXLEN_PHYSADDR];
 DWORD dwAddr;
 DWORD dwType;
} MIB_IPNETROW, *PMIB_IPNETROW;
#endif /* __WINCE_DEFINED__MIB_IPNETROW */

/* MIB_IPSTATS  [struct; ce-only] */
#ifndef __WINCE_DEFINED__MIB_IPSTATS
#define __WINCE_DEFINED__MIB_IPSTATS
typedef struct _MIB_IPSTATS {
 DWORD dwForwarding;
 DWORD dwDefaultTTL;
 DWORD dwInReceives;
 DWORD dwInHdrErrors;
 DWORD dwInAddrErrors;
 DWORD dwForwDatagrams;
 DWORD dwInUnknownProtos;
 DWORD dwInDiscards;
 DWORD dwInDelivers;
 DWORD dwOutRequests;
 DWORD dwRoutingDiscards;
 DWORD dwOutDiscards;
 DWORD dwOutNoRoutes;
 DWORD dwReasmTimeout;
 DWORD dwReasmReqds;
 DWORD dwReasmOks;
 DWORD dwReasmFails;
 DWORD dwFragOks;
 DWORD dwFragFails;
 DWORD dwFragCreates;
 DWORD dwNumIf;
 DWORD dwNumAddr;
 DWORD dwNumRoutes;
} MIB_IPSTATS, *PMIB_IPSTATS;
#endif /* __WINCE_DEFINED__MIB_IPSTATS */

/* MIB_PROXYARP  [struct; shared] */
#ifndef __WINCE_DEFINED__MIB_PROXYARP
#define __WINCE_DEFINED__MIB_PROXYARP
typedef struct _MIB_PROXYARP {
 DWORD dwAddress;
 DWORD dwMask;
 DWORD dwIfIndex;
} MIB_PROXYARP, *PMIB_PROXYARP;
#endif /* __WINCE_DEFINED__MIB_PROXYARP */

/* MIB_TCPROW  [struct; ce-only] */
#ifndef __WINCE_DEFINED__MIB_TCPROW
#define __WINCE_DEFINED__MIB_TCPROW
typedef struct _MIB_TCPROW {
 DWORD dwState;
 DWORD dwLocalAddr;
 DWORD dwLocalPort;
 DWORD dwRemoteAddr;
 DWORD dwRemotePort;
} MIB_TCPROW, *PMIB_TCPROW;
#endif /* __WINCE_DEFINED__MIB_TCPROW */

/* MIB_TCPSTATS  [struct; ce-only] */
#ifndef __WINCE_DEFINED__MIB_TCPSTATS
#define __WINCE_DEFINED__MIB_TCPSTATS
typedef struct _MIB_TCPSTATS {
 DWORD dwRtoAlgorithm;
 DWORD dwRtoMin;
 DWORD dwRtoMax;
 DWORD dwMaxConn;
 DWORD dwActiveOpens;
 DWORD dwPassiveOpens;
 DWORD dwAttemptFails;
 DWORD dwEstabResets;
 DWORD dwCurrEstab;
 DWORD dwInSegs;
 DWORD dwOutSegs;
 DWORD dwRetransSegs;
 DWORD dwInErrs;
 DWORD dwOutRsts;
 DWORD dwNumConns;
} MIB_TCPSTATS, *PMIB_TCPSTATS;
#endif /* __WINCE_DEFINED__MIB_TCPSTATS */

/* MIB_UDPROW  [struct; shared] */
#ifndef __WINCE_DEFINED__MIB_UDPROW
#define __WINCE_DEFINED__MIB_UDPROW
typedef struct _MIB_UDPROW {
 DWORD dwLocalAddr;
 DWORD dwLocalPort;
} MIB_UDPROW, *PMIB_UDPROW;
#endif /* __WINCE_DEFINED__MIB_UDPROW */

/* MIB_UDPSTATS  [struct; shared] */
#ifndef __WINCE_DEFINED__MIB_UDPSTATS
#define __WINCE_DEFINED__MIB_UDPSTATS
typedef struct _MIB_UDPSTATS {
 DWORD dwInDatagrams;
 DWORD dwNoPorts;
 DWORD dwInErrors;
 DWORD dwOutDatagrams;
 DWORD dwNumAddrs;
} MIB_UDPSTATS, *PMIB_UDPSTATS;
#endif /* __WINCE_DEFINED__MIB_UDPSTATS */

/* MIBICMPSTATS  [struct; shared] */
#ifndef __WINCE_DEFINED__MIBICMPSTATS
#define __WINCE_DEFINED__MIBICMPSTATS
typedef struct _MIBICMPSTATS {
 DWORD dwMsgs;
 DWORD dwErrors;
 DWORD dwDestUnreachs;
 DWORD dwTimeExcds;
 DWORD dwParmProbs;
 DWORD dwSrcQuenchs;
 DWORD dwRedirects;
 DWORD dwEchos;
 DWORD dwEchoReps;
 DWORD dwTimestamps;
 DWORD dwTimestampReps;
 DWORD dwAddrMasks;
 DWORD dwAddrMaskReps;
} MIBICMPSTATS;
#endif /* __WINCE_DEFINED__MIBICMPSTATS */
#ifndef __WINCE_DEFINED_PMIBICMPSTATS
#define __WINCE_DEFINED_PMIBICMPSTATS
typedef MIBICMPSTATS *PMIBICMPSTATS, *LPMIBICMPSTATS;
#endif /* __WINCE_DEFINED_PMIBICMPSTATS */

/* MIBICMPINFO  [struct; shared] */
#ifndef __WINCE_DEFINED__MIBICMPINFO
#define __WINCE_DEFINED__MIBICMPINFO
typedef struct _MIBICMPINFO {
 MIBICMPSTATS icmpInStats;
 MIBICMPSTATS icmpOutStats;
} MIBICMPINFO;
#endif /* __WINCE_DEFINED__MIBICMPINFO */
#ifndef __WINCE_DEFINED_PMIBICMPINFO
#define __WINCE_DEFINED_PMIBICMPINFO
typedef MIBICMPINFO *PMIBICMPINFO, *LPMIBICMPINFO;
#endif /* __WINCE_DEFINED_PMIBICMPINFO */

/* MIB_ICMP  [struct, typedef; shared] */
#ifndef __WINCE_DEFINED__MIB_ICMP
#define __WINCE_DEFINED__MIB_ICMP
typedef struct _MIB_ICMP {
 MIBICMPINFO stats;
} MIB_ICMP, *PMIB_ICMP;
#endif /* __WINCE_DEFINED__MIB_ICMP */

#endif /* _IPRTRMIB_ */
