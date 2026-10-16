/* Winldap.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 206 constants, 86 declarations, 4 outlines, 0 base types, 0 extra macros, 21 extra decls
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
#define LDAP_MOD_BVALUES 0x80
#define LDAP_NO_LIMIT 0
#define LDAP_OPT_API_FEATURE_INFO 0x15
#define LDAP_OPT_API_INFO 0x00
#define LDAP_OPT_CACHE_ENABLE 0x0f
#define LDAP_OPT_CACHE_FN_PTRS 0x0d
#define LDAP_OPT_CACHE_STRATEGY 0x0e
#define LDAP_OPT_CLIENT_CERTIFICATE 0x80
#define LDAP_OPT_CLIENT_CONTROLS 0x13
#define LDAP_OPT_GETDSNAME_FLAGS 0x3d
#define LDAP_OPT_IO_FN_PTRS 0x0b
#define LDAP_OPT_OFF ((void*)0)
#define LDAP_OPT_ON ((void*)1)
#define LDAP_OPT_PING_KEEP_ALIVE 0x36
#define LDAP_OPT_PING_LIMIT 0x38
#define LDAP_OPT_PING_WAIT_TIME 0x37
#define LDAP_OPT_PROTOCOL_VERSION 0x11
#define LDAP_OPT_REBIND_ARG 0x07
#define LDAP_OPT_REBIND_FN 0x06
#define LDAP_OPT_REF_DEREF_CONN_PER_MSG 0x94
#define LDAP_OPT_REFERRAL_CALLBACK 0x70
#define LDAP_OPT_ROOTDSE_CACHE 0x9a
#define LDAP_OPT_SASL_METHOD 0x97
#define LDAP_OPT_SECURITY_CONTEXT 0x99
#define LDAP_OPT_SERVER_CERTIFICATE 0x81
#define LDAP_OPT_SERVER_CONTROLS 0x12
#define LDAP_OPT_SERVER_EXT_ERROR 0x34
#define LDAP_OPT_SSL_INFO 0x93
#define LDAP_OPT_SUCCESS LDAP_SUCCESS
#define LDAP_OPT_TCP_KEEPALIVE 0x40
#define LDAP_OPT_THREAD_FN_PTRS 0x05
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
#define LDAP_VENDOR_NAME "Microsoft
#define LDAP_VENDOR_NAME_W L"Microsoft
#define LDAP_VENDOR_VERSION 510
#define LDAP_VERSION LDAP_VERSION2
#define LDAP_VERSION1 1
#define LDAP_VERSION2 2
#define LDAP_VERSION3 3
#define LDAP_VERSION_MAX LDAP_VERSION3
#define LDAP_VERSION_MIN LDAP_VERSION2
#define WINLDAPAPI DECLSPEC_IMPORT
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */
#define LDAP_MOD_ADD 0x00
#define LDAP_MOD_DELETE 0x01
#define LDAP_MOD_REPLACE 0x02
#define LDAP_MSG_ALL 0x01
#define LDAP_MSG_ONE 0x00
#define LDAP_MSG_RECEIVED 0x02
#define LDAP_OPT_AREC_EXCLUSIVE 0x98
#define LDAP_OPT_AUTO_RECONNECT 0x91
#define LDAP_OPT_DEREF 0x02
#define LDAP_OPT_DESC 0x01
#define LDAP_OPT_DNSDOMAIN_NAME 0x3B
#define LDAP_OPT_ENCRYPT 0x96
#define LDAP_OPT_ERROR_NUMBER 0x31
#define LDAP_OPT_ERROR_STRING 0x32
#define LDAP_OPT_HOST_NAME 0x30
#define LDAP_OPT_HOST_REACHABLE 0x3E
#define LDAP_OPT_PROMPT_CREDENTIALS 0x3F
#define LDAP_OPT_REFERRAL_HOP_LIMIT 0x10
#define LDAP_OPT_REFERRALS 0x08
#define LDAP_OPT_RESTART 0x09
#define LDAP_OPT_SERVER_ERROR 0x33
#define LDAP_OPT_SIGN 0x95
#define LDAP_OPT_SIZELIMIT 0x03
#define LDAP_OPT_SSL 0x0a
#define LDAP_OPT_SSPI_FLAGS 0x92
#define LDAP_OPT_TIMELIMIT 0x04
#define LPDA_OPT_SERVER_EXT_ERROR 0x34
#define PING_KEEP_ALIVE 0x36
#define PING_LIMIT 0x38
#define PING_WAIT_TIME 0x37
#endif /* _WIN32_WCE */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */
#define LDAP_ADMIN_LIMIT_EXCEEDED 0x0b
#define LDAP_AFFECTS_MULTIPLE_DSAS 0x47
#define LDAP_ALIAS_DEREF_PROBLEM 0x24
#define LDAP_ALIAS_PROBLEM 0x21
#define LDAP_ALREADY_EXISTS 0x44
#define LDAP_ATTRIBUTE_OR_VALUE_EXISTS 0x14
#define LDAP_AUTH_METHOD_NOT_SUPPORTED 0x07
#define LDAP_AUTH_UNKNOWN 0x56
#define LDAP_BUSY 0x33
#define LDAP_CLIENT_LOOP 0x60
#define LDAP_COMPARE_FALSE 0x05
#define LDAP_COMPARE_TRUE 0x06
#define LDAP_CONFIDENTIALITY_REQUIRED 0x0d
#define LDAP_CONNECT_ERROR 0x5b
#define LDAP_CONSTRAINT_VIOLATION 0x13
#define LDAP_CONTROL_NOT_FOUND 0x5d
#define LDAP_DECODING_ERROR 0x54
#define LDAP_ENCODING_ERROR 0x53
#define LDAP_FILTER_ERROR 0x57
#define LDAP_INAPPROPRIATE_AUTH 0x30
#define LDAP_INAPPROPRIATE_MATCHING 0x12
#define LDAP_INSUFFICIENT_RIGHTS 0x32
#define LDAP_INVALID_CREDENTIALS 0x31
#define LDAP_INVALID_DN_SYNTAX 0x22
#define LDAP_INVALID_SYNTAX 0x15
#define LDAP_IS_LEAF 0x23
#define LDAP_LOCAL_ERROR 0x52
#define LDAP_LOOP_DETECT 0x36
#define LDAP_MORE_RESULTS_TO_RETURN 0x5f
#define LDAP_NAMING_VIOLATION 0x40
#define LDAP_NO_MEMORY 0x5a
#define LDAP_NO_OBJECT_CLASS_MODS 0x45
#define LDAP_NO_RESULTS_RETURNED 0x5e
#define LDAP_NO_SUCH_ATTRIBUTE 0x10
#define LDAP_NO_SUCH_OBJECT 0x20
#define LDAP_NOT_ALLOWED_ON_NONLEAF 0x42
#define LDAP_NOT_ALLOWED_ON_RDN 0x43
#define LDAP_NOT_SUPPORTED 0x5c
#define LDAP_OBJECT_CLASS_VIOLATION 0x41
#define LDAP_OPERATIONS_ERROR 0x01
#define LDAP_OTHER 0x50
#define LDAP_PARAM_ERROR 0x59
#define LDAP_PARTIAL_RESULTS 0x09
#define LDAP_PROTOCOL_ERROR 0x02
#define LDAP_REFERRAL 0x0a
#define LDAP_REFERRAL_LIMIT_EXCEEDED 0x61
#define LDAP_REFERRAL_V2 0x09
#define LDAP_RESULTS_TOO_LARGE 0x46
#define LDAP_SASL_BIND_IN_PROGRESS 0x0e
#define LDAP_SERVER_DOWN 0x51
#define LDAP_SIZELIMIT_EXCEEDED 0x04
#define LDAP_STRONG_AUTH_REQUIRED 0x08
#define LDAP_SUCCESS 0x00
#define LDAP_TIMELIMIT_EXCEEDED 0x03
#define LDAP_TIMEOUT 0x55
#define LDAP_UNAVAILABLE 0x34
#define LDAP_UNAVAILABLE_CRIT_EXTENSION 0x0c
#define LDAP_UNDEFINED_TYPE 0x11
#define LDAP_UNWILLING_TO_PERFORM 0x35
#define LDAP_USER_CANCELLED 0x58
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ldap_set_option  [function, macro; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_set_optionW (CE is W-side)] */
ULONG ldap_set_option(
 LDAP* ld,
 int option,
 void* invalue
);

/* NOTIFYOFNEWCONNECTION  [typedef; ce-only; CE 5.0..699; Wldap32.lib, wldap32.lib] */

/* VERIFYSERVERCERT  [typedef, callback; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* BerElement  [struct; shared; CE 4.0..699] */
typedef struct berElement {
 UNICODE PTCHAR opaque; 
} BerElement;

/* berval  [struct; ce-only; CE 4.0..699] */
typedef struct berval {
 ULONG bv_len;
 UNICODE PTCHAR bv_val;
} LDAP_BERVAL, *PLDAP_BERVAL, BERVAL, *PBERVAL;

/* DEREFERENCECONNECTION  [typedef; ce-only; CE 4.0..699; Wldap32.lib, wldap32.lib] */
typedef ULONG (_cdecl DEREFERENCECONNECTION)(
 PLDAP PrimaryConnection,
 PLDAP ConnectionToDereference
);

/* LDAP  [typedef, struct; shared; CE 4.0..699] */
typedef ldap LDAP, *PLDAP;

/* ldap_compare_ext  [struct, function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_compare_extA,ldap_compare_extW (CE is W-side)] */
ULONG ldap_compare_ext(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR Attr,
 UNICODE PTCHAR Value,
 struct berval* Data,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 ULONG* MessageNumber
);

/* ldap_compare_ext_s  [struct, function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_compare_ext_sA,ldap_compare_ext_sW (CE is W-side)] */
ULONG ldap_compare_ext_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR Attr,
 UNICODE PTCHAR Value, 
 struct berval* Data,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls
);

/* ldap_count_values_len  [struct, function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_count_values_len(
 struct berval** vals
);

/* ldap_create_page_control  [struct, function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_create_page_controlA,ldap_create_page_controlW (CE is W-side)] */
ULONG ldap_create_page_control(
 LDAP* ExternalHandle,
 ULONG PageSize,
 struct berval* Cookie,
 UCHAR IsCritical,
 LDAPControl** Control
);

/* ldap_extended_operation  [struct, function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_extended_operationA,ldap_extended_operationW (CE is W-side)] */
ULONG ldap_extended_operation(
 LDAP* ld,
 UNICODE PTCHAR Oid,
 struct berval* Data,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 ULONG* MessageNumber
);

/* LDAPControl  [struct; shared; CE 4.0..699; A/W LDAPControlA,LDAPControlW (CE is W-side)] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   ldctl_oid */
/*   ldctl_value */
/*   ldctl_iscritical */

/* LDAPMessage  [typedef, struct; shared; CE 4.0..699] */
typedef ldapmsg LDAPMessage, *PLDAPMessage;

/* LDAPMod  [struct; shared; CE 4.0..699; A/W LDAPModA,LDAPModW (CE is W-side)] */
typedef struct ldapmod {
 ULONG mod_op;
 PWCHAR mod_type;
 union {
 PWCHAR* modv_strvals;
 struct berval** modv_bvals;
 } mod_vals;
} LDAPMod, *PLDAPMod;

/* LDAPSearch  [struct; ce-only; CE 4.0..699] */
typedef struct ldapsearch LDAPSearch, *PLDAPSearch;

/* LDAPSortKey  [struct; shared; CE 4.0..699; A/W LDAPSortKeyA,LDAPSortKeyW (CE is W-side)] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   sk_attrtype */
/*   sk_matchruleoid */
/*   sk_reverseorder */
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ldap_get_values_len  [struct, function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_get_values_lenA,ldap_get_values_lenW (CE is W-side)] */
struct berval** ldap_get_values_len(
 LDAP* ExternalHandle,
 LDAPMessage* Message,
 UNICODE PTCHAR attr
);

/* ldap_parse_extended_result  [struct; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_parse_extended_resultA,ldap_parse_extended_resultW (CE is W-side)] */
ULONG ldap_parse_extended_result(
 LDAP Connection,
 LDAPMessage* ResultMessage,
 UNICODE PTCHAR* ResultOID,
 struct berval** ResultData,
 BOOL Freeit
);

/* ldap_parse_page_control  [struct, function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_parse_page_controlA,ldap_parse_page_controlW (CE is W-side)] */
ULONG ldap_parse_page_control(
 LDAP* ExternalHandle,
 LDAPControl** ServerControls,
 ULONG* TotalCount,
 struct berval** Cookie
);

/* LDAP_REFERRAL_CALLBACK  [struct; shared; CE 5.0..699] */
typedef struct LdapReferralCallback {
 ULONG SizeOfCallbacks;
 QUERYFORCONNECTION* QueryForConnection;
 NOTIFYOFNEWCONNECTION* NotifyRoutine;
 DEREFERENCECONNECTION* DereferenceRoutine;
} LDAP_REFERRAL_CALLBACK, *PLDAP_REFERRAL_CALLBACK;

/* LDAP_RETCODE  [enum; ce-only; CE 5.0..699] */
typedef enum {
 LDAP_SUCCESS = 0x00,
 LDAP_OPERATIONS_ERROR = 0x01,
 LDAP_PROTOCOL_ERROR = 0x02,
 LDAP_TIMELIMIT_EXCEEDED = 0x03,
 LDAP_SIZELIMIT_EXCEEDED = 0x04,
 LDAP_COMPARE_FALSE = 0x05,
 LDAP_COMPARE_TRUE = 0x06,
 LDAP_AUTH_METHOD_NOT_SUPPORTED = 0x07,
 LDAP_STRONG_AUTH_REQUIRED = 0x08,
 LDAP_REFERRAL_V2 = 0x09,
 LDAP_PARTIAL_RESULTS = 0x09, 
 LDAP_REFERRAL = 0x0a,
 LDAP_ADMIN_LIMIT_EXCEEDED = 0x0b,
 LDAP_UNAVAILABLE_CRIT_EXTENSION = 0x0c,
 LDAP_CONFIDENTIALITY_REQUIRED = 0x0d,
 LDAP_SASL_BIND_IN_PROGRESS = 0x0e,
 LDAP_NO_SUCH_ATTRIBUTE = 0x10,
 LDAP_UNDEFINED_TYPE = 0x11,
 LDAP_INAPPROPRIATE_MATCHING = 0x12,
 LDAP_CONSTRAINT_VIOLATION = 0x13,
 LDAP_ATTRIBUTE_OR_VALUE_EXISTS = 0x14,
 LDAP_INVALID_SYNTAX = 0x15,
 LDAP_NO_SUCH_OBJECT = 0x20,
 LDAP_ALIAS_PROBLEM = 0x21,
 LDAP_INVALID_DN_SYNTAX = 0x22,
 LDAP_IS_LEAF = 0x23,
 LDAP_ALIAS_DEREF_PROBLEM = 0x24,
 LDAP_INAPPROPRIATE_AUTH = 0x30,
 LDAP_INVALID_CREDENTIALS = 0x31,
 LDAP_INSUFFICIENT_RIGHTS = 0x32,
 LDAP_BUSY = 0x33,
 LDAP_UNAVAILABLE = 0x34,
 LDAP_UNWILLING_TO_PERFORM = 0x35,
 LDAP_LOOP_DETECT = 0x36,
 LDAP_NAMING_VIOLATION = 0x40,
 LDAP_OBJECT_CLASS_VIOLATION = 0x41,
 LDAP_NOT_ALLOWED_ON_NONLEAF = 0x42,
 LDAP_NOT_ALLOWED_ON_RDN = 0x43,
 LDAP_ALREADY_EXISTS = 0x44,
 LDAP_NO_OBJECT_CLASS_MODS = 0x45,
 LDAP_RESULTS_TOO_LARGE = 0x46,
 LDAP_AFFECTS_MULTIPLE_DSAS = 0x47,
 LDAP_OTHER = 0x50,
 LDAP_SERVER_DOWN = 0x51,
 LDAP_LOCAL_ERROR = 0x52,
 LDAP_ENCODING_ERROR = 0x53,
 LDAP_DECODING_ERROR = 0x54,
 LDAP_TIMEOUT = 0x55,
 LDAP_AUTH_UNKNOWN = 0x56,
 LDAP_FILTER_ERROR = 0x57,
 LDAP_USER_CANCELLED = 0x58,
 LDAP_PARAM_ERROR = 0x59,
 LDAP_NO_MEMORY = 0x5a,
 LDAP_CONNECT_ERROR = 0x5b,
 LDAP_NOT_SUPPORTED = 0x5c,
 LDAP_CONTROL_NOT_FOUND = 0x5d,
 LDAP_NO_RESULTS_RETURNED = 0x5e,
 LDAP_MORE_RESULTS_TO_RETURN = 0x5f,
 LDAP_CLIENT_LOOP = 0x60,
 LDAP_REFERRAL_LIMIT_EXCEEDED = 0x61
} LDAP_RETCODE;

/* ldap_search_ext_s  [struct, function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_search_ext_sA,ldap_search_ext_sW (CE is W-side)] */
ULONG ldap_search_ext_s(
 LDAP* ld,
 UNICODE PTCHAR base,
 ULONG scope,
 UNICODE PTCHAR filter,
 UNICODE PTCHAR attrs[],
 ULONG attrsonly,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 struct l_timeval* timeout,
 ULONG SizeLimit,
 LDAPMessage** res
);

/* ldap_search_st  [struct, function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_search_stA,ldap_search_stW (CE is W-side)] */
ULONG ldap_search_st(
 LDAP* ld,
 UNICODE PTCHAR base,
 ULONG scope,
 UNICODE PTCHAR filter,
 UNICODE PTCHAR attrs[],
 ULONG attrsonly,
 struct l_timeval* timeout,
 LDAPMessage** res
);

/* LDAP_TIMEVAL  [struct; shared; CE 5.0..699] */
typedef struct l_timeval {
 LONG tv_sec;
 LONG tv_usec;
} LDAP_TIMEVAL, * PLDAP_TIMEVAL;

/* ldap_value_free_len  [struct, function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_value_free_len(
 struct berval** vals
);

/* QUERYFORCONNECTION  [typedef; ce-only; CE 5.0..699; Wldap32.lib, wldap32.lib] */
typedef ULONG (_cdecl QUERYFORCONNECTION)(
 PLDAP PrimaryConnection,
 PLDAP ReferralFromConnection,
 PWCHAR NewDN,
 PCHAR HostName,
 ULONG PortNumber,
 PVOID SecAuthIdentity,
 PVOID CurrentUserToken,
 PLDAP* ConnectionToUse
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ldap_abandon  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_abandon(
 LDAP* ld,
 ULONG msgid
);

/* ldap_add  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_addA,ldap_addW (CE is W-side)] */
ULONG ldap_add(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* attrs[]
);

/* ldap_add_ext  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_add_extA,ldap_add_extW (CE is W-side)] */
ULONG ldap_add_ext(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* attrs[],
 LDAPControlA** ServerControls,
 LDAPControlA** ClientControls,
 ULONG* MessageNumber
);

/* ldap_add_ext_s  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_add_ext_sA,ldap_add_ext_sW (CE is W-side)] */
ULONG ldap_add_ext_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* attrs[],
 LDAPControl** ServerControls,
 LDAPControl** ClientControls
);

/* ldap_add_s  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_add_sA,ldap_add_sW (CE is W-side)] */
ULONG ldap_add_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* attrs[]
);

/* ldap_bind  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_bindA,ldap_bindW (CE is W-side)] */
ULONG ldap_bind(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR cred,
 ULONG method
);

/* ldap_bind_s  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_bind_sA,ldap_bind_sW (CE is W-side)] */
ULONG ldap_bind_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR cred,
 ULONG method
);

/* ldap_check_filter  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_check_filterA,ldap_check_filterW (CE is W-side)] */
ULONG ldap_check_filter(
 LDAP* ld,
 UNICODE PTCHAR SearchFilter
);

/* ldap_close_extended_op  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_close_extended_op(
 LDAP* ld,
 ULONG MessageNumber
);

/* ldap_compare  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_compareA,ldap_compareW (CE is W-side)] */
ULONG ldap_compare(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR attr,
 UNICODE PTCHAR value
);

/* ldap_compare_s  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_compare_sA,ldap_compare_sW (CE is W-side)] */
ULONG ldap_compare_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR attr,
 UNICODE PTCHAR value
);

/* ldap_connect  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_connect(
 LDAP* ld,
 PLDAP_TIMEVAL* timeout
);

/* ldap_control_free  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_control_freeA,ldap_control_freeW (CE is W-side)] */
ULONG ldap_control_free(
 LDAPControl* Control
);

/* ldap_controls_free  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_controls_freeA,ldap_controls_freeW (CE is W-side)] */
ULONG ldap_controls_free(
 LDAPControl** Controls
);

/* ldap_count_entries  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_count_entries(
 LDAP* ld,
 LDAPMessage* res
);

/* ldap_count_references  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_count_references(
 LDAP* ld,
 LDAPMessage* res
);

/* ldap_count_values  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_count_valuesA,ldap_count_valuesW (CE is W-side)] */
ULONG ldap_count_values(
 UNICODE PTCHAR* vals
);

/* ldap_create_sort_control  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_create_sort_controlA,ldap_create_sort_controlW (CE is W-side)] */
ULONG ldap_create_sort_control(
 LDAP* ExternalHandle,
 LDAPSortKey** SortKeys,
 UCHAR IsCritical,
 LDAPControl** Control
);

/* ldap_delete  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_deleteA,ldap_deleteW (CE is W-side)] */
ULONG ldap_delete(
 LDAP* ld,
 UNICODE PTCHAR dn
);

/* ldap_delete_ext  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_delete_extA,ldap_delete_extW (CE is W-side)] */
ULONG ldap_delete_ext(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 ULONG* MessageNumber
);

/* ldap_delete_ext_s  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_delete_ext_sA,ldap_delete_ext_sW (CE is W-side)] */
ULONG ldap_delete_ext_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls
);

/* ldap_delete_s  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_delete_sA,ldap_delete_sW (CE is W-side)] */
ULONG ldap_delete_s(
 LDAP* ld,
 UNICODE PTCHAR dn
);

/* ldap_dn2ufn  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_dn2ufnA,ldap_dn2ufnW (CE is W-side)] */
UNICODE PTCHAR ldap_dn2ufn(
 UNICODE PTCHAR dn
);

/* ldap_err2string  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_err2stringA,ldap_err2stringW (CE is W-side)] */
UNICODE PTCHAR ldap_err2string(
 ULONG err
);

/* ldap_escape_filter_element  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_escape_filter_elementA,ldap_escape_filter_elementW (CE is W-side)] */
ULONG ldap_escape_filter_element(
 UNICODE PTCHAR sourceFilterElement,
 ULONG sourceLength,
 UNICODE PTCHAR destFilterElement,
 ULONG destLength
);

/* ldap_explode_dn  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_explode_dnA,ldap_explode_dnW (CE is W-side)] */
UNICODE PTCHAR *ldap_explode_dn(
 UNICODE PTCHAR dn,
 ULONG notypes 
);

/* ldap_first_attribute  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_first_attributeA,ldap_first_attributeW (CE is W-side)] */
UNICODE PTCHAR ldap_first_attribute(
 LDAP* ld,
 LDAPMessage* entry,
 BerElement** ptr
);

/* ldap_get_dn  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_get_dnA,ldap_get_dnW (CE is W-side)] */
UNICODE PTCHAR ldap_get_dn(
 LDAP* ld,
 LDAPMessage* entry
);

/* ldap_get_next_page  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_get_next_page(
 LDAP* ExternalHandle,
 LDAPSearch* SearchHandle,
 ULONG PageSize,
 ULONG* MessageNumber
);

/* ldap_get_next_page_s  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_get_next_page_s(
 LDAP* ExternalHandle,
 LDAPSearch* SearchHandle,
 LDAP_TIMEVAL* timeout,
 ULONG PageSize,
 ULONG* TotalCount,
 LDAPMessage** Results
);

/* ldap_get_option  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib; A/W ldap_get_optionW (CE is W-side)] */
ULONG ldap_get_option(
 LDAP* ld,
 int option,
 void* outvalue
);

/* ldap_get_paged_count  [function; shared; CE 4.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_get_paged_count(
 LDAP* ExternalHandle,
 LDAPSearch* SearchBlock,
 ULONG* TotalCount,
 LDAPMessage* Results
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* ldap_memfree  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_memfreeA,ldap_memfreeW (CE is W-side)] */
VOID ldap_memfree(
 UNICODE PTCHAR Block
);

/* ldap_modify  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_modifyA,ldap_modifyW (CE is W-side)] */
ULONG ldap_modify(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* mods[]
);

/* ldap_modify_ext  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_modify_extA,ldap_modify_extW (CE is W-side)] */
ULONG ldap_modify_ext(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* mods[],
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 ULONG* MessageNumber
);

/* ldap_modify_ext_s  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_modify_ext_sA,ldap_modify_ext_sW (CE is W-side)] */
ULONG ldap_modify_ext_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* mods[],
 LDAPControl** ServerControls,
 LDAPControl** ClientControls
);

/* ldap_modify_s  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_modify_sA,ldap_modify_sW (CE is W-side)] */
ULONG ldap_modify_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 LDAPMod* mods[]
);

/* ldap_msgfree  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_msgfree(
 LDAPMessage* res
);

/* ldap_next_attribute  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_next_attributeA,ldap_next_attributeW (CE is W-side)] */
UNICODE PTCHAR ldap_next_attribute(
 LDAP* ld,
 LDAPMessage* entry,
 BerElement* ptr
);

/* ldap_parse_reference  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_parse_referenceA,ldap_parse_referenceW (CE is W-side)] */
ULONG ldap_parse_reference(
 LDAP* Connection,
 LDAPMessage* ResultMessage,
 UNICODE PTCHAR** Referrals
);

/* ldap_parse_sort_control  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_parse_sort_controlA,ldap_parse_sort_controlW (CE is W-side)] */
ULONG ldap_parse_sort_control(
 LDAP* ExternalHandle,
 LDAPControl** Control,
 ULONG* Result,
 UNICODE PTCHAR* Attribute
);

/* ldap_rename_ext  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_rename_extA,ldap_rename_extW (CE is W-side)] */
ULONG ldap_rename_ext(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR NewRDN,
 UNICODE PTCHAR NewParent,
 INT DeleteOldRdn,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 ULONG* MessageNumber
);

/* ldap_rename_ext_s  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_rename_ext_sA,ldap_rename_ext_sW (CE is W-side)] */
ULONG ldap_rename_ext_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR NewRDN,
 UNICODE PTCHAR NewParent,
 INT DeleteOldRdn,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls
);

/* ldap_result  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_result(
 LDAP* ld,
 ULONG msgid,
 ULONG all,
 LDAP_TIMEVAL* timeout,
 LDAPMessage** res
);

/* ldap_result2error  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_result2error(
 LDAP* ld,
 LDAPMessage* res,
 ULONG freeit
);

/* ldap_sasl_bind  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_sasl_bindA,ldap_sasl_bindW (CE is W-side)] */
ULONG ldap_sasl_bind_s(
 LDAP* ExternalHandle,
 const UNICODE PTCHAR DistName,
 const UNICODE PTCHAR AuthMechanism,
 const BERVAL* cred,
 LDAPControlA** ServerCtrls,
 LDAPControlA** ClientCtrls,
 int* MessageNumber
);

/* ldap_sasl_bind_s  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_sasl_bind_sA,ldap_sasl_bind_sW (CE is W-side)] */
ULONG ldap_sasl_bind_s(
 LDAP* ExternalHandle,
 const UNICODE PTCHAR DistName,
 const UNICODE PTCHAR AuthMechanism,
 const BERVAL* cred,
 LDAPControlA** ServerCtrls,
 LDAPControlA** ClientCtrls,
 PBERVAL* ServerData
);

/* ldap_search  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_searchA,ldap_searchW (CE is W-side)] */
ULONG ldap_search(
 LDAP* ld,
 UNICODE PTCHAR base,
 ULONG scope,
 UNICODE PTCHAR filter,
 UNICODE PTCHAR attrs[],
 ULONG attrsonly
);

/* ldap_search_abandon_page  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_search_abandon_page(
 LDAP* ExternalHandle,
 LDAPSearch* SearchBlock
);

/* ldap_search_ext  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_search_extA,ldap_search_extW (CE is W-side)] */
ULONG ldap_search_ext(
 LDAP* ld,
 UNICODE PTCHAR base,
 ULONG scope,
 UNICODE PTCHAR filter,
 UNICODE PTCHAR attrs[],
 ULONG attrsonly,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 ULONG TimeLimit,
 ULONG SizeLimit,
 ULONG* MessageNumber
);

/* ldap_search_init_page  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_search_init_pageA,ldap_search_init_pageW (CE is W-side)] */
PLDAPSearch ldap_search_init_page(
 LDAP* ExternalHandle,
 UNICODE PTCHAR DistinguishedName,
 ULONG ScopeOfSearch,
 UNICODE PTCHAR SearchFilter,
 UNICODE PTCHAR AttributeList[],
 ULONG AttributesOnly,
 LDAPControl** ServerControls,
 LDAPControl** ClientControls,
 ULONG PageTimeLimit,
 ULONG TotalSizeLimit,
 LDAPSortKey** SortKeys
);

/* ldap_search_s  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_search_sA,ldap_search_sW (CE is W-side)] */
ULONG ldap_search_s(
 LDAP* ld,
 UNICODE PTCHAR base,
 ULONG scope,
 UNICODE PTCHAR filter,
 UNICODE PTCHAR attrs[],
 ULONG attrsonly,
 LDAPMessage** res
);

/* ldap_simple_bind  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_simple_bindA,ldap_simple_bindW (CE is W-side)] */
ULONG ldap_simple_bind(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR passwd
);

/* ldap_simple_bind_s  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_simple_bind_sA,ldap_simple_bind_sW (CE is W-side)] */
ULONG ldap_simple_bind_s(
 LDAP* ld,
 UNICODE PTCHAR dn,
 UNICODE PTCHAR passwd
);

/* ldap_sslinit  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_sslinitA,ldap_sslinitW (CE is W-side)] */
LDAP* ldap_sslinit(
 UNICODE PTCHAR HostName,
 ULONG PortNumber,
 int secure
);

/* ldap_ufn2dn  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_ufn2dnA,ldap_ufn2dnW (CE is W-side)] */
ULONG ldap_ufn2dn(
 UNICODE PTCHAR ufn,
 UNICODE PTCHAR* pDn
);

/* ldap_unbind  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_unbind(
 LDAP* ld
);

/* ldap_unbind_s  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib] */
ULONG ldap_unbind_s(
 LDAP *ld
);

/* ldap_value_free  [function; shared; CE 5.0..699; Wldap32.lib, wldap32.lib; A/W ldap_value_freeA,ldap_value_freeW (CE is W-side)] */
ULONG ldap_value_free(
 UNICODE PTCHAR* vals
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef ULONG (_cdecl DEREFERENCECONNECTION)( PLDAP PrimaryConnection, PLDAP ConnectionToDereference );
typedef ULONG (_cdecl QUERYFORCONNECTION)(PLDAPPrimaryConnection,PLDAPReferralFromConnection, PWCHARNewDN,PCHARHostName,ULONGPortNumber,PVOIDSecAuthIdentity,PVOIDCurrentUserToken,PLDAP* ConnectionToUse);
typedef BOOLEAN (_cdecl NOTIFYOFNEWCONNECTION) ( PLDAP PrimaryConnection, PLDAP ReferralFromConnection, PWCHAR NewDN, PCHAR HostName, PLDAP NewConnection, ULONG PortNumber, PVOID SecAuthIdentity, PVOID CurrentUser, ULONG ErrorCodeFromBind );
typedef BOOLEAN (_cdecl VERIFYSERVERCERT) (PLDAPConnection,PCCERT_CONTEXTpServerCert);
typedef ldap LDAP, *PLDAP;
typedef ULONG (_cdecl DEREFERENCECONNECTION)(PLDAPPrimaryConnection,PLDAPConnectionToDereference);
typedef ldapmsg LDAPMessage, *PLDAPMessage;
typedef BOOLEAN (_cdecl NOTIFYOFNEWCONNECTION) (PLDAPPrimaryConnection,PLDAPReferralFromConnection,PWCHARNewDN,PCHARHostName,PLDAPNewConnection,ULONGPortNumber,PVOIDSecAuthIdentity,PVOIDCurrentUser,ULONGErrorCodeFromBind);
typedef BOOLEAN (_cdecl VERIFYSERVERCERT) ( PLDAP Connection, PCCERT_CONTEXT pServerCert );

/* struct */
ULONG ldap_compare_ext_s(LDAP* ld,UNICODE PTCHARdn,UNICODE PTCHARAttr,UNICODE PTCHARValue,struct berval* Data,LDAPControl** ServerControls,LDAPControl** ClientControls);
ULONG ldap_parse_page_control(LDAP*ExternalHandle,LDAPControl** ServerControls,ULONG* TotalCount,struct berva**l Cookie);
ULONG ldap_parse_extended_result( LDAP Connection, LDAPMessage* ResultMessage, UNICODE PTCHAR* ResultOID, struct berval** ResultData, BOOL Freeit );
ULONG ldap_compare_ext(LDAP* ld,UNICODE PTCHARdn,UNICODE PTCHARAttr,UNICODE PTCHARValue,struct berval* Data,LDAPControl** ServerControls,LDAPControl** ClientControls,ULONG* MessageNumber);
typedef struct berval {ULONGbv_len;UNICODE PTCHARbv_val;} LDAP_BERVAL, *PLDAP_BERVAL, BERVAL, *PBERVAL;
typedef struct ldapmod {ULONGmod_op;PWCHARmod_type;union{PWCHAR* modv_strvals;structberval** modv_bvals;}mod_vals;}LDAPMod,*PLDAPMod;
typedef struct ldapsearch LDAPSearch, *PLDAPSearch;
typedef struct l_timeval {LONGtv_sec;LONGtv_usec;} LDAP_TIMEVAL, * PLDAP_TIMEVAL;
struct berval** ldap_get_values_len(LDAP* ExternalHandle,LDAPMessage* Message,UNICODE PTCHARattr);
struct berval** ldap_get_values_len( LDAP* ExternalHandle, LDAPMessage* Message, UNICODE PTCHAR attr );
typedef struct ldapmod { ULONG mod_op; PWCHAR mod_type; union { PWCHAR* modv_strvals; struct berval** modv_bvals; } mod_vals;
ULONG ldap_count_values_len(struct berval** vals);

#endif /* _WINLDAP_ */
