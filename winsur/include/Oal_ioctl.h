/* Oal_ioctl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 12 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _OAL_IOCTL_
#define _OAL_IOCTL_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* OALIoCtlHalDDI  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalDDI(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalGetDeviceId  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalGetDeviceId(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalGetDeviceInfo  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalGetDeviceInfo(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalGetHWEntropy  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalGetHWEntropy(
 UINT32 dwIOControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalGetRandomSeed  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalGetRandomSeed(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalGetRegSecureKeys  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalGetRegSecureKeys(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 lpOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalGetUUID  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalGetUUID (
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalInitRegistry  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalInitRegistry(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalReboot  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalReboot(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlHalUpdateMode  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlHalUpdateMode(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);

/* OALIoCtlProcessorInfo  [function; ce-only; CE 5.0..699] */
BOOL OALIoCtlProcessorInfo(
 UINT32 dwIoControlCode,
 VOID* lpInBuf,
 UINT32 nInBufSize,
 VOID* lpOutBuf,
 UINT32 nOutBufSize,
 UINT32* lpBytesReturned
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct { UINT32 code; UINT32 flags; BOOL (*pfnHandler) (UINT32, VOID*, UINT32, VOID*, UINT32, UINT32*);} OAL_IOCTL_HANDLER, *POAL_IOCTL_HANDLER;

#endif /* _OAL_IOCTL_ */
