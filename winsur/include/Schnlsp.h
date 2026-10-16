/* Schnlsp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _SCHNLSP_
#define _SCHNLSP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SECPKG_ATTR_CIPHER_STRENGTHS 87
#define SECPKG_ATTR_SUPPORTED_ALGS 86
#define SECPKG_ATTR_SUPPORTED_PROTOCOLS 88

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* SCHANNEL_CRED  [struct; shared; CE 5.0..699] */
typedef struct _SCHANNEL_CRED { 
 DWORD dwVersion; 
 DWORD cCreds; 
 PCCERT_CONTEXT* paCred; 
 HCERTSTORE hRootStore; 
 DWORD cMappers; 
 struct _HMAPPER** aphMappers; 
 DWORD cSupportedAlgs; 
 ALG_ID* palgSupportedAlgs; 
 DWORD grbitEnabledProtocols; 
 DWORD dwMinimumCipherStrength; 
 DWORD dwMaximumCipherStrength; 
 DWORD dwSessionLifespan; 
 DWORD dwFlags; 
 DWORD reserved; 
} SCHANNEL_CRED, *PSCHANNEL_CRED;

/* SecPkgContext_ConnectionInfo  [struct; shared; CE 5.0..699] */
typedef struct _SecPkgContext_ConnectionInfo { 
 DWORD dwProtocol; 
 ALG_ID aiCipher; 
 DWORD dwCipherStrength; 
 ALG_ID aiHash; 
 DWORD dwHashStrength; 
 ALG_ID aiExch; 
 DWORD dwExchStrength; 
} SecPkgContext_ConnectionInfo, *PSecPkgContext_ConnectionInfo;

/* SecPkgContext_IssuerListInfoEx  [struct; shared; CE 5.0..699] */
typedef struct _SecPkgContext_IssuerListInfoEx { 
 PCERT_NAME_BLOB aIssuers; 
 DWORD cIssuers; 
} SecPkgContext_IssuerListInfoEx, *PSecPkgContext_IssuerListInfoEx;

/* SecPkgContext_ProtoInfo  [struct; shared; CE 5.0..699; A/W SecPkgContext_ProtoInfoA,SecPkgContext_ProtoInfoW (CE is W-side)] */
typedef struct _SecPkgContext_ProtoInfo { 
 SEC_WCHAR SEC_FAR* sProtocolName; 
 unsigned long majorVersion; 
 unsigned long minorVersion; 
} SecPkgContext_ProtoInfo, *PSecPkgContext_ProtoInfo;

/* SecPkgCred_CipherStrengths  [struct; ce-only; CE 5.0..699] */
typedef struct _SecPkgCred_CipherStrengths { 
 DWORD dwMinimumCipherStrength; 
 DWORD dwMaximumCipherStrength; 
} SecPkgCred_CipherStrengths, *PSecPkgCred_CipherStrengths;

/* SecPkgCred_SupportedAlgs  [struct; ce-only; CE 5.0..699] */
typedef struct _SecPkgCred_SupportedAlgs { 
 DWORD cSupportedAlgs; 
 ALG_ID* palgSupportedAlgs; 
} SecPkgCred_SupportedAlgs, *PSecPkgCred_SupportedAlgs;

/* SecPkgCred_SupportedProtocols  [struct; ce-only; CE 5.0..699] */
typedef struct _SecPkgCred_SupportedProtocols { 
 DWORD grbitProtocol; 
} SecPkgCred_SupportedProtocols, *PSecPkgCred_SupportedProtocols;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* SecPkgContext_MasterKeyInfo  [struct; ce-only; CE 6.0..699] */
typedef struct _SecPkgContext_MasterKeyInfo {
 DWORD dwVersion;
 DWORD cbMasterKey;
 BYTE rgbMasterKey[512];
 DWORD cbClientRandom;
 BYTE rgbClientRandom[512];
 DWORD cbServerRandom;
 BYTE rgbServerRandom[512];
}SecPkgContext_MasterKeyInfo, *PSecPkgContext_MasterKeyInfo;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _SecPkgContext_MasterKeyInfo {
  DWORD dwVersion;
  DWORD cbMasterKey;
  BYTE rgbMasterKey[512];
  DWORD cbClientRandom;
  BYTE rgbClientRandom[512];
  DWORD cbServerRandom;
  BYTE rgbServerRandom[512];
}SecPkgContext_MasterKeyInfo, *PSecPkgContext_MasterKeyInfo;
typedef struct _SecPkgContext_ProtoInfo { SEC_WCHAR SEC_FAR*sProtocolName;unsigned longmajorVersion;unsigned longminorVersion;} SecPkgContext_ProtoInfo, *PSecPkgContext_ProtoInfo;
typedef struct _SecPkgCred_CipherStrengths { DWORDdwMinimumCipherStrength;DWORDdwMaximumCipherStrength;} SecPkgCred_CipherStrengths, *PSecPkgCred_CipherStrengths;
typedef struct _SecPkgCred_SupportedAlgs { DWORDcSupportedAlgs;ALG_ID*palgSupportedAlgs;} SecPkgCred_SupportedAlgs, *PSecPkgCred_SupportedAlgs;
typedef struct _SecPkgCred_SupportedProtocols { DWORDgrbitProtocol;} SecPkgCred_SupportedProtocols, *PSecPkgCred_SupportedProtocols;

#endif /* _SCHNLSP_ */
