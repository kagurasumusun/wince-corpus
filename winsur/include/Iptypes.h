/* Iptypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 36 constants, 8 declarations, 7 outlines, 0 base types, 0 extra macros, 1 extra decls
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
#define IfOperStatusUp 1
#define IP_ADAPTER_ADDRESS_DNS_ELIGIBLE 0x00000001
#define IP_ADAPTER_ADDRESS_TRANSIENT 0x00000002
#define IP_ADAPTER_DDNS_ENABLED 0x00000001
#define IP_ADAPTER_DHCP_ENABLED 0x00000004
#define IP_ADAPTER_IPV6_OTHER_STATEFUL_CONFIG 0x00000020
#define IP_ADAPTER_NO_MULTICAST 0x00000010
#define IP_ADAPTER_RECEIVE_ONLY 0x00000008
#define IP_ADAPTER_REGISTER_ADAPTER_SUFFIX 0x00000002
#define IpDadStateInvalid 0
#define IpPrefixOriginOther 0
#define IpSuffixOriginOther 0
#define MAX_ADAPTER_ADDRESS_LENGTH 8
#define MAX_ADAPTER_DESCRIPTION_LENGTH 128
#define MAX_ADAPTER_NAME_LENGTH 256
#define MAX_DOMAIN_NAME_LEN 128
#define MAX_HOSTNAME_LEN 128
#define MAX_SCOPE_ID_LEN 256
#define MIXED_NODETYPE 4
#define PEER_TO_PEER_NODETYPE 2
#define ScopeLevelAdmin 4
#define ScopeLevelGlobal 14
#define ScopeLevelInterface 1
#define ScopeLevelLink 2
#define ScopeLevelOrganization 8
#define ScopeLevelSite 5
#define ScopeLevelSubnet 3

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* IP_ADAPTER_ADDRESSES  [struct; ce-only] */

/* IP_ADAPTER_ANYCAST_ADDRESS  [struct; ce-only] */

/* IP_ADAPTER_MULTICAST_ADDRESS  [struct; ce-only] */

/* IP_ADAPTER_PREFIX  [struct; ce-only] */

/* IP_ADAPTER_UNICAST_ADDRESS  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* IF_OPER_STATUS  [enum; shared] */
typedef enum {
 IfOperStatusUp = 1, 
 IfOperStatusDown, 
 IfOperStatusTesting, 
 IfOperStatusUnknown, 
 IfOperStatusDormant, 
 IfOperStatusNotPresent, 
 IfOperStatusLowerLayerDown
} IF_OPER_STATUS;

/* IP_DAD_STATE  [enum; ce-only] */
typedef enum {
 IpDadStateInvalid = 0, 
 IpDadStateTentative, 
 IpDadStateDuplicate, 
 IpDadStateDeprecated, 
 IpDadStatePreferred
} IP_DAD_STATE;

/* IP_PREFIX_ORIGIN  [enum; ce-only] */
typedef enum {
 IpPrefixOriginOther = 0, 
 IpPrefixOriginManual, 
 IpPrefixOriginWellKnown, 
 IpPrefixOriginDhcp, 
 IpPrefixOriginRouterAdvertisement
} IP_PREFIX_ORIGIN;

/* IP_SUFFIX_ORIGIN  [enum; ce-only] */
typedef enum {
 IpSuffixOriginOther = 0, 
 IpSuffixOriginManual, 
 IpSuffixOriginWellKnown, 
 IpSuffixOriginDhcp, 
 IpSuffixOriginLinkLayerAddress, 
 IpSuffixOriginRandom
} IP_SUFFIX_ORIGIN;

/* SCOPE_LEVEL  [enum; shared] */
typedef enum {
 ScopeLevelInterface = 1, 
 ScopeLevelLink = 2, 
 ScopeLevelSubnet = 3, 
 ScopeLevelAdmin = 4, 
 ScopeLevelSite = 5, 
 ScopeLevelOrganization = 8, 
 ScopeLevelGlobal = 14
} SCOPE_LEVEL;

/* IP_ADAPTER_INFO  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   Next */
/*   ComboIndex */
/*   AdapterName */
/*   Description */
/*   AddressLength */
/*   Address */
/*   Index */
/*   Type */
/*   DhcpEnabled */
/*   CurrentIpAddress */
/*   IpAddressList */
/*   GatewayList */
/*   DhcpServer */
/*   HaveWins */
/*   PrimaryWinsServer */
/*   SecondaryWinsServer */
/*   LeaseObtained */
/*   LeaseExpires */

/* IP_ADDRESS_STRING  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   String */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _IP_PER_ADAPTER_INFO{UINT AutoconfigEnabled;UINT AutoconfigActive;PIP_ADDR_STRING CurrentDnsServer;IP_ADDR_STRING DnsServerList;} IP_PER_ADAPTER_INFO, *PIP_PER_ADAPTER_INFO;

#endif /* _IPTYPES_ */
