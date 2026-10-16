/* rtccore.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 39 declarations, 0 outlines, 0 base types, 0 extra macros, 18 extra decls
 */
#ifndef _RTCCORE_IDL_
#define _RTCCORE_IDL_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* RTC_SUBSCRIPTION_STATE  [enum; ce-only; CE 6.0..699] */
typedef enum RTC_SUBSCRIPTION_STATE
{
 RTCSUBC_NOT_SUBSCRIBED, 
 RTCSUBC_SUBSCRIBING,
 RTCSUBC_SUBSCRIBED, 
 RTCSUBC_LOGGED_OFF,
 RTCSUBC_ERROR,
 RTCSUBC_UNSUBSCRIBING, 
} RTC_SUBSCRIPTION_STATE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* IRTCClientSIPPrivacy::get_SIPPrivacyType  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_SIPPrivacyType(
 LONG* pPrivacyFlags
);

/* IRTCClientSIPPrivacy::put_SIPPrivacyType  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT put_SIPPrivacyType(
 LONG PrivacyType
);

/* IRTCClientSubscriber::CreateSubscription  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT CreateSubscription(
 IRTCProfile* pServerProfile,
 BSTR bstrAcceptedContent,
 BSTR bstrEventPackage,
 BSTR bstrContentType,
 BSTR bstrMessageBody,
 IRTCSubscription** ppSubscription
);

/* IRTCIntensityEvent2::get_Participant  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_Participant(
 IRTCParticipant3** ppParticipant
);

/* IRTCMediaEvent2::get_Participant  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_Participant(
 IRTCParticipant3** ppParticipant
);

/* IRTCParticipant3::get_ActiveMedia  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_ActiveMedia(
 long* plMediaType
);

/* IRTCParticipant3::get_AudioMuted  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_AudioMuted( 
 RTC_AUDIO_DEVICE enDevice,
 VARIANT_BOOL *pfMuted
);

/* IRTCParticipant3::get_IVideoWindow  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_IVideoWindow(
 IVideoWindow** ppIVideoWindow
);

/* IRTCParticipant3::get_SendVideoStopped  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_SendVideoStopped( 
 VARIANT_BOOL *pfStopped
);

/* IRTCParticipant3::get_Volume  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_Volume(
 RTC_AUDIO_DEVICE enDevice,
 long* plVolume
);

/* IRTCParticipant3::put_AudioMuted  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT put_AudioMuted( 
 RTC_AUDIO_DEVICE enDevice,
 VARIANT_BOOL fMuted
);

/* IRTCParticipant3::put_SendVideoStopped  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT put_SendVideoStopped( 
 VARIANT_BOOL fStopped
);

/* IRTCParticipant3::put_Volume  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT put_Volume(
 RTC_AUDIO_DEVICE enDevice,
 long lVolume
);

/* IRTCParticipant3::ReInviteWithDescription  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT ReInviteWithDescription(
 BSTR offerContentType,
 BSTR offerDescription
);

/* IRTCParticipant3::SendDTMF  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT SendDTMF( 
 RTC_DTMF enDTMF
);

/* IRTCReInviteEvent2::get_Participant  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_Participant(
 IRTCParticipant3** ppParticipant
);

/* IRTCSessionSIPPrivacy::get_SIPPrivacyType  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_SIPPrivacyType(
 LONG* pPrivacyFlags
);

/* IRTCSessionSIPPrivacy::put_SIPPrivacyType  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT put_SIPPrivacyType(
 LONG PrivacyType
);

/* IRTCSubscription::get_AcceptedContentType  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_AcceptedContentType(
 BSTR* pbstrAcceptedContentType
);

/* IRTCSubscription::get_EventPackage  [function; ce-only; CE 6.0..699; uuid.lib] */
RESULT get_EventPackage(
 BSTR* pbstrEventPackage
);

/* IRTCSubscription::get_Profile  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_Profile(
 IRTCProfile** ppProfile
);

/* IRTCSubscription::get_SubscriptionState  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_SubscriptionState (
 RTC_SUBSCRIPTION_STATE *pSubscriptionState
);

/* IRTCSubscription::Resubscribe  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Resubscribe(
 BSTR bstrContentType,
 BSTR bstrBody
);

/* IRTCSubscription::Unsubscribe  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Unsubscribe();

/* IRTCSubscriptionNotificationEvent::Accept  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Accept(
 BSTR bstrContentType,
 BSTR bstrData
);

/* IRTCSubscriptionNotificationEvent::get_Subscription  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT get_Subscription(
 IRTCSubscription** ppSubscription
);

/* IRTCSubscriptionNotificationEvent::GetNotificationData  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT GetNotificationData(
 BSTR* pbstrContentType,
 BSTR* pbstrMessageData
);

/* IRTCSubscriptionNotificationEvent::Reject  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Reject(
 DWORD dwSIPFailureCode,
 BSTR bstrFailureText
);

/* IRTCSubscriptionStateChangeEvent::get_StatusCode  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT StatusCode(
 LONG* pStatusCode
);

/* IRTCSubscriptionStateChangeEvent::get_StatusText  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT StatusText(
 BSTR* pbstrText
);

/* IRTCSubscriptionStateChangeEvent::get_Subscription  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Subscription(
 IRTCSubscription** ppSubscription
);

/* IRTCSubscriptionStateChangeEvent::get_SubscriptionState  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT SubscriptionState(
 RTC_SUBSCRIPTION_STATE* pSubscriptionState
);

/* IRTCUnsolicitedSubscription::AcceptedContentType  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT AcceptedContentType (
 BSTR* pbstrAcceptedContentType
);

/* IRTCUnsolicitedSubscription::Disable  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Disable ();

/* IRTCUnsolicitedSubscription::Enable  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Enable ();

/* IRTCUnsolicitedSubscription::EventPackage  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT EventPackage(
 BSTR* pbstrEventPackage
);

/* IRTCUnsolicitedSubscription::IsEnabled  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT IsEnabled (
 VARIENT_BOOL pfEnabled
);

/* IRTCUnsolicitedSubscription::Unregister  [function; ce-only; CE 6.0..699; uuid.lib] */
HRESULT Unregister ();
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AcceptedContentType ( BSTR* pbstrAcceptedContentType );
HRESULT CreateSubscription( IRTCProfile* pServerProfile, BSTR bstrAcceptedContent, BSTR bstrEventPackage, BSTR bstrContentType, BSTR bstrMessageBody, IRTCSubscription** ppSubscription );
HRESULT EventPackage( BSTR* pbstrEventPackage );
HRESULT GetNotificationData( BSTR* pbstrContentType, BSTR* pbstrMessageData );
HRESULT IsEnabled ( VARIENT_BOOL pfEnabled );
HRESULT ReInviteWithDescription( BSTR offerContentType, BSTR offerDescription );
HRESULT Resubscribe( BSTR bstrContentType, BSTR bstrBody );
HRESULT StatusCode( LONG* pStatusCode );
HRESULT StatusText( BSTR* pbstrText );
HRESULT SubscriptionState( RTC_SUBSCRIPTION_STATE* pSubscriptionState );
HRESULT get_AcceptedContentType( BSTR* pbstrAcceptedContentType );
RESULT get_EventPackage( BSTR* pbstrEventPackage );
HRESULT get_SIPPrivacyType( LONG* pPrivacyFlags );
HRESULT get_SendVideoStopped( VARIANT_BOOL *pfStopped );
HRESULT get_Subscription( IRTCSubscription** ppSubscription );
HRESULT get_SubscriptionState ( RTC_SUBSCRIPTION_STATE *pSubscriptionState );
HRESULT put_SIPPrivacyType( LONG PrivacyType );
HRESULT put_SendVideoStopped( VARIANT_BOOL fStopped );

#endif /* _RTCCORE_IDL_ */
