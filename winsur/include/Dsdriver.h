/* Dsdriver.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 16 extra decls
 */
#ifndef _DSDRIVER_
#define _DSDRIVER_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DSDM_DELETEBUFFER  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_DELETEBUFFER
#define __WINCE_DEFINED_DSDM_DELETEBUFFER
#ifndef __WINCE_DEFINED_DSDMP_DELETEBUFFER
#define __WINCE_DEFINED_DSDMP_DELETEBUFFER
typedef struct {
 DWORD dwMsg;
 PDWORD dwInstance;
} DSDMP_DELETEBUFFER;
#endif /* __WINCE_DEFINED_DSDMP_DELETEBUFFER */
#endif /* __WINCE_DEFINED_DSDM_DELETEBUFFER */

/* DSDM_DUPLICATEBUFFER  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_DUPLICATEBUFFER
#define __WINCE_DEFINED_DSDM_DUPLICATEBUFFER
#ifndef __WINCE_DEFINED_DSDMP_DUPLICATEBUFFER
#define __WINCE_DEFINED_DSDMP_DUPLICATEBUFFER
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 PDWORD pdwInstance;
} DSDMP_DUPLICATEBUFFER;
#endif /* __WINCE_DEFINED_DSDMP_DUPLICATEBUFFER */
#endif /* __WINCE_DEFINED_DSDM_DUPLICATEBUFFER */

/* DSDM_GETPOSITION  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_GETPOSITION
#define __WINCE_DEFINED_DSDM_GETPOSITION
#ifndef __WINCE_DEFINED_DSDMP_GETPOSITION
#define __WINCE_DEFINED_DSDMP_GETPOSITION
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 PDWORD pdwPlay;
 PDWORD pdwWrite;
} DSDMP_GETPOSITION;
#endif /* __WINCE_DEFINED_DSDMP_GETPOSITION */
#endif /* __WINCE_DEFINED_DSDM_GETPOSITION */

/* DSDM_GETSTATUS  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_GETSTATUS
#define __WINCE_DEFINED_DSDM_GETSTATUS
#ifndef __WINCE_DEFINED_DSDMP_GETSTATUS
#define __WINCE_DEFINED_DSDMP_GETSTATUS
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 PDWORD pdwStatus;
} DSDMP_GETSTATUS;
#endif /* __WINCE_DEFINED_DSDMP_GETSTATUS */
#endif /* __WINCE_DEFINED_DSDM_GETSTATUS */

/* DSDM_LOCK  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_LOCK
#define __WINCE_DEFINED_DSDM_LOCK
#ifndef __WINCE_DEFINED_DSDMP_LOCK
#define __WINCE_DEFINED_DSDMP_LOCK
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 DWORD dwOffset;
 DWORD dwCount;
 LPVOID* ppBuffer1;
 LPDWORD pdwCount1;
 LPVOID* ppBuffer2;
 LPDWORD pdwCount2;
 DWORD dwFlags;
} DSDMP_LOCK;
#endif /* __WINCE_DEFINED_DSDMP_LOCK */
#endif /* __WINCE_DEFINED_DSDM_LOCK */

/* DSDM_PLAY  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_PLAY
#define __WINCE_DEFINED_DSDM_PLAY
#ifndef __WINCE_DEFINED_DSDMP_PLAY
#define __WINCE_DEFINED_DSDMP_PLAY
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 DWORD dwFlags;
} DSDMP_PLAY;
#endif /* __WINCE_DEFINED_DSDMP_PLAY */
#endif /* __WINCE_DEFINED_DSDM_PLAY */

/* DSDM_SETFORMAT  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_SETFORMAT
#define __WINCE_DEFINED_DSDM_SETFORMAT
#ifndef __WINCE_DEFINED_DSDMP_SETFORMAT
#define __WINCE_DEFINED_DSDMP_SETFORMAT
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 LPWAVEFORMATEX pWFX;
} DSDMP_SETFORMAT;
#endif /* __WINCE_DEFINED_DSDMP_SETFORMAT */
#endif /* __WINCE_DEFINED_DSDM_SETFORMAT */

/* DSDM_SETFREQUENCY  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_SETFREQUENCY
#define __WINCE_DEFINED_DSDM_SETFREQUENCY
#ifndef __WINCE_DEFINED_DSDMP_SETFREQUENCY
#define __WINCE_DEFINED_DSDMP_SETFREQUENCY
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 DWORD dwFreq;
} DSDMP_SETFREQUENCY;
#endif /* __WINCE_DEFINED_DSDMP_SETFREQUENCY */
#endif /* __WINCE_DEFINED_DSDM_SETFREQUENCY */

/* DSDM_SETPOSITION  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_SETPOSITION
#define __WINCE_DEFINED_DSDM_SETPOSITION
#ifndef __WINCE_DEFINED_DSDMP_SETPOSITION
#define __WINCE_DEFINED_DSDMP_SETPOSITION
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 DWORD dwPosition;
} DSDMP_SETPOSITION;
#endif /* __WINCE_DEFINED_DSDMP_SETPOSITION */
#endif /* __WINCE_DEFINED_DSDM_SETPOSITION */

/* DSDM_SETVOLUMEPAN  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_SETVOLUMEPAN
#define __WINCE_DEFINED_DSDM_SETVOLUMEPAN
#ifndef __WINCE_DEFINED_DSDMP_SETVOLUMEPAN
#define __WINCE_DEFINED_DSDMP_SETVOLUMEPAN
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 LONG lVolume;
 LONG lPan;
} DSDMP_SETVOLUMEPAN;
#endif /* __WINCE_DEFINED_DSDMP_SETVOLUMEPAN */
#endif /* __WINCE_DEFINED_DSDM_SETVOLUMEPAN */

/* DSDM_STOP  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_STOP
#define __WINCE_DEFINED_DSDM_STOP
#ifndef __WINCE_DEFINED_DSDMP_STOP
#define __WINCE_DEFINED_DSDMP_STOP
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
} DSDMP_STOP;
#endif /* __WINCE_DEFINED_DSDMP_STOP */
#endif /* __WINCE_DEFINED_DSDM_STOP */

/* DSDM_UNLOCK  [struct; ce-only] */
#ifndef __WINCE_DEFINED_DSDM_UNLOCK
#define __WINCE_DEFINED_DSDM_UNLOCK
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 LPVOID pBuffer1;
 DWORD dwCount1;
 LPVOID pBuffer2;
 DWORD dwCount2;
} DSDM_UNLOCK;
#endif /* __WINCE_DEFINED_DSDM_UNLOCK */
#ifndef __WINCE_DEFINED_PDSDM_UNLOCK
#define __WINCE_DEFINED_PDSDM_UNLOCK
typedef DSDM_UNLOCK *PDSDM_UNLOCK, *LPDSDM_UNLOCK;
#endif /* __WINCE_DEFINED_PDSDM_UNLOCK */

/* DSDMP_MSG  [struct; ce-only] */
#ifndef __WINCE_DEFINED__DSDMP_MSG
#define __WINCE_DEFINED__DSDMP_MSG
#ifndef __WINCE_DEFINED_DSDMP_MSG
#define __WINCE_DEFINED_DSDMP_MSG
typedef struct _DSDMP_MSG {
 DWORD dwMsg;
 DWORD dwInstance;
} DSDMP_MSG;
#endif /* __WINCE_DEFINED_DSDMP_MSG */
#endif /* __WINCE_DEFINED__DSDMP_MSG */
#ifndef __WINCE_DEFINED_PDSDMP_MSG
#define __WINCE_DEFINED_PDSDMP_MSG
typedef DSDMP_MSG *PDSDMP_MSG, *LPDSDMP_MSG;
#endif /* __WINCE_DEFINED_PDSDMP_MSG */

#endif /* _DSDRIVER_ */
