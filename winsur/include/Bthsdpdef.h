/* Bthsdpdef.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _BTHSDPDEF_
#define _BTHSDPDEF_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* BTHNS_SETBLOB  [struct; ce-only] */
#ifndef __WINCE_DEFINED__BTHNS_SETBLOB
#define __WINCE_DEFINED__BTHNS_SETBLOB
#ifndef __WINCE_DEFINED_BTHNS_SETBLOB
#define __WINCE_DEFINED_BTHNS_SETBLOB
typedef struct _BTHNS_SETBLOB {
 ULONG* pRecordHandle;
 ULONG fSecurity;
 ULONG fOptions;
 ULONG ulRecordLength;
 UCHAR pRecord[1];
} BTHNS_SETBLOB, *PBTHNS_SETBLOB;
#endif /* __WINCE_DEFINED_BTHNS_SETBLOB */
#endif /* __WINCE_DEFINED__BTHNS_SETBLOB */

/* NODECONTAINERTYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_NODECONTAINERTYPE
#define __WINCE_DEFINED_NODECONTAINERTYPE
typedef enum {
 NODECONTAINERTYPESEQUENCE = 0,
 NODECONTAINERTYPEALTERNATIVE = NodeContainerTypeSequence + 1
} NODECONTAINERTYPE;
#endif /* __WINCE_DEFINED_NODECONTAINERTYPE */
#ifndef __WINCE_DEFINED_PNODECONTAINERTYPE
#define __WINCE_DEFINED_PNODECONTAINERTYPE
typedef NODECONTAINERTYPE *PNODECONTAINERTYPE, *LPNODECONTAINERTYPE;
#endif /* __WINCE_DEFINED_PNODECONTAINERTYPE */

/* SDP_SPECIFICTYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SDP_SPECIFICTYPE
#define __WINCE_DEFINED_SDP_SPECIFICTYPE
typedef enum {
 SDP_ST_NONE = 0x0000,
 SDP_ST_UINT8 = 0x0010,
 SDP_ST_UINT16 = 0x0110,
 SDP_ST_UINT32 = 0x0210,
 SDP_ST_UINT64 = 0x0310,
 SDP_ST_UINT128 = 0x0410,
 SDP_ST_INT8 = 0x0020,
 SDP_ST_INT16 = 0x0120,
 SDP_ST_INT32 = 0x0220,
 SDP_ST_INT64 = 0x0320,
 SDP_ST_INT128 = 0x0420,
 SDP_ST_UUID16 = 0x0130,
 SDP_ST_UUID32 = 0x0220,
 SDP_ST_UUID128 = 0x0430
} SDP_SPECIFICTYPE;
#endif /* __WINCE_DEFINED_SDP_SPECIFICTYPE */
#ifndef __WINCE_DEFINED_PSDP_SPECIFICTYPE
#define __WINCE_DEFINED_PSDP_SPECIFICTYPE
typedef SDP_SPECIFICTYPE *PSDP_SPECIFICTYPE, *LPSDP_SPECIFICTYPE;
#endif /* __WINCE_DEFINED_PSDP_SPECIFICTYPE */

/* SDP_TYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_SDP_TYPE
#define __WINCE_DEFINED_SDP_TYPE
typedef enum {
 SDP_TYPE_NIL = 0x00,
 SDP_TYPE_UINT = 0x01,
 SDP_TYPE_INT = 0x02,
 SDP_TYPE_UUID = 0x03,
 SDP_TYPE_STRING = 0x04,
 SDP_TYPE_BOOLEAN = 0x05,
 SDP_TYPE_SEQUENCE = 0x06,
 SDP_TYPE_ALTERNATIVE = 0x07,
 SDP_TYPE_URL = 0x08,
 SDP_TYPE_CONTAINER = 0x20
} SDP_TYPE;
#endif /* __WINCE_DEFINED_SDP_TYPE */
#ifndef __WINCE_DEFINED_PSDP_TYPE
#define __WINCE_DEFINED_PSDP_TYPE
typedef SDP_TYPE *PSDP_TYPE, *LPSDP_TYPE;
#endif /* __WINCE_DEFINED_PSDP_TYPE */

/* SdpAttributeRange  [struct; shared] */
#ifndef __WINCE_DEFINED__SDPATTRIBUTERANGE
#define __WINCE_DEFINED__SDPATTRIBUTERANGE
#ifndef __WINCE_DEFINED_SDPATTRIBUTERANGE
#define __WINCE_DEFINED_SDPATTRIBUTERANGE
struct _SdpAttributeRange {
 USHORT minAttribute;
 USHORT maxAttribute;
} SdpAttributeRange;
#endif /* __WINCE_DEFINED_SDPATTRIBUTERANGE */
#endif /* __WINCE_DEFINED__SDPATTRIBUTERANGE */

/* SdpQueryUuid  [struct; shared] */
#ifndef __WINCE_DEFINED__SDPQUERYUUID
#define __WINCE_DEFINED__SDPQUERYUUID
#ifndef __WINCE_DEFINED_SDPQUERYUUID
#define __WINCE_DEFINED_SDPQUERYUUID
typedef struct _SdpQueryUuid {
 SdpQueryUuidUnion u;
 USHORT uuidType;
} SdpQueryUuid;
#endif /* __WINCE_DEFINED_SDPQUERYUUID */
#endif /* __WINCE_DEFINED__SDPQUERYUUID */
#ifndef __WINCE_DEFINED_PSDPQUERYUUID
#define __WINCE_DEFINED_PSDPQUERYUUID
typedef SdpQueryUuid *PSdpQueryUuid, *LPSdpQueryUuid;
#endif /* __WINCE_DEFINED_PSDPQUERYUUID */

/* SdpQueryUuidUnion  [typedef, struct; shared] */
/* DERIVED member outline -- documented order, types/offsets not stated */
/*   uuid128 */
/*   uuid32 */
/*   uuid16 */

#endif /* _BTHSDPDEF_ */
