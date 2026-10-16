/* Dmusici.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 43 constants, 99 declarations, 1 outlines, 0 base types, 0 extra macros, 70 extra decls
 */
#ifndef _DMUSICI_
#define _DMUSICI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */
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
#endif /* _WIN32_WCE */

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* DMUS_OBJECTDESC  [struct; ce-only; CE 4.0..499] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* DMUS_MIDI_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct DMUS_MIDI_PMSGG {
 DMUS_PMSG_PART
 BYTE bStatus;
 BYTE bByte1;
 BYTE bByte2;
 BYTE bPad[1];
} DMUS_MIDI_PMSG;

/* DMUS_NOTE_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct DMUS_NOTE_PMSG {
 DMUS_PMSG_PART
 MUSIC_TIME mtDuration;
 WORD wMusicValue;
 WORD wMeasure;
 short nOffset;
 BYTE bBeat;
 BYTE bGrid;
 BYTE bVelocity;
 BYTE bFlags;
 BYTE bTimeRange;
 BYTE bDurRange;
 BYTE bVelRange;
 BYTE bPlayModeFlags;
 BYTE bSubChordLevel;
 BYTE bMidiValue;
} DMUS_NOTE_PMSG;

/* DMUS_NOTEF_FLAGS  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_NOTEF_FLAGS {
 DMUS_NOTEF_NOTEON = 1,
} DMUS_NOTEF_FLAGS;

/* DMUS_NOTIFICATION_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct DMUS_NOTIFICATION_PMSG {
 DMUS_PMSG_PART
 GUID guidNotificationType;
 DWORD dwNotificationOption;
 DWORD dwField1;
 DWORD dwField2;
} DMUS_NOTIFICATION_PMSG;

/* DMUS_PATCH_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct DMUS_PATCH_PMSG {
 DMUS_PMSG_PART
 BYTE byInstrument;
 BYTE byMSB;
 BYTE byLSB;
 BYTE byPad[1];
} DMUS_PATCH_PMSG;

/* DMUS_PLAYMODE_FLAGS  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_PLAYMODE_FLAGS {
 DMUS_PLAYMODE_KEY_ROOT = 1,
 DMUS_PLAYMODE_CHORD_ROOT = 2,
 DMUS_PLAYMODE_SCALE_INTERVALS = 4,
 DMUS_PLAYMODE_CHORD_INTERVALS = 8,
 DMUS_PLAYMODE_NONE = 16,
} DMUS_PLAYMODE_FLAGS;

/* DMUS_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct DMUS_PMSG {
 DWORD dwSize;
 REFERENCE_TIME rtTime;
 MUSIC_TIME mtTime;
 DWORD dwFlags;
 DWORD dwPChannel;
 DWORD dwVirtualTrackID;
 IDirectMusicTool* pTool;
 IDirectMusicGraph* pGraph;
 DWORD dwType;
 DWORD dwVoiceID;
 DWORD dwGroupID;
 IUnknown* punkUser;
} DMUS_PMSG;

/* DMUS_PMSGF_FLAGS  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_PMSGF_FLAGS {
 DMUS_PMSGF_REFTIME = 1,
 DMUS_PMSGF_MUSICTIME = 2,
 DMUS_PMSGF_TOOL_IMMEDIATE = 4,
 DMUS_PMSGF_TOOL_QUEUE = 8,
 DMUS_PMSGF_TOOL_ATTIME = 16,
 DMUS_PMSGF_TOOL_FLUSH = 32
} DMUS_PMSGF_FLAGS;

/* DMUS_PMSGT_TYPES  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_PMSGT_TYPES {
 DMUS_PMSGT_MIDI = 0,
 DMUS_PMSGT_NOTE = 1,
 DMUS_PMSGT_SYSEX = 2,
 DMUS_PMSGT_NOTIFICATION = 3,
 DMUS_PMSGT_TEMPO = 4,
 DMUS_PMSGT_CURVE = 5,
 DMUS_PMSGT_TIMESIG = 6,
 DMUS_PMSGT_PATCH = 7,
 DMUS_PMSGT_TRANSPOSE = 8,
 DMUS_PMSGT_CHANNEL_PRIORITY = 9,
 DMUS_PMSGT_STOP = 10,
 DMUS_PMSGT_DIRTY = 11,
 DMUS_PMSGT_USER = 255
} DMUS_PMSGT_TYPES;

/* DMUS_SEGF_FLAGS  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_SEGF_FLAGS {
 DMUS_SEGF_REFTIME = 64,
 DMUS_SEGF_SECONDARY = 128,
 DMUS_SEGF_QUEUE = 256,
 DMUS_SEGF_CONTROL = 512
 DMUS_SEGF_AFTERPREPARETIME = 1<<10,
 DMUS_SEGF_GRID = 1<<11,
 DMUS_SEGF_BEAT = 1<<12,
 DMUS_SEGF_MEASURE = 1<<13,
 DMUS_SEGF_DEFAULT = 1<<14,
 DMUS_SEGF_NOINVALIDATE = 1<<15,
} DMUS_SEGF_FLAGS;

/* DMUS_SHAPET_TYPES  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_SHAPET_TYPES {
 DMUS_SHAPET_FALLING = 0,
 DMUS_SHAPET_LEVEL = 1,
 DMUS_SHAPET_LOOPABLE = 2,
 DMUS_SHAPET_LOUD = 3,
 DMUS_SHAPET_QUIET = 4,
 DMUS_SHAPET_PEAKING = 5,
 DMUS_SHAPET_RANDOM = 6,
 DMUS_SHAPET_RISING = 7,
 DMUS_SHAPET_SONG = 8
} DMUS_SHAPET_TYPES;

/* DMUS_SUBCHORD  [struct; ce-only; CE 4.0..499] */
typedef struct {
 DWORD dwChordPattern;
 DWORD dwScalePattern;
 DWORD dwInversionPoints;
 DWORD dwLevels;
 BYTE bChordRoot;
 BYTE bScaleRoot;
} DMUS_SUBCHORD;

/* DMUS_SYNTHSTATS  [struct; ce-only; CE 4.0..499] */
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

/* DMUS_SYSEX_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct DMUS_SYSEX_PMSG {
 DMUS_PMSG_PART
 DWORD dwLen;
 BYTE abData[1];
} DMUS_SYSEX_PMSG;

/* DMUS_TEMPO_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct DMUS_TEMPO_PMSG {
 DMUS_PMSG_PART
 double dblTempo;
} DMUS_TEMPO_PMSG;

/* DMUS_TIME_RESOLVE_FLAGS  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_TIME_RESOLVE_FLAGS {
 DMUS_TIME_RESOLVE_AFTERPREPARETIME = 1<<10,
 DMUS_TIME_RESOLVE_GRID = 1<<11,
 DMUS_TIME_RESOLVE_BEAT = 1<<12,
 DMUS_TIME_RESOLVE_MEASURE = 1<<13
} DMUS_TIME_RESOLVE_FLAGS;

/* DMUS_TIMESIG_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct _DMUS_TIMESIG_PMSG {
 DMUS_PMSG_PART
 BYTE bBeatsPerMeasure;
 BYTE bBeat;
 WORD wGridsPerBeat;
} DMUS_TIMESIG_PMSG;

/* DMUS_TIMESIGNATURE  [struct; ce-only; CE 4.0..499] */
typedef struct _DMUS_TIMESIGNATURE {
 MUSIC_TIME mtTime;
 BYTE bBeatsPerMeasure;
 BYTE bBeat;
 WORD wGridsPerBeat;
} DMUS_TIMESIGNATURE;

/* DMUS_TRACKF_FLAGS  [enum; ce-only; CE 4.0..499] */
typedef enum enumDMUS_TRACKF_FLAGS {
 DMUS_TRACKF_SEEK = 1,
 DMUS_TRACKF_LOOP = 2,
 DMUS_TRACKF_START = 4,
 DMUS_TRACKF_FLUSH = 8,
 DMUS_TRACKF_DIRTY = 16
} DMUS_TRACKF_FLAGS;

/* DMUS_TRANSPOSE_PMSG  [struct; ce-only; CE 4.0..499] */
typedef struct _DMUS_TRANSPOSE_PMSG {
 DMUS_PMSG_PART
 short nTranspose;
} DMUS_TRANSPOSE_PMSG;

/* DMUS_VERSION  [struct; ce-only; CE 4.0..499] */
typedef struct _DMUS_VERSION {
 DWORD dwVersionMS;
 DWORD dwVersionLS;
} DMUS_VERSION, FAR *LPDMUS_VERSION;

/* IDirectMusicBand  [typedef; ce-only; CE 4.0..499; Dmusic.lib] */
typedef IDirectMusicBand __RPC_FAR *LPDMUS_BAND;

/* IDirectMusicLoader  [typedef; ce-only; CE 4.0..499; Dmusic.lib] */
typedef IDirectMusicLoader __RPC_FAR *LPDMUS_LOADER;

/* IDirectMusicObject  [typedef; ce-only; CE 4.0..499; Dmusic.lib] */
typedef IDirectMusicObject __RPC_FAR *LPDMUS_OBJECT;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 500)) /* CE 4.0..499 */

/* IDirectMusicBand::CreateSegment  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT CreateSegment(
 IDirectMusicSegment** ppSegment
);

/* IDirectMusicBand::Download  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Download(
 IDirectMusicPerformance* pPerformance
);

/* IDirectMusicBand::Unload  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Unload(
 IDirectMusicPerformance* pPerformance
);

/* IDirectMusicChordMap::GetScale  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetScale(
 DWORD* pdwScale
);

/* IDirectMusicComposer::AutoTransition  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AutoTransition(
 IDirectMusicPerformance* pPerformance,
 IDirectMusicSegment* pToSeg,
 WORD wCommand,
 DWORD dwFlags,
 IDirectMusicChordMap* pChordMap,
 IDirectMusicSegment** ppTransSeg,
 IDirectMusicSegmentState** ppToSegState,
 IDirectMusicSegmentState** ppTransSegState
);

/* IDirectMusicComposer::ChangeChordMap  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ChangeChordMap(
 IDirectMusicSegment* pSegment,
 BOOL fTrackScale,
 IDirectMusicChordMap* pChordMap
);

/* IDirectMusicComposer::ComposeSegmentFromShape  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ComposeSegmentFromShape(
 IDirectMusicStyle* pStyle,
 WORD wNumMeasures,
 WORD wShape,
 WORD wActivity,
 BOOL fIntro,
 BOOL fEnd,
 IDirectMusicChordMap* pChordMap,
 IDirectMusicSegment** ppSegment
);

/* IDirectMusicComposer::ComposeSegmentFromTemplate  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ComposeSegmentFromTemplate(
 IDirectMusicStyle* pStyle,
 IDirectMusicSegment* pTemplate,
 WORD wActivity,
 IDirectMusicChordMap* pChordMap,
 IDirectMusicSegment** ppSegment
);

/* IDirectMusicComposer::ComposeTemplateFromShape  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ComposeTemplateFromShape(
 WORD wNumMeasures,
 WORD wShape,
 BOOL fIntro,
 BOOL fEnd,
 WORD wEndLength,
 IDirectMusicSegment** ppTemplate
);

/* IDirectMusicComposer::ComposeTransition  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ComposeTransition(
 IDirectMusicSegment* pFromSeg,
 IDirectMusicSegment* pToSeg,
 MUSIC_TIME mtTime,
 WORD wCommand,
 DWORD dwFlags,
 IDirectMusicChordMap* pChordMap,
 IDirectMusicSegment** ppTransSeg
);

/* IDirectMusicGetLoader::GetLoader  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetLoader(
 IDirectMusicLoader** ppLoader
);

/* IDirectMusicGraph::GetTool  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetTool(
 DWORD dwIndex,
 IDirectMusicTool** ppTool
);

/* IDirectMusicGraph::InsertTool  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT InsertTool(
 IDirectMusicTool* pTool,
 DWORD* pdwPChannels,
 DWORD cPChannels,
 LONG lIndex
);

/* IDirectMusicGraph::RemoveTool  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT RemoveTool(
 IDirectMusicTool* pTool
);

/* IDirectMusicGraph::StampPMsg  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT StampPMsg(
 DMUS_PMSG* pPMSG
);

/* IDirectMusicInstrument::GetPatch  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetPatch(
 DWORD* pdwPatch
);

/* IDirectMusicLoader::CacheObject  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT CacheObject(
 IDirectMusicObject* pObject
);

/* IDirectMusicLoader::ClearCache  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ClearCache(
 REFGUID rguidClass
);

/* IDirectMusicLoader::EnableCache  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT EnableCache(
 REFGUID rguidClass,
 BOOL fEnable
);

/* IDirectMusicLoader::EnumObject  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT EnumObject(
 REFGUID rguidClass,
 DWORD dwIndex,
 LPDMUS_OBJECTDESC pDesc
);

/* IDirectMusicLoader::GetObject  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetObject(
 LPDMUS_OBJECTDESC pDESC,
 REFIID riid,
 LPVOID FAR* ppv
);

/* IDirectMusicLoader::ReleaseObject  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ReleaseObject(
 IDirectMusicObject* pObject
);

/* IDirectMusicLoader::ScanDirectory  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ScanDirectory(
 REFGUID rguidClass,
 WCHAR* pwzFileExtension,
 WCHAR* pwzScanFileName
);

/* IDirectMusicLoader::SetObject  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetObject(
 LPDMUS_OBJECTDESC pDESC
);

/* IDirectMusicLoader::SetSearchDirectory  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetSearchDirectory(
 REFGUID rguidClass,
 WCHAR* pwszPath,
 BOOL fClear
);

/* IDirectMusicObject::GetDescriptor  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetDescriptor(
LPDMUS_OBJECTDESC pDesc
);

/* IDirectMusicObject::SetDescriptor  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetDescriptor(
 LPDMUS_OBJECTDESC pDesc
);

/* IDirectMusicPerformance::AddNotificationType  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AddNotificationType(
 REFGUID rguidNotificationType
);

/* IDirectMusicPerformance::AddPort  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AddPort(
 IDirectMusicPort* pPort
);

/* IDirectMusicPerformance::AdjustTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AdjustTime(
 REFERENCE_TIME rtAmount
);

/* IDirectMusicPerformance::AllocPMsg  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AllocPMsg(
 ULONG cb,
 DMUS_PMSG** ppPMSG
);

/* IDirectMusicPerformance::AssignPChannel  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AssignPChannel(
 DWORD dwPChannel,
 IDirectMusicPort* pPort,
 DWORD dwGroup,
 DWORD dwMChannel
);

/* IDirectMusicPerformance::AssignPChannelBlock  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AssignPChannelBlock(
 DWORD dwBlockNum,
 IDirectMusicPort* pPort,
 DWORD dwGroup
);

/* IDirectMusicPerformance::CloseDown  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT CloseDown();

/* IDirectMusicPerformance::DownloadInstrument  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT DownloadInstrument(
 IDirectMusicInstrument* pInst,
 DWORD dwPChannel,
 IDirectMusicDownloadedInstrument** ppDownInst,
 DMUS_NOTERANGE* pNoteRanges,
 DWORD dwNumNoteRanges,
 IDirectMusicPort** ppPort,
 DWORD* pdwGroup,
 DWORD* pdwMChannel
);

/* IDirectMusicPerformance::FreePMsg  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT FreePMsg(
 DMUS_PMSG* pPMSG
);

/* IDirectMusicPerformance::GetBumperLength  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetBumperLength(
 DWORD* pdwMilliSeconds
);

/* IDirectMusicPerformance::GetGlobalParam  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetGlobalParam(
 REFGUID rguidType,
 void* pParam,
 DWORD dwSize
);

/* IDirectMusicPerformance::GetGraph  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetGraph(
 IDirectMusicGraph** ppGraph
);

/* IDirectMusicPerformance::GetLatencyTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetLatencyTime(
 REFERENCE_TIME* prtTime
);

/* IDirectMusicPerformance::GetNotificationPMsg  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetNotificationPMsg(
 DMUS_NOTIFICATION_PMSG** ppNotificationPMsg
);

/* IDirectMusicPerformance::GetParam  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetParam(
 REFGUID rguidType,
 DWORD dwGroupBits,
 DWORD dwIndex,
 MUSIC_TIME mtTime,
 MUSIC_TIME* pmtNext,
 void* pParam
);

/* IDirectMusicPerformance::GetPrepareTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetPrepareTime(
 DWORD* pdwMilliSeconds
);

/* IDirectMusicPerformance::GetQueueTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetQueueTime(
 REFERENCE_TIME* prtTime
);

/* IDirectMusicPerformance::GetResolvedTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetResolvedTime(
 REFERENCE_TIME rtTime,
 REFERENCE_TIME* prtResolved,
 DWORD dwTimeResolveFlags
);

/* IDirectMusicPerformance::GetSegmentState  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetSegmentState(
 IDirectMusicSegmentState** ppSegmentState,
 MUSIC_TIME mtTime
);

/* IDirectMusicPerformance::GetTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetTime(
 REFERENCE_TIME* prtNow,
 MUSIC_TIME* pmtNow
);

/* IDirectMusicPerformance::Init  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Init(
 IDirectMusic** ppDirectMusic,
 LPDIRECTSOUND pDirectSound,
 HWND hWnd
);

/* IDirectMusicPerformance::Invalidate  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Invalidate(
 MUSIC_TIME mtTime,
 DWORD dwFlags
);

/* IDirectMusicPerformance::IsPlaying  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT IsPlaying(
 IDirectMusicSegment* pSegment,
 IDirectMusicSegmentState* pSegState
);

/* IDirectMusicPerformance::MIDIToMusic  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT MIDIToMusic(
 BYTE bMIDIValue,
 DMUS_CHORD_KEY* pChord,
 BYTE bPlayMode,
 BYTE bChordLevel,
 WORD* pwMusicValue
);

/* IDirectMusicPerformance::MusicToMIDI  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT MusicToMIDI(
 WORD wMusicValue,
 DMUS_CHORD_KEY* pChord,
 BYTE bPlayMode,
 BYTE bChordLevel,
 BYTE* pbMIDIValue
);

/* IDirectMusicPerformance::MusicToReferenceTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT MusicToReferenceTime(
 MUSIC_TIME mtTime,
 REFERENCE_TIME* prtTime
);

/* IDirectMusicPerformance::PChannelInfo  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT PChannelInfo(
 DWORD dwPChannel,
 IDirectMusicPort** ppPort,
 DWORD* pdwGroup,
 DWORD* pdwMChannel
);

/* IDirectMusicPerformance::PlaySegment  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT PlaySegment(
 IDirectMusicSegment* pSegment,
 DWORD dwFlags,
 __int64 i64StartTime,
 IDirectMusicSegmentState** ppSegmentState
);

/* IDirectMusicPerformance::ReferenceToMusicTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT ReferenceToMusicTime(
 REFERENCE_TIME rtTime,
 MUSIC_TIME* pmtTime
);

/* IDirectMusicPerformance::RemoveNotificationType  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT RemoveNotificationType(
 REFGUID rguidNotificationType
);

/* IDirectMusicPerformance::RemovePort  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT RemovePort(
 IDirectMusicPort* pPort
);

/* IDirectMusicPerformance::RhythmToTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT RhythmToTime(
 WORD wMeasure,
 BYTE bBeat,
 BYTE bGrid,
 short nOffset,
 DMUS_TIMESIGNATURE* pTimeSig,
 MUSIC_TIME* pmtTime
);

/* IDirectMusicPerformance::SendPMsg  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SendPMsg(
 DMUS_PMSG* pPMSG
);

/* IDirectMusicPerformance::SetBumperLength  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetBumperLength(
 DWORD dwMilliSeconds
);

/* IDirectMusicPerformance::SetGlobalParam  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetGlobalParam(
 REFGUID rguidType,
 void* pParam,
 DWORD dwSize
);

/* IDirectMusicPerformance::SetGraph  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetGraph(
 IDirectMusicGraph* pGraph
);

/* IDirectMusicPerformance::SetNotificationHandle  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetNotificationHandle(
 HANDLE hNotification,
 REFERENCE_TIME rtMinimum
);

/* IDirectMusicPerformance::SetParam  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetParam(
 REFGUID rguidType,
 DWORD dwGroupBits,
 DWORD dwIndex,
 MUSIC_TIME mtTime,
 void* pParam
);

/* IDirectMusicPerformance::SetPrepareTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT SetPrepareTime(
 DWORD dwMilliSeconds
);

/* IDirectMusicPerformance::Stop  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Stop(
 IDirectMusicSegment* pSegment,
 IDirectMusicSegmentState* pSegmentState,
 MUSIC_TIME mtTime,
 DWORD dwFlags
);

/* IDirectMusicPerformance::TimeToRhythm  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT TimeToRhythm(
 MUSIC_TIME mtTime,
 DMUS_TIMESIGNATURE* pTimeSig,
 WORD* pwMeasure,
 BYTE* pbBeat,
 BYTE* pbGrid,
 short* pnOffset
);

/* IDirectMusicSegment::AddNotificationType  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT AddNotificationType(
 REFGUID rguidNotificationType
);

/* IDirectMusicSegment::Clone  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT Clone(
 MUSIC_TIME mtStart,
 MUSIC_TIME mtEnd,
 IDirectMusicSegment** ppSegment
);

/* IDirectMusicSegmentState::GetRepeats  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetRepeats(
 DWORD* pdwRepeats
);

/* IDirectMusicSegmentState::GetSeek  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetSeek(
 MUSIC_TIME* pmtSeek
);

/* IDirectMusicSegmentState::GetSegment  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetSegment(
 IDirectMusicSegment** ppSegment
);

/* IDirectMusicSegmentState::GetStartPoint  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetStartPoint(
 MUSIC_TIME* pmtStart
);

/* IDirectMusicSegmentState::GetStartTime  [function; ce-only; CE 4.0..499; Dmusic.lib] */
HRESULT GetStartTime(
 MUSIC_TIME* pmtStart
);
#endif /* _WIN32_WCE */

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
