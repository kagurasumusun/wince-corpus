/* Voipmanager.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 16 constants, 4 declarations, 2 outlines, 0 base types, 0 extra macros, 28 extra decls
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
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DirectoryClientRegParams  [struct; ce-only] */

/* VoIPMgrParameters  [struct; ce-only; Voipguid.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SIPServerRegistrationParameters  [struct; ce-only; Voipguid.lib] */
typedef struct SIPServerRegistrationParameters { 
 const WCHAR *wszURI; 
 const WCHAR *wszServer; 
 const WCHAR *wszAccountName; 
 const WCHAR *wszAccountPassword; 
 const WCHAR *wszTransport; 
 const WCHAR *wszAuthType; 
} SIPServerRegistrationParameters;

/* VoIPCallEvent  [enum; ce-only] */
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

/* VoIPSystemEvent  [enum; ce-only] */
typedef enum VoIPSystemEvent{ 
 e_vseInvalid = 0, 
 e_vseTerminated, 
 e_vseRegistering, 
 e_vseRegistrationSucceeded, 
 e_vseRegistrationFailed 
} VoIPSystemEvent;

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
