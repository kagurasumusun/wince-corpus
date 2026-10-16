/* Bthsdpdef.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 28 constants, 8 declarations, 1 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _BTHSDPDEF_
#define _BTHSDPDEF_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define NODECONTAINERTYPESEQUENCE 0
#define SDP_ATTRIB_PROTOCOL_DESCRIPTOR_LIST 0x4
#define SDP_CHANNEL_OFFSET 32
#define SDP_RECORD_SIZE 0x00000043
#define SDP_ST_INT128 0x0420
#define SDP_ST_INT16 0x0120
#define SDP_ST_INT32 0x0220
#define SDP_ST_INT64 0x0320
#define SDP_ST_INT8 0x0020
#define SDP_ST_NONE 0x0000
#define SDP_ST_UINT128 0x0410
#define SDP_ST_UINT16 0x0110
#define SDP_ST_UINT32 0x0210
#define SDP_ST_UINT64 0x0310
#define SDP_ST_UINT8 0x0010
#define SDP_ST_UUID128 0x0430
#define SDP_ST_UUID16 0x0130
#define SDP_ST_UUID32 0x0220
#define SDP_TYPE_ALTERNATIVE 0x07
#define SDP_TYPE_BOOLEAN 0x05
#define SDP_TYPE_CONTAINER 0x20
#define SDP_TYPE_INT 0x02
#define SDP_TYPE_NIL 0x00
#define SDP_TYPE_SEQUENCE 0x06
#define SDP_TYPE_STRING 0x04
#define SDP_TYPE_UINT 0x01
#define SDP_TYPE_URL 0x08
#define SDP_TYPE_UUID 0x03

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* BTHNS_RESTRICTIONBLOB  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SdpAttributeRange  [struct; shared] */
struct _SdpAttributeRange {
 USHORT minAttribute;
 USHORT maxAttribute;
} SdpAttributeRange;

/* SdpQueryUuid  [struct; shared] */
typedef struct _SdpQueryUuid {
 SdpQueryUuidUnion u;
 USHORT uuidType;
} SdpQueryUuid;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _BTHNS_RESTRICTIONBLOB {ULONGtype;ULONGserviceHandle;SdpQueryUuiduuids[MAX_UUIDS_IN_QUERY];ULONGnumRange;SdpAttributeRangepRange[1];} BTHNS_RESTRICTIONBLOB, *PBTHNS_RESTRICTIONBLOB;
typedef struct _BTHNS_SETBLOB {ULONG* pRecordHandle;ULONGfSecurity;ULONGfOptions;ULONGulRecordLength;UCHARpRecord[1];} BTHNS_SETBLOB, *PBTHNS_SETBLOB;

#endif /* _BTHSDPDEF_ */
