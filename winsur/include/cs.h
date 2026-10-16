/* cs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 1 constants, 25 declarations, 7 outlines, 0 base types, 0 extra macros, 19 extra decls
 */
#ifndef _CS_
#define _CS_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CSPROPERTY_PIN_CINSTANCES 0

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CSIDENTIFIER  [struct; ce-only; CE 6.0..699] */

/* CSPROPERTY  [struct; ce-only; CE 6.0..699] */

/* CSPROPERTY_BOUNDS_LONGLONG  [struct; ce-only; CE 6.0..699] */

/* CSPROPERTY_ITEM  [struct; ce-only; CE 6.0..699] */

/* CSPROPERTY_STEPPING_LONGLONG  [struct; ce-only; CE 6.0..699] */

/* CSSTREAM_HEADER  [struct; ce-only; CE 6.0..699] */

/* CSTIME  [struct; ce-only; CE 6.0..699] */

/* DEFINE_CSPROPERTY_ITEM  [macro; ce-only; CE 6.0..699] */
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

/* DEFINE_CSPROPERTY_SET  [macro; ce-only; CE 6.0..699] */
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

/* DEFINE_CSPROPERTY_SET_TABLE  [macro; ce-only; CE 6.0..699] */
#define DEFINE_CSPROPERTY_SET_TABLE(tablename) \
 const CSPROPERTY_SET tablename[] =

/* DEFINE_CSPROPERTY_TABLE  [macro; ce-only; CE 6.0..699] */
#define DEFINE_CSPROPERTY_TABLE(tablename)\
 const CSPROPERTY_ITEM tablename[] =
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* CS_COMPRESSION  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG RatioNumerator;
 ULONG RatioDenominator; 
 ULONG RatioConstantMargin;
} CS_COMPRESSION, *PCS_COMPRESSION;

/* CS_FRAMING_ITEM  [struct; ce-only; CE 6.0..699] */
typedef struct {
 GUID MemoryType;
 GUID BusType;
 ULONG MemoryFlags;
 ULONG BusFlags; 
 ULONG Flags; 
 ULONG Frames; // total number of allowable outstanding frames
 ULONG FileAlignment;
 ULONG MemoryTypeWeight; // this memory type Weight pin-wide
 CS_FRAMING_RANGE PhysicalRange;
 CS_FRAMING_RANGE_WEIGHTED FramingRange; 
} CS_FRAMING_ITEM, *PCS_FRAMING_ITEM;

/* CS_FRAMING_RANGE  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG MinFrameSize;
 ULONG MaxFrameSize;
 ULONG Stepping;
} CS_FRAMING_RANGE, *PCS_FRAMING_RANGE;

/* CS_FRAMING_RANGE_WEIGHTED  [struct; ce-only; CE 6.0..699] */
typedef struct {
 CS_FRAMING_RANGE Range;
 ULONG InPlaceWeight;
 ULONG NotInPlaceWeight;
} CS_FRAMING_RANGE_WEIGHTED, *PCS_FRAMING_RANGE_WEIGHTED;

/* CSALLOCATOR_FRAMING  [struct; ce-only; CE 6.0..699] */
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

/* CSALLOCATOR_FRAMING_EX  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG CountItems;
 ULONG PinFlags;
 CS_COMPRESSION OutputCompression;
 ULONG PinWeight;
 CS_FRAMING_ITEM FramingItem[1];
} CSALLOCATOR_FRAMING_EX, *PCSALLOCATOR_FRAMING_EX;

/* CSDATAFORMAT  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG FormatSize;
 ULONG Flags;
 ULONG SampleSize;
 ULONG Reserved;
 GUID MajorFormat;
 GUID SubFormat;
 GUID Specifier;
} CSDATAFORMAT, *PCSDATAFORMAT, CSDATARANGE, *PCSDATARANGE;

/* CSDATARANGE  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG FormatSize;
 ULONG Flags;
 ULONG SampleSize;
 ULONG Reserved;
 GUID MajorFormat;
 GUID SubFormat;
 GUID Specifier;
} CSDATAFORMAT, *PCSDATAFORMAT, CSDATARANGE, *PCSDATARANGE;

/* CSMULTIPLE_ITEM  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG Size;
 ULONG Count;
} CSMULTIPLE_ITEM, *PCSMULTIPLE_ITEM;

/* CSP_PIN  [struct; ce-only; CE 6.0..699] */
typedef struct {
 CSPROPERTY Property;
 ULONG PinId;
 ULONG Reserved;
} CSP_PIN, *PCSP_PIN;

/* CSPIN_CINSTANCES  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG PossibleCount;
 ULONG CurrentCount;
} CSPIN_CINSTANCES, *PCSPIN_CINSTANCES;

/* CSPROPERTY_BOUNDS_LONG  [struct; ce-only; CE 6.0..699] */
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

/* CSPROPERTY_CONNECTION  [enum; ce-only; CE 6.0..699] */
typedef enum {
 CSPROPERTY_CONNECTION_STATE,
 CSPROPERTY_CONNECTION_DATAFORMAT,
 CSPROPERTY_CONNECTION_ALLOCATORFRAMING,
 CSPROPERTY_CONNECTION_PROPOSEDATAFORMAT,
 CSPROPERTY_CONNECTION_ALLOCATORFRAMING_EX
} CSPROPERTY_CONNECTION;

/* CSPROPERTY_DESCRIPTION  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG AccessFlags;
 ULONG DescriptionSize;
 CSIDENTIFIER PropTypeSet;
 ULONG MembersListCount;
 ULONG Reserved;
} CSPROPERTY_DESCRIPTION, *PCSPROPERTY_DESCRIPTION;

/* CSPROPERTY_MEMBERSHEADER  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG MembersFlags;
 ULONG MembersSize;
 ULONG MembersCount;
 ULONG Flags;
} CSPROPERTY_MEMBERSHEADER, *PCSPROPERTY_MEMBERSHEADER;

/* CSPROPERTY_MEMBERSLIST  [struct; ce-only; CE 6.0..699] */
typedef struct {
 CSPROPERTY_MEMBERSHEADER MembersHeader;
 const VOID* Members;
} CSPROPERTY_MEMBERSLIST, *PCSPROPERTY_MEMBERSLIST;

/* CSPROPERTY_PIN  [enum; ce-only; CE 6.0..699] */
typedef enum {
 CSPROPERTY_PIN_CINSTANCES = 0,
 CSPROPERTY_PIN_CTYPES,
 CSPROPERTY_PIN_DATARANGES,
 CSPROPERTY_PIN_DATAINTERSECTION,
 CSPROPERTY_PIN_CATEGORY,
 CSPROPERTY_PIN_NAME,
} CSPROPERTY_PIN;

/* CSPROPERTY_SET  [struct; ce-only; CE 6.0..699] */
typedef struct {
 const GUID* Set;
 ULONG PropertiesCount;
 const CSPROPERTY_ITEM* PropertyItem;
 ULONG FastIoCount;
 LPVOID Reserved;
} CSPROPERTY_SET, *PCSPROPERTY_SET;

/* CSPROPERTY_STEPPING_LONG  [struct; ce-only; CE 6.0..699] */
typedef struct {
 ULONG SteppingDelta;
 ULONG Reserved;
 CSPROPERTY_BOUNDS_LONG Bounds;
} CSPROPERTY_STEPPING_LONG, *PCSPROPERTY_STEPPING_LONG;

/* CSPROPERTY_VALUES  [struct; ce-only; CE 6.0..699] */
typedef struct {
 CSIDENTIFIER PropTypeSet;
 ULONG MembersListCount;
 const CSPROPERTY_MEMBERSLIST* MembersList;
} CSPROPERTY_VALUES, *PCSPROPERTY_VALUES;

/* CSSTATE  [enum; ce-only; CE 6.0..699] */
typedef enum {
 CSSTATE_STOP,
 CSSTATE_PAUSE,
 CSSTATE_RUN
} CSSTATE, *PCSSTATE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef CSIDENTIFIER CSPROPERTY, *PCSPROPERTY, CSMETHOD, \ *PCSMETHOD, CSEVENT, *PCSEVENT;

/* enum */
typedef enum {
  CSSTATE_STOP,
  CSSTATE_PAUSE,
  CSSTATE_RUN
} CSSTATE, *PCSSTATE;

/* struct */
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
typedef struct {
  ULONG CountItems;
  ULONG PinFlags;
  CS_COMPRESSION OutputCompression;
  ULONG PinWeight;
  CS_FRAMING_ITEM FramingItem[1];
} CSALLOCATOR_FRAMING_EX, *PCSALLOCATOR_FRAMING_EX;
typedef struct {
  ULONG FormatSize;
  ULONG Flags;
  ULONG SampleSize;
  ULONG Reserved;
  GUID MajorFormat;
  GUID SubFormat;
  GUID Specifier;
} CSDATAFORMAT, *PCSDATAFORMAT, CSDATARANGE, *PCSDATARANGE;
typedef struct { ULONG Size; ULONG Count; } CSMULTIPLE_ITEM, *PCSMULTIPLE_ITEM;
typedef struct { ULONG PossibleCount; ULONG CurrentCount; } CSPIN_CINSTANCES, *PCSPIN_CINSTANCES;
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
typedef struct {
  ULONG AccessFlags;
  ULONG DescriptionSize;
  CSIDENTIFIER PropTypeSet;
  ULONG MembersListCount;
  ULONG Reserved;
} CSPROPERTY_DESCRIPTION, *PCSPROPERTY_DESCRIPTION;
typedef struct {
  ULONG MembersFlags;
  ULONG MembersSize;
  ULONG MembersCount;
  ULONG Flags;
} CSPROPERTY_MEMBERSHEADER, *PCSPROPERTY_MEMBERSHEADER;
typedef struct { CSPROPERTY_MEMBERSHEADER MembersHeader; const VOID* Members; } CSPROPERTY_MEMBERSLIST, *PCSPROPERTY_MEMBERSLIST;
typedef struct {
  const GUID* Set;
  ULONG PropertiesCount;
  const CSPROPERTY_ITEM* PropertyItem;
  ULONG FastIoCount;
  LPVOID Reserved;
} CSPROPERTY_SET, *PCSPROPERTY_SET;
typedef struct {
  ULONG SteppingDelta;
  ULONG Reserved;
  CSPROPERTY_BOUNDS_LONG Bounds;
} CSPROPERTY_STEPPING_LONG, *PCSPROPERTY_STEPPING_LONG;
typedef struct {
  CSIDENTIFIER PropTypeSet;
  ULONG MembersListCount;
  const CSPROPERTY_MEMBERSLIST* MembersList;
} CSPROPERTY_VALUES, *PCSPROPERTY_VALUES;
typedef struct {
  CSPROPERTY Property;
  ULONG PinId;
  ULONG Reserved;
} CSP_PIN, *PCSP_PIN;
typedef struct {
  ULONG RatioNumerator;
  ULONG RatioDenominator;
  ULONG RatioConstantMargin;
} CS_COMPRESSION, *PCS_COMPRESSION;
typedef struct {
  GUID MemoryType;
  GUID BusType;
  ULONG MemoryFlags;
  ULONG BusFlags;
  ULONG Flags;
  ULONG Frames; // total number of allowable outstanding frames
  ULONG FileAlignment;
  ULONG MemoryTypeWeight; // this memory type Weight pin-wide
  CS_FRAMING_RANGE PhysicalRange;
  CS_FRAMING_RANGE_WEIGHTED FramingRange;
} CS_FRAMING_ITEM, *PCS_FRAMING_ITEM;
typedef struct {
  ULONG MinFrameSize;
  ULONG MaxFrameSize;
  ULONG Stepping;
} CS_FRAMING_RANGE, *PCS_FRAMING_RANGE;
typedef struct {
  CS_FRAMING_RANGE Range;
  ULONG InPlaceWeight;
  ULONG NotInPlaceWeight;
} CS_FRAMING_RANGE_WEIGHTED, *PCS_FRAMING_RANGE_WEIGHTED;

#endif /* _CS_ */
