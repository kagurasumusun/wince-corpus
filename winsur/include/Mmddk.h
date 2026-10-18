/* Mmddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 12 declarations, 1 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MMDDK_
#define _MMDDK_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* WAVEOPENDESC  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MXDM_CLOSE  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_CLOSE
#define __WINCE_DEFINED_MXDM_CLOSE
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_CLOSE;
#endif /* __WINCE_DEFINED_MXDM_CLOSE */
#ifndef __WINCE_DEFINED_PMXDM_CLOSE
#define __WINCE_DEFINED_PMXDM_CLOSE
typedef MXDM_CLOSE *PMXDM_CLOSE, *LPMXDM_CLOSE;
#endif /* __WINCE_DEFINED_PMXDM_CLOSE */

/* MXDM_GETCONTROLDETAILS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_GETCONTROLDETAILS
#define __WINCE_DEFINED_MXDM_GETCONTROLDETAILS
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETCONTROLDETAILS;
#endif /* __WINCE_DEFINED_MXDM_GETCONTROLDETAILS */
#ifndef __WINCE_DEFINED_PMXDM_GETCONTROLDETAILS
#define __WINCE_DEFINED_PMXDM_GETCONTROLDETAILS
typedef MXDM_GETCONTROLDETAILS *PMXDM_GETCONTROLDETAILS, *LPMXDM_GETCONTROLDETAILS;
#endif /* __WINCE_DEFINED_PMXDM_GETCONTROLDETAILS */

/* MXDM_GETDEVCAPS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_GETDEVCAPS
#define __WINCE_DEFINED_MXDM_GETDEVCAPS
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETDEVCAPS;
#endif /* __WINCE_DEFINED_MXDM_GETDEVCAPS */
#ifndef __WINCE_DEFINED_PMXDM_GETDEVCAPS
#define __WINCE_DEFINED_PMXDM_GETDEVCAPS
typedef MXDM_GETDEVCAPS *PMXDM_GETDEVCAPS, *LPMXDM_GETDEVCAPS;
#endif /* __WINCE_DEFINED_PMXDM_GETDEVCAPS */

/* MXDM_GETLINECONTROLS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_GETLINECONTROLS
#define __WINCE_DEFINED_MXDM_GETLINECONTROLS
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETLINECONTROLS;
#endif /* __WINCE_DEFINED_MXDM_GETLINECONTROLS */
#ifndef __WINCE_DEFINED_PMXDM_GETLINECONTROLS
#define __WINCE_DEFINED_PMXDM_GETLINECONTROLS
typedef MXDM_GETLINECONTROLS *PMXDM_GETLINECONTROLS, *LPMXDM_GETLINECONTROLS;
#endif /* __WINCE_DEFINED_PMXDM_GETLINECONTROLS */

/* MXDM_GETLINEINFO  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_GETLINEINFO
#define __WINCE_DEFINED_MXDM_GETLINEINFO
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETLINEINFO;
#endif /* __WINCE_DEFINED_MXDM_GETLINEINFO */
#ifndef __WINCE_DEFINED_PMXDM_GETLINEINFO
#define __WINCE_DEFINED_PMXDM_GETLINEINFO
typedef MXDM_GETLINEINFO *PMXDM_GETLINEINFO, *LPMXDM_GETLINEINFO;
#endif /* __WINCE_DEFINED_PMXDM_GETLINEINFO */

/* MXDM_GETNUMDEVS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_GETNUMDEVS
#define __WINCE_DEFINED_MXDM_GETNUMDEVS
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETNUMDEVS;
#endif /* __WINCE_DEFINED_MXDM_GETNUMDEVS */
#ifndef __WINCE_DEFINED_PMXDM_GETNUMDEVS
#define __WINCE_DEFINED_PMXDM_GETNUMDEVS
typedef MXDM_GETNUMDEVS *PMXDM_GETNUMDEVS, *LPMXDM_GETNUMDEVS;
#endif /* __WINCE_DEFINED_PMXDM_GETNUMDEVS */

/* MXDM_INIT  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_INIT
#define __WINCE_DEFINED_MXDM_INIT
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_INIT;
#endif /* __WINCE_DEFINED_MXDM_INIT */
#ifndef __WINCE_DEFINED_PMXDM_INIT
#define __WINCE_DEFINED_PMXDM_INIT
typedef MXDM_INIT *PMXDM_INIT, *LPMXDM_INIT;
#endif /* __WINCE_DEFINED_PMXDM_INIT */

/* MXDM_OPEN  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_OPEN
#define __WINCE_DEFINED_MXDM_OPEN
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_OPEN;
#endif /* __WINCE_DEFINED_MXDM_OPEN */
#ifndef __WINCE_DEFINED_PMXDM_OPEN
#define __WINCE_DEFINED_PMXDM_OPEN
typedef MXDM_OPEN *PMXDM_OPEN, *LPMXDM_OPEN;
#endif /* __WINCE_DEFINED_PMXDM_OPEN */

/* MXDM_SETCONTROLDETAILS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_MXDM_SETCONTROLDETAILS
#define __WINCE_DEFINED_MXDM_SETCONTROLDETAILS
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_SETCONTROLDETAILS;
#endif /* __WINCE_DEFINED_MXDM_SETCONTROLDETAILS */
#ifndef __WINCE_DEFINED_PMXDM_SETCONTROLDETAILS
#define __WINCE_DEFINED_PMXDM_SETCONTROLDETAILS
typedef MXDM_SETCONTROLDETAILS *PMXDM_SETCONTROLDETAILS, *LPMXDM_SETCONTROLDETAILS;
#endif /* __WINCE_DEFINED_PMXDM_SETCONTROLDETAILS */

/* WAVEOUTEXTCAPS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAG_WAVEOUTEXTCAPS
#define __WINCE_DEFINED_TAG_WAVEOUTEXTCAPS
#ifndef __WINCE_DEFINED_WAVEOUTEXTCAPS
#define __WINCE_DEFINED_WAVEOUTEXTCAPS
typedef struct tag_WAVEOUTEXTCAPS {
 DWORD dwMaxHwStreams;
 DWORD dwFreeHwStreams;
 DWORD dwSwMixerSampleRate;
 DWORD dwSwMixerBufferSize;
 DWORD dwSwMixerBufferCount;
 DWORD dwMinSampleRate;
 DWORD dwMaxSampleRate;
} WAVEOUTEXTCAPS;
#endif /* __WINCE_DEFINED_WAVEOUTEXTCAPS */
#endif /* __WINCE_DEFINED_TAG_WAVEOUTEXTCAPS */
#ifndef __WINCE_DEFINED_PWAVEOUTEXTCAPS
#define __WINCE_DEFINED_PWAVEOUTEXTCAPS
typedef WAVEOUTEXTCAPS *PWAVEOUTEXTCAPS, *LPWAVEOUTEXTCAPS;
#endif /* __WINCE_DEFINED_PWAVEOUTEXTCAPS */

#endif /* _MMDDK_ */
