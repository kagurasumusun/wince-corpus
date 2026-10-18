/* p2p.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _P2P_
#define _P2P_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* PEER_CONNECTION_FLAGS_TAG  [enum; ce-only; p2p.lib] */
#ifndef __WINCE_DEFINED_PEER_CONNECTION_FLAGS_TAG
#define __WINCE_DEFINED_PEER_CONNECTION_FLAGS_TAG
#ifndef __WINCE_DEFINED_PEER_CONNECTION_FLAGS_TAG
#define __WINCE_DEFINED_PEER_CONNECTION_FLAGS_TAG
#ifndef __WINCE_DEFINED_PEER_CONNECTION_FLAGS
#define __WINCE_DEFINED_PEER_CONNECTION_FLAGS
typedef enum peer_connection_flags_tag
{
 PEER_CONNECTION_NEIGHBOR,
 PEER_CONNECTION_DIRECT
} PEER_CONNECTION_FLAGS;
#endif /* __WINCE_DEFINED_PEER_CONNECTION_FLAGS */
#endif /* __WINCE_DEFINED_PEER_CONNECTION_FLAGS_TAG */
#endif /* __WINCE_DEFINED_PEER_CONNECTION_FLAGS_TAG */

/* PEER_DATA  [struct; shared; p2p.lib] */
#ifndef __WINCE_DEFINED_PEER_DATA_TAG
#define __WINCE_DEFINED_PEER_DATA_TAG
#ifndef __WINCE_DEFINED_PEER_DATA
#define __WINCE_DEFINED_PEER_DATA
#ifndef __WINCE_DEFINED_PPEER_DATA
#define __WINCE_DEFINED_PPEER_DATA
typedef struct peer_data_tag {
 ULONG cbData;
 PBYTE pbData;
} PEER_DATA,
*PPEER_DATA;
#endif /* __WINCE_DEFINED_PPEER_DATA */
#endif /* __WINCE_DEFINED_PEER_DATA */
#endif /* __WINCE_DEFINED_PEER_DATA_TAG */

/* PEER_RECORD_CHANGE_TYPE_TAG  [enum; ce-only; p2p.lib] */
#ifndef __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE_TAG
#define __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE_TAG
#ifndef __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE_TAG
#define __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE_TAG
#ifndef __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE
#define __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE
typedef enum peer_record_change_type_tag
{
 PEER_RECORD_ADDED,
 PEER_RECORD_UPDATED,
 PEER_RECORD_DELETED,
 PEER_RECORD_EXPIRED
} PEER_RECORD_CHANGE_TYPE;
#endif /* __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE */
#endif /* __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE_TAG */
#endif /* __WINCE_DEFINED_PEER_RECORD_CHANGE_TYPE_TAG */

#endif /* _P2P_ */
