/* Av_upnp.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 10 declarations, 0 outlines, 0 base types, 0 extra macros, 85 extra decls
 */
#ifndef _AV_UPNP_
#define _AV_UPNP_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BIT_AV_ERROR 0
#define BIT_AV_TRACE 2
#define BIT_AV_WARN 1
#define SUCCESS_AV 0

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DeviceCapabilities  [struct, typedef; shared; Av_upnp.lib; A/W DeviceCapabilitiesA,DeviceCapabilitiesW (CE is W-side)] */
struct DeviceCapabilities
 {
 wstring 
 strPossiblePlayMedia
 ;
 wstring 
 strPossibleRecMedia
 ;
 wstring 
 strPossibleRecQualityModes
 ;
 };

/* MediaInfo  [struct, typedef; ce-only; Av_upnp.lib] */
struct MediaInfo
 {
 unsigned long 
 nNrTracks
 ;
 wstring 
 strMediaDuration
 ;
 wstring 
 strCurrentURI
 ;
 wstring 
 strCurrentURIMetaData
 ;
 wstring 
 strNextURI
 ;
 wstring 
 strNextURIMetaData
 ;
 wstring 
 strPlayMedium
 ;
 wstring 
 strRecordMedium
 ;
 wstring 
 strWriteStatus
 ;
 };

/* object  [struct, typedef; ce-only; Av_upnp.lib] */
struct object 
{ 
 // constructor not shown 
 bool bContainer; 
 wstring strID; 
 wstring strParentID; 
 wstring strTitle; 
 wstring strClass; 
 bool bRestricted; 
 // GetProperty declarations not shown 
 // private members not shown 
};

/* PositionInfo  [struct, typedef; ce-only; Av_upnp.lib] */
struct PositionInfo
 {
 unsigned long 
 nTrack
 ;
 wstring 
 strTrackDuration
 ;
 wstring 
 strTrackMetaData
 ;
 wstring 
 strTrackURI
 ;
 wstring 
 strRelTime
 ;
 wstring 
 strAbsTime
 ;
 long 
 nRelCount
 ;
 long 
 nAbsCount
 ;
 };

/* TransportActions  [struct, typedef; ce-only; Av_upnp.lib] */
struct TransportActions
 {
 bool 
 bPlay
 ;
 bool 
 bStop
 ;
 bool 
 bPause
 ;
 bool 
 bSeek
 ;
 bool 
 bNext
 ;
 bool 
 bPrevious
 ;
 bool 
 bRecord
 ;
 };

/* TransportInfo  [struct, typedef; ce-only; Av_upnp.lib] */
struct TransportInfo
 {
 wstring 
 strCurrentTransportState
 ;
 wstring 
 strCurrentTransportStatus
 ;
 wstring 
 strCurrentSpeed
 ;
 };

/* TransportSettings  [struct, typedef; ce-only; Av_upnp.lib] */
struct TransportSettings
 {
 wstring 
 strPlayMode
 ;
 wstring 
 strRecQualityMode
 ;
 };

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
struct TransportActions{ bool bPlay; bool bStop; bool bPause; bool bSeek; bool bNext; bool bPrevious; bool bRecord;};
struct PositionInfo{ unsigned long nTrack; wstring strTrackDuration; wstring strTrackMetaData; wstring strTrackURI; wstring strRelTime; wstring strAbsTime; long nRelCount; long nAbsCount;};
struct object
{
  bool bContainer;
  wstring strID;
  wstring strParentID;
  wstring strTitle;
  wstring strClass;
  bool bRestricted;
};
struct TransportInfo{ wstring strCurrentTransportState; wstring strCurrentTransportStatus; wstring strCurrentSpeed;};
struct DeviceCapabilities{ wstring strPossiblePlayMedia; wstring strPossibleRecMedia; wstring strPossibleRecQualityModes;};
struct TransportSettings{ wstring strPlayMode; wstring strRecQualityMode;};
struct ConnectionInfo{ IRenderingControl* pRenderingControl; IAVTransport* pAVTransport; wstring strRemoteProtocolInfo; wstring strPeerConnectionManager; long nPeerConnectionID; DIRECTION Direction; wstring strStatus;};
struct MediaInfo{ unsigned long nNrTracks; wstring strMediaDuration; wstring strCurrentURI; wstring strCurrentURIMetaData; wstring strNextURI; wstring strNextURIMetaData; wstring strPlayMedium; wstring strRecordMedium; wstring strWriteStatus;};

/* function */
bool AddNamespaceMapping(  LPCWSTR pszNamespace,  LPCWSTR pszPrefix  );
DWORD AddSinkProtocol( LPCWSTR pszProtocolInfo );
DWORD AddSourceProtocol( LPCWSTR pszProtocolInfo );
DWORD GetConnectionManager( IConnectionManager** ppConnectionManager, wstring* pstrConnectionmanager );
DWORD GetContentDirectory( IContentDirectory** ppContentDirectory );
bool GetFirstObject(  LPCWSTR pszXml,  object* pObj  );
bool GetNextObject(  object* pObj  );
DWORD RemoveSinkProtocol( LPCWSTR pszProtocolInfo );
DWORD RemoveSourceProtocol( LPCWSTR pszProtocolInfo );

#endif /* _AV_UPNP_ */
