/* Winsock.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 14 extra decls
 */
#ifndef _WINSOCK_
#define _WINSOCK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CEBLOB  [struct; ce-only] */
#ifndef __WINCE_DEFINED__CEBLOB
#define __WINCE_DEFINED__CEBLOB
#ifndef __WINCE_DEFINED_CEBLOB
#define __WINCE_DEFINED_CEBLOB
typedef struct _CEBLOB {
 DWORD dwCount;
 LPBYTE lpb;
} CEBLOB;
#endif /* __WINCE_DEFINED_CEBLOB */
#endif /* __WINCE_DEFINED__CEBLOB */
#ifndef __WINCE_DEFINED_PCEBLOB
#define __WINCE_DEFINED_PCEBLOB
typedef CEBLOB *PCEBLOB, *LPCEBLOB;
#endif /* __WINCE_DEFINED_PCEBLOB */

/* h_addr_list  [extra struct] */
#ifndef __WINCE_DEFINED_HOSTENT
#define __WINCE_DEFINED_HOSTENT
#ifndef __WINCE_DEFINED_H_ADDR_LIST
#define __WINCE_DEFINED_H_ADDR_LIST
struct hostent {
 char FAR *h_name;
 char FAR *FAR *h_aliases;
 short h_addrtype;
 short h_length;
 char FAR *FAR *h_addr_list;
};
#endif /* __WINCE_DEFINED_H_ADDR_LIST */
#endif /* __WINCE_DEFINED_HOSTENT */

/* l_linger  [extra struct] */
#ifndef __WINCE_DEFINED_LINGER
#define __WINCE_DEFINED_LINGER
#ifndef __WINCE_DEFINED_L_LINGER
#define __WINCE_DEFINED_L_LINGER
struct linger { /* DERIVED member omitted -- type body unprinted: u_short l_onoff; */ /* DERIVED member omitted -- type body unprinted: u_short l_linger; */ };
#endif /* __WINCE_DEFINED_L_LINGER */
#endif /* __WINCE_DEFINED_LINGER */

/* sa_data  [extra struct] */
#ifndef __WINCE_DEFINED_SOCKADDR
#define __WINCE_DEFINED_SOCKADDR
#ifndef __WINCE_DEFINED_SA_DATA
#define __WINCE_DEFINED_SA_DATA
struct sockaddr { unsigned short sa_family; char sa_data[14];};
#endif /* __WINCE_DEFINED_SA_DATA */
#endif /* __WINCE_DEFINED_SOCKADDR */

/* type  [extra struct] */
#ifndef __WINCE_DEFINED_TYPE
#define __WINCE_DEFINED_TYPE
struct hostent *gethostbyaddr(const char *addr, int len, int type);
#endif /* __WINCE_DEFINED_TYPE */

/* name  [extra struct] */
#ifndef __WINCE_DEFINED_NAME
#define __WINCE_DEFINED_NAME
struct hostent *gethostbyname(const char *name);
#endif /* __WINCE_DEFINED_NAME */

/* in  [extra struct] */
#ifndef __WINCE_DEFINED_IN
#define __WINCE_DEFINED_IN
char *inet_ntoa (struct in_addr in);
#endif /* __WINCE_DEFINED_IN */

/* s_proto  [extra struct] */
#ifndef __WINCE_DEFINED_SERVENT
#define __WINCE_DEFINED_SERVENT
#ifndef __WINCE_DEFINED_S_PROTO
#define __WINCE_DEFINED_S_PROTO
struct servent {char FAR* s_name;char FAR* FAR* s_aliases;short s_port;char FAR* s_proto;};
#endif /* __WINCE_DEFINED_S_PROTO */
#endif /* __WINCE_DEFINED_SERVENT */

/* tv_usec  [extra struct] */
#ifndef __WINCE_DEFINED_TIMEVAL
#define __WINCE_DEFINED_TIMEVAL
#ifndef __WINCE_DEFINED_TV_USEC
#define __WINCE_DEFINED_TV_USEC
struct timeval {long tv_sec;long tv_usec;};
#endif /* __WINCE_DEFINED_TV_USEC */
#endif /* __WINCE_DEFINED_TIMEVAL */

/* p_proto  [extra struct] */
#ifndef __WINCE_DEFINED_PROTOENT
#define __WINCE_DEFINED_PROTOENT
#ifndef __WINCE_DEFINED_P_PROTO
#define __WINCE_DEFINED_P_PROTO
struct protoent {char FAR* p_name;char FAR* FAR* p_aliases;short p_proto;};
#endif /* __WINCE_DEFINED_P_PROTO */
#endif /* __WINCE_DEFINED_PROTOENT */

#endif /* _WINSOCK_ */
