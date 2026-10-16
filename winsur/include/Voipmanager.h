/* Voipmanager.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 16 constants, 57 declarations, 0 outlines, 0 base types, 0 extra macros, 28 extra decls
 */
#ifndef _VOIPMANAGER_
#define _VOIPMANAGER_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DCRP_VALID_DOMAIN 0x00000008
#define DCRP_VALID_PASSWORD 0x00000002
#define DCRP_VALID_USERNAME 0x00000001
#define DCRP_VALID_XML 0x00000004
#define e_vceInvalid 0
#define e_vcsInvalid 0
#define e_vctInvalid 0
#define e_vseInvalid 0
#define VMS_AUTOFORWARDING 0x00000020
#define VMS_CALL_LOG_DB_READY 0x00000008
#define VMS_CALLER_INFO_DB_READY 0x00000010
#define VMS_INITIALIZED 0x00000001
#define VMS_NOT_READY 0x00000000
#define VMS_REGISTERED 0x00000002
#define VMS_REREGISTERING 0x00000040
#define VMS_SHUTTING_DOWN 0x00000004

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 600)) /* CE 4.0..599 */

/* VoIPCallEvent  [enum; ce-only; CE 4.0..599] */
typedef enum VoIPCallEvent { 
 e_vceInvalid = 0, 
 e_vceStatusChanged, 
 e_vceMissed, 
 e_vceAutoBlocked, 
 e_vceAutoForwarded, 
 e_vceDropped, 
 e_vceRedirectSucceeded, 
 e_vceRedirectFailed 
} VoIPCallEvent;

/* VoIPCallStatus  [enum; ce-only; CE 4.0..599] */
typedef enum VoIPCallStatus { 
 e_vcsInvalid = 0, 
 e_vcsIdle = RTCSS_IDLE, 
 e_vcsIncoming = RTCSS_INCOMING, 
 e_vcsAnswering = RTCSS_ANSWERING, 
 e_vcsInProgress = RTCSS_INPROGRESS, 
 e_vcsConnected = RTCSS_CONNECTED, 
 e_vcsDisconnected = RTCSS_DISCONNECTED, 
 e_vcsHolding = RTCSS_HOLD, 
 e_vcsReferring = RTCSS_REFER, 
 e_vcsInConference = RTCSS_REFER+1, 
} VoIPCallStatus;

/* VoIPMgrParameters  [struct; ce-only; CE 4.0..599; Voipguid.lib] */
typedef struct { 
 DirectoryClientRegParams DCRegParams; 
 BSTR bstrSipPassword; 
} VoIPMgrParameters;

/* VoIPSystemEvent  [enum; ce-only; CE 4.0..599] */
typedef enum VoIPSystemEvent{ 
 e_vseInvalid = 0, 
 e_vseTerminated, 
 e_vseRegistering, 
 e_vseRegistrationSucceeded, 
 e_vseRegistrationFailed 
} VoIPSystemEvent;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* DirectoryClientRegParams  [struct; ce-only; CE 5.0..599] */
typedef struct { 
 DWORD dwFlags; 
 DWORD dwMask; 
 BSTR bstrUserName; 
 BSTR bstrPassword; 
 BOOL fIsPasswordSet; 
 BSTR bstrExtraXML; 
 BSTR bstrDomain; 
} DirectoryClientRegParams;

/* SIPServerRegistrationParameters  [struct; ce-only; CE 5.0..599; Voipguid.lib] */
typedef struct SIPServerRegistrationParameters { 
 const WCHAR *wszURI; 
 const WCHAR *wszServer; 
 const WCHAR *wszAccountName; 
 const WCHAR *wszAccountPassword; 
 const WCHAR *wszTransport; 
 const WCHAR *wszAuthType; 
} SIPServerRegistrationParameters;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 600)) /* CE 4.0..599 */

/* IVoIPCurrentCall::Answer  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Answer( 
 BOOL fAccept 
);

/* IVoIPCurrentCall::Duration  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_Duration( 
 SYSTEMTIME* pstDuration 
);

/* IVoIPCurrentCall::FriendlyName  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_FriendlyName( 
 BSTR* pbstrFriendlyName 
);

/* IVoIPCurrentCall::Hangup  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Hangup();

/* IVoIPCurrentCall::Hold  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Hold();

/* IVoIPCurrentCall::Ignore  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Ignore();

/* IVoIPCurrentCall::NetworkStatus  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_NetworkStatus( 
 LONG* plStatus 
);

/* IVoIPCurrentCall::Redirect  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Redirect( 
 BSTR bstrRedirectURI 
);

/* IVoIPCurrentCall::RTCParticipant  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_RTCParticipant( 
 IRTCParticipant** piparticipant 
);

/* IVoIPCurrentCall::RTCSession  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_RTCSession( 
 IRTCSession** piSession 
);

/* IVoIPCurrentCall::StartTime  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_StartTime( 
 SYSTEMTIME* pstStart 
);

/* IVoIPCurrentCall::Status  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_Status( 
 VoIPCallStatus* pvcsStatus 
);

/* IVoIPCurrentCall::Type  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_Type( 
 VoIPCallType* pvctType 
);

/* IVoIPCurrentCall::Unhold  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Unhold();

/* IVoIPCurrentCall::URI  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_URI( 
 BSTR* pbstrURI 
);

/* IVoIPCurrentCall::VoIPName  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_VoIPName( 
 BSTR* pbstrVoIPName 
);

/* IVoIPCurrentCallEnumerator::Next  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Next( 
 unsigned long celt, 
 IVoIPCurrentCall** rgCCP, 
 unsigned long* pceltFetched 
);

/* IVoIPCurrentCallEnumerator::Reset  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Reset();

/* IVoIPCurrentCallEnumerator::Skip  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Skip( 
 unsigned long celt 
);

/* IVoIPMgr::ActiveCurrentCall  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_ActiveCurrentCall( 
 IVoIPCurrentCall** ppiCall 
);

/* IVoIPMgr::AutoForwardURI  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT put_AutoForwardURI( 
 BSTR bstrAutoForward 
); 
HRESULT get_AutoForwardURI( 
 BSTR* pbstrAutoForward 
);

/* IVoIPMgr::Call  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Call( 
 BSTR bstrURI, 
 IVoIPCurrentCall** ppiCurrentCall 
);

/* IVoIPMgr::CallerInfoDB  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_CallerInfoDB( 
 IVoIPCallerInfoDB** ppiCallerInfoDB 
);

/* IVoIPMgr::CallLogDB  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_CallLogDB( 
 IVoIPCallLogDB** piCallLogDB 
);

/* IVoIPMgr::CurrentCallEnumerator  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_CurrentCallEnumerator( 
 IVoIPCurrentCallEnumerator** ppiEnum 
);

/* IVoIPMgr::Initialize  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Initialize( 
 IVoIPUI* piUI, 
 VoIPMgrParameters* pvmpMgrParams 
);

/* IVoIPMgr::MicrophoneMute  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT put_MicrophoneMute( 
 VARIANT_BOOL fMuted 
); 
HRESULT get_MicrophoneMute( 
 VARIANT_BOOL* pfMuted 
);

/* IVoIPMgr::MicrophoneVolume  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT put_MicrophoneVolume( 
 float fpVolume 
); 
HRESULT get_MicrophoneVolume( 
 float* pfpVolume 
);

/* IVoIPMgr::MissedCallTimeout  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT put_MissedCallTimeout( 
 UINT nTimeoutMilliseconds 
); 
HRESULT get_MissedCallTimeout( 
 UINT* pnTimeoutMilliseconds 
);

/* IVoIPMgr::MyServer  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_MyServer( 
 BSTR* pbstrServer 
);

/* IVoIPMgr::MyURI  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_MyURI( 
 BSTR* pbstrURI 
);

/* IVoIPMgr::Parameters  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_Parameters( 
 VoIPMgrParameters* pvmpUsed 
);

/* IVoIPMgr::PlayProgressTone  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT PlayProgressTone( 
 VoIPProgressTone vpt 
);

/* IVoIPMgr::Reregister  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Reregister( 
 VoIPMgrParameters* pvmpMgrParams 
);

/* IVoIPMgr::RingTone  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT put_RingTone( 
 BSTR bstrRingTone 
); 
HRESULT get_RingTone( 
 BSTR* pbstrRingTone 
);

/* IVoIPMgr::RTCClient  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_RTCClient( 
 IRTCClient** ppiRTCClient 
);

/* IVoIPMgr::SendDTMF  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT SendDTMF( 
 RTC_DTMF rtcdtmf 
);

/* IVoIPMgr::SpeakerMute  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT put_SpeakerMute( 
 VARIANT_BOOL fMuted 
); 
HRESULT get_SpeakerMute( 
 VARIANT_BOOL* pfMuted 
);

/* IVoIPMgr::SpeakerVolume  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT put_SpeakerVolume( 
 float fpVolume 
); 
HRESULT get_SpeakerVolume( 
 float* pfpVolume 
);

/* IVoIPMgr::State  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT get_State( 
 VoIPManagerState* pulState 
);

/* IVoIPMgr::StopProgressTone  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT StopProgressTone();

/* IVoIPMgr::Uninitialize  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT Uninitialize();

/* IVoIPUI::OnCallEvent  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT OnCallEvent( 
 VoIPCallEvent vceEvent, 
 IVoIPCurrentCall* piCurrentCall 
);

/* IVoIPUI::OnSystemEvent  [function; ce-only; CE 4.0..599; Voipguid.lib] */
HRESULT OnSystemEvent( 
 VoIPSystemEvent vseEvent, 
 INT_PTR iptrParam 
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* IVoIPCurrentCall2::AddParticipantToConference  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT AddParticipantToConference( 
 IVoIPCurrentCall *piCall 
);

/* IVoIPCurrentCall2::ConferenceHost  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT get_ConferenceHost( 
 [in] IVoIPCurrentCall **ppiConferenceCall 
);

/* IVoIPCurrentCall2::ConferenceParticipants  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT get_ConferenceParticipants( 
 [out, retval] IVoIPCurrentCallEnumerator **ppiCallEnum 
);

/* IVoIPCurrentCall2::IsConferenceHost  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT get_IsConferenceHost( 
 [out, retval] VARIANT_BOOL *pbConfHost 
);

/* IVoIPCurrentCall2::IsConferenceParticipant  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT get_IsConferenceParticipant( 
 [out, retval] VARIANT_BOOL *pbConfParticipant 
);

/* IVoIPMgr2::InitializeEx  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT InitializeEx( 
 IVoIPUI *piUI 
);

/* IVoIPMgr2::RegisterWithSIPServer  [function; ce-only; CE 5.0..599; Voipguid.lib] */
HRESULT RegisterWithSIPServer( 
 SIPServerRegistrationParameters *pParams 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddParticipantToConference( IVoIPCurrentCall *piCall );
HRESULT Call( BSTR bstrURI, IVoIPCurrentCall** ppiCurrentCall );
HRESULT Hangup();
HRESULT Ignore();
HRESULT OnCallEvent( VoIPCallEvent vceEvent, IVoIPCurrentCall* piCurrentCall );
HRESULT OnSystemEvent( VoIPSystemEvent vseEvent, INT_PTR iptrParam );
HRESULT RegisterWithSIPServer( SIPServerRegistrationParameters *pParams );
HRESULT Reregister( VoIPMgrParameters* pvmpMgrParams );
HRESULT Unhold();
HRESULT get_ActiveCurrentCall( IVoIPCurrentCall** ppiCall );
HRESULT get_AutoForwardURI( BSTR* pbstrAutoForward );
HRESULT get_CallLogDB( IVoIPCallLogDB** piCallLogDB );
HRESULT get_CallerInfoDB( IVoIPCallerInfoDB** ppiCallerInfoDB );
HRESULT get_ConferenceHost( [in] IVoIPCurrentCall **ppiConferenceCall );
HRESULT get_ConferenceParticipants( [out, retval] IVoIPCurrentCallEnumerator **ppiCallEnum );
HRESULT get_CurrentCallEnumerator( IVoIPCurrentCallEnumerator** ppiEnum );
HRESULT get_IsConferenceHost( [out, retval] VARIANT_BOOL *pbConfHost );
HRESULT get_IsConferenceParticipant( [out, retval] VARIANT_BOOL *pbConfParticipant );
HRESULT get_MissedCallTimeout( UINT* pnTimeoutMilliseconds );
HRESULT get_MyServer( BSTR* pbstrServer );
HRESULT get_MyURI( BSTR* pbstrURI );
HRESULT get_NetworkStatus( LONG* plStatus );
HRESULT get_Parameters( VoIPMgrParameters* pvmpUsed );
HRESULT get_RTCClient( IRTCClient** ppiRTCClient );
HRESULT get_RTCParticipant( IRTCParticipant** piparticipant );
HRESULT get_RTCSession( IRTCSession** piSession );
HRESULT put_AutoForwardURI( BSTR bstrAutoForward );
HRESULT put_MissedCallTimeout( UINT nTimeoutMilliseconds );

#endif /* _VOIPMANAGER_ */
