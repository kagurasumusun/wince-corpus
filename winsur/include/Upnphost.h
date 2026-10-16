/* Upnphost.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 5 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _UPNPHOST_
#define _UPNPHOST_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IUPnPDeviceControl  [interface; shared; CE 5.0..599; Uuid.lib] */

/* IUPnPEventSink  [interface; shared; CE 5.0..599; Uuid.lib] */

/* IUPnPEventSource  [interface; shared; CE 5.0..599; Uuid.lib] */

/* IUPnPRegistrar  [interface; shared; CE 5.0..599; Uuid.lib] */

/* IUPnPReregistrar  [interface; shared; CE 5.0..599; Uuid.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT GetServiceObject( BSTR bstrUDN, BSTR bstrServiceId, IDispatch** ppdispService );
HRESULT GetUniqueDeviceName( BSTR bstrDeviceIdentifier, BSTR bstrTemplateUDN, BSTR* pbstrUDN );
HRESULT OnStateChanged( DWORD cChanges, DISPID rgdispidChanges[] );
HRESULT OnStateChangedSafe( VARIANT varsadispidChanges );
RegisterRunningDevice(  BSTR bstrXMLDesc,  IUnknown* punkDeviceControl,  BSTR bstrInitString,  BSTR bstrResourcePath,  LONG nLifeTime,  BSTR* pbstrDeviceIdentifier  );
HRESULT ReregisterDevice( BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, BSTR bstrProgIDDeviceControlClass, BSTR bstrInitString, BSTR bstrContainerId, BSTR bstrResourcePath, LONG nLifeTime );
HRESULT ReregisterRunningDevice( BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, IUnknown* punkDeviceControl, BSTR bstrInitString, BSTR bstrResourcePath, LONG nLifeTime );
UnregisterDevice(  BSTR bstrDeviceIdentifier,  BOOL fPermanent  );

#endif /* _UPNPHOST_ */
