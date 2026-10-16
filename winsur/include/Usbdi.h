/* Usbdi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 13 constants, 55 declarations, 0 outlines, 0 base types, 0 extra macros, 6 extra decls
 */
#ifndef _USBDI_
#define _USBDI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define USB_BIT_STUFFING_ERROR 0x00000002
#define USB_BUFFER_OVERRUN_ERROR 0x0000000C
#define USB_BUFFER_UNDERRUN_ERROR 0x0000000D
#define USB_CRC_ERROR 0x00000001
#define USB_DATA_OVERRUN_ERROR 0x00000008
#define USB_DATA_TOGGLE_MISMATCH_ERROR 0x00000003
#define USB_DATA_UNDERRUN_ERROR 0x00000009
#define USB_DEVICE_NOT_RESPONDING_ERROR 0x00000005
#define USB_NO_ERROR 0x00000000
#define USB_NOT_COMPLETE_ERROR 0x00000103
#define USB_PID_CHECK_FAILURE_ERROR 0x00000006
#define USB_STALL_ERROR 0x00000004
#define USB_UNEXPECTED_PID_ERROR 0x00000007

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* USB_DRIVER_SETTINGS  [struct; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
typedef struct {
 DWORD dwCount;
 DWORD dwVendorId;
 DWORD dwProductId;
 DWORD dwReleaseNumber;
 DWORD dwDeviceClass;
 DWORD dwDeviceSubClass;
 DWORD dwDeviceProtocol;
 DWORD dwInterfaceClass;
 DWORD dwInterfaceSubClass;
 DWORD dwInterfaceProtocol;
} USB_DRIVER_SETTINGS;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* LPABORT_PIPE_TRANSFERS  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPABORT_PIPE_TRANSFERS)(
 USB_PIPE hPipe,
 DWORD dwFlags
);

/* LPABORT_TRANSFER  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPABORT_TRANSFER)(
 USB_TRANSFER hTransfer,
 DWORD dwFlags
);

/* LPCLEAR_FEATURE  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPCLEAR_FEATURE)(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 WORD wFeature,
 UCHAR bIndex
);

/* LPCLOSE_PIPE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPCLOSE_PIPE)(
 USB_PIPE hPipe
);

/* LPCLOSE_TRANSFER  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPCLOSE_TRANSFER)(
 USB_TRANSFER hTransfer
);

/* LPDEVICE_NOTIFY_ROUTINE  [typedef; ce-only; CE 5.0..699] */
typedef BOOL (WINAPI *LPDEVICE_NOTIFY_ROUTINE)(
 LPVOID lpvNotifyParameter,
 DWORD dwCode,
 LPDWORD* dwInfo1,
 LPDWORD* dwInfo2,
 LPDWORD* dwInfo3,
 LPDWORD* dwInfo4
);

/* LPDISABLE_DEVICE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPDISABLE_DEVICE)(
 USB_HANDLE hDevice ,
 BOOL fResetDevice ,
 UCHAR bInterfaceNumber
);

/* LPFIND_INTERFACE  [callback; ce-only; CE 5.0..699] */
typedef LPCUSB_INTERFACE (* LPFIND_INTERFACE)(
 LPCUSB_DEVICE lpDeviceInfo,
 UCHAR bInterfaceNumber,
 UCHAR bAlternateSetting
);

/* LPGET_DESCRIPTOR  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPGET_DESCRIPTOR)(
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

/* LPGET_DEVICE_INFO  [callback; ce-only; CE 5.0..699] */
typedef LPCUSB_DEVICE (* LPGET_DEVICE_INFO)(
 USB_HANDLE hDevice
);

/* LPGET_FRAME_LENGTH  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPGET_FRAME_LENGTH)(
USB_HANDLE hDevice,
LPUSHORT lpuFrameLength
);

/* LPGET_FRAME_NUMBER  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPGET_FRAME_NUMBER)(
 USB_HANDLE hDevice,
 LPDWORD lpdwFrameNumber
);

/* LPGET_INTERFACE  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPGET_INTERFACE)(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 UCHAR bInterfaceNumber,
 PUCHAR lpbAlternateSetting
);

/* LPGET_ISOCH_RESULTS  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPGET_ISOCH_RESULTS)(
 USB_TRANSFER hTransfer,
 DWORD cFrames,
 LPDWORD lpdwBytesTransferred,
 LPDWORD lpdwErrors
);

/* LPGET_STATUS  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPGET_STATUS)(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 UCHAR bIndex,
 LPWORD lpwStatus
);

/* LPGET_TRANSFER_STATUS  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPGET_TRANSFER_STATUS)(
 USB_TRANSFER hTransfer, 
 LPDWORD lpdwBytesTransferred, 
 LPDWORD lpdwError
);

/* LPGET_USBD_VERSION  [callback; ce-only; CE 5.0..699] */
typedef VOID (* LPGET_USBD_VERSION)(
 LPDWORD lpdwMajorVersion,
 LPDWORD lpdwMinorVersion
);

/* LPIS_DEFAULT_PIPE_HALTED  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPIS_DEFAULT_PIPE_HALTED)(
 USB_HANDLE hDevice,
 LPBOOL lpbHalted
);

/* LPIS_PIPE_HALTED  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPIS_PIPE_HALTED)(
 USB_PIPE hPipe,
 LPBOOL lpbHalted
);

/* LPIS_TRANSFER_COMPLETE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPIS_TRANSFER_COMPLETE)(
 USB_TRANSFER hTransfer
);

/* LPISSUE_BULK_TRANSFER  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPISSUE_BULK_TRANSFER)(
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE NotifyRoutine,
 LPVOID NotifyContext,
 DWORD Flags,
 DWORD BufferLength, 
 LPVOID pBuffer,
 ULONG PhysAddr
);

/* LPISSUE_CONTROL_TRANSFER  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPISSUE_CONTROL_TRANSFER)(
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 LPCVOID lpvControlHeader,
 DWORD dwBufferSize,
 LPVOID lpvBuffer,
 ULONG uBufferPhysicalAddress
);

/* LPISSUE_INTERRUPT_TRANSFER  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPISSUE_INTERRUPT_TRANSFER)(
 USB_PIPE hPipe,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter, 
 DWORD dwFlags, 
 DWORD dwBufferSize,
 LPVOID lpvBuffer, 
 ULONG uBufferPhysicalAddress 
);

/* LPISSUE_ISOCH_TRANSFER  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPISSUE_ISOCH_TRANSFER)(
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

/* LPISSUE_VENDOR_TRANSFER  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPISSUE_VENDOR_TRANSFER)(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter, 
 DWORD dwFlags,
 LPCUSB_DEVICE_REQUEST lpControlHeader,
 LPVOID lpvBuffer,
 ULONG uBufferPhysicalAddress
);

/* LPLOAD_GENERIC_INTERFACE_DRIVER  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPLOAD_GENERIC_INTERFACE_DRIVER)(
 USB_HANDLE hDevice,
 LPCUSB_INTERFACE lpInterface
);

/* LPOPEN_CLIENT_REGISTRY_KEY  [callback; ce-only; CE 5.0..699] */
typedef HKEY (* LPOPEN_CLIENT_REGISTRY_KEY)(
 LPCWSTR szUniqueDriverId
);

/* LPOPEN_PIPE  [callback; ce-only; CE 5.0..699] */
typedef USB_PIPE (* LPOPEN_PIPE)(
 USB_HANDLE hDevice,
 LPCUSB_ENDPOINT_DESCRIPTOR lpEndpointDescriptor
);

/* LPREGISTER_CLIENT_DRIVER_ID  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPREGISTER_CLIENT_DRIVER_ID)(
 LPCWSTR szUniqueDriverId
);

/* LPREGISTER_CLIENT_SETTINGS  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPREGISTER_CLIENT_SETTINGS)(
 LPCWSTR szDriverLibFile, 
 LPCWSTR szUniqueDriverId, 
 LPCWSTR szReserved,
 LPCUSB_DRIVER_SETTINGS lpDriverSettings
);

/* LPREGISTER_NOTIFICATION_ROUTINE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPREGISTER_NOTIFICATION_ROUTINE)(
 USB_HANDLE hDevice,
 LPDEVICE_NOTIFY_ROUTINE lpNotifyRoutine,
 LPVOID lpvNotifyParameter
);

/* LPRELEASE_FRAME_LENGTH_CONTROL  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPRELEASE_FRAME_LENGTH_CONTROL)(
 USB_HANDLE hDevice
);

/* LPRESET_DEFAULT_PIPE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPRESET_DEFAULT_PIPE)(
 USB_HANDLE hDevice
);

/* LPRESET_PIPE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPRESET_PIPE)(
 USB_PIPE hPipe 
);

/* LPRESUME_DEVICE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPRESUME_DEVICE)(
 USB_HANDLE hDevice ,
 UCHAR bInterfaceNumber 
);

/* LPSET_DESCRIPTOR  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPSET_DESCRIPTOR)(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter, 
 DWORD dwFlags, 
 UCHAR bType, 
 UCHAR bIndex, 
 WORD wLanguage,
 WORD wLength,
 PVOID lpvBuffer
);

/* LPSET_FEATURE  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPSET_FEATURE)(
 USB_HANDLE hDevice, 
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter, 
 DWORD dwFlags, 
 WORD wFeature, 
 UCHAR bIndex
);

/* LPSET_FRAME_LENGTH  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPSET_FRAME_LENGTH)(
 USB_HANDLE hDevice, 
 HANDLE hEvent, 
 USHORT uFrameLength
);

/* LPSET_INTERFACE  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPSET_INTERFACE)(
 USB_HANDLE hDevice,
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 UCHAR bInterfaceNumber,
 UCHAR bAlternateSetting
);

/* LPSUSPEND_DEVICE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPSUSPEND_DEVICE)(
 USB_HANDLE hDevice ,
 UCHAR bInterfaceNumber 
);

/* LPSYNC_FRAME  [callback; ce-only; CE 5.0..699] */
typedef USB_TRANSFER (* LPSYNC_FRAME)(
 USB_HANDLE hDevice, 
 LPTRANSFER_NOTIFY_ROUTINE lpStartAddress, 
 LPVOID lpvNotifyParameter,
 DWORD dwFlags,
 UCHAR bEndpoint, 
 LPWORD lpwFrame
);

/* LPTAKE_FRAME_LENGTH_CONTROL  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPTAKE_FRAME_LENGTH_CONTROL)(
 USB_HANDLE hDevice
);

/* LPTRANSLATE_STRING_DESCR  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPTRANSLATE_STRING_DESCR)(
 LPCUSB_STRING_DESCRIPTOR lpStringDescr,
 LPWSTR szString,
 DWORD cchStringLength
);

/* LPUN_REGISTER_CLIENT_DRIVER_ID  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPUN_REGISTER_CLIENT_DRIVER_ID)(
 LPCWSTR szUniqueDriverId
);

/* LPUN_REGISTER_CLIENT_SETTINGS  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPUN_REGISTER_CLIENT_SETTINGS)(
 LPCWSTR szUniqueDriverId,
 LPCWSTR szReserved, 
 LPCUSB_DRIVER_SETTINGS lpDriverSettings
);

/* LPUN_REGISTER_NOTIFICATION_ROUTINE  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPUN_REGISTER_NOTIFICATION_ROUTINE)(
 USB_HANDLE hDevice,
 LPDEVICE_NOTIFY_ROUTINE lpNotifyRoutine,
 LPVOID lpvNotifyParameter
);

/* USB_FUNCS  [struct; ce-only; CE 5.0..699] */
struct _USB_FUNCS {
 DWORD dwCount;
 LPGET_USBD_VERSION lpGetUSBDVersion;
 LPOPEN_CLIENT_REGISTRY_KEY lpOpenClientRegistyKey;
 LPREGISTER_NOTIFICATION_ROUTINE lpRegisterNotificationRoutine;
 LPUN_REGISTER_NOTIFICATION_ROUTINE lpUnRegisterNotificationRoutine;
 LPLOAD_GENERIC_INTERFACE_DRIVER lpLoadGenericInterfaceDriver;
 LPTRANSLATE_STRING_DESCR lpTranslateStringDesc;
 LPFIND_INTERFACE lpFindInterface;
 LPGET_FRAME_NUMBER lpGetFrameNumber;
 LPGET_FRAME_LENGTH lpGetFrameLength;
 LPTAKE_FRAME_LENGTH_CONTROL lpTakeFrameLengthControl;
 LPRELEASE_FRAME_LENGTH_CONTROL lpReleaseFrameLengthControl;
 LPSET_FRAME_LENGTH lpSetFrameLength;
 LPGET_DEVICE_INFO lpGetDeviceInfo;
 LPISSUE_VENDOR_TRANSFER lpIssueVendorTransfer;
 LPGET_INTERFACE lpGetInterface;
 LPSET_INTERFACE lpSetInterface;
 LPGET_DESCRIPTOR lpGetDescriptor;
 LPSET_DESCRIPTOR lpSetDescriptor;
 LPSET_FEATURE lpSetFeature;
 LPCLEAR_FEATURE lpClearFeature;
 LPGET_STATUS lpGetStatus;
 LPSYNC_FRAME lpSyncFrame;
 LPOPEN_PIPE lpOpenPipe;
 LPABORT_PIPE_TRANSFERS lpAbortPipeTransfers;
 LPRESET_PIPE lpResetPipe;
 LPCLOSE_PIPE lpClosePipe;
 LPIS_PIPE_HALTED lpIsPipeHalted;
 LPISSUE_CONTROL_TRANSFER lpIssueControlTransfer;
 LPISSUE_BULK_TRANSFER lpIssueBulkTransfer;
 LPISSUE_INTERRUPT_TRANSFER lpIssueInterruptTransfer;
 LPISSUE_ISOCH_TRANSFER lpIssueIsochTransfer;
 LPIS_TRANSFER_COMPLETE lpIsTransferComplete;
 LPGET_TRANSFER_STATUS lpGetTransferStatus;
 LPGET_ISOCH_RESULTS lpGetIsochResults;
 LPABORT_TRANSFER lpAbortTransfer;
 LPCLOSE_TRANSFER lpCloseTransfer;
 LPRESET_DEFAULT_PIPE lpResetDefaultPipe;
 LPIS_DEFAULT_PIPE_HALTED lpIsDefaultPipeHalted;
 LPDISABLE_DEVICE lpDisableDevice;
 LPSUSPEND_DEVICE lpSuspendDevice;
 LPRESUME_DEVICE lpResumeDevice;
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* USBDeviceAttach  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
BOOL USBDeviceAttach(
 USB_HANDLE hDevice,
 LPCUSB_FUNCS lpUsbFuncs,
 LPCUSB_INTERFACE lpInterface,
 LPCWSTR szUniqueDriverId,
 LPBOOL fAcceptControl,
 LPCUSB_DRIVER_SETTINGS lpDriverSettings,
 DWORD dwUnused 
);

/* USBInstallDriver  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
BOOL USBInstallDriver(
 LPCWSTR szDriverLibFile 
);

/* USBUnInstallDriver  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
BOOL USBUnInstallDriver(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* GetUSBDVersion  [function; ce-only; CE 2.11..2.12, 3.0..499; Usbd.lib] */
VOID GetUSBDVersion(
 LPDWORD lpdwMajorVersion,
 LPDWORD lpdwMinorVersion 
);

/* OpenClientRegistryKey  [function; ce-only; CE 2.11..2.12, 3.0..499] */
HKEY OpenClientRegistryKey(
 LPCWSTR szUniqueDriverId 
);

/* RegisterClientDriverID  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL RegisterClientDriverID(
 LPCWSTR szUniqueDriverId 
);

/* RegisterClientSettings  [function; ce-only; CE 2.11..2.12, 3.0..499] */
BOOL RegisterClientSettings(
 LPCWSTR szDriverLibFile,
 LPCWSTR szUniqueDriverId,
 LPCWSTR szReserved,
 LPCUSB_DRIVER_SETTINGS lpDriverSettings 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef BOOL (WINAPI *LPDEVICE_NOTIFY_ROUTINE)( LPVOID lpvNotifyParameter, DWORD dwCode, LPDWORD* dwInfo1, LPDWORD* dwInfo2, LPDWORD* dwInfo3, LPDWORD* dwInfo4);

/* struct */
struct _USB_FUNCS { DWORD dwCount; LPGET_USBD_VERSION lpGetUSBDVersion; LPOPEN_CLIENT_REGISTRY_KEY lpOpenClientRegistyKey; LPREGISTER_NOTIFICATION_ROUTINE lpRegisterNotificationRoutine; LPUN_REGISTER_NOTIFICATION_ROUTINE lpUnRegisterNotificationRoutine; LPLOAD_GENERIC_INTERFACE_DRIVER lpLoadGenericInterfaceDriver; LPTRANSLATE_STRING_DESCR lpTranslateStringDesc; LPFIND_INTERFACE lpFindInterface; LPGET_FRAME_NUMBER lpGetFrameNumber; LPGET_FRAME_LENGTH lpGetFrameLength; LPTAKE_FRAME_LENGTH_CONTROL lpTakeFrameLengthControl; LPRELEASE_FRAME_LENGTH_CONTROL lpReleaseFrameLengthControl; LPSET_FRAME_LENGTH lpSetFrameLength; LPGET_DEVICE_INFO lpGetDeviceInfo; LPISSUE_VENDOR_TRANSFER lpIssueVendorTransfer; LPGET_INTERFACE lpGetInterface; LPSET_INTERFACE lpSetInterface; LPGET_DESCRIPTOR lpGetDescriptor; LPSET_DESCRIPTOR lpSetDescriptor; LPSET_FEATURE lpSetFeature; LPCLEAR_FEATURE lpClearFeature; LPGET_STATUS lpGetStatus; LPSYNC_FRAME lpSyncFrame; LPOPEN_PIPE lpOpenPipe; LPABORT_PIPE_TRANSFERS lpAbortPipeTransfers; LPRESET_PIPE lpResetPipe; LPCLOSE_PIPE lpClosePipe; LPIS_PIPE_HALTED lpIsPipeHalted; LPISSUE_CONTROL_TRANSFER lpIssueControlTransfer; LPISSUE_BULK_TRANSFER lpIssueBulkTransfer; LPISSUE_INTERRUPT_TRANSFER lpIssueInterruptTransfer; LPISSUE_ISOCH_TRANSFER lpIssueIsochTransfer; LPIS_TRANSFER_COMPLETE lpIsTransferComplete; LPGET_TRANSFER_STATUS lpGetTransferStatus; LPGET_ISOCH_RESULTS lpGetIsochResults; LPABORT_TRANSFER lpAbortTransfer; LPCLOSE_TRANSFER lpCloseTransfer; LPRESET_DEFAULT_PIPE lpResetDefaultPipe; LPIS_DEFAULT_PIPE_HALTED lpIsDefaultPipeHalted; LPDISABLE_DEVICE lpDisableDevice; LPSUSPEND_DEVICE lpSuspendDevice; LPRESUME_DEVICE lpResumeDevice;};

/* callback */
typedef LPCUSB_DEVICE (* LPGET_DEVICE_INFO)( USB_HANDLE hDevice);
typedef LPCUSB_INTERFACE (* LPFIND_INTERFACE)( LPCUSB_DEVICE lpDeviceInfo, UCHAR bInterfaceNumber, UCHAR bAlternateSetting);
typedef USB_PIPE (* LPOPEN_PIPE)( USB_HANDLE hDevice, LPCUSB_ENDPOINT_DESCRIPTOR lpEndpointDescriptor);
typedef USB_TRANSFER (* LPCLEAR_FEATURE)( USB_HANDLE hDevice, LPTRANSFER_NOTIFY_ROUTINE lpStartAddress, LPVOID lpvNotifyParameter, DWORD dwFlags, WORD wFeature, UCHAR bIndex);

#endif /* _USBDI_ */
