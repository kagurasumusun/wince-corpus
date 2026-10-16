/* Iptypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 36 constants, 10 declarations, 5 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _IPTYPES_
#define _IPTYPES_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BROADCAST_NODETYPE 1
#define DEFAULT_MINIMUM_ENTITIES 32
#define HYBRID_NODETYPE 8
#define IF_ETHERNET_ADAPTERTYPE 1
#define IF_FDDI_ADAPTERTYPE 3
#define IF_LOOPBACK_ADAPTERTYPE 5
#define IF_OTHER_ADAPTERTYPE 0
#define IF_PPP_ADAPTERTYPE 4
#define IF_TOKEN_RING_ADAPTERTYPE 2
#define IP_ADAPTER_ADDRESS_DNS_ELIGIBLE 0x00000001
#define IP_ADAPTER_ADDRESS_TRANSIENT 0x00000002
#define IP_ADAPTER_DDNS_ENABLED 0x00000001
#define IP_ADAPTER_DHCP_ENABLED 0x00000004
#define IP_ADAPTER_IPV6_OTHER_STATEFUL_CONFIG 0x00000020
#define IP_ADAPTER_NO_MULTICAST 0x00000010
#define IP_ADAPTER_RECEIVE_ONLY 0x00000008
#define IP_ADAPTER_REGISTER_ADAPTER_SUFFIX 0x00000002
#define MAX_ADAPTER_ADDRESS_LENGTH 8
#define MAX_ADAPTER_DESCRIPTION_LENGTH 128
#define MAX_ADAPTER_NAME_LENGTH 256
#define MAX_DOMAIN_NAME_LEN 128
#define MAX_HOSTNAME_LEN 128
#define MAX_SCOPE_ID_LEN 256
#define MIXED_NODETYPE 4
#define PEER_TO_PEER_NODETYPE 2
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define IfOperStatusUp 1
#define IpDadStateInvalid 0
#define IpPrefixOriginOther 0
#define IpSuffixOriginOther 0
#define ScopeLevelAdmin 4
#define ScopeLevelGlobal 14
#define ScopeLevelInterface 1
#define ScopeLevelLink 2
#define ScopeLevelOrganization 8
#define ScopeLevelSite 5
#define ScopeLevelSubnet 3
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IP_ADAPTER_ADDRESSES  [struct; ce-only; CE 4.0..699] */

/* IP_ADAPTER_ANYCAST_ADDRESS  [struct; ce-only; CE 4.0..699] */

/* IP_ADAPTER_MULTICAST_ADDRESS  [struct; ce-only; CE 4.0..699] */

/* IP_ADAPTER_PREFIX  [struct; ce-only; CE 4.0..699] */

/* IP_ADAPTER_UNICAST_ADDRESS  [struct; ce-only; CE 4.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* FIXED_INFO  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct {
 char HostName [MAX_HOSTNAME_LEN + 4];
 char DomainName [MAX_DOMAIN_NAME_LEN + 4];
 PIP_ADDR_STRING CurrentDnsServer;
 IP_ADDR_STRING DnsServerList; 
 UINT NodeType;
 char ScopeId [MAX_SCOPE_ID_LEN + 4];
 UINT EnableRouting;
 UINT EnableProxy;
 UINT EnableDns;
} FIXED_INFO, *PFIXED_INFO;

/* IP_ADAPTER_INFO  [struct; shared; CE 3.0..399, 5.0..699] */
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

/* IP_PER_ADAPTER_INFO  [struct; ce-only; CE 3.0..399, 5.0..699] */
typedef struct _IP_PER_ADAPTER_INFO {
 UINT AutoconfigEnabled;
 UINT AutoconfigActive;
 PIP_ADDR_STRING CurrentDnsServer;
 IP_ADDR_STRING DnsServerList;
} IP_PER_ADAPTER_INFO, *PIP_PER_ADAPTER_INFO;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IF_OPER_STATUS  [enum; shared; CE 4.0..699] */
typedef enum {
 IfOperStatusUp = 1, 
 IfOperStatusDown, 
 IfOperStatusTesting, 
 IfOperStatusUnknown, 
 IfOperStatusDormant, 
 IfOperStatusNotPresent, 
 IfOperStatusLowerLayerDown
} IF_OPER_STATUS;

/* IP_ADDR_STRING  [struct; shared; CE 4.0..699] */
typedef struct _IP_ADDR_STRING {
 struct _IP_ADDR_STRING* Next;
 IP_ADDRESS_STRING IpAddress;
 IP_MASK_STRING IpMask;
 DWORD Context;
} IP_ADDR_STRING, *PIP_ADDR_STRING;

/* IP_ADDRESS_STRING  [struct; shared; CE 4.0..699] */
typedef struct {
 char String[4 * 4];
} IP_ADDRESS_STRING, *PIP_ADDRESS_STRING, IP_MASK_STRING, *PIP_MASK_STRING;

/* IP_DAD_STATE  [enum; ce-only; CE 4.0..699] */
typedef enum {
 IpDadStateInvalid = 0, 
 IpDadStateTentative, 
 IpDadStateDuplicate, 
 IpDadStateDeprecated, 
 IpDadStatePreferred
} IP_DAD_STATE;

/* IP_PREFIX_ORIGIN  [enum; ce-only; CE 4.0..699] */
typedef enum {
 IpPrefixOriginOther = 0, 
 IpPrefixOriginManual, 
 IpPrefixOriginWellKnown, 
 IpPrefixOriginDhcp, 
 IpPrefixOriginRouterAdvertisement
} IP_PREFIX_ORIGIN;

/* IP_SUFFIX_ORIGIN  [enum; ce-only; CE 4.0..699] */
typedef enum {
 IpSuffixOriginOther = 0, 
 IpSuffixOriginManual, 
 IpSuffixOriginWellKnown, 
 IpSuffixOriginDhcp, 
 IpSuffixOriginLinkLayerAddress, 
 IpSuffixOriginRandom
} IP_SUFFIX_ORIGIN;

/* SCOPE_LEVEL  [enum; shared; CE 4.0..699] */
typedef enum {
 ScopeLevelInterface = 1, 
 ScopeLevelLink = 2, 
 ScopeLevelSubnet = 3, 
 ScopeLevelAdmin = 4, 
 ScopeLevelSite = 5, 
 ScopeLevelOrganization = 8, 
 ScopeLevelGlobal = 14
} SCOPE_LEVEL;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _IP_PER_ADAPTER_INFO{UINT AutoconfigEnabled;UINT AutoconfigActive;PIP_ADDR_STRING CurrentDnsServer;IP_ADDR_STRING DnsServerList;} IP_PER_ADAPTER_INFO, *PIP_PER_ADAPTER_INFO;

#endif /* _IPTYPES_ */
