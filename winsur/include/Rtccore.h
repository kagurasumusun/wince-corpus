/* Rtccore.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 82 constants, 41 declarations, 0 outlines, 0 base types, 0 extra macros, 227 extra decls
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
#define RTCSECL_UNSUPPORTED 1
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
HRESULT AddBuddyEx( BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fPersistent, RTC_BUDDY_SUBSCRIPTION_TYPE enSubscriptionType, IRTCProfile* pProfile, long lFlags, IRTCBuddy2** ppBuddy2 );
HRESULT AddGroup( BSTR bstrGroupName, BSTR bstrData, IRTCProfile* pProfile, long lFlags, IRTCBuddyGroup** ppGroup );
HRESULT AddParticipant( BSTR bstrAddress, BSTR bstrName, IRTCParticipant** ppParticipant );
HRESULT AddParticipantEx( BSTR bstrAddress, BSTR bstrName, BSTR bstrEPID, IRTCParticipant2** ppParticipant );
HRESULT AddStream( long lMediaType, LONG_PTR lCookie );
HRESULT AddWatcher( BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fBlocked, VARIANT_BOOL fPersistent, IRTCWatcher** ppWatcher );
HRESULT AddWatcherEx( BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, RTC_WATCHER_STATE enState, VARIANT_BOOL fPersistent, RTC_ACE_SCOPE enScope, IRTCProfile* pProfile, long lFlags, IRTCWatcher2** ppWatcher );
HRESULT AllowDialogNotifications ( BSTR bstrDialogNotifications );
HRESULT Answer( );
HRESULT AnswerWithSessionDescription( BSTR bstrContentType, BSTR bstrSessionDescription );
HRESULT CreateIdleSubscription ( IRTCProfile* pServerProfile, BSTR bstrAcceptedContent, BSTR bstrEventPackage, IRTCSubscription2** ppSubscription );
HRESULT CreateProfile( BSTR bstrProfileXML, IRTCProfile** ppProfile );
HRESULT CreateQuery( IRTCUserSearchQuery** ppQuery );
HRESULT CreateSession( RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile* pProfile, long lFlags, IRTCSession** ppSession );
HRESULT CreateSessionWithDescription( BSTR bstrContentType, BSTR bstrSessionDescription, IRTCProfile* pProfile, long lFlags, IRTCSession2** ppSession2 );
HRESULT DisablePresence();
HRESULT DisableProfile( IRTCProfile* pProfile );
HRESULT EnablePresence( VARIANT_BOOL fUseStorage, VARIANT varStorage );
HRESULT EnablePresenceEx( IRTCProfile* pProfile, VARIANT varStorage, long lFlags );
HRESULT EnableProfile( IRTCProfile* pProfile, long lRegisterFlags );
HRESULT EnableProfileEx( IRTCProfile* pProfile, long lRegisterFlags, long lRoamingFlags );
HRESULT EnumerateBuddies( IRTCEnumBuddies** ppEnum );
HRESULT EnumerateGroups( IRTCEnumGroups** ppEnum );
HRESULT EnumerateParticipants( IRTCEnumParticipants** ppEnum );
HRESULT EnumeratePresenceDevices( IRTCEnumPresenceDevices** ppEnumDevices );
HRESULT EnumerateProfiles( IRTCEnumProfiles** ppEnum );
HRESULT EnumerateResults( IRTCEnumUserSearchResults** ppEnum );
HRESULT EnumerateWatchers( IRTCEnumWatchers** ppEnum );
HRESULT EvaluateSessionDescription( BSTR bstrContentType, BSTR bstrSessionDescription, VARIANT_BOOL* pfApplicationSession );
HRESULT Event( RTC_EVENT RTCEvent, IDispatch* pEvent );
HRESULT ExecuteSearch( IRTCUserSearchQuery* pQuery, IRTCProfile* pProfile, LONG_PTR lCookie );
HRESULT Export( VARIANT varStorage );
HRESULT Forward( BSTR bstrForwardToURI );
HRESULT GetAdditionalHeaderValues( BSTR bstrHeaderValuePairs );
HRESULT GetLocalPresenceInfo( RTC_PRESENCE_STATUS* penStatus, BSTR* pbstrNotes );
HRESULT GetMapping( BSTR bstrRemoteAddress, RTC_PORT_TYPE enPortType, BSTR* pbstrInternalLocalAddress, long* plInternalLocalPort, BSTR* pbstrExternalLocalAddress, long* plExternalLocalPort );
HRESULT GetMappingEx( BSTR bstrRemoteAddress, long lRemotePort, long lTransport, RTC_PORT_TYPE enPortType, BSTR* pbstrInternalLocalAddress, long* plInternalLocalPort, BSTR* pbstrExternalLocalAddress, long* plExternalLocalPort );
HRESULT GetPortRange( RTC_PORT_TYPE enPortType, long* plMinValue, long* plMaxValue );
HRESULT GetPresenceData( BSTR* pbstrNamespace, BSTR* pbstrData );
HRESULT GetProfile( BSTR bstrUserAccount, BSTR bstrUserPassword, BSTR bstrUserURI, BSTR bstrServer, long lTransport, LONG_PTR lCookie );
HRESULT GetRemoteSessionDescription( BSTR* pbstrContentType, BSTR* pbstrSessionDescription );
HRESULT GetRequestLine( BSTR* pbstrRequestLine );
HRESULT Hold( LONG_PTR lCookie );
HRESULT Import( VARIANT varStorage, VARIANT_BOOL fReplaceAll );
HRESULT InitializeEx( long lFlags );
HRESULT InvokeTuningWizard( OAHWND hwndParent );
HRESULT InvokeTuningWizardEx( OAHWND hwndParent, VARIANT_BOOL fAllowAudio, VARIANT_BOOL fAllowVideo );
HRESULT IsSecurityEnabled( RTC_SECURITY_TYPE enSecurityType, VARIANT_BOOL* pfSecurityEnabled );
HRESULT NextRedirectedUser();
HRESULT ParkSession ( BSTR bstrParkServerURI );
HRESULT PlayRing( RTC_RING_TYPE enType, VARIANT_BOOL bPlay );
HRESULT PrepareForShutdown();
HRESULT ReInviteWithSessionDescription( BSTR bstrContentType, BSTR bstrSessionDescription, LONG_PTR lCookie );
HRESULT Redirect( RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile* pProfile, long lFlags );
HRESULT Refer( BSTR bstrReferToURI, BSTR bstrReferCookie );
HRESULT ReferToSessionInfo( [out] BSTR* pbstrReferToCallID, [out] BSTR* pbstrReferToFromTag, [out] BSTR* pbstrReferToToTag );
HRESULT ReferToURI( [out] BSTR* pbstrReferredToURI );
HRESULT ReferredByURI( [out] BSTR* pbstrReferredByURI );
HRESULT RegisterUnsolicitedNotification ( BSTR bstrAcceptedContent, BSTR bstrEventPackage, IRTCUnsolicitedSubscription** ppSubscription );
HRESULT Reject();
HRESULT ReleaseMapping( BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT ReleaseMappingEx( long lTransport, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT RemoveBuddy( IRTCBuddy* pBuddy );
HRESULT RemoveGroup( IRTCBuddyGroup* pGroup );
HRESULT RemoveParticipant( IRTCParticipant* pParticipant );
HRESULT RemoveStream( long lMediaType, LONG_PTR lCookie );
HRESULT RemoveWatcher( IRTCWatcher* pWatcher );
HRESULT ReplaceSession ( BSTR IRTCSession* pReplacedSession );
HRESULT ReplacedSession( IRTCSession** ppReplacedSession );
HRESULT Retrieve( BSTR bstrAddress, BSTR bstrName, BSTR bstrReferredByURI, BSTR bstrRetrieveCallID, BSTR bstrRetrieveFromTag, BSTR bstrRetrieveToTag, VARIANT_BOOL fEarlyOnly );
HRESULT SendDTMF( RTC_DTMF enDTMF );
HRESULT SendInfo( BSTR bstrInfoHeader, BSTR bstrInfo, LONG_PTR lCookie );
HRESULT Session( [out] IRTCSession2** ppSession );
HRESULT SetAdditionalHeaderValues( BSTR bstrHeaderValuePairs );
HRESULT SetLocalPresenceInfo( RTC_PRESENCE_STATUS enStatus, BSTR bstrNotes );
HRESULT SetPortManager( IRTCPortManager* pPortManager );
HRESULT SetPreferredMediaTypes( long lMediaTypes, VARIANT_BOOL fPersistent );
HRESULT SetPresenceData( BSTR bstrNamespace, BSTR bstrData );
HRESULT SetReferredSessionState( RTC_SESSION_STATE enState );
HRESULT SetSessionDescriptionManager( IRTCSessionDescriptionManager* pSessionDescriptionManager );
HRESULT StartListenAddressAndPort( BSTR bstrInternalLocalAddress, long lInternalLocalPort );
HRESULT StartT120Applet( RTC_T120_APPLET enApplet );
HRESULT StopListenAddressAndPort( BSTR bstrInternalLocalAddress, long lInternalLocalPort );
HRESULT StopT120Applets();
HRESULT Subscription ( IRTCUnsolicitedSubscription** ppSubscription );
HRESULT UnHold( LONG_PTR lCookie );
HRESULT UpdateRemoteAddress( BSTR bstrRemoteAddress, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT UpdateRemoteAddressEx( BSTR bstrRemoteAddress, long lRemotePort, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT UpdateRemoteAddressEx2( BSTR bstrRemoteAddress, long lRemotePort, long lTransport, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT get_ActiveMedia( long* plMediaType );
HRESULT get_AllowedAuth( long* plAllowedAuth );
HRESULT get_AllowedPorts( long lTransport, RTC_LISTEN_MODE* penMode );
HRESULT get_AnswerMode( RTC_SESSION_TYPE enType, RTC_ANSWER_MODE* penMode );
HRESULT get_AudioMuted( RTC_AUDIO_DEVICE enDevice, VARIANT_BOOL* pfMuted );
HRESULT get_Buddies( IRTCCollection** ppCollection );
HRESULT get_Buddy( IRTCBuddy** ppBuddy );
HRESULT get_CanAddParticipants( VARIANT_BOOL* pfCanAdd );
HRESULT get_Client( IRTCClient** ppClient );
HRESULT get_ClientBanner( VARIANT_BOOL* pfBanner );
HRESULT get_ClientCurVer( BSTR* pbstrCurVer );
HRESULT get_ClientData( BSTR* pbstrData );
HRESULT get_ClientMinVer( BSTR* pbstrMinVer );
HRESULT get_ClientName( BSTR* pbstrName );
HRESULT get_ClientUpdateURI( BSTR* pbstrUpdateURI );
HRESULT get_Cookie( LONG_PTR* plCookie );
HRESULT get_CurrentMedia( long* plMediaTypes );
HRESULT get_Data( BSTR* pbstrData );
HRESULT get_DeviceID( BSTR* pbstrDeviceID);
HRESULT get_Direction( RTC_AUDIO_DEVICE* penDirection );
HRESULT get_EventFilter( long* plFilter );
HRESULT get_EventReason( RTC_MEDIA_EVENT_REASON* penEventReason );
HRESULT get_EventType( RTC_BUDDY_EVENT_TYPE* pEventType );
HRESULT get_FederationFlag( long* plFlags);
HRESULT get_Group( IRTCBuddyGroup** ppGroup );
HRESULT get_Groups( IRTCCollection** ppCollection );
HRESULT get_IVideoWindow( RTC_VIDEO_DEVICE enDevice, IVideoWindow** ppIVideoWindow );
HRESULT get_Info( BSTR* pbstrInfo );
HRESULT get_InfoHeader( BSTR* pbstrInfoHeader );
HRESULT get_IsForked( VARIANT_BOOL* pfIsForked );
HRESULT get_IsReferred( VARIANT_BOOL* pfIsReferred );
HRESULT get_IsT120AppletRunning( RTC_T120_APPLET enApplet, VARIANT_BOOL* pfRunning );
HRESULT get_IsTuned( VARIANT_BOOL* pfTuned );
HRESULT get_Item( long Index, VARIANT* pVariant );
HRESULT get_Key( BSTR* pbstrKey );
HRESULT get_Level( long* plLevel );
HRESULT get_ListenForIncomingSessions( RTC_LISTEN_MODE* penListen );
HRESULT get_LocalUserName( BSTR* pbstrUserName );
HRESULT get_LocalUserURI( BSTR* pbstrUserURI );
HRESULT get_Max( long* plMax );
HRESULT get_MaxBitrate( long* plMaxBitrate );
HRESULT get_MediaCapabilities( long* plMediaTypes );
HRESULT get_MediaType( long* pMediaType );
HRESULT get_MediaTypes( long* pMediaTypes );
HRESULT get_Message( BSTR* pbstrMessage );
HRESULT get_MessageHeader( BSTR* pbstrMessageHeader );
HRESULT get_Min( long* plMin );
HRESULT get_MoreAvailable( VARIANT_BOOL* pfMoreAvailable );
HRESULT get_NetworkAddresses( VARIANT_BOOL fTCP, VARIANT_BOOL fExternal, VARIANT* pvAddresses );
HRESULT get_NetworkQuality( long* plNetworkQuality );
HRESULT get_Notes( BSTR* pbstrNotes );
HRESULT get_OfferWatcherMode( RTC_OFFER_WATCHER_MODE* penMode );
HRESULT get_Participant( IRTCParticipant** ppParticipant );
HRESULT get_Participants( IRTCCollection** ppCollection );
HRESULT get_Persistent( VARIANT_BOOL* pfPersistent );
HRESULT get_PreferredAEC( VARIANT_BOOL* pbEnabled );
HRESULT get_PreferredAudioDevice( RTC_AUDIO_DEVICE enDevice, BSTR* pbstrDeviceName );
HRESULT get_PreferredMediaTypes( long* plMediaTypes );
HRESULT get_PreferredSecurityLevel( RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL* penSecurityLevel );
HRESULT get_PreferredVideoDevice( BSTR* pbstrDeviceName );
HRESULT get_PreferredVolume( RTC_AUDIO_DEVICE enDevice, long* plVolume );
HRESULT get_PresenceDevices( IRTCCollection** ppDevicesCollection );
HRESULT get_PresenceProperty( RTC_PRESENCE_PROPERTY enProperty, BSTR* pbstrProperty );
HRESULT get_PresentityURI( BSTR* pbstrPresentityURI );
HRESULT get_PrivacyMode( RTC_PRIVACY_MODE* penMode );
HRESULT get_Profile( IRTCProfile2** ppProfile );
HRESULT get_Profiles( IRTCCollection** ppCollection );
HRESULT get_ProposedMedia( long* plMediaTypes );
HRESULT get_ProviderData( BSTR* pbstrData );
HRESULT get_ProviderName( BSTR* pbstrName );
HRESULT get_ProviderURI( RTC_PROVIDER_URI enURI, BSTR* pbstrURI );
HRESULT get_Query( IRTCUserSearchQuery** ppQuery );
HRESULT get_Realm( BSTR* pbstrRealm );
HRESULT get_RedirectedUserName( BSTR* pbstrUserName );
HRESULT get_RedirectedUserURI( BSTR* pbstrUserURI );
HRESULT get_ReferCookie( BSTR* pbstrReferCookie );
HRESULT get_ReferStatus( RTC_SESSION_REFER_STATUS* penReferStatus );
HRESULT get_ReferToURI( BSTR* pbstrReferToURI );
HRESULT get_ReferredByURI( BSTR* pbstrReferredByURI );
HRESULT get_RemotePreferredSecurityLevel( RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL* penSecurityLevel );
HRESULT get_Removable( VARIANT_BOOL* pfRemovable );
HRESULT get_Results( IRTCCollection** ppCollection );
HRESULT get_Scope( RTC_ACE_SCOPE* penScope );
HRESULT get_SearchDomain( BSTR* pbstrDomain );
HRESULT get_SearchPreference( RTC_USER_SEARCH_PREFERENCE enPreference, long* plValue );
HRESULT get_SearchTerm( BSTR bstrName, BSTR* pbstrValue );
HRESULT get_SearchTerms( BSTR* pbstrNames );
HRESULT get_Session( IRTCSession2** ppSession );
HRESULT get_SessionCapabilities( long* plSupportedSessions );
HRESULT get_State( RTC_REINVITE_STATE* pState );
HRESULT get_Status( RTC_PRESENCE_STATUS* penStatus );
HRESULT get_StatusCode( long* plStatusCode );
HRESULT get_StatusText( BSTR* pbstrStatusText );
HRESULT get_SubscriptionType( RTC_BUDDY_SUBSCRIPTION_TYPE* penSubscriptionType );
HRESULT get_TemporalSpatialTradeOff( long* plValue );
HRESULT get_Type( RTC_SESSION_TYPE* penType );
HRESULT get_UserAccount( BSTR* pbstrUserAccount );
HRESULT get_UserStatus( RTC_MESSAGING_USER_STATUS* penUserStatus );
HRESULT get_UserURI( BSTR* pbstrUserURI );
HRESULT get_Value( BSTR* pbstrValue );
HRESULT get_Watcher( BSTR bstrPresentityURI, IRTCWatcher** ppWatcher );
HRESULT get_WatcherEx( RTC_WATCHER_MATCH_MODE enMode, BSTR bstrPresentityURI, IRTCWatcher2** ppWatcher );
HRESULT get_Watchers( IRTCCollection** ppCollection );
HRESULT get_XML( BSTR* pbstrXML );
HRESULT get__NewEnum( IUnknown** ppNewEnum );
HRESULT put_AllowedAuth( long lAllowedAuth );
HRESULT put_AllowedPorts( long lTransport, RTC_LISTEN_MODE penMode );
HRESULT put_AnswerMode( RTC_SESSION_TYPE enType, RTC_ANSWER_MODE enMode );
HRESULT put_AudioMuted( RTC_AUDIO_DEVICE enDevice, VARIANT_BOOL fMuted );
HRESULT put_ClientCurVer( BSTR bstrClientCurVer );
HRESULT put_ClientName( BSTR bstrClientName );
HRESULT put_Data( BSTR bstrData );
HRESULT put_EncryptionKey( long lMediaType, BSTR EncryptionKey );
HRESULT put_EventFilter( long lFilter );
HRESULT put_ListenForIncomingSessions( RTC_LISTEN_MODE enListen );
HRESULT put_LocalUserName( BSTR bstrUserName );
HRESULT put_LocalUserURI( BSTR bstrUserURI );
HRESULT put_OfferWatcherMode( RTC_OFFER_WATCHER_MODE enMode );
HRESULT put_Persistent( VARIANT_BOOL fPersistent );
HRESULT put_PreferredAEC( VARIANT_BOOL bEnable );
HRESULT put_PreferredAudioDevice( RTC_AUDIO_DEVICE enDevice, BSTR bstrDeviceName );
HRESULT put_PreferredSecurityLevel( RTC_SECURITY_TYPE enSecurityType, RTC_SECURITY_LEVEL enSecurityLevel );
HRESULT put_PreferredVolume( RTC_AUDIO_DEVICE enDevice, long lVolume );
HRESULT put_PresenceProperty( RTC_PRESENCE_PROPERTY enProperty, BSTR bstrProperty );
HRESULT put_PresentityURI( BSTR bstrPresentityURI );
HRESULT put_PrivacyMode( RTC_PRIVACY_MODE enMode );
HRESULT put_Realm( BSTR bstrRealm );
HRESULT put_ReferCookie( BSTR bstrReferCookie );
HRESULT put_ReferredByURI( BSTR bstrReferredByURI );
HRESULT put_SearchDomain( BSTR bstrDomain );
HRESULT put_SearchPreference( RTC_USER_SEARCH_PREFERENCE enPreference, long lValue );
HRESULT put_SearchTerm( BSTR bstrName, BSTR bstrValue );
HRESULT put_State( RTC_WATCHER_STATE enState );
HRESULT put_TemporalSpatialTradeOff( long lValue );
HRESULT set_MaxBitrate( long lMaxBitrate );
HRESULT set_PreferredVideoDevice( BSTR bstrDeviceName );
HRESULT set_TemporalSpatialTradeOff( long lValue );

#endif /* _RTCCORE_ */
