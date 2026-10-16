/* drmoutputleveltypes.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 5 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _DRMOUTPUTLEVELTYPES_
#define _DRMOUTPUTLEVELTYPES_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS  [struct; shared; CE 5.0..699; cardea_wince.lib, wmdrm10nd.lib] */
typedef struct __tagDRM_MINIMUM_OUTPUT_PROTECTION_LEVELS{
 DRM_WORD wCompressedDigitalVideo;
 DRM_WORD wUncompressedDigitalVideo;
 DRM_WORD wAnalogVideo;
 DRM_WORD wCompressedDigitalAudio;
 DRM_WORD wUncompressedDigitalAudio;
} DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS;

/* DRM_OPL_OUTPUT_IDS  [struct; shared; CE 5.0..699; cardea_wince.lib, wmdrm10nd.lib] */
typedef struct __tagDRM_OPL_OUTPUT_IDS
{
 DRM_WORD cIds;
 DRM_GUID *rgIds;
} DRM_OPL_OUTPUT_IDS;

/* DRM_PLAY_OPL  [struct; shared; CE 5.0..699; cardea_wince.lib, wmdrm10nd.lib] */
typedef struct __tagDRM_PLAY_OPL{
 DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS minOPL;
 DRM_OPL_OUTPUT_IDS oplIdReserved;
 DRM_VIDEO_OUTPUT_PROTECTION_IDS vopi;
} DRM_PLAY_OPL;

/* DRM_VIDEO_OUTPUT_PROTECTION  [struct; ce-only; CE 5.0..699; cardea_wince.lib, wmdrm10nd.lib] */
typedef struct __tagDRM_VIDEO_OUTPUT_PROTECTION{
 DRM_GUID guidId;
 DRM_BYTE bConfigData;
} DRM_VIDEO_OUTPUT_PROTECTION;

/* DRM_VIDEO_OUTPUT_PROTECTION_IDS  [struct; shared; CE 5.0..699; cardea_wince.lib, wmdrm10nd.lib] */
typedef struct __tagDRM_VIDEO_OUTPUT_PROTECTION_IDS{
 DRM_WORD cEntries;
 DRM_VIDEO_OUTPUT_PROTECTION *rgVop;
} DRM_VIDEO_OUTPUT_PROTECTION_IDS;
#endif /* _WIN32_WCE */

#endif /* _DRMOUTPUTLEVELTYPES_ */
