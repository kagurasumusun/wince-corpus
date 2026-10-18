/* Security.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 35 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 16 extra decls
 */
#ifndef _SECURITY_
#define _SECURITY_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SEC_E_CERT_EXPIRED (-2146893016)
#define SEC_E_INCOMPLETE_MESSAGE 0x80090318L
#define SEC_E_INSUFFICIENT_MEMORY 0x80090300L
#define SEC_E_INTERNAL_ERROR 0x80090304L
#define SEC_E_INVALID_HANDLE 0x80100003L
#define SEC_E_INVALID_TOKEN 0x80090308L
#define SEC_E_LOGON_DENIED 0x8009030CL
#define SEC_E_NO_AUTHENTICATING_AUTHORITY 0x80090311L
#define SEC_E_NO_CREDENTIALS 0x8009030EL
#define SEC_E_NOT_OWNER (-2146893050)
#define SEC_E_OK 0x00000000L
#define SEC_E_QOP_NOT_SUPPORTED (-2146893046)
#define SEC_E_SECPKG_NOT_FOUND 0x80090305L
#define SEC_E_TARGET_UNKNOWN (-2146893053)
#define SEC_E_UNKNOWN_CREDENTIALS (-2146893043)
#define SEC_E_UNSUPPORTED_FUNCTION 0x80090302L
#define SEC_E_UNTRUSTED_ROOT (-2146893019)
#define SEC_E_WRONG_PRINCIPAL (-2146893022)
#define SEC_I_COMPLETE_AND_CONTINUE 0x00090314L
#define SEC_I_COMPLETE_NEEDED 0x00090313L
#define SEC_I_CONTINUE_NEEDED 0x00090312L
#define SEC_I_INCOMPLETE_CREDENTIALS 590624
#define SEC_I_RENEGOTIATE 590625
#define SECPKG_ATTR_C_ACCESS_TOKEN 0x80000012
#define SECPKG_ATTR_C_FULL_ACCESS_TOKEN 0x80000082
#define SECPKG_ATTR_CERT_TRUST_STATUS 0x80000084
#define SECPKG_ATTR_CREDS 0x80000080
#define SECPKG_ATTR_CREDS_2 0x80000086
#define SECPKG_ATTR_NEGOTIATION_PACKAGE 0x80000081
#define SECPKG_ATTR_PACKAGE_INFO 10
#define SECPKG_ATTR_SERVER_AUTH_FLAGS 0x80000083
#define SECPKG_ATTR_SIZES 0x0
#define SECPKG_ATTR_SUBJECT_SECURITY_ATTRIBUTES 124
#define SECPKG_CRED_INBOUND 0x1
#define SECPKG_CRED_OUTBOUND 0x2

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
PSecurityFunctionTable InitSecurityInterface(VOID);

#endif /* _SECURITY_ */
