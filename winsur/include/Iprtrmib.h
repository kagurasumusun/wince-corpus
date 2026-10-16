/* Iprtrmib.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 26 constants, 11 declarations, 8 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _IPRTRMIB_
#define _IPRTRMIB_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define MAX_INTERFACE_NAME_LEN 256
#define MAXLEN_IFDESCR 256
#define MAXLEN_PHYSADDR 8
#define MIB_IPNET_TYPE_DYNAMIC 3
#define MIB_IPNET_TYPE_INVALID 2
#define MIB_IPNET_TYPE_OTHER 1
#define MIB_IPNET_TYPE_STATIC 4
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
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* MIB_IPNETROW  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MIBICMPSTATS  [struct; shared] */
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

/* MIBICMPINFO  [struct; shared] */
typedef struct _MIBICMPINFO {
 MIBICMPSTATS icmpInStats; 
 MIBICMPSTATS icmpOutStats; 
} MIBICMPINFO;

/* MIB_IFROW  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   wszName */
/*   dwIndex */
/*   dwType */
/*   dwMtu */
/*   dwSpeed */
/*   dwPhysAddrLen */
/*   bPhysAddr */
/*   dwAdminStatus */
/*   dwOperStatus */
/*   dwLastChange */
/*   dwInOctets */
/*   dwInUcastPkts */
/*   dwInNUcastPkts */
/*   dwInDiscards */
/*   dwInErrors */
/*   dwInUnknownProtos */
/*   dwOutOctets */
/*   dwOutUcastPkts */
/*   dwOutNUcastPkts */
/*   dwOutDiscards */
/*   dwOutErrors */
/*   dwOutQLen */
/*   dwDescrLen */
/*   bDescr */

/* MIB_IFTABLE  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwNumEntries */
/*   table */

/* MIB_IPADDRTABLE  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwNumEntries */
/*   table */

/* MIB_IPFORWARDTABLE  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwNumEntries */
/*   table */

/* MIB_IPNETTABLE  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwNumEntries */
/*   table */

/* MIB_TCPTABLE  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwNumEntries */
/*   table */

/* MIB_UDPTABLE  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   dwNumEntries */
/*   table */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _MIB_IPADDRROW {DWORDdwAddr;DWORDdwIndex;DWORDdwMask;DWORDdwBCastAddr;DWORDdwReasmSize;unsignedshortunused1;unsignedshortunused2;} MIB_IPADDRROW,*PMIB_IPADDRROW;
typedef struct _MIB_IPNETROW {DWORD dwIndex;DWORD dwPhysAddrLen;BYTE bPhysAddr[MAXLEN_PHYSADDR];DWORD dwAddr;DWORD dwType;} MIB_IPNETROW,*PMIB_IPNETROW;
typedef struct _MIB_IPSTATS {DWORD dwForwarding; DWORD dwDefaultTTL; DWORD dwInReceives; DWORD dwInHdrErrors; DWORD dwInAddrErrors; DWORD dwForwDatagrams; DWORD dwInUnknownProtos; DWORD dwInDiscards; DWORD dwInDelivers; DWORD dwOutRequests; DWORD dwRoutingDiscards; DWORD dwOutDiscards; DWORD dwOutNoRoutes; DWORD dwReasmTimeout; DWORD dwReasmReqds; DWORD dwReasmOks; DWORD dwReasmFails; DWORD dwFragOks; DWORD dwFragFails; DWORD dwFragCreates;DWORD dwNumIf; DWORD dwNumAddr; DWORD dwNumRoutes; } MIB_IPSTATS, *PMIB_IPSTATS;
typedef struct _MIB_TCPROW {DWORD dwState; DWORD dwLocalAddr; DWORD dwLocalPort; DWORD dwRemoteAddr; DWORD dwRemotePort;} MIB_TCPROW,*PMIB_TCPROW;
typedef struct _MIB_TCPSTATS {DWORD dwRtoAlgorithm;DWORD dwRtoMin; DWORD dwRtoMax; DWORD dwMaxConn; DWORD dwActiveOpens; DWORD dwPassiveOpens; DWORD dwAttemptFails; DWORD dwEstabResets; DWORD dwCurrEstab; DWORD dwInSegs; DWORD dwOutSegs; DWORD dwRetransSegs; DWORD dwInErrs; DWORD dwOutRsts; DWORD dwNumConns; } MIB_TCPSTATS,*PMIB_TCPSTATS;

#endif /* _IPRTRMIB_ */
