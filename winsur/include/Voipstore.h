/* Voipstore.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 39 declarations, 0 outlines, 0 base types, 0 extra macros, 27 extra decls
 */
#ifndef _VOIPSTORE_
#define _VOIPSTORE_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* VoIPCallType  [enum; ce-only; CE 4.0..699] */
typedef enum VoIPCallType {
..e_vctInvalid = 0,
..e_vctIncoming,
..e_vctOutgoing,
..e_vctMissed
} VoIPCallType;
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* VOIP_INVALID_SPEED_DIAL_ENTRY  [?; ce-only; CE 6.0..699] */
enum {
..VOIP_INVALID_SPEED_DIAL_ENTRY = -1
};
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* IVoIPCallerInfoDB::CreateRecord  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT CreateRecord( 
 IVoIPCallerInfoRecord** ppiRecord 
);

/* IVoIPCallerInfoDB::Enumerator  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT get_Enumerator( 
 IVoIPCallerInfoDBEnum** ppiEnum
);

/* IVoIPCallerInfoDB::FindCallerInfoBySpeedDialEntry  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT FindCallerInfoBySpeedDialEntry( 
 INT idxSpeedDial, 
 IVoIPCallerInfoRecord** ppiRecord 
);

/* IVoIPCallerInfoDB::FindCallerInfoByURI  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT FindCallerInfoByURI( 
 BSTR bstrURI, 
 IVoIPCallerInfoRecord** ppiRecord 
);

/* IVoIPCallerInfoDB::FriendlyNameEnumerator  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT get_FriendlyNameEnumerator( 
 IVoIPCallerInfoDBEnum** ppiEnum 
);

/* IVoIPCallerInfoDB::Init  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Init( 
 BSTR bstrURI 
);

/* IVoIPCallerInfoDB::SpeedDialEnumerator  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT get_SpeedDialEnumerator( 
 IVoIPCallerInfoDBEnum** ppiEnum 
);

/* IVoIPCallerInfoDBEnum::Next  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Next( 
 unsigned long celt, 
 IVoIPCallerInfoRecord** rgVoIPCallerInfoRecord, 
 unsigned long* pceltFetched 
);

/* IVoIPCallerInfoDBEnum::Reset  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Reset();

/* IVoIPCallerInfoDBEnum::Skip  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Skip( 
 unsigned long celt 
);

/* IVoIPCallerInfoRecord::Blocked  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_Blocked( 
 VARIANT_BOOL fBlocked 
);
HRESULT get_Blocked( 
 VARIANT_BOOL* pfBlocked 
);

/* IVoIPCallerInfoRecord::Commit  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Commit();

/* IVoIPCallerInfoRecord::DeleteFromDB  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT DeleteFromDB();

/* IVoIPCallerInfoRecord::ForwardingURI  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_ForwardingURI( 
 BSTR bstrForwardingURI 
);
HRESULT get_ForwardingURI( 
 BSTR* pbstrForwardingURI 
);

/* IVoIPCallerInfoRecord::FriendlyName  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_FriendlyName( 
 BSTR bstrFriendlyName 
);
HRESULT get_FriendlyName( 
 BSTR* pbstrFriendlyName 
);

/* IVoIPCallerInfoRecord::RingTone  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_RingTone( 
 BSTR bstrRingTonePath 
);
HRESULT get_RingTone( 
 BSTR* pbstrRingTonePath 
);

/* IVoIPCallerInfoRecord::SpeedDialEntry  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_SpeedDialEntry( 
 int idxSpeedDial 
);
HRESULT get_SpeedDialEntry( 
 int* pidxSpeedDial 
);

/* IVoIPCallerInfoRecord::URI  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_URI( 
 BSTR bstrURI 
);
HRESULT get_URI( 
 BSTR* pbstrURI 
);

/* IVoIPCallerInfoRecord::VoIPName  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_VoIPName( 
 BSTR bstrVoIPName 
);
HRESULT get_VoIPName( 
 BSTR* pbstrVoIPName 
);

/* IVoIPCallLogDB::Capacity  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_Capacity( 
 int cRecords
);
HRESULT get_Capacity( 
 int* cRecords 
);

/* IVoIPCallLogDB::CreateRecord  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT CreateRecord( 
 VoIPCallType vct, 
 IVoIPCallRecord** ppiRecord 
);

/* IVoIPCallLogDB::IncomingEnumerator  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT get_IncomingEnumerator( 
 IVoIPCallLogDBEnum** ppiEnum
);

/* IVoIPCallLogDB::Init  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Init( 
 BSTR bstrURI 
);

/* IVoIPCallLogDB::MissedEnumerator  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT get_MissedEnumerator( 
 IVoIPCallLogDBEnum** ppiEnum
);

/* IVoIPCallLogDB::OutgoingEnumerator  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT get_OutgoingEnumerator( 
 IVoIPCallLogDBEnum** ppiEnum 
);

/* IVoIPCallLogDBEnum::Next  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Next( 
 unsigned long celt, 
 IVoIPCallRecord** rgVoIPCallRecord, 
 unsigned long* pceltFetched 
);

/* IVoIPCallLogDBEnum::Reset  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Reset();

/* IVoIPCallLogDBEnum::Skip  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Skip( 
 unsigned long celt 
);

/* IVoIPCallRecord::CallType  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_CallType( 
 VoIPCallType vctType 
);
HRESULT get_CallType( 
 VoIPCallType* pvctType 
);

/* IVoIPCallRecord::Commit  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT Commit();

/* IVoIPCallRecord::DeleteFromDB  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT DeleteFromDB();

/* IVoIPCallRecord::Duration  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT get_Duration( 
 SYSTEMTIME* ptime 
);

/* IVoIPCallRecord::EndTime  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_EndTime( 
 SYSTEMTIME time 
);
HRESULT get_EndTime( 
 SYSTEMTIME* ptime 
);

/* IVoIPCallRecord::FriendlyName  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_FriendlyName( 
 BSTR bstrFriendlyName 
);
HRESULT get_FriendlyName( 
 BSTR* pbstrFriendlyName 
);

/* IVoIPCallRecord::StartTime  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_StartTime( 
 SYSTEMTIME time 
);
HRESULT get_StartTime( 
 SYSTEMTIME* ptime 
);

/* IVoIPCallRecord::URI  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HRESULT put_URI( 
 BSTR bstrURI 
);
HRESULT get_URI( 
 BSTR* pbstrURI 
);

/* IVoIPCallRecord::VoIPName  [function; ce-only; CE 4.0..699; Voipguid.lib] */
HHRESULT put_VoIPName( 
 BSTR bstrVoIPName 
);
HRESULT get_VoIPName( 
 BSTR* pbstrVoIPName 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT CreateRecord( VoIPCallType vct, IVoIPCallRecord** ppiRecord );
HRESULT DeleteFromDB();
HRESULT FindCallerInfoBySpeedDialEntry( INT idxSpeedDial, IVoIPCallerInfoRecord** ppiRecord );
HRESULT FindCallerInfoByURI( BSTR bstrURI, IVoIPCallerInfoRecord** ppiRecord );
HRESULT get_Blocked( VARIANT_BOOL* pfBlocked );
HRESULT get_CallType( VoIPCallType* pvctType );
HRESULT get_Capacity( int* cRecords );
HRESULT get_Enumerator( IVoIPCallerInfoDBEnum** ppiEnum );
HRESULT get_ForwardingURI( BSTR* pbstrForwardingURI );
HRESULT get_FriendlyNameEnumerator( IVoIPCallerInfoDBEnum** ppiEnum );
HRESULT get_IncomingEnumerator( IVoIPCallLogDBEnum** ppiEnum );
HRESULT get_MissedEnumerator( IVoIPCallLogDBEnum** ppiEnum );
HRESULT get_OutgoingEnumerator( IVoIPCallLogDBEnum** ppiEnum );
HRESULT get_RingTone( BSTR* pbstrRingTonePath );
HRESULT get_SpeedDialEntry( int* pidxSpeedDial );
HRESULT get_SpeedDialEnumerator( IVoIPCallerInfoDBEnum** ppiEnum );
HRESULT get_URI( BSTR* pbstrURI );
HRESULT get_VoIPName( BSTR* pbstrVoIPName );
HRESULT put_Blocked( VARIANT_BOOL fBlocked );
HRESULT put_CallType( VoIPCallType vctType );
HRESULT put_Capacity( int cRecords );
HRESULT put_ForwardingURI( BSTR bstrForwardingURI );
HRESULT put_FriendlyName( BSTR bstrFriendlyName );
HRESULT put_RingTone( BSTR bstrRingTonePath );
HRESULT put_SpeedDialEntry( int idxSpeedDial );
HRESULT put_URI( BSTR bstrURI );
HRESULT put_VoIPName( BSTR bstrVoIPName );

#endif /* _VOIPSTORE_ */
