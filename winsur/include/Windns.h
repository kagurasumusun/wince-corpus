/* Windns.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 27 constants, 30 declarations, 2 outlines, 0 base types, 0 extra macros, 25 extra decls
 */
#ifndef _WINDNS_
#define _WINDNS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DNS_ATMA_MAX_ADDR_LENGTH 20
#define DNS_QUERY_ACCEPT_TRUNCATED_RESPONSE 0x1
#define DNS_QUERY_BYPASS_CACHE 0x8
#define DNS_QUERY_DONT_RESET_TTL_VALUES 0x100000
#define DNS_QUERY_NO_HOSTS_FILE 0x40
#define DNS_QUERY_NO_LOCAL_NAME 0x20
#define DNS_QUERY_NO_NETBT 0x80
#define DNS_QUERY_NO_RECURSION 0x4
#define DNS_QUERY_NO_WIRE_QUERY 0x10
#define DNS_QUERY_RESERVED 0xff000000
#define DNS_QUERY_RETURN_MESSAGE 0x200
#define DNS_QUERY_STANDARD 0x0
#define DNS_QUERY_TREAT_AS_FQDN 0x1000
#define DNS_QUERY_USE_TCP_ONLY 0x2
#define DNS_QUERY_WIRE_ONLY 0x100
#define DNS_UPDATE_CACHE_SECURITY_CONTEXT 0x200
#define DNS_UPDATE_FORCE_SECURITY_NEGO 0x800
#define DNS_UPDATE_RESERVED 0xffff0000
#define DNS_UPDATE_SECURITY_OFF 0x10
#define DNS_UPDATE_SECURITY_ON 0x20
#define DNS_UPDATE_SECURITY_ONLY 0x100
#define DNS_UPDATE_SECURITY_USE_DEFAULT 0x0
#define DNS_UPDATE_TEST_USE_LOCAL_SYS_ACCT 0x400
#define DNSREC_ADDITIONAL 3
#define DNSREC_ANSWER 1
#define DNSREC_AUTHORITY 2
#define DNSREC_QUESTION 0

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DNS_RECORD  [struct, macro; shared; A/W DNS_RECORDA,DNS_RECORDW (CE is W-side)] */
typedef struct _DnsRecord {
 struct _DnsRecord* pNext;
 LPTSTR pName;
 WORD wType;
 WORD wDataLength;
 union {
 DWORD DW;
 DNS_RECORD_FLAGS S;
 } Flags;
 DWORD dwTtl;
 DWORD dwReserved;
 union {
 DNS_A_DATA A;
 DNS_SOA_DATA SOA, Soa;
 DNS_PTR_DATA PTR, Ptr, NS, Ns, CNAME, Cname, 
 MB, Mb, MD, Md, MF, Mf, MG, Mg, MR, Mr;
 DNS_MINFO_DATA MINFO, Minfo, RP, Rp;
 DNS_MX_DATA MX, Mx, AFSDB, Afsdb, RT, Rt;
 DNS_TXT_DATA HINFO, Hinfo, ISDN, Isdn, TXT, Txt, X25;
 DNS_NULL_DATA Null;
 DNS_WKS_DATA WKS, Wks;
 DNS_AAAA_DATA AAAA;
 DNS_KEY_DATA KEY, Key;
 DNS_SIG_DATA SIG, Sig;
 DNS_ATMA_DATA ATMA, Atma;
 DNS_NXT_DATA NXT, Nxt;
 DNS_SRV_DATA SRV, Srv;
 DNS_TKEY_DATA TKEY, Tkey;
 DNS_TSIG_DATA TSIG, Tsig;
 DNS_WINS_DATA WINS, Wins;
 DNS_WINSR_DATA WINSR, WinsR, NBSTAT, Nbstat;
 } Data;
} DNS_RECORD, *PDNS_RECORD;

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DNS_RECORD_FLAGS  [struct; shared] */
typedef struct _DnsRecordFlags {
 DWORD Section :2;
 DWORD Delete :1;
 DWORD CharSet :2;
 DWORD Unused :3;
 DWORD Reserved :24;
} DNS_RECORD_FLAGS;

/* DNS_ATMA_DATA  [struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   AddressType */
/*   Address */

/* DNS_TSIG_DATA  [struct; shared; A/W DNS_TSIG_DATAA,DNS_TSIG_DATAW (CE is W-side)] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   pNameAlgorithm */
/*   pAlgorithmPacket */
/*   pSignature */
/*   pOtherData */
/*   i64CreateTime */
/*   wFudgeTime */
/*   wOriginalXid */
/*   wError */
/*   wSigLength */
/*   wOtherLength */
/*   cAlgNameLength */
/*   bPacketPointers */

/* PDNS_AAAA_DATA  [extra struct] */
typedef struct {DNS_IP6_ADDRESS Ip6Address;} DNS_AAAA_DATA, *PDNS_AAAA_DATA;

/* PDNS_A_DATA  [extra struct] */
typedef struct {IP4_ADDRESS IpAddress;} DNS_A_DATA, *PDNS_A_DATA;

/* PDNS_HEADER  [extra struct] */
typedef struct _DNS_HEADER {WORD Xid;BYTE RecursionDesired;BYTE Truncation;BYTE Authoritative;BYTE Opcode;BYTE IsResponse;BYTE ResponseCode;BYTE Reserved;BYTE RecursionAvailable;WORD QuestionCount;WORD AnswerCount;WORD NameServerCount;WORD AdditionalCount;} DNS_HEADER, *PDNS_HEADER;

/* PDNS_KEY_DATA  [extra struct] */
typedef struct {WORD wFlags;BYTE chProtocol;BYTE chAlgorithm;BYTE Key[1];} DNS_KEY_DATA, *PDNS_KEY_DATA;

/* PDNS_LOC_DATA  [extra struct] */
typedef struct { WORD wVersion; WORD wSize; WORD wHorPrec; WORD wVerPrec; DWORD dwLatitude; DWORD dwLongitude; DWORD dwAltitude;} DNS_LOC_DATA, *PDNS_LOC_DATA;

/* PDNS_MESSAGE_BUFFER  [extra struct] */
typedef struct _DNS_MESSAGE_BUFFER {DNS_HEADER MessageHead;CHAR MessageBody[1];}DNS_MESSAGE_BUFFER, *PDNS_MESSAGE_BUFFER;

/* PDNS_MINFO_DATA  [extra struct] */
typedef struct { LPTSTR pNameMailbox; LPTSTR pNameErrorsMailbox;} DNS_MINFO_DATA, *PDNS_MINFO_DATA;

/* PDNS_MX_DATA  [extra struct] */
typedef struct { LPTSTR pNameExchange; WORD wPreference; WORD Pad;} DNS_MX_DATA, *PDNS_MX_DATA;

/* PDNS_NULL_DATA  [extra struct] */
typedef struct { DWORD dwByteCount; BYTE Data[1];} DNS_NULL_DATA, *PDNS_NULL_DATA;

/* PDNS_NXT_DATA  [extra struct] */
typedef struct { LPTSTR pNameNext; WORD wNumTypes; WORD wTypes[1];} DNS_NXT_DATA, *PDNS_NXT_DATA;

/* PDNS_PTR_DATA  [extra struct] */
typedef struct { LPTSTR pNameHost;} DNS_PTR_DATA, *PDNS_PTR_DATA;

/* PDNS_RECORD  [extra struct] */
typedef struct _DnsRecord {struct _DnsRecord* pNext;LPTSTR pName;WORD wType;WORD wDataLength;union {DWORD DW;DNS_RECORD_FLAGS S;} Flags;DWORD dwTtl;DWORD dwReserved;union {DNS_A_DATA A;DNS_SOA_DATA SOA, Soa;DNS_PTR_DATA PTR, Ptr, NS, Ns, CNAME, Cname, MB, Mb, MD, Md, MF, Mf, MG, Mg, MR, Mr;DNS_MINFO_DATA MINFO, Minfo, RP, Rp;DNS_MX_DATA MX, Mx, AFSDB, Afsdb, RT, Rt;DNS_TXT_DATA HINFO, Hinfo, ISDN, Isdn, TXT, Txt, X25;DNS_NULL_DATA Null;DNS_WKS_DATA WKS, Wks;DNS_AAAA_DATA AAAA;DNS_KEY_DATA KEY, Key;DNS_SIG_DATA SIG, Sig;DNS_ATMA_DATA ATMA, Atma;DNS_NXT_DATA NXT, Nxt;DNS_SRV_DATA SRV, Srv;DNS_TKEY_DATA TKEY, Tkey;DNS_TSIG_DATA TSIG, Tsig;DNS_WINS_DATA WINS, Wins;DNS_WINSR_DATA WINSR, WinsR, NBSTAT, Nbstat;} Data;} DNS_RECORD, *PDNS_RECORD;

/* PDNS_RRSET  [extra struct] */
typedef struct _DnsRRSet { PDNS_RECORD pFirstRR; PDNS_RECORD pLastRR;} DNS_RRSET, *PDNS_RRSET;

/* PDNS_SIG_DATA  [extra struct] */
typedef struct { LPTSTR pNameSigner; WORD wTypeCovered; BYTE chAlgorithm; BYTE chLabelCount; DWORD dwOriginalTtl; DWORD dwExpiration; DWORD dwTimeSigned; WORD wKeyTag; WORD Pad; BYTE Signature[1];} DNS_SIG_DATA, *PDNS_SIG_DATA;

/* PDNS_SOA_DATA  [extra struct] */
typedef struct { LPTSTR pNamePrimaryServer; LPTSTR pNameAdministrator; DWORD dwSerialNo; DWORD dwRefresh; DWORD dwRetry; DWORD dwExpire; DWORD dwDefaultTtl;} DNS_SOA_DATA, *PDNS_SOA_DATA;

/* PDNS_SRV_DATA  [extra struct] */
typedef struct { LPTSTR pNameTarget; WORD wPriority; WORD wWeight; WORD wPort; WORD Pad;} DNS_SRV_DATA, *PDNS_SRV_DATA;

/* PDNS_TKEY_DATA  [extra struct] */
typedef struct { LPTSTR pNameAlgorithm; PBYTE pAlgorithmPacket; PBYTE pKey; PBYTE pOtherData; DWORD dwCreateTime; DWORD dwExpireTime; WORD wMode; WORD wError; WORD wKeyLength; WORD wOtherLength; UCHAR cAlgNameLength; BOOL bPacketPointers;} DNS_TKEY_DATA, *PDNS_TKEY_DATA;

/* PDNS_TXT_DATA  [extra struct] */
typedef struct { DWORD dwStringCount; LPTSTR pStringArray[1];} DNS_TXT_DATA, *PDNS_TXT_DATA;

/* PDNS_WINSR_DATA  [extra struct] */
typedef struct { DWORD dwMappingFlag; DWORD dwLookupTimeout; DWORD dwCacheTimeout; LPTSTR pNameResultDomain;} DNS_WINSR_DATA, *PDNS_WINSR_DATA;

/* PDNS_WINS_DATA  [extra struct] */
typedef struct { DWORD dwMappingFlag; DWORD dwLookupTimeout; DWORD dwCacheTimeout; DWORD cWinsServerCount; IP4_ADDRESS WinsServers[1];} DNS_WINS_DATA, *PDNS_WINS_DATA;

/* PDNS_WIRE_QUESTION  [extra struct] */
typedef struct _DNS_WIRE_QUESTION { WORD QuestionType; WORD QuestionClass;} DNS_WIRE_QUESTION, *PDNS_WIRE_QUESTION;

/* PDNS_WIRE_RECORD  [extra struct] */
typedef struct _DNS_WIRE_RECORD { WORD RecordType; WORD RecordClass; DWORD TimeToLive; WORD DataLength;} DNS_WIRE_RECORD, *PDNS_WIRE_RECORD;

/* PDNS_WKS_DATA  [extra struct] */
typedef struct { IP4_ADDRESS IpAddress; UCHAR chProtocol; BYTE BitMask[1];} DNS_WKS_DATA, *PDNS_WKS_DATA;

/* PIP4_ARRAY  [extra struct] */
typedef struct _IP4_ARRAY { DWORD AddrCount; IP4_ADDRESS AddrArray[1];} IP4_ARRAY, *PIP4_ARRAY;

/* PIP6_ADDRESS  [extra struct] */
typedef struct { DWORD IP6Dword[4];} IP6_ADDRESS, *PIP6_ADDRESS;

#endif /* _WINDNS_ */
