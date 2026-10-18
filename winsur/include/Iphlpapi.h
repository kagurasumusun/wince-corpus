/* Iphlpapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 12 constants, 41 declarations, 1 outlines, 0 base types, 1 extra macros, 6 extra decls
 */
#ifndef _IPHLPAPI_
#define _IPHLPAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define AF_UNSPEC 0
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

/* ==================================================================
 * macros -- supplementary #define from CE pages
 * ================================================================ */
#define MIB_PREFIX_LEN MIB_OidPrefix.idLength

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* GetBestInterface  [function, interface; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* GetBestInterfaceEx  [struct, function; shared; Iphlpapi.lib] */
#ifndef __WINCE_DEFINED_GETBESTINTERFACEEX
#define __WINCE_DEFINED_GETBESTINTERFACEEX
DWORD GetBestInterfaceEX(struct sockaddr* pDestAddr,
 PDWORD pdwBestIfIndex);
#endif /* __WINCE_DEFINED_GETBESTINTERFACEEX */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* GetFriendlyIfIndex  [function, interface; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
#ifndef __WINCE_DEFINED_GETFRIENDLYIFINDEX
#define __WINCE_DEFINED_GETFRIENDLYIFINDEX
DWORD GetFriendlyIfIndex(DWORD IfIndex);
#endif /* __WINCE_DEFINED_GETFRIENDLYIFINDEX */
#endif /* _WIN32_WCE */

/* MIB_ENTRY  [extra struct] */
#ifndef __WINCE_DEFINED_MIB_ENTRY
#define __WINCE_DEFINED_MIB_ENTRY
typedef struct mib_entry { AsnObjectIdentifier Oid; void * Storage; BYTE Type; UINT Access; UINT (*MibFunc) (UINT, struct mib_entry *, RFC1157VarBind *); struct mib_entry * MibNext; } MIB_ENTRY;
#endif /* __WINCE_DEFINED_MIB_ENTRY */

/* pdwBestIfIndex  [extra struct] */
#ifndef __WINCE_DEFINED_PDWBESTIFINDEX
#define __WINCE_DEFINED_PDWBESTIFINDEX
DWORD GetBestInterfaceEX(struct sockaddr* pDestAddr, PDWORD pdwBestIfIndex);
#endif /* __WINCE_DEFINED_PDWBESTIFINDEX */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 3.0..399, 5.0..699 */

/* CreateProxyArpEntry  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD CreateProxyArpEntry(DWORD dwAddress,
 DWORD dwMask,
 DWORD dwIfIndex);

/* DeleteProxyArpEntry  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD DeleteProxyArpEntry(DWORD dwAddress,
 DWORD dwMask,
 DWORD dwIfIndex);

/* FlushIpNetTable  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD FlushIpNetTable(DWORD dwIfIndex);

/* GetAdapterIndex  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetAdapterIndex(LPWSTR AdapterName,
 PULONG IfIndex);

/* GetNumberOfInterfaces  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD GetNumberOfInterfaces(PDWORD pdwNumIf);

/* SetIpTTL  [function; shared; CE 3.0..399, 5.0..699; Iphlpapi.lib, iphlpapi.lib] */
DWORD SetIpTTL(UINT nTTL);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
DWORD GetBestInterfaceEX(struct sockaddr* pDestAddr, PDWORD pdwBestIfIndex);
UINT MIB_control_func (IN UINT Action, IN MIB_ENTRY *MibPtr, IN RFC1157VarBind *VarBind);
UINT MIB_doneness_func (IN UINT Action, IN MIB_ENTRY *MibPtr, IN RFC1157VarBind *VarBind);
UINT MIB_leaf_func (IN UINT Action, IN MIB_ENTRY *MibPtr, IN RFC1157VarBind *VarBind);

#endif /* _IPHLPAPI_ */
