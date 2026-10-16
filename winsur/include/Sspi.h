/* Sspi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 39 constants, 30 declarations, 0 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _SSPI_
#define _SSPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define ACQUIRE_CREDENTIALS_HANDLE_FN ACQUIRE_CREDENTIALS_HANDLE_FN_W
#define APPLY_CONTROL_TOKEN_FN APPLY_CONTROL_TOKEN_FN_W
#define ENUMERATE_SECURITY_PACKAGES_FN ENUMERATE_SECURITY_PACKAGES_FN_W
#define INIT_SECURITY_INTERFACE INIT_SECURITY_INTERFACE_W
#define INITIALIZE_SECURITY_CONTEXT_FN INITIALIZE_SECURITY_CONTEXT_FN_W
#define QUERY_CONTEXT_ATTRIBUTES_FN QUERY_CONTEXT_ATTRIBUTES_FN_W
#define QUERY_CREDENTIALS_ATTRIBUTES_FN QUERY_CREDENTIALS_ATTRIBUTES_FN_W
#define QUERY_SECURITY_PACKAGE_INFO_FN QUERY_SECURITY_PACKAGE_INFO_FN_W
#define SECBUFFER_ATTRMASK 0xf0000000
#define SECBUFFER_DATA 2
#define SECBUFFER_EMPTY 4
#define SECBUFFER_EXTRA 5
#define SECBUFFER_MISSING 4
#define SECBUFFER_PADDING 9
#define SECBUFFER_PKG_PARAMS 3
#define SECBUFFER_READONLY 0x80000000
#define SECBUFFER_STREAM 10
#define SECBUFFER_STREAM_HEADER 1
#define SECBUFFER_STREAM_TRAILER 3
#define SECBUFFER_TOKEN 2
#define SECBUFFER_VERSION 0
#define SECPKG_ATTR_AUTHORITY 6
#define SECPKG_ATTR_CONNECTION_INFO 90
#define SECPKG_ATTR_ISSUER_LIST 80
#define SECPKG_ATTR_ISSUER_LIST_EX 89
#define SECPKG_ATTR_KEY_INFO 5
#define SECPKG_ATTR_LIFESPAN 2
#define SECPKG_ATTR_LOCAL_CERT_CONTEXT 84
#define SECPKG_ATTR_LOCAL_CRED 82
#define SECPKG_ATTR_NAMES 1
#define SECPKG_ATTR_PROTO_INFO 7
#define SECPKG_ATTR_REMOTE_CERT_CONTEXT 83
#define SECPKG_ATTR_REMOTE_CRED 81
#define SECPKG_ATTR_STREAM_SIZES 4
#define SECPKG_CRED_ATTR_NAMES 1
#define SECPKG_CRED_BOTH (SECPKG_CRED_OUTBOUND|SECPKG_CRED_INBOUND)
#define UNISP_NAME UNISP_NAME_W
#define UNISP_NAME_A "Microsoft
#define UNISP_NAME_W L"Microsoft

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* SecBuffer  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _SecBuffer {
 ULONG cbBuffer;
 ULONG BufferType;
 PVOID pvBuffer;
} SecBuffer, *PSecBuffer;

/* SecBufferDesc  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _SecBufferDesc {
 ULONG ulVersion;
 ULONG cBuffers;
 PSecBuffer pBuffers;
} SecBufferDesc, *PSecBufferDesc;

/* SecPkgContext_Authority  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699; A/W SecPkgContext_AuthorityA,SecPkgContext_AuthorityW (CE is W-side)] */
typedef struct _SecPkgContext_Authority {
 SEC_CHAR SEC_FAR* sAuthorityName;
} SecPkgContext_Authority, *PSecPkgContext_Authority;

/* SecPkgContext_DceInfo  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _SecPkgContex_DceInfo {
 ULONG AuthzSvc;
 PVOID SEC_FAR* pPac;
} SecPkgContext_DceInfo, SEC_FAR *PSecPkgContext_DceInfo;

/* SecPkgContext_KeyInfo  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699; A/W SecPkgContext_KeyInfoA,SecPkgContext_KeyInfoW (CE is W-side)] */
typedef struct _SecPkgContext_KeyInfo {
 SEC_CHAR SEC_FAR* sSignatureAlgorithmName;
 SEC_CHAR SEC_FAR* sEncryptAlgorithmName;
 ULONG KeySize;
 ULONG SignatureAlgorithm;
 ULONG EncryptAlgorithm;
} SecPkgContext_KeyInfo, SEC_FAR *PSecPkgContext_KeyInfo;

/* SecPkgContext_Lifespan  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _SecPkgContext_Lifespan {
 TimeStamp tsStart;
 TimeStamp tsExpiry;
} SecPkgContext_Lifespan, SEC_FAR *PSecPkgContext_Lifespan;

/* SecPkgContext_Names  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699; A/W SecPkgContext_NamesA,SecPkgContext_NamesW (CE is W-side)] */
typedef struct _SecPkgContext_Names {
 SEC_CHAR SEC_FAR* sUserName;
} SecPkgContext_Names, SEC_FAR *pSecPkgContext_Names;

/* SecPkgContext_Sizes  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _SecPkgContext_Sizes {
 ULONG cbMaxToken;
 ULONG cbMaxSignature;
 ULONG cbBlockSize;
 ULONG cbSecurityTrailer;
} SecPkgContext_Sizes, SEC_FAR *PSecPkgContext_Sizes;

/* SecPkgContext_StreamSizes  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct _SecPkgContext_StreamSizes {
 unsigned long cbHeader;
 unsigned long cbTrailer;
 unsigned long cbMaximumMessage;
 unsigned long cBuffers;
 unsigned long cbBlockSize;
}SecPkgContext_StreamSizes, *PSecPkgContext_StreamSizes;

/* SecPkgCredentials_Names  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699; A/W SecPkgCredentials_NamesA,SecPkgCredentials_NamesW (CE is W-side)] */
typedef struct _SecPkgCredentials_Names {
 SEC_CHAR SEC_FAR* sUserName;
} SecPkgCredentials_Names, SEC_FAR *PSecPkgCredentials_Names;

/* SecPkgInfo  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699; A/W SecPkgInfoA,SecPkgInfoW (CE is W-side)] */
typedef struct _SecPkgInfo {
 ULONG fCapabilities;
 USHORT wVersion;
 USHORT wRPCID;
 ULONG cbMaxToken;
 SEC_CHAR SEC_FAR* Name;
 SEC_CHAR SEC_FAR* Comment;
} SecPkgInfo, SEC_FAR *PSecPkgInfo;

/* SecurityFunctionTable  [struct, typedef; shared; CE 2.11..2.12, 3.0..399, 5.0..699; A/W SecurityFunctionTableA,SecurityFunctionTableW (CE is W-side)] */
typedef struct _SECURITY_FUNCTION_TABLE_W {
 unsigned long dwVersion;
 ENUMERATE_SECURITY_PACKAGES_FN_W EnumerateSecurityPackagesW;
 QUERY_CREDENTIALS_ATTRIBUTES_FN_W QueryCredentialsAttributesW;
 ACQUIRE_CREDENTIALS_HANDLE_FN_W AcquireCredentialsHandleW;
 FREE_CREDENTIALS_HANDLE_FN FreeCredentialsHandle;
 void SEC_FAR *Reserved2;
 INITIALIZE_SECURITY_CONTEXT_FN_W InitializeSecurityContextW;
 ACCEPT_SECURITY_CONTEXT_FN AcceptSecurityContext;
 COMPLETE_AUTH_TOKEN_FN CompleteAuthToken;
 DELETE_SECURITY_CONTEXT_FN DeleteSecurityContext;
 APPLY_CONTROL_TOKEN_FN ApplyControlToken;
 QUERY_CONTEXT_ATTRIBUTES_FN_W QueryContextAttributesW;
 IMPERSONATE_SECURITY_CONTEXT_FN ImpersonateSecurityContext;
 REVERT_SECURITY_CONTEXT_FN RevertSecurityContext;
 MAKE_SIGNATURE_FN MakeSignature;
 VERIFY_SIGNATURE_FN VerifySignature;
 FREE_CONTEXT_BUFFER_FN FreeContextBuffer;
 QUERY_SECURITY_PACKAGE_INFO_FN_W QuerySecurityPackageInfoW;
 void SEC_FAR * Reserved3;
 void SEC_FAR * Reserved4;
 void SEC_FAR * Reserved5;
 void SEC_FAR * Reserved6;
 void SEC_FAR * Reserved7;
 void SEC_FAR * Reserved8;
 QUERY_SECURITY_CONTEXT_TOKEN_FN QuerySecurityContextToken;
 ENCRYPT_MESSAGE_FN EncryptMessage;
 DECRYPT_MESSAGE_FN DecryptMessage;
} SecurityFunctionTableW, SEC_FAR * PSecurityFunctionTableW;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* AcceptSecurityContext  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY AcceptSecurityContext( 
 PCredHandle phCredential, 
 PCtxtHandle phContext, 
 PSecBufferDesc pInput, 
 ULONG fContextReq, 
 ULONG TargetDataRep, 
 PCtxtHandle phNewContext, 
 PSecBufferDesc pOutput, 
 ULONG SEC_FAR* pfContextAttr, 
 PTimeStamp ptsExpiry
);

/* AcquireCredentialsHandle  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib; A/W AcquireCredentialsHandleA,AcquireCredentialsHandleW (CE is W-side)] */
SECURITY_STATUS SEC_ENTRY AcquireCredentialsHandle( 
 SEC_WCHAR SEC_FAR* pszPrincipal, 
 SEC_WCHAR SEC_FAR* pszPackage,
 ULONG fCredentialUse, 
 void SEC_FAR* pvLogonId, 
 void SEC_FAR* pAuthData,
 SEC_GET_KEY_FN pGetKeyFn, 
 void SEC_FAR* pvGetKeyArgument, 
 PCredHandle phCredential,
 PTimeStamp ptsExpiry 
);

/* ApplyControlToken  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY ApplyControlToken( 
 PCtxtHandle phContext,
 PSecBufferDesc pInput 
);

/* CompleteAuthToken  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY CompleteAuthToken( 
 PCtxtHandle phContext,
 PSecBufferDesc pToken 
);

/* DeleteSecurityContext  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY DeleteSecurityContext( 
 PCtxtHandle phContext 
);

/* EnumerateSecurityPackages  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib; A/W EnumerateSecurityPackagesA,EnumerateSecurityPackagesW (CE is W-side)] */
SECURITY_STATUS SEC_ENTRY EnumerateSecurityPackages( 
 ULONG SEC_FAR* pcPackages,
 PSecPkgInfo SEC_FAR* ppPackageInfo 
);

/* FreeContextBuffer  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY FreeContextBuffer( 
 void SEC_FAR* pvContextBuffer 
);

/* FreeCredentialsHandle  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY FreeCredentialsHandle( 
 PCredHandle phCredential 
);

/* InitializeSecurityContext  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib; A/W InitializeSecurityContextA,InitializeSecurityContextW (CE is W-side)] */
SECURITY_STATUS SEC_ENTRY InitializeSecurityContext( 
 PCredHandle phCredential,
 PCtxtHandle phContext, 
 SEC_WCHAR SEC_FAR* pszTargetName, 
 ULONG fContextReq,
 ULONG Reserved1, 
 ULONG TargetDataRep, 
 PSecBufferDesc pInput, 
 ULONG Reserved2, 
 PCtxtHandle phNewContext, 
 PSecBufferDesc pOutput,
 ULONG SEC_FAR* pfContextAttr, 
 PTimeStamp ptsExpiry 
);

/* InitSecurityInterface  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; ntlmssp.lib, Schannel.lib, schannel.lib, Secur32.lib, secur32.lib; A/W InitSecurityInterfaceA,InitSecurityInterfaceW (CE is W-side)] */
PSecurityFunctionTable SEC_ENTRY InitSecurityInterface();

/* MakeSignature  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY MakeSignature( 
 PCtxtHandle phContext, 
 ULONG fQOP, 
 PSecBufferDesc pMessage, 
 ULONG MessageSeqNo 
);

/* QueryCredentialsAttributes  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, Secur32.lib, secur32.lib; A/W QueryCredentialsAttributesA,QueryCredentialsAttributesW (CE is W-side)] */
SECURITY_STATUS SEC_ENTRY QueryCredentialsAttributes( 
 PCredHandle phCredential, 
 ULONG ulAttribute, 
 void SEC_FAR* pBuffer 
);

/* QuerySecurityPackageInfo  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib; A/W QuerySecurityPackageInfoA,QuerySecurityPackageInfoW (CE is W-side)] */
SECURITY_STATUS SEC_ENTRY QuerySecurityPackageInfo(
 SEC_WCHAR SEC_FAR* pszPackageName, 
 PSecPkgInfo SEC_FAR* ppPackageInfo 
);

/* VerifySignature  [function; shared; CE 2.11..2.12, 3.0..399, 5.0..699; Schannel.lib, schannel.lib, Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY VerifySignature( 
 PCtxtHandle phContext,
 PSecBufferDesc pMessage, 
 ULONG MessageSeqNo, 
 ULONG SEC_FAR* pfQOP 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DecryptMessage  [function; shared; CE 5.0..699; Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY DecryptMessage(
 PCtxtHandle phContext,
 PSecBufferDesc pMessage,
 ULONG MessageSeqNo,
 PULONG pfQOP
);

/* EncryptMessage  [function; shared; CE 5.0..699; Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY EncryptMessage(
 PCtxtHandle phContext,
 ULONG fQOP,
 PSecBufferDesc pMessage,
 ULONG MessageSeqNo
);

/* SealMessage  [function; ce-only; CE 5.0..699; Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY SealMessage( 
 PCtxtHandle phContext,
 ULONG fQOP 
 PSecBufferDesc pMessage, 
 ULONG MessageSeqNo, 
);

/* UnsealMessage  [function; ce-only; CE 5.0..699; Secur32.lib, secur32.lib] */
SECURITY_STATUS SEC_ENTRY UnsealMessage( 
 PCtxtHandle phContext,
 PSecBufferDesc pMessage, 
 ULONG MessageSeqNo,
 ULONG* pfQOP 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _SecPkgContext_Authority {SEC_CHAR SEC_FAR* sAuthorityName;} SecPkgContext_Authority, *PSecPkgContext_Authority;
typedef struct _SecPkgContext_KeyInfo {SEC_CHARSEC_FAR* sSignatureAlgorithmName;SEC_CHAR SEC_FAR* sEncryptAlgorithmName;ULONG KeySize;ULONG SignatureAlgorithm;ULONG EncryptAlgorithm;} SecPkgContext_KeyInfo, SEC_FAR *PSecPkgContext_KeyInfo;
typedef struct _SecPkgCredentials_Names {SEC_CHAR SEC_FAR* sUserName;} SecPkgCredentials_Names, SEC_FAR *PSecPkgCredentials_Names;
typedef struct _SecPkgInfo {ULONG fCapabilities;USHORT wVersion;USHORT wRPCID;ULONG cbMaxToken;SEC_CHAR SEC_FAR* Name;SEC_CHAR SEC_FAR* Comment;} SecPkgInfo, SEC_FAR *PSecPkgInfo;
typedef struct _SECURITY_FUNCTION_TABLE_W { unsigned long dwVersion; ENUMERATE_SECURITY_PACKAGES_FN_W EnumerateSecurityPackagesW; QUERY_CREDENTIALS_ATTRIBUTES_FN_W QueryCredentialsAttributesW; ACQUIRE_CREDENTIALS_HANDLE_FN_W AcquireCredentialsHandleW; FREE_CREDENTIALS_HANDLE_FN FreeCredentialsHandle; void SEC_FAR *Reserved2; INITIALIZE_SECURITY_CONTEXT_FN_W InitializeSecurityContextW; ACCEPT_SECURITY_CONTEXT_FN AcceptSecurityContext; COMPLETE_AUTH_TOKEN_FN CompleteAuthToken; DELETE_SECURITY_CONTEXT_FN DeleteSecurityContext; APPLY_CONTROL_TOKEN_FN ApplyControlToken; QUERY_CONTEXT_ATTRIBUTES_FN_W QueryContextAttributesW; IMPERSONATE_SECURITY_CONTEXT_FN ImpersonateSecurityContext; REVERT_SECURITY_CONTEXT_FN RevertSecurityContext; MAKE_SIGNATURE_FN MakeSignature; VERIFY_SIGNATURE_FN VerifySignature; FREE_CONTEXT_BUFFER_FN FreeContextBuffer; QUERY_SECURITY_PACKAGE_INFO_FN_W QuerySecurityPackageInfoW; void SEC_FAR * Reserved3; void SEC_FAR * Reserved4; void SEC_FAR * Reserved5; void SEC_FAR * Reserved6; void SEC_FAR * Reserved7; void SEC_FAR * Reserved8; QUERY_SECURITY_CONTEXT_TOKEN_FN QuerySecurityContextToken; ENCRYPT_MESSAGE_FN EncryptMessage; DECRYPT_MESSAGE_FN DecryptMessage;} SecurityFunctionTableW, SEC_FAR * PSecurityFunctionTableW;
typedef struct _SecPkgContext_Names {SEC_CHARSEC_FAR* sUserName;} SecPkgContext_Names, SEC_FAR *pSecPkgContext_Names;

#endif /* _SSPI_ */
