/* Tapicomn.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 83 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _TAPICOMN_
#define _TAPICOMN_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400) || (_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 3.0..399, 5.0..699 */

/* TSPI_lineSetStatusMessages  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetStatusMessages(
 HDRVLINE hdLine, 
 DWORD dwLineStates,
 DWORD dwAddressStates 
);

/* TSPI_lineSetTerminal  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetTerminal(
 DRV_REQUESTID dwRequestID, 
 HDRVLINE hdLine, 
 DWORD dwAddressID, 
 HDRVCALL hdCall, 
 DWORD dwSelect, 
 DWORD dwTerminalModes, 
 DWORD dwTerminalID, 
 DWORD bEnable 
);

/* TSPI_lineSetupConference  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetupConference(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 HDRVLINE hdLine, 
 HTAPICALL htConfCall, 
 LPHDRVCALL lphdConfCall, 
 HTAPICALL htConsultCall, 
 LPHDRVCALL lphdConsultCall, 
 DWORD dwNumParties, 
 LPLINECALLPARAMS const lpCallParams 
);

/* TSPI_lineSetupTransfer  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetupTransfer(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 HTAPICALL htConsultCall, 
 LPHDRVCALL lphdConsultCall, 
 LPLINECALLPARAMS const lpCallParams 
);

/* TSPI_lineSwapHold  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSwapHold(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdActiveCall, 
 HDRVCALL hdHeldCall 
);

/* TSPI_lineUnhold  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineUnhold(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall 
);

/* TSPI_phoneClose  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
long TSPIAPI TSPI_phoneClose(
 HDRVPHONE hdPhone 
);

/* TSPI_phoneConfigDialog  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneConfigDialog(
 DWORD dwDeviceID, 
 HWND hwndOwner, 
 LPCWSTR lpszDeviceClass 
);

/* TSPI_phoneDevSpecific  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneDevSpecific(
 DRV_REQUESTID dwRequestID, 
 HDRVPHONE hdPhone, 
 LPVOID lpParams, 
 DWORD dwSize 
);

/* TSPI_phoneGetDevCaps  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetDevCaps(
 DWORD dwDeviceID, 
 DWORD dwTSPIVersion, 
 DWORD dwExtVersion, 
 LPPHONECAPS lpPhoneCaps 
);

/* TSPI_phoneGetExtensionID  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetExtensionID(
 DWORD dwDeviceID, 
 DWORD dwTSPIVersion, 
 LPPHONEEXTENSIONID lpExtensionID 
);

/* TSPI_phoneGetGain  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetGain(
 HDRVPHONE hdPhone, 
 DWORD dwHookSwitchDev, 
 LPDWORD lpdwGain 
);

/* TSPI_phoneGetHookSwitch  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetHookSwitch(
 HDRVPHONE hdPhone, 
 LPDWORD lpdwHookSwitchDevs 
);

/* TSPI_phoneGetIcon  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetIcon(
 DWORD dwDeviceID, 
 LPCWSTR lpszDeviceClass, 
 LPHICON lphIcon 
);

/* TSPI_phoneGetID  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetID(
 HDRVPHONE hdPhone, 
 LPVARSTRING lpDeviceID, 
 LPCWSTR lpszDeviceClass, 
 HANDLE hTargetProcess 
);

/* TSPI_phoneGetRing  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetRing(
 HDRVPHONE hdPhone, 
 LPDWORD lpdwRingMode, 
 LPDWORD lpdwVolume 
);

/* TSPI_phoneGetStatus  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetStatus(
 HDRVPHONE hdPhone, 
 LPPHONESTATUS lpPhoneStatus 
);

/* TSPI_phoneGetVolume  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneGetVolume(
 HDRVPHONE hdPhone, 
 DWORD dwHookSwitchDev, 
 LPDWORD lpdwVolume 
);

/* TSPI_phoneNegotiateExtVersion  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneNegotiateExtVersion(
 DWORD dwDeviceID, 
 DWORD dwTSPIVersion, 
 DWORD dwLowVersion, 
 DWORD dwHighVersion, 
 LPDWORD lpdwExtVersion 
);

/* TSPI_phoneNegotiateTSPIVersion  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneNegotiateTSPIVersion(
 DWORD dwDeviceID, 
 DWORD dwLowVersion, 
 DWORD dwHighVersion, 
 LPDWORD lpdwTSPIVersion 
);

/* TSPI_phoneOpen  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneOpen(
 DWORD dwDeviceID, 
 HTAPIPHONE htPhone, 
 LPHDRVPHONE lphdPhone, 
 DWORD dwTSPIVersion, 
 PHONEEVENT lpfnEventProc
);

/* TSPI_phoneSelectExtVersion  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneSelectExtVersion(
 HDRVPHONE hdPhone, 
 DWORD dwExtVersion 
);

/* TSPI_phoneSetGain  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneSetGain(
 DRV_REQUESTID dwRequestID, 
 HDRVPHONE hdPhone, 
 DWORD dwHookSwitchDev, 
 DWORD dwGain 
);

/* TSPI_phoneSetHookSwitch  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneSetHookSwitch(
 DRV_REQUESTID dwRequestID, 
 HDRVPHONE hdPhone, 
 DWORD dwHookSwitchDevs, 
 DWORD dwHookSwitchMode 
);

/* TSPI_phoneSetRing  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneSetRing(
 DRV_REQUESTID dwRequestID, 
 HDRVPHONE hdPhone, 
 DWORD dwRingMode, 
 DWORD dwVolume 
);

/* TSPI_phoneSetStatusMessages  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneSetStatusMessages(
 HDRVPHONE hdPhone, 
 DWORD dwPhoneStates, 
 DWORD dwButtonModes, 
 DWORD dwButtonStates 
);

/* TSPI_phoneSetVolume  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_phoneSetVolume(
 DRV_REQUESTID dwRequestID, 
 HDRVPHONE hdPhone, 
 DWORD dwHookSwitchDev, 
 DWORD dwVolume 
);

/* TSPI_providerCreateLineDevice  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerCreateLineDevice(
 HKEY hActive, 
 LPCWSTR szDevKey,
 LPCWSTR szDevName 
);

/* TSPI_providerCreatePhoneDevice  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerCreatePhoneDevice(
 HKEY hActive, 
 LPCWSTR szDevKey, 
 LPCWSTR szDevName
);

/* TSPI_providerEnumDevices  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerEnumDevices(
 DWORD dwPermanentProviderID, 
 LPDWORD lpdwNumLines, 
 LPDWORD lpdwNumPhones, 
 HPROVIDER hProvider, 
 LINEEVENT lpfnLineCreateProc, 
 PHONEEVENT lpfnPhoneCreateProc 
);

/* TSPI_providerInit  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerInit(
 DWORD dwTSPIVersion, 
 DWORD dwPermanentProviderID, 
 DWORD dwLineDeviceIDBase, 
 DWORD dwPhoneDeviceIDBase, 
 DWORD_PTR dwNumLines, 
 DWORD_PTR dwNumPhones, 
 ASYNC_COMPLETION lpfnCompletionProc, 
 LPDWORD lpdwTSPIOptions 
);

/* TSPI_providerInstall  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerInstall(
 HWND hwndOwner, 
 DWORD dwPermanentProviderID 
);

/* TSPI_providerRemove  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerRemove(
 HWND hwndOwner, 
 DWORD dwPermanentProviderID 
);

/* TSPI_providerRemoveDevice  [function; ce-only; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerRemoveDevice(
 LPCWSTR lpszDeviceName 
);

/* TSPI_providerShutdown  [function; shared; CE 3.0..399, 5.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_providerShutdown(
 DWORD dwTSPIVersion,
 DWORD dwPermanentProviderID 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 700)) /* CE 3.0..699 */

/* TSPI_lineAccept  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineAccept(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 LPCSTR lpsUserUserInfo, 
 DWORD dwSize 
);

/* TSPI_lineAddToConference  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineAddToConference(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdConfCall, 
 HDRVCALL hdConsultCall 
);

/* TSPI_lineAnswer  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineAnswer(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 LPCSTR lpsUserUserInfo, 
 DWORD dwSize 
);

/* TSPI_lineBlindTransfer  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineBlindTransfer(
 DRV_REQUESTID dwRequestID,
 HDRVCALL hdCall,
 LPCWSTR lpszDestAddress,
 DWORD dwCountryCode
);

/* TSPI_lineClose  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineClose(
 HDRVLINE hdLine 
);

/* TSPI_lineCloseCall  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineCloseCall(
 HDRVCALL hdCall 
);

/* TSPI_lineCompleteTransfer  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineCompleteTransfer(
 DRV_REQUESTID dwRequestID,
 HDRVCALL hdCall,
 HDRVCALL hdConsultCall,
 HTAPICALL htConfCall,
 LPHDRVCALL lphdConfCall,
 DWORD dwTransferMode 
);

/* TSPI_lineConditionalMediaDetection  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineConditionalMediaDetection(
 HDRVLINE hdLine, 
 hdConsultCall dwMediaModes, 
 hdConsultCall const lpCallParams 
);

/* TSPI_lineConfigDialogEdit  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineConfigDialogEdit(
 DWORD dwDeviceID, 
 HWND hwndOwner, 
 LPCWSTR lpszDeviceClass, 
 LPVOID const lpDeviceConfigIn, 
 DWORD dwSize, 
 LPVARSTRING lpDeviceConfigOut 
);

/* TSPI_lineDevSpecific  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineDevSpecific(
 DRV_REQUESTID dwRequestID, 
 HDRVLINE hdLine, 
 DWORD dwAddressID, 
 HDRVCALL hdCall, 
 LPVOID lpParams, 
 DWORD dwSize 
);

/* TSPI_lineDial  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineDial(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 LPCWSTR lpszDestAddress, 
 DWORD dwCountryCode 
);

/* TSPI_lineDrop  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineDrop(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 LPCSTR lpsUserUserInfo, 
 DWORD dwSize 
);

/* TSPI_lineForward  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineForward(
 DRV_REQUESTID dwRequestID, 
 HDRVLINE hdLine, 
 DWORD bAllAddresses, 
 DWORD dwAddressID, 
 LPLINEFORWARDLIST const lpForwardList, 
 DWORD dwNumRingsNoAnswer, 
 HTAPICALL htConsultCall, 
 LPHDRVCALL lphdConsultCall, 
 LPLINECALLPARAMS const lpCallParams 
);

/* TSPI_lineGenerateDigits  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGenerateDigits(
 HDRVCALL hdCall,
 DWORD dwEndToEndID, 
 DWORD dwDigitMode,
 LPCWSTR lpszDigits, 
 DWORD dwDuration 
);

/* TSPI_lineGenerateTone  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGenerateTone(
 HDRVCALL hdCall, 
 DWORD dwEndToEndID, 
 DWORD dwToneMode, 
 DWORD dwDuration, 
 DWORD dwNumTones, 
 LPLINEGENERATETONE const lpTones 
);

/* TSPI_lineGetAddressCaps  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetAddressCaps(
 DWORD dwDeviceID, 
 DWORD dwAddressID, 
 DWORD dwTSPIVersion, 
 DWORD dwExtVersion, 
 LPLINEADDRESSCAPS lpAddressCaps 
);

/* TSPI_lineGetAddressID  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetAddressID(
 HDRVLINE hdLine, 
 LPDWORD lpdwAddressID, 
 DWORD dwAddressMode, 
 LPCWSTR lpsAddress, 
 DWORD dwSize 
);

/* TSPI_lineGetAddressStatus  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetAddressStatus(
 HDRVLINE hdLine, 
 DWORD dwAddressID, 
 LPLINEADDRESSSTATUS lpAddressStatus 
);

/* TSPI_lineGetCallAddressID  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetCallAddressID(
 HDRVCALL hdCall, 
 LPDWORD lpdwAddressID 
);

/* TSPI_lineGetCallInfo  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetCallInfo(
 HDRVCALL hdCall, 
 LPLINECALLINFO lpCallInfo 
);

/* TSPI_lineGetCallStatus  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetCallStatus(
 HDRVCALL hdCall, 
 LPLINECALLSTATUS lpCallStatus 
);

/* TSPI_lineGetDevCaps  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetDevCaps(
 DWORD dwDeviceID, 
 DWORD dwTSPIVersion, 
 DWORD dwExtVersion, 
 LPLINEDEVCAPS lpLineDevCaps 
);

/* TSPI_lineGetDevConfig  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetDevConfig(
 DWORD dwDeviceID, 
 LPVARSTRING lpDeviceConfig, 
 LPCWSTR lpszDeviceClass 
);

/* TSPI_lineGetExtensionID  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetExtensionID(
 DWORD dwDeviceID, 
 DWORD dwTSPIVersion, 
 LPLINEEXTENSIONID lpExtensionID 
);

/* TSPI_lineGetIcon  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetIcon(
 DWORD dwDeviceID, 
 LPCWSTR lpszDeviceClass, 
 LPHICON lphIcon 
);

/* TSPI_lineGetID  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetID(
 HDRVLINE hdLine,
 DWORD dwAddressID,
 HDRVCALL hdCall,
 DWORD dwSelect,
 LPVARSTRING lpDeviceID,
 LPCWSTR lpszDeviceClass, 
 HANDLE hTargetProcess 
);

/* TSPI_lineGetLineDevStatus  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetLineDevStatus(
 HDRVLINE hdLine, 
 LPLINEDEVSTATUS lpLineDevStatus 
);

/* TSPI_lineGetNumAddressIDs  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineGetNumAddressIDs(
 HDRVLINE hdLine, 
 LPDWORD lpdwNumAddressIDs 
);

/* TSPI_lineHold  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineHold(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall 
);

/* TSPI_lineMakeCall  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineMakeCall(
 DRV_REQUESTID dwRequestID, 
 HDRVLINE hdLine, 
 HTAPICALL htCall, 
 LPHDRVCALL lphdCall, 
 LPCWSTR lpszDestAddress, 
 DWORD dwCountryCode, 
 LPLINECALLPARAMS const lpCallParams 
);

/* TSPI_lineMonitorDigits  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineMonitorDigits(
 HDRVCALL hdCall, 
 DWORD dwDigitModes 
);

/* TSPI_lineMonitorMedia  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineMonitorMedia(
 HDRVCALL hdCall, 
 DWORD dwMediaModes 
);

/* TSPI_lineNegotiateExtVersion  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineNegotiateExtVersion(
 DWORD dwDeviceID, 
 DWORD dwTSPIVersion, 
 DWORD dwLowVersion, 
 DWORD dwHighVersion, 
 LPDWORD lpdwExtVersion 
);

/* TSPI_lineNegotiateTSPIVersion  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineNegotiateTSPIVersion(
 DWORD dwDeviceID, 
 DWORD dwLowVersion, 
 DWORD dwHighVersion, 
 LPDWORD lpdwTSPIVersion 
);

/* TSPI_lineOpen  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineOpen(
 DWORD dwDeviceID, 
 HTAPILINE htLine, 
 LPHDRVLINE lphdLine, 
 DWORD dwTSPIVersion, 
 LINEEVENT lpfnEventProc 
);

/* TSPI_linePickup  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_linePickup(
 DRV_REQUESTID dwRequestID, 
 HDRVLINE hdLine, 
 DWORD dwAddressID, 
 HTAPICALL htCall, 
 LPHDRVCALL lphdCall, 
 LPCWSTR lpszDestAddress, 
 LPCWSTR lpszGroupID 
);

/* TSPI_linePrepareAddToConference  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_linePrepareAddToConference(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdConfCall, 
 HTAPICALL htConsultCall, 
 LPHDRVCALL lphdConsultCall, 
 LPLINECALLPARAMS const lpCallParams 
);

/* TSPI_lineRedirect  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineRedirect(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 LPCWSTR lpszDestAddress, 
 DWORD dwCountryCode 
);

/* TSPI_lineReleaseUserUserInfo  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineReleaseUserUserInfo(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall 
);

/* TSPI_lineRemoveFromConference  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineRemoveFromConference(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall 
);

/* TSPI_lineSendUserUserInfo  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSendUserUserInfo(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 LPCSTR lpsUserUserInfo, 
 DWORD dwSize 
);

/* TSPI_lineSetCallParams  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetCallParams(
 DRV_REQUESTID dwRequestID, 
 HDRVCALL hdCall, 
 DWORD dwBearerMode, 
 DWORD dwMinRate, 
 DWORD dwMaxRate, 
 LPLINEDIALPARAMS const lpDialParams
);

/* TSPI_lineSetDefaultMediaDetection  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetDefaultMediaDetection(
 HDRVLINE hdLine, 
 DWORD dwMediaModes 
);

/* TSPI_lineSetDevConfig  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetDevConfig(
 DWORD dwDeviceID, 
 LPVOID const lpDeviceConfig, 
 DWORD dwSize, 
 LPCWSTR lpszDeviceClass 
);

/* TSPI_lineSetMediaMode  [function; shared; CE 3.0..699; Coredll.lib, coredll.lib] */
LONG TSPIAPI TSPI_lineSetMediaMode(
 HDRVCALL hdCall, 
 DWORD dwMediaMode 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ASYNC_COMPLETION  [function, callback; shared; CE 4.0..699; Coredll.lib, coredll.lib] */
ASYNC_COMPLETION Completion_Proc;
void(
 CALLBACK* Completion_Proc)(
 DRV_REQUESTID dwRequestID,
 LONG lResult
);

/* LINEEVENT  [function, callback; shared; CE 4.0..699; Coredll.lib, coredll.lib] */
LINEEVENT Line_Event;
void(
CALLBACK *Line_Event)(
 HTAPILINE htLine,
 HTAPICALL htCall,
 DWORD dwMsg,
 DWORD dwParam1,
 DWORD dwParam2,
 DWORD dwParam3 
);

/* PHONEEVENT  [function, callback; shared; CE 4.0..699; Coredll.lib, coredll.lib] */
PHONEEVENT Phone_Event; 
void(
CALLBACK *Phone_Event)(
 HTAPIPHONE htPhone,
 DWORD dwMsg,
 DWORD dwParam1,
 DWORD dwParam2,
 DWORD dwParam3 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
ASYNC_COMPLETION Completion_Proc;void( CALLBACK* Completion_Proc)( DRV_REQUESTIDdwRequestID, LONGlResult);
LINEEVENT Line_Event;void(CALLBACK *Line_Event)(HTAPILINE htLine,HTAPICALL htCall,DWORD dwMsg,DWORD dwParam1,DWORD dwParam2,DWORD dwParam3 );
PHONEEVENT Phone_Event; void(CALLBACK *Phone_Event)(HTAPIPHONE htPhone,DWORD dwMsg,DWORD dwParam1,DWORD dwParam2,DWORD dwParam3);

#endif /* _TAPICOMN_ */
