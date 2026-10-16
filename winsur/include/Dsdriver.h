/* Dsdriver.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 17 extra decls
 */
#ifndef _DSDRIVER_
#define _DSDRIVER_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DSDM_UNLOCK  [struct; ce-only] */
typedef struct {
 DWORD dwMsg;
 DWORD dwInstance;
 LPVOID pBuffer1;
 DWORD dwCount1;
 LPVOID pBuffer2;
 DWORD dwCount2;
} DSDM_UNLOCK;

/* DSDMP_MSG  [struct; ce-only] */
typedef struct _DSDMP_MSG {
 DWORD dwMsg;
 DWORD dwInstance;
} DSDMP_MSG;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct {
  DWORD dwMsg;
  PDWORD pdwInstance;
  DWORD dwDeviceIndex;
  LPCDSBUFFERDESC pDesc;
} DSDMP_CREATEBUFFER;
typedef struct { DWORD dwMsg;  PDWORD dwInstance; } DSDMP_DELETEBUFFER;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  PDWORD pdwInstance;
} DSDMP_DUPLICATEBUFFER;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  PDWORD pdwPlay;
  PDWORD pdwWrite;
} DSDMP_GETPOSITION;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  LPGUID pGUID;
  ULONG ulPropId;
  PVOID pParams;
  ULONG cbParams;
  PVOID pData;
  ULONG cbData;
  PULONG pcbReturnedData;
} DSDMP_GETPROP;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  PDWORD pdwStatus;
} DSDMP_GETSTATUS;
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
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  DWORD dwFlags;
} DSDMP_PLAY;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  LPGUID pGUID;
  ULONG ulPropId;
  PULONG pulSupport;
} DSDMP_QUERYPROP;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  LPWAVEFORMATEX pWFX;
} DSDMP_SETFORMAT;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  DWORD dwFreq;
} DSDMP_SETFREQUENCY;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  DWORD dwPosition;
} DSDMP_SETPOSITION;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  LPGUID pGUID;
  ULONG ulPropId;
  PVOID pParams;
  ULONG cbParams;
  PVOID pData;
  ULONG cbData;
} DSDMP_SETPROP;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  LONG lVolume;
  LONG lPan;
} DSDMP_SETVOLUMEPAN;
typedef struct {
  DWORD dwMsg;
  DWORD dwInstance;
  DWORD dwCount;
  LPCDSBPOSITIONNOTIFY pDSNP;
} DSDMP_SET_NOTIFICATIONS;
typedef struct { DWORD dwMsg; DWORD dwInstance; } DSDMP_STOP;

#endif /* _DSDRIVER_ */
