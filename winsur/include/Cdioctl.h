/* Cdioctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 6 declarations, 1 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _CDIOCTL_
#define _CDIOCTL_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CDROM_TOC  [struct; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _CDROM_TOC{UCHARLength[2]; UCHARFirstTrack; UCHARLastTrack; TRACK_DATATrackData[MAXIMUM_NUMBER_TRACKS]; } CDROM_TOC, *PCDROM_TOC;
typedef struct _CD_SENSE_DATA{BYTEsd_ErrCode; BYTEsd_SegNum; BYTEsd_ILI_Key; BYTEsd_Info[4]; BYTEsd_Length; BYTEsd_CmdInfo[4]; BYTEsd_SenseCode; BYTEsd_Qualifier; BYTEsd_UnitCode; BYTEsd_Key1; BYTEsd_Key2; BYTEsd_Key3;} CD_SENSE_DATA, *PCD_SENSE_DATA;
typedef struct _SGX_BUF {PUCHARsb_buf; DWORDsb_len; }SGX_BUF, *PSGX_BUF;

#endif /* _CDIOCTL_ */
