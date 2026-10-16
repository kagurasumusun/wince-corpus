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

/* USB_DRIVER_SETTINGS  [struct; ce-only] */
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* LPGET_USBD_VERSION  [callback; ce-only; CE 5.0..699] */
typedef VOID (* LPGET_USBD_VERSION)(
 LPDWORD lpdwMajorVersion,
 LPDWORD lpdwMinorVersion
);

/* LPOPEN_CLIENT_REGISTRY_KEY  [callback; ce-only; CE 5.0..699] */
typedef HKEY (* LPOPEN_CLIENT_REGISTRY_KEY)(
 LPCWSTR szUniqueDriverId
);

/* LPREGISTER_CLIENT_DRIVER_ID  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPREGISTER_CLIENT_DRIVER_ID)(
 LPCWSTR szUniqueDriverId
);

/* LPUN_REGISTER_CLIENT_DRIVER_ID  [callback; ce-only; CE 5.0..699] */
typedef BOOL (* LPUN_REGISTER_CLIENT_DRIVER_ID)(
 LPCWSTR szUniqueDriverId
);
#endif /* _WIN32_WCE */

/* dwInfo4  [extra typedef] */
typedef BOOL (WINAPI *LPDEVICE_NOTIFY_ROUTINE)( LPVOID lpvNotifyParameter, DWORD dwCode, LPDWORD* dwInfo1, LPDWORD* dwInfo2, LPDWORD* dwInfo3, LPDWORD* dwInfo4);

/* lpResumeDevice  [extra struct] */
struct _USB_FUNCS { DWORD dwCount; LPGET_USBD_VERSION lpGetUSBDVersion; LPOPEN_CLIENT_REGISTRY_KEY lpOpenClientRegistyKey; LPREGISTER_NOTIFICATION_ROUTINE lpRegisterNotificationRoutine; LPUN_REGISTER_NOTIFICATION_ROUTINE lpUnRegisterNotificationRoutine; LPLOAD_GENERIC_INTERFACE_DRIVER lpLoadGenericInterfaceDriver; LPTRANSLATE_STRING_DESCR lpTranslateStringDesc; LPFIND_INTERFACE lpFindInterface; LPGET_FRAME_NUMBER lpGetFrameNumber; LPGET_FRAME_LENGTH lpGetFrameLength; LPTAKE_FRAME_LENGTH_CONTROL lpTakeFrameLengthControl; LPRELEASE_FRAME_LENGTH_CONTROL lpReleaseFrameLengthControl; LPSET_FRAME_LENGTH lpSetFrameLength; LPGET_DEVICE_INFO lpGetDeviceInfo; LPISSUE_VENDOR_TRANSFER lpIssueVendorTransfer; LPGET_INTERFACE lpGetInterface; LPSET_INTERFACE lpSetInterface; LPGET_DESCRIPTOR lpGetDescriptor; LPSET_DESCRIPTOR lpSetDescriptor; LPSET_FEATURE lpSetFeature; LPCLEAR_FEATURE lpClearFeature; LPGET_STATUS lpGetStatus; LPSYNC_FRAME lpSyncFrame; LPOPEN_PIPE lpOpenPipe; LPABORT_PIPE_TRANSFERS lpAbortPipeTransfers; LPRESET_PIPE lpResetPipe; LPCLOSE_PIPE lpClosePipe; LPIS_PIPE_HALTED lpIsPipeHalted; LPISSUE_CONTROL_TRANSFER lpIssueControlTransfer; LPISSUE_BULK_TRANSFER lpIssueBulkTransfer; LPISSUE_INTERRUPT_TRANSFER lpIssueInterruptTransfer; LPISSUE_ISOCH_TRANSFER lpIssueIsochTransfer; LPIS_TRANSFER_COMPLETE lpIsTransferComplete; LPGET_TRANSFER_STATUS lpGetTransferStatus; LPGET_ISOCH_RESULTS lpGetIsochResults; LPABORT_TRANSFER lpAbortTransfer; LPCLOSE_TRANSFER lpCloseTransfer; LPRESET_DEFAULT_PIPE lpResetDefaultPipe; LPIS_DEFAULT_PIPE_HALTED lpIsDefaultPipeHalted; LPDISABLE_DEVICE lpDisableDevice; LPSUSPEND_DEVICE lpSuspendDevice; LPRESUME_DEVICE lpResumeDevice;};

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x400) || (_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 2.11..2.12, 3.0..399, 5.0..699 */

/* USBInstallDriver  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
BOOL USBInstallDriver(
 LPCWSTR szDriverLibFile 
);

/* USBUnInstallDriver  [function; ce-only; CE 2.11..2.12, 3.0..399, 5.0..699] */
BOOL USBUnInstallDriver(void);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x211 && _WIN32_WCE < 0x213) || (_WIN32_WCE >= 0x300 && _WIN32_WCE < 0x500)) /* CE 2.11..2.12, 3.0..499 */

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
#endif /* _WIN32_WCE */

#endif /* _USBDI_ */
