/* Iphlpapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 62 constants, 46 declarations, 0 outlines, 0 base types, 1 extra macros, 20 extra decls
 */
#ifndef _IPHLPAPI_
#define _IPHLPAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define GAA_FLAG_INCLUDE_ALL_COMPARTMENTS 0x0200
#define GAA_FLAG_INCLUDE_ALL_INTERFACES 0x0100
#define GAA_FLAG_INCLUDE_GATEWAYS 0x0080
#define GAA_FLAG_INCLUDE_PREFIX 0x0010
#define GAA_FLAG_INCLUDE_TUNNEL_BINDINGORDER 0x0400
#define GAA_FLAG_INCLUDE_WINS_INFO 0x0040
#define GAA_FLAG_SKIP_ANYCAST 0x0002
#define GAA_FLAG_SKIP_DNS_SERVER 0x0008
#define GAA_FLAG_SKIP_FRIENDLY_NAME 0x0020
#define GAA_FLAG_SKIP_MULTICAST 0x0004
#define GAA_FLAG_SKIP_UNICAST 0x0001
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
#define MIB_ACCESS_READ 0
#define MIB_ACCESS_READWRITE 2
#define MIB_ACCESS_WRITE 1
#define MIB_ACTION_GET ASN_RFC1157_GETREQUEST
#define MIB_ACTION_GETNEXT ASN_RFC1157_GETNEXTREQUEST
#define MIB_ACTION_SET ASN_RFC1157_SETREQUEST
#define MIB_IF_TYPE_ETHERNET 6
#define MIB_IF_TYPE_LOOPBACK 24
#define MIB_IF_TYPE_OTHER 1
#define MIB_IF_TYPE_PPP 23
#define MIB_IF_TYPE_SLIP 28
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
#define MIB_TOASTER_BURNT 10
#define MIB_TOASTER_DOWN 2
#define MIB_TOASTER_LIGHTLYWARM 1
#define MIB_TOASTER_OTHERBREAD 7
#define MIB_TOASTER_UP 1
#define MIB_TOASTER_WHITEBREAD 1

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define MIB_PREFIX_LEN MIB_OidPrefix.idLength

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* GetBestInterfaceEx  [struct, function; shared; Iphlpapi.lib] */
DWORD GetBestInterfaceEX(
 struct sockaddr* pDestAddr, 
 PDWORD pdwBestIfIndex 
);

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* GetBestInterface  [function, interface; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetBestInterface(
 IPAddr dwDestAddr, 
 PDWORD pdwBestIfIndex 
);

/* GetFriendlyIfIndex  [function, interface; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetFriendlyIfIndex(
 DWORD IfIndex 
);
#endif /* _WIN32_WCE */

/* MIB_ENTRY  [extra struct] */
typedef struct mib_entry { AsnObjectIdentifier Oid; void * Storage; BYTE Type; UINT Access; UINT (*MibFunc) (UINT, struct mib_entry *, RFC1157VarBind *); struct mib_entry * MibNext; } MIB_ENTRY;

/* PIP_ADAPTER_INFO  [extra struct] */
typedef struct _IP_ADAPTER_INFO {
  struct _IP_ADAPTER_INFO* Next;
  DWORD ComboIndex;
  Char AdapterName[MAX_ADAPTER_NAME_LENGTH + 4];
  char Description[MAX_ADAPTER_DESCRIPTION_LENGTH + 4];
  UINT AddressLength;
  BYTE Address[MAX_ADAPTER_ADDRESS_LENGTH];
  DWORD Index;
  UINT Type;
  UINT DhcpEnabled;
  PIP_ADDR_STRING CurrentIpAddress;
  IP_ADDR_STRING IpAddressList;
  IP_ADDR_STRING GatewayList;
  IP_ADDR_STRING DhcpServer;
  BOOL HaveWins;
  IP_ADDR_STRING PrimaryWinsServer;
  IP_ADDR_STRING SecondaryWinsServer;
  time_t LeaseObtained;
  time_t LeaseExpires;
} IP_ADAPTER_INFO, *PIP_ADAPTER_INFO;

/* PMIB_ICMP  [extra struct] */
typedef struct _MIB_ICMP {  MIBICMPINFO stats // contains ICMP stats  } MIB_ICMP,*PMIB_ICMP;

/* PMIB_IPADDRTABLE  [extra struct] */
typedef struct _MIB_IPADDRTABLE {  DWORD dwNumEntries; // number of entries in the table  MIB_IPADDRROW table[ANY_SIZE]; // array of IP address entries  } MIB_IPADDRTABLE, *PMIB_IPADDRTABLE;

/* PMIB_IPFORWARDTABLE  [extra struct] */
typedef struct _MIB_IPFORWARDTABLE {  DWORD dwNumEntries; // number of entries in the table  MIB_IPFORWARDROW table[ANY_SIZE]; // array of route entries  } MIB_IPFORWARDTABLE, *PMIB_IPFORWARDTABLE;

/* PMIB_IPNETTABLE  [extra struct] */
typedef struct _MIB_IPNETTABLE {  DWORD dwNumEntries; // number of entries in table  MIB_IPNETROW table[ANY_SIZE]; // array of ARP entries  } MIB_IPNETTABLE, *PMIB_IPNETTABLE;

/* PMIB_TCPTABLE  [extra struct] */
typedef struct _MIB_TCPTABLE {  DWORD dwNumEntries; // number of entries in the table  MIB_TCPROW table[ANY_SIZE]; // array of TCP connections  } MIB_TCPTABLE, *PMIB_TCPTABLE;

/* PMIB_UDPROW  [extra struct] */
typedef struct _MIB_UDPROW {  DWORD dwLocalAddr; DWORD dwLocalPort; // port number on local computer  } MIB_UDPROW, *PMIB_UDPROW;

/* PMIB_UDPTABLE  [extra struct] */
typedef struct _MIB_UDPTABLE {  DWORD dwNumEntries; // number of entries in the table  MIB_UDPROW table[ANY_SIZE]; // table of MIB_UDPROW structs  } MIB_UDPTABLE, * PMIB_UDPTABLE;

/* pdwBestIfIndex  [extra struct] */
DWORD GetBestInterfaceEX(  struct sockaddr* pDestAddr,  PDWORD pdwBestIfIndex  );

/* PIP_ADDR_STRING  [extra struct] */
typedef struct _IP_ADDR_STRING {
  struct _IP_ADDR_STRING* Next;
  IP_ADDRESS_STRING IpAddress;
  IP_MASK_STRING IpMask;
  DWORD Context;
} IP_ADDR_STRING, *PIP_ADDR_STRING;

/* PMIB_BEST_IF  [extra struct] */
typedef struct _MIB_BEST_IF {  DWORD dwDestAddr;  DWORD dwIfIndex;  } MIB_BEST_IF*, PMIB_BEST_IF;

/* PMIB_IPFORWARDROW  [extra struct] */
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

/* PMIB_PROXYARP  [extra struct] */
typedef struct _MIB_PROXYARP {
  DWORD dwAddress;
  DWORD dwMask;
  DWORD dwIfIndex;
} MIB_PROXYARP, *PMIB_PROXYARP;

/* PMIB_UDPSTATS  [extra struct] */
typedef struct _MIB_UDPSTATS {
  DWORD dwInDatagrams;
  DWORD dwNoPorts;
  DWORD dwInErrors;
  DWORD dwOutDatagrams;
  DWORD dwNumAddrs;
} MIB_UDPSTATS, *PMIB_UDPSTATS;

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* AddIPAddress  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD AddIPAddress(
 IPAddr Address,
 IPMask IpMask,
 DWORD IfIndex,
 PULONG NTEContext,
 PULONG NTEInstance 
);

/* CreateIpForwardEntry  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD CreateIpForwardEntry( 
 PMIB_IPFORWARDROW pRoute
);

/* CreateProxyArpEntry  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD CreateProxyArpEntry(
 DWORD dwAddress,
 DWORD dwMask,
 DWORD dwIfIndex
);

/* DeleteIPAddress  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD DeleteIPAddress ( 
ULONG NTEContext // net table entry context);

/* DeleteIpForwardEntry  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD DeleteIpForwardEntry(
 PMIB_IPFORWARDROW pRoute
);

/* DeleteProxyArpEntry  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD DeleteProxyArpEntry(
 DWORD dwAddress, 
 DWORD dwMask, 
 DWORD dwIfIndex 
);

/* FlushIpNetTable  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD FlushIpNetTable( 
 DWORD dwIfIndex 
);

/* GetAdapterIndex  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetAdapterIndex(
 LPWSTR AdapterName, 
 PULONG IfIndex
);

/* GetAdaptersInfo  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetAdaptersInfo(
 PIP_ADAPTER_INFO pAdapterInfo,
 PULONG pOutBufLen
);

/* GetBestRoute  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetBestRoute(
 DWORD dwDestAddr, 
 DWORD dwSourceAddr, 
 PMIB_IPFORWARDROW pBestRoute 
);

/* GetIcmpStatistics  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetIcmpStatistics(
 PMIB_ICMP pStats 
);

/* GetIpAddrTable  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetIpAddrTable(
 PMIB_IPADDRTABLE pIpAddrTable, 
 PULONG pdwSize, 
 BOOL bOrder 
);

/* GetIpForwardTable  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetIpForwardTable(
 PMIB_IPFORWARDTABLE pIpForwardTable, 
 PULONG pdwSize, 
 BOOL bOrder 
);

/* GetIpNetTable  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetIpNetTable(
 PMIB_IPNETTABLE pIpNetTable,
 PULONG pdwSize, 
 BOOL bOrder 
);

/* GetNumberOfInterfaces  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetNumberOfInterfaces(
 PDWORD pdwNumIf
);

/* GetTcpTable  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetTcpTable(
 PMIB_TCPTABLE pTcpTable, 
 PDWORD pdwSize, 
 BOOL bOrder 
);

/* GetUdpStatistics  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetUdpStatistics(
 PMIB_UDPSTATS pStats
);

/* GetUdpTable  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetUdpTable(
 PMIB_UDPTABLE pUdpTable, 
 PDWORD pdwSize, 
 BOOL bOrder 
);

/* SendARP  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD SendARP(
 IPAddr DestIP, 
 IPAddr SrcIP, 
 PULONG pMacAddr,
 PULONG PhyAddrLen 
);

/* SetIpForwardEntry  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD SetIpForwardEntry(
 PMIB_IPFORWARDROW pRoute 
);

/* SetIpTTL  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD SetIpTTL(
 UINT nTTL 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* GetIcmpStatisticsEx  [function; shared; CE 4.0..699; Iphlpapi.lib] */
DWORD GetIcmpStatisticsEx(
 PMIB_ICMP pStats, 
 DWORD dwFamily
);

/* GetUdpStatisticsEx  [function; shared; CE 4.0..699; Iphlpapi.lib] */
DWORD GetUdpStatisticsEx(
 PMIB_UDPSTATS pStats, 
 DWORD dwFamily
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
DWORD GetBestInterfaceEX( struct sockaddr* pDestAddr, PDWORD pdwBestIfIndex );
UINT MIB_control_func ( IN UINT Action, IN MIB_ENTRY *MibPtr, IN RFC1157VarBind *VarBind );
UINT MIB_doneness_func ( IN UINT Action, IN MIB_ENTRY *MibPtr, IN RFC1157VarBind *VarBind );
UINT MIB_leaf_func ( IN UINT Action, IN MIB_ENTRY *MibPtr, IN RFC1157VarBind *VarBind );
UINT MIB_toasttype_func ( IN UINT Action, IN MIB_ENTRY *MibPtr, IN RFC1157VarBind *VarBind );

#endif /* _IPHLPAPI_ */
