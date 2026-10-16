/* Winldap.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 146 constants, 92 declarations, 0 outlines, 0 base types, 0 extra macros, 20 extra decls
 */
#ifndef _WINLDAP_
#define _WINLDAP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define LDAP_API_INFO_VERSION 1
#define LDAP_API_VERSION 2004
#define LDAP_AUTH_DIGEST (LDAP_AUTH_OTHERKIND
#define LDAP_AUTH_DPA (LDAP_AUTH_OTHERKIND
#define LDAP_AUTH_EXTERNAL (LDAP_AUTH_OTHERKIND
#define LDAP_AUTH_MSN (LDAP_AUTH_OTHERKIND
#define LDAP_AUTH_NEGOTIATE (LDAP_AUTH_OTHERKIND
#define LDAP_AUTH_NONE 0x00U
#define LDAP_AUTH_NTLM (LDAP_AUTH_OTHERKIND
#define LDAP_AUTH_OTHERKIND 0x86U
#define LDAP_AUTH_SASL 0x83U
#define LDAP_AUTH_SICILY (LDAP_AUTH_OTHERKIND
#define LDAP_AUTH_SIMPLE 0x80U
#define LDAP_AUTH_SSPI LDAP_AUTH_NEGOTIATE
#define LDAP_CHASE_EXTERNAL_REFERRALS 0x40U
#define LDAP_CHASE_SUBORDINATE_REFERRALS 0x20U
#define LDAP_CONTROL_REFERRALS "1.2.840.113556.1.4.616"
#define LDAP_CONTROL_REFERRALS_W L"1.2.840.113556.1.4.616"
#define LDAP_CONTROL_VLVREQUEST "2.16.840.1.113730.3.4.9"
#define LDAP_CONTROL_VLVREQUEST_W L"2.16.840.1.113730.3.4.9"
#define LDAP_CONTROL_VLVRESPONSE "2.16.840.1.113730.3.4.10"
#define LDAP_CONTROL_VLVRESPONSE_W L"2.16.840.1.113730.3.4.10"
#define LDAP_DEREF_ALWAYS 0x03
#define LDAP_DEREF_FINDING 0x02
#define LDAP_DEREF_NEVER 0x00
#define LDAP_DEREF_SEARCHING 0x01
#define LDAP_FEATURE_INFO_VERSION 1
#define LDAP_FILTER_AND 0xa0
#define LDAP_FILTER_APPROX 0xa8
#define LDAP_FILTER_EQUALITY 0xa3
#define LDAP_FILTER_EXTENSIBLE 0xa9
#define LDAP_FILTER_GE 0xa5
#define LDAP_FILTER_LE 0xa6
#define LDAP_FILTER_NOT 0xa2
#define LDAP_FILTER_OR 0xa1
#define LDAP_FILTER_PRESENT 0x87
#define LDAP_FILTER_SUBSTRINGS 0xa4
#define LDAP_GC_PORT 3268
#define LDAP_INSUFFICIENT_ACCESS 0x32
#define LDAP_MOD_ADD 0x00
#define LDAP_MOD_BVALUES 0x80
#define LDAP_MOD_DELETE 0x01
#define LDAP_MOD_REPLACE 0x02
#define LDAP_MSG_ALL 0x01
#define LDAP_MSG_ONE 0x00
#define LDAP_MSG_RECEIVED 0x02
#define LDAP_NO_LIMIT 0
#define LDAP_OPT_API_FEATURE_INFO 0x15
#define LDAP_OPT_API_INFO 0x00
#define LDAP_OPT_AREC_EXCLUSIVE 0x98
#define LDAP_OPT_AUTO_RECONNECT 0x91
#define LDAP_OPT_CACHE_ENABLE 0x0f
#define LDAP_OPT_CACHE_FN_PTRS 0x0d
#define LDAP_OPT_CACHE_STRATEGY 0x0e
#define LDAP_OPT_CLIENT_CERTIFICATE 0x80
#define LDAP_OPT_CLIENT_CONTROLS 0x13
#define LDAP_OPT_DEREF 0x02
#define LDAP_OPT_DESC 0x01
#define LDAP_OPT_DNSDOMAIN_NAME 0x3B
#define LDAP_OPT_ENCRYPT 0x96
#define LDAP_OPT_ERROR_NUMBER 0x31
#define LDAP_OPT_ERROR_STRING 0x32
#define LDAP_OPT_GETDSNAME_FLAGS 0x3d
#define LDAP_OPT_HOST_NAME 0x30
#define LDAP_OPT_HOST_REACHABLE 0x3E
#define LDAP_OPT_IO_FN_PTRS 0x0b
#define LDAP_OPT_OFF ((void*)0)
#define LDAP_OPT_ON ((void*)1)
#define LDAP_OPT_PING_KEEP_ALIVE 0x36
#define LDAP_OPT_PING_LIMIT 0x38
#define LDAP_OPT_PING_WAIT_TIME 0x37
#define LDAP_OPT_PROMPT_CREDENTIALS 0x3F
#define LDAP_OPT_PROTOCOL_VERSION 0x11
#define LDAP_OPT_REBIND_ARG 0x07
#define LDAP_OPT_REBIND_FN 0x06
#define LDAP_OPT_REF_DEREF_CONN_PER_MSG 0x94
#define LDAP_OPT_REFERRAL_CALLBACK 0x70
#define LDAP_OPT_REFERRAL_HOP_LIMIT 0x10
#define LDAP_OPT_REFERRALS 0x08
#define LDAP_OPT_RESTART 0x09
#define LDAP_OPT_ROOTDSE_CACHE 0x9a
#define LDAP_OPT_SASL_METHOD 0x97
#define LDAP_OPT_SECURITY_CONTEXT 0x99
#define LDAP_OPT_SERVER_CERTIFICATE 0x81
#define LDAP_OPT_SERVER_CONTROLS 0x12
#define LDAP_OPT_SERVER_ERROR 0x33
#define LDAP_OPT_SERVER_EXT_ERROR 0x34
#define LDAP_OPT_SIGN 0x95
#define LDAP_OPT_SIZELIMIT 0x03
#define LDAP_OPT_SSL 0x0a
#define LDAP_OPT_SSL_INFO 0x93
#define LDAP_OPT_SSPI_FLAGS 0x92
#define LDAP_OPT_SUCCESS LDAP_SUCCESS
#define LDAP_OPT_TCP_KEEPALIVE 0x40
#define LDAP_OPT_THREAD_FN_PTRS 0x05
#define LDAP_OPT_TIMELIMIT 0x04
#define LDAP_OPT_TLS LDAP_OPT_SSL
#define LDAP_OPT_TLS_INFO LDAP_OPT_SSL_INFO
#define LDAP_OPT_VERSION LDAP_OPT_PROTOCOL_VERSION
#define LDAP_PAGED_RESULT_OID_STRING "1.2.840.113556.1.4.319"
#define LDAP_PAGED_RESULT_OID_STRING_W L"1.2.840.113556.1.4.319"
#define LDAP_PORT 389
#define LDAP_RES_ADD 0x69
#define LDAP_RES_ANY (-1L)
#define LDAP_RES_BIND 0x61
#define LDAP_RES_COMPARE 0x6f
#define LDAP_RES_DELETE 0x6b
#define LDAP_RES_EXTENDED 0x78
#define LDAP_RES_MODIFY 0x67
#define LDAP_RES_MODRDN 0x6d
#define LDAP_RES_SEARCH_ENTRY 0x64
#define LDAP_RES_SEARCH_REFERENCE 0x73
#define LDAP_RES_SEARCH_RESULT 0x65
#define LDAP_SCOPE_BASE 0x0000
#define LDAP_SCOPE_DEFAULT -1
#define LDAP_SCOPE_ONELEVEL 0x0001
#define LDAP_SCOPE_SUBTREE 0x0002
#define LDAP_SERVER_RESP_SORT_OID "1.2.840.113556.1.4.474"
#define LDAP_SERVER_RESP_SORT_OID_W L"1.2.840.113556.1.4.474"
#define LDAP_SERVER_SORT_OID "1.2.840.113556.1.4.473"
#define LDAP_SERVER_SORT_OID_W L"1.2.840.113556.1.4.473"
#define LDAP_SSL_GC_PORT 3269
#define LDAP_SSL_PORT 636
#define LDAP_START_TLS_OID "1.3.6.1.4.1.1466.20037"
#define LDAP_START_TLS_OID_W L"1.3.6.1.4.1.1466.20037"
#define LDAP_STRONG_AUTH_NOT_SUPPORTED 0x07
#define LDAP_SUBSTRING_ANY 0x81
#define LDAP_SUBSTRING_FINAL 0x82
#define LDAP_SUBSTRING_INITIAL 0x80
#define LDAP_TTL_EXTENDED_OP_OID "1.3.6.1.4.1.1466.101.119.1"
#define LDAP_TTL_EXTENDED_OP_OID_W L"1.3.6.1.4.1.1466.101.119.1"
#define LDAP_TYPE_OR_VALUE_EXISTS 0x14
#define LDAP_VENDOR_VERSION 510
#define LDAP_VERSION LDAP_VERSION2
#define LDAP_VERSION1 1
#define LDAP_VERSION2 2
#define LDAP_VERSION3 3
#define LDAP_VERSION_MAX LDAP_VERSION3
#define LDAP_VERSION_MIN LDAP_VERSION2
#define LPDA_OPT_SERVER_EXT_ERROR 0x34
#define PING_KEEP_ALIVE 0x36
#define PING_LIMIT 0x38
#define PING_WAIT_TIME 0x37
#define WINLDAPAPI DECLSPEC_IMPORT

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* ldap_set_option  [function, macro; shared; Wldap32.lib, wldap32.lib; A/W ldap_set_optionW (CE is W-side)] */
ULONG ldap_set_option(
 LDAP* ld,
 int option,
 void* invalue
);

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ldap_count_values_len  [struct, function; shared; Wldap32.lib, wldap32.lib] */
ULONG ldap_count_values_len(
 struct berval** vals
);

/* ldap_value_free_len  [struct, function; shared; Wldap32.lib, wldap32.lib] */
ULONG ldap_value_free_len(
 struct berval** vals
);

/* LDAPMessage  [typedef, struct; shared] */
typedef ldapmsg LDAPMessage, *PLDAPMessage;

/* LDAPSearch  [struct; ce-only] */
typedef struct ldapsearch LDAPSearch, *PLDAPSearch;

/* PLDAP  [extra typedef] */
typedef ldap LDAP, *PLDAP;

/* PLDAPMessage  [extra typedef] */
typedef ldapmsg LDAPMessage, *PLDAPMessage;

/* PBERVAL  [extra struct] */
typedef struct berval {ULONGbv_len;UNICODE PTCHARbv_val;} LDAP_BERVAL, *PLDAP_BERVAL, BERVAL, *PBERVAL;

/* PLDAPConnectionToDereference  [extra typedef] */
typedef ULONG (_cdecl DEREFERENCECONNECTION)(PLDAPPrimaryConnection,PLDAPConnectionToDereference);

/* MessageNumber  [extra struct] */
ULONG ldap_compare_ext(LDAP* ld,UNICODE PTCHARdn,UNICODE PTCHARAttr,UNICODE PTCHARValue,struct berval* Data,LDAPControl** ServerControls,LDAPControl** ClientControls,ULONG* MessageNumber);

/* ClientControls  [extra struct] */
ULONG ldap_compare_ext_s(LDAP* ld,UNICODE PTCHARdn,UNICODE PTCHARAttr,UNICODE PTCHARValue,struct berval* Data,LDAPControl** ServerControls,LDAPControl** ClientControls);

/* PLDAPControl  [extra struct] */
typedef struct ldapcontrol {PWCHARldctl_oid;structbervalldctl_value;BOOLEANldctl_iscritical;}LDAPControl,*PLDAPControl;

/* vals  [extra struct] */
ULONG ldap_count_values_len(struct berval** vals);

/* PTCHARattr  [extra struct] */
struct berval** ldap_get_values_len(LDAP* ExternalHandle,LDAPMessage* Message,UNICODE PTCHARattr);

/* PLDAPMod  [extra struct] */
typedef struct ldapmod {ULONGmod_op;PWCHARmod_type;union{PWCHAR* modv_strvals;structberval** modv_bvals;}mod_vals;}LDAPMod,*PLDAPMod;

/* Cookie  [extra struct] */
ULONG ldap_parse_page_control(LDAP*ExternalHandle,LDAPControl** ServerControls,ULONG* TotalCount,struct berva**l Cookie);

/* PLDAPSearch  [extra struct] */
typedef struct ldapsearch LDAPSearch, *PLDAPSearch;

/* PLDAPSortKey  [extra struct] */
typedef struct ldapsortkey {PWCHARsk_attrtype;PWCHARsk_matchruleoid;BOOLEANsk_reverseorder;} LDAPSortKey, *PLDAPSortKey;

/* PLDAP_TIMEVAL  [extra struct] */
typedef struct l_timeval {LONGtv_sec;LONGtv_usec;} LDAP_TIMEVAL, * PLDAP_TIMEVAL;

/* PCCERT_CONTEXTpServerCert  [extra typedef] */
typedef BOOLEAN (_cdecl VERIFYSERVERCERT) (PLDAPConnection,PCCERT_CONTEXTpServerCert);

/* ConnectionToDereference  [extra typedef] */
typedef ULONG (_cdecl DEREFERENCECONNECTION)( PLDAP PrimaryConnection, PLDAP ConnectionToDereference );

/* Freeit  [extra struct] */
ULONG ldap_parse_extended_result( LDAP Connection, LDAPMessage* ResultMessage, UNICODE PTCHAR* ResultOID, struct berval** ResultData, BOOL Freeit );

/* pServerCert  [extra typedef] */
typedef BOOLEAN (_cdecl VERIFYSERVERCERT) ( PLDAP Connection, PCCERT_CONTEXT pServerCert );

/* ErrorCodeFromBind  [extra typedef] */
typedef BOOLEAN (_cdecl NOTIFYOFNEWCONNECTION) ( PLDAP PrimaryConnection, PLDAP ReferralFromConnection, PWCHAR NewDN, PCHAR HostName, PLDAP NewConnection, ULONG PortNumber, PVOID SecAuthIdentity, PVOID CurrentUser, ULONG ErrorCodeFromBind );

/* attr  [extra struct] */
struct berval** ldap_get_values_len( LDAP* ExternalHandle, LDAPMessage* Message, UNICODE PTCHAR attr );

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x400 && _WIN32_WCE < 0x700)) /* CE 4.0..699 */

/* ldap_control_free  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_control_freeA,ldap_control_freeW (CE is W-side)] */
ULONG ldap_control_free(
 LDAPControl* Control
);

/* ldap_controls_free  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_controls_freeA,ldap_controls_freeW (CE is W-side)] */
ULONG ldap_controls_free(
 LDAPControl** Controls
);

/* LdapGetLastError  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG LdapGetLastError(void);

/* LdapMapErrorToWin32  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG LdapMapErrorToWin32(
 ULONG LdapError
);

/* LdapUnicodeToUTF8  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
int LdapUnicodeToUTF8(
 LPCWSTR lpSrcStr,
 int cchSrc,
 LPSTR lpDestStr,
 int cchDest
);

/* LdapUTF8ToUnicode  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
int LdapUTF8ToUnicode(
 LPCSTR lpSrcStr,
 int cchSrc,
 LPWSTR lpDestStr,
 int cchDest
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* ldap_msgfree  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_msgfree(
 LDAPMessage* res
);
#endif /* _WIN32_WCE */

#endif /* _WINLDAP_ */
