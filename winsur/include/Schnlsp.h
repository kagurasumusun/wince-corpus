/* Schnlsp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 40 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SCHNLSP_
#define _SCHNLSP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SCH_CRED_AUTO_CRED_VALIDATION 0x00000020
#define SCH_CRED_CACHE_ONLY_URL_RETRIEVAL_ON_CREATE 0x00020000
#define SCH_CRED_DISABLE_RECONNECTS 0x00000080
#define SCH_CRED_FORMAT_CERT_HASH 0x00000001
#define SCH_CRED_FORMAT_CERT_HASH_STORE 0x00000002
#define SCH_CRED_IGNORE_NO_REVOCATION_CHECK 0x00000800
#define SCH_CRED_IGNORE_REVOCATION_OFFLINE 0x00001000
#define SCH_CRED_MANUAL_CRED_VALIDATION 0x00000008
#define SCH_CRED_NO_DEFAULT_CREDS 0x00000010
#define SCH_CRED_NO_SERVERNAME_CHECK 0x00000004
#define SCH_CRED_NO_SYSTEM_MAPPER 0x00000002
#define SCH_CRED_REVOCATION_CHECK_CHAIN 0x00000200
#define SCH_CRED_REVOCATION_CHECK_CHAIN_EXCLUDE_ROOT 0x00000400
#define SCH_CRED_REVOCATION_CHECK_END_CERT 0x00000100
#define SCH_CRED_USE_DEFAULT_CREDS 0x00000040
#define SCH_SEND_AUX_RECORD 0x00200000
#define SCH_SEND_ROOT_CERT 0x00040000
#define SCH_USE_PRESHAREDKEY_ONLY 0x00800000
#define SCH_USE_STRONG_CRYPTO 0x00400000
#define SECPKG_ATTR_CIPHER_STRENGTHS 87
#define SECPKG_ATTR_SUPPORTED_ALGS 86
#define SECPKG_ATTR_SUPPORTED_PROTOCOLS 88
#define SP_PROT_DTLS1_2_CLIENT 0x00080000
#define SP_PROT_DTLS1_2_SERVER 0x00040000
#define SP_PROT_DTLS_CLIENT 0x00020000
#define SP_PROT_DTLS_SERVER 0x00010000
#define SP_PROT_PCT1_CLIENT 0x00000002
#define SP_PROT_PCT1_SERVER 0x00000001
#define SP_PROT_SSL2_CLIENT 0x00000008
#define SP_PROT_SSL2_SERVER 0x00000004
#define SP_PROT_SSL3_CLIENT 0x00000020
#define SP_PROT_SSL3_SERVER 0x00000010
#define SP_PROT_TLS1_1_CLIENT 0x00000200
#define SP_PROT_TLS1_1_SERVER 0x00000100
#define SP_PROT_TLS1_2_CLIENT 0x00000800
#define SP_PROT_TLS1_2_SERVER 0x00000400
#define SP_PROT_TLS1_3_CLIENT 0x00002000
#define SP_PROT_TLS1_3_SERVER 0x00001000
#define SP_PROT_TLS1_CLIENT 0x00000080
#define SP_PROT_TLS1_SERVER 0x00000040

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SecPkgContext_MasterKeyInfo  [struct; ce-only] */
#ifndef __WINCE_DEFINED__SECPKGCONTEXT_MASTERKEYINFO
#define __WINCE_DEFINED__SECPKGCONTEXT_MASTERKEYINFO
#ifndef __WINCE_DEFINED_SECPKGCONTEXT_MASTERKEYINFO
#define __WINCE_DEFINED_SECPKGCONTEXT_MASTERKEYINFO
typedef struct _SecPkgContext_MasterKeyInfo {
 DWORD dwVersion;
 DWORD cbMasterKey;
 BYTE rgbMasterKey[512];
 DWORD cbClientRandom;
 BYTE rgbClientRandom[512];
 DWORD cbServerRandom;
 BYTE rgbServerRandom[512];
}SecPkgContext_MasterKeyInfo, *PSecPkgContext_MasterKeyInfo;
#endif /* __WINCE_DEFINED_SECPKGCONTEXT_MASTERKEYINFO */
#endif /* __WINCE_DEFINED__SECPKGCONTEXT_MASTERKEYINFO */

/* SecPkgCred_CipherStrengths  [struct; ce-only] */
#ifndef __WINCE_DEFINED__SECPKGCRED_CIPHERSTRENGTHS
#define __WINCE_DEFINED__SECPKGCRED_CIPHERSTRENGTHS
#ifndef __WINCE_DEFINED_SECPKGCRED_CIPHERSTRENGTHS
#define __WINCE_DEFINED_SECPKGCRED_CIPHERSTRENGTHS
typedef struct _SecPkgCred_CipherStrengths {
 DWORD dwMinimumCipherStrength;
 DWORD dwMaximumCipherStrength;
} SecPkgCred_CipherStrengths, *PSecPkgCred_CipherStrengths;
#endif /* __WINCE_DEFINED_SECPKGCRED_CIPHERSTRENGTHS */
#endif /* __WINCE_DEFINED__SECPKGCRED_CIPHERSTRENGTHS */

/* SecPkgCred_SupportedProtocols  [struct; ce-only] */
#ifndef __WINCE_DEFINED__SECPKGCRED_SUPPORTEDPROTOCOLS
#define __WINCE_DEFINED__SECPKGCRED_SUPPORTEDPROTOCOLS
#ifndef __WINCE_DEFINED_SECPKGCRED_SUPPORTEDPROTOCOLS
#define __WINCE_DEFINED_SECPKGCRED_SUPPORTEDPROTOCOLS
typedef struct _SecPkgCred_SupportedProtocols {
 DWORD grbitProtocol;
} SecPkgCred_SupportedProtocols, *PSecPkgCred_SupportedProtocols;
#endif /* __WINCE_DEFINED_SECPKGCRED_SUPPORTEDPROTOCOLS */
#endif /* __WINCE_DEFINED__SECPKGCRED_SUPPORTEDPROTOCOLS */

#endif /* _SCHNLSP_ */
