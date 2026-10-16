/* Rtccore.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 81 constants, 41 declarations, 0 outlines, 0 base types, 0 extra macros, 129 extra decls
 */
#ifndef _RTCCORE_
#define _RTCCORE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define RTCAU_BASIC 0x00000001
#define RTCAU_DIGEST 0x00000002
#define RTCAU_KERBEROS 0x00000008
#define RTCAU_NTLM 0x00000004
#define RTCAU_USE_LOGON_CRED 0x00010000
#define RTCCS_FAIL_ON_REDIRECT 0x00000002
#define RTCCS_FORCE_PROFILE 0x00000001
#define RTCEF_ALL 0x01FFFFFF
#define RTCEF_BUDDY 0x00000100
#define RTCEF_BUDDY2 0x00040000
#define RTCEF_CLIENT 0x00000001
#define RTCEF_GROUP 0x00002000
#define RTCEF_INFO 0x00001000
#define RTCEF_INTENSITY 0x00000040
#define RTCEF_INVITE 0x02000000
#define RTCEF_MEDIA 0x00000020
#define RTCEF_MEDIA_REQUEST 0x00004000
#define RTCEF_MESSAGING 0x00000080
#define RTCEF_PARTICIPANT_STATE_CHANGE 0x00000010
#define RTCEF_PRACK 0x40000000
#define RTCEF_PRESENCE_DATA 0x00800000
#define RTCEF_PRESENCE_PROPERTY 0x00020000
#define RTCEF_PRESENCE_STATUS 0x01000000
#define RTCEF_PROFILE 0x00000400
#define RTCEF_REGISTRATION_STATE_CHANGE 0x00000002
#define RTCEF_REINVITE 0x00400000
#define RTCEF_ROAMING 0x00010000
#define RTCEF_SESSION_CONSULTANT_REFERRED 0x80000000
#define RTCEF_SESSION_NOTIFICATION 0x04000000
#define RTCEF_SESSION_OPERATION_COMPLETE 0x00000008
#define RTCEF_SESSION_REFER_STATUS 0x00100000
#define RTCEF_SESSION_REFERRED 0x00200000
#define RTCEF_SESSION_STATE_CHANGE 0x00000004
#define RTCEF_SUBSCRIPTION_NOTIFY 0x20000000
#define RTCEF_SUBSCRIPTION_STATE_CHANGE 0x10000000
#define RTCEF_UNSOLICITED_NOTIFY 0x08000000
#define RTCEF_USERSEARCH 0x00000800
#define RTCEF_WATCHER 0x00000200
#define RTCEF_WATCHER2 0x00080000
#define RTCFF_ARCHIVED 0x00000002
#define RTCFF_FEDERATED 0x00000001
#define RTCIF_DISABLE_MEDIA 0x00000001
#define RTCIF_DISABLE_STRICT_DNS 0x00000008
#define RTCIF_DISABLE_UPNP 0x00000002
#define RTCIF_ENABLE_SERVER_CLASS 0x00000004
#define RTCIF_ENABLE_SYMMETRIC_UDP_SIGNALING 0x00000100
#define RTCIF_PREFER_STATIC_PORT_FOR_SYMMETRIC_UDP 0x00000200
#define RTCIF_SEND_SDP_IN_PROVISIONAL_RESPONSES 0x00000400
#define RTCIF_TRUST_NETWORK_ASSERTED_IDENTITY 0x00001000
#define RTCMT_ALL 0x0000001F
#define RTCMT_ALL_RTP 0x0000000F
#define RTCMT_AUDIO_RECEIVE 0x00000002
#define RTCMT_AUDIO_SEND 0x00000001
#define RTCMT_T120_SENDRECV 0x00000010
#define RTCMT_VIDEO_RECEIVE 0x00000008
#define RTCMT_VIDEO_SEND 0x00000004
#define RTCRF_REGISTER_ALL 0x0000000F
#define RTCRF_REGISTER_INVITE_SESSIONS 0x00000001
#define RTCRF_REGISTER_MESSAGE_SESSIONS 0x00000002
#define RTCRF_REGISTER_NOTIFY 0x00000008
#define RTCRF_REGISTER_PRESENCE 0x00000004
#define RTCRMF_ALL_ROAMING 0x0000000F
#define RTCRMF_BUDDY_ROAMING 0x00000001
#define RTCRMF_PRESENCE_ROAMING 0x00000004
#define RTCRMF_PROFILE_ROAMING 0x00000008
#define RTCRMF_WATCHER_ROAMING 0x00000002
#define RTCSI_APPLICATION 0x00000020
#define RTCSI_IM 0x00000008
#define RTCSI_MULTIPARTY 0x00000010
#define RTCSI_PC_TO_PC 0x00000001
#define RTCSI_PC_TO_PHONE 0x00000002
#define RTCSI_PHONE_TO_PHONE 0x00000004
#define RTCSP_PRIVACY_ALL 0x0000000F
#define RTCSP_PRIVACY_LOCAL 0x00000001
#define RTCSP_PRIVACY_NONE 0x00000000
#define RTCSP_PRIVACY_PROXY_HEADER 0x00000002
#define RTCSP_PRIVACY_PROXY_ID 0x00000008
#define RTCSP_PRIVACY_PROXY_SESSION 0x00000004
#define RTCTR_TCP 0x00000002
#define RTCTR_TLS 0x00000004
#define RTCTR_UDP 0x00000001

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddBuddy( IRTCBuddy* pBuddy );
HRESULT AddStream( long lMediaType, LONG_PTR lCookie );
HRESULT Answer( );
HRESULT CreateQuery( IRTCUserSearchQuery** ppQuery );
HRESULT DisablePresence();
HRESULT DisableProfile( IRTCProfile* pProfile );
HRESULT EnableProfile( IRTCProfile* pProfile, long lRegisterFlags );
HRESULT EnableProfileEx( IRTCProfile* pProfile, long lRegisterFlags, long lRoamingFlags );
HRESULT EnumerateBuddies( IRTCEnumBuddies** ppEnum );
HRESULT EnumerateGroups( IRTCEnumGroups** ppEnum );
HRESULT EnumerateParticipants( IRTCEnumParticipants** ppEnum );
HRESULT EnumeratePresenceDevices( IRTCEnumPresenceDevices** ppEnumDevices );
HRESULT EnumerateProfiles( IRTCEnumProfiles** ppEnum );
HRESULT EnumerateResults( IRTCEnumUserSearchResults** ppEnum );
HRESULT EnumerateWatchers( IRTCEnumWatchers** ppEnum );
HRESULT ExecuteSearch( IRTCUserSearchQuery* pQuery, IRTCProfile* pProfile, LONG_PTR lCookie );
HRESULT GetPortRange( RTC_PORT_TYPE enPortType, long* plMinValue, long* plMaxValue );
HRESULT Hold( LONG_PTR lCookie );
HRESULT InitializeEx( long lFlags );
HRESULT NextRedirectedUser();
HRESULT PrepareForShutdown();
HRESULT Reject();
HRESULT RemoveBuddy( IRTCBuddy* pBuddy );
HRESULT RemoveGroup( IRTCBuddyGroup* pGroup );
HRESULT RemoveParticipant( IRTCParticipant* pParticipant );
HRESULT RemoveStream( long lMediaType, LONG_PTR lCookie );
HRESULT RemoveWatcher( IRTCWatcher* pWatcher );
HRESULT ReplacedSession( IRTCSession** ppReplacedSession );
HRESULT SendDTMF( RTC_DTMF enDTMF );
HRESULT Session( [out] IRTCSession2** ppSession );
HRESULT SetPortManager( IRTCPortManager* pPortManager );
HRESULT SetReferredSessionState( RTC_SESSION_STATE enState );
HRESULT SetSessionDescriptionManager( IRTCSessionDescriptionManager* pSessionDescriptionManager );
HRESULT StartT120Applet( RTC_T120_APPLET enApplet );
HRESULT StopT120Applets();
HRESULT Subscription ( IRTCUnsolicitedSubscription** ppSubscription );
HRESULT UnHold( LONG_PTR lCookie );
HRESULT get_ActiveMedia( long* plMediaType );
HRESULT get_AllowedAuth( long* plAllowedAuth );
HRESULT get_AllowedPorts( long lTransport, RTC_LISTEN_MODE* penMode );
HRESULT get_AnswerMode( RTC_SESSION_TYPE enType, RTC_ANSWER_MODE* penMode );
HRESULT get_Buddies( IRTCCollection** ppCollection );
HRESULT get_Buddy( IRTCBuddy** ppBuddy );
HRESULT get_Client( IRTCClient** ppClient );
HRESULT get_Cookie( LONG_PTR* plCookie );
HRESULT get_CurrentMedia( long* plMediaTypes );
HRESULT get_Direction( RTC_AUDIO_DEVICE* penDirection );
HRESULT get_EventFilter( long* plFilter );
HRESULT get_EventReason( RTC_MEDIA_EVENT_REASON* penEventReason );
HRESULT get_EventType( RTC_BUDDY_EVENT_TYPE* pEventType );
HRESULT get_FederationFlag( long* plFlags);
HRESULT get_Group( IRTCBuddyGroup** ppGroup );
HRESULT get_Groups( IRTCCollection** ppCollection );
HRESULT get_IVideoWindow( RTC_VIDEO_DEVICE enDevice, IVideoWindow** ppIVideoWindow );
HRESULT get_Level( long* plLevel );
HRESULT get_ListenForIncomingSessions( RTC_LISTEN_MODE* penListen );
HRESULT get_Max( long* plMax );
HRESULT get_MaxBitrate( long* plMaxBitrate );
HRESULT get_MediaCapabilities( long* plMediaTypes );
HRESULT get_MediaType( long* pMediaType );
HRESULT get_MediaTypes( long* pMediaTypes );
HRESULT get_Min( long* plMin );
HRESULT get_NetworkQuality( long* plNetworkQuality );
HRESULT get_OfferWatcherMode( RTC_OFFER_WATCHER_MODE* penMode );
HRESULT get_Participant( IRTCParticipant** ppParticipant );
HRESULT get_Participants( IRTCCollection** ppCollection );
HRESULT get_PreferredMediaTypes( long* plMediaTypes );
HRESULT get_PreferredSecurityLevel( RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL* penSecurityLevel );
HRESULT get_PreferredVolume( RTC_AUDIO_DEVICE enDevice, long* plVolume );
HRESULT get_PresenceDevices( IRTCCollection** ppDevicesCollection );
HRESULT get_PrivacyMode( RTC_PRIVACY_MODE* penMode );
HRESULT get_Profile( IRTCProfile2** ppProfile );
HRESULT get_Profiles( IRTCCollection** ppCollection );
HRESULT get_ProposedMedia( long* plMediaTypes );
HRESULT get_Query( IRTCUserSearchQuery** ppQuery );
HRESULT get_ReferStatus( RTC_SESSION_REFER_STATUS* penReferStatus );
HRESULT get_RemotePreferredSecurityLevel( RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL* penSecurityLevel );
HRESULT get_Results( IRTCCollection** ppCollection );
HRESULT get_Scope( RTC_ACE_SCOPE* penScope );
HRESULT get_SearchPreference( RTC_USER_SEARCH_PREFERENCE enPreference, long* plValue );
HRESULT get_Session( IRTCSession2** ppSession );
HRESULT get_SessionCapabilities( long* plSupportedSessions );
HRESULT get_State( RTC_REINVITE_STATE* pState );
HRESULT get_Status( RTC_PRESENCE_STATUS* penStatus );
HRESULT get_StatusCode( long* plStatusCode );
HRESULT get_SubscriptionType( RTC_BUDDY_SUBSCRIPTION_TYPE* penSubscriptionType );
HRESULT get_TemporalSpatialTradeOff( long* plValue );
HRESULT get_Type( RTC_SESSION_TYPE* penType );
HRESULT get_UserStatus( RTC_MESSAGING_USER_STATUS* penUserStatus );
HRESULT get_Watchers( IRTCCollection** ppCollection );
HRESULT put_AllowedAuth( long lAllowedAuth );
HRESULT put_AllowedPorts( long lTransport, RTC_LISTEN_MODE penMode );
HRESULT put_AnswerMode( RTC_SESSION_TYPE enType, RTC_ANSWER_MODE enMode );
HRESULT put_EventFilter( long lFilter );
HRESULT put_ListenForIncomingSessions( RTC_LISTEN_MODE enListen );
HRESULT put_OfferWatcherMode( RTC_OFFER_WATCHER_MODE enMode );
HRESULT put_PreferredSecurityLevel( RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL enSecurityLevel );
HRESULT put_PreferredVolume( RTC_AUDIO_DEVICE enDevice, long lVolume );
HRESULT put_PrivacyMode( RTC_PRIVACY_MODE enMode );
HRESULT put_SearchPreference( RTC_USER_SEARCH_PREFERENCE enPreference, long lValue );
HRESULT put_State( RTC_WATCHER_STATE enState );
HRESULT put_TemporalSpatialTradeOff( long lValue );
HRESULT set_MaxBitrate( long lMaxBitrate );
HRESULT set_TemporalSpatialTradeOff( long lValue );

#endif /* _RTCCORE_ */
