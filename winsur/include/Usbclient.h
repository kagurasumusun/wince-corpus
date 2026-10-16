/* Usbclient.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _USBCLIENT_
#define _USBCLIENT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* REG_VALUE_DESCR  [struct; ce-only; CE 5.0..699] */
typedef struct _REG_VALUE_DESCR {
 LPWSTR Name;
 DWORD Type;
 DWORD Size;
 PBYTE Data;
} REG_VALUE_DESCR, *PREG_VALUE_DESCR;

/* REMOVE_LOCK  [struct; ce-only; CE 5.0..699] */
typedef struct _REMOVE_LOCK {
 BOOL Removed;
 LONG IoCount;
 HANDLE RemoveEvent;
} REMOVE_LOCK, *PREMOVE_LOCK;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* AbortTransfer  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
BOOL AbortTransfer(
 LPCUSB_FUNCS pUsbFuncs,
 USB_TRANSFER hTransfer,
 DWORD dwFlags 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* GetStatus  [function; ce-only; CE 2.11..2.12, 3.0..699] */
DWORD GetStatus(
 LPCUSB_FUNCS pUsbFuncs,
 HANDLE hUsbDevice,
 LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
 PVOID NotifyContext,
 DWORD dwFlags,
 UCHAR bIndex,
 LPWORD lpwStatus,
 DWORD dwTimeout
);

/* GetTransferStatus  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL GetTransferStatus(
 LPCUSB_FUNCS UsbFuncs,
 USB_TRANSFER hTransfer,
 LPDWORD pBytesTransferred,
 PUSB_ERROR pUsbError
);

/* IssueBulkTransfer  [function; ce-only; CE 2.11..2.12, 3.0..699] */
DWORD IssueBulkTransfer(
 LPCUSB_FUNCS UsbFuncs, 
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
 PVOID NotifyContext,
 DWORD Flags,
 LPVOID pBuffer,
 ULONG PhysAddr,
 DWORD BufferLength,
 LPDWORD pBytesTransferred,
 DWORD dwTimeout, 
 PUSB_ERROR pUsbRc
);

/* IssueInterruptTransfer  [function; ce-only; CE 2.11..2.12, 3.0..699] */
DWORD IssueInterruptTransfer( 
 LPCUSB_FUNCS UsbFuncs,
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
 PVOID NotifyContext,
 DWORD Flags,
 LPVOID pBuffer,
 ULONG PhysAddr,
 DWORD BufferLength,
 LPDWORD pBytesTransferred,
 DWORD dwTimeout,
 PUSB_ERROR pUsbRc
);

/* IssueVendorTransfer  [function; ce-only; CE 2.11..2.12, 3.0..699] */
DWORD IssueVendorTransfer(
 LPCUSB_FUNCS UsbFuncs,
 HANDLE hUsbDevice,
 LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
 PVOID NotifyContext,
 DWORD Flags,
 PUSB_DEVICE_REQUEST pControlHeader,
 LPVOID pBuf,
 ULONG PhysAddr,
 LPDWORD pBytesTransferred,
 DWORD dwTimeout,
 PUSB_ERROR pUsbRc
);

/* ResetPipe  [function; ce-only; CE 2.11..2.12, 3.0..699] */
BOOL ResetPipe(
 LPCUSB_FUNCS pUsbFuncs,
 USB_PIPE hPipe,
 DWORD dwFlags
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* AcquireRemoveLock  [function; ce-only; CE 5.0..699] */
DWORD AcquireRemoveLock(
 IN PREMOVE_LOCK Lock,
 IN OPTIONAL PVOID Tag
);

/* ClearOrSetFeature  [function; ce-only; CE 5.0..699] */
DWORD ClearOrSetFeature(
 LPCUSB_FUNCS UsbFuncs,
 HANDLE hUsbDevice,
 LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
 PVOID NotifyContext,
 DWORD dwFlags, 
 WORD wFeature,
 UCHAR bIndex,
 DWORD dwTimeout,
 BOOL bSet
);

/* CloseTransferHandle  [function; ce-only; CE 5.0..699] */
BOOL CloseTransferHandle(
 LPCUSB_FUNCS UsbFuncs,
 USB_TRANSFER hTransfer
);

/* DefaultTransferComplete  [function; ce-only; CE 5.0..699] */
DWORD DefaultTransferComplete(
 PVOID Context
);

/* GetSetKeyValues  [function; ce-only; CE 5.0..699] */
BOOL GetSetKeyValues(
 LPCTSTR KeyName,
 PREG_VALUE_DESCR ValDesc,
 BOOL bSet,
 BOOL bOverwrite
);

/* InitializeRemoveLock  [function; ce-only; CE 5.0..699] */
BOOL InitializeRemoveLock(
 IN PREMOVE_LOCK Lock
);

/* ReleaseRemoveLock  [function; ce-only; CE 5.0..699] */
VOID ReleaseRemoveLock(
 IN PREMOVE_LOCK Lock,
 IN OPTIONAL PVOID Tag
);

/* ReleaseRemoveLockAndWait  [function; ce-only; CE 5.0..699] */
VOID ReleaseRemoveLockAndWait(
 IN PREMOVE_LOCK Lock,
 IN OPTIONAL PVOID Tag
);

/* ResetBulkEndpoint  [function; ce-only; CE 5.0..699] */
DWORD ResetBulkEndpoint(
 LPCUSB_FUNCS pUsbFuncs,
 HANDLE hUsbDevice,
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
 PVOID NotifyContext,
 UCHAR bIndex,
 DWORD dwTimeout
);

/* ResetDefaultEndpoint  [function; ce-only; CE 5.0..699] */
DWORD ResetDefaultEndpoint(
 LPCUSB_FUNCS UsbFuncs,
 HANDLE hUsbDevice
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _REG_VALUE_DESCR { LPWSTR Name; DWORD Type; DWORD Size; PBYTE Data;} REG_VALUE_DESCR, *PREG_VALUE_DESCR;
typedef struct _REMOVE_LOCK { BOOL Removed; LONG IoCount; HANDLE RemoveEvent;} REMOVE_LOCK, *PREMOVE_LOCK;

#endif /* _USBCLIENT_ */
