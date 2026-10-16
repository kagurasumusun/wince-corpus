/* Device.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 13 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _DEVICE_
#define _DEVICE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPMRemoteDevice::AddProperty  [function; ce-only; CE 4.2..599] */
HRESULT AddProperty( 
 BSTR bstrLinkName, 
 BSTR bstrPropId, 
 IPMProperty** ppiProperty 
);

/* IPMRemoteDevice::Attach  [function; ce-only; CE 4.2..599] */
HRESULT Attach( 
 BSTR bstrProcessName, 
 long dwTimeOut, 
 VARIANT vtProcessId, 
 IPMConnection** ppiConnection 
);

/* IPMRemoteDevice::ConfigureStartupServer  [function; ce-only; CE 4.2..599] */
HRESULT ConfigureStartupServer(VARIANT hWnd);

/* IPMRemoteDevice::ConfigureTransport  [function; ce-only; CE 4.2..599] */
HRESULT ConfigureTransport(VARIANT hWnd);

/* IPMRemoteDevice::DeleteProperty  [function; ce-only; CE 4.2..599] */
HRESULT DeleteProperty( 
 BSTR bstrPropId 
);

/* IPMRemoteDevice::EnumProperties  [function; ce-only; CE 4.2..599] */
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);

/* IPMRemoteDevice::GetConnection  [function; ce-only; CE 4.2..599] */
HRESULT GetConnection(BSTR bstrConnectId,IPMConnection** ppiConnection);

/* IPMRemoteDevice::GetProperty  [function; ce-only; CE 4.2..599] */
HRESULT GetProperty(BSTR bstrPropId,IPMProperty** ppiProperty);

/* IPMRemoteDevice::Id  [function; ce-only; CE 4.2..599] */
HRESULT Id(BSTR* pbstrDeviceId);

/* IPMRemoteDevice::Name  [function; ce-only; CE 4.2..599] */
HRESULT Name(BSTR bstrDeviceName);

/* IPMRemoteDevice::StartupServer  [function; ce-only; CE 4.2..599] */
HRESULT StartupServer(BSTR* pbstrStartupServerId);

/* IPMRemoteDevice::Transport  [function; ce-only; CE 4.2..599] */
HRESULT Transport(BSTR* pbstrTransportId);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IPMRemoteDevice::Platform  [function; ce-only; CE 5.0..599] */
HRESULT Platform(IPMPlatform** ppiPlatform);
#endif /* _WIN32_WCE */

#endif /* _DEVICE_ */
