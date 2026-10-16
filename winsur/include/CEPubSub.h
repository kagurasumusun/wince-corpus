/* CEPubSub.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 5 extra decls
 */
#ifndef _CEPUBSUB_
#define _CEPUBSUB_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 420 && _WIN32_WCE < 600)) /* CE 4.2..599 */

/* IPublisher::Control  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT Control( 
 DWORD dwControl, 
 DWORD dwBufSize, 
 BYTE* pbData 
);

/* IPublisherManagement::Initialize  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT Initialize( 
 ISubscriber* pSubscriber, 
 BOOL* pbUseBuffering, 
 DWORD* pdwBufSize 
);

/* IPublisherManagement::StartPublishing  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT StartPublishing();

/* IPublisherManagement::StopPublishing  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT StopPublishing();

/* IPublishSubscribeMgr::Subscribe  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT Subscribe( 
 GUID PlatformID, 
 GUID DeviceID, 
 GUID PublisherID, 
 ISubscriber* pSubscriber, 
 IPublisher** ppPublisher, 
 GUID* pCookieID 
);

/* IPublishSubscribeMgr::Unsubscribe  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT Unsubscribe(GUID cookieID);

/* ISubscriber::Notify  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT Notify(DWORD dwEventCode,DWORD dwFlags);

/* ISubscriber::Write  [function; ce-only; CE 4.2..599; Rts.lib] */
HRESULT Write(DWORD dwBufSize,BYTE* pbData);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT Control( DWORD dwControl, DWORD dwBufSize, BYTE* pbData );
HRESULT StartPublishing();
HRESULT StopPublishing();
HRESULT Subscribe( GUID PlatformID, GUID DeviceID, GUID PublisherID, ISubscriber* pSubscriber, IPublisher** ppPublisher, GUID* pCookieID );
HRESULT Unsubscribe( GUID cookieID );

#endif /* _CEPUBSUB_ */
