/* p2p.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 20 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _P2P_
#define _P2P_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* PEER_ADDRESS  [struct; shared; CE 5.0..599; p2p.lib] */
typedef struct peer_address_tag { 
 DWORD dwSize; 
 SOCKADDR_IN6 sin6; 
} PEER_ADDRESS, 
*PPEER_ADDRESS;

/* PEER_CONNECTION_FLAGS_TAG  [enum; ce-only; CE 5.0..599; p2p.lib] */
typedef enum peer_connection_flags_tag 
{ 
 PEER_CONNECTION_NEIGHBOR, 
 PEER_CONNECTION_DIRECT 
} PEER_CONNECTION_FLAGS;

/* PEER_DATA  [struct; shared; CE 5.0..599; p2p.lib] */
typedef struct peer_data_tag { 
 ULONG cbData; 
 PBYTE pbData; 
} PEER_DATA, 
*PPEER_DATA;

/* PEER_NAME_PAIR_TAG  [struct; ce-only; CE 5.0..599; p2p.lib] */
typedef struct peer_name_pair_tag { 
 DWORD dwSize; 
 PWSTR pwzPeerName; 
 PWSTR pwzFriendlyName; 
} PEER_NAME_PAIR, *PPEER_NAME_PAIR;

/* PEER_RECORD_CHANGE_TYPE_TAG  [enum; ce-only; CE 5.0..599; p2p.lib] */
typedef enum peer_record_change_type_tag 
{ 
 PEER_RECORD_ADDED, 
 PEER_RECORD_UPDATED, 
 PEER_RECORD_DELETED, 
 PEER_RECORD_EXPIRED 
} PEER_RECORD_CHANGE_TYPE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* PeerCreatePeerName  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerCreatePeerName( 
 PCWSTR pwzIdentity, 
 PCWSTR pwzClassifier, 
 PWSTR* ppwzPeerName 
);

/* PeerEndEnumeration  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerEndEnumeration( 
 HPEERENUM hPeerEnum 
);

/* PeerEnumGroups  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerEnumGroups( 
 PCWSTR pwzIdentity, 
 HPEERENUM* phPeerEnum 
);

/* PeerEnumIdentities  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerEnumIdentities( 
 HPEERENUM* phPeerEnum 
);

/* PeerFreeData  [function; shared; CE 5.0..599; p2p.lib] */
VOID WINAPI PeerFreeData( 
 PVOID pvData 
);

/* PeerGetItemCount  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerGetItemCount( 
 HPEERENUM hPeerEnum, 
 PULONG pCount 
);

/* PeerGetNextItem  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerGetNextItem( 
 HPEERENUM hPeerEnum, 
 PULONG pCount, 
 PVOID* ppvItems 
);

/* PeerIdentityCreate  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentityCreate( 
 PCWSTR pwzClassifier, 
 PCWSTR pwzFriendlyName, 
 HCRYPTPROV hCryptProv, 
 PWSTR* ppwzIdentity 
);

/* PeerIdentityDelete  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentityDelete( 
 PCWSTR pwzIdentity 
);

/* PeerIdentityExport  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentityExport( 
 PCWSTR pwzIdentity, 
 PCWSTR pwzPassword, 
 PCWSTR* ppwzExportXML 
);

/* PeerIdentityGetCryptKey  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentityGetCryptKey( 
 PCWSTR pwzIdentity, 
 HCRYPTPROV* phCryptProv 
);

/* PeerIdentityGetFriendlyName  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentityGetFriendlyName( 
 PCWSTR pwzIdentity, 
 PWSTR* ppwzFriendlyName 
);

/* PeerIdentityGetXML  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentityGetXML( 
 PCWSTR pwzIdentity, 
 PWSTR* ppwzIdentityXML 
);

/* PeerIdentityImport  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentityImport( 
 PCWSTR* ppwzImportXML, 
 PCWSTR pwzPassword, 
 PCWSTR* ppwzIdentity 
);

/* PeerIdentitySetFriendlyName  [function; shared; CE 5.0..599; p2p.lib] */
HRESULT WINAPI PeerIdentitySetFriendlyName( 
 PCWSTR pwzIdentity, 
 PCWSTR pwzFriendlyName 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum peer_connection_flags_tag { PEER_CONNECTION_NEIGHBOR, PEER_CONNECTION_DIRECT } PEER_CONNECTION_FLAGS;
typedef enum peer_record_change_type_tag { PEER_RECORD_ADDED, PEER_RECORD_UPDATED, PEER_RECORD_DELETED, PEER_RECORD_EXPIRED } PEER_RECORD_CHANGE_TYPE;

/* struct */
typedef struct peer_address_tag { DWORD dwSize; SOCKADDR_IN6 sin6;} PEER_ADDRESS, *PPEER_ADDRESS;
typedef struct peer_data_tag { ULONG cbData; PBYTE pbData;} PEER_DATA,*PPEER_DATA;
typedef struct peer_name_pair_tag { DWORD dwSize; PWSTR pwzPeerName; PWSTR pwzFriendlyName;} PEER_NAME_PAIR, *PPEER_NAME_PAIR;

#endif /* _P2P_ */
