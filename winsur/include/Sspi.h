/* Sspi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 66 constants, 12 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
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
#define SECBUFFER_APPLICATION_PROTOCOLS 18
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
#define SECPKG_CALLFLAGS_APPCONTAINER 0x00000001
#define SECPKG_CALLFLAGS_AUTHCAPABLE 0x00000002
#define SECPKG_CALLFLAGS_FORCE_SUPPLIED 0x00000004
#define SECPKG_CRED_ATTR_NAMES 1
#define SECPKG_CRED_BOTH (SECPKG_CRED_OUTBOUND|SECPKG_CRED_INBOUND)
#define SECPKG_FLAG_ACCEPT_WIN32_NAME 0x200
#define SECPKG_FLAG_APPCONTAINER_CHECKS 0x00800000
#define SECPKG_FLAG_APPCONTAINER_PASSTHROUGH 0x00400000
#define SECPKG_FLAG_ASCII_BUFFERS 0x4000
#define SECPKG_FLAG_CLIENT_ONLY 0x40
#define SECPKG_FLAG_CONNECTION 0x10
#define SECPKG_FLAG_DATAGRAM 0x8
#define SECPKG_FLAG_DELEGATION 0x20000
#define SECPKG_FLAG_EXTENDED_ERROR 0x80
#define SECPKG_FLAG_FRAGMENT 0x8000
#define SECPKG_FLAG_GSS_COMPATIBLE 0x1000
#define SECPKG_FLAG_IMPERSONATION 0x100
#define SECPKG_FLAG_INTEGRITY 0x1
#define SECPKG_FLAG_LOGON 0x2000
#define SECPKG_FLAG_MULTI_REQUIRED 0x20
#define SECPKG_FLAG_MUTUAL_AUTH 0x10000
#define SECPKG_FLAG_NEGO_EXTENDER 0x00100000
#define SECPKG_FLAG_NEGOTIABLE2 0x00200000
#define SECPKG_FLAG_PRIVACY 0x2
#define SECPKG_FLAG_READONLY_WITH_CHECKSUM 0x40000
#define SECPKG_FLAG_RESTRICTED_TOKENS 0x80000
#define SECPKG_FLAG_STREAM 0x400
#define SECPKG_FLAG_TOKEN_ONLY 0x4
#define UNISP_NAME UNISP_NAME_W

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SecBuffer  [struct, typedef; shared] */
typedef struct _SecBuffer {
 ULONG cbBuffer;
 ULONG BufferType;
 PVOID pvBuffer;
} SecBuffer, *PSecBuffer;

/* SecBufferDesc  [struct, typedef; shared] */
typedef struct _SecBufferDesc {
 ULONG ulVersion;
 ULONG cBuffers;
 PSecBuffer pBuffers;
} SecBufferDesc, *PSecBufferDesc;

/* SecPkgContext_StreamSizes  [struct, typedef; shared] */
typedef struct _SecPkgContext_StreamSizes {
 unsigned long cbHeader;
 unsigned long cbTrailer;
 unsigned long cbMaximumMessage;
 unsigned long cBuffers;
 unsigned long cbBlockSize;
}SecPkgContext_StreamSizes, *PSecPkgContext_StreamSizes;

#endif /* _SSPI_ */
