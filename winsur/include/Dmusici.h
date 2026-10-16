/* Dmusici.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 23 declarations, 2 outlines, 0 base types, 0 extra macros, 70 extra decls
 */
#ifndef _DMUSICI_
#define _DMUSICI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* DMUS_OBJECTDESC  [struct; ce-only] */

/* DMUS_PMSG  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DMUS_SUBCHORD  [struct; ce-only] */
typedef struct {
 DWORD dwChordPattern;
 DWORD dwScalePattern;
 DWORD dwInversionPoints;
 DWORD dwLevels;
 BYTE bChordRoot;
 BYTE bScaleRoot;
} DMUS_SUBCHORD;

/* LPDMUS_BAND  [extra typedef] */
typedef IDirectMusicBand __RPC_FAR *LPDMUS_BAND;

/* LPDMUS_LOADER  [extra typedef] */
typedef IDirectMusicLoader __RPC_FAR *LPDMUS_LOADER;

/* LPDMUS_OBJECT  [extra typedef] */
typedef IDirectMusicObject __RPC_FAR *LPDMUS_OBJECT;

/* LPDMUS_SYNTHSTATS  [extra struct] */
typedef struct DMUS_SYNTHSTATS {
  DWORD dwSize;
  DWORD dwValidStats;
  DWORD dwVoices;
  DWORD dwTotalCPU;
  DWORD dwCPUPerVoice;
  DWORD dwLostNotes;
  DWORD dwFreeMemory;
  long lPeakVolume;
} DMUS_SYNTHSTATS, *LPDMUS_SYNTHSTATS;

/* LPDMUS_VERSION  [extra struct] */
typedef struct _DMUS_VERSION { DWORD dwVersionMS; DWORD dwVersionLS; } DMUS_VERSION, FAR *LPDMUS_VERSION;

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddPort( IDirectMusicPort* pPort );
HRESULT AllocPMsg( ULONG cb, DMUS_PMSG** ppPMSG );
HRESULT AssignPChannel( DWORD dwPChannel, IDirectMusicPort* pPort, DWORD dwGroup, DWORD dwMChannel );
HRESULT AssignPChannelBlock( DWORD dwBlockNum, IDirectMusicPort* pPort, DWORD dwGroup );
HRESULT AutoTransition( IDirectMusicPerformance* pPerformance, IDirectMusicSegment* pToSeg, WORD wCommand, DWORD dwFlags, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppTransSeg, IDirectMusicSegmentState** ppToSegState, IDirectMusicSegmentState** ppTransSegState );
HRESULT CacheObject( IDirectMusicObject* pObject );
HRESULT ChangeChordMap( IDirectMusicSegment* pSegment, BOOL fTrackScale, IDirectMusicChordMap* pChordMap );
HRESULT CloseDown();
HRESULT ComposeSegmentFromShape( IDirectMusicStyle* pStyle, WORD wNumMeasures, WORD wShape, WORD wActivity, BOOL fIntro, BOOL fEnd, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppSegment );
HRESULT ComposeSegmentFromTemplate( IDirectMusicStyle* pStyle, IDirectMusicSegment* pTemplate, WORD wActivity, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppSegment );
HRESULT ComposeTemplateFromShape( WORD wNumMeasures, WORD wShape, BOOL fIntro, BOOL fEnd, WORD wEndLength, IDirectMusicSegment** ppTemplate );
HRESULT CreateSegment( IDirectMusicSegment** ppSegment );
HRESULT FreePMsg( DMUS_PMSG* pPMSG );
HRESULT GetBumperLength( DWORD* pdwMilliSeconds );
HRESULT GetGraph( IDirectMusicGraph** ppGraph );
HRESULT GetLoader( IDirectMusicLoader** ppLoader );
HRESULT GetNotificationPMsg( DMUS_NOTIFICATION_PMSG** ppNotificationPMsg );
HRESULT GetPatch( DWORD* pdwPatch );
HRESULT GetPrepareTime( DWORD* pdwMilliSeconds );
HRESULT GetRepeats( DWORD* pdwRepeats );
HRESULT GetScale( DWORD* pdwScale );
HRESULT GetSegment( IDirectMusicSegment** ppSegment );
HRESULT GetTool( DWORD dwIndex, IDirectMusicTool** ppTool );
HRESULT InsertTool( IDirectMusicTool* pTool, DWORD* pdwPChannels, DWORD cPChannels, LONG lIndex );
HRESULT IsPlaying( IDirectMusicSegment* pSegment, IDirectMusicSegmentState* pSegState );
HRESULT PChannelInfo( DWORD dwPChannel, IDirectMusicPort** ppPort, DWORD* pdwGroup, DWORD* pdwMChannel );
HRESULT PlaySegment( IDirectMusicSegment* pSegment, DWORD dwFlags, __int64 i64StartTime, IDirectMusicSegmentState** ppSegmentState );
HRESULT ReleaseObject( IDirectMusicObject* pObject );
HRESULT RemovePort( IDirectMusicPort* pPort );
HRESULT RemoveTool( IDirectMusicTool* pTool );
HRESULT SendPMsg( DMUS_PMSG* pPMSG );
HRESULT SetBumperLength( DWORD dwMilliSeconds );
HRESULT SetGraph( IDirectMusicGraph* pGraph );
HRESULT SetPrepareTime( DWORD dwMilliSeconds );
HRESULT StampPMsg( DMUS_PMSG* pPMSG );
HRESULT Unload( IDirectMusicPerformance* pPerformance );

#endif /* _DMUSICI_ */
