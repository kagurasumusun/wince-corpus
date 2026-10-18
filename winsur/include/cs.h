/* cs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 32 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CS_
#define _CS_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DEFINE_CSPROPERTY_ITEM  [macro; ce-only] */
#define DEFINE_CSPROPERTY_ITEM(PropertyId, GetHandler,\
 MinProperty, MinData,\
 SetHandler, Values,\
 RelationsCount, Relations,\
 SupportHandler, SerializedSize)\
{\
 PropertyId, (BOOL)GetHandler,\
 MinProperty, MinData,\
 (BOOL)SetHandler, (PCSPROPERTY_VALUES)Values,\
 RelationsCount, (PCSPROPERTY)Relations,\
 NULL, 0\
}

/* DEFINE_CSPROPERTY_SET  [macro; ce-only] */
#define DEFINE_CSPROPERTY_SET(Set,\
 PropertiesCount,\
 PropertyItem,\
 FastIoCount,\
 FastIoTable)\
{\
 Set,\
 PropertiesCount,\
 PropertyItem,\
 FastIoCount,\
 FastIoTable\
}

/* DEFINE_CSPROPERTY_SET_TABLE  [macro; ce-only] */
#define DEFINE_CSPROPERTY_SET_TABLE(tablename) \
 const CSPROPERTY_SET tablename =

/* DEFINE_CSPROPERTY_TABLE  [macro; ce-only] */
#define DEFINE_CSPROPERTY_TABLE(tablename)\
 const CSPROPERTY_ITEM tablename =

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CS_COMPRESSION  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CS_COMPRESSION
#define __WINCE_DEFINED_CS_COMPRESSION
typedef struct {
 ULONG RatioNumerator;
 ULONG RatioDenominator;
 ULONG RatioConstantMargin;
} CS_COMPRESSION, *PCS_COMPRESSION;
#endif /* __WINCE_DEFINED_CS_COMPRESSION */

/* CS_FRAMING_RANGE  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CS_FRAMING_RANGE
#define __WINCE_DEFINED_CS_FRAMING_RANGE
typedef struct {
 ULONG MinFrameSize;
 ULONG MaxFrameSize;
 ULONG Stepping;
} CS_FRAMING_RANGE, *PCS_FRAMING_RANGE;
#endif /* __WINCE_DEFINED_CS_FRAMING_RANGE */

/* CS_FRAMING_RANGE_WEIGHTED  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CS_FRAMING_RANGE_WEIGHTED
#define __WINCE_DEFINED_CS_FRAMING_RANGE_WEIGHTED
typedef struct {
 CS_FRAMING_RANGE Range;
 ULONG InPlaceWeight;
 ULONG NotInPlaceWeight;
} CS_FRAMING_RANGE_WEIGHTED, *PCS_FRAMING_RANGE_WEIGHTED;
#endif /* __WINCE_DEFINED_CS_FRAMING_RANGE_WEIGHTED */

/* CSALLOCATOR_FRAMING  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSALLOCATOR_FRAMING
#define __WINCE_DEFINED_CSALLOCATOR_FRAMING
typedef struct {
 union {
 ULONG OptionsFlags;
 ULONG RequirementsFlags;
 };
 ULONG PoolType;
 ULONG Frames;
 ULONG FrameSize;
 ULONG FileAlignment;
 ULONG Reserved;
} CSALLOCATOR_FRAMING, *PCSALLOCATOR_FRAMING;
#endif /* __WINCE_DEFINED_CSALLOCATOR_FRAMING */

/* CSMULTIPLE_ITEM  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSMULTIPLE_ITEM
#define __WINCE_DEFINED_CSMULTIPLE_ITEM
typedef struct {
 ULONG Size;
 ULONG Count;
} CSMULTIPLE_ITEM, *PCSMULTIPLE_ITEM;
#endif /* __WINCE_DEFINED_CSMULTIPLE_ITEM */

/* CSPIN_CINSTANCES  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSPIN_CINSTANCES
#define __WINCE_DEFINED_CSPIN_CINSTANCES
typedef struct {
 ULONG PossibleCount;
 ULONG CurrentCount;
} CSPIN_CINSTANCES, *PCSPIN_CINSTANCES;
#endif /* __WINCE_DEFINED_CSPIN_CINSTANCES */

/* CSPROPERTY_BOUNDS_LONG  [struct; ce-only] */
#ifndef __WINCE_DEFINED__SIGNED
#define __WINCE_DEFINED__SIGNED
#ifndef __WINCE_DEFINED_CSPROPERTY_BOUNDS_LONG
#define __WINCE_DEFINED_CSPROPERTY_BOUNDS_LONG
typedef union {
 struct _SIGNED {
 LONG SignedMinimum;
 LONG SignedMaximum;
 };
 struct _UNSIGNED {
 ULONG UnsignedMinimum;
 ULONG UnsignedMaximum;
 };
} CSPROPERTY_BOUNDS_LONG, *PCSPROPERTY_BOUNDS_LONG;
#endif /* __WINCE_DEFINED_CSPROPERTY_BOUNDS_LONG */
#endif /* __WINCE_DEFINED__SIGNED */

/* CSPROPERTY_CONNECTION  [enum; ce-only] */
#ifndef __WINCE_DEFINED_CSPROPERTY_CONNECTION
#define __WINCE_DEFINED_CSPROPERTY_CONNECTION
typedef enum {
 CSPROPERTY_CONNECTION_STATE,
 CSPROPERTY_CONNECTION_DATAFORMAT,
 CSPROPERTY_CONNECTION_ALLOCATORFRAMING,
 CSPROPERTY_CONNECTION_PROPOSEDATAFORMAT,
 CSPROPERTY_CONNECTION_ALLOCATORFRAMING_EX
} CSPROPERTY_CONNECTION;
#endif /* __WINCE_DEFINED_CSPROPERTY_CONNECTION */
#ifndef __WINCE_DEFINED_PCSPROPERTY_CONNECTION
#define __WINCE_DEFINED_PCSPROPERTY_CONNECTION
typedef CSPROPERTY_CONNECTION *PCSPROPERTY_CONNECTION, *LPCSPROPERTY_CONNECTION;
#endif /* __WINCE_DEFINED_PCSPROPERTY_CONNECTION */

/* CSPROPERTY_MEMBERSHEADER  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSPROPERTY_MEMBERSHEADER
#define __WINCE_DEFINED_CSPROPERTY_MEMBERSHEADER
typedef struct {
 ULONG MembersFlags;
 ULONG MembersSize;
 ULONG MembersCount;
 ULONG Flags;
} CSPROPERTY_MEMBERSHEADER, *PCSPROPERTY_MEMBERSHEADER;
#endif /* __WINCE_DEFINED_CSPROPERTY_MEMBERSHEADER */

/* CSPROPERTY_MEMBERSLIST  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSPROPERTY_MEMBERSLIST
#define __WINCE_DEFINED_CSPROPERTY_MEMBERSLIST
typedef struct {
 CSPROPERTY_MEMBERSHEADER MembersHeader;
 const VOID* Members;
} CSPROPERTY_MEMBERSLIST, *PCSPROPERTY_MEMBERSLIST;
#endif /* __WINCE_DEFINED_CSPROPERTY_MEMBERSLIST */

/* CSPROPERTY_PIN  [enum; ce-only] */
#ifndef __WINCE_DEFINED_CSPROPERTY_PIN
#define __WINCE_DEFINED_CSPROPERTY_PIN
typedef enum {
 CSPROPERTY_PIN_CINSTANCES = 0,
 CSPROPERTY_PIN_CTYPES,
 CSPROPERTY_PIN_DATARANGES,
 CSPROPERTY_PIN_DATAINTERSECTION,
 CSPROPERTY_PIN_CATEGORY,
 CSPROPERTY_PIN_NAME,
} CSPROPERTY_PIN;
#endif /* __WINCE_DEFINED_CSPROPERTY_PIN */
#ifndef __WINCE_DEFINED_PCSPROPERTY_PIN
#define __WINCE_DEFINED_PCSPROPERTY_PIN
typedef CSPROPERTY_PIN *PCSPROPERTY_PIN, *LPCSPROPERTY_PIN;
#endif /* __WINCE_DEFINED_PCSPROPERTY_PIN */

/* CSPROPERTY_STEPPING_LONG  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSPROPERTY_STEPPING_LONG
#define __WINCE_DEFINED_CSPROPERTY_STEPPING_LONG
typedef struct {
 ULONG SteppingDelta;
 ULONG Reserved;
 CSPROPERTY_BOUNDS_LONG Bounds;
} CSPROPERTY_STEPPING_LONG, *PCSPROPERTY_STEPPING_LONG;
#endif /* __WINCE_DEFINED_CSPROPERTY_STEPPING_LONG */

/* CSSTATE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_CSSTATE
#define __WINCE_DEFINED_CSSTATE
typedef enum {
 CSSTATE_STOP,
 CSSTATE_PAUSE,
 CSSTATE_RUN
} CSSTATE, *PCSSTATE;
#endif /* __WINCE_DEFINED_CSSTATE */

/* CSTIME  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSTIME
#define __WINCE_DEFINED_CSTIME
typedef struct {
 LONGLONG Time;
 ULONG Numerator;
 ULONG Denominator;
} CSTIME, *PCSTIME;
#endif /* __WINCE_DEFINED_CSTIME */

/* CSSTREAM_HEADER  [struct; ce-only] */
#ifndef __WINCE_DEFINED_CSSTREAM_HEADER
#define __WINCE_DEFINED_CSSTREAM_HEADER
typedef struct {
 ULONG Size;
 ULONG TypeSpecificFlags;
 CSTIME PresentationTime;
 LONGLONG Duration;
 ULONG FrameExtent;
 ULONG DataUsed;
 PVOID Data;
 ULONG OptionsFlags;
} CSSTREAM_HEADER, *PCSSTREAM_HEADER;
#endif /* __WINCE_DEFINED_CSSTREAM_HEADER */

#endif /* _CS_ */
