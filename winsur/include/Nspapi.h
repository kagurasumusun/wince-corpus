/* Nspapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 21 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _NSPAPI_
#define _NSPAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define NS_ALL 0
#define NS_DNS 12
#define NS_MS 30
#define NS_NBP 20
#define NS_NDS 2
#define NS_NETBT 13
#define NS_NIS 41
#define NS_NISPLUS 42
#define NS_NTDS 32
#define NS_PEER_BROWSE 3
#define NS_SAP 1
#define NS_STDA 31
#define NS_TCPIP_HOSTS 11
#define NS_TCPIP_LOCAL 10
#define NS_WINS 14
#define NS_WRQ 50
#define NS_X500 40
#define SERVICE_DEREGISTER 2
#define SERVICE_FLAG_HARD 0x00000002
#define SERVICE_FLUSH 3
#define SERVICE_REGISTER 1

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _BLOB {ULONGcbSize;BYTE*pBlobData;} BLOB, LPBLOB;
typedef struct _CRYPTOAPI_BLOB {
  DWORD cbData;
  BYTE* pbData;
} CRYPT_INTEGER_BLOB, *PCRYPT_INTEGER_BLOB,
CRYPT_UINT_BLOB, *PCRYPT_UINT_BLOB,
CRYPT_OBJID_BLOB, *PCRYPT_OBJID_BLOB,
CERT_NAME_BLOB, *PCERT_NAME_BLOB,
CERT_RDN_VALUE_BLOB, *PCERT_RDN_VALUE_BLOB,
CERT_BLOB, *PCERT_BLOB,
CRL_BLOB, *PCRL_BLOB,
DATA_BLOB, *PDATA_BLOB,
CRYPT_DATA_BLOB, *PCRYPT_DATA_BLOB,
CRYPT_HASH_BLOB, *PCRYPT_HASH_BLOB,
CRYPT_DIGEST_BLOB, *PCRYPT_DIGEST_BLOB,
CRYPT_DER_BLOB,*PCRYPT_DER_BLOB,
CRYPT_ATTR_BLOB, *PCRYPT_ATTR_BLOB;

#endif /* _NSPAPI_ */
