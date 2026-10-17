/* vptype.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _VPTYPE_
#define _VPTYPE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* AM_SAMPLE_PROPERTY_FLAGS  [enum, typedef; ce-only; heuristic-prefix] */
enum tagAM_SAMPLE_PROPERTY_FLAGS { 
 AM_SAMPLE_SPLICEPOINT = 0x01, 
 AM_SAMPLE_PREROLL = 0x02, 
 AM_SAMPLE_DATADISCONTINUITY = 0x04, 
 AM_SAMPLE_TYPECHANGED = 0x08, 
 AM_SAMPLE_TIMEVALID = 0x10, 
 AM_SAMPLE_TIMEDISCONTINUITY = 0x40, 
 AM_SAMPLE_FLUSH_ON_PAUSE = 0x80, 
 AM_SAMPLE_STOPVALID = 0x100, 
 AM_SAMPLE_ENDOFSTREAM = 0x200, 
 AM_STREAM_MEDIA = 0, 
 AM_STREAM_CONTROL = 1 
};

/* AMVP_MODE  [enum, typedef; shared; entity-headers] */
typedef enum _AMVP_MODE {
 AMVP_MODE_WEAVE,
 AMVP_MODE_BOBINTERLEAVED,
 AMVP_MODE_BOBNONINTERLEAVED,
 AMVP_MODE_SKIPEVEN,
 AMVP_MODE_SKIPODD
} AMVP_MODE;
typedef AMVP_MODE *PAMVP_MODE, *LPAMVP_MODE;

/* MPEG2Level  [enum, typedef; ce-only; heuristic-prefix] */
enum MPEG2Level {
 MPEG2Level_Low = 1,
 MPEG2Level_Main,
 MPEG2Level_High1440,
 MPEG2Level_High
};

/* MPEG2Profile  [enum, typedef; ce-only; heuristic-prefix] */
enum MPEG2Profile {
 MPEG2Profile_Simple = 1,
 MPEG2Profile_Main,
 MPEG2Profile_SNRScalable,
 MPEG2Profile_SpatiallyScalable,
 MPEG2Profile_High
};

/* StreamControlState  [enum, typedef; ce-only; heuristic-prefix] */
enum StreamControlState {
 STREAM_FLOWING,
 STREAM_DISCARDING
};

#endif /* _VPTYPE_ */
