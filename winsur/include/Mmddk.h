/* Mmddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 13 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _MMDDK_
#define _MMDDK_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* MXDM_CLOSE  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_CLOSE;

/* MXDM_GETCONTROLDETAILS  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETCONTROLDETAILS;

/* MXDM_GETDEVCAPS  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETDEVCAPS;

/* MXDM_GETLINECONTROLS  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETLINECONTROLS;

/* MXDM_GETLINEINFO  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETLINEINFO;

/* MXDM_GETNUMDEVS  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_GETNUMDEVS;

/* MXDM_INIT  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_INIT;

/* MXDM_OPEN  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_OPEN;

/* MXDM_SETCONTROLDETAILS  [struct; ce-only] */
typedef struct {
 DWORD uDeviceId;
 UINT uMsg;
 DWORD dwUser;
 DWORD lParam1;
 DWORD lParam2;
} MXDM_SETCONTROLDETAILS;

/* WAVEOUTEXTCAPS  [struct; ce-only] */
typedef struct tag_WAVEOUTEXTCAPS {
 DWORD dwMaxHwStreams;
 DWORD dwFreeHwStreams;
 DWORD dwSwMixerSampleRate;
 DWORD dwSwMixerBufferSize;
 DWORD dwSwMixerBufferCount;
 DWORD dwMinSampleRate;
 DWORD dwMaxSampleRate;
} WAVEOUTEXTCAPS;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tMIXEROPENDESC { HMIXER hmx; LPVOID pReserved0; DWORD dwCallback; DWORD dwInstance;} MIXEROPENDESC, *PMIXEROPENDESC;
typedef struct tag_WAVEPROPINFO {LPGUIDpPropSetId;
ULONGulPropId;
LPVOIDpvPropParams;
ULONGcbPropParams;
LPVOIDpvPropData;
ULONGcbPropData;
PULONGpcbReturn;
} WAVEPROPINFO, * PWAVEPROPINFO;

#endif /* _MMDDK_ */
