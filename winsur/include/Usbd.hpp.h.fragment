/* Usbd.hpp -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 20 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _USBD_HPP_
#define _USBD_HPP_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* ClearFeature  [function; ce-only; CE 2.11..2.12, 3.0..499] */
USB_TRANSFER ClearFeature(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 WORD wFeature,
 UCHAR bIndex 
);

/* ClosePipe  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL ClosePipe(
 USB_PIPE hPipe 
);

/* CloseTransfer  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL CloseTransfer(
 USB_TRANSFER hTransfer 
);

/* FindInterface  [function; ce-only; CE 2.11..2.12, 3.0..499] */
LPCUSB_INTERFACE FindInterface(
 LPCUSB_DEVICE lpDeviceInfo,
 UCHAR bInterfaceNumber,
 UCHAR bAlternateSetting 
);

/* GetDescriptor  [function; ce-only; CE 2.11..2.12, 3.0..499] */
USB_TRANSFER GetDescriptor(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 UCHAR bType,
 UCHAR bIndex,
 WORD wLanguage,
 WORD wLength,
 LPVOID lpvBuffer 
);

/* GetDeviceInfo  [function; ce-only; CE 2.11..2.12, 3.0..499; Usbd_lib.lib] */
LPCUSB_DEVICE GetDeviceInfo(
 USB_HANDLE hDevice 
);

/* GetFrameLength  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL GetFrameLength(
 USB_HANDLE hDevice,
 LPUSHORT lpuFrameLength 
);

/* GetFrameNumber  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL GetFrameNumber(
 USB_HANDLE hDevice,
 LPDWORD lpdwFrameNumber 
);

/* GetIsochResults  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL GetIsochResults(
 USB_TRANSFER hTransfer,
 DWORD cFrames,
 LPDWORD lpdwBytesTransferred,
 LPDWORD lpdwErrors 
);

/* IsDefaultPipeHalted  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL IsDefaultPipeHalted(
 USB_HANDLE hDevice,
 LPBOOL lpbHalted 
);

/* IsPipeHalted  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL IsPipeHalted(
 USB_PIPE hPipe,
 LPBOOL lpbHalted 
);

/* IssueControlTransfer  [function; ce-only; CE 2.11..2.12, 3.0..499] */
USB_TRANSFER IssueControlTransfer(
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 NPCUSB_DEVICE_REQUEST lpvControlHeader,
 DWORD dwBufferSize,
 LPVOID lpvBuffer,
 ULONG uBufferPhysicalAddress 
);

/* IssueIsochTransfer  [function; ce-only; CE 2.11..2.12, 3.0..499] */
USB_TRANSFER IssueIsochTransfer(
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 DWORD dwStartingFrame,
 DWORD dwFrames,
 LPCDWORD lpdwLengths,
 LPVOID lpvBuffer,
 ULONG uBufferPhysicalAddress 
);

/* IsTransferComplete  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL IsTransferComplete(
 USB_TRANSFER hTransfer 
);

/* LoadGenericInterfaceDriver  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL LoadGenericInterfaceDriver(
 USB_HANDLE hDevice,
 LPCUSB_INTERFACE lpInterface 
);

/* OpenPipe  [function; ce-only; CE 2.11..2.12, 3.0..499] */
USB_PIPE OpenPipe(
 USB_HANDLE hDevice,
 LPCUSB_ENDPOINT_DESCRIPTOR lpEndpointDescriptor 
);

/* RegisterNotificationRoutine  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL RegisterNotificationRoutine(
 USB_HANDLE hDevice,
 LPDEVICE_NOTIFY_ROUTINE lpNotifyRoutine,
 LPVOID lpvNotifyParameter 
);

/* ReleaseFrameLengthControl  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL ReleaseFrameLengthControl(
 USB_HANDLE hDevice 
);

/* ResetDefaultPipe  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL ResetDefaultPipe(
 USB_HANDLE hDevice 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..699 */

/* GetInterface  [function; ce-only; CE 2.11..2.12, 3.0..699] */
HRESULT GetInterface(
 LPUNKNOWN pUnk,
 void** ppv
);
#endif /* _WIN32_WCE */

#endif /* _USBD_HPP_ */
