/* Bthsdpdef.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 3 constants, 8 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _BTHSDPDEF_
#define _BTHSDPDEF_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SDP_ATTRIB_PROTOCOL_DESCRIPTOR_LIST 0x4
#define SDP_CHANNEL_OFFSET 32
#define SDP_RECORD_SIZE 0x00000043

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

/* PBTHNS_SETBLOB  [extra struct] */
typedef struct _BTHNS_SETBLOB {ULONG* pRecordHandle;ULONGfSecurity;ULONGfOptions;ULONGulRecordLength;UCHARpRecord[1];} BTHNS_SETBLOB, *PBTHNS_SETBLOB;

#endif /* _BTHSDPDEF_ */
