/* Ws2tcpip.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 3 declarations, 3 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _WS2TCPIP_
#define _WS2TCPIP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define NI_MAXHOST 1025
#define NI_MAXSERV 32

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* freeaddrinfo  [struct, function; shared; Ws2.lib; A/W FreeAddrInfoW (CE is W-side)] */

/* getaddrinfo  [struct, function; shared; Ws2.lib; A/W GetAddrInfoW (CE is W-side)] */

/* getnameinfo  [struct, macro, function; shared; Ws2.lib; A/W GetNameInfoW (CE is W-side)] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* addrinfo  [struct; shared; A/W ADDRINFOA,ADDRINFOW (CE is W-side)] */
#ifndef __WINCE_DEFINED_ADDRINFO
#define __WINCE_DEFINED_ADDRINFO
struct addrinfo {
 int ai_flags;
 int ai_family;
 int ai_socktype;
 int ai_protocol;
 size_t ai_addrlen;
 char* ai_canonname;
 struct sockaddr* ai_addr;
 struct addrinfo* ai_next;
};
#endif /* __WINCE_DEFINED_ADDRINFO */

/* in6_addr  [struct; shared] */
#ifndef __WINCE_DEFINED_IN6_ADDR
#define __WINCE_DEFINED_IN6_ADDR
struct in6_addr {
 union {
 /* DERIVED member omitted -- type body unprinted: u_char Byte[16]; */
 /* DERIVED member omitted -- type body unprinted: u_short Word[8]; */
 } u;
};
#endif /* __WINCE_DEFINED_IN6_ADDR */

/* sockaddr_in6  [struct; ce-only] */
#ifndef __WINCE_DEFINED_SOCKADDR_IN6
#define __WINCE_DEFINED_SOCKADDR_IN6
struct sockaddr_in6 {
 short sin6_family;
 /* DERIVED member omitted -- type body unprinted: u_short sin6_port; */
 /* DERIVED member omitted -- type body unprinted: u_long sin6_flowinfo; */
 struct in6_addr sin6_addr;
 /* DERIVED member omitted -- type body unprinted: u_long sin6_scope_id; */
};
#endif /* __WINCE_DEFINED_SOCKADDR_IN6 */

/* sin6_scope_id  [extra struct] */
#ifndef __WINCE_DEFINED_SOCKADDR_IN6
#define __WINCE_DEFINED_SOCKADDR_IN6
#ifndef __WINCE_DEFINED_SIN6_SCOPE_ID
#define __WINCE_DEFINED_SIN6_SCOPE_ID
struct sockaddr_in6 {short sin6_family;/* DERIVED member omitted -- type body unprinted: u_short sin6_port; */u_longsin6_flowinfo;struct in6_addrsin6_addr;/* DERIVED member omitted -- type body unprinted: u_long sin6_scope_id; */};
#endif /* __WINCE_DEFINED_SIN6_SCOPE_ID */
#endif /* __WINCE_DEFINED_SOCKADDR_IN6 */

/* ai_next  [extra struct] */
#ifndef __WINCE_DEFINED_ADDRINFO
#define __WINCE_DEFINED_ADDRINFO
#ifndef __WINCE_DEFINED_AI_NEXT
#define __WINCE_DEFINED_AI_NEXT
struct addrinfo {
 int ai_flags;
 int ai_family;
 int ai_socktype;
 int ai_protocol;
 size_t ai_addrlen;
 char* ai_canonname;
 struct sockaddr* ai_addr;
 struct addrinfo* ai_next;
};
#endif /* __WINCE_DEFINED_AI_NEXT */
#endif /* __WINCE_DEFINED_ADDRINFO */

#endif /* _WS2TCPIP_ */
