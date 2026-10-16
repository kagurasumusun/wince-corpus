/* rtccore.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 0 outlines, 0 base types, 0 extra macros, 9 extra decls
 */
#ifndef _RTCCORE_IDL_
#define _RTCCORE_IDL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT StatusCode( LONG* pStatusCode );
HRESULT SubscriptionState( RTC_SUBSCRIPTION_STATE* pSubscriptionState );
HRESULT get_SIPPrivacyType( LONG* pPrivacyFlags );
HRESULT get_Subscription( IRTCSubscription** ppSubscription );
HRESULT get_SubscriptionState ( RTC_SUBSCRIPTION_STATE *pSubscriptionState );
HRESULT put_SIPPrivacyType( LONG PrivacyType );

#endif /* _RTCCORE_IDL_ */
