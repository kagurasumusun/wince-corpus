/* Dmusici.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 43 constants, 23 declarations, 2 outlines, 0 base types, 0 extra macros, 70 extra decls
 */
#ifndef _DMUSICI_
#define _DMUSICI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DMUS_NOTEF_NOTEON 1
#define DMUS_PLAYMODE_CHORD_INTERVALS 8
#define DMUS_PLAYMODE_CHORD_ROOT 2
#define DMUS_PLAYMODE_KEY_ROOT 1
#define DMUS_PLAYMODE_NONE 16
#define DMUS_PLAYMODE_SCALE_INTERVALS 4
#define DMUS_PMSGF_MUSICTIME 2
#define DMUS_PMSGF_REFTIME 1
#define DMUS_PMSGF_TOOL_ATTIME 16
#define DMUS_PMSGF_TOOL_FLUSH 32
#define DMUS_PMSGF_TOOL_IMMEDIATE 4
#define DMUS_PMSGF_TOOL_QUEUE 8
#define DMUS_PMSGT_CHANNEL_PRIORITY 9
#define DMUS_PMSGT_CURVE 5
#define DMUS_PMSGT_DIRTY 11
#define DMUS_PMSGT_MIDI 0
#define DMUS_PMSGT_NOTE 1
#define DMUS_PMSGT_NOTIFICATION 3
#define DMUS_PMSGT_PATCH 7
#define DMUS_PMSGT_STOP 10
#define DMUS_PMSGT_SYSEX 2
#define DMUS_PMSGT_TEMPO 4
#define DMUS_PMSGT_TIMESIG 6
#define DMUS_PMSGT_TRANSPOSE 8
#define DMUS_PMSGT_USER 255
#define DMUS_SEGF_CONTROL 512
#define DMUS_SEGF_QUEUE 256
#define DMUS_SEGF_REFTIME 64
#define DMUS_SEGF_SECONDARY 128
#define DMUS_SHAPET_FALLING 0
#define DMUS_SHAPET_LEVEL 1
#define DMUS_SHAPET_LOOPABLE 2
#define DMUS_SHAPET_LOUD 3
#define DMUS_SHAPET_PEAKING 5
#define DMUS_SHAPET_QUIET 4
#define DMUS_SHAPET_RANDOM 6
#define DMUS_SHAPET_RISING 7
#define DMUS_SHAPET_SONG 8
#define DMUS_TRACKF_DIRTY 16
#define DMUS_TRACKF_FLUSH 8
#define DMUS_TRACKF_LOOP 2
#define DMUS_TRACKF_SEEK 1
#define DMUS_TRACKF_START 4

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

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef IDirectMusicBand __RPC_FAR *LPDMUS_BAND;
typedef IDirectMusicLoader __RPC_FAR *LPDMUS_LOADER;
typedef IDirectMusicObject __RPC_FAR *LPDMUS_OBJECT;

/* struct */
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
typedef struct _DMUS_VERSION { DWORD dwVersionMS; DWORD dwVersionLS; } DMUS_VERSION, FAR *LPDMUS_VERSION;

/* function */
HRESULT AddNotificationType( REFGUID rguidNotificationType );
HRESULT AddPort( IDirectMusicPort* pPort );
HRESULT AdjustTime( REFERENCE_TIME rtAmount );
HRESULT AllocPMsg( ULONG cb, DMUS_PMSG** ppPMSG );
HRESULT AssignPChannel( DWORD dwPChannel, IDirectMusicPort* pPort, DWORD dwGroup, DWORD dwMChannel );
HRESULT AssignPChannelBlock( DWORD dwBlockNum, IDirectMusicPort* pPort, DWORD dwGroup );
HRESULT AutoTransition( IDirectMusicPerformance* pPerformance, IDirectMusicSegment* pToSeg, WORD wCommand, DWORD dwFlags, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppTransSeg, IDirectMusicSegmentState** ppToSegState, IDirectMusicSegmentState** ppTransSegState );
HRESULT CacheObject( IDirectMusicObject* pObject );
HRESULT ChangeChordMap( IDirectMusicSegment* pSegment, BOOL fTrackScale, IDirectMusicChordMap* pChordMap );
HRESULT ClearCache( REFGUID rguidClass );
HRESULT CloseDown();
HRESULT ComposeSegmentFromShape( IDirectMusicStyle* pStyle, WORD wNumMeasures, WORD wShape, WORD wActivity, BOOL fIntro, BOOL fEnd, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppSegment );
HRESULT ComposeSegmentFromTemplate( IDirectMusicStyle* pStyle, IDirectMusicSegment* pTemplate, WORD wActivity, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppSegment );
HRESULT ComposeTemplateFromShape( WORD wNumMeasures, WORD wShape, BOOL fIntro, BOOL fEnd, WORD wEndLength, IDirectMusicSegment** ppTemplate );
HRESULT ComposeTransition( IDirectMusicSegment* pFromSeg, IDirectMusicSegment* pToSeg, MUSIC_TIME mtTime, WORD wCommand, DWORD dwFlags, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppTransSeg );
HRESULT CreateSegment( IDirectMusicSegment** ppSegment );
HRESULT DownloadInstrument( IDirectMusicInstrument* pInst, DWORD dwPChannel, IDirectMusicDownloadedInstrument** ppDownInst, DMUS_NOTERANGE* pNoteRanges, DWORD dwNumNoteRanges, IDirectMusicPort** ppPort, DWORD* pdwGroup, DWORD* pdwMChannel );
HRESULT EnableCache( REFGUID rguidClass, BOOL fEnable );
HRESULT EnumObject( REFGUID rguidClass, DWORD dwIndex, LPDMUS_OBJECTDESC pDesc );
HRESULT FreePMsg( DMUS_PMSG* pPMSG );
HRESULT GetBumperLength( DWORD* pdwMilliSeconds );
HRESULT GetGlobalParam( REFGUID rguidType, void* pParam, DWORD dwSize );
HRESULT GetGraph( IDirectMusicGraph** ppGraph );
HRESULT GetLatencyTime( REFERENCE_TIME* prtTime );
HRESULT GetLoader( IDirectMusicLoader** ppLoader );
HRESULT GetNotificationPMsg( DMUS_NOTIFICATION_PMSG** ppNotificationPMsg );
HRESULT GetParam( REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, MUSIC_TIME* pmtNext, void* pParam );
HRESULT GetPatch( DWORD* pdwPatch );
HRESULT GetPrepareTime( DWORD* pdwMilliSeconds );
HRESULT GetQueueTime( REFERENCE_TIME* prtTime );
HRESULT GetRepeats( DWORD* pdwRepeats );
HRESULT GetResolvedTime( REFERENCE_TIME rtTime, REFERENCE_TIME* prtResolved, DWORD dwTimeResolveFlags );
HRESULT GetScale( DWORD* pdwScale );
HRESULT GetSeek( MUSIC_TIME* pmtSeek );
HRESULT GetSegment( IDirectMusicSegment** ppSegment );
HRESULT GetSegmentState( IDirectMusicSegmentState** ppSegmentState, MUSIC_TIME mtTime );
HRESULT GetStartPoint( MUSIC_TIME* pmtStart );
HRESULT GetTool( DWORD dwIndex, IDirectMusicTool** ppTool );
HRESULT InsertTool( IDirectMusicTool* pTool, DWORD* pdwPChannels, DWORD cPChannels, LONG lIndex );
HRESULT Invalidate( MUSIC_TIME mtTime, DWORD dwFlags );
HRESULT IsPlaying( IDirectMusicSegment* pSegment, IDirectMusicSegmentState* pSegState );
HRESULT MIDIToMusic( BYTE bMIDIValue, DMUS_CHORD_KEY* pChord, BYTE bPlayMode, BYTE bChordLevel, WORD* pwMusicValue );
HRESULT MusicToMIDI( WORD wMusicValue, DMUS_CHORD_KEY* pChord, BYTE bPlayMode, BYTE bChordLevel, BYTE* pbMIDIValue );
HRESULT MusicToReferenceTime( MUSIC_TIME mtTime, REFERENCE_TIME* prtTime );
HRESULT PChannelInfo( DWORD dwPChannel, IDirectMusicPort** ppPort, DWORD* pdwGroup, DWORD* pdwMChannel );
HRESULT PlaySegment( IDirectMusicSegment* pSegment, DWORD dwFlags, __int64 i64StartTime, IDirectMusicSegmentState** ppSegmentState );
HRESULT ReferenceToMusicTime( REFERENCE_TIME rtTime, MUSIC_TIME* pmtTime );
HRESULT ReleaseObject( IDirectMusicObject* pObject );
HRESULT RemoveNotificationType( REFGUID rguidNotificationType );
HRESULT RemovePort( IDirectMusicPort* pPort );
HRESULT RemoveTool( IDirectMusicTool* pTool );
HRESULT RhythmToTime( WORD wMeasure, BYTE bBeat, BYTE bGrid, short nOffset, DMUS_TIMESIGNATURE* pTimeSig, MUSIC_TIME* pmtTime );
HRESULT ScanDirectory( REFGUID rguidClass, WCHAR* pwzFileExtension, WCHAR* pwzScanFileName );
HRESULT SendPMsg( DMUS_PMSG* pPMSG );
HRESULT SetBumperLength( DWORD dwMilliSeconds );
HRESULT SetDescriptor( LPDMUS_OBJECTDESC pDesc );
HRESULT SetGlobalParam( REFGUID rguidType, void* pParam, DWORD dwSize );
HRESULT SetGraph( IDirectMusicGraph* pGraph );
HRESULT SetNotificationHandle( HANDLE hNotification, REFERENCE_TIME rtMinimum );
HRESULT SetParam( REFGUID rguidType, DWORD dwGroupBits, DWORD dwIndex, MUSIC_TIME mtTime, void* pParam );
HRESULT SetPrepareTime( DWORD dwMilliSeconds );
HRESULT SetSearchDirectory( REFGUID rguidClass, WCHAR* pwszPath, BOOL fClear );
HRESULT StampPMsg( DMUS_PMSG* pPMSG );
HRESULT TimeToRhythm( MUSIC_TIME mtTime, DMUS_TIMESIGNATURE* pTimeSig, WORD* pwMeasure, BYTE* pbBeat, BYTE* pbGrid, short* pnOffset );
HRESULT Unload( IDirectMusicPerformance* pPerformance );

#endif /* _DMUSICI_ */
