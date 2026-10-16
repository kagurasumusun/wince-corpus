/* Winsock.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _WINSOCK_
#define _WINSOCK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* CEBLOB  [struct; ce-only; CE 2.11..2.12, 3.0..699] */
typedef struct _CEBLOB {
 DWORD dwCount;
 LPBYTE lpb;
} CEBLOB;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct WSAData {WORD wVersion;WORD wHighVersion;char szDescription[WSADESCRIPTION_LEN+1];char szSystemStatus[WSASYS_STATUS_LEN+1];unsigned short iMaxSockets;unsigned short iMaxUdpDg;char FAR* lpVendorInfo;} WSADATA, *LPWSADATA;
SOCKET accept(  SOCKET s,  struct sockaddr FAR* addr,  int FAR* addrlen  );
struct sockaddr_in{shortsin_family;
unsigned shortsin_port;
IN_ADDR sin_addr;
charsin_zero[8];
};
int recvfrom(SOCKET s,char FAR* buf,int len,int flags,struct sockaddr FAR* from,int FAR* fromlen);
struct hostent {char FAR* h_name;char FAR* FAR* h_aliases;short h_addrtype;short h_length;char FAR* FAR* h_addr_list;};
char FAR* inet_ntoa(struct in_addr in);
struct linger {u_short l_onoff;u_short l_linger;};
struct hostent FAR* gethostbyname(const char FAR* name);
int bind(  SOCKET s,  const struct sockaddr FAR* name,  int namelen  );
struct protoent {char FAR* p_name;char FAR* FAR* p_aliases;short p_proto;};
struct servent {char FAR* s_name;char FAR* FAR* s_aliases;short s_port;char FAR* s_proto;};
struct sockaddr {u_short sa_family;char sa_data[14];};
struct sockaddr_in{
  short sin_family;
  unsigned short sin_port;
  IN_ADDR sin_addr;
  char sin_zero[8];
};
struct sockaddr {  unsigned short sa_family;  char sa_data[14];};
int select(int nfds,fd_set FAR* readfds,fd_set FAR* writefds,fd_set FAR* exceptfds,const struct timeval FAR* timeout);
int sendto(SOCKET s,const char FAR* buf, int len,int flags,const struct sockaddr FAR* to,int tolen);
struct timeval {long tv_sec;long tv_usec;};
struct hostent FAR* gethostbyaddr(const char FAR* addr,int len,int type);

#endif /* _WINSOCK_ */
