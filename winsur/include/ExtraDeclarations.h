/* ExtraDeclarations.h -- declarations without header assignment
 * 6433 unassigned declarations
 */
#ifndef _EXTRADECLARATIONS_H_
#define _EXTRADECLARATIONS_H_

typedef int (*HCI_CreateConnection_In)  (HANDLE hDeviceContext,  void *pCallContext,  BD_ADDR *pba,  unsigned short packet_type,  unsigned char page_scan_repetition_mode,  unsigned char page_scan_mode,  unsigned short clock_offset,  unsigned char allow_role_switch);
typedef PFN_BltFunction (*PFN_PCodeToCpuCode)(int FnIndex, DWORD * pPCode, GenBltSignature * pBltSig, void * pBltFn);
typedef int (*HCI_InquiryCompleteEvent) ( void* pUserContext, void* pCallContext, unsigned char status, unsigned char num_responses );
typedef LPVOID (*PFN_AllocHeapMem)( LPVOID pAddr, DWORD cbSize, DWORD fdwAction, LPDWORD pdwUserData );
typedef BOOL (*PFN_FreeHeapMem)( LPVOID pAddr, DWORD cbSize,  DWORD fdwAction,  DWORD dwUserData );
typedef enum ePN3State_t{ PN_3S_FALSE = MIN_PNALTHOLD_T, PN_3S_TRUE = 1, PN_3S_OTHER = MAX_PNALTHOLD_T }PN3State_t;
typedef enum ePNAccess_t{ PN_AS_READWRITE = MIN_PNACCESS_T, PN_AS_READ = MAX_PNACCESS_T }PNAccess_t;
typedef enum ePNData_t{ PN_DT_ALL = MIN_PNDATA_T, PN_DT_POSITION = 1, PN_DT_VELOCITY = 2, PN_DT_DEVICESTATE = 3, PN_DT_TIME = 4, PN_DT_TM = 5, PN_DT_ACCURACY = 6, PN_DT_STATION = 7, PN_DT_DEVICE = 8, PN_DT_CONFIG = 9, PN_DT_SETTINGS = 10, PN_DT_ALMANAC = 14, }PNData_t;
typedef enum ePNDatum_t{ PN_DA_WGS84 = MIN_PNDATUM_T }PNDatum_t;
typedef enum ePNDeviceState_t{ PN_DS_INVALIDDS = -1000, PN_DS_NOTPRESENT= MIN_DEVICESTATE_T, PN_DS_ERROR = 1, PN_DS_WARNING = 2, PN_DS_OK = 3, PN_DS_SEARCHING = 4, PN_DS_LEVEL1 = 5, PN_DS_LEVEL2 = 6, PN_DS_LEVEL3 = 7, PN_DS_LEVEL4 = 8, PN_DS_LEVEL5 = 9, PN_DS_LEVEL6 = 10, PN_DS_FOUND1SAT = 11, PN_DS_FOUND2SATS= 12, PN_DS_NOTIME = MAX_DEVICESTATE_T }PNDeviceState_t;
typedef enum ePNEnv_t{ PN_ET_STATIONARY = MIN_PNENV_T, PN_ET_OPENROAD = 1, PN_ET_URBANCANYON = 2, PN_ET_FOREST = 3, PN_ET_OPENOCEAN = 4, PN_ET_AIRCRAFT = 5, PN_ET_NONE = 6, PN_ET_USER = MAX_PNENV_T }PNEnv_t;
typedef enum ePNPowerState_t{ PN_PW_OFF = MIN_PNPOWERSTATE_T, PN_PW_SUSPENDED = 1, PN_PW_STANDBY = 2, PN_PW_LOWPOWER = 3, PN_PW_MIDPOWER = 4, PN_PW_FULLPOWER = MAX_PNPOWERSTATE_T }PNPowerState_t;
typedef enum ePNStationState_t{ PN_CS_UNAVAILABLE = MIN_PNSTATIONSTATE_T, PN_CS_IDLE = 1, PN_CS_SEARCHING = 2, PN_CS_TRACKING = MAX_PNSTATIONSTATE_T }PNStationState_t;
typedef enum SPCFGRULEATTRIBUTES{ SPRAF_TopLevel = (1 << 0), SPRAF_Active = (1 << 1), SPRAF_Export = (1 << 2), SPRAF_Import = (1 << 3), SPRAF_Interpreter = (1 << 4), SPRAF_Dynamic = (1 << 5), SPRAF_AutoPause = (1 << 16) } SPCFGRULEATTRIBUTES;
typedef enum CaptureMode { STRMBUF_TEMPORARY_RECORDING = 0, STRMBUF_PERMANENT_RECORDING} STRMBUF_CAPTURE_MODE;
enum StreamControlState CheckStreamState(  IMediaSample *pSample);
typedef enum {
  MERIT_PREFERRED = 0x800000,
  MERIT_NORMAL = 0x600000,
  MERIT_UNLIKELY = 0x400000,
  MERIT_DO_NOT_USE = 0x200000,
  MERIT_SW_COMPRESSOR = 0x100000,
  MERIT_HW_COMPRESSOR = 0x100050
};
typedef enum {
  ELEM_ADJ_BeforeBegin = 0,
  ELEM_ADJ_AfterBegin = 1,
  ELEM_ADJ_BeforeEnd = 2,
  ELEM_ADJ_AfterEnd = 3,
  ELEMENT_ADJACENCY_Max = 2147483647L
} ELEMENT_ADJACENCY;
typedef enum {
  TAGID_NULL = 0,
  TAGID_UNKNOWN = 1,
  TAGID_A = 2,
  TAGID_ACRONYM = 3,
  TAGID_ADDRESS = 4,
  TAGID_APPLET = 5,
  TAGID_AREA = 6,
  TAGID_B = 7,
  TAGID_BASE = 8,
  TAGID_BASEFONT = 9,
  TAGID_BDO = 10,
  TAGID_BGSOUND = 11,
  TAGID_BIG = 12,
  TAGID_BLINK = 13,
  TAGID_BLOCKQUOTE = 14,
  TAGID_BODY = 15,
  TAGID_BR = 16,
  TAGID_BUTTON = 17,
  TAGID_CAPTION = 18,
  TAGID_CENTER = 19,
  TAGID_CITE = 20,
  TAGID_CODE = 21,
  TAGID_COL = 22,
  TAGID_COLGROUP = 23,
  TAGID_COMMENT = 24,
  TAGID_COMMENT_RAW = 25,
  TAGID_DD = 26,
  TAGID_DEL = 27,
  TAGID_DFN = 28,
  TAGID_DIR = 29,
  TAGID_DIV = 30,
  TAGID_DL = 31,
  TAGID_DT = 32,
  TAGID_EM = 33,
  TAGID_EMBED = 34,
  TAGID_EVENT = 35,
  TAGID_FIELDSET = 36,
  TAGID_FONT = 37,
  TAGID_FORM = 38,
  TAGID_FRAME = 39,
  TAGID_FRAMESET = 40,
  TAGID_GENERIC = 41,
  TAGID_H1 = 42,
  TAGID_H2 = 43,
  TAGID_H3 = 44,
  TAGID_H4 = 45,
  TAGID_H5 = 46,
  TAGID_H6 = 47,
  TAGID_HEAD = 48,
  TAGID_HR = 49,
  TAGID_HTML = 50,
  TAGID_I = 51,
  TAGID_IFRAME = 52,
  TAGID_IMG = 53,
  TAGID_INPUT = 54,
  TAGID_INS = 55,
  TAGID_KBD = 56,
  TAGID_LABEL = 57,
  TAGID_LEGEND = 58,
  TAGID_LI = 59,
  TAGID_LINK = 60,
  TAGID_LISTING = 61,
  TAGID_MAP = 62,
  TAGID_MARQUEE = 63,
  TAGID_MENU = 64,
  TAGID_META = 65,
  TAGID_NEXTID = 66,
  TAGID_NOBR = 67,
  TAGID_NOEMBED = 68,
  TAGID_NOFRAMES = 69,
  TAGID_NOSCRIPT = 70,
  TAGID_OBJECT = 71,
  TAGID_OL = 72,
  TAGID_OPTION = 73,
  TAGID_P = 74,
  TAGID_PARAM = 75,
  TAGID_PLAINTEXT = 76,
  TAGID_PRE = 77,
  TAGID_Q = 78,
  TAGID_HTMLAREA = 79,
  TAGID_RP = 80,
  TAGID_RT = 81,
  TAGID_RUBY = 82,
  TAGID_S = 83,
  TAGID_SAMP = 84,
  TAGID_SCRIPT = 85,
  TAGID_SELECT = 86,
  TAGID_SMALL = 87,
  TAGID_SPAN = 88,
  TAGID_STRIKE = 89,
  TAGID_STRONG = 90,
  TAGID_STYLE = 91,
  TAGID_SUB = 92,
  TAGID_SUP = 93,
  TAGID_TABLE = 94,
  TAGID_TBODY = 95,
  TAGID_TC = 96,
  TAGID_TD = 97,
  TAGID_TEXTAREA = 98,
  TAGID_TFOOT = 99,
  TAGID_TH = 100,
  TAGID_THEAD = 101,
  TAGID_TITLE = 102,
  TAGID_TR = 103,
  TAGID_TT = 104,
  TAGID_U = 105,
  TAGID_UL = 106,
  TAGID_VAR = 107,
  TAGID_WBR = 108,
  TAGID_XMP = 109,
  TAGID_COUNT = 110,
  TAGID_LAST_PREDEFINED = 10000,
  ELEMENT_TAG_ID_Max = 2147483647L
} ELEMENT_TAG_ID;
typedef enum {
  CONTEXT_TYPE_None = 0,
  CONTEXT_TYPE_Text = 1,
  CONTEXT_TYPE_EnterScope = 2,
  CONTEXT_TYPE_ExitScope = 3,
  CONTEXT_TYPE_NoScope = 4
} MARKUP_CONTEXT_TYPE;
typedef enum {
  MOVEUNIT_PREVCHAR = 0,
  MOVEUNIT_NEXTCHAR = 1,
  MOVEUNIT_PREVCLUSTERBEG = 2,
  MOVEUNIT_NEXTCLUSTERBEG = 3,
  MOVEUNIT_PREVCLUSTEREND = 4,
  MOVEUNIT_NEXTCLUSTEREND = 5,
  MOVEUNIT_PREVWORDBEG = 6,
  MOVEUNIT_NEXTWORDBEG = 7,
  MOVEUNIT_PREVWORDEND = 8,
  MOVEUNIT_NEXTWORDEND = 9,
  MOVEUNIT_PREVPROOFWORD = 10,
  MOVEUNIT_NEXTPROOFWORD = 11,
  MOVEUNIT_NEXTURLBEG = 12,
  MOVEUNIT_PREVURLBEG = 13,
  MOVEUNIT_NEXTURLEND = 14,
  MOVEUNIT_PREVURLEND = 15,
  MOVEUNIT_PREVSENTENCE = 16,
  MOVEUNIT_NEXTSENTENCE = 17,
  MOVEUNIT_PREVBLOCK = 18,
  MOVEUNIT_NEXTBLOCK = 19,
  MOVEUNIT_ACTION_Max = 2147483647L
} MOVEUNIT_ACTION;
typedef enum {  POINTER_GRAVITY_Left = 0,  POINTER_GRAVITY_Right = 1  } POINTER_GRAVITY;
typedef enum {
  TLEF_RELATIVE_INCLUDE_CURRENT = 0x00000001,
  TLEF_RELATIVE_BACK = 0x00000010,
  TLEF_RELATIVE_FORE = 0x00000020,
  TLEF_INCLUDE_UNINVOKEABLE = 0x00000040,
  TLEF_ABSOLUTE = 0x00000031
} TLENUMF;
enum StreamControlState {STREAM_FLOWING, STREAM_DISCARDING};
typedef enum {
  STREAMBUFFER_EC_TIMEHOLE = 0x326,
  STREAMBUFFER_EC_STALE_DATA_READ =
  STREAMBUFFER_EC_TIMEHOLE + 1,
  STREAMBUFFER_EC_STALE_FILE_DELETED =
  STREAMBUFFER_EC_STALE_DATA_READ + 1,
  STREAMBUFFER_EC_CONTENT_BECOMING_STALE =
  STREAMBUFFER_EC_STALE_FILE_DELETED + 1,
  STREAMBUFFER_EC_WRITE_FAILURE =
  STREAMBUFFER_EC_CONTENT_BECOMING_STALE + 1,
  STREAMBUFFER_EC_READ_FAILURE =
  STREAMBUFFER_EC_WRITE_FAILURE + 1,
  STREAMBUFFER_EC_RATE_CHANGED =
  STREAMBUFFER_EC_READ_FAILURE + 1
};
typedef enum STRMBUF_PLAYBACK_TUNE_POLICY { STRMBUF_PLAYBACK_TUNE_FLUSH_AND_GO_TO_LIVE, STRMBUF_PLAYBACK_TUNE_IGNORED} STRMBUF_PLAYBACK_TUNE_POLICY;
enum tagDOMNodeType {NODE_INVALID,NODE_ELEMENT, 1 NODE_ATTRIBUTE,NODE_TEXT,NODE_CDATA_SECTION,NODE_ENTITY_REFERENCE,NODE_ENTITY,NODE_PROCESSING_INSTRUCTION,NODE_COMMENT,NODE_DOCUMENT,NODE_DOCUMENT_TYPE,NODE_DOCUMENT_FRAGMENT,NODE_NOTATION} DOMNodeType;
typedef enum { MERIT_PREFERRED = 0x800000, MERIT_NORMAL = 0x600000, MERIT_UNLIKELY = 0x400000, MERIT_DO_NOT_USE = 0x200000, MERIT_SW_COMPRESSOR = 0x100000, MERIT_HW_COMPRESSOR = 0x100050};
enum MPEG2Level {MPEG2Level_Low = 1, MPEG2Level_Main, MPEG2Level_High1440, MPEG2Level_High};
enum MPEG2Profile {MPEG2Profile_Simple = 1, MPEG2Profile_Main, MPEG2Profile_SNRScalable, MPEG2Profile_SpatiallyScalable, MPEG2Profile_High};
typedef enum ePNDeviceState_t{
  PN_DS_INVALIDDS = -1000,
  PN_DS_NOTPRESENT= MIN_DEVICESTATE_T,
  PN_DS_ERROR = 1,
  PN_DS_WARNING = 2,
  PN_DS_OK = 3,
  PN_DS_SEARCHING = 4,
  PN_DS_LEVEL1 = 5,
  PN_DS_LEVEL2 = 6,
  PN_DS_LEVEL3 = 7,
  PN_DS_LEVEL4 = 8,
  PN_DS_LEVEL5 = 9,
  PN_DS_LEVEL6 = 10,
  PN_DS_FOUND1SAT = 11,
  PN_DS_FOUND2SATS= 12,
  PN_DS_NOTIME = MAX_DEVICESTATE_T
}PNDeviceState_t;
enum StreamControlState CheckStreamState( 
 IMediaSample* pSample
);
enum MANAGED_COMMANDHANDLER_TYPE {
 MANAGED_COMMANDHANDLER_SYNC = 1,
 MANAGED_COMMANDHANDLER_ASYNC = 2
};
enum MANAGED_DATATYPE {
 MANAGED_DATATYPE_BYTES = 0,
 MANAGED_DATATYPE_WORD = 2,
 MANAGED_DATATYPE_DWORD = 3,
 MANAGED_DATATYPE_WSTR = 5,
 MANAGED_DATATYPE_END = 6
};
typedef enum {
 STREAMBUFFER_EC_TIMEHOLE = 0x326,
 STREAMBUFFER_EC_STALE_DATA_READ = 
 STREAMBUFFER_EC_TIMEHOLE + 1,
 STREAMBUFFER_EC_STALE_FILE_DELETED = 
 STREAMBUFFER_EC_STALE_DATA_READ + 1,
 STREAMBUFFER_EC_CONTENT_BECOMING_STALE = 
 STREAMBUFFER_EC_STALE_FILE_DELETED + 1,
 STREAMBUFFER_EC_WRITE_FAILURE = 
 STREAMBUFFER_EC_CONTENT_BECOMING_STALE + 1,
 STREAMBUFFER_EC_READ_FAILURE = 
 STREAMBUFFER_EC_WRITE_FAILURE + 1,
 STREAMBUFFER_EC_RATE_CHANGED = 
 STREAMBUFFER_EC_READ_FAILURE + 1
 };
DWORD AAM_AudioIoControl ( DWORD dwFlag, DWORD dwIoControlCode, LPVOID lpInBuf, DWORD nInBufSize, LPVOID lpOutBuf, DWORD nOutBufSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverLapped );
DWORD AAM_EQBandControl( DWORD dwIndex, DWORD dwFlags, LONG *plValue );
DWORD AAM_EQPreset( DWORD dwFlag LONG *plValue);
DWORD AAM_EnableSSD ( BOOL bEnable );
DWORD AAM_FilterControl ( DWORD dwFlags, DWORD *plEnable, DWORD *plFreq );
DWORD AAM_GetEQCaps( DWORD *pdwCap );
DWORD AAM_GetNumSources( void );
DWORD AAM_GetSSDCaps( DWORD *pdwCap );
DWORD AAM_GetSourceCap( IN DWORD dwIndex, OUT AAM_SRCCAP *pASC );
DWORD AAM_RegisterAudioCtrl( AAM_SRCCAP pSrc, BOOL bRegister );
DWORD AAM_RegisterCallback( DWORD idThread, BOOL bRegister );
DWORD AAM_SSDControl( DWORD dwFlag LONG *plValue );
DWORD AAM_SelectSource( DWORD dwAudioSourceID );
DWORD AAM_VolumeControl( DWORD dwFlag, LONG *plValue );
DWORD AMGetErrorText( HRESULT hr, TCHAR *pBuffer, DWORD MaxLen);
VOID STDAPI AMGetWideString( LPCWSTR pszString, LPWSTR *ppszReturn);
HRESULT AMovieDllRegisterServer(void);
HRESULT AMovieDllUnregisterServer(void);
BOOL AbortPipeTransfers( USB_PIPE hPipe, DWORD dwFlags );
HRESULT Activate( HWND hwndParent, LPCRECT prect, BOOL fModal );
HRESULT ActivateWindow( );
HRESULT Active(void);
DWORD AddAdvisePacket( const REFERENCE_TIME & time1, const REFERENCE_TIME & time2, HANDLE hNotify, BOOL bPeriodic);
BOOL AddAfter( POSITION pos, CBaseList *pList);
BOOL AddBefore( POSITION pos, CBaseList *pList);
BOOL AddHead( CBaseList *pList);
HRESULT AddImage( OLE_HANDLE hImage, OLE_HANDLE hImageMask, long lData );
HRESULT AddItemsFromResource ( HINSTANCE hinst, PCWSTR pszMenuName, DWORD dwMenuState );
void AddParameterBytes( HPACKET hPacket, BYTE *pData, DWORD cbData );
void AddParameterDWORD( HPACKET hPacket, DWORD dwData );
void AddParameterString( HPACKET hPacket, WCHAR *szData );
void AddParameterWORD( HPACKET hPacket, WORD wData );
HRESULT AddPin( CSourceStream *pStream );
HRESULT AddSIFile( LPCWSTR lpszFileName, DWORD *pdwID, DWORD dwFlag );
BOOL AddTail( CBaseList *pList);
HRESULT AddWithIndex( BSTR bstr, long lData, long *lpIndex );
HRESULT AdvisePeriodic( REFERENCE_TIME StartTime, REFERENCE_TIME PeriodTime, HSEMAPHORE hSemaphore, DWORD *pdwAdviseToken);
HRESULT AdviseTime( REFERENCE_TIME baseTime, REFERENCE_TIME streamTime, HEVENT hEvent, DWORD *pdwAdviseToken);
HRESULT AgreeMediaType( IPin *pReceivePin, const CMediaType *pmt);
int Alert( HWND hwndParent, UINT uType, UINT uMessage, ... );
DWORD AlignedWidth (void );
HRESULT Alloc(void);
HRESULT AlterQuality( Quality q );
HRESULT Apply(void);
VOID WINAPI AreEqualVideoTypes ( CMediaType *pmt1, CMediaType *pmt2);
HRESULT AttribChanged( DWORD dwAttribute);
HRESULT AudioPause(void);
HRESULT AudioResume(void);
DWORD Available (void );
HRESULT AwakeStateGet( DWORD*pdwAwake );
HRESULT AwakeStateSet( DWORD dwAwake );
HRESULT BearingToVelocity ( const pPNVELENU pENUVel, pPNVELBEAR pBearVel );
HRESULT BeginFlush(void);
HRESULT BeginMessage(void);
HRESULT BeginMessageWSDL( IWSDLOperation* pOperation );
void BltPrepare ( DDGPEBltParms *pddgpeBltParms );
DWORD Bpp (void );
HRESULT BreakConnect(void);
void BufferFree (BD_BUFFER *pBuf);
BOOL CAM_Close( DWORD Context );
BOOL CAM_Deinit( DWORD dwContext );
BOOL CAM_IOControl( DWORD dwContext, DWORD Ioctl, UCHAR* pInBuf, DWORD InBufLen, UCHAR* pOutBuf, DWORD OutBufLen, DWORD* pdwBytesTransferred );
DWORD CAM_Init( VOID* pContext );
DWORD CAM_Open( DWORD Context, DWORD Access, DWORD ShareMode );
int CFunc();
BOOL CMPRegister ( DWORD dwProcessId, DWORD dwNotifyInterval, DWORD dwRecoverFlags, WCHAR *pCommandLine, PCPMCALLBACK pfnCPMCallBack, DWORD dwRecoverFailFlags );
BOOL COM_Close( DWORD pContext );
BOOL COM_Deinit(void);
BOOL COM_IOControl( DWORD dwOpenData, DWORD dwCode, PBYTE pBufIn, DWORD dwLenIn, PBYTE pBufOut, DWORD dwLenOut, PDWORD pdwActualOut );
HANDLE COM_Init( ULONG Identifier );
HANDLE COM_Open( HANDLE pContext, DWORD AccessCode, DWORD ShareMode );
BOOL COM_PowerDown( HANDLE pContext );
BOOL COM_PowerUp( HANDLE pContext );
LONG COM_Read( HANDLE pContext, PUCHAR pTargetBuffer, ULONG BufferLength , PULONG pBytesRead );
LONG COM_Write( HANDLE COM_Write, PUCHAR pSourceBytes, ULONG NumberOfBytes );
void CPMCallback ( DWORD dwCommand, DWORD dwCmdInfo );
BOOL CPMNotify ( DWORD dwProcessID );
BOOL CPMUnRegister ( DWORD dwProcessId );
BOOL CPUClearSysTimerIRQ(void);
void CPUEnterIdle(DWORD dwIdleParam);
DWORD CPUGetSysTimerCountElapsed( DWORD dwTimerCountdownMSec, volatile DWORD *pCurMSec, DWORD *pPartialCurMSec, volatile ULARGE_INTEGER *pCurTicks );
DWORD CPUGetSysTimerCountMax(DWORD dwIdleMSecRequested);
void CPUSetSysTimerCount(DWORD dwIdleMSec);
void CalculatePrimes(UINT n);
DWORD CallWorker( DWORD dw);
HRESULT CanSeekBackward( LONG *pCanSeekBackward );
HRESULT CanSeekForward( LONG *pCanSeekForward );
HRESULT CancelNotification(void);
BOOL Check(void);
HRESULT CheckCapabilities( DWORD * pCapabilities );
HRESULT CheckConnect( IPin *pPin);
HRESULT CheckMediaType( const CMediaType *pmt );
BOOL CheckReady(void);
BOOL CheckRequest( DWORD *pParam);
HRESULT CheckSourceRect( RECT *pSourceRect);
HRESULT CheckStreaming( );
HRESULT CheckTargetRect( RECT *pTargetRect);
HRESULT CheckTransform( const CMediaType *mtIn, const CMediaType *mtOut );
HRESULT CleanupOrphanedRecordings( LPCOLESTR pszDirName);
UINT CleanupTestThread( HANDLE hThread, DWORD dwThreadId, int index );
HRESULT ClearPendingSample(void);
HRESULT ClipAndCommit( OLE_HANDLE hrgnClip );
HRESULT CloseAppByName( BSTR bstrAppName, BOOL fTerminate );
void CloseBrowser();
HRESULT CloseDevice( hPNDevice hPN, );
VOID WINAPI ClosePerformanceData();
HRESULT CmdMimic( PVCMDNAME pMenu, PTSTR pszCommand);
VOID WINAPI CollectPerformanceData( LPWSTR lpwszValue, LPVOID *lppData, LPDWORD lpcbBytes, LPDWORD lpcObjectTypes );
DWORD ColorKeyHigh(void );
DWORD ColorKeyLow (void );
DWORD ColorKeyMask (void );
HRESULT CommandOther( PVCMDNAME pName, PTSTR pszCommand);
HRESULT CommandRecognize( DWORD dwID, PVCMDNAME pvCmdName, DWORD dwFlags, DWORD dwActionSize, PVOID pAction, DWORD dwNumLists, PTSTR pszListValues, PTSTR pszCommand);
HRESULT CommandStart();
HRESULT CommitAt( long xDest, long yDest, long xSrc, long ySrc, long dx, long dy );
HRESULT CommitFrom( long xSrc, long ySrc );
HRESULT CompleteConnect( IPin *pReceivePin);
HRESULT CompleteStateChange( FILTER_STATE OldState);
BOOL ConfigInit(PPCI_DEV_INFO pInfo);
BOOL ConfigRsrc(PPCI_DEV_INFO pInfo,PPCI_RSRC pMemHead,PPCI_RSRC pIoHead,DWORD* pMemSize,DWORD* pIoSize);
BOOL ConfigSet(PPCI_RSRC pRsrc);
BOOL ConfigSize(PPCI_DEV_INFO pInfo);
HRESULT Connect( IPin *pReceivePin, const AM_MEDIA_TYPE *pmt);
HRESULT ConnectWSDL( IWSDLPort* Port );
HRESULT ConnectedTo( IPin **ppPin);
HRESULT ConnectionMediaType( AM_MEDIA_TYPE *pmt);
BOOL ContainsPalette( const VIDEOINFOHEADER *pVideoInfo);
VOID WINAPI ConvertToMilliseconds( const REFERENCE_TIME& RT);
HRESULT ConvertToTemporaryRecording( LPCOLESTR pszFileName);
VOID STDAPI ConvertVideoInfoToVideoInfo2( AM_MEDIA_TYPE *pmt);
HRESULT CopyImage( IMediaSample *pMediaSample, VIDEOINFOHEADER *pVideoInfo, LONG *pBufferSize, BYTE *pVideoImage, RECT *pSourceRect);
VOID WINAPI CopyMediaType( AM_MEDIA_TYPE *pmtTarget, const AM_MEDIA_TYPE *pmtSource);
BOOL Create(void);
HRESULT CreateBrowserObject();
HRESULT CreateBrowserWindow();
HRESULT CreateCaptureBuffer( LPWAVEFORMATEX pwfx, DWORD dwFlags, DWORD dwCardAddress, LPDWORD pdwcbBufferSize, LPBYTE *ppbBuffer, LPVOID *ppvObj );
HRESULT CreateCommand( HPACKET *pHPacket );
HRESULT CreateFMCompatibleBitmap( OLE_HANDLE hFC, OLE_HANDLE *phBitMap, LONG Width, LONG Height );
HRESULT CreateFMCompatibleDC( OLE_HANDLE hFC, OLE_HANDLE *phDC );
VOID WINAPI CreateMediaType( AM_MEDIA_TYPE const *pSrc);
HRESULT CreatePortConnector( IWSDLPort* pPort, ISoapConnector** ppConnector );
VOID STDAPI CreatePosPassThru( LPUNKNOWN pAgg, BOOL bRenderer, IPin *pPin, IUnknown **ppPassThru);
HRESULT CreateSoundBuffer( LPWAVEFORMATEX pwfx, DWORD dwFlags, DWORD dwCardAddress, LPDWORD pdwcbBufferSize, LPBYTE *ppbBuffer, LPVOID *ppvObj );
HRESULT CreateVirtualMachine( [in] LPOLESTR commandLine );
VOID WINAPI CritCheckIn( CCritSec *pcCrit);
VOID WINAPI CritCheckOut( CCritSec *pcCrit);
BOOL CustomTrackPopupMenu( HMENU hmenu, UNIT uFlags, Int x, Int y, HWND hWnd, LPTPMPARAMS lpTpm, BOOL fSelectFirst, BOOL *pfCustomTracked );
VOID WINAPI DDGPEBlt ( LPDDHAL_BLTDATA pd );
VOID WINAPI DDGPECreateExecuteBuffer ( LPDDHAL_CREATESURFACEDATA pd );
VOID WINAPI DDGPECreatePalette ( LPDDHAL_CREATEPALETTEDATA pd );
VOID WINAPI DDGPECreateSurface ( LPDDHAL_CREATESURFACEDATA pd );
VOID WINAPI DDGPEDestroyDriver ( LPDDHAL_DESTROYDRIVERDATA pd );
VOID WINAPI DDGPEDestroyExecuteBuffer ( LPDDHAL_DESTROYSURFACEDATA pd );
VOID WINAPI DDGPEDestroyPalette ( LPDDHAL_DESTROYPALETTEDATA pd );
VOID WINAPI DDGPEDestroySurface ( LPDDHAL_DESTROYSURFACEDATA pd );
VOID WINAPI DDGPEFlip ( LPDDHAL_FLIPDATA pd );
VOID WINAPI DDGPEFlipToGDISurface ( LPDDHAL_FLIPTOGDISURFACEDATA pd );
VOID WINAPI DDGPEGetFlipStatus ( LPDDHAL_GETFLIPSTATUSDATA pd );
VOID WINAPI DDGPELock ( LPDDHAL_LOCKDATA pd );
VOID WINAPI DDGPESetColorKey ( LPDDHAL_SETCOLORKEYDATA pd );
VOID WINAPI DDGPESetColorKeyDrv ( LPDDHAL_DRVSETCOLORKEYDATA pd );
VOID WINAPI DDGPESetEntries ( LPDDHAL_SETENTRIESDATA pd );
VOID WINAPI DDGPESetMode ( LPDDHAL_SETMODEDATA pd );
VOID WINAPI DDGPESetPalette ( LPDDHAL_SETPALETTEDATA pd );
VOID WINAPI DDGPEUnlock ( LPDDHAL_UNLOCKDATA pd );
VOID WINAPI DDGPEWaitForVerticalBlank ( LPDDHAL_WAITFORVERTICALBLANKDATA pd );
BOOL DRM_ND_GetPrivateKey( PrivateKeyDef *pDef);
int Data();
VOID WINAPI DbgAssert( const TCHAR *pCondition, const TCHAR *pFileName, INT iLine);
VOID WINAPI DbgBreakPoint( const TCHAR *pCondition, const TCHAR *pFileName, INT iLine);
VOID WINAPI DbgDumpObjectRegister( );
VOID WINAPI DbgKernelAssert( const TCHAR *pCondition, const TCHAR *pFileName, INT iLine);
VOID WINAPI DbgLockTrace( CCritSec *pcCrit, BOOL fTrace);
VOID WINAPI DbgOutString( LPCTSTR psz);
VOID WINAPI DbgSetWaitTimeout( DWORD dwTimeout);
VOID WINAPI DbgWaitForMultipleObjects( DWORD nCount, CONST HANDLE *lpHandles, BOOL bWaitAll);
VOID WINAPI DbgWaitForSingleObject( HANDLE h);
BOOL DeInit();
HRESULT Deactivate(void);
void DebugInitialize (void);
void DebugOut (unsigned int cMask, WCHAR *lpszFormat, ...);
HRESULT DecideAllocator( IMemInputPin *pPin, IMemAllocator **pAlloc);
HRESULT DecideBufferSize( IMemAllocator *pAlloc, ALLOCATOR_PROPERTIES *ppropInputRequest );
HRESULT Decommit(void);
BOOL DecryptFile (LPTSTR, LPTSTR, LPTSTR);
HRESULT DegreesToRadians ( pPNPOSLLA pLLAPos );
void Deinitialize();
HRESULT DeleteDeviceList ( pPNDEVICE pPNDeviceHead );
VOID WINAPI DeleteMediaType( AM_MEDIA_TYPE *pmt);
HRESULT DeleteRecording( LPCOLESTR pszFileName);
void DeleteSurface ( LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface );
HRESULT DeleteVirtualMachine( [in] GUID* virtualMachineID );
HRESULT Deliver( IMediaSample *pSample);
HRESULT DeliverBeginFlush(void);
HRESULT DeliverEndFlush(void);
HRESULT DeliverEndOfStream(void);
HRESULT DeliverNewSegment( REFERENCE_TIME tStart, REFERENCE_TIME tStop, double dRate);
HRESULT DeregisterStartedApplication( OLE_HANDLE hFC, BSTR bstrAppName );
BOOL DestroyInstance( DWORD InstanceIndex);
DWORD DeviceConfig(DWORD Command, PPCI_DEV_INFO pInfo,PPCI_RSRC pRsrc1,PPCI_RSRC pRsrc2,DWORD* pMemSize,DWORD* pIoSize);
void DisableWindow();
HRESULT Disconnect( );
void DisplayPinInfo( IPin *pReceivePin);
void DisplayTypeInfo( IPin *pPin, const CMediaType *pmt);
BOOL DllEntry(HANDLE hInstDll, DWORD dwReason, LPVOID lpvReserved);
HRESULT DoBufferProcessingLoop(void);
HRESULT DoGetWindowStyle( long *pStyle, long WindowLong);
HRESULT DoRealisePalette( BOOL bForceBackground);
void DoSetWindowForeground( BOOL bFocus);
HRESULT DoSetWindowStyle( long Style, long WindowLong);
HRESULT DoShowWindow( LONG ShowCmd);
void DoSomething(void);
UINT DoStressIteration( HANDLE hThread, DWORD dwThreadId, LPVOID pv );
HRESULT DoneWithWindow( );
void DumpBuff (unsigned int cMask, unsigned char *lpBuffer, unsigned int cBuffer);
HRESULT DuplicateSoundBuffer( IDSDRIVERBUFFER pIDsDriverBuffer, LPVOID *ppv );
HRESULT Duration( REFERENCE_TIME *ptDuration );
void EOS( );
BOOL EdbgCancelRegisterClient( CHAR * ServiceName CHAR * DeviceName );
HRESULT EnableItem( DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT EnabledGet( DWORD *dwEnabled );
HRESULT EnabledSet( DWORD dwEnabled );
BOOL EncryptFile (LPTSTR, LPTSTR, LPTSTR);
HRESULT EndFlush(void);
HRESULT EndMessage(void);
HRESULT EndOfStream(void);
HRESULT EnumMediaTypes( IEnumMediaTypes **ppEnum);
HRESULT EnumPins( IEnumPins **ppEnum);
BOOL EqualPins( IUnknown *pPin1, IUnknown *pPin2);
BOOL ErrorAnalysis(INT32 cCalibrationPoints,INT32* pScreenXBuffer,INT32* pScreenYBuffer,INT32* pUncalXBuffer,INT32* pUncalYBuffer);
DWORD EventThread(LPVOID threadParams);
HRESULT ExecuteOperation( ISoapReader* pISoapReader, ISoapSerializer* pISoapSerializer );
HRESULT Exit(void);
int ExtensionLayer_CloseDriverInstance (void);
int ExtensionLayer_CreateDriverInstance (void);
int ExtensionLayer_InitializeOnce (void);
int ExtensionLayer_UnInitialize (void);
HRESULT FindItem( BSTR bstr, long lIndexStart, long *pIndex );
HRESULT FindItemPartial( BSTR bstr, long lIndexStart, long *pIndex );
HRESULT FindPin( LPCWSTR Id, IPin **ppPin);
int FindPinNumber( IPin *iPin );
VOID WINAPI FingerWorker(LPVOID lpv);
HRESULT FlagKeysUsed( long lKeysUsed, long lKeysEaten );
void Flushing( BOOL bInProgress);
HRESULT ForceRefresh( );
VOID STDAPI FreeBSTR( BSTR *pstr);
HRESULT FreeCommand( HPACKET hPacket );
VOID WINAPI FreeMediaType( AM_MEDIA_TYPE& mt);
void FreeResources();
void FreeSamples( );
void FreeString( HPACKET hPacket, WCHAR *pszData );
HRESULT GetActualDataLength(void);
DWORD GetAdviseCount( );
HRESULT GetAllocator( IMemAllocator **ppAllocator);
HRESULT GetAllocatorRequirements( ALLOCATOR_PROPERTIES * pProps);
HRESULT GetAppAlertState( OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, BOOL *pfAlert, LONG *pAlertVal );
BOOL GetAvailableDataSize( HPACKET hPacket, DWORD *pdwAvailable );
BOOL GetBaseAddress(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset, DWORD dwNewLength, DWORD& dwNewBaseAddress);
LONG GetBitmapFormatSize( const BITMAPINFOHEADER *pHeader);
DWORD GetBitmapSize( const BITMAPINFOHEADER *pHeader);
HRESULT GetBoundToLiveToken( LPOLESTR* ppszToken);
HRESULT GetBounds( long *plxLeft, long *plyTop, long *pldxWidth, long *pldyHeight );
HRESULT GetBuffer( IMediaSample **ppBuffer, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime, DWORD dwFlags);
HRESULT GetBufferingDepth( REFERENCE_TIME* ptStop );
HRESULT GetCapabilities( DWORD * pCapabilities );
HRESULT GetCaps( PDSDRIVERCAPS pDsDrvCaps );
HRESULT GetCaption( long lIndex, long lItemId, long lItemData, BSTR *pbstrCaption );
HRESULT GetCommonBoolProperties( short *pwProps );
int GetCount( );
int GetCountI( );
HRESULT GetCurrentImage( long *pBufferSize, long *pVideoImage);
HRESULT GetCurrentPosition( LPDWORD lpdwCurrentCaptureCursor, LPDWORD lpdwCurrentWriteCursor );
DWORD GetCurrentTemp (DWORD dwShelfId);
HRESULT GetDeliveryBuffer( IMediaSample **ppSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime, DWORD dwFlags);
HRESULT GetDestinationPosition( long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetDriverDesc( PDSDRIVERDESC pDsDriverDesc );
HANDLE GetEvent( );
HRESULT GetFMSystemFont( OLE_HANDLE hFC, BOOL fSmall, IDispatch **ppdispFont);
DWORD GetFOURCC(void);
HRESULT GetFormDisplayCaps( OLE_HANDLE hFC, LONG nIndex, LONG *pRetInfo);
HRESULT GetFormsContextHandle( OLE_HANDLE *phFC );
HRESULT GetIFMDraw( IDispatch **ppdispFMDraw, long lxLeft, long lyTop, long lxWidth, long lyHeight );
HRESULT GetImageSize( VIDEOINFOHEADER *pVideoInfo, long *pBufferSize, RECT *pSourceRect);
HRESULT GetMaxIdealImageSize( long *pWidth, long *pHeight);
HRESULT GetMediaPositionInterface( REFIID riid, void **ppv);
HRESULT GetMediaType( int iPosition, const CMediaType *pMediaType);
LONG GetMediaTypeVersion( );
HRESULT GetMinIdealImageSize( long *pWidth, long *pHeight);
DWORD GetNewLength(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset);
DWORD GetNewOffset(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset);
BOOL GetNextParameterType( HPACKET hPacket, MANAGED_DATATYPE *pType, DWORD *pSize );
HRESULT GetOperationParts( IenumSoapMappers** ppIEnumSoapMappers );
HRESULT GetPageInfo( LPPROPPAGEINFO pPageInfo );
BOOL GetParameterBytes( HPACKET hPacket, BYTE *pData, DWORD cbData );
BOOL GetParameterDWORD( HPACKET hPacket, DWORD *pdwData );
BOOL GetParameterString( HPACKET hPacket, WCHAR **pszData );
BOOL GetParameterWORD( HPACKET hPacket, WORD *pwData );
HRESULT GetPhraseList( DWORD dwFlags, PWSTR pszBuf PDWORD *pdwSize);
DWORD GetPhysicalModeId (void );
int GetPinCount(void);
HRESULT GetPointer( BYTE ** ppBuffer );
int GetPropToo(void);
HRESULT GetProperties( ALLOCATOR_PROPERTIES *pProps);
HRESULT GetRate( double *pdRate );
HRESULT GetRecordingPath( LPOLESTR* ppszPath);
DWORD GetRequest( );
HRESULT GetRestorePosition( long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetSampleTimes( IMediaSample *pMediaSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime);
HRESULT GetSize(void);
HRESULT GetSoapOperations( IEnumWSDLOperations** ppIWSDLOperations );
HRESULT GetSoapPorts( IEnumWSDLPorts** ppIWSDLPorts );
HRESULT GetSoapServices( IEnumWSDLService** ppWSDLServiceEnum );
DWORD GetSoftwareVersion(void);
HRESULT GetSourcePosition( long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetState( DWORD dwMilliSecsTimeout, FILTER_STATE *State);
HRESULT GetSyncSource( IReferenceClock **pClock);
HANDLE GetThreadHandle( );
DWORD GetThreadID( );
HRESULT GetTime( REFERENCE_TIME *pTime);
DWORD GetTimingInfo(LPDWORD lpdwAvgPerfTicks, LPDWORD lpdwMax, LPDWORD lpdwMin, LPDWORD lpdwDeltaMax, LPDWORD lpdwDeltaMin);
BOOL GetTransferError( USB_TRANSFER hTransfer, LPDWORD lpdwError );
HRESULT GetTunePolicy( STRMBUF_PLAYBACK_TUNE_POLICY* peStrmbufPlaybackTunePolicy);
LONG GetUnits(void);
HRESULT GetVideoPaletteEntries( long StartIndex, long Entries, long *pRetrieved, long *pPalette);
HRESULT GetVideoSize( long *pWidth, long *pHeight);
HRESULT GetVirtualMachineCount( [out, retval] ULONG* numberOfVMs );
HRESULT GetVirtualMachineName( [in] GUID* virtualMachineID, [out] LPOLESTR* virtualMachineName );
HRESULT GetXamlSource(XRXamlSource* pXamlSource);
HRESULT GotFocus( void );
HRESULT HScroll ( WPARAM wp );
HRESULT HandleClose( IDispatch *pdispControl );
HRESULT HandleDraw( IDispatch *pdispControl, OLE_HANDLE hDC );
HRESULT HandleGotFocus( IDispatch *pdispControl );
HRESULT HandleKeyPress( IDispatch *pdispControl, long lKeyDown );
HRESULT HandleLostFocus( IDispatch *pdispControl );
HRESULT HandleMessage( IDispatch *pdispControl, long uMsg, long wParam, long lParam );
HRESULT HandleStart( IDispatch *pdispControl );
BOOL HasAlpha ( void );
BOOL HaveCurrentSample(void);
HRESULT Help( LPCWSTR lpszHelpDir );
HRESULT HideCursor( long HideCursor);
VOID WINAPI HighPriority(LPVOID lp);
HRESULT HitTest( long lx, long ly );
HRESULT HotSpot( IASHTMLControl *pControl, BSTR bstrTarget, BSTR bstrData );
BOOL IOControl(DWORD dwInst,DWORD dwIoControlCode,LPVOID lpInBuf,DWORD nInBufSize,LPVOID lpOutBuf,DWORD nOutBufSize,LPDWORD lpBytesReturned);
HRESULT IRAvailable ( );
HRESULT ImageFail ( DWORD dwCookie );
int InDisplay (void );
HRESULT InactivateWindow( );
HRESULT Inactive(void);
void IncrementPinVersion( );
void IncrementTypeVersion(void);
void Init ( int width, int height, void *pBits, int stride, EGPEFormat format, EDDGPEPixelFormat pixelFormat );
HRESULT InitASFormsManager( void );
HRESULT InitAllocator( IMemAllocator **ppAlloc);
void InitMediaType( );
BOOL InitPubKey ( BYTE *pKey, DWORD cbBlob );
DWORD InitialThreadProc( LPVOID pv);
HRESULT InitializeService( WCHAR *szService );
BOOL InitializeStressModule( MODULE_PARAMS* pmp, UINT* pnThreads );
UINT InitializeTestThread( HANDLE hThread, DWORD dwThreadId, int index );
HRESULT InlineImage ( IASHTMLControl *pControl, BSTR bstrTarget, DWORD dwCookie );
HRESULT Insert( short ch );
HRESULT InsertAt( long index, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BSTR bstr, short wID, BOOL fBitmap );
void IntToWstr( int i, LPWSTR wstrDest);
HRESULT Interference( DWORD dwType);
HRESULT Ioctl_Register_DataCollector( LPVOID pId, DWORD dwIDSize, LPVOID pBuffer, DWORD dwBufSize );
HRESULT Ioctl_Send_DataCollector( LPVOID pId, DWORD dwIDSize, LPVOID pBuffer, DWORD dwBufSize );
BOOL IsActive(void);
BOOL IsAutoShowEnabled( );
BOOL IsClassID( REFCLSID rclsid );
BOOL IsConflictObject();
BOOL IsConnected(void);
HRESULT IsContactValid( CEOID ceoidContact, PROPID propidAddress, BSTR* pbstrExplanation);
HRESULT IsControlOnForm( IDispatch *pdispControl );
HRESULT IsCursorHidden( long *CursorHidden);
HRESULT IsDirectDrawLoaded(void);
BOOL IsDirectDrawVersion1(void);
HRESULT IsDiscontinuity(void);
BOOL IsEndOfStream(void);
BOOL IsEndOfStreamDelivered(void);
VOID WINAPI IsEqualObject( IUnknown *pFirst, IUnknown *pSecond);
BOOL IsFlushing(void);
HRESULT IsFormatSupported( const GUID *pFormat );
BOOL IsIdle( );
BOOL IsNetPresent();
HRESULT IsPageDirty(void);
HRESULT IsPreroll(void);
BOOL IsPrime(UINT n);
BOOL IsQueued( );
BOOL IsReadOnly(void);
HRESULT IsSpeaking( BOOL *pfSpeaking);
BOOL IsSpecialSample( IMediaSample *pSample );
HRESULT IsStarted( void );
BOOL IsStopped( );
BOOL IsStreaming(void);
HRESULT IsSyncPoint(void);
HRESULT IsUsingDefaultDestination(void);
HRESULT IsUsingDefaultSource(void);
HRESULT IsUsingTimeFormat( const GUID *pFormat );
HRESULT IsVirtualMachineRunning( [in] GUID* virtualMachineID, [out, retval] boolean* isRunning );
HRESULT ItemAt( long lIndex IDispatch **ppdispItem );
HRESULT ItemFromID( short ID, IDispatch **ppdispControl );
HRESULT JoinFilterGraph( IFilterGraph *pGraph, LPCWSTR pName);
HRESULT JumpToAnchor ( BSTR bstrAnchor );
BOOL KeybdIstLoop( PKEYBD_IST pKeybdIst );
VOID WINAPI KeybdPdd_DllEntry( HANDLE hinstDLL, DWORD Op, LPVOID lpvReserved );
VOID WINAPI KeybdPdd_GetEvent( UINT32 VirtualKeys[16], KEY_STATE_FLAGS KeyEvents[16] );
VOID WINAPI KeybdPdd_GetEventEx2( UINT uiPddId, UINT32 rguiScanCode[16], BOOL rgfKeyDown[16] );
VOID WINAPI KeybdPdd_InitializeDriver( PFN_KEYBD_EVENT_CALLBACK pfnKeybdEventCallback );
VOID WINAPI KeybdPdd_PowerHandler( BOOL bOff );
int L2CAP_EstablishDeviceContext( void* *pUserContext, unsigned short psm, L2CAP_EVENT_INDICATION* pInd, L2CAP_CALLBACKS* pCall, L2CAP_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE* phDeviceContext );
int LAYER_CloseDeviceContext ( HANDLE hDeviceContext );
int LAYER_EstablishDeviceConect( void* pUserContext, filters for the incomming connection, LAYER_EVENT_INDICATION* pInd, LAYER_CALLBACKS* pCall, LAYER_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE* phDeviceContext );
DWORD LED ( BYTE ucPort, BOOL fState );
int Largest(MyInt[] ia,out MyInt element);
int Layer_CloseDeviceContext ( HANDLE hDeviceContext );
int Layer_EstablishDeviceConnect( void* pUserContext, //Layer specific filtering parameters ... LAYER_EVENT_INDICATION* pInd, LAYER_CALLBACKS* pCall, LAYER_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE* phDeviceContext );
HRESULT LicenseAcquired([in] VARIANT_BOOL varResult );
HRESULT ListGet( PTSTR pszList, PSDATA pdList, DWORD *pdwListNum);
HRESULT ListSet( PTSTR pszList, DWORD dwListNum, SDATA dList);
BOOL LoadDeviceAsync();
HRESULT LoadDirectDraw( LPSTR szDevice );
HRESULT LoadFormResource( OLE_HANDLE hFC, long wRsrcID, IDispatch **ppForm, IDispatch *pDispSink );
LONG LoadPerfCounterTextStrings( LPSTR lpCommandLine, BOOL bQuietModeArg );
BOOL LoadWindowsSettings();
void LogMemUse( void );
void LogProcessCreate ( DWORD dwProcID );
void LogProcessDelete ( DWORD dwProcID );
void LogThreadCreate ( DWORD dwThreadID, DWORD dwProcID );
void LogThreadDelete ( DWORD dwThreadID, DWORD dwProcID );
void LogThreadSwitch ( DWORD dwThreadID, DWORD dwProcID );
HRESULT LostFocus( void );
VOID WINAPI LowPriority(HANDLE h);
VOID WINAPI MBX_TA(void);
VOID WINAPI MBX_TB(void);
HRESULT MTPIPAuthorizeConnection ( DWORD dwNonce, BOOL fAuthorize );
HRESULT MTPIPGetConnectionData ( MTPIPCONNECTIONINFO* pCI );
HRESULT MTPIPRegisterConnectionNotification ( HANDLE hEvent );
VOID WINAPI MedPriority(HANDLE h);
HRESULT MediaParameter( long EntryNum, BSTR bstrName, BSTR* pbstrValue );
HRESULT MediaParameterName( long EntryNum, long Index, BSTR* pbstrName );
HRESULT MenuCreate( PVCMDNAME pName, PLANGUAGE pLanguage, DWORD dwFlags, PIVCMDMENU *ppIVCmdMenu);
HRESULT MenuDelete( PVCMDNAME pName);
HRESULT MenuEnum( DWORD dwFlags, PTSTR pszApplicationFilter, PTSTR pszStateFilter, PIVCMDENUM *ppiVCmdEnum);
HRESULT Meta( IASHTMLControl *pControl, BSTR bstrHTTPEQUIV, BSTR bstrContent );
LONG Millisecs(void);
HRESULT ModifyTraining( LPTSTR lpszPhrase, DWORD dwFlags);
HRESULT Move( LPCRECT prect );
HRESULT MoveAppToForeground( LONG ProcID, LONG *pZOrder, LONG Flags );
HRESULT MoveToForeground( BOOL fThis, LONG *pZOrder );
BOOL MoveToHead( POSITION pos, CBaseList *pList);
BOOL MoveToTail( POSITION pos, CBaseList *pList);
void MyFunction();
HRESULT NavigateToURL(LPWSTR szURL);
HRESULT NewSegment( REFERENCE_TIME tStart, REFERENCE_TIME tStop, double dRate);
HRESULT NextChar( );
LONG NonDelegatingAddRef( );
HRESULT NonDelegatingQueryInterface( REFIID riid, void ** ppv);
LONG NonDelegatingRelease( );
void NotReady(void);
HRESULT Notify( IBaseFilter *pSelf, Quality q);
HRESULT NotifyAllocator( IMemAllocator *pAllocator, BOOL bReadOnly);
void NotifyEndOfStream(void);
HRESULT NotifyEvent( long EventCode, long EventParam1, long EventParam2);
void NotifyFilterState( FILTER_STATE new_state, REFERENCE_TIME tStart = 0 );
HRESULT NotifyGraphIsConnected();
HRESULT NotifyOwnerMessage( long hwnd, long uMsg, long wParam, long lParam);
void NotifySample(void);
void NotifyThread( );
HRESULT Num( DWORD *pdwNumCmd);
HRESULT Number([out, retval] long *pVal);
DWORD OEMFindFirstWakeSource(void);
BOOL OEMGetInterrupt(PDEVICE_LOCATION pDevLoc, PDWORD Irq);
void OEMInitPageTable (void);
BOOL OEMIsROM( LPVOID pvAddr, DWORD cbSize);
BOOL OEMKitlIoctl( DWORD code, VOID* pInBuffer, DWORD inSize, VOID* pOutBuffer, DWORD outSize, DWORD* pOutSize );
int OEMParallelPortGetStatus (void);
DWORD OEMTranslateIrq(DWORD Irq);
DWORD OEMTranslateSysIntr(DWORD SysIntr);
LONG ObjectsActive( );
HRESULT OnActivate(void);
void OnAngleChange(int cAngles, int nAngle);
HRESULT OnApplyChanges(void);
void OnAudioStreamChange(int nAudio, LCID lcidAudio);
void OnChapterChange(int nChapter);
HRESULT OnConnect( IUnknown* pUnknown );
HRESULT OnDeactivate(void);
void OnDirectRender( IMediaSample *pMediaSample);
HRESULT OnDisconnect(void);
void OnDvdDriveReady(bool bReady);
void OnInit();
void OnMenu(bool bInMenu);
void OnParentalLevelChange(int nLevel);
void OnPlaybackStateChange(EDDVDPlaybackState edvdState);
void OnProhibitedChange(DVD_UOP_PROHIBITED edvdOperation, bool bProhibited);
void OnReceiveFirstSample( IMediaSample *pMediaSample);
void OnRenderEnd( IMediaSample *pMediaSample);
void OnRenderStart( IMediaSample *pMediaSample);
BOOL OnSize( LONG Width, LONG Height);
HRESULT OnStartStreaming(void);
HRESULT OnStopStreaming(void);
void OnSubpictureStreamChange(int nSubpicture, LCID lcidSubpicture);
HRESULT OnThreadCreate(void);
HRESULT OnThreadDestroy(void);
void OnThreadInit( );
HRESULT OnThreadStartPlay(void);
void OnTimeChange(DVD_HMSF_TIMECODE time);
void OnTimeEnd();
void OnTimeStart(long lTitleLenFrames, int nFramesPerSecond);
void OnTitleChange(int nTitle);
HRESULT OnUpdateRectangles( );
HRESULT OnVideoSizeChange( );
void OnWaitEnd(void);
void OnWaitStart(void);
HRESULT Open( );
HRESULT OpenDevice ( phPNDevice phPN, pPNDEVICE pDevice );
DWORD PDD_DeAllocateBuffer( LPVOID PDDContext, ULONG ulModeType, PVOID pBuffer );
DWORD PDD_DeInit( LPVOID PDDContext );
DWORD PDD_DeInitSensorMode( LPVOID PDDContext, ULONG ulModeType );
DWORD PDD_FillBuffer( LPVOID PDDContext, ULONG ulModeType, PUCHAR pImage );
DWORD PDD_GetAdapterInfo( LPVOID PDDContext, PADAPTERINFO pAdapterInfo );
DWORD PDD_GetSensorModeInfo( LPVOID PDDContext ULONG ulModeType PSUBDEVICEINFO pSubDevInfo );
DWORD PDD_HandleCamControlChanges( LPVOID PDDContext, DWORD dwPropId, LONG lFlags, LONG lValue );
DWORD PDD_HandleModeCustomProperties( LPVOID PDDContext, ULONG ulModeType, PUCHAR pInBuf, DWORD InBufLen, PUCHAR pOutBuf, DWORD OutBufLen, PDWORD pdwBytesTransferred );
DWORD PDD_HandleVidProcAmpChanges( LPVOID PDDContext, DWORD dwPropId, LONG lFlags, LONG lValue );
DWORD PDD_HandleVideoControlCapsChanges( LPVOID PDDContext, LONG lModeType, ULONG ulCaps );
DWORD PDD_InitSensorMode( LPVOID PDDContext, ULONG ulModeType, LPVOID ModeContext );
DWORD PDD_RegisterClientBuffer( LPVOID PDDContext, ULONG ulModeType, PVOID pBuffer );
DWORD PDD_SetPowerState( LPVOID PDDContext, CEDEVICE_POWER_STATE PowerState );
DWORD PDD_SetSensorModeFormat( LPVOID PDDContext, ULONG ulModeType, PCS_DATARANGE_VIDEO pCsDataRangeVideo );
DWORD PDD_SetSensorState( LPVOID PDDContext, ULONG ulModeType, CSSTATE CsState );
DWORD PDD_TakeStillPicture( LPVOID PDDContext, LPVOID pBurstModeInfo );
DWORD PDD_UnRegisterClientBuffer( LPVOID PDDContext, ULONG ulModeType, PVOID pBuffer );
BOOL PIN_Close ( DWORD Context );
BOOL PIN_Deinit( DWORD dwContext );
BOOL PIN_IOControl( DWORD dwContext, DWORD Ioctl, PUCHAR pInBuf, DWORD InBufLen, PUCHAR pOutBuf, DWORD OutBufLen, PDWORD pdwBytesTransferred );
DWORD PIN_Init( LPCTSTR Context, LPVOID lpvBusContext );
DWORD PIN_Open( DWORD Context, DWORD Access, DWORD ShareMode );
HRESULT PNTMToWintm ( SYSTEMTIME pTime, const PNTM pNTM );
DWORD PRLED ( BYTE ucPort, BOOL fState );
VOID WINAPI PRThread( LPVOID lpvParam );
void PaintWindow( BOOL bErase);
BOOL ParseCommand( LPCTSTR szCmd, LPCTSTR szCmdLine, PFN_FmtPuts pfnFmtPuts, PFN_Gets pfnGets);
HRESULT ParseRequest( ISoapReader* pReader, IWSDLPort** ppIWSDLPort, IWSDLOperation** ppIWSDLOperation );
HRESULT PassNotify( Quality q);
HRESULT Pause (void);
HRESULT PerformanceAlignWindow( );
VOID WINAPI Philosopher(LPVOID lpPhilosopherID);
void PinClickHandler(Pin source, PinClickEventArgs args);
HRESULT Play( DWORD dwReserved1, DWORD dwReserved2, DWORD dwFlags );
HRESULT PlaylistCount( long* pNumberEntries );
VOID WINAPI PossiblyEatMessage( HWND hwndDrain, UINT uMsg, WPARAM wParam, LPARAM lParam);
HRESULT PostMsg( long uMsg, long wParam, long lParam );
HRESULT Power([out, retval] VARIANT_BOOL * pbPower);
void PreparePerformanceData( int trLate, int trFrame);
HRESULT PrepareReceive( IMediaSample *pMediaSample);
void PrepareRender(void);
HRESULT PrepareWindow( );
HRESULT PrevChar( );
void Print(TCHAR *pFormat, ...);
void ProcessStartupFolder();
void ProgramWindow();
void PublicStatMemFunc1(void);
HRESULT PushCommand( DWORD dwCmd, HPACKET hPacket );
HRESULT PutCommonBoolProperties( short pwProps );
int PutProp(void);
int PutPropToo(void);
void PutQueueObject( T object );
void PutThreadMsg( UINT uMsg, DWORD dwMsgFlags, LPVOID lpMsgParam, CAMEvent *pEvent = NULL );
HRESULT QueryAccept( const AM_MEDIA_TYPE *pmt);
HRESULT QueryDirection( PIN_DIRECTION* pPinDir);
HRESULT QueryFilterInfo( FILTER_INFO *pInfo);
HRESULT QueryFormForNavState( );
HRESULT QueryId( LPWSTR *Id);
HRESULT QueryInternalConnections( IPin **apPin, ULONG *nPin);
HRESULT QueryPhrase( LPTSTR lpszPhrase, DWORD *pdwValue);
HRESULT QueryPinInfo( PIN_INFO *pInfo);
HRESULT QueryPreferredFormat( GUID *pFormat );
HRESULT QuerySupported( REFGUID guidPropSet, DWORD dwPropID, DWORD* pTypeSupport);
HRESULT QueryVendorInfo( LPWSTR *pVendorInfo);
HRESULT QueryWriteSync( );
void QueueSample( IMediaSample *pSample );
int RFCOMM_EstablishDeviceContext( void* *pUserContext, unsigned char channel, RFCOMM_EVENT_INDICATION* pInd, RFCOMM_CALLBACKS* pCall, RFCOMM_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE *phDeviceContext );
BOOL RT_Bare_GetRealTime (LPSYSTEMTIME lpst);
BOOL RT_Bare_SetRealTime (LPSYSTEMTIME lpst);
BOOL RT_Init_RealTime ( void );
HRESULT RadiansToDegrees ( pPNPOSLLA pLLAPos );
HRESULT ReadFromStream( IStream* pStream );
void Ready(void);
void ReallyFree (void);
HRESULT Receive( IMediaSample *pSample);
HRESULT ReceiveAllocator( IMemAllocator *pAllocator, BOOL bReadOnly );
HRESULT ReceiveCanBlock(void);
HRESULT ReceiveConnection( IPin *pConnector, AM_MEDIA_TYPE *pmt);
HRESULT ReceiveMsg( long uMsg, long wParam, long lParam );
HRESULT ReceiveMultiple( IMediaSample **pSamples, long nSamples, long * nSamplesProcessed);
HRESULT ReconnectPin( IPin *pPin, AM_MEDIA_TYPE const *pmt);
void RecordFrameLateness( int trLate, int trFrame);
HRESULT Redraw( void );
void RefreshCache();
HRESULT RegisterBrowserEventSink();
HRESULT RegisterMediaTime( IMediaSample *pMediaSample );
void RegisterPerfId( );
HRESULT RegisterStartedApplication( OLE_HANDLE hFC BSTR bstrAppName LONG AppMsgID LONG Flags );
HRESULT ReleaseBuffer( IMediaSample *pSample);
void ReleaseDirectDraw(void);
void RemoveAll( );
HRESULT RemoveAt( long index );
HRESULT RemoveAtIndex( long index );
HRESULT RemoveByID( short wID );
HRESULT RemovePin( CSourceStream *pStream );
HRESULT RemoveSIFile( DWORD dwID, DWORD dwFlag );
HRESULT Render( IMediaSample *pMediaSample);
void Reply( DWORD dw);
HRESULT ResetEndOfStream(void);
void ResetEndOfStreamTimer(void);
void ResetFormatBuffer( );
HRESULT ResetMediaTime(void);
HRESULT ResetStreamingTimes(void);
HRESULT ResetVirtualMachine( [in] GUID* virtualMachineID, [in] boolean hardReset );
UINT ResolveVarBind ( IN OUT RFC1157VarBind *VarBind,
HRESULT RestoreAppZOrder( LONG ZOrder );
HRESULT RestoreVirtualMachine( [in] GUID* virtualMachineID );
HRESULT RestoreZOrder( LONG ZOrder );
void Reverse( );
HRESULT SRModeGet( GUID *pgMode);
HRESULT SRModeSet( GUID gMode);
LONG STCalcDeltaUS ( LARGE_INTEGER liStart, LARGE_INTEGER liCurrent );
VOID WINAPI STThreadHigh ( LPVOID lpvParam );
BOOL ScheduleSample( IMediaSample *pMediaSample);
HRESULT ScrollIntoView ( DWORD dwCookie );
BOOL SecondaryCompareFunc();
void SendAnyway( );
HRESULT SendEndOfStream(void);
void SendNotifyWindow( IPin *pPin, HWND hwnd);
HRESULT SendQuality( REFERENCE_TIME trLate, REFERENCE_TIME trRealStream);
void SendRepaint(void);
VOID WINAPI ServerThread (PVOID pArg);
void Set(void);
void SetAbortSignal( BOOL bAbort);
HRESULT SetActualDataLength( long lLen );
BOOL SetAllocatedSize( HPACKET hPacket, DWORD dwBytesRequested, DWORD *pBytesAllocated );
HRESULT SetAppAlertState( OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, LONG AlertAction, LONG AlertVal );
HRESULT SetBounds( long lxLeft, long lyTop, long ldxWidth, long ldyHeight );
HRESULT SetBufferingDepth( const REFERENCE_TIME* ptStop );
void SetColorKey ( DWORD dwColorKey );
void SetColorKeyHigh ( DWORD dwColorKey );
void SetColorKeyLow ( DWORD dwColorKey );
void SetColorKeyMask ( DWORD dwColorKeyMask );
void SetControlVideoPin( CBasePin *pPin);
void SetControlWindowPin( CBasePin *pPin);
void SetDDGPESurf( LPDDRAWI_DDRAWSURFACE_GBL lpDDSurface );
HRESULT SetDDSurfaceKernelHandle( DWORD dwDDKernelHandle);
HRESULT SetDefaultDestinationPosition( );
HRESULT SetDefaultSourcePosition( );
HRESULT SetDestinationPosition( long Left, long Top, long Width, long Height);
void SetDirectDraw( LPDIRECTDRAW pDirectDraw);
void SetDirectDrawSurface ( LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface );
HRESULT SetDirty( BOOL fDirty );
HRESULT SetDiscontinuity( BOOL bDiscont );
void SetDriverData ( DDGPEDriverData *pDriverData );
void SetDriverGUID ( GUID guidDriverGUID );
void SetFOURCC( const GUID * pguid );
void SetFilterGraph( IMediaEventSink *pSink );
HRESULT SetFormat( LPWAVEFORMATEX pwfxToSet );
void SetFormatType( const GUID * pformattype );
BOOL SetFrameLength( USB_HANDLE hDevice, HANDLE hEvent, USHORT uFrameLength );
HRESULT SetFrequency( DWORD dwFrequency );
HRESULT SetHost(IXRVisualHost* pHost);
HRESULT SetItem( DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT SetMediaType( const CMediaType *pmt);
HRESULT SetMode( DWORD dwMode );
HRESULT SetObjects( ULONG cObjects, LPUNKNOWN* ppUnk );
HRESULT SetPageSite( IPropertyPageSite* pPageSite );
HRESULT SetPosition( DWORD dwNewPosition );
HRESULT SetPreroll( BOOL bIsPreroll );
HRESULT SetProperties( ALLOCATOR_PROPERTIES *pRequest, ALLOCATOR_PROPERTIES *pActual);
HRESULT SetQuality( DWORD dwQuality );
HRESULT SetRate( double dRate );
HRESULT SetRecordingPath( LPCOLESTR pszPath);
void SetRepaintStatus( BOOL bRepaint);
void SetSampleSize( ULONG sz );
HRESULT SetSink( IQualityControl *piqc);
HRESULT SetSourcePosition( long Left, long Top, long Width, long Height);
void SetSubtype( const GUID * psubtype );
HRESULT SetSyncPoint( BOOL bIsSyncPoint );
HRESULT SetSyncSource ( IReferenceClock *pClock);
void SetTemporalCompression( BOOL bCompressed );
HRESULT SetTime( REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd );
HRESULT SetTimeDelta( const REFERENCE_TIME& TimeDelta);
HRESULT SetTimeFormat( const GUID *pFormat );
HRESULT SetTunePolicy( STRMBUF_PLAYBACK_TUNE_POLICY eStrmbufPlaybackTunePolicy);
void SetType( const GUID * ptype );
void SetVariableSize( );
HRESULT SetVirtualMachineName( [in] GUID* virtualMachineID, [in] LPOLESTR virtualMachineName );
void SetVisibleSurface ( GPESurf *pSurf, BOOL bWaitForVBlank = FALSE );
HRESULT SetVolumePan( PDSVOLUMEPAN pDsVolumePan );
void SetWaiting( );
HRESULT SetWindowForeground( long Focus);
DWORD SetupControl ( void );
DWORD SetupInterrupt ( void );
DWORD SetupMemory ( void );
HRESULT ShouldDrawSampleNow( IMediaSample *pMediaSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime);
BOOL ShouldSkipFrame( IMediaSample *pIn );
void Show();
HRESULT ShutdownVirtualMachine( [in] GUID* virtualMachineID, [in] boolean saveMachine );
void SignalTimerFired(void);
int SizeMax(void);
HRESULT SoapAttribute( BSTR name, BSTR ns_uri, BSTR value, BSTR prefix );
HRESULT SoapDefaultNamespace( BSTR ns_uri );
HRESULT SoapInvoke( VARIANT varInput, IUnknown* pOutputStream, BSTR bstrSoapAction );
HRESULT SoapNamespace( BSTR prefix, BSTR ns_uri );
HRESULT SourceThreadCanWait( BOOL bCanWait);
HRESULT SpeakFocusTab( );
HRESULT SpeakerGet( PTSTR pszSpeaker, DWORD dwSize, DWORD *pdwNeeded);
HRESULT SpeakerSet( PTSTR pszSpeaker);
HRESULT SpeakingDone ( void );
HRESULT SpeakingStarted(void);
HRESULT SpeedGet( DWORD *pdwSpeed);
HRESULT SpeedSet( DWORD dwSpeed);
int SslValidate ( DWORD dwType LPVOID pvArg DWORD dwChainLen LPBLOB pCertChain DWORD dwFlags );
HRESULT Start( DWORD dwFlags );
HRESULT StartBrowser(LPWSTR szURL);
HRESULT StartCall ( hPNDevice hPN, PNData_t Call, DWORD dwPeriod );
HRESULT StartCommandHandler( WCHAR *szService, MANAGED_COMMANDHANDLER_TYPE type, HWND hwndNotify, UINT Msg );
HRESULT StartStreaming(void);
HRESULT Stop( );
HRESULT StopAll( void );
HRESULT StopAt( const REFERENCE_TIME *ptStop = NULL, BOOL bSendExtra = FALSE, DWORD dwCookie = 0 );
HRESULT StopCall ( hPNDevice hPN, PNData_t Call );
HRESULT StopCommandHandler();
HRESULT StopSpeaking(void);
HRESULT StopStreaming(void);
HRESULT StoreUsed( IASHTMLControl *pControl BSTR bstrTarget int iLoop );
HRESULT StreamTime( CRefTime& rtStream);
void Swap ( LPDDRAWI_DDRAWSURFACE_LCL s1, LPDDRAWI_DDRAWSURFACE_LCL s2 );
VOID WINAPI TGTPLAT_Entry( UINT uiPddId, PFN_KEYBD_EVENT pfnKeybdEvent, PKEYBD_PDD *ppKeybdPdd );
HRESULT TTSModeGet( GUID *pgVoice);
HRESULT TTSModeSet( GUID gVoice);
BOOL TakeFrameLengthControl( USB_HANDLE hDevice );
HRESULT TearDown( );
DWORD TerminateStressModule(void);
VOID WINAPI ThreadAlgoritm1 ( LPVOID lpvParam );
VOID WINAPI ThreadAlgoritm2 ( LPVOID lpvParam );
VOID WINAPI ThreadAlgoritm3 ( LPVOID lpvParam );
VOID WINAPI ThreadControl ( LPVOID lpvParam );
BOOL ThreadExists( );
VOID WINAPI ThreadIST ( LPVOID lpvParam );
VOID WINAPI ThreadProc( LPVOID lpParameter);
VOID WINAPI ThreadWatchdog ( LPVOID lpvParam );
HRESULT ThresholdGet( DWORD *pdwThreshold);
HRESULT ThresholdSet( DWORD dwThreshold);
void ThrottleWait(void);
void TimerCallback(void);
HRESULT Title( IASHTMLControl *pControl BSTR bstrTitle );
HRESULT Train( PCWSTR lpPhrases, DWORD dwSize, PCWSTR lpCaption, DWORD dwSizeCap, DWORD hHandle, DWORD dwFlags);
HRESULT Transfer ( IfmManage *pFrmMgr, WORD wNum, CEOID *rgOID);
BOOL TranslateStringDescr( LPCUSB_STRING_DESCRIPTOR lpStringDescr, LPWSTR szString, DWORD cchStringLength );
void TriggerThread( );
HRESULT TryMediaTypes( IPin *pReceivePin, const CMediaType *pmt, IEnumMediaTypes *pEnum);
BOOL TunerCancelSeek( HANDLE hTuner );
BOOL TunerClose( HANDLE hTuner );
DWORD TunerGetBandInfo( DWORD dwDeviceidentifier, DWORD dwBands, PTUNERBANDINFO pBandInfo, DWORD dwBufSize, DWORD *pdwActualOutSize );
BOOL TunerGetConfig ( HANDLE hTuner, PTUNERCONFIG pTunerConfig );
BOOL TunerGetDevCaps( DWORD dwTuner, PTUNERDEVCAPS pTunerDevCaps );
BOOL TunerGetSignalInfo( HANDLE hTuner, PSIGNALINFO pSignalInfo );
HANDLE TunerOpen( DWORD dwTuneridentifier );
BOOL TunerQuery( DWORD *pdwTunerAPIVer, OUT DWORD *pdwNumDevs );
BOOL TunerReset( HANDLE hTuner );
BOOL TunerSeekStation( HANDLE hTuner, PTUNERSEEKINFO pTunerSeekInfo );
BOOL TunerSetConfig( HANDLE hTuner, PTUNERCONFIG pTunerConfig );
HRESULT UnInitASFormsManager( void );
HRESULT UnInitializeService();
DWORD UnLoad( DWORD dwType, DWORD dwFlags );
BOOL UnRegisterClientSettings( LPCWSTR szUniqueDriverId, LPCWSTR szReserved, LPCUSB_DRIVER_SETTINGS lpDriverSettings );
BOOL UnRegisterNotificationRoutine( USB_HANDLE hDevice, LPDEVICE_NOTIFY_ROUTINE lpNotifyRoutine, LPVOID lpvNotifyParameter );
LONG UnloadPerfCounterTextStrings( LPSTR lpCommandLine, BOOL bQuietModeArg );
HRESULT Unregister( );
HRESULT VIOInitialize (LPVOID pvReserved);
HRESULT VIORegisterDevice( REFCLSID rclsid, BOOL bRegister);
HRESULT VIORegisterMinidriver( REFCLSID rclsidDevice, REFCLSID rclsidMinidriver, BOOL bRegister );
HRESULT VIORegisterMinidriverManager( REFCLSID rclsidManager, BOOL bRegister );
HRESULT VScroll ( WPARAM wp );
HRESULT VelocityToBearing( pPNVELBEAR pBearVel, const pPNVELENU pENUVel );
HRESULT VerifyVideoFile(WCHAR *filename);
DWORD WZCQueryLatencySensitiveMode( LPWSTR pSrvAddr, PWSTR wszInterfaceGuid, BOOL *pbEnable, ULONG *pPacketLatencyMs );
DWORD WZCSetLatencySensitiveMode( LPWSTR pSrvAddr, PWSTR wszInterfaceGuid, BOOL bEnable, ULONG PacketLatencyMs );
BOOL Wait( DWORD dwTimeout);
VOID WINAPI WaitDispatchingMessages( HANDLE hObject, DWORD dwWait, HWND hwnd = NULL, UINT uMsg = 0);
BOOL WaitMsg( DWORD dwTimeOut);
HRESULT WaitOnCommandHandler();
void WhereProhibited( void );
HRESULT WintmPNTM ( PNTM pNTM, const SYSTEMTIME pTime, );
VOID STDAPI WriteBSTR( BSTR *pstrDest, LPCWSTR szSrc);
VOID STDAPI WriteInt( IStream *pIStream, int n);
int WstrToInt( LPCWSTR wstrSrc);
void _Alert( BSTR string );
void _Exec( BSTR FileName, BSTR CommandLine, short Flag );
int _MsgBox( BSTR String );
void _NewScriptThread( BSTR FileName, BSTR EntryFunction );
void _OutputDebugString( BSTR string );
void _ReleaseThenLaunch( long msDelay, BSTR FileName, BSTR EntryFunction );
void _SignalEvent( BSTR String );
void _Sleep( long msSleep );
void _WriteLocalLog( BSTR string );
void __asm(const char *, ...);
void _asm (char*,...);
int _controlfp_s (__out_opt unsigned int*_CurrentState, __in unsigned int _NewValue, __in unsigned int _Mask);
int _isnanf (float);
UINT accessor_function ( UINT actID, AsnAny *aryObject, UINT *pErrIndex );
void add64_64_64 (const FILETIME *lpnum1, LPFILETIME lpnum2, LPFILETIME lpres);
int asm_int(const char *);
int bthlink_ConnectionCompleteEvent( void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, BD_ADDR *pba, unsigned char link_type, unsigned char encryption_mode);
int bthlink_CreateConnection_Out( void *pCallContext, unsigned char status);
int btutil_UnScheduleEvent (SVSCookie ulCookie);
UINT fn_somefunction ( UINT actionId, AsnAny *objectArray, UINT *errorIndex );
HRESULT get_ActiveBackColor( OLE_COLOR *pclr );
HRESULT get_ActiveForeColor( OLE_COLOR *pclr );
HRESULT get_Address ([out] BSTR *pbstrAddress);
HRESULT get_AirportCode ([out] BSTR *pbstrAirportCode);
HRESULT get_Alignment ( short *pwAlign );
HRESULT get_AllDayEvent ([out] VARIANT_BOOL *pbAllDayEvent);
HRESULT get_Anniversary ([out] DATE *pdaAnniversary);
HRESULT get_AppName( BSTR *pbstrAppname );
HRESULT get_AppSmallIcon( OLE_HANDLE *phSmallIcon );
HRESULT get_Application ([out] IPOutlookApp **ppIPOutlookApp);
HRESULT get_AppointmentItem ([out] Iappointment **ppAppointmentItem);
HRESULT get_AreaCode ([out] BSTR *pbstrAreaCode);
HRESULT get_AssistantName ([out] BSTR *pbstrAssistantName);
HRESULT get_AssistantTelephoneNumber ([out] BSTR *pbstrAssistantTelephoneNumber);
HRESULT get_AudioRedirectionMode( LONG *pAudioRedirectionMode );
HRESULT get_AutoCommit( BOOL *pfAutoCommit, long *pxSrc, long *pySrc );
HRESULT get_AutoShow( long *AutoShow);
HRESULT get_AvgFrameRate( int *piAvgFrameRate);
HRESULT get_AvgSyncOffset( int *piAvg);
HRESULT get_AvgTimePerFrame( REFTIME *pAvgTimePerFrame);
HRESULT get_AxisColor( OLE_COLOR *pclr );
HRESULT get_BackColor( OLE_COLOR *pclr );
HRESULT get_BackGroundBrush( OLE_HANDLE *phBrush );
HRESULT get_BackgroundPalette( long *pBackgroundPalette);
HRESULT get_Bias ([out] long *plBias);
HRESULT get_Birthday ([out] DATE *pdaBirthday);
HRESULT get_BitErrorRate( long *pBitErrorRate);
HRESULT get_BitRate( long *pBitRate);
HRESULT get_Body ([out] BSTR *pbstrBody);
HRESULT get_BodyEntries( IXMLDOMNodeList** ppNodeList );
HRESULT get_BodyEntry( BSTR LocalName, BSTR NamespaceURI, IXMLDOMElement** ppElement );
HRESULT get_BodyInk ([out] CEBLOB **ppBodyInk);
HRESULT get_BodyLenth( long* pcbBody );
HRESULT get_Border( VARIANT_BOOL *pfBorder );
HRESULT get_BorderColor( long *Color);
HRESULT get_Business2TelephoneNumber ([out] BSTR *pbstrBusiness2TelephoneNumber);
HRESULT get_BusinessAddressCity ([out] BSTR *pbstrBusinessAddressCity);
HRESULT get_BusinessAddressCountry ([out] BSTR *pbstrBusinessAddressCountry);
HRESULT get_BusinessAddressPostalCode ([out] BSTR *pbstrBusinessAddressPostalCode);
HRESULT get_BusinessAddressState ([out] BSTR *pbstrBusinessAddressState);
HRESULT get_BusinessAddressStreet ([out] BSTR *pbstrBusinessAddressStreet);
HRESULT get_BusinessFaxNumber ([out] BSTR *pbstrBusinessFaxNumber);
HRESULT get_BusinessTelephoneNumber ([out] BSTR *pbstrBusinessTelephoneNumber);
HRESULT get_BusyStatus ([out] long *plBusyStatus);
HRESULT get_CLSID( BSTR *pbstrCLSID );
HRESULT get_Caption( BSTR *pstrCaption);
HRESULT get_CaptionAlign ( short*pwAlign );
HRESULT get_CarTelephoneNumber ([out] BSTR *pbstrCarTelephoneNumber);
HRESULT get_Categories ([out] BSTR *pbstrCategories);
HRESULT get_CenteredFocus ( BOOL *pfFocus );
HRESULT get_CharSet( BSTR *pbstr );
HRESULT get_Children ([out] BSTR *pbstrChildren);
HRESULT get_Circular( BOOL *pfCircular );
HRESULT get_ClassMsgSink( IDispatch **ppdispSink );
HRESULT get_ClientProperty( BSTR PropertyName, VARIANT* pPropertyValue );
HRESULT get_ClockFormat( BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags );
HRESULT get_Color( int nColorIndex, OLE_COLOR *pclr );
HRESULT get_CommandPrompt( BSTR *pbstrCommandPrompt );
HRESULT get_CompanyName ([out] BSTR *pbstrCompanyName);
HRESULT get_Complete ([out] VARIANT_BOOL *pbComplete);
HRESULT get_ConnectorProperty( BSTR PropertyName, VARIANT* pPropertyValue );
HRESULT get_Count ([out] int *piCount);
HRESULT get_Country ([out] BSTR *pbstrCountry);
HRESULT get_CountryPhoneCode ([out] BSTR *pbstrCountryPhoneCode);
HRESULT get_CrossHairBoxColor( OLE_COLOR *pclr );
HRESULT get_CrossHairColor( OLE_COLOR *pclr );
HRESULT get_CrossHairHilite( BOOL *pfHorz, BOOL *pfVert );
HRESULT get_CrossHairHiliteColor( OLE_COLOR *pclr );
HRESULT get_CurChar( short *pch );
HRESULT get_CurrentCityIndex ([out] long *plCurrentCityIndex);
HRESULT get_CurrentPosition( REFTIME* pllTime );
HRESULT get_CurrentTrack( unsigned char *pbcTrack );
HRESULT get_DOM( IXMLDOMDocument** pIXMLDOMDocument );
HRESULT get_DateCompleted ([out] DATE *pdaDateCompleted);
HRESULT get_DayOfMonth ([out] long *plDayOfMonth);
HRESULT get_DayOfWeekMask ([out] long *plDayOfWeekMask);
HRESULT get_DaylightBias ([out] long *plDaylightBias);
HRESULT get_DaylightDate ([out] DATE *pdaDaylightDate);
HRESULT get_DaylightDayOfWeekMask ([out] long *plDaylightDayOfWeekMask);
HRESULT get_DaylightInstance ([out] long *plDaylightInstance);
HRESULT get_DaylightMonthOfYear ([out] long *plDaylightMonthOfYear);
HRESULT get_DaylightName ([out] BSTR *pbstrDaylightName);
HRESULT get_DefaultItemType ([out] int *piDefaultItemType);
HRESULT get_DeferDraw( BOOL *pfDeferDraw );
HRESULT get_Delegate( IDispatch **ppdispDelegate );
HRESULT get_Deleted ([out] VARIANT_BOOL *pbDeleted);
HRESULT get_Department ([out] BSTR *pbstrDepartment);
HRESULT get_DestinationHeight( long *pDestinationHeight);
HRESULT get_DestinationLeft( long *pDestinationLeft);
HRESULT get_DestinationTop( long *pDestinationTop);
HRESULT get_DestinationWidth( long *pDestinationWidth);
HRESULT get_DevSyncOffset( int *piDev);
HRESULT get_DueDate ([out] DATE *pdaDueDate);
HRESULT get_Duration ([out] long *plDuration);
HRESULT get_Edit( IDispatch **ppdispEdit );
HRESULT get_Editing( BOOL *pfEditing );
HRESULT get_Email1Address ([out] BSTR *pbstrEmail1Address);
HRESULT get_Email2Address ([out] BSTR *pbstrEmail2Address);
HRESULT get_Email3Address ([out] BSTR *pbstrEmail3Address);
HRESULT get_Enabled( VARIANT_BOOL *pfEnabled );
HRESULT get_EncodingStream( IUnknown** ppIEncodingStream );
HRESULT get_End ([out] DATE *pdaEnd);
HRESULT get_EndTime ([out] DATE *pdaEndTime);
HRESULT get_Envelope( IXMLDOMElement** ppElement );
HRESULT get_EventSink( IDispatch **ppdispSink );
HRESULT get_Exceptions ([out] Iexceptions **ppExceptions);
HRESULT get_FaultDetail( IXMLDOMElement** ppElement );
HRESULT get_FileAs ([out] BSTR *pbstrFileAs);
HRESULT get_FirstName ([out] BSTR *pbstrFirstName);
HRESULT get_Flags( short *pwFlags );
HRESULT get_FocusColor ( OLE_COLOR *pclr );
HRESULT get_FocusId( long *plFocusId );
HRESULT get_FocusIndex( long *pIndex );
HRESULT get_Font( IFontDisp **ppFontDisp );
HRESULT get_ForeColor( OLE_COLOR *pclr );
HRESULT get_Format( UINT *pwFormat );
HRESULT get_FramesDrawn( int *pcFramesDrawn);
HRESULT get_FramesDroppedInRenderer( int *pcFramesDropped);
HRESULT get_FullScreenMode( long *FullScreenMode);
HRESULT get_HTML( BSTR *pbstrHTML );
HRESULT get_HTMLNotifySink ( IASHTMLControlNotifySink **ppNotify );
HRESULT get_HasUI( VARIANT_BOOL *pfHasUI );
HRESULT get_Header( IXMLDOMElement** ppElement );
HRESULT get_HeaderEntries( IXMLDOMNodeList** ppNodeList );
HRESULT get_HeaderEntry( BSTR LocalName, BSTR NamespaceURI, XMLDOMElement** ppElement );
HRESULT get_Height( long *pHeight);
HRESULT get_HelpContext( BSTR *pbstrHelpFile, BSTR *pbstrHelpTopic);
HRESULT get_HiliteBorderColor( OLE_COLOR *pclr );
HRESULT get_HiliteCaptionColor ( OLE_COLOR *pclrHiliteCaption );
HRESULT get_HiliteColor( OLE_COLOR *pclr );
HRESULT get_HiliteFont( IFontDisp **ppFontDisp );
HRESULT get_HiliteTextColor( OLE_COLOR *pclrHiliteText );
HRESULT get_Home2TelephoneNumber ([out] BSTR *pbstrHome2TelephoneNumber);
HRESULT get_HomeAddressCity ([out] BSTR *pbstrHomeAddressCity);
HRESULT get_HomeAddressCountry ([out] BSTR *pbstrHomeAddressCountry);
HRESULT get_HomeAddressPostalCode ([out] BSTR *pbstrHomeAddressPostalCode);
HRESULT get_HomeAddressState ([out] BSTR *pbstrHomeAddressState);
HRESULT get_HomeAddressStreet ([out] BSTR *pbstrHomeAddressStreet);
HRESULT get_HomeCity ([out] ICity **ppICity);
HRESULT get_HomeFaxNumber ([out] BSTR *pbstrHomeFaxNumber);
HRESULT get_HomeTelephoneNumber ([out] BSTR *pbstrHomeTelephoneNumber);
HRESULT get_Horizontal( BOOL *pfHorizontal );
HRESULT get_HotKey( long index unsigned char *pbID );
HRESULT get_Icon( OLE_HANDLE *phIcon );
HRESULT get_Image( OLE_HANDLE *phImage OLE_HANDLE *phImageMask );
HRESULT get_ImageAlignH( short*pwAlign );
HRESULT get_ImageAlignV( short *pwAlign );
HRESULT get_ImageHeight( long *plHeight );
HRESULT get_ImageWidth( long *plWidth );
HRESULT get_Importance ([out] long *plImportance);
HRESULT get_InROM ([out] VARIANT_BOOL *pbInROM);
HRESULT get_InactiveBackColor( OLE_COLOR *pclr );
HRESULT get_InactiveForeColor( OLE_COLOR *pclr );
HRESULT get_IncludeRecurrences ([out] VARIANT_BOOL *pbIncludeRecurrences);
HRESULT get_Incr( LONG *plIncr );
HRESULT get_InputStream( IStream** pVal );
HRESULT get_Instance ([out] long *plInstance);
HRESULT get_Interval ([out] long *plInterval);
HRESULT get_Inverted( BOOL *pfInverted );
HRESULT get_IsDaylightAbsoluteDate ([out] VARIANT_BOOL *pbIsDaylightAbsoluteDate);
HRESULT get_IsRecurring ([out] VARIANT_BOOL *pbIsRecurring);
HRESULT get_IsStandardAbsoluteDate ([out] VARIANT_BOOL *pbIsStandardAbsoluteDate);
HRESULT get_ItemBorder( BOOL *pfItemBorder );
HRESULT get_ItemBorderColor( OLE_COLOR *pclrItemBorder );
HRESULT get_ItemCaptionColor( OLE_COLOR *pclrItemCaption );
HRESULT get_ItemData( long Index, long *plData );
HRESULT get_ItemFlags( long index unsigned char *pbFlags );
HRESULT get_ItemHeight( long *plHeight );
HRESULT get_ItemId( long *plItemId );
HRESULT get_ItemWidth( long *plWidth );
HRESULT get_Items ([out] IPOutlookItemCollection **ppolItems);
HRESULT get_Jitter( int *piJitter);
HRESULT get_JobTitle ([out] BSTR *pbstrJobTitle);
HRESULT get_LabelBackColor( OLE_COLOR *pclr );
HRESULT get_LabelForeColor( OLE_COLOR *pclr );
HRESULT get_LabelFormat( BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags );
HRESULT get_LabelHeight( long *plHeight );
HRESULT get_LastName ([out] BSTR *pbstrLastName);
HRESULT get_Latitude ([out] long *plLatitude);
HRESULT get_Left( long *pLeft);
HRESULT get_Location ([out] BSTR *pbstrLocation);
HRESULT get_Longitude ([out] long *plLongitude);
HRESULT get_MaxChars( short *pwcchMax );
HRESULT get_MaxTitleWidth( long *plMaxTitleWidth);
HRESULT get_MeetingStatus ([out] long *plMeetingStatus);
HRESULT get_Menu( IDispatch **ppdispMenu );
HRESULT get_MenuLabel( IDispatch **ppdispLabel );
HRESULT get_MenuTitlebar( IASTitlebar **ppTitlebar );
HRESULT get_MenuVisible( BOOL *pfVisible );
HRESULT get_MenuWrap( BOOL *pfWrap );
HRESULT get_MessageDrain( OAHWND *Drain);
HRESULT get_MiddleName ([out] BSTR *pbstrMiddleName);
HRESULT get_Mirrored( BOOL *pfMirrored );
HRESULT get_MobileTelephoneNumber ([out] BSTR *pbstrMobileTelephoneNumber);
HRESULT get_MonthOfYear ([out] long *plMonthOfYear);
HRESULT get_MustUnderstandHeaderEntries( IXMLDOMNodeList** ppNodeList );
HRESULT get_Name ([out] BSTR *pbstrName);
HRESULT get_NaturalSize( long *plWidth, long *plHeight);
HRESULT get_NavArrows ( IASUserNavArrows **ppNavArrows );
HRESULT get_NavState( long *plNavState );
HRESULT get_NoEndDate ([out] VARIANT_BOOL *pbNoEndDate);
HRESULT get_NonFocusImageColor( OLE_COLOR *pclr, BOOL *pfSet );
HRESULT get_NumChars( short *pwcch );
HRESULT get_NumTracks( unsigned char *pbcTracks );
HRESULT get_Occurrences ([out] long *plOccurrences);
HRESULT get_OfficeLocation ([out] BSTR *pbstrOfficeLocation);
HRESULT get_Oid ([out] long *plOid);
HRESULT get_Opaque( VARIANT_BOOL *pfOpaque );
HRESULT get_OriginalDate ([out] DATE *pdaOriginalDate);
HRESULT get_OtherAddressCity ([out] BSTR *pbstrOtherAddressCity);
HRESULT get_OtherAddressCountry ([out] BSTR *pbstrOtherAddressCountry);
HRESULT get_OtherAddressPostalCode ([out] BSTR *pbstrOtherAddressPostalCode);
HRESULT get_OtherAddressState ([out] BSTR *pbstrOtherAddressState);
HRESULT get_OtherAddressStreet ([out] BSTR *pbstrOtherAddressStreet);
HRESULT get_OutlookCompatible ([out] VARIANT_BOOL *pbOutlookCompatible);
HRESULT get_OutputStream( IStream** pVal );
HRESULT get_Overlay( BOOL fFocus, OLE_HANDLE *phImage, OLE_HANDLE *phImageMask, BOOL *pfBitmap );
HRESULT get_OverlayOffset( BOOL fFocus, long *pleft, long *ptop );
HRESULT get_Owner( OAHWND *Owner);
HRESULT get_PagerNumber ([out] BSTR *pbstrPagerNumber);
HRESULT get_Parent( IDispatch **ppdispParent );
HRESULT get_PatternEndDate ([out] DATE *pdaPatternEndDate);
HRESULT get_PatternStartDate ([out] DATE *pdaPatternStartDate);
HRESULT get_PrerollTime( REFTIME *pllTime );
HRESULT get_ProvideCommandDataSink( IASProvidePowerListBoxCommandData **ppSink );
HRESULT get_RPCParameter( BSTR LocalName, BSTR NamespaceURI, IXMLDOMElement** ppElement );
HRESULT get_RPCResult( IXMLDOMElement** ppElement );
HRESULT get_RPCStruct( IXMLDOMElement** ppElement );
HRESULT get_RadioTelephoneNumber ([out] BSTR *pbstrRadioTelephoneNumber);
HRESULT get_RangeColor( long lRangeIndex, OLE_COLOR *pclr );
HRESULT get_RangeCount( long *plCount );
HRESULT get_RangeValue( long lRangeIndex, long *plRangeValue );
HRESULT get_Rate( double *pdRate );
HRESULT get_ReadOnly( BOOL *pfReadOnly );
HRESULT get_Recipients ([out] Irecipients **ppRecipients);
HRESULT get_RecurrenceType ([out] long *plRecurrenceType);
HRESULT get_RedirectDrives( VARIANT_BOOL *pRedirectDrives );
HRESULT get_ReminderMinutesBeforeStart ([out] long *plReminderMinutesBeforeStart);
HRESULT get_ReminderOptions ([out] long *plReminderOptions);
HRESULT get_ReminderSet ([out] VARIANT_BOOL *pbReminderSet);
HRESULT get_ReminderSoundFile ([out] BSTR *pbstrReminderSoundFile);
HRESULT get_ReminderTime ([out] DATE *pdaReminderTime);
HRESULT get_ScrollArrowsVisible ( BOOL *pfScrollArrowsVisible );
HRESULT get_Selection( wchar_t *pch );
HRESULT get_SelectionIndex( short *pwich );
HRESULT get_Sensitivity ([out] long *plSensitivity);
HRESULT get_ShowInteractionSymbols ( BOOL *pfShowInteractionSymbols );
HRESULT get_SortOrder( BOOL *pfAscending );
HRESULT get_Sorted( BOOL *pfSorted );
HRESULT get_SourceHeight( long *pSourceHeight);
HRESULT get_SourceLeft( long *pSourceLeft);
HRESULT get_SourceTop( long *pSourceTop);
HRESULT get_SourceWidth( long *pSourceWidth);
HRESULT get_Speech( IAPCSpeech **ppSpeech );
HRESULT get_SpeechCommandId( long Index, long *plSpeechId );
HRESULT get_SpinMode( short *pmode );
HRESULT get_Spouse ([out] BSTR *pbstrSpouse);
HRESULT get_StandardBias ([out] long *plStandardBias);
HRESULT get_StandardDate ([out] DATE *pdaStandardDate);
HRESULT get_StandardDayOfWeekMask ([out] long *plStandardDayOfWeekMask);
HRESULT get_StandardInstance ([out] long *plStandardInstance);
HRESULT get_StandardMonthOfYear ([out] long *plStandardMonthOfYear);
HRESULT get_StandardName ([out] BSTR *pbstrStandardName);
HRESULT get_Start ([out] DATE *pdaStart);
HRESULT get_StartDate ([out] DATE *pdaStartDate);
HRESULT get_StartTime ([out] DATE *pdaStartTime);
HRESULT get_StatusFlags( long *plStatusFlags );
HRESULT get_StatusImageList( OLE_HANDLE *phbmImage, OLE_HANDLE *phbmImageMask, long *pcxImage, long *pcyImage );
HRESULT get_StatusItemsImageList( OLE_HANDLE *phImage OLE_HANDLE *phImageMask short *pcImages );
HRESULT get_StatusItemsMask( long *plMask );
HRESULT get_Step( long *plStep );
HRESULT get_Steps( long *plStep );
HRESULT get_StopTime( REFTIME *pllTime );
HRESULT get_String( long index, BSTR *pbstr );
HRESULT get_Style( DWORD *pdwStyle );
HRESULT get_SubCaption( BSTR *pbstrSubCaption );
HRESULT get_Subject ([out] BSTR *pbstrSubject);
HRESULT get_Suffix ([out] BSTR *pbstrSuffix);
HRESULT get_SupportsDST ([out] VARIANT_BOOL *pbSupportsDST);
HRESULT get_TabColor( OLE_COLOR *pclr );
HRESULT get_TabFocusBackColor( OLE_COLOR *pclr );
HRESULT get_TabFocusForeColor( OLE_COLOR *pclr );
HRESULT get_TabMinWidth( long *plMinWidth );
HRESULT get_TabStop( VARIANT_BOOL *pfTabStop );
HRESULT get_TabTextColor( OLE_COLOR *pclr );
HRESULT get_TeamTask ([out] VARIANT_BOOL *pbTeamTask);
HRESULT get_Text( BSTR *pbstr );
HRESULT get_TextPrivate( BOOL * pfTextPrivate );
HRESULT get_TimezoneIndex ([out] long *plTimezoneIndex);
HRESULT get_Title ([out] BSTR *pbstrTitle);
HRESULT get_Titlebar ( IASTitlebar **ppTitlebar);
HRESULT get_TitlebarUpdateMode( WORD *pwTitlebarUpdateMode );
HRESULT get_Top( long *pTop);
HRESULT get_TopVisibleId( long *plTopVisibleId );
HRESULT get_TopVisibleIndex( long *plTopVisibleIndex );
HRESULT get_TrackActive( unsigned char biTrack );
HRESULT get_TrimRight( BOOL *pfTrimRight );
HRESULT get_Units ( BSTR *pbstrUnits );
HRESULT get_UserData( long *plData );
HRESULT get_Version ([out] BSTR *pbstrVersion);
HRESULT get_VideoHeight( long *pVideoHeight);
HRESULT get_VideoWidth( long *pVideoWidth);
HRESULT get_Visible( long *pVisible);
HRESULT get_VisibleRect ( RECT *rcVisible );
HRESULT get_VisitingCity ([out] ICity **ppICity);
HRESULT get_VoiceMenu( IVCmdMenu **ppVoiceMenu );
HRESULT get_VoiceMenuActivateCommand( BSTR *pbstrCommand );
HRESULT get_WaitStatus( BOOL *pfWaitStatus );
HRESULT get_WebPage ([out] BSTR *pbstrWebPage);
HRESULT get_Width( long *pWidth);
HRESULT get_WindowState( long *pWindowState);
HRESULT get_WindowStyle( long *pWindowStyle);
HRESULT get_WindowStyleEx( long *pWindowStyleEx);
HRESULT get_XMinus( short *pwVal );
HRESULT get_XPlus( short *pwVal );
HRESULT get_XVal( short *pwVal );
HRESULT get_YMinus( short *pwVal );
HRESULT get_YPlus( short *pwVal );
HRESULT get_YVal( short *pwVal );
HRESULT get_YomiCompanyName ([out] BSTR *pbstrYomiCompanyName);
HRESULT get_YomiFirstName ([out] BSTR *pbstrYomiFirstName);
HRESULT get_YomiLastName ([out] BSTR *pbstrYomiLastName);
HRESULT get_address( BSTR* pbstrPortAddress );
HRESULT get_async(VARIANT_BOOL* isAsync);
HRESULT get_attributes(IXMLDOMNamedNodeMap** attributeMap);
HRESULT get_baseName(BSTR* nameString);
HRESULT get_bindStyle( BSTR* pbstrbindStyle );
HRESULT get_callIndex( long* plCallIndex );
HRESULT get_childNodes(IXMLDOMNodeList** childList);
HRESULT get_comValue( VARIANT* pVarOut );
HRESULT get_context(IXMLDOMNode** ppNode);
HRESULT get_dataType(VARIANT* dataTypeName);
HRESULT get_definition(IXMLDOMNode** definitionNode);
HRESULT get_doctype(IXMLDOMDocumentType** documentType);
HRESULT get_documentElement(IXMLDOMElement** DOMElement);
HRESULT get_documentation( BSTR* bstrDocumentation );
HRESULT get_elementType( BSTR* pbstrElementType );
HRESULT get_entities(IXMLDOMNamedNodeMap** entityMap);
HRESULT get_errorCode(long* errorCode);
HRESULT get_expr(BSTR* expression);
HRESULT get_faultcodeNS( BSTR* bstrfaultcodeNS );
HRESULT get_filepos(long* filePosition);
HRESULT get_firstChild(IXMLDOMNode** firstChild);
HRESULT get_implementation(IXMLDOMImplementation** impl);
HRESULT get_input(VARIANT* pVar);
HRESULT get_isInput( smIsInputEnum* pbIsInput );
HRESULT get_lastChild(IXMLDOMNode** lastChild);
HRESULT get_line(long* lineNumber);
HRESULT get_linepos(long* linePosition);
HRESULT get_messageName( BSTR* pbstrMessageName );
HRESULT get_namespaces(IXMLDOMSchemaCollection** namespaceCollection);
HRESULT get_nextSibling(IXMLDOMNode** nextSibling);
HRESULT get_nodeName(BSTR* name);
HRESULT get_nodeType(DOMNodeType* type);
HRESULT get_nodeTypeString(BSTR* nodeType);
HRESULT get_nodeTypedValue(VARIANT* typedValue);
HRESULT get_nodeValue(VARIANT* value);
HRESULT get_notationName(BSTR* name);
HRESULT get_notations(IXMLDOMNamedNodeMap** notationMap);
HRESULT get_objectMethod( BSTR* pbstrobjectMethod );
HRESULT get_objectProgID( BSTR* pbstrobjectProgID );
HRESULT get_output(VARIANT* pOutput);
HRESULT get_ownerDocument(IXMLDOMDocument** DOMDocument);
HRESULT get_parentNode(IXMLDOMNode** parent);
HRESULT get_parseError(IXMLDOMParseError** errorObj);
HRESULT get_parsed(VARIANT_BOOL* isParsed);
HRESULT get_partName( BSTR* pbstrpartName );
HRESULT get_preferredEncoding( BSTR* pbstrpreferredEncoding );
HRESULT get_prefix(BSTR* prefixString);
HRESULT get_preserveWhiteSpace(VARIANT_BOOL* isPreserving);
HRESULT get_previousSibling(IXMLDOMNode** previousSibling);
HRESULT get_reason(BSTR* reasonString);
HRESULT get_resolveExternals(VARIANT_BOOL* isResolving);
HRESULT get_schemas(VARIANT* otherCollection);
HRESULT get_specified(VARIANT_BOOL* isSpecified);
HRESULT get_srcText(BSTR* sourceString);
HRESULT get_style( BSTR* pbstrstyle );
HRESULT get_tagName(BSTR* tagName);
HRESULT get_target(BSTR* name);
HRESULT get_text(BSTR* text);
HRESULT get_transport( BSTR* pbstrtransport );
HRESULT get_validateOnParse(VARIANT_BOOL* isValidating);
HRESULT get_value(VARIANT* attributeValue);
HRESULT get_xml(BSTR* xmlString);
HRESULT get_xmlNameSpace( BSTR* pbstrxmlNameSpace );
void if_freenameindex(struct if_nameindex *ptr);
int if_nametoindex(const char *ifname);
int layer_CloseDriverInstance (void);
int layer_CreateDriverInstance (void);
int layer_InitializeOnce (void);
int layer_ProcessConsoleCommand (WCHAR *pString);
int layer_UninitializeOnce (void);
HRESULT put_ActiveBackColor( OLE_COLOR clr );
HRESULT put_ActiveForeColor( OLE_COLOR clr );
HRESULT put_Address ([in] BSTR bstrAddress);
HRESULT put_AirportCode ([in] BSTR bstrAirportCode);
HRESULT put_Alignment ( short wAlign );
HRESULT put_AllDayEvent ([in] VARIANT_BOOL bAllDayEvent);
HRESULT put_Anniversary ([in] DATE daAnniversary);
HRESULT put_AppName ( BSTR bstrAppName );
HRESULT put_AreaCode ([in] BSTR bstrAreaCode);
HRESULT put_AssistantName ([in] BSTR bstrAssistantName);
HRESULT put_AssistantTelephoneNumber ([in] BSTR bstrAssistantTelephoneNumber);
HRESULT put_AutoCommit( BOOL fAutoCommit, long xSrc, long ySrc );
HRESULT put_AutoShow( long AutoShow);
HRESULT put_AxisColor( OLE_COLOR clr );
HRESULT put_BackColor( OLE_COLOR clr );
HRESULT put_BackGroundBrush( OLE_HANDLE hBrush );
HRESULT put_BackgroundPalette( long BackgroundPalette);
HRESULT put_Birthday ([in] DATE daBirthday);
HRESULT put_Body ([in] BSTR bstrBody);
HRESULT put_BodyInk ([in] CEBLOB *pBodyInk);
HRESULT put_Border( VARIANT_BOOL fBorder );
HRESULT put_BorderColor( long Color);
HRESULT put_Business2TelephoneNumber ([in] BSTR bstrBusiness2TelephoneNumber);
HRESULT put_BusinessAddressCity ([in] BSTR bstrBusinessAddressCity);
HRESULT put_BusinessAddressCountry ([in] BSTR bstrBusinessAddressCountry);
HRESULT put_BusinessAddressPostalCode ([in] BSTR bstrBusinessAddressPostalCode);
HRESULT put_BusinessAddressState ([in] BSTR bstrBusinessAddressState);
HRESULT put_BusinessAddressStreet ([in] BSTR bstrBusinessAddressStreet);
HRESULT put_BusinessFaxNumber ([in] BSTR bstrBusinessFaxNumber);
HRESULT put_BusinessTelephoneNumber ([in] BSTR bstrBusinessTelephoneNumber);
HRESULT put_BusyStatus ([in] long lBusyStatus);
HRESULT put_Caption( BSTR strCaption);
HRESULT put_CaptionAlign( short wAlign );
HRESULT put_CarTelephoneNumber ([in] BSTR bstrCarTelephoneNumber);
HRESULT put_Categories ([in] BSTR bstrCategories);
HRESULT put_CenteredFocus ( BOOL fFocus );
HRESULT put_CharSet( BSTR bstr );
HRESULT put_Children ([in] BSTR bstrChildren);
HRESULT put_Circular( BOOL fCircular );
HRESULT put_ClassMsgSink( IDispatch *pdispSink );
HRESULT put_ClientProperty( BSTR PropertyName, VARIANT PropertyValue );
HRESULT put_ClockFormat( BOOL fTime, BSTR bstrFormat, LONG FormatFlags );
HRESULT put_ClockLabel( IDispatch *pdispLabel );
HRESULT put_ClockLabel0( Idispatch *pdispLabel );
HRESULT put_Color( int nColorIndex, OLE_COLOR clr );
HRESULT put_CommandPrompt( BSTR bstrCommandPrompt );
HRESULT put_CompanyName ([in] BSTR bstrCompanyName);
HRESULT put_Complete ([in] VARIANT_BOOL bComplete);
HRESULT put_ConnectorProperty( BSTR PropertyName, VARIANT PropertyValue );
HRESULT put_Country ([in] BSTR bstrCountry);
HRESULT put_CountryPhoneCode ([in] BSTR bstrCountryPhoneCode);
HRESULT put_CrossHairBoxColor( OLE_COLOR clr );
HRESULT put_CrossHairColor( OLE_COLOR clr );
HRESULT put_CrossHairHilite( BOOL fHorz, BOOL fVert );
HRESULT put_CrossHairHiliteColor( OLE_COLOR clr );
HRESULT put_CurChar( short ch );
HRESULT put_CurrentCityIndex ([in] long lCurrentCityIndex);
HRESULT put_CurrentPosition( REFTIME llTime );
HRESULT put_CurrentTrack( unsigned char bcTrack );
HRESULT put_DayOfMonth ([in] long lDayOfMonth);
HRESULT put_DayOfWeekMask ([in] long lDayOfWeekMask);
HRESULT put_DeferDraw( BOOL fDeferDraw );
HRESULT put_DeferredNotification( BOOL fDeferredNotification );
HRESULT put_Delegate( IDispatch *pdispDelegate );
HRESULT put_Department ([in] BSTR bstrDepartment);
HRESULT put_DestinationHeight( long DestinationHeight);
HRESULT put_DestinationLeft( long DestinationLeft);
HRESULT put_DestinationTop( long DestinationTop);
HRESULT put_DestinationWidth( long DestinationWidth);
HRESULT put_DueDate ([in] DATE daDueDate);
HRESULT put_Duration ([in] long lDuration);
HRESULT put_Editing( BOOL fEditing );
HRESULT put_Email1Address ([in] BSTR bstrEmail1Address);
HRESULT put_Email2Address ([in] BSTR bstrEmail2Address);
HRESULT put_Email3Address ([in] BSTR bstrEmail3Address);
HRESULT put_Enable( VARIANT_BOOL fEnabled );
HRESULT put_End ([in] DATE daEnd);
HRESULT put_EndTime ([in] DATE daEndTime);
HRESULT put_EventSink( IDispatch *pdispSink );
HRESULT put_FileAs ([in] BSTR bstrFileAs);
HRESULT put_FirstName ([in] BSTR bstrFirstName);
HRESULT put_Flags( short wFlags );
HRESULT put_FocusColor ( OLE_COLOR clr );
HRESULT put_FocusId( long lFocusId );
HRESULT put_FocusIndex( long lIndex );
HRESULT put_Font( IFontDisp *pFontDisp );
HRESULT put_ForeColor( OLE_COLOR clr );
HRESULT put_Format ( UINT wFormat );
HRESULT put_FullScreenMode( long FullScreenMode);
HRESULT put_HTML( BSTR bstrHTML );
HRESULT put_HTMLNotifySink ( IASHTMLControlNotifySink **ppNotify );
HRESULT put_Height( long Height);
HRESULT put_HelpContext( BSTR bstrHelpFile, BSTR bstrHelpTopic);
HRESULT put_HiliteBorderColor( OLE_COLOR clr );
HRESULT put_HiliteCaptionColor ( OLE_COLOR clrHiliteCaption );
HRESULT put_HiliteColor( OLE_COLOR pclr );
HRESULT put_HiliteFont( IFontDisp *pFontDisp );
HRESULT put_HiliteTextColor( OLE_COLOR clrHiliteText );
HRESULT put_Home2TelephoneNumber ([in] BSTR bstrHome2TelephoneNumber);
HRESULT put_HomeAddressCity ([in] BSTR bstrHomeAddressCity);
HRESULT put_HomeAddressCountry ([in] BSTR bstrHomeAddressCountry);
HRESULT put_HomeAddressPostalCode ([in] BSTR bstrHomeAddressPostalCode);
HRESULT put_HomeAddressState ([in] BSTR bstrHomeAddressState);
HRESULT put_HomeAddressStreet ([in] BSTR bstrHomeAddressStreet);
HRESULT put_HomeCity ([in] ICity *pICity);
HRESULT put_HomeFaxNumber ([in] BSTR bstrHomeFaxNumber);
HRESULT put_HomeTelephoneNumber ([in] BSTR bstrHomeTelephoneNumber);
HRESULT put_Horizontal( BOOL fHorizontal );
HRESULT put_HotKey( long index unsigned char bID );
HRESULT put_ID( long index, short wID );
HRESULT put_Icon( OLE_HANDLE hIcon );
HRESULT put_Image ( OLE_HANDLE hImage, OLE_HANDLE hImageMask, long dx, long dy, long dxWidth, long dyHeight );
HRESULT put_ImageAlignH( short wAlign );
HRESULT put_ImageHeight( long lHeight );
HRESULT put_ImageWidth( long lWidth );
HRESULT put_Importance ([in] long lImportance);
HRESULT put_InactiveBackColor( OLE_COLOR clr );
HRESULT put_InactiveForeColor( OLE_COLOR clr );
HRESULT put_IncludeRecurrences ([in] VARIANT_BOOL bIncludeRecurrences);
HRESULT put_Incr( LONG lIncr );
HRESULT put_Instance ([in] long lInstance);
HRESULT put_Interval ([in] long lInterval);
HRESULT put_Inverted( BOOL fInverted );
HRESULT put_ItemBorder( BOOL fItemBorder );
HRESULT put_ItemBorderColor( OLE_COLOR clrItemBorder );
HRESULT put_ItemCaptionColor( OLE_COLOR clrItemCaption );
HRESULT put_ItemData( long Index, long lData );
HRESULT put_ItemFlags( long index, unsigned char bFlags, unsigned char bMask );
HRESULT put_ItemHeight( long lHeight );
HRESULT put_ItemId( long lItemId );
HRESULT put_ItemWidth( long lWidth );
HRESULT put_Items( BSTR bstrItems );
HRESULT put_JobTitle ([in] BSTR bstrJobTitle);
HRESULT put_LabelBackColor( OLE_COLOR clr );
HRESULT put_LabelForeColor( OLE_COLOR clr );
HRESULT put_LabelFormat( BOOL fTime, BSTR bstrFormat, LONG FormatFlags );
HRESULT put_LabelHeight( long lHeight );
HRESULT put_LastName ([in] BSTR bstrLastName);
HRESULT put_Latitude ([in] long lLatitude);
HRESULT put_Left( long Left);
HRESULT put_Location ([in] BSTR bstrLocation);
HRESULT put_Longitude ([in] long lLongitude);
HRESULT put_Max( long lMax );
HRESULT put_MaxChars( short wcchMax );
HRESULT put_MaxTitleWidth( long lMaxTitleWidth);
HRESULT put_Menu( IDispatch *pdispMenu, short wID );
HRESULT put_MenuLabel( IDispatch *pdispLabel );
HRESULT put_MenuVisible( BOOL pfVisible );
HRESULT put_MenuWrap( BOOL fWrap );
HRESULT put_MessageDrain( OAHWND Drain);
HRESULT put_MiddleName ([in] BSTR bstrMiddleName);
HRESULT put_Min( long lMin );
HRESULT put_Mirrored( BOOL fMirrored );
HRESULT put_MobileTelephoneNumber ([in] BSTR bstrMobileTelephoneNumber);
HRESULT put_MonthOfYear ([in] long lMonthOfYear);
HRESULT put_Name ([in] BSTR bstrName);
HRESULT put_NavState( long lNavState );
HRESULT put_NoEndDate ([in] VARIANT_BOOL bNoEndDate);
HRESULT put_NonFocusImageColor( OLE_COLOR clr, BOOL fSet );
HRESULT put_NumTracks( unsigned char bcTracks );
HRESULT put_Occurrences ([in] long lOccurrences);
HRESULT put_OfficeLocation ([in] BSTR bstrOfficeLocation);
HRESULT put_Opaque( VARIANT_BOOL fOpaque );
HRESULT put_OtherAddressCity ([in] BSTR bstrOtherAddressCity);
HRESULT put_OtherAddressCountry ([in] BSTR bstrOtherAddressCountry);
HRESULT put_OtherAddressPostalCode ([in] BSTR bstrOtherAddressPostalCode);
HRESULT put_OtherAddressState ([in] BSTR bstrOtherAddressState);
HRESULT put_OtherAddressStreet ([in] BSTR bstrOtherAddressStreet);
HRESULT put_Overlay( BOOL fFocus, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BOOL fBitmap );
HRESULT put_OverlayOffset( BOOL fFocus, long left, long top );
HRESULT put_Owner( OAHWND Owner);
HRESULT put_PagerNumber ([in] BSTR bstrPagerNumber);
HRESULT put_Parent( IDispatch *pdispParent );
HRESULT put_PatternEndDate ([in] DATE daPatternEndDate);
HRESULT put_PatternStartDate ([in] DATE daPatternStartDate);
HRESULT put_PrerollTime( REFTIME llTime );
HRESULT put_ProvideCommandDataSink( IASProvidePowerListBoxCommandData *pSink );
HRESULT put_RadioTelephoneNumber ([in] BSTR bstrRadioTelephoneNumber);
HRESULT put_RamUsed( long lRamUsed );
HRESULT put_RangeColor( long lRangeIndex OLE_COLOR clr );
HRESULT put_RangeCount( long lCount );
HRESULT put_RangeValue( long lRangeIndex long lRangeValue );
HRESULT put_Rate( double dRate );
HRESULT put_ReadOnly( BOOL fReadOnly );
HRESULT put_RecurrenceType ([in] long lRecurrenceType);
HRESULT put_RedirectDrives( VARIANT_BOOL redirectDrives );
HRESULT put_ReminderMinutesBeforeStart ([in] long lReminderMinutesBeforeStart);
HRESULT put_ReminderOptions ([in] long lReminderOptions);
HRESULT put_ReminderSet ([in] VARIANT_BOOL bReminderSet);
HRESULT put_ReminderSoundFile ([in] BSTR bstrReminderSoundFile);
HRESULT put_ReminderTime ([in] DATE daReminderTime);
HRESULT put_ScrollArrowsVisible ( BOOL fScrollArrowsVisible );
HRESULT put_Selection( wchar_t ch );
HRESULT put_SelectionIndex( short wich );
HRESULT put_Sensitivity ([in] long lSensitivity);
HRESULT put_ShowInteractionSymbols ( BOOL fShowInteractionSymbols );
HRESULT put_SortOrder( BOOL fAscending );
HRESULT put_Sorted( BOOL fSorted );
HRESULT put_SourceHeight( long SourceHeight);
HRESULT put_SourceLeft( long SourceLeft);
HRESULT put_SourceTop( long SourceTop);
HRESULT put_SourceWidth( long SourceWidth);
HRESULT put_SpeechCommandId( long Index, long lSpeechId );
HRESULT put_SpinMode( short mode );
HRESULT put_Spouse ([in] BSTR bstrSpouse);
HRESULT put_Start ([in] DATE daStart);
HRESULT put_StartDate ([in] DATE daStartDate);
HRESULT put_StartTime ([in] DATE daStartTime);
HRESULT put_StatusFlags( long lStatusFlags );
HRESULT put_StatusImageList( OLE_HANDLE hbmImage, OLE_HANDLE hbmImageMask, long cxImage, long cyImage );
HRESULT put_StatusItemsImageList( OLE_HANDLE hImage, OLE_HANDLE hImageMask, short cImages );
HRESULT put_StatusItemsMask( long lMask );
HRESULT put_Step( long lStep );
HRESULT put_Steps( long lStep );
HRESULT put_StopTime( REFTIME llTime );
HRESULT put_StoreUsed( long lStoreUsed );
HRESULT put_String( long index, BSTR bstr );
HRESULT put_SubCaption( BSTR bstrSubCaption );
HRESULT put_Subject ([in] BSTR bstrSubject);
HRESULT put_Suffix ([in] BSTR bstrSuffix);
HRESULT put_TabColor( OLE_COLOR clr );
HRESULT put_TabFocusBackColor( OLE_COLOR clr );
HRESULT put_TabFocusForeColor( OLE_COLOR clr );
HRESULT put_TabMinWidth( long lMinWidth );
HRESULT put_TabTextColor( OLE_COLOR clr );
HRESULT put_TeamTask ([in] VARIANT_BOOL bTeamTask);
HRESULT put_Text( BSTR bstr );
HRESULT put_TextPrivate( BOOL fTextPrivate );
HRESULT put_TimerEnabled( BOOLfEnabled );
HRESULT put_TimezoneIndex ([in] long lTimezoneIndex);
HRESULT put_Title ([in] BSTR bstrTitle);
HRESULT put_TitlebarUpdateMode( WORD wTitlebarUpdateMode );
HRESULT put_Top( long Top);
HRESULT put_TopVisibleId( long lTopVisibleId );
HRESULT put_TopVisibleIndex( long lTopVisibleIndex );
HRESULT put_TrackActive( unsigned char biTrack, BOOL fActive );
HRESULT put_TrimRight( BOOL fTrimRight );
HRESULT put_Units ( BSTR bstrUnits );
HRESULT put_UserData( long lData );
HRESULT put_Visible( long Visible);
HRESULT put_VisitingCity ([in] ICity *pICity);
HRESULT put_VoiceMenu( IVCmdMenu *pVoiceMenu );
HRESULT put_VoiceMenuActivateCommand( BSTR bstrCommand );
HRESULT put_WaitStatus( BOOL fWaitStatus );
HRESULT put_WebPage ([in] BSTR bstrWebPage);
HRESULT put_Width( long Width);
HRESULT put_WindowState( long WindowState);
HRESULT put_WindowStyle( long WindowStyle);
HRESULT put_WindowStyleEx( long WindowStyleEx);
HRESULT put_XMinus( short wVal );
HRESULT put_XPlus( short wval );
HRESULT put_XVal( short wVal );
HRESULT put_YMinus( short wVal );
HRESULT put_YPlus( short wval );
HRESULT put_YVal( short wVal );
HRESULT put_YomiCompanyName ([in] BSTR bstrYomiCompanyName);
HRESULT put_YomiFirstName ([in] BSTR bstrYomiFirstName);
HRESULT put_YomiLastName ([in] BSTR bstrYomiLastName);
HRESULT put_async(VARIANT_BOOLisAsync);
HRESULT put_dataType(BSTRdataTypeName);
HRESULT put_expr(BSTR expression);
HRESULT put_input(VARIANT pVar);
HRESULT put_nodeTypedValue(VARIANT typedValue);
HRESULT put_ondataavailable(VARIANT ondataavailableSink);
HRESULT put_ontransformnode(VARIANT ontransformnodeSink);
HRESULT put_output(VARIANT output);
HRESULT put_preserveWhiteSpace(VARIANT_BOOL isPreserving);
HRESULT put_resolveExternals(VARIANT_BOOLisResolving);
HRESULT put_validateOnParse(VARIANT_BOOLisValidating);
HRESULT put_value(VARIANT* attributeValue);
HRESULT putref_HeaderHandler( IDispatch* pHeaderHandler );
HRESULT putref_context(IXMLDOMNode* pNode);
HRESULT putref_documentElement(IXMLDOMElement* DOMElement);
HRESULT putref_schemas(VARIANTotherCollection);
HRESULT set_AppSmallIcon( OLE_HANDLE hSmallIcon );
UINT setter_function ( UINT actID, AsnAny *aryObject, UINT *pErrIndex );
BOOL waveui_AcmDlgProc ( HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void waveui_AfterDialogBox ( LPVOID pChooseStruct, BOOL fIsFormatDialog);
void waveui_BeforeDialogBox ( LPVOID pChooseStruct, BOOL fIsFormatDialog);
void waveui_DeInit (void);
void waveui_Init (void);
Ioctl_Unregister_DataCollector(  LPVOID pId,  DWORD dwIDSize,  LPVOID pBuffer,  DWORD dwBufSize );
extern HRESULT (*pIoctl_Register_DataCollector)(LPVOID,DWORD,LPVOID,DWORD);
extern HRESULT (*pIoctl_Send_DataCollector)(LPVOID,DWORD,LPVOID,DWORD);
BOOL CALLBACK DialogProc(  HWND hwndDlg,  UINT uMsg,  WPARAM wParam,  LPARAM lParam);
BOOL CALLBACK ExtensionPropSheetPageProc(  LPVOID lpv,  LPFNADDPROPSHEETPAGE lpfnAddPropSheetPageProc,  LPARAM lParam );
BOOL CALLBACK AddPropSheetPageProc(  HPROPSHEETPAGE hpage, LPARAM lParam );
LONG TSPIAPI TSPI_lineGetProcTable  (  LPTSPI_PROCS *lplpTSpiProcs  )  ;
ADDRESS Address (void );
virtual SCODE AllocVideoSurface (  DDGPESurf**ppSurf,  int width,  int height,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat,  unsigned long *pOffsetInVideoMemory  );  virtual SCODE AllocVideoSurface (  LPDDRAWI_DDRAWSURFACE_GBL lpDDSurface,  int width,  int height,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat,  unsigned long *pOffsetInVideoMemory  );  virtual SCODE AllocVideoSurface (  DDGPESurf **ppSurf,  DDGPEAllocSurfaceData*pddgpeAllocSurfaceData,  unsigned long *pOffsetInVideoMemory  );  virtual SCODE AllocVideoSurface (  LPDDRAWI_DDRAWSURFACE_GBL lpDDSurface,  DDGPEAllocSurfaceData*pddgpeAllocSurfaceData,  unsigned long *pOffsetInVideoMemory );
virtual SCODE BltExpanded (  DDGPESurf *pDst,  DDGPESurf *pSrc,  DDGPESurf *pPattern,  DDGPESurf *pMask,  CLIPOBJ *pco,  XLATEOBJ *pxlo,  CONST RECT *prclDst,  CONST RECT *prclSrc,  ULONG solidColor,  ULONG bltFlags,  ULONG rop4  );  virtual SCODE BltExpanded (  DDGPESurf *pDst,  DDGPESurf *pSrc,  DDGPESurf *pPattern,  CONST RECT *prclDst,  CONST RECT *prclSrc,  ULONG solidColor,  ULONG bltFlags,  ULONG rop4 );
DDGPESurf (  int width,  int height,  void *pBits,  int stride,  EGPEFormat format  );  DDGPESurf (  int width,  int height,  void *pBits,  int stride,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat  );  DDGPESurf (  int width,  int height,  int stride,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat  );  DDGPESurf (  int width,  int height,  EGPEFormat format );
virtual DDGPEDriverData*GetDriverData (void );
virtual GUID GetDriverGUID (void );
virtual SCODE DetectMode (  DWORD *dwModeID,  DWORD dwWidth,  DWORD dwHeight,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat,  DDPIXELFORMAT *pDDPF = NULL );
virtual SCODE DetectPixelFormat (  DWORD dwCaps,  DDPIXELFORMAT *pDDPF,  EGPEFormat *pFormat,  EDDGPEPixelFormat *pPixelFormat );
virtual SCODE GetModeInfo(  GPEMode *pMode,  int modeNo )=0;  virtual int NumModes()=0;  virtual SCODE SetMode(  int modeId )=0;  virtual SCODE BltPrepare(  GPEBltParms *pBltParms )=0;  virtual SCODE BltComplete(  GPEBltParms *pBltParms )=0;  virtual SCODE Line(  GPELineParms *pLineParms,  EGPEPhase phase = gpeSingle )=0;  virtual SCODE AllocSurface(  GPESurf **ppSurf,  int width,  int height,  EGPEFormat format,  int surfaceFlags )=0;  virtual SCODE SetPointerShape(  GPESurf *pMask,  GPESurf *pColorSurf,  int xHot,  int yHot,  int cx,  int cy )=0;  virtual SCODE MovePointer(  int x,  int y )=0;  virtual SCODE SetPalette(  RGBQUAD *src,  unsigned short firstEntry,  unsigned short numEntries )=0;  virtual SCODE SetPalette(  PALETTEENTRY *src,  unsigned short firstEntry,  unsigned short numEntries )=0;  virtual int InVBlank()=0;
virtual LPDDRAWI_DDRAWSURFACE_LCLGetDirectDrawSurface (void );
virtual SCODE GetModeInfoEx (  GPEModeEx *pModeEx,  int modeNo );
#define MEM_WIDTH_IN_PIXELS 640  #define PIXEL_BYTES 2  #define MEM_HEIGHT 1000  extern unsigned char *memBase;  Node2D AllMem(MEM_WIDTH_IN_PIXELS, MEM_HEIGHT);  Node2D *pSurf1 = AllMem->Alloc( 20, 40 );  Node2D *pSurf2 = AllMem->Alloc( 100, 100 );  int strideInBytes = MEM_WIDTH_IN_PIXELS * PIXEL_BYTES;  unsigned char *ptr1 = memBase + strideInBytes * pSurf1->Top()  + PIXEL_BYTES * pSurf1->Left();  pSurf1->Free();  pSurf2->free();
DWORD NodeSize (void };
virtual SCODE PerformBlt (  DDGPEBltParms *pddgpeBltParms );
extern "C" __declspec(dllexport) DWORD GPS_Init(DWORD dwContext);
USB_TRANSFER SetFeature(  USB_HANDLE hDevice,  LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,  LPVOID lpvNotifyParameter,  DWORD dwFlags,  WORD wFeature,  UCHAR bIndex );
USB_TRANSFER SetInterface(  USB_HANDLE hDevice,  LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,  LPVOID lpvNotifyParameter,  DWORD dwFlags,  UCHAR bInterfaceNumber,  UCHAR bAlternateSetting );
SurfaceHeap (  DWORD size,  ADDRESS base,  SurfaceHeap *pNext,  SurfaceHeap *pPrev );
USB_TRANSFER SyncFrame(  USB_HANDLE hDevice,  LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,  LPVOID lpvNotifyParameter,  DWORD dwFlags,  UCHAR bEndpoint,  LPWORD lpwFrame );
virtual SCODE WrapSurface (  LPDDRAWI_DDRAWSURFACE_GBL lpDDSurface,  int width,  int height,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat,  int stride,  int surfaceFlags  );  virtual SCODE WrapSurface (  DDGPESurf **ppSurf,  int width,  int height,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat,  unsigned char *pBits,  int stride  );  virtual SCODE WrapSurface (  LPDDRAWI_DDRAWSURFACE_GBL lpDDSurface,  int width,  int height,  EGPEFormat format,  EDDGPEPixelFormat pixelFormat,  unsigned char *pBits,  int stride  );  virtual SCODE WrapSurface (  DDGPESurf **ppSurf,  DDGPEAllocSurfaceData*pddgpeAllocSurfaceData  );  virtual SCODE WrapSurface (  LPDDRAWI_DDRAWSURFACE_GBL lpDDSurface,  DDGPEAllocSurfaceData*pddgpeAllocSurfaceData );
DWORD __stdcall ColorControl(  LPDDHAL_COLORCONTROLDATA pccd );
DWORD __stdcall DestroyDriver(  LPDDHAL_DESTROYDRIVERDATA pddd );
DWORD __stdcall SetExclusiveMode(  LPDDHAL_SETEXCLUSIVEMODEDATA psemd );
RECT rcSource, rcDest; DDBLTFX ddbltfx; ZeroMemory(&ddbltfx, sizeof(ddbltfx)); ddbltfx.dwSize = sizeof(ddbltfx); ddbltfx.dwDDFX = DDBLTFX_MIRRORLEFTRIGHT; rcSource.top = 0; rcSource.left = 0; rcSource.bottom = 100; rcSource.right = 200; rcDest.top = 0; rcDest.left = 201; rcDest.bottom = 100; rcDest.right = 401; HRESULT hr = lpDDS->Blt(&rcDest, lpDDS, &rcSource, DDBLT_WAIT | DDBLT_DDFX, &ddbltfx);
WORD GetBitCount(  const GUID *pSubtype);
const RGBQUAD * GetBitmapPalette(  const VIDEOINFOHEADER *pVideoInfo);
const GUID GetBitmapSubtype(  const BITMAPINFOHEADER *pHeader);
TCHAR * GetSubtypeName(  const GUID *pSubtype);
const GUID GetTrueColorType(  const BITMAPINFOHEADER *pHeader);
CAggDirectDraw(TCHAR *pName,  LPUNKNOWN pUnk);
CAggDrawSurface(  TCHAR *pName,  LPUNKNOWN pUnk);
CAMEvent(  BOOL fManualReset = FALSE );
CAMSchedule(  HANDLE hEvent);
REFERENCE_TIME GetNextAdviseTime( );
HANDLE GetRequestHandle( ) const;
DWORD GetRequestParam( ) const;
CBaseAllocator(  TCHAR *pName,  LPUNKNOWN lpUnk,  HRESULT *phr,  BOOL bListSemaphore = TRUE);
CBaseBasicVideo(  const TCHAR *pName,  LPUNKNOWN pUnk);
CBaseControlVideo(  CBaseFilter *pFilter,  CCritSec *pInterfaceLock,  TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr);
virtual HRESULT GetSourceRect(  RECT *pSourceRect) PURE;
virtual HRESULT GetStaticImage(  long *pBufferSize,  long *pDIBImage) PURE;
virtual HRESULT GetTargetRect(  RECT *pTargetRect) PURE;
virtual HRESULT IsDefaultSourceRect(void) PURE;
virtual HRESULT IsDefaultTargetRect(void) PURE;
virtual HRESULT SetDefaultSourceRect( ) PURE;
virtual HRESULT SetDefaultTargetRect( ) PURE;
virtual HRESULT SetSourceRect(  RECT *pSourceRect) PURE;
virtual HRESULT SetTargetRect(  RECT *pTargetRect) PURE;
CBaseControlWindow(  CBaseMediaFilter *pFilter,  CCritSec *pInterfaceLock,  TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr);
COLORREF GetBorderColour( );
HWND GetOwnerWindow( );
CBaseFilter(  TCHAR *pName,  LPUNKNOWN pUnk,  CCritSec *pLock,  REFCLSID clsid);
IFilterGraph *GetFilterGraph( );
virtual CBasePin *GetPin(  int n) PURE;
virtual long GetPinVersion( );
virtual LPAMOVIESETUP_FILTER GetSetupData( );
CBaseInputPin::CBaseInputPin(  TCHAR *pObjectName,  CBaseFilter *pFilter,  CCritSec *pLock,  HRESULT *phr,  LPCWSTR pPinName);
POSITION AddAfterI(  POSITION pos,  void *pObj);
POSITION AddBeforeI(  POSITION pos,  void *pObj);
POSITION AddHeadI(  void *pObj);
POSITION AddTailI(  void *pObj);
CBaseList(  TCHAR *pName,  INT iItems);  CBaseList(  TCHAR *pName);
POSITION FindI(  void *pObj);
POSITION GetHeadPositionI( );
void *GetI(  POSITION pos);
void *GetNextI( POSITION& rp);
POSITION GetTailPositionI( );
POSITION Prev(  POSITION pos);
void *RemoveHeadI( );
void *RemoveI(  POSITION pos);
void *RemoveTailI( );
CBaseMediaFilter(  TCHAR *pName,  LPUNKNOWN pUnk,  CCritSec *pLock,  REFCLSID clsid);
CBaseObject(  const TCHAR *pName);
CBaseOutputPin(  TCHAR *pObjectName,  CBaseFilter *pFilter,  CCritSec *pLock,  HRESULT * phr,  LPCWSTR pName);
CBasePin(  TCHAR *pObjectName,  CBaseFilter *pFilter,  CCritSec *pLock,  HRESULT *phr,  LPCWSTR pName,  PIN_DIRECTION dir);
double CurrentRate( );
REFERENCE_TIME CurrentStartTime( );
REFERENCE_TIME CurrentStopTime( );
IPin *GetConnected( );
CBaseReferenceClock(  TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr,  CAMSchedule *pSched);
virtual REFERENCE_TIME GetPrivateTime( );
CAMSchedule *GetSchedule( );
CBaseRenderer(  REFCLSID RenderClass,  TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr);
void CBaseRenderer::DisplayRendererState( );
virtual HRESULT DoRenderSample(  IMediaSample *pMediaSample) PURE;
virtual IMediaSample *GetCurrentSample(void);
FILTER_STATE GetRealState(void);
CAMEvent *GetRenderEvent(void);
CBaseVideoRenderer(  REFCLSID RenderClass,  TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr);
CBaseVideoWindow(  const TCHAR *pName,  LPUNKNOWN pUnk);
CBaseWindow(  BOOL bDoGetDC = TRUE);
virtual LPTSTR GetClassWindowStyles(  DWORD *pClassStyles,  DWORD *pWindowStyles,  DWORD *pWindowStylesEx) PURE;
virtual RECT GetDefaultRect( );
virtual HDC GetMemoryHDC( );
virtual InitialiseWindow(  HWND hwnd);
virtual LRESULT OnReceiveMessage(  HWND hwnd,  INT uMsg,  WPARAM wParam,  LPARAM lParam);
virtual UninitialiseWindow( );
CBasicAudio(  const TCHAR *pName,  LPUNKNOWN pUnk);
CGenericList(  TCHAR *pName,  INT iItems,  BOOL bLock,  BOOL bAlert );  CGenericList(  TCHAR *pName );
OBJECT GetHead( );
POSITION GetHeadPosition( );
POSITION GetTailPosition( );
OBJECT *RemoveHead( );
OBJECT *RemoveTail( );
int MyFunc(AM_MEDIA_TYPE mt)
{
  DbgLog((LOG_TRACE, 2, TEXT("MyFunc: Type %s, Subtype %s"),
  GuidNames[mt.majortype],
  GuidNames[mt.subtype]
  ));
  ...
}
CLoadDirectDraw(void);
CMediaControl(  const TCHAR *pName,  LPUNKNOWN pUnk );
CMediaEvent(  const TCHAR * pName,  LPUNKNOWN pUnk );
CMediaPosition(  const TCHAR *pName,  LPUNKNOWN pUnk );
CMediaSample(  TCHAR *pName,  CBaseAllocator *pAllocator,  HRESULT *phr,  LPBYTE pBuffer = NULL,  LONG length = 0 );
SetPointer(  BYTE * ptr,  LONG cBytes );
BOOL IsFixedSize( ) const;
BOOL IsPartiallySpecified( ) const;
BOOL IsTemporalCompressed( ) const;
BOOL IsValid( ) const;
BOOL MatchesPartial(  const CMediaType *ppartial  ) const;
CMemAllocator(  TCHAR * pName,  LPUNKNOWN lpUnk,  HRESULT * phr );
CMsg(  UINT u,  DWORD dw,  LPVOID lp,  CAMEvent *pEvent );
void virtual GetThreadMsg(  CMsg *msg );
virtual LRESULT ThreadMessageProc(  UINT uMsg,  DWORD dwFlags,  LPVOID lpParam,  CAMEvent *pEvent );
COutputQueue(  IPin *pInputPin,  HRESULT *phr,  BOOL bAuto = TRUE,  BOOL bQueue = TRUE,  LONG lBatchSize,  BOOL bBatchExact,  LONG lListSize,  DWORD dwPriority );
CPosPassThru(  const TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT * phr,  IPin * pPin );
CPullPin(void);
IAsyncReader* GetReader(void);
virtual void OnError(  HRESULT hr  ) PURE;
CQueue(  int n );  CQueue( );
T GetQueueObject( );
CRefTime( );  CRefTime(  LONG msecs );  CRefTime(  REFERENCE_TIME rt );
CRendererInputPin(  CBaseRenderer *pRenderer,  HRESULT *phr,  LPCWSTR Name );
CRendererPosPassThru(  const TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr,  IPin *pPin );
CSource(  TCHAR *pName,  LPUNKNOWN lpunk,  CLSID clsid );
virtual HRESULT ChangeRate( ) PURE;
virtual HRESULT ChangeStart( ) PURE;
virtual HRESULT ChangeStop( ) PURE;
CSourcePosition(  const TCHAR * pName,  LPUNKNOWN pUnk,  HRESULT *phr,  CCritSec *pLock );
CSourceSeeking(  const TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr,  CCritSec *pLock );
CSourceStream(  TCHAR *pObjectName,  HRESULT *phr,  CSource *pms,  LPCWSTR pName );
virtual HRESULT FillBuffer(  IMediaSample *pSample  ) PURE;
CSystemClock(  TCHAR *pName,  LPUNKNOWN pUnk,  HRESULT *phr );
virtual HRESULT CheckInputType(  const CmediaType *mtIn  ) PURE;
CTransformFilter(  TCHAR * pObjectName,  LPUNKNOWN lpUnk,  CLSID clsid );
virtual HRESULT Transform(  IMediaSample *pIn,  IMediaSample *pOut  ) PURE;
CTransformInputPin(  TCHAR *pObjectName,  CTransformFilter *pTransformFilter,  HRESULT * phr,  LPCWSTR pName );
CTransformOutputPin(  TCHAR *pObjectName,  CTransformFilter *pTransformFilter,  HRESULT * phr,  LPCWSTR pName );
CTransInPlaceFilter(  TCHAR * pObjectName,  LPUNKNOWN lpUnk,  REFCLSID clsid,  HRESULT * phr );
CTransInPlaceOutputPin *OutputPin( );
CTransInPlaceInputPin(  TCHAR *pObjectName,  CTransInPlaceFilter *pFilter,  HRESULT *phr,  LPCWSTR pName );
const BOOL ReadOnly( )
CTransInPlaceOutputPin(  TCHAR *pObjectName,  CTransInPlaceFilter *pFilter,  HRESULT * phr,  LPCWSTR pName );
CUnknown(  const TCHAR *pName,  LPUNKNOWN pUnk );
LPUNKNOWN GetOwner(void);
CVideoTransformFilter(  TCHAR *pName,  LPUNKNOWN pUnk,  REFCLSID clsid );
void WINAPI (  IFilterGraph *pGraph,  DWORD dwLevel)
HINSTANCE LoadOLEAut32( );
FOURCCMap( );  FOURCCMap(  DWORD Fourcc );  FOURCCMap(  const GUID * pguid );
ValidateReadPtr(  const void * p,  UINT cb);
ValidateReadWritePtr(  const void * p,  UINT cb);
ValidateStringPtr(  LPCTSTR p);
ValidateStringPtrW(  LPCWSTR p);
ValidateWritePtr(  const void *p,  UINT cb);
STDAPI_(int)ReadInt( IStream *pIStream, HRESULT &hr);
DWORD CALLBACK OpenPerformanceData(  LPWSTR lpDeviceNames  );
CBasePropertyPage(  TCHAR* pName,  LPUNKNOWN pUnk,  int DialogId,  int TitleId  );
CPersistStream(  IUnknown* pUnk,  HRESULT* phr  );
The following code example shows how to do a search to retrieve all attributes and all values under the entry, ou=PNS, o=USSA, c =US.  ULONG CallValue;  int SearchScope, AttrsOnly, CallValue;  TCHAR SearchBase[128], SearchFilter[128], **Attrs;  _tcscpy(SearchBase, _T("ou = PNS, o = USSA, c = US"));  SearchScope = LDAP_SCOPE_SUBTREE;  _tcscpy(SearchFilter, _T("(objectclass=*)")); // get all entries  Attrs = NULL; // get all attributes  AttrsOnly = 0; // get values as well as attributes  CallValue = ldap_search(ld, SearchBase, SearchScope, SearchFilter, Attrs, AttrsOnly );
function F_Change()
{
  window.setTimeout("fnToggle4()", 1);
}
var sNewValue = "copy event fired";
var bFired = false;
var sSave = "";
function Source_Beforecopy()
{
  sSave = oSource.innerText;
  bFired = true;
  event.returnValue = false;
}
function Source_Copy()
{
  window.clipboardData.setData("Text", sNewValue);
}
function Target_BeforePaste()
{
  event.returnValue = false;
}
function Target_Paste()
{
  event.returnValue = false;
  oTarget.value = window.clipboardData.getData("Text");
}
copy this text
HRESULT FindBehavior(  BSTR bstrBehavior,  BSTR bstrBehaviorUrl,  IElementBehaviorSite *pSite,  IElementBehavior **ppBehavior  );
HRESULT GetLayoutInfo(  LONG *plLayoutInfo  );
HRESULT GetPosition(  LONG lFlags,  POINT *pptTopLeft  );
HRESULT MapSize(  SIZE *psizeIn,  RECT *prcOut  );
HRESULT GetTextDescent(  LONG *plDescent  );
HRESULT GetRenderInfo(  LONG *plRenderInfo  );
HRESULT HitTestPoint(  POINT *pPoint,  IUnknown *pReserved,  BOOL *pbHit  );
HRESULT GetRelatedBehaviors(  LONG lDirection,  LPOLESTR pchCategory,  IEnumUnknown **ppEnumerator  );
HRESULT GetElement(  IHTMLElement **ppElement  );
HRESULT GetMediaResolution(  SIZE *psizeResolution  );
HRESULT InvalidateLayoutInfo(VOID);
HRESULT InvalidateSize(VOID);
HRESULT GetFontInfo(  LOGFONTW *plf  );
HRESULT FireEvent(  LONG lCookie,  IHTMLEventObj *pEventObject  );
HRESULT GetEventCookie(  LPOLESTR pchEvent,  LONG *plCookie  );
HRESULT RegisterEvent(  LPOLESTR pchEvent,  LONG lFlags,  LONG *plCookie  );
HRESULT RegisterName(  LPOLESTR pchName  );
HRESULT RegisterUrn(  LPOLESTR pchUrn  );
HRESULT GetDefaults(  IHTMLElementDefaults **ppDefaults  );
HRESULT InvalidateRenderInfo(VOID);
HRESULT InvalidateStyle(VOID);
HRESULT GetSubmitInfo(  IHTMLSubmitData *pSubmitData  );
HRESULT AddTag(  BSTR bstrTagName,  LONG lFlags  );
HRESULT CreateWithImplementation(  IElementNamespace *pNamespace,  BSTR bstrImplementation  );
HRESULT PopulateNamespaceTable(VOID);
HRESULT IHTMLAnchorElement::get_accessKey(BSTR *p); HRESULT IHTMLAnchorElement::put_accessKey(BSTR v);
HRESULT IHTMLAnchorElement::get_mimeType(BSTR *p);
HRESULT IHTMLAnchorElement::get_nameProp(BSTR *p);
HRESULT IHTMLAnchorElement::get_protocolLong(BSTR *p);
HRESULT IHTMLAnchorElement::get_hash(BSTR *p); HRESULT IHTMLAnchorElement::put_hash(BSTR v);
HRESULT IHTMLAnchorElement::get_host(BSTR *p); HRESULT IHTMLAnchorElement::put_host(BSTR v);
HRESULT IHTMLAnchorElement::get_hostname(BSTR *p); HRESULT IHTMLAnchorElement::put_hostname(BSTR v);
HRESULT IHTMLAnchorElement::get_href(BSTR *p); HRESULT IHTMLAnchorElement::put_href(BSTR v);
HRESULT IHTMLAnchorElement::get_Methods(BSTR *p); HRESULT IHTMLAnchorElement::put_Methods(BSTR v);
HRESULT IHTMLAnchorElement::get_onblur(VARIANT *p); HRESULT IHTMLAnchorElement::put_onblur(VARIANT v);
HRESULT IHTMLAnchorElement::get_onfocus(VARIANT *p); HRESULT IHTMLAnchorElement::put_onfocus(VARIANT v);
HRESULT IHTMLAnchorElement::get_pathname(BSTR *p); HRESULT IHTMLAnchorElement::put_pathname(BSTR v);
HRESULT IHTMLAnchorElement::get_port(BSTR *p); HRESULT IHTMLAnchorElement::put_port(BSTR v);
HRESULT IHTMLAnchorElement::get_protocol(BSTR *p); HRESULT IHTMLAnchorElement::put_protocol(BSTR v);
HRESULT IHTMLAnchorElement::get_rel(BSTR *p); HRESULT IHTMLAnchorElement::put_rel(BSTR v);
HRESULT IHTMLAnchorElement::get_rev(BSTR *p); HRESULT IHTMLAnchorElement::put_rev(BSTR v);
HRESULT IHTMLAnchorElement::get_search(BSTR *p); HRESULT IHTMLAnchorElement::put_search(BSTR v);
HRESULT IHTMLAnchorElement::get_tabIndex(short *p); HRESULT IHTMLAnchorElement::put_tabIndex(short v);
HRESULT IHTMLAnchorElement::get_urn(BSTR *p); HRESULT IHTMLAnchorElement::put_urn(BSTR v);
HRESULT IHTMLAnchorElement2::get_charset(BSTR *p); HRESULT IHTMLAnchorElement2::put_charset(BSTR v);
HRESULT IHTMLAnchorElement2::get_coords(BSTR *p); HRESULT IHTMLAnchorElement2::put_coords(BSTR v);
HRESULT IHTMLAnchorElement2::get_hreflang(BSTR *p); HRESULT IHTMLAnchorElement2::put_hreflang(BSTR v);
HRESULT IHTMLAnchorElement2::get_shape(BSTR *p); HRESULT IHTMLAnchorElement2::put_shape(BSTR v);
HRESULT IHTMLAnchorElement2::get_type(BSTR *p); HRESULT IHTMLAnchorElement2::put_type(BSTR v);
HRESULT IHTMLAreaElement::get_alt(BSTR *p); HRESULT IHTMLAreaElement::put_alt(BSTR v);
HRESULT IHTMLAreaElement::get_noHref(VARIANT_BOOL *p); HRESULT IHTMLAreaElement::put_noHref(VARIANT_BOOL v);
HRESULT IHTMLAreasCollection::get__newEnum(IUnknown **p);
HRESULT IHTMLBaseFontElement::get_color(VARIANT *p); HRESULT IHTMLBaseFontElement::put_color(VARIANT v);
HRESULT IHTMLBaseFontElement::get_face(BSTR *p); HRESULT IHTMLBaseFontElement::put_face(BSTR v);
HRESULT IHTMLBaseFontElement::get_size(long *p); HRESULT IHTMLBaseFontElement::put_size(long v);
HRESULT IHTMLBGsound::get_loop(VARIANT *p); HRESULT IHTMLBGsound::put_loop(VARIANT v);
HRESULT IHTMLBGsound::get_src(BSTR *p); HRESULT IHTMLBGsound::put_src(BSTR v);
HRESULT IHTMLBlockElement::get_clear(BSTR *p); HRESULT IHTMLBlockElement::put_clear(BSTR v);
HRESULT IHTMLBlockElement2::get_cite(BSTR *p); HRESULT IHTMLBlockElement2::put_cite(BSTR v);
HRESULT IHTMLBlockElement2::get_width(BSTR *p); HRESULT IHTMLBlockElement2::put_width(BSTR v);
HRESULT IHTMLBodyElement::get_aLink(VARIANT *p); HRESULT IHTMLBodyElement::put_aLink(VARIANT v);
HRESULT IHTMLBodyElement::get_background(BSTR *p); HRESULT IHTMLBodyElement::put_background(BSTR v);
HRESULT IHTMLBodyElement::get_bgColor(VARIANT *p); HRESULT IHTMLBodyElement::put_bgColor(VARIANT v);
HRESULT IHTMLBodyElement::get_bgProperties(BSTR *p); HRESULT IHTMLBodyElement::put_bgProperties(BSTR v);
HRESULT IHTMLBodyElement::get_bottomMargin(VARIANT *p); HRESULT IHTMLBodyElement::put_bottomMargin(VARIANT v);
HRESULT IHTMLBodyElement::get_leftMargin(VARIANT *p); HRESULT IHTMLBodyElement::put_leftMargin(VARIANT v);
HRESULT IHTMLBodyElement::get_link(VARIANT *p); HRESULT IHTMLBodyElement::put_link(VARIANT v);
HRESULT IHTMLBodyElement::get_noWrap(VARIANT_BOOL *p); HRESULT IHTMLBodyElement::put_noWrap(VARIANT_BOOL v);
HRESULT IHTMLBodyElement::get_onbeforeunload(VARIANT *p); HRESULT IHTMLBodyElement::put_onbeforeunload(VARIANT v);
HRESULT IHTMLBodyElement::get_onload(VARIANT *p); HRESULT IHTMLBodyElement::put_onload(VARIANT v);
HRESULT IHTMLBodyElement::get_onselect(VARIANT *p); HRESULT IHTMLBodyElement::put_onselect(VARIANT v);
HRESULT IHTMLBodyElement::get_onunload(VARIANT *p); HRESULT IHTMLBodyElement::put_onunload(VARIANT v);
HRESULT IHTMLBodyElement::get_rightMargin(VARIANT *p); HRESULT IHTMLBodyElement::put_rightMargin(VARIANT v);
HRESULT IHTMLBodyElement::get_scroll(BSTR *p); HRESULT IHTMLBodyElement::put_scroll(BSTR v);
HRESULT IHTMLBodyElement::get_topMargin(VARIANT *p); HRESULT IHTMLBodyElement::put_topMargin(VARIANT v);
HRESULT IHTMLBodyElement::get_vLink(VARIANT *p); HRESULT IHTMLBodyElement::put_vLink(VARIANT v);
HRESULT IHTMLBodyElement2::get_onafterprint(VARIANT *p); HRESULT IHTMLBodyElement2::put_onafterprint(VARIANT v);
HRESULT IHTMLBodyElement2::get_onbeforeprint(VARIANT *p); HRESULT IHTMLBodyElement2::put_onbeforeprint(VARIANT v);
HRESULT IHTMLButtonElement::get_disabled(VARIANT_BOOL *p); HRESULT IHTMLButtonElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLButtonElement::get_form(IHTMLFormElement **p);
HRESULT GetCaretDirection(  CARET_DIRECTION *peDir  );
HRESULT GetLocation(  POINT *pPoint,  BOOL fTranslate  );
HRESULT Hide(VOID);
HRESULT InsertText(  OLECHAR *pText,  LONG lLen  );
HRESULT IsVisible(  BOOL *pIsVisible  );
HRESULT MoveCaretToPointer(  IDisplayPointer *pDispPointer,  BOOL fScrollIntoView,  CARET_DIRECTION eDir  );
HRESULT MoveCaretToPointerEx(  IDisplayPointer *pDispPointer,  BOOL fVisible,  BOOL fScrollIntoView,  CARET_DIRECTION eDir  );
HRESULT MoveDisplayPointerToCaret(  IDisplayPointer *pDispPointer  );
HRESULT MoveMarkupPointerToCaret(  IMarkupPointer *pIMarkupPointer  );
HRESULT SetCaretDirection(  CARET_DIRECTION eDir  );
HRESULT GetNextChange(  BYTE *pbBuffer,  long nBufferSize,  long *pnRecordLength  );
HRESULT ExecChange(  BYTE *pbRecord,  BOOL fForward  );
HRESULT IHTMLComputedStyle::get_backgroundColor(DWORD *p);
HRESULT IHTMLComputedStyle::get_blockDirection(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_bold(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_direction(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_explicitFace(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_fontName(TCHAR *p);
HRESULT IHTMLComputedStyle::get_fontSize(long *p);
HRESULT IHTMLComputedStyle::get_fontWeight(long *p);
HRESULT IHTMLComputedStyle::get_hasBgColor(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_italic(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_OL(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_overline(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_preFormatted(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_strikeOut(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_subScript(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_superScript(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_textColor(DWORD *p);
HRESULT IHTMLComputedStyle::get_underline(VARIANT_BOOL *p);
HRESULT IHTMLControlElement::get_clientHeight(long *p);
HRESULT IHTMLControlElement::get_clientLeft(long *p);
HRESULT IHTMLControlElement::get_clientTop(long *p);
HRESULT IHTMLControlElement::get_clientWidth(long *p);
HRESULT IHTMLControlElement::get_onresize(VARIANT *p); HRESULT IHTMLControlElement::put_onresize(VARIANT v);
HRESULT IHTMLCurrentStyle::get_behavior(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderColor(BSTR *p);
HRESULT IHTMLCurrentStyle::get_bottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_accelerator(BSTR *p);
HRESULT IHTMLCurrentStyle::get_backgroundAttachment(BSTR *p);
HRESULT IHTMLCurrentStyle::get_backgroundImage(BSTR *p);
HRESULT IHTMLCurrentStyle::get_backgroundPositionX(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_backgroundPositionY(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_backgroundRepeat(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderBottomColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderBottomStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderBottomWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderCollapse(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderLeftColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderLeftStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderLeftWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderRightColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderRightStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderRightWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderTopColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderTopStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderTopWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderWidth(BSTR *p);
HRESULT IHTMLCurrentStyle::get_clipBottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_clipLeft(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_clipRight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_clipTop(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_cursor(BSTR *p);
HRESULT IHTMLCurrentStyle::get_display(BSTR *p);
HRESULT IHTMLCurrentStyle::get_fontFamily(BSTR *p);
HRESULT IHTMLCurrentStyle::get_fontStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_fontVariant(BSTR *p);
HRESULT IHTMLCurrentStyle::get_height(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_left(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_letterSpacing(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_lineHeight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_listStyleImage(BSTR *p);
HRESULT IHTMLCurrentStyle::get_listStylePosition(BSTR *p);
HRESULT IHTMLCurrentStyle::get_listStyleType(BSTR *p);
HRESULT IHTMLCurrentStyle::get_margin(BSTR *p);
HRESULT IHTMLCurrentStyle::get_marginBottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_marginLeft(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_marginRight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_marginTop(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_overflow(BSTR *p);
HRESULT IHTMLCurrentStyle::get_overflowX(BSTR *p);
HRESULT IHTMLCurrentStyle::get_overflowY(BSTR *p);
HRESULT IHTMLCurrentStyle::get_padding(BSTR *p);
HRESULT IHTMLCurrentStyle::get_paddingBottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_paddingLeft(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_paddingRight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_paddingTop(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_pageBreakAfter(BSTR *p);
HRESULT IHTMLCurrentStyle::get_pageBreakBefore(BSTR *p);
HRESULT IHTMLCurrentStyle::get_position(BSTR *p);
HRESULT IHTMLCurrentStyle::get_styleFloat(BSTR *p);
HRESULT IHTMLCurrentStyle::get_tableLayout(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textAlign(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textDecoration(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textIndent(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_textTransform(BSTR *p);
HRESULT IHTMLCurrentStyle::get_top(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_verticalAlign(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_visibility(BSTR *p);
HRESULT IHTMLCurrentStyle::get_zIndex(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_imeMode(BSTR *p);
HRESULT IHTMLCurrentStyle::get_layoutGridChar(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_layoutGridLine(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_layoutGridMode(BSTR *p);
HRESULT IHTMLCurrentStyle::get_layoutGridType(BSTR *p);
HRESULT IHTMLCurrentStyle::get_lineBreak(BSTR *p);
HRESULT IHTMLCurrentStyle::get_right(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_rubyAlign(BSTR *p);
HRESULT IHTMLCurrentStyle::get_rubyOverhang(BSTR *p);
HRESULT IHTMLCurrentStyle::get_rubyPosition(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textAutospace(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textJustify(BSTR *p);
HRESULT IHTMLCurrentStyle::get_unicodeBidi(BSTR *p);
HRESULT IHTMLCurrentStyle::get_wordBreak(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_filter(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_hasLayout(VARIANT_BOOL *p);
HRESULT IHTMLCurrentStyle2::get_isBlock(VARIANT_BOOL *p);
HRESULT IHTMLCurrentStyle2::get_layoutFlow(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_scrollbar3dLightColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarArrowColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarBaseColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarDarkShadowColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarFaceColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarHighlightColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarShadowColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarTrackColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_textAlignLast(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_textKashidaSpace(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_textUnderlinePosition(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_wordWrap(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_writingMode(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_zoom(VARIANT *p);
HRESULT IHTMLCurrentStyle3::get_minHeight(VARIANT *p); HRESULT IHTMLCurrentStyle3::put_minHeight(VARIANT v);
HRESULT IHTMLCurrentStyle3::get_textOverflow(VARIANT *p); HRESULT IHTMLCurrentStyle3::put_textOverflow(VARIANT v);
HRESULT IHTMLCurrentStyle3::get_whiteSpace(BSTR *p);
HRESULT IHTMLCurrentStyle3::get_wordSpacing(VARIANT *p);
HRESULT IHTMLDatabinding::get_dataFld(BSTR *p); HRESULT IHTMLDatabinding::put_dataFld(BSTR v);
HRESULT IHTMLDatabinding::get_dataFormatAs(BSTR *p); HRESULT IHTMLDatabinding::put_dataFormatAs(BSTR v);
HRESULT IHTMLDatabinding::get_dataSrc(BSTR *p); HRESULT IHTMLDatabinding::put_dataSrc(BSTR v);
HRESULT IHTMLDataTransfer::get_dropEffect(BSTR *p); HRESULT IHTMLDataTransfer::put_dropEffect(BSTR v);
HRESULT IHTMLDataTransfer::get_effectAllowed(BSTR *p); HRESULT IHTMLDataTransfer::put_effectAllowed(BSTR v);
HRESULT IHTMLDialog::get_dialogHeight(VARIANT *p); HRESULT IHTMLDialog::put_dialogHeight(VARIANT v);
HRESULT IHTMLDialog::get_dialogLeft(VARIANT *p); HRESULT IHTMLDialog::put_dialogLeft(VARIANT v);
HRESULT IHTMLDialog::get_dialogTop(VARIANT *p); HRESULT IHTMLDialog::put_dialogTop(VARIANT v);
HRESULT IHTMLDialog::get_dialogWidth(VARIANT *p); HRESULT IHTMLDialog::put_dialogWidth(VARIANT v);
HRESULT IHTMLDialog::get_dialogArguments(VARIANT *p);
HRESULT IHTMLDialog::get_returnValue(VARIANT *p); HRESULT IHTMLDialog::put_returnValue(VARIANT v);
HRESULT IHTMLDialog2::get_resizable(BSTR *p); HRESULT IHTMLDialog2::put_resizable(BSTR v);
HRESULT IHTMLDialog3::get_dialogHide(BSTR *p); HRESULT IHTMLDialog3::put_dialogHide(BSTR v);
HRESULT IHTMLDialog3::get_unadorned(BSTR *p); HRESULT IHTMLDialog3::put_unadorned(BSTR v);
HRESULT GetDisplayGravity(  DISPLAY_GRAVITY *peGravity  );
HRESULT GetFlowElement(  IHTMLElement **ppLayoutElement  );
HRESULT GetLineInfo(  ILineInfo **ppLineInfo  );
HRESULT GetPointerGravity(  POINTER_GRAVITY *peGravity  );
HRESULT IsAtBOL(  BOOL *pfBOL  );
HRESULT IsEqualTo(  IDisplayPointer *pDispPointer,  BOOL *pfIsEqual  );
HRESULT IsLeftOf(  IDisplayPointer *pDispPointer,  BOOL *pfIsLeftOf  );
HRESULT IsPositioned(  BOOL *pfPositioned  );
HRESULT IsRightOf(  IDisplayPointer *pDispPointer,  BOOL *pfIsLeftOf  );
HRESULT MoveToMarkupPointer(  IMarkupPointer *pPointer,  IDisplayPointer *pDispLineContext  );
HRESULT MoveToPoint(  POINT ptPoint,  COORD_SYSTEM eCoordSystem,  IHTMLElement *pElementContext,  DWORD dwHitTestOptions,  DWORD *pdwHitTestResults  );
HRESULT MoveToPointer(  IDisplayPointer *pDispPointer  );
HRESULT MoveUnit(  DISPLAY_MOVEUNIT eMoveUnit,  LONG lXPos  );
HRESULT PositionMarkupPointer(  IMarkupPointer *pMarkupPointer  );
HRESULT QueryBreaks(  DWORD *pdwBreaks  );
HRESULT SetDisplayGravity(  DISPLAY_GRAVITY eGravity  );
HRESULT SetPointerGravity(  POINTER_GRAVITY eGravity  );
HRESULT Unposition(VOID);
HRESULT CreateDisplayPointer(  IDisplayPointer **ppDispPointer  );
HRESULT GetCaret(  IHTMLCaret **ppCaret  );
HRESULT GetComputedStyle(  IMarkupPointer *pPointer,  IHTMLComputedStyle **ppComputedStyle  );
HRESULT HasFlowLayout(  IHTMLElement *pIElement,  BOOL *pfHasFlowLayout  );
HRESULT ScrollRectIntoView(  IHTMLElement *pIElement,  RECT rect  );
HRESULT TransformPoint(  POINT *pPoint,  COORD_SYSTEM eSource,  COORD_SYSTEM eDestination,  IHTMLElement *pIElement  );
HRESULT TransformRect(  RECT *pRect,  COORD_SYSTEM eSource,  COORD_SYSTEM eDestination,  IHTMLElement *pIElement  );
HRESULT IHTMLDivElement::get_align(BSTR *p); HRESULT IHTMLDivElement::put_align(BSTR v);
HRESULT IHtmlDlgSafeHelper::get_blockFormats(IDispatch **p);
HRESULT IHtmlDlgSafeHelper::get_fonts(IDispatch **p);
HRESULT IHTMLDListElement::get_compact(VARIANT_BOOL *p); HRESULT IHTMLDListElement::put_compact(VARIANT_BOOL v);
HRESULT IHTMLDocument::get_Script(IDispatch **p);
HRESULT IHTMLDocument2::get_alinkColor(VARIANT *p); HRESULT IHTMLDocument2::put_alinkColor(VARIANT v);
HRESULT IHTMLDocument2::get_cookie(BSTR *p); HRESULT IHTMLDocument2::put_cookie(BSTR v);
HRESULT IHTMLDocument2::get_defaultCharset(BSTR *p); HRESULT IHTMLDocument2::put_defaultCharset(BSTR v);
HRESULT IHTMLDocument2::get_designMode(BSTR *p); HRESULT IHTMLDocument2::put_designMode(BSTR v);
HRESULT IHTMLDocument2::get_domain(BSTR *p); HRESULT IHTMLDocument2::put_domain(BSTR v);
HRESULT IHTMLDocument2::get_expando(VARIANT_BOOL *p); HRESULT IHTMLDocument2::put_expando(VARIANT_BOOL v);
HRESULT IHTMLDocument2::get_fgColor(VARIANT *p); HRESULT IHTMLDocument2::put_fgColor(VARIANT v);
HRESULT IHTMLDocument2::get_activeElement(IHTMLElement **p);
HRESULT IHTMLDocument2::get_all(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_anchors(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_applets(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_body(IHTMLElement **p);
HRESULT IHTMLDocument2::get_embeds(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_fileCreatedDate(BSTR *p);
HRESULT IHTMLDocument2::get_fileModifiedDate(BSTR *p);
HRESULT IHTMLDocument2::get_fileSize(BSTR *p);
HRESULT IHTMLDocument2::get_fileUpdatedDate(BSTR *p);
HRESULT IHTMLDocument2::get_forms(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_frames(IHTMLFramesCollection2 **p);
HRESULT IHTMLDocument2::get_images(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_lastModified(BSTR *p);
HRESULT IHTMLDocument2::get_links(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_location(IHTMLLocation **p);
HRESULT IHTMLDocument2::get_parentWindow(IHTMLWindow2 **p);
HRESULT IHTMLDocument2::get_plugins(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_referrer(BSTR *p);
HRESULT IHTMLDocument2::get_scripts(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_security(BSTR *p);
HRESULT IHTMLDocument2::get_selection(IHTMLSelectionObject **p);
HRESULT IHTMLDocument2::get_styleSheets(IHTMLStyleSheetsCollection **p);
HRESULT IHTMLDocument2::get_linkColor(VARIANT *p); HRESULT IHTMLDocument2::put_linkColor(VARIANT v);
HRESULT IHTMLDocument2::get_onafterupdate(VARIANT *p); HRESULT IHTMLDocument2::put_onafterupdate(VARIANT v);
HRESULT IHTMLDocument2::get_onbeforeupdate(VARIANT *p); HRESULT IHTMLDocument2::put_onbeforeupdate(VARIANT v);
HRESULT IHTMLDocument2::get_onclick(VARIANT *p); HRESULT IHTMLDocument2::put_onclick(VARIANT v);
HRESULT IHTMLDocument2::get_ondblclick(VARIANT *p); HRESULT IHTMLDocument2::put_ondblclick(VARIANT v);
HRESULT IHTMLDocument2::get_ondragstart(VARIANT *p); HRESULT IHTMLDocument2::put_ondragstart(VARIANT v);
HRESULT IHTMLDocument2::get_onerrorupdate(VARIANT *p); HRESULT IHTMLDocument2::put_onerrorupdate(VARIANT v);
HRESULT IHTMLDocument2::get_onhelp(VARIANT *p); HRESULT IHTMLDocument2::put_onhelp(VARIANT v);
HRESULT IHTMLDocument2::get_onkeydown(VARIANT *p); HRESULT IHTMLDocument2::put_onkeydown(VARIANT v);
HRESULT IHTMLDocument2::get_onkeypress(VARIANT *p); HRESULT IHTMLDocument2::put_onkeypress(VARIANT v);
HRESULT IHTMLDocument2::get_onkeyup(VARIANT *p); HRESULT IHTMLDocument2::put_onkeyup(VARIANT v);
HRESULT IHTMLDocument2::get_onmousedown(VARIANT *p); HRESULT IHTMLDocument2::put_onmousedown(VARIANT v);
HRESULT IHTMLDocument2::get_onmousemove(VARIANT *p); HRESULT IHTMLDocument2::put_onmousemove(VARIANT v);
HRESULT IHTMLDocument2::get_onmouseout(VARIANT *p); HRESULT IHTMLDocument2::put_onmouseout(VARIANT v);
HRESULT IHTMLDocument2::get_onmouseover(VARIANT *p); HRESULT IHTMLDocument2::put_onmouseover(VARIANT v);
HRESULT IHTMLDocument2::get_onmouseup(VARIANT *p); HRESULT IHTMLDocument2::put_onmouseup(VARIANT v);
HRESULT IHTMLDocument2::get_onreadystatechange(VARIANT *p); HRESULT IHTMLDocument2::put_onreadystatechange(VARIANT v);
HRESULT IHTMLDocument2::get_onrowenter(VARIANT *p); HRESULT IHTMLDocument2::put_onrowenter(VARIANT v);
HRESULT IHTMLDocument2::get_onrowexit(VARIANT *p); HRESULT IHTMLDocument2::put_onrowexit(VARIANT v);
HRESULT IHTMLDocument2::get_onselectstart(VARIANT *p); HRESULT IHTMLDocument2::put_onselectstart(VARIANT v);
HRESULT IHTMLDocument2::get_title(BSTR *p); HRESULT IHTMLDocument2::put_title(BSTR v);
HRESULT IHTMLDocument2::get_vlinkColor(VARIANT *p); HRESULT IHTMLDocument2::put_vlinkColor(VARIANT v);
HRESULT IHTMLDocument3::get_dir(BSTR *p); HRESULT IHTMLDocument3::put_dir(BSTR v);
HRESULT IHTMLDocument3::get_parentDocument(IHTMLDocument3 **p);
HRESULT IHTMLDocument3::get_uniqueID(BSTR *p);
HRESULT IHTMLDocument3::get_onbeforeeditfocus(VARIANT *p); HRESULT IHTMLDocument3::put_onbeforeeditfocus(VARIANT v);
HRESULT IHTMLDocument3::get_oncellchange(VARIANT *p); HRESULT IHTMLDocument3::put_oncellchange(VARIANT v);
HRESULT IHTMLDocument3::get_oncontextmenu(VARIANT *p); HRESULT IHTMLDocument3::put_oncontextmenu(VARIANT v);
HRESULT IHTMLDocument3::get_ondataavailable(VARIANT *p); HRESULT IHTMLDocument3::put_ondataavailable(VARIANT v);
HRESULT IHTMLDocument3::get_ondatasetchanged(VARIANT *p); HRESULT IHTMLDocument3::put_ondatasetchanged(VARIANT v);
HRESULT IHTMLDocument3::get_ondatasetcomplete(VARIANT *p); HRESULT IHTMLDocument3::put_ondatasetcomplete(VARIANT v);
HRESULT IHTMLDocument3::get_onpropertychange(VARIANT *p); HRESULT IHTMLDocument3::put_onpropertychange(VARIANT v);
HRESULT IHTMLDocument3::get_onrowsdelete(VARIANT *p); HRESULT IHTMLDocument3::put_onrowsdelete(VARIANT v);
HRESULT IHTMLDocument3::get_onrowsinserted(VARIANT *p); HRESULT IHTMLDocument3::put_onrowsinserted(VARIANT v);
HRESULT IHTMLDocument3::get_onstop(VARIANT *p); HRESULT IHTMLDocument3::put_onstop(VARIANT v);
HRESULT IHTMLDocument4::get_oncontrolselect(VARIANT *p); HRESULT IHTMLDocument4::put_oncontrolselect(VARIANT v);
HRESULT IHTMLDocument4::get_onselectionchange(VARIANT *p); HRESULT IHTMLDocument4::put_onselectionchange(VARIANT v);
HRESULT IHTMLDocument4::get_URLUnencoded(BSTR *p);
HRESULT IHTMLDocument5::get_compatMode(BSTR *p);
HRESULT IHTMLDocument5::get_onactivate(VARIANT *p); HRESULT IHTMLDocument5::put_onactivate(VARIANT v);
HRESULT IHTMLDocument5::get_onbeforeactivate(VARIANT *p); HRESULT IHTMLDocument5::put_onbeforeactivate(VARIANT v);
HRESULT IHTMLDocument5::get_onbeforedeactivate(VARIANT *p); HRESULT IHTMLDocument5::put_onbeforedeactivate(VARIANT v);
HRESULT IHTMLDocument5::get_ondeactivate(VARIANT *p); HRESULT IHTMLDocument5::put_ondeactivate(VARIANT v);
HRESULT IHTMLDocument5::get_onfocusin(VARIANT *p); HRESULT IHTMLDocument5::put_onfocusin(VARIANT v);
HRESULT IHTMLDocument5::get_onfocusout(VARIANT *p); HRESULT IHTMLDocument5::put_onfocusout(VARIANT v);
HRESULT IHTMLDocument5::get_onmousewheel(VARIANT *p); HRESULT IHTMLDocument5::put_onmousewheel(VARIANT v);
HRESULT PostEditorEventNotify(  DISPID inEvtDispId,  IHTMLEventObj *pIEventObj  );
HRESULT PostHandleEvent(  DISPID inEvtDispId,  IHTMLEventObj *pIEventObj  );
HRESULT PreHandleEvent(  DISPID inEvtDispId,  IHTMLEventObj *pIEventObj  );
HRESULT SnapRect(  IHTMLElement *pIElement,  RECT *prcNew,  ELEMENT_CORNER eHandle  );
HRESULT PreDrag(VOID);
HRESULT AddDesigner(  IHTMLEditDesigner *pIDesigner  );
HRESULT GetSelectionServices(  IMarkupContainer *pIContainer,  ISelectionServices **ppSelSvc  );
HRESULT MoveToSelectionAnchor(  IMarkupPointer *pIStartAnchor  );
HRESULT MoveToSelectionEnd(  IMarkupPointer *pIEndAnchor  );
HRESULT RemoveDesigner(  IHTMLEditDesigner *pIDesigner  );
HRESULT FreezeVirtualCaretPos(  BOOL fReCompute  );
HRESULT MoveToSelectionAnchorEx(  IDisplayPointer *pIStartAnchor  );
HRESULT MoveToSelectionEndEx(  IDisplayPointer *pIEndAnchor  );
HRESULT UnFreezeVirtualCaretPos(  BOOL fReset  );
HRESULT IHTMLElement2::get_behaviorUrns(IDispatch **p);
HRESULT IHTMLElement2::get_currentStyle(IHTMLCurrentStyle **p);
HRESULT IHTMLElement2::get_canHaveChildren(VARIANT_BOOL *p);
HRESULT IHTMLElement2::get_runtimeStyle(IHTMLStyle **p);
HRESULT IHTMLElement2::get_scopeName(BSTR *p);
HRESULT IHTMLElement2::get_scrollHeight(long *p);
HRESULT IHTMLElement2::get_scrollWidth(long *p);
HRESULT IHTMLElement2::get_onbeforecopy(VARIANT *p); HRESULT IHTMLElement2::put_onbeforecopy(VARIANT v);
HRESULT IHTMLElement2::get_onbeforecut(VARIANT *p); HRESULT IHTMLElement2::put_onbeforecut(VARIANT v);
HRESULT IHTMLElement2::get_onbeforepaste(VARIANT *p); HRESULT IHTMLElement2::put_onbeforepaste(VARIANT v);
HRESULT IHTMLElement2::get_oncopy(VARIANT *p); HRESULT IHTMLElement2::put_oncopy(VARIANT v);
HRESULT IHTMLElement2::get_oncut(VARIANT *p); HRESULT IHTMLElement2::put_oncut(VARIANT v);
HRESULT IHTMLElement2::get_ondrag(VARIANT *p); HRESULT IHTMLElement2::put_ondrag(VARIANT v);
HRESULT IHTMLElement2::get_ondragend(VARIANT *p); HRESULT IHTMLElement2::put_ondragend(VARIANT v);
HRESULT IHTMLElement2::get_ondragenter(VARIANT *p); HRESULT IHTMLElement2::put_ondragenter(VARIANT v);
HRESULT IHTMLElement2::get_ondragleave(VARIANT *p); HRESULT IHTMLElement2::put_ondragleave(VARIANT v);
HRESULT IHTMLElement2::get_ondragover(VARIANT *p); HRESULT IHTMLElement2::put_ondragover(VARIANT v);
HRESULT IHTMLElement2::get_ondrop(VARIANT *p); HRESULT IHTMLElement2::put_ondrop(VARIANT v);
HRESULT IHTMLElement2::get_onlosecapture(VARIANT *p); HRESULT IHTMLElement2::put_onlosecapture(VARIANT v);
HRESULT IHTMLElement2::get_onpaste(VARIANT *p); HRESULT IHTMLElement2::put_onpaste(VARIANT v);
HRESULT IHTMLElement2::get_onscroll(VARIANT *p); HRESULT IHTMLElement2::put_onscroll(VARIANT v);
HRESULT IHTMLElement2::get_readyStateValue(long *p);
HRESULT IHTMLElement2::get_scrollLeft(long *p); HRESULT IHTMLElement2::put_scrollLeft(long v);
HRESULT IHTMLElement2::get_scrollTop(long *p); HRESULT IHTMLElement2::put_scrollTop(long v);
HRESULT IHTMLElement2::get_tagUrn(BSTR *p); HRESULT IHTMLElement2::put_tagUrn(BSTR v);
HRESULT IHTMLElement3::get_canHaveHTML(VARIANT_BOOL *p);
HRESULT IHTMLElement3::get_contentEditable(BSTR *p); HRESULT IHTMLElement3::put_contentEditable(BSTR v);
HRESULT IHTMLElement3::get_glyphMode(LONG *p);
HRESULT IHTMLElement3::get_hideFocus(VARIANT_BOOL *p); HRESULT IHTMLElement3::put_hideFocus(VARIANT_BOOL v);
HRESULT IHTMLElement3::get_inflateBlock(VARIANT_BOOL *p); HRESULT IHTMLElement3::put_inflateBlock(VARIANT_BOOL v);
HRESULT IHTMLElement3::get_isContentEditable(VARIANT_BOOL *p);
HRESULT IHTMLElement3::get_isDisabled(VARIANT_BOOL *p);
HRESULT IHTMLElement3::get_isMultiLine(VARIANT_BOOL *p);
HRESULT IHTMLElement3::get_onlayoutcomplete(VARIANT *p); HRESULT IHTMLElement3::put_onlayoutcomplete(VARIANT v);
HRESULT IHTMLElement3::get_onmouseenter(VARIANT *p); HRESULT IHTMLElement3::put_onmouseenter(VARIANT v);
HRESULT IHTMLElement3::get_onmouseleave(VARIANT *p); HRESULT IHTMLElement3::put_onmouseleave(VARIANT v);
HRESULT IHTMLElement3::get_onresizeend(VARIANT *p); HRESULT IHTMLElement3::put_onresizeend(VARIANT v);
HRESULT IHTMLElement3::get_onresizestart(VARIANT *p); HRESULT IHTMLElement3::put_onresizestart(VARIANT v);
HRESULT IHTMLElementDefaults::get_tabStop(VARIANT_BOOL *p); HRESULT IHTMLElementDefaults::put_tabStop(VARIANT_BOOL v);
HRESULT IHTMLElementDefaults::get_viewInheritStyle(VARIANT_BOOL *p); HRESULT IHTMLElementDefaults::put_viewInheritStyle(VARIANT_BOOL v);
HRESULT IHTMLElementDefaults::get_viewLink(IHTMLDocument **p); HRESULT IHTMLElementDefaults::putref_viewLink(IHTMLDocument *v);
HRESULT IHTMLElementDefaults::get_viewMasterTab(VARIANT_BOOL *p); HRESULT IHTMLElementDefaults::put_viewMasterTab(VARIANT_BOOL v);
HRESULT IsPrimary(  BOOL *pfPrimary  );
HRESULT SetPrimary(  BOOL fPrimary  );
HRESULT IHTMLEmbedElement::get_palette(BSTR *p);
HRESULT IHTMLEmbedElement::get_pluginspage(BSTR *p);
HRESULT IHTMLEmbedElement::get_hidden(BSTR *p); HRESULT IHTMLEmbedElement::put_hidden(BSTR v);
HRESULT IHTMLEmbedElement::get_units(BSTR *p); HRESULT IHTMLEmbedElement::put_units(BSTR v);
HRESULT IHTMLEventObj::get_cancelBubble(VARIANT_BOOL *p); HRESULT IHTMLEventObj::put_cancelBubble(VARIANT_BOOL v);
HRESULT IHTMLEventObj::get_altKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj::get_button(long *p);
HRESULT IHTMLEventObj::get_clientX(long *p);
HRESULT IHTMLEventObj::get_clientY(long *p);
HRESULT IHTMLEventObj::get_ctrlKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj::get_fromElement(IHTMLElement **p);
HRESULT IHTMLEventObj::get_offsetX(long *p);
HRESULT IHTMLEventObj::get_offsetY(long *p);
HRESULT IHTMLEventObj::get_qualifier(BSTR *p);
HRESULT IHTMLEventObj::get_screenX(long *p);
HRESULT IHTMLEventObj::get_screenY(long *p);
HRESULT IHTMLEventObj::get_shiftKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj::get_srcElement(IHTMLElement **p);
HRESULT IHTMLEventObj::get_srcFilter(IDispatch **p);
HRESULT IHTMLEventObj::get_toElement(IHTMLElement **p);
HRESULT IHTMLEventObj::get_x(long *p);
HRESULT IHTMLEventObj::get_y(long *p);
HRESULT IHTMLEventObj::get_keyCode(long *p); HRESULT IHTMLEventObj::put_keyCode(long v);
HRESULT IHTMLEventObj2::get_boundElements(IHTMLElementCollection *v);
HRESULT IHTMLEventObj2::get_bookmarks(IHTMLBookmarkCollection **p); HRESULT IHTMLEventObj2::put_bookmarks(IHTMLBookmarkCollection *v);
HRESULT IHTMLEventObj2::get_dataTransfer(IHTMLDataTransfer **p);
HRESULT IHTMLEventObj2::get_propertyName(BSTR *p); HRESULT IHTMLEventObj2::put_propertyName(BSTR v);
HRESULT IHTMLEventObj2::get_recordset(IDispatch **p); HRESULT IHTMLEventObj2::put_recordset(IDispatch *v);
HRESULT IHTMLEventObj2::get_repeat(VARIANT_BOOL *p); HRESULT IHTMLEventObj2::put_repeat(VARIANT_BOOL v);
HRESULT IHTMLEventObj2::get_srcUrn(BSTR *p); HRESULT IHTMLEventObj2::put_srcUrn(BSTR v);
HRESULT IHTMLEventObj3::get_altLeft(VARIANT_BOOL *p);
HRESULT IHTMLEventObj3::get_behaviorCookie(long *p);
HRESULT IHTMLEventObj3::get_behaviorPart(long *p);
HRESULT IHTMLEventObj3::get_contentOverflow(VARIANT_BOOL *p);
HRESULT IHTMLEventObj3::get_ctrlLeft(VARIANT_BOOL *p); HRESULT IHTMLEventObj3::put_ctrlLeft(VARIANT_BOOL v);
HRESULT IHTMLEventObj3::get_nextPage(BSTR *p);
HRESULT IHTMLEventObj3::get_shiftLeft(VARIANT_BOOL *p);
HRESULT IHTMLEventObj4::get_wheelDelta(long *p);
HRESULT IHTMLFontSizesCollection::get_forFont(BSTR *p);
HRESULT IHTMLFormElement::get_action(BSTR *p); HRESULT IHTMLFormElement::put_action(BSTR v);
HRESULT IHTMLFormElement::get_elements(IDispatch **p);
HRESULT IHTMLFormElement::get_method(BSTR *p); HRESULT IHTMLFormElement::put_method(BSTR v);
HRESULT IHTMLFormElement::get_onreset(VARIANT *p); HRESULT IHTMLFormElement::put_onreset(VARIANT v);
HRESULT IHTMLFormElement::get_onsubmit(VARIANT *p); HRESULT IHTMLFormElement::put_onsubmit(VARIANT v);
HRESULT IHTMLFormElement2::get_acceptCharset(BSTR *p); HRESULT IHTMLFormElement2::put_acceptCharset(BSTR v);
HRESULT IHTMLFrameBase::get_border(VARIANT *p); HRESULT IHTMLFrameBase::put_border(VARIANT v);
HRESULT IHTMLFrameBase::get_frameBorder(BSTR *p); HRESULT IHTMLFrameBase::put_frameBorder(BSTR v);
HRESULT IHTMLFrameBase::get_frameSpacing(VARIANT *p); HRESULT IHTMLFrameBase::put_frameSpacing(VARIANT v);
HRESULT IHTMLFrameBase::get_marginHeight(VARIANT *p); HRESULT IHTMLFrameBase::put_marginHeight(VARIANT v);
HRESULT IHTMLFrameBase::get_marginWidth(VARIANT *p); HRESULT IHTMLFrameBase::put_marginWidth(VARIANT v);
HRESULT IHTMLFrameBase::get_noResize(VARIANT_BOOL *p); HRESULT IHTMLFrameBase::put_noResize(VARIANT_BOOL v);
HRESULT IHTMLFrameBase::get_scrolling(BSTR *p); HRESULT IHTMLFrameBase::put_scrolling(BSTR v);
HRESULT IHTMLFrameBase2::get_allowTransparency(VARIANT_BOOL *p); HRESULT IHTMLFrameBase2::put_allowTransparency(VARIANT_BOOL v);
HRESULT IHTMLFrameBase2::get_contentWindow(IHTMLWindow2 **p);
HRESULT IHTMLFrameBase3::get_longDesc(BSTR *p); HRESULT IHTMLFrameBase3::put_longDesc(BSTR v);
HRESULT IHTMLFrameSetElement::get_cols(long *p); HRESULT IHTMLFrameSetElement::put_cols(long v);
HRESULT IHTMLFrameSetElement::get_rows(long *p); HRESULT IHTMLFrameSetElement::put_rows(long v);
HRESULT IHTMLHeadElement::get_profile(BSTR *p); HRESULT IHTMLHeadElement::put_profile(BSTR v);
HRESULT AddSegment(  IDisplayPointer *pDispPointerStart,  IDisplayPointer *pDispPointerEnd,  IHTMLRenderStyle *pIRenderStyle,  IHighlightSegment **ppISegment  );
HRESULT MoveSegmentToPointers(  IHighlightSegment *pISegment,  IDisplayPointer *pDispPointerStart,  IDisplayPointer *pDispPointerEnd  );
HRESULT RemoveSegment(  IHighlightSegment *pISegment  );
HRESULT IHTMLHRElement::get_noShade(VARIANT_BOOL *p); HRESULT IHTMLHRElement::put_noShade(VARIANT_BOOL v);
HRESULT IHTMLHtmlElement::get_version(BSTR *p); HRESULT IHTMLHtmlElement::put_version(BSTR v);
HRESULT IHTMLIFrameElement::get_hspace(long *p); HRESULT IHTMLIFrameElement::put_hspace(long v);
HRESULT IHTMLIFrameElement::get_vspace(long *p); HRESULT IHTMLIFrameElement::put_vspace(long v);
HRESULT IHTMLElement::get_className(BSTR *p); HRESULT IHTMLElement::put_className(BSTR v);
HRESULT IHTMLElement::get_children(IDispatch **p);
HRESULT IHTMLElement::get_filters(IHTMLFiltersCollection **p);
HRESULT IHTMLElement::get_isTextEdit(VARIANT_BOOL *p);
HRESULT IHTMLElement::get_offsetHeight(long *p);
HRESULT IHTMLElement::get_offsetLeft(long *p);
HRESULT IHTMLElement::get_offsetParent(IHTMLElement **p);
HRESULT IHTMLElement::get_offsetTop(long *p);
HRESULT IHTMLElement::get_offsetWidth(long *p);
HRESULT IHTMLElement::get_parentElement(IHTMLElement **p);
HRESULT IHTMLElement::get_parentTextEdit(IHTMLElement **p);
HRESULT IHTMLElement::get_recordNumber(VARIANT *p);
HRESULT IHTMLElement::get_sourceIndex(long *p);
HRESULT IHTMLElement::get_id(BSTR *p); HRESULT IHTMLElement::put_id(BSTR v);
HRESULT IHTMLElement::get_innerHTML(BSTR *p); HRESULT IHTMLElement::put_innerHTML(BSTR v);
HRESULT IHTMLElement::get_innerText(BSTR *p); HRESULT IHTMLElement::put_innerText(BSTR v);
HRESULT IHTMLElement::get_lang(BSTR *p); HRESULT IHTMLElement::put_lang(BSTR v);
HRESULT IHTMLElement::get_language(BSTR *p); HRESULT IHTMLElement::put_language(BSTR v);
HRESULT IHTMLElement::get_onfilterchange(VARIANT *p); HRESULT IHTMLElement::put_onfilterchange(VARIANT v);
HRESULT IHTMLElement::get_outerHTML(BSTR *p); HRESULT IHTMLElement::put_outerHTML(BSTR v);
HRESULT IHTMLElement::get_outerText(BSTR *p); HRESULT IHTMLElement::put_outerText(BSTR v);
HRESULT DrawToDC(  HDC hDC  );
HRESULT SetDocumentPrinter(  BSTR bstrPrinterName,  HDC hDC  );
HRESULT GetActiveIMM(  IActiveIMMApp **ppActiveIMM  );
HRESULT IHTMLImgElement::get_dynsrc(BSTR *p); HRESULT IHTMLImgElement::put_dynsrc(BSTR v);
HRESULT IHTMLImgElement::get_complete(VARIANT_BOOL *p);
HRESULT IHTMLImgElement::get_isMap(VARIANT_BOOL *p); HRESULT IHTMLImgElement::put_isMap(VARIANT_BOOL v);
HRESULT IHTMLImgElement::get_lowsrc(BSTR *p); HRESULT IHTMLImgElement::put_lowsrc(BSTR v);
HRESULT IHTMLImgElement::get_onabort(VARIANT *p); HRESULT IHTMLImgElement::put_onabort(VARIANT v);
HRESULT IHTMLImgElement::get_onerror(VARIANT *p); HRESULT IHTMLImgElement::put_onerror(VARIANT v);
HRESULT IHTMLImgElement::get_start(BSTR *p); HRESULT IHTMLImgElement::put_start(BSTR v);
HRESULT IHTMLImgElement::get_useMap(BSTR *p); HRESULT IHTMLImgElement::put_useMap(BSTR v);
HRESULT IHTMLImgElement::get_vrml(BSTR *p); HRESULT IHTMLImgElement::put_vrml(BSTR v);
HRESULT IHTMLInputElement::get_checked(VARIANT_BOOL *p); HRESULT IHTMLInputElement::put_checked(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_defaultChecked(VARIANT_BOOL *p); HRESULT IHTMLInputElement::put_defaultChecked(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_defaultValue(BSTR *p); HRESULT IHTMLInputElement::put_defaultValue(BSTR v);
HRESULT IHTMLInputElement::get_indeterminate(VARIANT_BOOL *p); HRESULT IHTMLInputElement::put_indeterminate(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_maxLength(long *p); HRESULT IHTMLInputElement::put_maxLength(long v);
HRESULT IHTMLInputElement::get_onchange(VARIANT *p); HRESULT IHTMLInputElement::put_onchange(VARIANT v);
HRESULT IHTMLInputElement::get_readOnly(VARIANT_BOOL *p); HRESULT IHTMLInputElement::put_readOnly(VARIANT_BOOL v);
HRESULT IHTMLInputElement2::get_accept(BSTR *p); HRESULT IHTMLInputElement2::put_accept(BSTR v);
HRESULT IOmNavigator::get_appCodeName(BSTR *p);
HRESULT IOmNavigator::get_appMinorVersion(BSTR *p);
HRESULT IOmNavigator::get_appName(BSTR *p);
HRESULT IOmNavigator::get_appVersion(BSTR *p);
HRESULT IOmNavigator::get_browserLanguage(BSTR *p);
HRESULT IOmNavigator::get_cookieEnabled(VARIANT_BOOL *p);
HRESULT IOmNavigator::get_cpuClass(BSTR *p);
HRESULT IOmNavigator::get_mimeTypes(IHTMLMimeTypesCollection **p);
HRESULT IOmNavigator::get_onLine(VARIANT_BOOL *p);
HRESULT IOmNavigator::get_opsProfile(IHTMLOpsProfile **p);
HRESULT IOmNavigator::get_platform(BSTR *p);
HRESULT IOmNavigator::get_systemLanguage(BSTR *p);
HRESULT IOmNavigator::get_userAgent(BSTR *p);
HRESULT IOmNavigator::get_userLanguage(BSTR *p);
HRESULT IOmNavigator::get_userProfile(IHTMLOpsProfile **p);
HRESULT IHTMLIsIndexElement::get_prompt(BSTR *p); HRESULT IHTMLIsIndexElement::put_prompt(BSTR v);
HRESULT IHTMLLabelElement::get_htmlFor(BSTR *p); HRESULT IHTMLLabelElement::put_htmlFor(BSTR v);
HRESULT ILineInfo::get_baseLine(long *p);
HRESULT ILineInfo::get_lineDirection(LONG *p);
HRESULT ILineInfo::get_textDescent(long *p);
HRESULT ILineInfo::get_textHeight(long *p);
HRESULT IHTMLLinkElement::get_styleSheet(IHTMLStyleSheet **p);
HRESULT IHTMLLinkElement::get_media(BSTR *p); HRESULT IHTMLLinkElement::put_media(BSTR v);
HRESULT IHTMLMapElement::get_areas(IHTMLAreasCollection **p);
HRESULT OwningDoc(  IHTMLDocument2 **ppDoc  );
HRESULT CreateChangeLog(  IHTMLChangeSink *pChangeSink,  IHTMLChangeLog **ppChangeLog,  BOOL fForward,  BOOL fBackward  );
HRESULT GetAndClearDirtyRange(  DWORD dwCookie,  IMarkupPointer *pIPointerBegin,  IMarkupPointer *pIPointerEnd  );
HRESULT GetMasterElement(  IHTMLElement **ppElementMaster  );
long GetVersionNumber(VOID);
HRESULT RegisterForDirtyRange(  IHTMLChangeSink *pChangeSink,  DWORD *pdwCookie  );
HRESULT UnRegisterForDirtyRange(  DWORD dwCookie  );
HRESULT Cling(  BOOL *pfCling  );
HRESULT CurrentScope(  IHTMLElement **ppElemCurrent  );
HRESULT Gravity(  POINTER_GRAVITY *pGravity  );
HRESULT IsLeftOfOrEqualTo(  IMarkupPointer *pPointerThat,  BOOL *pfResult  );
HRESULT IsRightOfOrEqualTo(  IMarkupPointer *pPointerThat,  BOOL *pfResult  );
HRESULT Left(  BOOL fMove,  MARKUP_CONTEXT_TYPE *pContext,  IHTMLElement **ppElement,  long *pcch,  OLECHAR *pchText  );
HRESULT MoveAdjacentToElement(  IHTMLElement *pElement,  ELEMENT_ADJACENCY eAdj  );
HRESULT MoveToContainer(  IMarkupContainer *pContainer,  BOOL fAtStart  );
HRESULT Right(  BOOL fMove,  MARKUP_CONTEXT_TYPE *pContext,  IHTMLElement **ppElement,  long *pcch,  OLECHAR *pchText  );
HRESULT SetCling(  BOOL fCLing  );
HRESULT SetGravity(  POINTER_GRAVITY Gravity  );
HRESULT UnPosition(VOID);
HRESULT GetMarkupPosition(  long *plMP  );
HRESULT IsAtWordBreak(  BOOL *pfAtBreak  );
HRESULT IsInsideURL(  IMarkupPointer *pRight,  BOOL *pfResult  );
HRESULT MoveToContent(  IHTMLElement *pIElement,  BOOL fAtStart  );
HRESULT MoveToMarkupPosition(  IMarkupContainer *pContainer,  long lMP  );
HRESULT MoveUnitBounded(  MOVEUNIT_ACTION muAction,  IMarkupPointer *pIBoundary  );
HRESULT BeginUndoUnit(  OLECHAR *pchTitle  );
HRESULT CloneElement(  IHTMLElement *pElemCloneThis,  IHTMLElement **ppElementTheClone  );
HRESULT CreateElement(  ELEMENT_TAG_ID tagID,  OLECHAR *pchAttributes,  IHTMLElement **ppElement  );
HRESULT CreateMarkupContainer(  IMarkupContainer **ppMarkupContainer  );
HRESULT CreateMarkupPointer(  IMarkupPointer **ppPointer  );
HRESULT EndUndoUnit(VOID);
HRESULT GetElementTagId(  IHTMLElement *pElement,  ELEMENT_TAG_ID *ptagId  );
HRESULT GetNameForTagID(  ELEMENT_TAG_ID tagId,  BSTR *pbstrName  );
HRESULT GetTagIDForName(  BSTR bstrName,  ELEMENT_TAG_ID *ptagId  );
HRESULT InsertElement(  IHTMLElement *pElementInsert,  IMarkupPointer *pPointerStart,  IMarkupPointer *pPointerFinish  );
HRESULT MovePointersToRange(  IHTMLTxtRange *pIRange,  IMarkupPointer *pPointerStart,  IMarkupPointer *pPointerFinish  );
HRESULT MoveRangeToPointers(  IMarkupPointer *pPointerStart,  IMarkupPointer *pPointerFinish,  IHTMLTxtRange *pIRange  );
HRESULT ParseGlobal(  HGLOBAL hglobalHTML,  DWORD dwFlags,  IMarkupContainer **ppContainerResult,  IMarkupPointer *pPointerStart,  IMarkupPointer *pPointerFinish  );
HRESULT ParseString(  OLECHAR *pchHTML,  DWORD dwFlags,  IMarkupContainer **ppContainerResult,  IMarkupPointer *ppPointerStart,  IMarkupPointer *ppPointerFinish  );
HRESULT RemoveElement(  IHTMLElement *pElementRemove  );
HRESULT ParseGlobalEx(  HGLOBAL hglobalHTML,  DWORD dwFlags,  IMarkupContainer *pContext,  IMarkupContainer **ppContainerResult,  IMarkupPointer *pPointerStart,  IMarkupPointer *pPointerFinish  );
HRESULT SaveSegmentsToClipboard(  ISegmentList *pSegmentList,  DWORD dwFlags  );
HRESULT ValidateElements(  IMarkupPointer *pPointerStart,  IMarkupPointer *pPointerFinish,  IMarkupPointer *pPointerTarget,  IMarkupPointer *pPointerStatus,  IHTMLElement **ppElemFailBottom,  IHTMLElement **ppElemFailTop  );
HRESULT GetTextFrag(  long iFrag,  BSTR *pbstrFrag,  IMarkupPointer *pPointerFrag  );
HRESULT GetTextFragCount(  long *pcFrags  );
HRESULT InsertTextFrag(  long iFrag,  BSTR bstrInsert,  IMarkupPointer *pPointerInsert  );
HRESULT RemoveTextFrag(  long iFrag  );
HRESULT IHTMLMarqueeElement::get_onbounce(VARIANT *p); HRESULT IHTMLMarqueeElement::put_onbounce(VARIANT v);
HRESULT IHTMLMarqueeElement::get_onfinish(VARIANT *p); HRESULT IHTMLMarqueeElement::put_onfinish(VARIANT v);
HRESULT IHTMLMarqueeElement::get_onstart(VARIANT *p); HRESULT IHTMLMarqueeElement::put_onstart(VARIANT v);
HRESULT IHTMLMarqueeElement::get_scrollAmount(long *p); HRESULT IHTMLMarqueeElement::put_scrollAmount(long v);
HRESULT IHTMLMarqueeElement::get_scrollDelay(long *p); HRESULT IHTMLMarqueeElement::put_scrollDelay(long v);
HRESULT IHTMLMarqueeElement::get_trueSpeed(VARIANT_BOOL *p); HRESULT IHTMLMarqueeElement::put_trueSpeed(VARIANT_BOOL v);
HRESULT IHTMLMetaElement::get_content(BSTR *p); HRESULT IHTMLMetaElement::put_content(BSTR v);
HRESULT IHTMLMetaElement::get_httpEquiv(BSTR *p); HRESULT IHTMLMetaElement::put_httpEquiv(BSTR v);
HRESULT IHTMLMetaElement2::get_scheme(BSTR *p); HRESULT IHTMLMetaElement2::put_scheme(BSTR v);
HRESULT IHTMLNextIdElement::get_n(BSTR *p); HRESULT IHTMLNextIdElement::put_n(BSTR v);
HRESULT IHTMLObjectElement::put_altHTML(BSTR sHTMLCode);
HRESULT IHTMLObjectElement::get_code(BSTR *p); HRESULT IHTMLObjectElement::put_code(BSTR v);
HRESULT IHTMLObjectElement::get_codeBase(BSTR *p); HRESULT IHTMLObjectElement::put_codeBase(BSTR v);
HRESULT IHTMLObjectElement::get_codeType(BSTR *p); HRESULT IHTMLObjectElement::put_codeType(BSTR v);
HRESULT IHTMLObjectElement::get_BaseHref(BSTR *p);
HRESULT IHTMLObjectElement::get_classid(BSTR *p);
HRESULT IHTMLObjectElement::get_object(IDispatch **p);
HRESULT IHTMLObjectElement3::get_archive(BSTR *p); HRESULT IHTMLObjectElement3::put_archive(BSTR v);
HRESULT IHTMLObjectElement3::get_declare(VARIANT_BOOL *p); HRESULT IHTMLObjectElement3::put_declare(VARIANT_BOOL v);
HRESULT IHTMLObjectElement3::get_standby(BSTR *p); HRESULT IHTMLObjectElement3::put_standby(BSTR v);
HRESULT IHTMLOptionElement::get_defaultSelected(VARIANT_BOOL *p); HRESULT IHTMLOptionElement::put_defaultSelected(VARIANT_BOOL v);
HRESULT IHTMLOptionElement::get_index(long *p); HRESULT IHTMLOptionElement::put_index(long v);
HRESULT IHTMLOptionElement::get_selected(VARIANT_BOOL *p); HRESULT IHTMLOptionElement::put_selected(VARIANT_BOOL v);
HRESULT IHTMLOptionElement3::get_label(BSTR *p); HRESULT IHTMLOptionElement3::put_label(BSTR v);
HRESULT IHTMLOptionsHolder::get_errorCharacter(long *p); HRESULT IHTMLOptionsHolder::put_errorCharacter(long v);
HRESULT IHTMLOptionsHolder::get_errorDebug(VARIANT_BOOL *p); HRESULT IHTMLOptionsHolder::put_errorDebug(VARIANT_BOOL v);
HRESULT IHTMLOptionsHolder::get_errorLine(long *p); HRESULT IHTMLOptionsHolder::put_errorLine(long v);
HRESULT IHTMLOptionsHolder::get_errorMessage(BSTR *p); HRESULT IHTMLOptionsHolder::put_errorMessage(BSTR v);
HRESULT IHTMLOptionsHolder::get_execArg(VARIANT *p); HRESULT IHTMLOptionsHolder::put_execArg(VARIANT v);
HRESULT IHTMLOptionsHolder::get_findText(BSTR *p); HRESULT IHTMLOptionsHolder::put_findText(BSTR v);
HRESULT IHTMLOptionsHolder::get_unsecuredWindowOfDocument(IHTMLWindow2 **p);
HRESULT GetPainterInfo(  HTML_PAINTER_INFO *pInfo  );
HRESULT OnResize(  SIZE pt  );
HRESULT GetEventInfoFlags(  long *plEventInfoFlags  );
HRESULT GetEventTarget(  IHTMLElement **ppElement  );
HRESULT StringFromPartID(  LONG lPartID,  BSTR *pbstrPart  );
HRESULT OnMove(  RECT rcDevice  );
HRESULT GetDrawInfo(  LONG lFlags,  HTML_PAINT_DRAW_INFO *pDrawInfo  );
HRESULT GetHitTestCookie(  LONG *plCookie  );
HRESULT InvalidatePainterInfo(VOID);
HRESULT InvalidateRegion(  HRGN rgnInvalid  );
HRESULT TransformGlobalToLocal(  POINT ptGlobal,  POINT *pptLocal  );
HRESULT TransformLocalToGlobal(  POINT ptLocal,  POINT *pptGlobal  );
HRESULT IHTMLParamElement::get_valueType(BSTR *p); HRESULT IHTMLParamElement::put_valueType(BSTR v);
HRESULT IHTMLPhraseElement2::get_dateTime(BSTR *p); HRESULT IHTMLPhraseElement2::put_dateTime(BSTR v);
HRESULT IHTMLPluginsCollection::put_refresh(VARIANT_BOOL reload);
HRESULT IHTMLPopup::get_isOpen(VARIANT_BOOL *p);
HRESULT IHTMLRenderStyle::get_defaultTextSelection(BSTR *p); HRESULT IHTMLRenderStyle::put_defaultTextSelection(BSTR v);
HRESULT IHTMLRenderStyle::get_renderingPriority(long *p); HRESULT IHTMLRenderStyle::put_renderingPriority(long v);
HRESULT IHTMLRenderStyle::get_textBackgroundColor(VARIANT *p); HRESULT IHTMLRenderStyle::put_textBackgroundColor(VARIANT v);
HRESULT IHTMLRenderStyle::get_textDecorationColor(VARIANT *p); HRESULT IHTMLRenderStyle::put_textDecorationColor(VARIANT v);
HRESULT IHTMLRenderStyle::get_textLineThroughStyle(BSTR *p); HRESULT IHTMLRenderStyle::put_textLineThroughStyle(BSTR v);
HRESULT IHTMLRenderStyle::get_textUnderlineStyle(BSTR *p); HRESULT IHTMLRenderStyle::put_textUnderlineStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_backgroundPosition(BSTR *p); HRESULT IHTMLRuleStyle::put_backgroundPosition(BSTR v);
HRESULT IHTMLRuleStyle::get_borderBottom(BSTR *p); HRESULT IHTMLRuleStyle::put_borderBottom(BSTR v);
HRESULT IHTMLRuleStyle::get_borderLeft(BSTR *p); HRESULT IHTMLRuleStyle::put_borderLeft(BSTR v);
HRESULT IHTMLRuleStyle::get_borderRight(BSTR *p); HRESULT IHTMLRuleStyle::put_borderRight(BSTR v);
HRESULT IHTMLRuleStyle::get_borderTop(BSTR *p); HRESULT IHTMLRuleStyle::put_borderTop(BSTR v);
HRESULT IHTMLRuleStyle::get_clip(BSTR *p); HRESULT IHTMLRuleStyle::put_clip(BSTR v);
HRESULT IHTMLRuleStyle::get_cssText(BSTR *p); HRESULT IHTMLRuleStyle::put_cssText(BSTR v);
HRESULT IHTMLRuleStyle::get_font(BSTR *p); HRESULT IHTMLRuleStyle::put_font(BSTR v);
HRESULT IHTMLRuleStyle::get_listStyle(BSTR *p); HRESULT IHTMLRuleStyle::put_listStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_textDecorationBlink(VARIANT_BOOL *p); HRESULT IHTMLRuleStyle::put_textDecorationBlink(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationLineThrough(VARIANT_BOOL *p); HRESULT IHTMLRuleStyle::put_textDecorationLineThrough(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationNone(VARIANT_BOOL *p); HRESULT IHTMLRuleStyle::put_textDecorationNone(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationOverline(VARIANT_BOOL *p); HRESULT IHTMLRuleStyle::put_textDecorationOverline(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationUnderline(VARIANT_BOOL *p); HRESULT IHTMLRuleStyle::put_textDecorationUnderline(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle2::get_layoutGrid(BSTR *p); HRESULT IHTMLRuleStyle2::put_layoutGrid(BSTR v);
HRESULT IHTMLRuleStyle2::get_pixelBottom(long *p); HRESULT IHTMLRuleStyle2::put_pixelBottom(long v);
HRESULT IHTMLRuleStyle2::get_pixelRight(long *p); HRESULT IHTMLRuleStyle2::put_pixelRight(long v);
HRESULT IHTMLRuleStyle2::get_posBottom(float *p); HRESULT IHTMLRuleStyle2::put_posBottom(float v);
HRESULT IHTMLRuleStyle2::get_posRight(float *p); HRESULT IHTMLRuleStyle2::put_posRight(float v);
HRESULT IHTMLScreen::get_bufferDepth(long *p); HRESULT IHTMLScreen::put_bufferDepth(long v);
HRESULT IHTMLScreen::get_availHeight(long *p);
HRESULT IHTMLScreen::get_availWidth(long *p);
HRESULT IHTMLScreen::get_colorDepth(long *p);
HRESULT IHTMLScreen::get_fontSmoothingEnabled(VARIANT_BOOL *p);
HRESULT IHTMLScreen::get_updateInterval(long *p); HRESULT IHTMLScreen::put_updateInterval(long v);
HRESULT IHTMLScreen2::get_deviceXDPI(long *p);
HRESULT IHTMLScreen2::get_deviceYDPI(long *p);
HRESULT IHTMLScreen2::get_logicalXDPI(long *p);
HRESULT IHTMLScreen2::get_logicalYDPI(long *p);
HRESULT IHTMLScriptElement::get_defer(VARIANT_BOOL *p); HRESULT IHTMLScriptElement::put_defer(VARIANT_BOOL v);
HRESULT IHTMLScriptElement::get_event(BSTR *p); HRESULT IHTMLScriptElement::put_event(BSTR v);
HRESULT GetPointers(  IMarkupPointer *pIStart,  IMarkupPointer *pIEnd  );
HRESULT CreateIterator(  ISegmentListIterator **ppIIter  );
HRESULT IsEmpty(  BOOL *pfEmpty  );
HRESULT Advance(VOID);
HRESULT Current(  ISegment **ppISegment  );
HRESULT First(VOID);
HRESULT IsDone(VOID);
HRESULT IHTMLSelectElement::get_options(IDispatch **p);
HRESULT IHTMLSelectElement::get_multiple(VARIANT_BOOL *p); HRESULT IHTMLSelectElement::put_multiple(VARIANT_BOOL v);
HRESULT IHTMLSelectElement::get_selectedIndex(long *p); HRESULT IHTMLSelectElement::put_selectedIndex(long v);
HRESULT IHTMLSelectionObject2::get_typeDetail(BSTR *p);
HRESULT AddElementSegment(  IHTMLElement *pIElement,  IElementSegment **ppISegmentAdded  );
HRESULT GetMarkupContainer(  IMarkupContainer **ppIContainer  );
HRESULT GetSelectionServicesListener(  ISelectionServicesListener **ppISelectionServicesListener  );
HRESULT SetSelectionType(  SELECTION_TYPE eType,  ISelectionServicesListener *pIListener  );
HRESULT BeginSelectionUndo(VOID);
HRESULT EndSelectionUndo(VOID);
HRESULT GetTypeDetail(  BSTR *pTypeDetail  );
HRESULT OnChangeType(  SELECTION_TYPE eType,  ISelectionServicesListener *pIListener  );
HRESULT OnSelectedElementExit(  IMarkupPointer *pIElementStart,  IMarkupPointer *pIElementEnd,  IMarkupPointer *pIElementContentStart,  IMarkupPointer *pIElementContentEnd  );
HRESULT IHTMLStyle::get_pixelHeight(long *p); HRESULT IHTMLStyle::put_pixelHeight(long v);
HRESULT IHTMLStyle::get_pixelLeft(long *p); HRESULT IHTMLStyle::put_pixelLeft(long v);
HRESULT IHTMLStyle::get_pixelTop(long *p); HRESULT IHTMLStyle::put_pixelTop(long v);
HRESULT IHTMLStyle::get_pixelWidth(long *p); HRESULT IHTMLStyle::put_pixelWidth(long v);
HRESULT IHTMLStyle::get_posHeight(float *p); HRESULT IHTMLStyle::put_posHeight(float v);
HRESULT IHTMLStyle::get_posLeft(float *p); HRESULT IHTMLStyle::put_posLeft(float v);
HRESULT IHTMLStyle::get_posTop(float *p); HRESULT IHTMLStyle::put_posTop(float v);
HRESULT IHTMLStyle::get_posWidth(float *p); HRESULT IHTMLStyle::put_posWidth(float v);
HRESULT IHTMLStyleSheet::get_imports(IHTMLStyleSheetsCollection **p);
HRESULT IHTMLStyleSheet::get_owningElement(IHTMLElement **p);
HRESULT IHTMLStyleSheet::get_parentStyleSheet(IHTMLStyleSheet **p);
HRESULT IHTMLStyleSheet::get_rules(IHTMLStyleSheetRulesCollection **p);
HRESULT IHTMLStyleSheet2::get_pages(IHTMLStyleSheetPagesCollection **p);
HRESULT IHTMLStyleSheetPage::get_selector(BSTR *p);
HRESULT IHTMLStyleSheetPage::get_pseudoClass(BSTR *p);
HRESULT IHTMLStyleSheetRule::get_selectorText(BSTR *p); HRESULT IHTMLStyleSheetRule::put_selectorText(BSTR v);
HRESULT IHTMLTable::get_borderColorDark(VARIANT *p); HRESULT IHTMLTable::put_borderColorDark(VARIANT v);
HRESULT IHTMLTable::get_borderColorLight(VARIANT *p); HRESULT IHTMLTable::put_borderColorLight(VARIANT v);
HRESULT IHTMLTable::get_cellPadding(VARIANT *p); HRESULT IHTMLTable::put_cellPadding(VARIANT v);
HRESULT IHTMLTable::get_cellSpacing(VARIANT *p); HRESULT IHTMLTable::put_cellSpacing(VARIANT v);
HRESULT IHTMLTable::get_dataPageSize(long *p); HRESULT IHTMLTable::put_dataPageSize(long v);
HRESULT IHTMLTable::get_frame(BSTR *p); HRESULT IHTMLTable::put_frame(BSTR v);
HRESULT IHTMLTable::get_tBodies(IHTMLElementCollection **p);
HRESULT IHTMLTable::get_tFoot(IHTMLTableSection **p);
HRESULT IHTMLTable::get_tHead(IHTMLTableSection **p);
HRESULT IHTMLTable2::get_cells(IHTMLElementCollection **p);
HRESULT IHTMLTable3::get_summary(BSTR *p); HRESULT IHTMLTable3::put_summary(BSTR v);
HRESULT IHTMLTableCaption::get_vAlign(BSTR *p); HRESULT IHTMLTableCaption::put_vAlign(BSTR v);
HRESULT IHTMLTableCell::get_colSpan(long *p); HRESULT IHTMLTableCell::put_colSpan(long v);
HRESULT IHTMLTableCell::get_cellIndex(long *p);
HRESULT IHTMLTableCell::get_rowSpan(long *p); HRESULT IHTMLTableCell::put_rowSpan(long v);
HRESULT IHTMLTableCell2::get_abbr(BSTR *p); HRESULT IHTMLTableCell2::put_abbr(BSTR v);
HRESULT IHTMLTableCell2::get_axis(BSTR *p); HRESULT IHTMLTableCell2::put_axis(BSTR v);
HRESULT IHTMLTableCell2::get_ch(BSTR *p); HRESULT IHTMLTableCell2::put_ch(BSTR v);
HRESULT IHTMLTableCell2::get_chOff(BSTR *p); HRESULT IHTMLTableCell2::put_chOff(BSTR v);
HRESULT IHTMLTableCell2::get_headers(BSTR *p); HRESULT IHTMLTableCell2::put_headers(BSTR v);
HRESULT IHTMLTableCell2::get_scope(BSTR *p); HRESULT IHTMLTableCell2::put_scope(BSTR v);
HRESULT IHTMLTableCol::get_span(long *p); HRESULT IHTMLTableCol::put_span(long v);
HRESULT IHTMLTableRow::get_rowIndex(long *p);
HRESULT IHTMLTableRow::get_sectionRowIndex(long *p);
HRESULT IHTMLTextAreaElement::get_wrap(BSTR *p); HRESULT IHTMLTextAreaElement::put_wrap(BSTR v);
HRESULT IHTMLTextRangeMetrics::get_boundingHeight(long *p);
HRESULT IHTMLTextRangeMetrics::get_boundingLeft(long *p);
HRESULT IHTMLTextRangeMetrics::get_boundingTop(long *p);
HRESULT IHTMLTextRangeMetrics::get_boundingWidth(long *p);
HRESULT IHTMLTxtRange::get_htmlText(BSTR *p);
HRESULT IHTMLUniqueName::get_UniqueNumber(long *p);
HRESULT IHTMLWindow2::get_defaultStatus(BSTR *p); HRESULT IHTMLWindow2::put_defaultStatus(BSTR v);
HRESULT IHTMLWindow2::get_clientInformation(IOmNavigator **p);
HRESULT IHTMLWindow2::get_closed(VARIANT_BOOL *p);
HRESULT IHTMLWindow2::get_external(IDispatch **p);
HRESULT IHTMLWindow2::get_history(IOmHistory **p);
HRESULT IHTMLWindow2::get_navigator(IOmNavigator **p);
HRESULT IHTMLWindow2::get_Option(IHTMLOptionElementFactory **p);
HRESULT IHTMLWindow2::get_parent(IHTMLWindow2 **p);
HRESULT IHTMLWindow2::get_screen(IHTMLScreen **p);
HRESULT IHTMLWindow2::get_self(IHTMLWindow2 **p);
HRESULT IHTMLWindow2::get_window(IHTMLWindow2 **p);
HRESULT IHTMLWindow2::get_offscreenBuffering(VARIANT_BOOL *p); HRESULT IHTMLWindow2::put_offscreenBuffering(VARIANT_BOOL v);
HRESULT IHTMLWindow2::get_opener(VARIANT *p); HRESULT IHTMLWindow2::put_opener(VARIANT v);
HRESULT IHTMLWindow3::get_clipboardData(IHTMLDataTransfer **p);
HRESULT IHTMLWindow3::get_screenLeft(long *p);
HRESULT IHTMLWindow3::get_screenTop(long *p);
HRESULT IHTMLWindow4::get_frameElement(IHTMLFrameBase **p);
HRESULT CreateTimer(  ITimer *pReferenceTimer,  ITimer **ppNewTimer  );
HRESULT GetNamedTimer(  REFGUID rguidName,  ITimer **ppTimer  );
HRESULT SetNamedTimerReference(  REFGUID rguidName,  ITimer *pReferenceTimer  );
HRESULT OnTimer(  VARIANT vtimeAdvise  );
IHeaderCollection *pAbortHeaderCollection = NULL;
IObexDevice *pObexDevice = NULL;
If(SUCCEEDED(CoCreateInstance(CLSID_HeaderCollection,
NULL,
CLSCTX_INPROC_SERVER,
IID_IHeaderCollection,
(void**)&pAbortHeaderCollection))
&& NULL !=pAbortHeaderCollection)
{
  pObexDevice->Abort(pAbortHeaderCollection);
  pAbortHeaderCollection->Release();
}
LPDISPATCH lpDispatch = NULL; LPOLECOMMANDTARGET lpOleCommandTarget = NULL; lpDispatch = m_pBrowser.get_Document(); ASSERT(lpDispatch); lpDispatch->QueryInterface(IID_IOleCommandTarget, (void**)&lpOleCommandTarget); ASSERT(lpOleCommandTarget); lpDispatch->Release(); lpOleCommandTarget->Exec(NULL, OLECMDID_PRINT, 0, NULL,NULL); lpOleCommandTarget->Release();
BOOL LaunchConnectionDialog(  HWND hParent  );
BOOL LaunchInternetControlPanel(  HWND hParent  );
BOOL LaunchSecurityDialog(  HWND hParent  );
HRESULT GetFramesContainer(  IOleContainer **ppContainer  );
HRESULT GetFrameUrl(  LPWSTR *ppszFrameSrc  );
HRESULT FindFrame(  LPCWSTR pszTargetName,  IUnknown *ppunkContextFrame,  DWORD dwFlags,  IUnknown **ppunkTargetFrame  );
HRESULT GetFrameName(  LPWSTR *ppszFrameName  );
HRESULT GetFrameSrc(  LPWSTR *ppszFrameSrc  );
HRESULT SetFrameName(  LPCWSTR pszFrameName  );
HRESULT SetFrameSrc(  LPCWSTR pszFrameSrc  );
HRESULT GetFrameMargins(  DWORD *pdwWidth,  DWORD *pdwHeight  );
HRESULT GetFrameOptions(  DWORD *pdwFlags  );
HRESULT GetTargetAlias(  LPCWSTR pszTargetName,  LPWSTR *ppszTargetAlias  );
HRESULT SetFrameMargins(  DWORD dwWidth,  DWORD dwHeight  );
HRESULT SetFrameOptions(  DWORD dwFlags  );
HRESULT OnCreate(  IUnknown *pUnkDestination,  ULONG cbCookie  );
HRESULT OnReuse(  IUnknown *pUnkDestination  );
HRESULT GetOverrideKeyPath(  LPOLESTR *pchKey,  DWORD dw  );
HRESULT SetUIHandler(  IDocHostUIHandler *pUIHandler  );
HRESULT ShowHelp(  HWND hwnd,  LPOLESTR pszHelpFile,  UINT uCommand,  DWORD dwData,  POINT ptMouse,  IDispatch *pDispatchObjectHit  );
HRESULT ShowMessage(  HWND hwnd,  LPOLESTR lpstrText,  LPOLESTR lpstrCaption,  DWORD dwType,  LPOLESTR lpstrHelpFile,  DWORD dwHelpContext,  LRESULT *plResult  );
HRESULT FilterDataObject(  IDataObject *pDO,  IDataObject **ppDORet  );
HRESULT GetDropTarget(  IDropTarget *pDropTarget,  IDropTarget **ppDropTarget  );
HRESULT GetExternal(  IDispatch **ppDispatch  );
HRESULT GetHostInfo(  DOCHOSTUIINFO *pInfo  );
HRESULT GetOptionKeyPath(  LPOLESTR *pchKey,  DWORD dw  );
HRESULT HideUI(VOID);
HRESULT OnDocWindowActivate(  BOOL fActivate  );
HRESULT OnFrameWindowActivate(  BOOL fActivate  );
HRESULT ResizeBorder(  LPCRECT prcBorder,  IOleInPlaceUIWindow *pUIWindow,  BOOL fFrameWindow  );
HRESULT ShowContextMenu(  DWORD dwID,  POINT *ppt,  IUnknown *pcmdtReserved,  IDispatch *pdispReserved  );
HRESULT ShowUI(  DWORD dwID,  IOleInPlaceActiveObject *pActiveObject,  IOleCommandTarget *pCommandTarget,  IOleInPlaceFrame *pFrame,  IOleInPlaceUIWindow *pDoc  );
HRESULT TranslateUrl(  DWORD dwTranslate,  OLECHAR *pchURLIn,  OLECHAR **ppchURLOut  );
HRESULT UpdateUI(VOID);
HRESULT GetTitle(  LPOLESTR *ppszTitle  );
HRESULT GetURL(  LPOLESTR *ppszURL  );
HRESULT CreateEntry(  LPCOLESTR pszUrl,  LPCOLESTR pszTitle,  ITravelLogEntry *ptleRelativeTo,  BOOL fPrepend,  ITravelLogEntry **pptle  );
HRESULT EnumEntries(  TLENUMF flags,  IEnumTravelLogEntry **ppenum  );
HRESULT GetRelativeEntry(  int iOffset,  ITravelLogEntry **ptle  );
HRESULT RemoveEntry(  ITravelLogEntry *ptle  );
HRESULT TravelTo(  ITravelLogEntry *ptle  );
HRESULT IWebBrowser2::get_AddressBar(VARIANT_BOOL *pValue); HRESULT IWebBrowser2::put_AddressBar(VARIANT_BOOL Value);
HRESULT IWebBrowser2::get_Container(IDispatch **ppDisp);
HRESULT IWebBrowser2::get_FullName(BSTR *pbstrFullName);
HRESULT IWebBrowser2::get_FullScreen(VARIANT_BOOL *pbFullScreen); HRESULT IWebBrowser2::put_FullScreen(VARIANT_BOOL bFullScreen);
HRESULT IWebBrowser2::get_HWND(long *pHWND);
HRESULT IWebBrowser2::get_LocationName(BSTR *pbstrLocationName);
HRESULT IWebBrowser2::get_LocationURL(BSTR *pbstrLocationURL);
HRESULT IWebBrowser2::get_MenuBar(VARIANT_BOOL *pValue); HRESULT IWebBrowser2::put_MenuBar(VARIANT_BOOL Value);
HRESULT IWebBrowser2::get_Offline(VARIANT_BOOL *pbOffline); HRESULT IWebBrowser2::put_Offline(VARIANT_BOOL bOffline);
HRESULT IWebBrowser2::get_Path(BSTR *Path);
HRESULT IWebBrowser2::get_RegisterAsBrowser(VARIANT_BOOL *pbRegister); HRESULT IWebBrowser2::put_RegisterAsBrowser(VARIANT_BOOL bRegister);
HRESULT IWebBrowser2::get_RegisterAsDropTarget(VARIANT_BOOL *pbRegister); HRESULT IWebBrowser2::put_RegisterAsDropTarget(VARIANT_BOOL bRegister);
HRESULT IWebBrowser2::get_Resizable(VARIANT_BOOL *pValue); HRESULT IWebBrowser2::put_Resizable(VARIANT_BOOL Value);
HRESULT ShowBrowserBar(  VARIANT *pvaClsid,  VARIANT *pvarShow,  VARIANT *pvarSize  );
HRESULT IWebBrowser2::get_Silent(VARIANT_BOOL *pbSilent); HRESULT IWebBrowser2::put_Silent(VARIANT_BOOL bSilent);
HRESULT IWebBrowser2::get_StatusBar(VARIANT_BOOL *pBool); HRESULT IWebBrowser2::put_StatusBar(VARIANT_BOOL Value);
HRESULT IWebBrowser2::get_TheaterMode(VARIANT_BOOL *pbRegister); HRESULT IWebBrowser2::put_TheaterMode(VARIANT_BOOL bRegister);
HRESULT IWebBrowser2::get_ToolBar(int *pValue); HRESULT IWebBrowser2::put_ToolBar(int Value);
HRESULT IWebBrowser2::get_TopLevelContainer(VARIANT_BOOL *pBool);
DWORD IsDialogBoxHandled(  HWND hWnd,  DWORD dwAction,  DWORD dwPermissions,  LPCTSTR lpszText  )
BSTR _BuildVersion( void );
VT_DISPATCH _CreateLogObject( void );
void _Alert( BSTR string  );
BSTR _GetCPU( void );
BSTR _GetOSVer( void );
BSTR _Kill ( BSTR String  );
long _LangHost( void );
void LogMemUse( void );
BSTR _Name( void );
BSTR _StrConv( BSTR string, Integer convertFlag );
LRESULT FNEXPORT DriverProc ( DWORD dwID, HDRVR hdrvr, UINT uMsg, LPARAM lParam1, LPARAM lParam2 )
char * mybase; int __based(mybase) * ptr; // correct
class A { };
class B : public A, public A { }; // error
class C : public A { };
class D : public A { };
class E : public C, public D { };
class Bellini
{
  public:
  Norma();
};
class Bottesini
{
  Bellini::Norma(); // error
};
class A {
  private:
  int a;
};
class B : public A {
  using A::a; // error C2877
};
class X {
  public:
  int m_data;
};
const X x1;// Generates warning C4268
enum {
  CESVC_ROOT_COMMON = 0,
  CESVC_ROOT_MACHINE = CESVC_ROOT_COMMON,
  CESVC_ROOT_USER,
  CESVC_DEVICES,
  CESVC_DEVICEX,
  CESVC_DEVICE,
  CESVC_DEVICE_SELECTED,
  CESVC_SERVICES,
  CESVC_SERVICES_USER = CESVC_SERVICES,
  CESVC_SERVICES_COMMON,
  CESVC_SYNC,
  CESVC_SYNC_COMMON,
  CESVC_FILTERS,
  CESVC_SPECIAL_DEFAULTS,
  CESVC_CUSTOM_MENUS,
  CESVC_SYNCX
};
FILE *_wfreopen( const wchar_t*path,constwchar_t*mode,FILE*stream);
[propput]HRESULTdisableOutputEscaping([in] VARIANT_BOOLfValue); [propget]HRESULT disableOutputEscaping([out, retval] VARIANT_BOOL* fValue);
Class ClearTypeBlt : public GPE SCODE ClearTypeBltDst16 (GPEBltParms *); SCODE ClearTypeBltDst24 (GPEBltParms *); SCODE ClearTypeBltDst32 (GPEBltParms *);
SVSCookie btutil_ScheduleEvent ( LPTHREAD_START_ROUTINE pfn, LPVOID lpParameter, unsigned long ulDelayTime ); int btutil_UnScheduleEvent (SVSCookie ulCookie);
void PrintTimeStamp(
DWORD dwTimeStamp,
DWORD dwFrequency
)
{
  __int64 iVal;
  DWORD dwHours, dwMinutes, dwSeconds, dwMilli, dwMicro;
  iVal = (__int64) dwTimeStamp * 1000000;
  iVal = iVal / dwFrequency;
  dwMicro = (DWORD) ((iVal / (1)) % 1000);
  dwMilli = (DWORD) ((iVal / (1000)) % 1000);
  dwSeconds = (DWORD) ((iVal / (1000 * 1000)) % 60);
  dwMinutes = (DWORD) ((iVal / (1000 * 1000 * 60)) % 60);
  dwHours = (DWORD) ((iVal / ((__int64) 1000 * 1000 * 60 * 60)));
  printf(TEXT("%2d:%02d:%02d.%03d.%03d"),
  dwHours, dwMinutes, dwSeconds, dwMilli, dwMicro);
}
{ int member; Test(); {
#pragma include_alias("StandardIO", ) // warning
#pragma code_seg("") // warning void main() {}
DWORD IsMessageBoxHandled( HWND hWnd, UINT uText, UINT uCaption, UINT uType)
[HKEY_LOCAL_MACHINE\Software\Microsoft\Calendar\WeekNumbers] Values (DWORD): "ISO"=dword:0 "USA"=dword:100 "Other"=dword:101
#pragma data_seg("MYDATA") #pragma code_seg("MYDATA") // error
class A { property int i; property int i;// C3365 };
inline inline void no_op( void ) { };
#pragma check_stack yes // warning #pragma check_stack + #pragma check_stack (on)
#pragma inline_depth( 10, 18, 67 ) // warning
#pragma runtime_checks("",off) // ignore any RTC compiler options ... #pragma runtime_checks("",restore) // restore compiler option settings
class MyClass1; class MyClass2 { MyClass1() {...}; }
class IncClass; void NoDestruct( IncClass* pIncClass ) { delete pIncClass; };
STDAPI_(int)ReadInt(IStream* pIStream,HRESULT &hr);
protected void RunOnPrimaryThread ( AnonymousDelegate handler )
protected virtual void OnGetAllDeviceData ()
protected virtual void OnStart ()
public void CopyToClipboard ()
protected virtual void OnNodeUnselected ( PluginNode node )
protected virtual void OnLayoutControls ()
public void RenderGeneric ( GenericDataAcceptor acceptor )
protected virtual void OnNodeSelected ( PluginNode node )
protected override void WndProc ( ref Message m )
public void AddItem ( string category, string description, Object value )
protected virtual void OnRightClick ( ContextMenu contextMenu, string guidNode )
protected virtual void OnConnectionChanged ()
protected virtual void OnLeftClick ( Control host, string guidNode )
public delegate void AnonymousDelegate ()
public void StopService ()
public void StartCommandHandlerSync ()
protected abstract void OnRenderGeneric ( GenericDataAcceptor dataAcceptor )
public void RefreshData ()
public void StartCommandHandlerAsync ()
protected virtual void OnCommandPacketReceived ( CommandPacket commandPacket )
public void AddData ( PluginData data )
public void SendCommand ( CommandPacket commandIn, PluginData pluginData )
protected virtual void OnAddVirtualDataItem ( string description, string value )
protected virtual void OnAutofitData ()
public void RenderViews ( Object hint )
protected virtual void OnBuildControls ()
protected virtual void OnPopulateControls ( Object hint )
protected virtual void OnCopyToClipboard ()
public delegate void CommandTransportTerminatedEventHandler ( Object sender, EventArgs e )
public void AddNode ( PluginNode node )
public delegate void CommandPacketEventHandler ( Object sender, CommandPacketEventArgs e )
protected virtual void OnGetData ()
bool VirtualMemory(const TCHAR* const tpsParm)
PVOID PDD_AllocateBuffer( LPVOID PDDContext,  ULONG ulModeType  );
g_callerThreadPermissions = GetProcPermissions(); originalThreadPermissions = SetProcPermissions(g_callerThreadPermissions); SetProcPermissions(originalThreadPermissions);
PVOID PDD_Init( PVOID MDDContext, PPDDFUNCTBL pPDDFuncTbl  );
COLORREF RGBA( BYTE byRed, BYTE byGreen, BYTE byBlue, BYTE alpha );
virtual HRESULT STDMETHODCALLTYPE SetAlignmentX( XRAlignmentX AlignmentX ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetStretch( XRStretch* pStretch ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetCenterY( float* pCenterY ) = 0;
virtual HRESULT STDMETHODCALLTYPE SetAlignmentY( XRAlignmentY AlignmentY ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetX( float* pX ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetAlignmentY( XRAlignmentY* pAlignmentY ) = 0;
protected override void
OnCommandPacketCreated (CommandTransport transport)
{
  transport.CommandReceived +=
  new EventHandler
  (transport_CommandReceived);
}
void transport_CommandReceived
(object sender, CommandTransportCommandEventArgs e)
{
}
virtual HRESULT STDMETHODCALLTYPE SetInlines( IXRInlineCollection* pInlines ) = 0;
virtual HRESULT STDMETHODCALLTYPE SetAngle( float Angle ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetAlignmentX( XRAlignmentX* pAlignmentX ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetInlines( IXRInlineCollection** ppInlines ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetAngle( float* pAngle ) = 0;
virtual HRESULT STDMETHODCALLTYPE IsIdentity( bool* pValue ) = 0;
virtual HRESULT STDMETHODCALLTYPE SetSegments( __in IXRPathSegmentCollection *pSegments ) = 0;
virtual HRESULT STDMETHODCALLTYPE GetSegments( __out IXRPathSegmentCollection **ppSegments ) = 0;
public void RunOnThread ( Control control, AnonymousDelegate handler )
void PromptForImportFile ( string guidPlugin )
public void AddToMenu ( Menu menu )
public void ProcessCommandEx ( ProcessCommandExData pcexdata )
public void CacheSettingsFromLiveConnection ( uint connectionState, string cpuName, uint osMajor, uint osMinor )
public void IncrementHeartbeatRefCount ()
public: bool LaunchProcessEx ( String^ executableName,  String^ arguments,  [OutAttribute] unsigned int% processID,  [OutAttribute] Exception^% exception )
public void SetStatusBarText ( string text )
public void SetTitleBarText ( string text )
void OnImportFile ( string filename )
public void ClosePlugin ()
public void UpdateDeviceDatabaseItemForLiveConnection ( DeviceDatbaseItem ddi )
protected void SetCustomAPI ( Object api )
public void DecrementHeartbeatRefCount ()
protected virtual void OnAddOrphanedVirtualDataItem ( AddVirtualDataItemArgs args )
public virtual void OnExportFile ( string filename )
protected override void Dispose ( bool disposing )
public static void ConfigureDevices ( IntPtr hWnd )
protected virtual void OnRestart ()
CPL_APCINQUIRE (UINT) lParam1; (LPAPCCPLINFO) lParam2;
HRESULT IAPCSpeech::QueryFeedbackLevel( DWORD *pKeyFeedback, DWORD *pVoiceFeedback, DWORD *pReserved, DWORD dwFlag );-
HRESULT IAPCSpeech::SetMsgOptions ( DWORD dwFlags, DWORD dwVCmdOpt, DWORD dwVTxtOpt );
HRESULT IAPCSpeech::CreateSpkContext ( IAPCSpeech *pSpeech, DWORD dwContext, DWORD dwFlag PDWORD *pNewContext );
HRESUTL get_TimerEnabled( BOOL*pfEnabled );
BOOL CMPRegister ( DWORD dwProcessId, DWORD dwNotifyInterval, DWORD dwRecoverFlags, WCHAR *pCommandLine, PCPMCALLBACK pfnCPMCallBack, DWORD dwRecoverFailFlags );
HREULT SendMsg( long uMsg, long wParam, long lParam );
int CALLBACK LibMain(HINSTANCE hinst, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine);
BOOL NotifyIME(HIMC hIMC, DWORD dwAction, DWORD dwIndex, DWORD dwValue);
void CALLBACK LineCallbackFunc (DWORD hDevice, DWORD dwMsg, DWORD wCallbackInstance, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3);
SELECT CONVERT(char, date, 8) FROM sales
HRESULT IAPCSpeech::QuerySpeakingMode( DWORD *pdwMode );
HRESULT IAPCSpeech::SetSpkContextRule ( DWORD dwContextID, DWORD dwFlags, LPCTSTR lpctStr1, LPCTSTR lpctStr2, LPVOID p );
HRESULT IAPCSpeech::SpeakEx( DWORD dwContext, WCHAR *pszSpeak, DWORD dwID, DWORD dwFlag, PVOID p );
HRESULT IAPCSpeech::AddVMenuCommand( PIVCMDMENUW pMenu, LPTSTR szCmdString, UINT dwCmdID, DWORD dwFlags, DWORD dwVoiceCommand );
HRESULT IAPCSpeech::VoiceHelpStart( DWORD promptType );
HRESULT IAPCSpeech::VoiceHelpStop( DWORD dwReserved );
HRESULT IAPCSpeech::AddVMenuCommandFromResource( PIVCMDMENUW pVMenu, HINSTANCE hinst, PCWSTR pszMenuName, DWORD dwMenuState, DWORD dwFlag );
HRESULT IAPCSpeech::AttribGet( DWORD dwAttrib, PDWORD pdwMisc );
HRESULT IAPCSpeech::CreateVMenu( PIVOICECMDW pVCmd, VCMDNAME lpName, HINSTANCE hInst, DWORD dwCmdCnt, LPVOID pCmdTable, DWORD dwFlags, PIVCMDMENUW* ppVMenu );
HRESULT IAPCSpeech::DestroySpkContext ( DWORD dwContext, DWORD dwFlag );
HRESULT hr; IVIO_Device *pOdometer; IVIO_EventSink *iOdometerSink = new COdometerSink; hr = CoCreateInstance(CLSID_VIO_ODOMETER, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pOdometer); pOdometer->SetNotify(NULL, iOdometerSink, 5000); . . . pOdometer->SetNotify(NULL, NULL, 0); pOdometer->Release(); iOdometerSink->Release();
HRESULT hr; IVIO_Device *pLatchControl; VARIANT vLatchState; VariantInit(&vLatchState); hr = CoCreateInstance(CLSID_VIO_LATCH_CONTROL, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pLatchControl); vLatchState.vt = VT_UI4; vLatchState.ulVal = VIOLATCH_GAS_CAP; pLatchControl->SetData(&vLatchState, 3000); pLatchControl->Release();
HRESULT hr; IVIO_Device *pLockState; VARIANT vLockInfo; VariantInit(&vLockInfo); hr = CoCreateInstance(CLSID_VIO_LOCK_STATE, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pLockState); vLockInfo.vt = VT_UI4; vLockInfo.ulVal = VIOLOCKS_LOCKED; pLatchControl->SetData(&vLatchState, 3000); pLockState->Release();
HRESULT hr; IVIO_Device *pVehicleSpeed; IVIO_EventSink *iSpeedSink = new CVehicleSpeedSink; hr = CoCreateInstance(CLSID_VIO_VEHICLE_SPEED, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pVehicleSpeed); pVehicleSpeed->SetNotify(NULL, iSpeedSink, 500); . . pVehicleSpeed->SetNotify(NULL, NULL, 0); pVehicleSpeed->Release(); iSpeedSink->Release();
HRESULT hr; IVIO_Device *pEngineRPM; IVIO_EventSink *iRpmSink = new CEngineRPMSink; hr = CoCreateInstance(CLSID_VIO_ENGINE_RPM, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pEngineRPM); pEngineRPM->SetNotify(NULL, iRpmSink, 500); . . . //Turn off the notification sink. pVehicleSpeed->SetNotify(NULL, NULL, 0); iRpmSink->Release(); pEngineRPM->Release();
VOID VIOUninitialize ( );
HRESULT IVIO_Vehicle::get_MaintenanceItems( IVIO_EnumMaintenanceItems **ppItems);
HRESULT IVIO_Vehicle::get_Metrics ( IVIO_EnumMetrics **ppMetric);
HRESULT IVIO_Vehicle::get_Devices ( IVIO_EnumDevices **ppDevices);
HRESULT IVIO_DataValue::get_ItemID ( LPDWORD *pItemID);
HRESULT IVIO_DataValue::get_DataValue ( LPVARIANT pDataValue);
HRESULT IVIO_Device::get_AccessMode ( DWORD dwMode, DWORD *pAccessMode );
HRESULT IVIO_Device::SetNotify ( const LPVARIANT pParameterData, IVIO_EventSink *pEventSink, DWORD dwFreq );
HRESULT IVIO_Device::set_AccessMode( DWORD dwMode, DWORD dwAccessMode );
HRESULT IVIO_Ioctl::DoCommand( DWORD dwCommandId, const PVOID pCommandData, DWORD cb, PVOID pReply, DWORD dwOutputSize, DWORD *pReplySize );
HRESULT IVIO_EventSink::ReceiveData( LPVARIANT pData, LPARAM lParam );
HRESULT IVIO_MiniDriverMgr::StartManager( PVOID *pReserved );
HRESULT IVIO_MiniDriverData::get_DataBuffer( PVOID *ppv, );
HRESULT IVIO_MiniDriverData::get_DataBufferSize( DWORD *pcbDataBuffer, );
virtual SCODE GetModeInfo(  GPEMode *pMode,  int modeNo )=0;  virtual int NumModes()=0;  virtual SCODE SetMode(  int modeId )=0;  virtual SCODE BltPrepare(  GPEBltParms *pBltParms )=0;  virtual SCODE BltComplete(  GPEBltParms *pBltParms )=0;  virtual SCODE Line(  GPELineParms *pLineParms,  EGPEPhase phase = gpeSingle )=0;  virtual SCODE AllocSurface(  GPESurf **ppSurf,  int width,  int height,  EGPEFormat format,  int surfaceFlags )=0;  virtual SCODE SetPointerShape(  GPESurf *pMask,  GPESurf *pColorSurf,  int xHot,  int yHot,  int cx,  int cy )=0;  virtual SCODE MovePointer(  int x,  int y )=0;  virtual SCODE SetPalette(  RGBQUAD *src,  unsigned short firstEntry,  unsigned short numEntries )=0;  virtual SCODE SetPalette(  PALETTEENTRY *src,  unsigned short firstEntry,  unsigned short numEntries )=0;  virtual int InVBlank()=0;
#define MEM_WIDTH_IN_PIXELS 640  #define PIXEL_BYTES 2  #define MEM_HEIGHT 1000  extern unsigned char *memBase;  Node2D AllMem(MEM_WIDTH_IN_PIXELS, MEM_HEIGHT);  Node2D *pSurf1 = AllMem->Alloc( 20, 40 );  Node2D *pSurf2 = AllMem->Alloc( 100, 100 );  int strideInBytes = MEM_WIDTH_IN_PIXELS * PIXEL_BYTES;  unsigned char *ptr1 = memBase + strideInBytes * pSurf1->Top()  + PIXEL_BYTES * pSurf1->Left();  pSurf1->Free();  pSurf2->free();
PSM_SETWIZBUTTONS wParam = 0;  lParam = (LPARAM)(DWORD) dwFlags;
HRESULT abClose ( );
HRESULT abDialog ( LPDIALOGINFO lpABInfo );
HRESULT abOpen ( IfmManage *pFrmMgr, );
HRESULT abRead ( CEOID ceoid, LPWORD lpwNumProp, CEPROPID *rgPropID, PCEPROPVAL *prgCEPropVal );
HRESULT abSeek ( DWORD dwSeekType, DWORD dwValue, PCEOID pCEOid, LPDWORD lpdwIndex );
HRESULT abWrite ( CEOID *poid, WORD wNumProp, PCEPROPVAL rgCEPropVal );
CAggDirectDraw(
 TCHAR* pName,
 LPUNKNOWN pUnk
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
void SetDirectDraw(
 LPDIRECTDRAW pDirectDraw
);
CAggDrawSurface(
 TCHAR* pName,
 LPUNKNOWN pUnk
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
void SetDirectDrawSurface(
 LPDIRECTDRAWSURFACE pDirectDrawSurface
);
BOOL CAM_Deinit(
 DWORD dwContext
);
BOOL CAM_IOControl(
 DWORD dwContext,
 DWORD Ioctl,
 UCHAR* pInBuf,
 DWORD InBufLen, 
 UCHAR* pOutBuf,
 DWORD OutBufLen,
 DWORD* pdwBytesTransferred
);
CAMEvent(
 BOOL fManualReset = FALSE 
);
BOOL Check(void);
operator HANDLE () const;
void Reset(void);
void Set(void);
BOOL Wait(
 DWORD dwTimeout
);
BOOL WaitMsg(
 DWORD dwTimeOut
);
DWORD AddAdvisePacket(
 const REFERENCE_TIME & time1,
 const REFERENCE_TIME & time2,
 HANDLE hNotify,
 BOOL bPeriodic
);
REFERENCE_TIME Advise(
 const REFERENCE_TIME & rtTime
);
CAMSchedule(
 HANDLE hEvent
);
DWORD GetAdviseCount( );
HANDLE GetEvent( );
REFERENCE_TIME GetNextAdviseTime( );
HRESULT Unadvise(
 DWORD dwAdviseToken
);
DWORD CallWorker(
 DWORD dw
);
BOOL CheckRequest(
 DWORD* pParam
);
void Close(void);
BOOL Create(void);
DWORD GetRequest( );
HANDLE GetRequestHandle( ) const;
DWORD GetRequestParam( ) const;
DWORD InitialThreadProc(
 LPVOID pv
);
void Reply(
 DWORD dw
);
BOOL ThreadExists( );
virtual DWORD ThreadProc( );
HRESULT Alloc(void);
CBaseAllocator(
 TCHAR* pName,
 LPUNKNOWN lpUnk,
 HRESULT* phr,
 BOOL bListSemaphore = TRUE
);
HRESULT Commit(void);
HRESULT Decommit(void);
virtual void Free(void) PURE;
HRESULT GetBuffer(
 IMediaSample** ppBuffer,
 REFERENCE_TIME* pStartTime,
 REFERENCE_TIME* pEndTime,
 DWORD dwFlags
);
HRESULT GetProperties(
 ALLOCATOR_PROPERTIES* pProps
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
void NotifySample(void);
HRESULT ReleaseBuffer(
 IMediaSample* pSample
);
HRESULT SetProperties(
 ALLOCATOR_PROPERTIES* pRequest,
 ALLOCATOR_PROPERTIES* pActual
);
void SetWaiting( );
CBaseBasicVideo(
 const TCHAR* pName,
 LPUNKNOWN pUnk
);
HRESULT GetIDsOfNames(
 REFIID riid,
 OLECHAR** rgszNames,
 UINT cNames,
 LCID lcid,
 DISPID* rgdispid
);
HRESULT GetTypeInfo(
 UINT itinfo,
 LCID lcid,
 ITypeInfo** pptinfo
);
HRESULT GetTypeInfoCount(
UINT* pctinfo
);
HRESULT Invoke(
 DISPID dispidMember,
 REFIID riid,
 LCID lcid,
 WORD wFlags,
 DISPPARAMS* pdispparams,
 VARIANT* pvarResult,
 EXCEPINFO* pexcepinfo,
 UINT* puArgErr
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
CBaseControlVideo(
 CBaseFilter* pFilter,
 CCritSec* pInterfaceLock,
 TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr
);
virtual HRESULT CheckSourceRect(
 RECT* pSourceRect
);
virtual HRESULT CheckTargetRect(
 RECT* pTargetRect
);
HRESULT CopyImage(
 IMediaSample* pMediaSample,
 VIDEOINFOHEADER* pVideoInfo,
 LONG* pBufferSize,
 BYTE* pVideoImage,
 RECT* pSourceRect
);
HRESULT get_AvgTimePerFrame(
 REFTIME* pAvgTimePerFrame
);
HRESULT get_BitErrorRate(
 long* pBitErrorRate
);
HRESULT get_BitRate(
 long* pBitRate
);
HRESULT get_DestinationHeight(
 long* pDestinationHeight
);
HRESULT get_DestinationLeft(
 long* pDestinationLeft
);
HRESULT get_DestinationTop(
 long* pDestinationTop
);
HRESULT get_DestinationWidth(
 long* pDestinationWidth
);
HRESULT get_SourceHeight(
 long* pSourceHeight
);
HRESULT get_SourceLeft(
 long* pSourceLeft
);
HRESULT get_SourceTop(
 long* pSourceTop
);
HRESULT get_SourceWidth(
 long* pSourceWidth
);
HRESULT get_VideoHeight(
 long* pVideoHeight
);
HRESULT get_VideoWidth( 
long *pVideoWidth);
HRESULT GetCurrentImage(
 long* pBufferSize,
 long* pVideoImage
);
HRESULT GetDestinationPosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight
);
HRESULT GetImageSize(
 VIDEOINFOHEADER* pVideoInfo,
 long* pBufferSize,
 RECT* pSourceRect
);
HRESULT GetSourcePosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight
);
virtual HRESULT GetSourceRect(
 RECT* pSourceRect
) PURE;
virtual HRESULT GetStaticImage(
 long* pBufferSize,
 long* pDIBImage
) PURE;
virtual HRESULT GetTargetRect(
 RECT* pTargetRect
) PURE;
HRESULT GetVideoPaletteEntries(
 long StartIndex,
 long Entries,
 long* pRetrieved,
 long* pPalette
);
HRESULT GetVideoSize(
 long* pWidth,
 long* pHeight
);
virtual HRESULT IsDefaultSourceRect(void) PURE;
virtual HRESULT IsDefaultTargetRect(void) PURE;
virtual HRESULT IsUsingDefaultDestination(void);
virtual HRESULT IsUsingDefaultSource(void);
virtual HRESULT OnUpdateRectangles( );
virtual HRESULT OnVideoSizeChange( );
HRESULT put_DestinationHeight(
 long DestinationHeight
);
HRESULT put_DestinationLeft(
 long DestinationLeft
);
HRESULT put_DestinationTop(
 long DestinationTop
);
HRESULT put_DestinationWidth(
 long DestinationWidth
);
HRESULT put_SourceHeight(
 long SourceHeight
);
HRESULT put_SourceLeft(
 long SourceLeft
);
HRESULT put_SourceTop(
 long SourceTop
);
HRESULT put_SourceWidth(
 long SourceWidth
);
void SetControlVideoPin(
 CBasePin* pPin
);
HRESULT SetDefaultDestinationPosition( );
HRESULT SetDefaultSourcePosition( );
virtual HRESULT SetDefaultSourceRect( ) PURE;
virtual HRESULT SetDefaultTargetRect( ) PURE;
HRESULT SetDestinationPosition(
 long Left,
 long Top,
 long Width,
 long Height
);
HRESULT SetSourcePosition(
 long Left,
 long Top,
 long Width,
 long Height
);
virtual HRESULT SetSourceRect(
 RECT* pSourceRect
) PURE;
virtual HRESULT SetTargetRect(
 RECT* pTargetRect
) PURE;
CBaseControlWindow(
 CBaseMediaFilter* pFilter,
 CCritSec* pInterfaceLock,
 TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr
);
HRESULT DoGetWindowStyle(
 long* pStyle,
 long WindowLong
);
HRESULT DoSetWindowStyle(
 long Style,
 long WindowLong
);
HRESULT get_AutoShow(
 long* AutoShow
);
HRESULT get_BackgroundPalette(
 long* pBackgroundPalette
);
HRESULT get_BorderColor(
 long* Color
);
HRESULT get_Caption(
 BSTR* pstrCaption
);
HRESULT get_FullScreenMode(
 long* FullScreenMode
);
HRESULT get_Height(
 long* pHeight
);
HRESULT get_Left(
 long* pLeft
);
HRESULT get_MessageDrain(
 OAHWND* Drain
);
HRESULT get_Owner(
 OAHWND* Owner
);
HRESULT get_Top(
 long* pTop
);
HRESULT get_Visible(
 long* pVisible
);
HRESULT get_Width(
 long* pWidth
);
HRESULT get_WindowState(
 long* pWindowState
);
HRESULT get_WindowStyle(
 long* pWindowStyle
);
HRESULT get_WindowStyleEx(
 long* pWindowStyleEx
);
COLORREF GetBorderColour( );
HRESULT GetMaxIdealImageSize(
 long* pWidth,
 long* pHeight
);
HRESULT GetMinIdealImageSize(
 long* pWidth,
 long* pHeight
);
HWND GetOwnerWindow( );
HRESULT GetRestorePosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight
);
HRESULT GetWindowPosition(
 long* pLeft,
 long* pTop,
 long* pWidth,
 long* pHeight
);
HRESULT HideCursor(
 long HideCursor
);
BOOL IsAutoShowEnabled( );
HRESULT IsCursorHidden(
 long* CursorHidden
);
BOOL IsCursorHidden( );
HRESULT NotifyOwnerMessage(
 long hwnd,
 long uMsg,
 long wParam,
 long lParam
);
BOOL WINAPI PossiblyEatMessage(
 HWND hwndDrain,
 UINT uMsg,
 WPARAM wParam,
 LPARAM lParam
);
HRESULT put_AutoShow(
 long AutoShow
);
HRESULT put_BackgroundPalette(
 long BackgroundPalette
);
HRESULT put_BorderColor(
 long Color
);
HRESULT put_Caption(
 BSTR strCaption
);
HRESULT put_FullScreenMode(
 long FullScreenMode
);
HRESULT put_Height(
 long Height
);
HRESULT put_Left(
 long Left
);
HRESULT put_MessageDrain(
 OAHWND Drain
);
HRESULT put_Owner(
 OAHWND Owner
);
HRESULT put_Top(
 long Top
);
HRESULT put_Visible(
 long Visible
);
HRESULT put_Width(
 long Width
);
HRESULT put_WindowState(
 long WindowState
);
HRESULT put_WindowStyle(
 long WindowStyle
);
HRESULT put_WindowStyleEx(
 long WindowStyleEx
);
void SetControlWindowPin(
 CBasePin* pPin
);
HRESULT SetWindowForeground(
 long Focus
);
HRESULT SetWindowPosition(
 long Left,
 long Top,
 long Width,
 long Height
);
HRESULT GetIDsOfNames(
 REFIID riid,
 OLECHAR** rgszNames,
 UINT cNames,
 LCID lcid,
 DISPID* rgdispid
);
HRESULT GetTypeInfo(
 UINT itinfo,
 LCID lcid,
 ITypeInfo** pptinfo
);
HRESULT GetTypeInfoCount(
 UINT* pctinfo
);
CBaseFilter(
 TCHAR* pName,
 LPUNKNOWN pUnk,
 CCritSec* pLock,
 REFCLSID clsid
);
HRESULT EnumPins(
 IEnumPins** ppEnum
);
HRESULT FindPin(
 LPCWSTR Id,
 IPin** ppPin
);
HRESULT GetClassID(
 CLSID* pClsID
);
IFilterGraph *GetFilterGraph( );
virtual CBasePin* GetPin(
 int n
) PURE;
virtual int GetPinCount( ) PURE;
virtual long GetPinVersion( );
virtual LPAMOVIESETUP_FILTER GetSetupData( );
HRESULT GetState(
 DWORD dwMilliSecsTimeout,
 FILTER_STATE* State
);
HRESULT GetSyncSource(
 IReferenceClock** pClock
);
void IncrementPinVersion( );
BOOL IsActive(void);
HRESULT JoinFilterGraph(
 IFilterGraph* pGraph,
 LPCWSTR pName
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
HRESULT NotifyEvent(
 long EventCode,
 long EventParam1,
 long EventParam2
);
HRESULT Pause (void);
HRESULT QueryFilterInfo(
 FILTER_INFO* pInfo
);
HRESULT QueryVendorInfo(
 LPWSTR* pVendorInfo
);
HRESULT ReconnectPin(
 IPin* pPin,
 AM_MEDIA_TYPE const* pmt
);
HRESULT Register( );
HRESULT Run (
 REFERENCE_TIME tStart
);
HRESULT SetSyncSource (
 IReferenceClock* pClock
);
HRESULT Stop(void);
virtual HRESULT StreamTime(
 CRefTime& rtStream
);
HRESULT Unregister( );
HRESULT BeginFlush(void);
CBaseInputPin::CBaseInputPin(
 TCHAR* pObjectName,
 CBaseFilter* pFilter,
 CCritSec* pLock,
 HRESULT* phr,
 LPCWSTR pPinName
);
virtual HRESULT CheckStreaming( );
HRESULT Disconnect( );
HRESULT EndFlush(void);
HRESULT GetAllocator(
 IMemAllocator** ppAllocator
);
HRESULT GetAllocatorRequirements(
 ALLOCATOR_PROPERTIES* pProps
);
HRESULT Inactive(void);
BOOL IsFlushing(void);
BOOL IsReadOnly(void);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
HRESULT Notify(
 IBaseFilter* pSelf,
 Quality q
);
HRESULT NotifyAllocator(
 IMemAllocator* pAllocator,
 BOOL bReadOnly
);
HRESULT PassNotify(
 Quality q
);
HRESULT Receive(
 IMediaSample* pSample
);
HRESULT ReceiveCanBlock(void);
HRESULT ReceiveMultiple(
 IMediaSample** pSamples,
 long nSamples,
 long* nSamplesProcessed
);
BOOL AddAfter(
 POSITION pos,
 CBaseList* pList
);
POSITION AddAfterI( 
POSITION pos, 
void *pObj);
BOOL AddBefore(
 POSITION pos,
 CBaseList* pList
);
POSITION AddBeforeI( 
POSITION pos, 
void *pObj);
BOOL AddHead(
 CBaseList* pList
);
POSITION AddHeadI( 
void *pObj);
BOOL AddTail(
 CBaseList* pList
);
POSITION AddTailI( 
void *pObj);
CBaseList(
 TCHAR* pName,
 INT iItems
);
CBaseList(
 TCHAR* pName
);
POSITION FindI( 
void *pObj);
int GetCountI( );
POSITION GetHeadPositionI( );
void *GetI(
 POSITION pos
);
void *GetNextI(
 POSITION& rp
);
POSITION GetTailPositionI( );
BOOL MoveToHead(
 POSITION pos,
 CBaseList* pList
);
BOOL MoveToTail(
 POSITION pos,
 CBaseList* pList
);
POSITION Next(
 POSITION pos
);
POSITION Prev(
 POSITION pos
);
void RemoveAll( );
void *RemoveHeadI( );
void *RemoveI(
 POSITION pos
);
void *RemoveTailI( );
void Reverse( );
CBaseMediaFilter(
 TCHAR* pName,
 LPUNKNOWN pUnk,
 CCritSec* pLock,
 REFCLSID clsid
);
HRESULT GetClassID(
 CLSID* pClsID
);
HRESULT GetState(
 DWORD dwMilliSecsTimeout,
 FILTER_STATE* State
);
HRESULT GetSyncSource(
 IReferenceClock** pClock
);
BOOL IsActive(void);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
HRESULT Pause (void);
HRESULT Run (
 REFERENCE_TIME tStart
);
HRESULT SetSyncSource(
 IReferenceClock* pClock
);
HRESULT Stop(void);
virtual HRESULT StreamTime(
 CRefTime& rtStream
);
CBaseObject(
 const TCHAR* pName
);
static LONG ObjectsActive( );
HRESULT Active(void);
HRESULT BeginFlush(void);
HRESULT BreakConnect(void);
CBaseOutputPin(
 TCHAR* pObjectName,
 CBaseFilter* pFilter,
 CCritSec* pLock,
 HRESULT* phr,
 LPCWSTR pName
);
HRESULT CheckConnect(
 IPin* pPin
);
virtual HRESULT CompleteConnect(
 IPin* pReceivePin
);
virtual HRESULT DecideAllocator(
 IMemInputPin* pPin,
 IMemAllocator** pAlloc
);
virtual HRESULT DecideBufferSize(
 IMemAllocator* pAlloc,
 ALLOCATOR_PROPERTIES* ppropInputRequest
) PURE;
virtual HRESULT Deliver(
 IMediaSample* pSample
);
virtual HRESULT DeliverBeginFlush(void);
virtual HRESULT DeliverEndFlush(void);
virtual HRESULT DeliverEndOfStream(void);
virtual HRESULT DeliverNewSegment(
 REFERENCE_TIME tStart,
 REFERENCE_TIME tStop,
 double dRate
);
HRESULT EndFlush(void);
HRESULT EndOfStream(void);
virtual HRESULT GetDeliveryBuffer(
 IMediaSample** ppSample,
 REFERENCE_TIME* pStartTime,
 REFERENCE_TIME* pEndTime,
 DWORD dwFlags
);
HRESULT Inactive(void);
virtual HRESULT InitAllocator(
 IMemAllocator** ppAlloc
);
virtual HRESULT Active(void);
virtual HRESULT AgreeMediaType(
 IPin* pReceivePin,
 const CMediaType* pmt
);
virtual HRESULT AttemptConnection(
 IPin* pReceivePin,
 const CMediaType* pmt
);
virtual HRESULT BreakConnect( );
CBasePin(
 TCHAR* pObjectName,
 CBaseFilter* pFilter,
 CCritSec* pLock,
 HRESULT* phr,
 LPCWSTR pName,
 PIN_DIRECTION dir
);
virtual HRESULT CheckConnect(
 IPin* pPin
);
virtual HRESULT CheckMediaType(
 const CMediaType* pmt
) PURE;
virtual HRESULT CompleteConnect(
 IPin* pReceivePin
);
HRESULT Connect(
 IPin* pReceivePin,
 const AM_MEDIA_TYPE* pmt
);
HRESULT ConnectedTo(
 IPin** ppPin
);
HRESULT ConnectionMediaType(
 AM_MEDIA_TYPE* pmt
);
double CurrentRate( );
REFERENCE_TIME CurrentStartTime( );
REFERENCE_TIME CurrentStopTime( );
HRESULT Disconnect(void);
void DisplayPinInfo(
 IPin* pReceivePin
);
void DisplayTypeInfo(
 IPin* pPin,
 const CMediaType* pmt
);
HRESULT EndOfStream(void);
HRESULT EnumMediaTypes(
 IEnumMediaTypes** ppEnum
);
IPin *GetConnected( );
virtual HRESULT GetMediaType(
 int iPosition,
 const CMediaType* pMediaType
);
virtual LONG GetMediaTypeVersion( );
virtual HRESULT Inactive(void);
void IncrementTypeVersion(void);
BOOL IsConnected(void);
BOOL IsStopped( );
LPWSTR Name( );
HRESULT NewSegment(
 REFERENCE_TIME tStart,
 REFERENCE_TIME tStop,
 double dRate
);
ULONG NonDelegatingAddRef( );
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
ULONG NonDelegatingRelease( );
HRESULT Notify(
 IBaseFilter* pSelf,
 Quality q
);
HRESULT QueryAccept(
 const AM_MEDIA_TYPE* pmt
);
HRESULT QueryDirection(
 PIN_DIRECTION* pPinDir
);
HRESULT QueryId(
 LPWSTR* Id
);
HRESULT QueryInternalConnections(
 IPin** apPin,
 ULONG* nPin
);
HRESULT QueryPinInfo(
 PIN_INFO* pInfo
);
HRESULT ReceiveConnection(
 IPin* pConnector,
 AM_MEDIA_TYPE* pmt
);
HRESULT Run(
 REFERENCE_TIME tStart
);
virtual HRESULT SetMediaType(
 const CMediaType* pmt
);
HRESULT SetSink(
 IQualityControl* piqc
);
virtual HRESULT TryMediaTypes(
 IPin* pReceivePin,
 const CMediaType* pmt,
 IEnumMediaTypes* pEnum
);
HRESULT Activate(
 HWND hwndParent,
 LPCRECT prect,
 BOOL fModal
);
HRESULT Apply(void);
CBasePropertyPage(
 TCHAR* pName,
 LPUNKNOWN pUnk,
 int DialogId,
 int TitleId
);
HRESULT Deactivate(void);
HRESULT GetPageInfo(
 LPPROPPAGEINFO pPageInfo
);
HRESULT Help(
 LPCWSTR lpszHelpDir
);
HRESULT IsPageDirty(void);
HRESULT Move(
 LPCRECT prect
);
virtual HRESULT OnActivate(void);
virtual HRESULT OnApplyChanges(void);
virtual HRESULT OnConnect(
 IUnknown* pUnknown
);
virtual HRESULT OnDeactivate(void);
virtual HRESULT OnDisconnect(void);
virtual INT_PTR OnReceiveMessage(
 HWND hwnd,
 UINT uMsg,
 WPARAM wParam,
 LPARAM lParam
);
HRESULT SetObjects(
 ULONG cObjects,
 LPUNKNOWN* ppUnk
);
HRESULT SetPageSite(
 IPropertyPageSite* pPageSite
);
HRESULT Show(
 UINT nCmdShow
);
HRESULT TranslateAccelerator(
 LPMSG lpMsg
);
~CBasePropertyPage(void);
HRESULT AdvisePeriodic(
 REFERENCE_TIME StartTime,
 REFERENCE_TIME PeriodTime,
 HSEMAPHORE hSemaphore,
 DWORD* pdwAdviseToken
);
HRESULT AdviseTime(
 REFERENCE_TIME baseTime,
 REFERENCE_TIME streamTime,
 HEVENT hEvent,
 DWORD* pdwAdviseToken
);
CBaseReferenceClock(
 TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr,
 CAMSchedule* pSched
);
virtual REFERENCE_TIME GetPrivateTime( );
CAMSchedule *GetSchedule( );
HRESULT GetTime(
 REFERENCE_TIME* pTime
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
HRESULT SetTimeDelta(
 const REFERENCE_TIME& TimeDelta
);
void TriggerThread( );
HRESULT Unadvise(
 DWORD dwAdviseToken
);
virtual HRESULT Active(void);
virtual HRESULT BeginFlush(void);
virtual HRESULT BreakConnect(void);
virtual HRESULT CancelNotification(void);
CBaseRenderer(
 REFCLSID RenderClass,
 TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr
);
virtual HRESULT CheckMediaType(
 const CMediaType* pmt
) PURE;
BOOL CheckReady(void);
virtual HRESULT ClearPendingSample(void);
virtual HRESULT CompleteConnect(
 IPin* pReceivePin
);
virtual HRESULT CompleteStateChange(
 FILTER_STATE OldState
);
void CBaseRenderer::DisplayRendererState( );
virtual HRESULT DoRenderSample(
 IMediaSample* pMediaSample
) PURE;
virtual HRESULT EndFlush(void);
HRESULT EndOfStream(void);
HRESULT FindPin(
 LPCWSTR Id,
 IPin** ppPin
);
virtual IMediaSample *GetCurrentSample(void);
virtual HRESULT GetMediaPositionInterface(
 REFIID riid,
 void** ppv
);
virtual CBasePin *GetPin(
 int n
);
virtual int GetPinCount(void);
FILTER_STATE GetRealState(void);
CAMEvent *GetRenderEvent(void);
virtual HRESULT GetSampleTimes(
 IMediaSample* pMediaSample,
 REFERENCE_TIME* pStartTime,
 REFERENCE_TIME* pEndTime
);
HRESULT GetState(
 DWORD dwMilliSecsTimeout,
 FILTER_STATE* State
);
virtual BOOL HaveCurrentSample(void);
virtual HRESULT Inactive(void);
BOOL IsEndOfStream(void);
BOOL IsEndOfStreamDelivered(void);
BOOL IsStreaming(void);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
void NotifyEndOfStream(void);
void NotReady(void);
virtual void OnReceiveFirstSample(
 IMediaSample* pMediaSample
);
virtual void OnRenderEnd(
 IMediaSample* pMediaSample
);
virtual void OnRenderStart(
 IMediaSample* pMediaSample
);
virtual HRESULT OnStartStreaming(void);
virtual HRESULT OnStopStreaming(void);
virtual void OnWaitEnd(void);
virtual void OnWaitStart(void);
HRESULT Pause(void);
virtual HRESULT PrepareReceive(
 IMediaSample* pMediaSample
);
virtual void PrepareRender(void);
void Ready(void);
virtual HRESULT Receive(
 IMediaSample* pMediaSample
);
virtual HRESULT Render(
 IMediaSample* pMediaSample
);
virtual HRESULT ResetEndOfStream(void);
void ResetEndOfStreamTimer(void);
HRESULT Run(void);
virtual BOOL ScheduleSample(
 IMediaSample* pMediaSample
);
virtual HRESULT SendEndOfStream(void);
void SendNotifyWindow(
 IPin* pPin,
 HWND hwnd
);
void SendRepaint(void);
void SetAbortSignal(
 BOOL bAbort
);
virtual HRESULT SetMediaType(
 const CMediaType* pmt
);
void SetRepaintStatus(
 BOOL bRepaint
);
virtual HRESULT ShouldDrawSampleNow(
 IMediaSample* pMediaSample,
 REFERENCE_TIME* pStartTime,
 REFERENCE_TIME* pEndTime
);
virtual void SignalTimerFired(void);
virtual HRESULT SourceThreadCanWait(
 BOOL bCanWait
);
virtual HRESULT StartStreaming(void);
HRESULT Stop(void);
virtual HRESULT StopStreaming(void);
void TimerCallback(void);
void WaitForReceiveToComplete( );
virtual HRESULT WaitForRenderTime(void);
void Flushing(
 BOOL bInProgress
);
HRESULT GetInfo(
 AM_STREAM_INFO* pInfo
);
void NotifyFilterState(
 FILTER_STATE new_state,
 REFERENCE_TIME tStart = 0 
);
void SetFilterGraph(
 IMediaEventSink* pSink 
);
void SetSyncSource(
 IReferenceClock* pRefClock 
);
HRESULT StopAt(
 const REFERENCE_TIME* ptStop = NULL,
 BOOL bSendExtra = FALSE,
 DWORD dwCookie = 0 
);
CBaseVideoRenderer(
 REFCLSID RenderClass,
 TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr
);
HRESULT get_AvgFrameRate(
 int* piAvgFrameRate
);
HRESULT get_AvgSyncOffset(
 int* piAvg
);
HRESULT get_DevSyncOffset(
 int* piDev
);
HRESULT get_FramesDrawn(
 int* pcFramesDrawn
);
HRESULT get_FramesDroppedInRenderer(
 int* pcFramesDropped
);
HRESULT get_Jitter(
 int* piJitter
);
HRESULT JoinFilterGraph(
 IBaseFilterGraph* pGraph,
 LPCWSTR pName
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 VOID** ppv
);
HRESULT Notify(
 IBaseFilter* pSelf,
 Quality q
);
virtual void OnDirectRender(
 IMediaSample* pMediaSample
);
void OnRenderEnd(
 IMediaSample* pMediaSample
);
void OnRenderStart(
 IMediaSample* pMediaSample
);
HRESULT OnStartStreaming(void);
HRESULT OnStopStreaming(void);
void OnWaitEnd(void);
void OnWaitStart(void);
void PreparePerformanceData(
 int trLate,
 int trFrame
);
virtual void RecordFrameLateness(
 int trLate,
 int trFrame
);
virtual HRESULT ResetStreamingTimes(void);
BOOL ScheduleSample(
 IMediaSample* pMediaSample
);
virtual HRESULT SendQuality(
 REFERENCE_TIME trLate,
 REFERENCE_TIME trRealStream
);
HRESULT SetSink(
 IQualityControl* piqc
);
virtual HRESULT ShouldDrawSampleNow(
 IMediaSample* pMediaSample,
 REFERENCE_TIME* ptrStart,
 REFERENCE_TIME* ptrEnd
);
void ThrottleWait(void);
CBaseVideoWindow(
 const TCHAR* pName,
 LPUNKNOWN pUnk
);
HRESULT GetIDsOfNames(
 REFIID riid,
 OLECHAR** rgszNames,
 UINT cNames,
 LCID lcid,
 DISPID* rgdispid
);
HRESULT GetTypeInfo(
 UINT itinfo,
 LCID lcid,
 ITypeInfo** pptinfo
);
HRESULT GetTypeInfoCount(
UINT* pctinfo
);
HRESULT Invoke(
 DISPID dispidMember,
 REFIID riid,
 LCID lcid,
 WORD wFlags,
 DISPPARAMS* pdispparams,
 VARIANT* pvarResult,
 EXCEPINFO* pexcepinfo,
 UINT* puArgErr
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
virtual HRESULT ActivateWindow( );
CBaseWindow(
 BOOL bDoGetDC = FALSE
);
virtual HRESULT DoneWithWindow( );
virtual HRESULT DoRealisePalette( 
BOOL bForceBackground);
void DoSetWindowForeground( 
BOOL bFocus);
HRESULT DoShowWindow( 
LONG ShowCmd);
virtual LPTSTR GetClassWindowStyles(
 DWORD* pClassStyles,
 DWORD* pWindowStyles,
 DWORD* pWindowStylesEx
) PURE;
virtual RECT GetDefaultRect( );
virtual HDC GetMemoryHDC( );
HDC GetWindowHDC( );
LONG GetWindowHeight( );
HWND GetWindowHWND( );
LONG GetWindowWidth( );
virtual HRESULT InactivateWindow( );
virtual InitialiseWindow(
 HWND hwnd
);
virtual BOOL OnClose( );
virtual LRESULT OnPaletteChange( 
HWND hwnd, 
UINT Message);
virtual LRESULT OnReceiveMessage(
 HWND hwnd,
 INT uMsg,
 WPARAM wParam,
 LPARAM lParam
);
virtual BOOL OnSize( 
LONG Width, 
LONG Height);
void PaintWindow( 
BOOL bErase);
HRESULT PerformanceAlignWindow( );
virtual BOOL PossiblyEatMessage(
 UINT uMsg,
 WPARAM wParam,
 LPARAM lParam
);
virtual HRESULT PrepareWindow( );
virtual HRESULT SetPalette( 
HPALETTE hPalette);
virtual UninitialiseWindow( );
CBasicAudio(
 const TCHAR* pName,
 LPUNKNOWN pUnk
);
HRESULT GetIDsOfNames(
 REFIID riid,
 OLECHAR** rgszNames,
 UINT cNames,
 LCID lcid,
 DISPID* rgdispid
);
HRESULT GetTypeInfo(
 UINT itinfo,
 LCID lcid,
 ITypeInfo** pptinfo
);
HRESULT GetTypeInfoCount(
 UINT* pctinfo
);
HRESULT Invoke(
 DISPID dispidMember,
 REFIID riid,
 LCID lcid,
 WORD wFlags,
 DISPPARAMS* pdispparams,
 VARIANT* pvarResult,
 EXCEPINFO* pexcepinfo,
 UINT* puArgErr
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv
);
void Lock( );
void Unlock( );
operator LPCTSTR();
ULONG AddRef(void);
HRESULT Clone(
 IEnumMediaTypes** ppEnum 
);
HRESULT Next(
 ULONG cMediaTypes,
 AM_MEDIA_TYPE** ppMediaTypes,
 ULONG* pcFetched 
);
HRESULT QueryInterface(
 REFIID iid,
 void** ppvObject 
);
ULONG Release(void);
HRESULT Reset(void);
HRESULT Skip(
 ULONG cMediaTypes 
);
ULONG AddRef(void);
HRESULT Clone(
 IEnumPins** ppEnum 
);
HRESULT Next(
 ULONG cPins,
 IPin** ppPins,
 ULONG* pcFetched 
);
HRESULT QueryInterface(
 REFIID iid,
 void** ppvObject 
);
ULONG Release(void);
HRESULT Reset(void);
HRESULT Skip(
 ULONG cPins 
);
CUnknown* CreateInstance(
 LPUNKNOWN pUnk,
 HRESULT* phr 
);
BOOL IsClassID(
 REFCLSID rclsid 
);
POSITION AddAfter(
 POSITION p,
 OBJECT* pObj 
); 
BOOL AddAfter(
 POSITION pos,
 CGenericList<OBJECT>* pList 
);
POSITION AddBefore(
 POSITION p,
 OBJECT* pObj 
); 
BOOL AddBefore(
 POSITION pos,
 CGenericList<OBJECT>* pList 
);
POSITION AddHead(
 OBJECT* pObj 
); 
BOOL AddHead(
 CGenericList<OBJECT>* pList 
);
POSITION AddTail(
 OBJECT* pObj 
); 
BOOL AddTail(
 CGenericList<OBJECT>* pList 
);
CGenericList(
 TCHAR* pName,
 INT iItems,
 BOOL bLock,
 BOOL bAlert 
);
CGenericList(
 TCHAR* pName 
);
POSITION Find(
 OBJECT* pObj 
);
int GetCount( );
OBJECT GetHead( );
POSITION GetHeadPosition( );
POSITION GetTailPosition( );
TCHAR* operator[ ](
 const GUID& guid 
);
Class ClearTypeBlt : public GPE
SCODE ClearTypeBltDst16 (GPEBltParms *);
SCODE ClearTypeBltDst24 (GPEBltParms *);
SCODE ClearTypeBltDst32 (GPEBltParms *);
CLoadDirectDraw(void);
LPDIRECTDRAW GetDirectDraw(void);
HRESULT IsDirectDrawLoaded(void);
BOOL IsDirectDrawVersion1(void);
HRESULT LoadDirectDraw(
 LPSTR szDevice 
);
void ReleaseDirectDraw(void);
CMediaControl(
 const TCHAR* pName,
 LPUNKNOWN pUnk 
);
HRESULT GetIDsOfNames(
 REFIID riid,
 OLECHAR** rgszNames,
 UINT cNames,
 LCID lcid,
 DISPID* rgdispid 
);
HRESULT GetTypeInfo(
 UINT itinfo,
 LCID lcid,
 ITypeInfo** pptinfo 
);
HRESULT GetTypeInfoCount(
UINT* pctinfo 
);
HRESULT Invoke(
 DISPID dispidMember,
 REFIID riid,
 LCID lcid,
 WORD wFlags,
 DISPPARAMS* pdispparams,
 VARIANT* pvarResult,
 EXCEPINFO* pexcepinfo,
 UINT* puArgErr 
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
CMediaEvent(
 const TCHAR* pName,
 LPUNKNOWN pUnk 
);
HRESULT GetIDsOfNames(
 REFIID riid,
 OLECHAR** rgszNames,
 UINT cNames,
 LCID lcid,
 DISPID* rgdispid 
);
HRESULT GetTypeInfo(
 UINT itinfo,
 LCID lcid,
 ITypeInfo** pptinfo 
);
HRESULT GetTypeInfoCount(
 UINT* pctinfo 
);
HRESULT Invoke(
 DISPID dispidMember,
 REFIID riid,
 LCID lcid,
 WORD wFlags,
 DISPPARAMS* pdispparams,
 VARIANT* pvarResult,
 EXCEPINFO* pexcepinfo,
 UINT* puArgErr 
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
CMediaPosition(
 const TCHAR* pName,
 LPUNKNOWN pUnk 
);
HRESULT GetIDsOfNames(
 REFIID riid,
 OLECHAR** rgszNames,
 UINT cNames,
 LCID lcid,
 DISPID* rgdispid 
);
HRESULT GetTypeInfo(
 UINT itinfo,
 LCID lcid,
 ITypeInfo** pptinfo
);
HRESULT GetTypeInfoCount(
 UINT* pctinfo 
);
HRESULT Invoke(
 DISPID dispidMember,
 REFIID riid,
 LCID lcid,
 WORD wFlags,
 DISPPARAMS* pdispparams,
 VARIANT* pvarResult,
 EXCEPINFO* pexcepinfo,
 UINT* puArgErr 
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
ULONG AddRef(void);
CMediaSample(
 TCHAR* pName,
 CBaseAllocator* pAllocator,
 HRESULT* phr,
 LPBYTE pBuffer = NULL,
 LONG length = 0 
);
HRESULT GetActualDataLength(void);
HRESULT GetMediaType(
 AM_MEDIA_TYPE** ppMediaType 
);
HRESULT GetPointer(
 BYTE** ppBuffer 
);
HRESULT GetSize(void);
HRESULT GetTime(
 REFERENCE_TIME* pTimeStart,
 REFERENCE_TIME* pTimeEnd 
);
HRESULT IsDiscontinuity(void);
HRESULT IsPreroll(void);
HRESULT IsSyncPoint(void);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
HRESULT QueryInterface(
 REFIID iid,
 void** ppvObject 
);
ULONG Release(void);
HRESULT SetActualDataLength(
 long lLen 
);
HRESULT SetDiscontinuity(
 BOOL bDiscont 
);
HRESULT SetMediaType(
 AM_MEDIA_TYPE* pMediaType 
);
SetPointer(
 BYTE* ptr,
 LONG cBytes 
);
HRESULT SetPreroll(
 BOOL bIsPreroll 
);
HRESULT SetSyncPoint(
 BOOL bIsSyncPoint 
);
HRESULT SetTime(
 REFERENCE_TIME* pTimeStart,
 REFERENCE_TIME* pTimeEnd 
);
void InitMediaType( );
BOOL IsFixedSize( ) const;
BOOL IsPartiallySpecified( ) const;
BOOL IsTemporalCompressed( ) const;
BOOL IsValid( ) const;
BOOL MatchesPartial(
 const CMediaType* ppartial
) const;
BOOL operator!=(
 const CMediaType& rt
) const;
inline BOOL operator==(const CMediaType& rt) const;
void ResetFormatBuffer( );
BOOL SetFormat(
 BYTE* pFormat,
 ULONG length 
);
void SetFormatType(
 const GUID* pformattype 
);
void SetSampleSize(
 ULONG sz 
);
void SetSubtype(
 const GUID* psubtype 
);
void SetTemporalCompression(
 BOOL bCompressed 
);
void SetType(
 const GUID* ptype 
);
void SetVariableSize( );
HRESULT Alloc(void);
CMemAllocator(
 TCHAR* pName,
 LPUNKNOWN lpUnk,
 HRESULT* phr 
);
static CUnknown* CreateInstance(
 LPUNKNOWN pUnk,
 HRESULT* phr 
);
HRESULT Free(void);
void ReallyFree (void);
HRESULT SetProperties(
 ALLOCATOR_PROPERTIES* pRequest,
 ALLOCATOR_PROPERTIES* pActual 
);
CMsg(
 UINT u,
 DWORD dw,
 LPVOID lp,
 CAMEvent *pEvent 
);
BOOL CreateThread( );
HANDLE GetThreadHandle( );
DWORD GetThreadID( );
void virtual GetThreadMsg(
 CMsg* msg 
);
int GetThreadPriority( );
virtual void OnThreadInit( );
void PutThreadMsg(
 UINT uMsg,
 DWORD dwMsgFlags,
 LPVOID lpMsgParam,
 CAMEvent* pEvent = NULL 
);
DWORD ResumeThread( );
BOOL SetThreadPriority(
 int nPriority 
);
DWORD SuspendThread( );
virtual LRESULT ThreadMessageProc(
 UINT uMsg,
 DWORD dwFlags,
 LPVOID lpParam,
 CAMEvent* pEvent 
);
BOOL WaitForThreadExit(
 LPDWORD lpdwExitCode 
);
operator double();
BOOL operator!=(
 const COARefTime& rt 
);
COARefTime operator*(
 LONG l 
);
COARefTime operator/(
 LONG l 
);
BOOL operator < (
 const COARefTime& rt 
);
BOOL operator <= (
 const COARefTime& rt 
);
BOOL operator==(
 const COARefTime& rt 
);
BOOL operator > (
 const COARefTime& rt 
);
BOOL operator >= (
 const COARefTime& rt 
);
void BeginFlush( );
COutputQueue( 
IPin *pInputPin, 
HRESULT *phr, 
BOOL bAuto = TRUE, 
BOOL bQueue = TRUE, 
LONG lBatchSize, 
BOOL bBatchExact, 
LONG lListSize, 
DWORD dwPriority );
void EndFlush( );
void EOS( );
void FreeSamples( );
static DWORD WINAPI InitialThreadProc(
 LPVOID pv 
);
BOOL IsIdle( );
BOOL IsQueued( );
BOOL IsSpecialSample(
 IMediaSample* pSample 
);
HRESULT NewSegment(
 REFERENCE_TIME tStart,
 REFERENCE_TIME tStop,
 double dRate 
);
void NotifyThread( );
void QueueSample(
 IMediaSample* pSample 
);
HRESULT Receive(
 IMediaSample* pSample 
);
HRESULT ReceiveMultiple(
 IMediaSample** ppSamples,
 long nSamples,
 long* nSamplesProcessed 
);
void Reset( );
void SendAnyway( );
DWORD ThreadProc( );
CPersistStream(
 IUnknown* pUnk,
 HRESULT* phr
);
HRESULT GetClassID(
 CLSID* pClsID
);
HRESULT GetSizeMax(
 ULARGE_INTEGER* pcbSize
);
virtual DWORD GetSoftwareVersion(void);
HRESULT IsDirty(void);
virtual HRESULT ReadFromStream(
 IStream* pStream
);
HRESULT SetDirty(
 BOOL fDirty
);
virtual int SizeMax(void);
virtual HRESULT WriteToStream(
 IStream* pStream
);
HRESULT CanSeekBackward(
 LONG* pCanSeekBackward 
);
HRESULT CanSeekForward(
 LONG* pCanSeekForward 
);
HRESULT CheckCapabilities(
 DWORD* pCapabilities 
);
CPosPassThru(
 const TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr,
 IPin* pPin 
);
HRESULT ForceRefresh( );
HRESULT get_CurrentPosition(
 REFTIME* pllTime 
);
HRESULT get_Duration(
 REFTIME* plength 
);
HRESULT get_PrerollTime(
 REFTIME* pllTime 
);
HRESULT get_Rate(
 double* pdRate 
);
HRESULT get_StopTime(
 REFTIME* pllTime 
);
HRESULT GetCapabilities(
 DWORD* pCapabilities 
);
HRESULT GetRate(
 double* pdRate 
);
HRESULT GetTimeFormat(
 const GUID* pFormat 
);
HRESULT IsFormatSupported(
 const GUID* pFormat 
);
HRESULT IsUsingTimeFormat(
 const GUID* pFormat 
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
HRESULT put_CurrentPosition(
 REFTIME llTime 
);
HRESULT put_PrerollTime(
 REFTIME llTime 
);
HRESULT put_Rate(
 double dRate 
);
HRESULT put_StopTime(
 REFTIME llTime 
);
HRESULT QueryPreferredFormat(
 GUID* pFormat 
);
HRESULT SetRate(
 double dRate 
);
HRESULT SetTimeFormat(
 const GUID* pFormat 
);
HRESULT Active(void);
virtual HRESULT BeginFlush(void);
HRESULT Connect(
 Iunknown *pUnk,
 ImemAllocator *pAlloc,
 BOOL bSync 
);
CPullPin(void);
virtual HRESULT DecideAllocator(
 ImemAllocator* pAlloc,
 ALLOCATOR_PROPERTIES* pProps 
);
HRESULT Disconnect(void);
HRESULT Duration(
 REFERENCE_TIME* ptDuration 
);
virtual HRESULT EndFlush(void) PURE;
virtual HRESULT EndOfStream(void) PURE;
IAsyncReader *GetReader(void);
HRESULT Inactive(void);
virtual void OnError(
 HRESULT hr
) PURE;
virtual HRESULT Receive(
 IMediaSample* pSample
) PURE;
HRESULT Seek(
 REFERENCE_TIME tStart,
 REFERENCE_TIME tStop 
);
CQueue(
 int n 
);
CQueue( );
T GetQueueObject( );
void PutQueueObject(
 T object 
);
CRefTime( );
CRefTime(
 LONG msecs 
);
CRefTime(
 REFERENCE_TIME rt 
);
LONG Millisecs(void);
HRESULT Active( );
HRESULT BeginFlush( );
HRESULT BreakConnect( );
HRESULT CheckMediaType(
 const CMediaType* pmt 
);
HRESULT CompleteConnect(
 IPin* pReceivePin 
);
CRendererInputPin(
 CBaseRenderer* pRenderer,
 HRESULT* phr,
 LPCWSTR Name 
);
HRESULT EndFlush(void);
HRESULT EndOfStream(void);
HRESULT Inactive(void);
HRESULT QueryId(
 LPWSTR* Id 
);
HRESULT Receive(
 IMediaSample* pMediaSample 
);
HRESULT SetMediaType(
const CMediaType *pmt 
);
CRendererPosPassThru(
 const TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr,
 IPin* pPin 
);
HRESULT ResetMediaTime(void);
HRESULT AddPin(
 CSourceStream* pStream 
);
CSource(
 TCHAR* pName,
 LPUNKNOWN lpunk,
 CLSID clsid 
);
int FindPinNumber(
 IPin* iPin 
);
CBasePin* GetPin(
 int n 
);
int GetPinCount(void);
CCritSec* pStateLock(void);
HRESULT RemovePin(
 CSourceStream* pStream 
);
virtual HRESULT ChangeRate( ) PURE;
virtual HRESULT ChangeStart( ) PURE;
virtual HRESULT ChangeStop( ) PURE;
CSourcePosition(
 const TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr,
 CCritSec* pLock 
);
HRESULT get_CurrentPosition(
 REFTIME* pllTime 
);
HRESULT get_Duration(
 REFTIME* plength 
);
HRESULT get_PrerollTime(
 REFTIME* pllTime 
);
HRESULT get_Rate(
 double* pdRate 
);
HRESULT get_StopTime(
 REFTIME* pllTime 
);
HRESULT put_CurrentPosition(
 REFTIME llTime 
);
HRESULT put_PrerollTime(
 REFTIME llTime 
);
HRESULT put_Rate(
 double dRate 
);
HRESULT put_StopTime(
 REFTIME llTime 
);
virtual HRESULT ChangeRate( ) PURE;
virtual HRESULT ChangeStart( ) PURE;
virtual HRESULT ChangeStop( ) PURE;
HRESULT CheckCapabilities(
 DWORD* pCapabilities 
);
CSourceSeeking(
 const TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr,
 CCritSec* pLock 
);
HRESULT GetCapabilities(
 DWORD* pCapabilities 
);
HRESULT GetRate(
 double* pdRate 
);
HRESULT GetTimeFormat(
 const GUID* pFormat 
);
HRESULT IsFormatSupported(
 const GUID* pFormat 
);
HRESULT IsUsingTimeFormat(
 const GUID* pFormat 
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
HRESULT QueryPreferredFormat(
 GUID* pFormat 
);
HRESULT SetRate(
 double dRate 
);
HRESULT SetTimeFormat(
 const GUID* pFormat 
);
HRESULT Active(void);
virtual HRESULT CheckMediaType(
 CMediaType* pMediaType 
);
BOOL CheckRequest(
 Command* pCom 
);
CSourceStream(
 TCHAR*pObjectName,
 HRESULT*phr,
 CSource*pms,
 LPCWSTR pName 
);
virtual HRESULT DoBufferProcessingLoop(void);
HRESULT Exit(void);
virtual HRESULT FillBuffer(
 IMediaSample* pSample
) PURE;
virtual HRESULT GetMediaType(
 int iPosition,
 CMediaType* pMediaType 
);
virtual HRESULT GetMediaType(
 CMediaType* pMediaType 
);
Command GetRequest(void);
HRESULT Inactive(void);
HRESULT Init(void);
virtual HRESULT OnThreadCreate(void);
virtual HRESULT OnThreadDestroy(void);
virtual HRESULT OnThreadStartPlay(void);
HRESULT Pause(void);
HRESULT Run(void);
HRESULT Stop(void);
virtual DWORD ThreadProc(void);
static CUnknown *WINAPI CreateInstance(
 LPUNKNOWN pUnk,
 HRESULT* phr 
);
CSystemClock(
 TCHAR* pName,
 LPUNKNOWN pUnk,
 HRESULT* phr 
);
HRESULT GetClassID(
 CLSID* pClsID 
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
virtual HRESULT AlterQuality(
 Quality q 
);
virtual HRESULT BeginFlush( );
virtual HRESULT BreakConnect(
PIN_DIRECTION dir 
);
virtual HRESULT CheckConnect(
 PIN_DIRECTION dir,
 IPin* pPin 
);
virtual HRESULT CheckInputType(
 const CmediaType* mtIn
) PURE;
virtual HRESULT CheckTransform(
 const CMediaType* mtIn,
 const CMediaType* mtOut
) PURE;
virtual HRESULT CompleteConnect(
 PIN_DIRECTION direction,
 IPin* pReceivePin 
);
CTransformFilter(
 TCHAR *pObjectName,
 LPUNKNOWN lpUnk,
 CLSID clsid 
);
virtual HRESULT DecideBufferSize(
 IMemAllocator* pAlloc,
 ALLOCATOR_PROPERTIES* ppropInputRequest
) PURE;
virtual HRESULT EndFlush( );
virtual HRESULT EndOfStream( );
HRESULT FindPin(
 LPCWSTR Id,
 IPin** ppPin 
);
virtual HRESULT GetMediaType(
 int iPosition,
 CMediaType* pMediaType
) PURE;
virtual CBasePin *GetPin(
 int n
);
virtual int GetPinCount( );
virtual HRESULT NewSegment(
 REFERENCE_TIME tStart,
 REFERENCE_TIME tStop,
 double dRate
);
HRESULT Pause (void);
HRESULT Receive(
 IMediaSample* pSample
);
virtual void RegisterPerfId( );
virtual HRESULT SetMediaType(
 PIN_DIRECTION direction,
 const CMediaType* pmt
) PURE;
virtual HRESULT StartStreaming( );
HRESULT Stop(void);
virtual HRESULT StopStreaming( );
virtual HRESULT Transform(
 IMediaSample* pIn,
 IMediaSample* pOut
) PURE;
HRESULT BeginFlush(void);
HRESULT BreakConnect( );
HRESULT CheckConnect(
 IPin* pPin 
);
HRESULT CheckMediaType(
 const CmediaType* mtIn 
);
HRESULT CheckStreaming( );
HRESULT CompleteConnect(
 IPin* pReceivePin 
);
CTransformInputPin(
 TCHAR* pObjectName,
 CTransformFilter* pTransformFilter,
 HRESULT* phr,
 LPCWSTR pName 
);
HRESULT EndFlush(void);
HRESULT EndOfStream(void);
HRESULT NewSegment(
 REFERENCE_TIME tStart,
 REFERENCE_TIME tStop,
 double dRate 
);
HRESULT QueryId(
 LPWSTR* Id 
);
HRESULT Receive(
 IMediaSample* pSample 
);
HRESULT SetMediaType(
 const CmediaType* mt 
);
HRESULT BreakConnect( );
HRESULT CheckConnect(
 IPin* pPin 
);
HRESULT CheckMediaType(
 const CmediaType* mtIn 
);
HRESULT CompleteConnect(
 IPin* pReceivePin 
);
CTransformOutputPin(
 TCHAR* pObjectName,
 CTransformFilter* pTransformFilter,
 HRESULT* phr,
 LPCWSTR pName 
);
HRESULT DecideBufferSize(
 IMemAllocator* pAlloc,
 ALLOCATOR_PROPERTIES* ppropInputRequest 
);
HRESULT GetMediaType(
 int iPosition,
 CMediaType* pMediaType 
);
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
HRESULT Notify(
 IBaseFilter* pSelf,
 Quality q 
);
HRESULT QueryId(
 LPWSTR* Id 
);
HRESULT SetMediaType(
 const CMediaType* mt 
);
HRESULT CheckTransform(
 const CMediaType* mtIn,
 const CMediaType* mtOut 
);
HRESULT CompleteConnect(
 PIN_DIRECTION direction,
 IPin* pReceivePin 
);
CTransInPlaceFilter(
 TCHAR* pObjectName,
 LPUNKNOWN lpUnk,
 REFCLSID clsid,
 HRESULT* phr 
);
HRESULT DecideBufferSize(
 IMemAllocator* pAlloc,
 ALLOCATOR_PROPERTIES* pProperties 
);
HRESULT GetMediaType(
 int iPosition,
 CMediaType* pMediaType 
);
virtual CBasePin* GetPin(
 int n 
);
HRESULT Receive(
 IMediaSample* pSample 
);
virtual void RegisterPerfId( );
virtual HRESULT Transform(
 IMediaSample* pSample
) PURE;
HRESULT CheckMediaType(
 const CMediaType* pmt 
);
CTransInPlaceInputPin(
 TCHAR* pObjectName,
 CTransInPlaceFilter* pFilter,
 HRESULT* phr,
 LPCWSTR pName 
);
HRESULT EnumMediaTypes(
 IEnumMediaTypes** ppEnum 
);
HRESULT GetAllocator(
 IMemAllocator** ppAllocator 
);
HRESULT GetAllocatorRequirements(
 ALLOCATOR_PROPERTIES* pProps 
);
HRESULT NotifyAllocator(
 IMemAllocator* pAllocator,
 BOOL bReadOnly 
);
const BOOL ReadOnly( )
HRESULT CheckMediaType(
 const CMediaType* pmt 
);
CTransInPlaceOutputPin(
 TCHAR* pObjectName,
 CTransInPlaceFilter* pFilter,
 HRESULT* phr,
 LPCWSTR pName 
);
HRESULT DecideAllocator(
 IMemInputPin* pPin,
 IMemAllocator** ppAlloc 
);
HRESULT EnumMediaTypes(
 IEnumMediaTypes** ppEnum 
);
HRESULT ReceiveAllocator(
 IMemAllocator* pAllocator,
 BOOL bReadOnly 
);
CUnknown(
 const TCHAR* pName,
 LPUNKNOWN pUnk 
);
LPUNKNOWN GetOwner(void);
ULONG NonDelegatingAddRef( );
HRESULT NonDelegatingQueryInterface(
 REFIID riid,
 void** ppv 
);
ULONG NonDelegatingRelease( );
virtual HRESULT AlterQuality(
 Quality q 
);
CVideoTransformFilter(
 TCHAR* pName,
 LPUNKNOWN pUnk,
 REFCLSID clsid 
);
HRESULT EndFlush( );
HRESULT Receive(
 IMediaSample* pSample 
);
virtual void RegisterPerfId( );
BOOL ShouldSkipFrame(
 IMediaSample* pIn 
);
virtual HRESULT StartStreaming( );
FOURCCMap( );
FOURCCMap(
 DWORD Fourcc 
);
FOURCCMap(
 const GUID* pguid 
);
DWORD GetFOURCC(void);
void SetFOURCC(
 const GUID* pguid 
);
HRESULT IAPCSpeech::AddRef( THIS );
HRESULT IAPCSpeech::AddVMenuCommand( PIVCMDMENUW pMenu, LPTSTR szCmdString, UINT dwCmdID, DWORD dwFlags, DWORD dwVoiceCommand );
HRESULT IAPCSpeech::AddVMenuCommandFromResource( PIVCMDMENUW pVMenu, HINSTANCE hinst, PCWSTR pszMenuName, DWORD dwMenuState, DWORD dwFlag );
HRESULT IAPCSpeech::AttribGet( DWORD dwAttrib, PDWORD pdwMisc );
HRESULT IAPCSpeech::AttribGet( DWORD dwAttrib, DWORD dwMisc );
HRESULT IAPCSpeech::CreateSpkContext ( IAPCSpeech *pSpeech, DWORD dwContext, DWORD dwFlag PDWORD *pNewContext );
HRESULT IAPCSpeech::CreateVMenu( PIVOICECMDW pVCmd, VCMDNAME lpName, HINSTANCE hInst, DWORD dwCmdCnt, LPVOID pCmdTable, DWORD dwFlags, PIVCMDMENUW* ppVMenu );
HRESULT IAPCSpeech::DestroySpkContext ( DWORD dwContext, DWORD dwFlag );
HRESULT IAPCSpeech::PlaySound ( LPCWSTR lpcwSound, HMODULE hModule, DWORD dwSound, DWORD dwReserved );
HRESULT IAPCSpeech::QueryFeedbackLevel( DWORD *pKeyFeedback, DWORD *pVoiceFeedback, DWORD *pReserved, DWORD dwFlag );-
HRESULT IAPCSpeech::QueryInterface( REFIID riid, LPVOID FAR* ppvObj );
HRESULT IAPCSpeech::QuerySpeakingMode( DWORD *pdwMode );
HRESULT IAPCSpeech::QueryInterface( REFIID riid, LPVOID FAR* ppvObj );
HRESULT IAPCSpeech::Release( THIS );
HRESULT IAPCSpeech::SetMsgOptions ( DWORD dwFlags, DWORD dwVCmdOpt, DWORD dwVTxtOpt );
HRESULT IAPCSpeech::SetSpkContextRule ( DWORD dwContextID, DWORD dwFlags, LPCTSTR lpctStr1, LPCTSTR lpctStr2, LPVOID p );
HRESULT IAPCSpeech::Speak( WCHAR* pszSpeak, DWORD dwID );
HRESULT IAPCSpeech::SpeakEx( DWORD dwContext, WCHAR *pszSpeak, DWORD dwID, DWORD dwFlag, PVOID p );
HRESULT IAPCSpeech::Train( PCWSTR pszTrain, DWORD cbTrain, PCWSTR pszDisplay, DWORD cbDisplay, DWORD d1, DWORD d2 );
HRESULT IAPCSpeech::VoiceHelpStart( DWORD promptType );
HRESULT IAPCSpeech::VoiceHelpStop( DWORD dwReserved );
HRESULT get_Count( long *pcItems );
HRESULT GetFocus( IDispatch ** ppdispForm );
HRESULT Item( VARIANT index, IDispatch ** ppdispForm );
HRESULT ItemFromID( short wID, IDispatch**ppdispForm );
HRESULT SetFocus( IDispatch*pdispForm );
HRESULT ClipAndCommit( OLE_HANDLE hrgnClip );
HRESULT Commit( void );
HRESULT CommitAt( long xDest, long yDest, long xSrc, long ySrc, long dx, long dy );
HRESULT CommitFrom( long xSrc, long ySrc );
HRESULT get_AutoCommit( BOOL *pfAutoCommit, long *pxSrc, long *pySrc );
HRESULT GetDC( OLE_HANDLE *phdc, BOOL fOffScreen );
HRESULT put_AutoCommit( BOOL fAutoCommit, long xSrc, long ySrc );
HRESULT get_CharSet( BSTR *pbstr );
HRESULT get_CurChar( short *pch );
HRESULT get_ItemHeight( long *plHeight );
HRESULT get_SpinMode( short *pmode );
HRESULT NextChar( );
HRESULT PrevChar( );
HRESULT put_CharSet( BSTR bstr );
HRESULT put_CurChar( short ch );
HRESULT put_ItemHeight( long lHeight );
HRESULT put_SpinMode( short mode );
HRESULT HandleClose( IDispatch *pdispControl );
HRESULT HandleDraw( IDispatch *pdispControl, OLE_HANDLE hDC );
HRESULT HandleGotFocus( IDispatch *pdispControl );
HRESULT HandleKeyPress( IDispatch *pdispControl, long lKeyDown );
HRESULT HandleLostFocus( IDispatch *pdispControl );
HRESULT HandleMessage( IDispatch *pdispControl, long uMsg, long wParam, long lParam );
HRESULT HandleStart( IDispatch *pdispControl );
HRESULT get_ClockFormat( BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags );
HRESULT get_LabelFormat( BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags );
HRESULT put_ClockFormat( BOOL fTime, BSTR bstrFormat, LONG FormatFlags );
HRESULT put_ClockLabel( IDispatch *pdispLabel );
HRESULT put_ClockLabel0( Idispatch *pdispLabel );
HRESULT put_LabelFormat( BOOL fTime, BSTR bstrFormat, LONG FormatFlags );
HRESULT Close( void );
HRESULT Draw( OLE_HANDLE hDC );
HRESULT get_BackColor( OLE_COLOR *pclr );
HRESULT get_BackGroundBrush( OLE_HANDLE *phBrush );
HRESULT get_Border( VARIANT_BOOL *pfBorder );
HRESULT get_Caption( BSTR *pbstrCaption );
HRESULT get_ClassMsgSink( IDispatch **ppdispSink );
HRESULT get_CLSID( BSTR *pbstrCLSID );
HRESULT get_Color( int nColorIndex, OLE_COLOR *pclr );
HRESULT get_DeferDraw( BOOL *pfDeferDraw );
HRESULT get_Delegate( IDispatch **ppdispDelegate );
HRESULT get_Enabled( VARIANT_BOOL *pfEnabled );
HRESULT get_EventSink( IDispatch **ppdispSink );
HRESULT get_Font( IFontDisp **ppFontDisp );
HRESULT get_ForeColor( OLE_COLOR *pclr );
HRESULT get_HasUI( VARIANT_BOOL *pfHasUI );
HRESULT get_Height( long *pdy );
HRESULT get_ID( short *pwID );
HRESULT get_Left( long *px );
HRESULT get_NaturalSize( long *plWidth, long *plHeight);
HRESULT get_Opaque( VARIANT_BOOL *pfOpaque );
HRESULT get_Parent( IDispatch **ppdispParent );
HRESULT get_TabStop( VARIANT_BOOL *pfTabStop );
HRESULT get_Top( long *py );
HRESULT get_UserData( long *plData );
HRESULT get_Visible( VARIANT_BOOL *pfVisible );
HRESULT get_Width( long *pdx );
HRESULT GetBounds( long *plxLeft, long *plyTop, long *pldxWidth, long *pldyHeight );
HRESULT GetCommonBoolProperties( short *pwProps );
HRESULT GotFocus( void );
HRESULT HitTest( long lx, long ly );
HRESULT Init( short wID, IDispatch *pdispParent, IDispatch pdispEventSink );
HRESULT IsStarted( void );
HRESULT KeyPress( long lKeyDown );
HRESULT LostFocus( void );
HRESULT put_BackColor( OLE_COLOR clr );
HRESULT put_BackGroundBrush( OLE_HANDLE hBrush );
HRESULT put_Border( VARIANT_BOOL fBorder );
HRESULT put_Caption( BSTR bstrCaption );
HRESULT put_ClassMsgSink( IDispatch *ppdispSink );
HRESULT put_Color( int nColorIndex, OLE_COLOR clr );
HRESULT put_DeferDraw( BOOL fDeferDraw );
HRESULT put_Delegate( IDispatch *pdispDelegate );
HRESULT put_Enable( VARIANT_BOOL fEnabled );
HRESULT put_EventSink( IDispatch *pdispSink );
HRESULT put_Font( IFontDisp *pFontDisp );
HRESULT put_ForeColor( OLE_COLOR clr );
HRESULT put_Height( long dy );
HRESULT put_Left( long x );
HRESULT put_Opaque( VARIANT_BOOL fOpaque );
HRESULT put_Parent( IDispatch *pdispParent );
HRESULT put_Top( long y );
HRESULT put_UserData( long lData );
HRESULT put_Visible( VARIANT_BOOL fVisible );
HRESULT put_Width( long dx );
HRESULT PutCommonBoolProperties( short pwProps );
HRESULT ReceiveMsg( long uMsg, long wParam, long lParam );
HRESULT Redraw( void );
HRESULT SetBounds( long lxLeft, long lyTop, long ldxWidth, long ldyHeight );
HRESULT Start( void );
HRESULT get_AxisColor( OLE_COLOR *pclr );
HRESULT get_CrossHairBoxColor( OLE_COLOR *pclr );
HRESULT get_CrossHairColor( OLE_COLOR *pclr );
HRESULT get_CrossHairHilite( BOOL *pfHorz, BOOL *pfVert );
HRESULT get_CrossHairHiliteColor( OLE_COLOR *pclr );
HRESULT get_XMinus( short *pwVal );
HRESULT get_XPlus( short *pwVal );
HRESULT get_XVal( short *pwVal );
HRESULT get_YMinus( short *pwVal );
HRESULT get_YPlus( short *pwVal );
HRESULT get_YVal( short *pwVal );
HRESULT put_AxisColor( OLE_COLOR clr );
HRESULT put_CrossHairBoxColor( OLE_COLOR clr );
HRESULT put_CrossHairColor( OLE_COLOR clr );
HRESULT put_CrossHairHilite( BOOL fHorz, BOOL fVert );
HRESULT put_CrossHairHiliteColor( OLE_COLOR clr );
HRESULT put_XMinus( short wVal );
HRESULT put_XPlus( short wval );
HRESULT put_XVal( short wVal );
HRESULT put_YMinus( short wVal );
HRESULT put_YPlus( short wval );
HRESULT put_YVal( short wVal );
HRESULT Delete( void );
HRESULT get_Editing( BOOL *pfEditing );
HRESULT get_ItemWidth( long *plWidth );
HRESULT get_MaxChars( short *pwcchMax );
HRESULT get_NumChars( short *pwcch );
HRESULT get_ReadOnly( BOOL *pfReadOnly );
HRESULT get_Selection( wchar_t *pch );
HRESULT get_SelectionIndex( short *pwich );
HRESULT get_Text( BSTR *pbstr );
HRESULT get_TextPrivate( BOOL * pfTextPrivate );
HRESULT get_TrimRight( BOOL *pfTrimRight );
HRESULT Insert( short ch );
HRESULT put_Editing( BOOL fEditing );
HRESULT put_ItemWidth( long lWidth );
HRESULT put_MaxChars( short wcchMax );
HRESULT put_ReadOnly( BOOL fReadOnly );
HRESULT put_Selection( wchar_t ch );
HRESULT put_SelectionIndex( short wich );
HRESULT put_Text( BSTR bstr );
HRESULT put_TextPrivate( BOOL fTextPrivate );
HRESULT put_TrimRight( BOOL fTrimRight );
HRESULT ReceiveMsg( long uMsg, long wParam, long lParam );
HRESULT Add( IDispatch *pdispControl, short wID );
HRESULT get_Count( long *pcItems );
HRESULT get_HelpContext( BSTR *pbstrHelpFile, BSTR *pbstrHelpTopic);
HRESULT get_NavArrows ( IASUserNavArrows **ppNavArrows );
HRESULT get_Speech( IAPCSpeech **ppSpeech );
HRESULT get_Titlebar ( IASTitlebar **ppTitlebar);
HRESULT get_VoiceMenu( IUnknown **ppUnknownVoiceMenu );
HRESULT get_WaitStatus( BOOL *pfWaitStatus );
HRESULT GetFocus( IDispatch **ppdispControl );
HRESULT GetIFMDraw( IDispatch **ppdispFMDraw, long lxLeft, long lyTop, long lxWidth, long lyHeight );
HRESULT Invalidate( long xLeft, long yTop, long dxWidth, long dyHeight );
HRESULT Add( void );
HRESULT IsControlOnForm( IDispatch *pdispControl );
HRESULT Item( VARIANT index, IDispatch **ppdispControl );
HRESULT ItemFromID( short ID, IDispatch **ppdispControl );
HRESULT KillTimer( long lTimerID );
HRESULT put_HelpContext( BSTR bstrHelpFile, BSTR bstrHelpTopic);
HRESULT put_VoiceMenu( IUnknown *pUnknownVoiceMenu );
HRESULT put_WaitStatus( BOOL fWaitStatus );
HRESULT Remove( IDispatch *pdispControl );
HRESULT RemoveAll( void );
HRESULT RemoveAtIndex( long index );
HRESULT RemoveByID( short ID );
HRESULT SetFocus( IDispatch *pdispControl );
HRESULT SetFocusNext( void );
HRESULT SetFocusPrev( void );
HRESULT SetTimer( IDispatch *pdispControl, UINT dMilliSecs, long *pTimerID );
HRESULT SetZOrder( IDispatch *pdispControl, IDispatch *pdispControlAfter );
HRESULT Uninitialize( void );
HRESULT Update( void );
HRESULT get_HTML( BSTR *pbstrHTML );
HRESULT get_HTMLNotifySink ( IASHTMLControlNotifySink **ppNotify );
HRESULT get_Style( DWORD *pdwStyle );
HRESULT get_VisibleRect ( RECT *rcVisible );
HRESULT HScroll ( WPARAM wp );
HRESULT ImageFail ( DWORD dwCookie );
HRESULT JumpToAnchor ( BSTR bstrAnchor );
HRESULT put_HTML( BSTR bstrHTML );
HRESULT put_HTMLNotifySink ( IASHTMLControlNotifySink **ppNotify );
HRESULT put_Image ( DWORD dwCookie, BOOL bOwnBitmap, long lOrigHeight, long lOrigWidth, OLE_HANDLE hBitmap );
HRESULT get_Style( DWORD dwStyle );
HRESULT ScrollIntoView ( DWORD dwCookie );
HRESULT VScroll ( WPARAM wp );
HRESULT HotSpot( IASHTMLControl *pControl, BSTR bstrTarget, BSTR bstrData );
HRESULT InlineImage ( IASHTMLControl *pControl, BSTR bstrTarget, 
DWORD dwCookie );
HRESULT Meta( IASHTMLControl *pControl, BSTR bstrHTTPEQUIV, 
BSTR bstrContent );
HRESULT StoreUsed( IASHTMLControl *pControl BSTR bstrTarget int iLoop );
HRESULT Title( IASHTMLControl *pControl BSTR bstrTitle );
HRESULT Add( OLE_HANDLE hImage, OLE_HANDLE hImageMask, BSTR bstr, short wID, BOOL fBitmap );
HRESULT get_CenteredFocus ( BOOL *pfFocus );
HRESULT get_Count( long *pcItems );
HRESULT get_FocusColor ( OLE_COLOR *pclr );
HRESULT get_FocusIndex( long *pIndex );
HRESULT get_Horizontal( BOOL *pfHorizontal );
HRESULT get_ID( long index short *pwID );
HRESULT get_Image( long index OLE_HANDLE *phImage OLE_HANDLE *phImageMask BOOL *pfBitmap );
HRESULT get_ImageHeight( long *plHeight );
HRESULT get_ImageWidth( long *plWidth );
HRESULT get_ItemHeight( long *plHeight );
HRESULT get_ItemWidth( long *plWidth );
HRESULT get_MenuLabel( IDispatch **ppdispLabel );
HRESULT get_MenuWrap( BOOL *pfWrap );
HRESULT get_NonFocusImageColor( OLE_COLOR *pclr, BOOL *pfSet );
HRESULT get_Overlay( BOOL fFocus, OLE_HANDLE *phImage, OLE_HANDLE *phImageMask, BOOL *pfBitmap );
HRESULT get_OverlayOffset( BOOL fFocus, long *pleft, long *ptop );
HRESULT get_String( long index, BSTR *pbstr );
HRESULT InsertAt( long index, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BSTR bstr, short wID, BOOL fBitmap );
HRESULT put_CenteredFocus ( BOOL fFocus );
HRESULT put_FocusColor ( OLE_COLOR clr );
HRESULT put_FocusIndex( long lIndex );
HRESULT put_Horizontal( BOOL fHorizontal );
HRESULT put_ID( long index, short wID );
HRESULT put_Image( long index, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BOOL fBitmap );
HRESULT put_ImageHeight( long lHeight );
HRESULT put_ImageWidth( long lWidth );
HRESULT put_ItemHeight( long lHeight );
HRESULT put_ItemWidth( long lWidth );
HRESULT put_MenuLabel( IDispatch *pdispLabel );
HRESULT put_MenuWrap( BOOL fWrap );
HRESULT put_NonFocusImageColor( OLE_COLOR clr, BOOL fSet );
HRESULT put_Overlay( BOOL fFocus, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BOOL fBitmap );
HRESULT put_OverlayOffset( BOOL fFocus, long left, long top );
HRESULT put_String( long index, BSTR bstr );
HRESULT RemoveAtIndex( long index );
HRESULT RemoveByID( short wID );
HRESULT get_CaptionAlign ( short*pwAlign );
HRESULT get_Format( UINT *pwFormat );
HRESULT get_Image( OLE_HANDLE *phImage OLE_HANDLE *phImageMask );
HRESULT get_ImageAlignH( short*pwAlign );
HRESULT get_ImageAlignV( short *pwAlign );
HRESULT put_CaptionAlign( short wAlign );
HRESULT put_Format ( UINT wFormat );
HRESULT put_Image ( OLE_HANDLE hImage, OLE_HANDLE hImageMask, long dx, long dy, long dxWidth, long dyHeight );
HRESULT put_ImageAlignH( short wAlign );
HRESULT get_ImageAlignV( short wAlign );
HRESULT put_RamUsed( long lRamUsed );
HRESULT put_StoreUsed( long lStoreUsed );
HRESULT get_ActiveBackColor( OLE_COLOR *pclr );
HRESULT get_ActiveForeColor( OLE_COLOR *pclr );
HRESULT get_BorderColor( OLE_COLOR *pclr );
HRESULT get_CurrentTrack( unsigned char *pbcTrack );
HRESULT get_HiliteBorderColor( OLE_COLOR *pclr );
HRESULT get_InactiveBackColor( OLE_COLOR *pclr );
HRESULT get_InactiveForeColor( OLE_COLOR *pclr );
HRESULT get_ItemHeight( long *plHeight );
HRESULT get_ItemWidth( long *plWidth );
HRESULT get_NumTracks( unsigned char *pbcTracks );
HRESULT get_TrackActive( unsigned char biTrack );
HRESULT put_ActiveBackColor( OLE_COLOR clr );
HRESULT put_ActiveForeColor( OLE_COLOR clr );
HRESULT put_BorderColor( OLECOLOR clr );
HRESULT put_CurrentTrack( unsigned char bcTrack );
HRESULT put_HiliteBorderColor( OLE_COLOR clr );
HRESULT put_InactiveBackColor( OLE_COLOR clr );
HRESULT put_InactiveForeColor( OLE_COLOR clr );
HRESULT put_ItemHeight( long lHeight );
HRESULT put_ItemWidth( long lWidth );
HRESULT put_NumTracks( unsigned char bcTracks );
HRESULT put_TrackActive( unsigned char biTrack, BOOL fActive );
HRESULT Reset ( void );
HRESULT Add( long lItemId, long lType, IDispatch **ppdispItem );
HRESULT AddItemsFromResource ( HINSTANCE hinst, PCWSTR pszMenuName, DWORD dwMenuState );
HRESULT CreateItem( IASPowerListBoxItem **ppItem, long lItemId, long lType );
HRESULT FindItem( BSTR bstr, long lIndexStart, long *pIndex );
HRESULT FindItemPartial( BSTR bstr, long lIndexStart, long *pIndex );
HRESULT get_Alignment ( short *pwAlign );
HRESULT get_CenteredFocus ( BOOL *pfCenteredFocus );
HRESULT get_Circular ( BOOL *pfCircular );
HRESULT get_CommandPrompt( BSTR *pbstrCommandPrompt );
HRESULT get_Count ( long *pcItems );
HRESULT get_Edit( IDispatch **ppdispEdit );
HRESULT get_FocusId( long *plFocusId );
HRESULT get_FocusIndex( long *plFocusIndex );
HRESULT get_HiliteCaptionColor ( OLE_COLOR *pclrHiliteCaption );
HRESULT get_HiliteColor( OLE_COLOR *pclrHiliteColor );
HRESULT get_HiliteFont( IFontDisp **ppFontDisp );
HRESULT get_HiliteTextColor( OLE_COLOR *pclrHiliteText );
HRESULT get_ItemBorder( BOOL *pfItemBorder );
HRESULT get_ItemBorderColor( OLE_COLOR *pclrItemBorder );
HRESULT get_ItemCaptionColor( OLE_COLOR *pclrItemCaption );
HRESULT get_ItemHeight( long *plItemHeight );
HRESULT get_ProvideCommandDataSink( IASProvidePowerListBoxCommandData **ppSink );
HRESULT get_ReadOnly( BOOL *pfReadOnly );
HRESULT get_ScrollArrowsVisible ( BOOL *pfScrollArrowsVisible );
HRESULT get_ShowInteractionSymbols ( BOOL *pfShowInteractionSymbols );
HRESULT get_Sorted( BOOL *pfSorted );
HRESULT get_SortOrder( BOOL *pfAscending );
HRESULT get_StatusItemsImageList( OLE_HANDLE *phImage OLE_HANDLE *phImageMask short *pcImages );
HRESULT get_TitlebarUpdateMode( WORD *pwTitlebarUpdateMode );
HRESULT get_TopVisibleId( long *plTopVisibleId );
HRESULT get_TopVisibleIndex( long *plTopVisibleIndex );
HRESULT InsertAt ( long lIndex long lItemId long lType IDispatch **ppdispItem );
HRESULT ItemAt( long lIndex IDispatch **ppdispItem );
HRESULT put_Alignment ( short wAlign );
HRESULT put_CenteredFocus ( BOOL fCenteredFocus );
HRESULT put_Circular ( BOOL fCircular );
HRESULT put_CommandPrompt( BSTR bstrCommandPrompt );
HRESULT put_FocusId( long lFocusId );
HRESULT put_FocusIndex( long lFocusIndex );
HRESULT put_HiliteCaptionColor ( OLE_COLOR clrHiliteCaption );
HRESULT put_HiliteColor( OLE_COLOR clrHiliteColor );
HRESULT put_HiliteFont( IFontDisp *pFontDisp );
HRESULT put_HiliteTextColor( OLE_COLOR clrHiliteText );
HRESULT put_ItemBorder( BOOL fItemBorder );
HRESULT put_ItemBorderColor( OLE_COLOR clrItemBorder );
HRESULT put_ItemCaptionColor( OLE_COLOR clrItemCaption );
HRESULT put_ItemHeight( long lItemHeight );
HRESULT put_ProvideCommandDataSink( 
IASProvidePowerListBoxCommandData *pSink );
HRESULT put_ReadOnly( BOOL fReadOnly );
HRESULT put_ScrollArrowsVisible ( BOOL fScrollArrowsVisible );
HRESULT put_ShowInteractionSymbols ( BOOL fShowInteractionSymbols );
HRESULT put_Sorted( BOOL fSorted );
HRESULT put_SortOrder( BOOL fAscending );
HRESULT put_StatusItemsImageList( OLE_HANDLE hImage, 
OLE_HANDLE hImageMask, short cImages );
HRESULT put_TitlebarUpdateMode( WORD wTitlebarUpdateMode );
HRESULT put_TopVisibleId( long lTopVisibleId );
HRESULT put_TopVisibleIndex( long lTopVisibleIndex );
HRESULT Remove( long lItemId );
HRESULT RemoveAll( void );
HRESULT RemoveAt( long lIndex );
HRESULT get_CharSet( BSTR *pbstrCharSet );
HRESULT get_MaxChars( short *wcchMax );
HRESULT get_Text( BSTR *pbstrText );
HRESULT put_CharSet( BSTR bstrCharSet );
HRESULT put_MaxChars( short wcchMax );
HRESULT put_Text( BSTR bstrText );
HRESULT get_Circular( BOOL *pfCircular );
HRESULT get_Flags( short *pwFlags );
HRESULT get_Max( long *plMax );
HRESULT get_Min( long *plMin );
HRESULT get_Step( long *plStep );
HRESULT get_Units ( BSTR *pbstrUnits );
HRESULT get_Value ( long *plValue );
HRESULT put_Circular( BOOL fCircular );
HRESULT put_Flags( short wFlags );
HRESULT put_Max( long lMax );
HRESULT put_Min( long lMin );
HRESULT put_Step( long lStep );
HRESULT put_Units ( BSTR bstrUnits );
HRESULT put_Value ( long lValue );
HRESULT Item( long lItemId IDispatch **ppdispItem );
HRESULT get_Caption( BSTR *pbstrCaption );
HRESULT get_ItemData( long *plData );
HRESULT get_ItemId( long *plItemId );
HRESULT get_StatusItemsMask( long *plMask );
HRESULT get_Type( long *plType );
HRESULT put_Caption( BSTR bstrCaption );
HRESULT put_ItemData( long lData );
HRESULT put_ItemId( long lItemId );
HRESULT put_StatusItemsMask( long lMask );
HRESULT get_Circular( BOOL *pfCircular );
HRESULT get_FocusIndex( long *plFocusIndex );
HRESULT get_Items( BSTR *pbstrItems );
HRESULT get_Value( BSTR *pbstrValue );
HRESULT put_Circular( BOOL fCircular );
HRESULT put_FocusIndex( long lFocusIndex );
HRESULT put_Items( BSTR bstrItems );
HRESULT put_Value( BSTR bstrValue );
HRESULT get_Horizontal( BOOL *pfHorizontal );
HRESULT get_Max( long *plMax );
HRESULT get_Min( long *plMin );
HRESULT get_RangeColor( long lRangeIndex, OLE_COLOR *pclr );
HRESULT get_RangeCount( long *plCount );
HRESULT get_RangeValue( long lRangeIndex, long *plRangeValue );
HRESULT get_Steps( long *plStep );
HRESULT get_Value( long *plValue );
HRESULT put_Horizontal( BOOL fHorizontal );
HRESULT put_Max( long lMax );
HRESULT put_Min( long lMin );
HRESULT put_RangeColor( long lRangeIndex OLE_COLOR clr );
HRESULT put_RangeCount( long lCount );
HRESULT put_RangeValue( long lRangeIndex long lRangeValue );
HRESULT put_Steps( long lStep );
HRESULT put_Value( long lValue );
HRESULT GetCaption( long lIndex, long lItemId, long lItemData, BSTR *pbstrCaption );
HRESULT get_HotKey( long index unsigned char *pbID );
HRESULT get_ItemFlags( long index unsigned char *pbFlags );
HRESULT get_LabelBackColor( OLE_COLOR *pclr );
HRESULT get_LabelForeColor( OLE_COLOR *pclr );
HRESULT get_LabelHeight( long *plHeight );
HRESULT put_HotKey( long index unsigned char bID );
HRESULT put_ItemFlags( long index, unsigned char bFlags, unsigned char bMask );
HRESULT put_LabelBackColor( OLE_COLOR clr );
HRESULT put_LabelForeColor( OLE_COLOR clr );
HRESULT put_LabelHeight( long lHeight );
HRESULT get_HiliteColor( OLE_COLOR *pclr );
HRESULT get_Incr( LONG *plIncr );
HRESULT put_HiliteColor( OLE_COLOR pclr );
HRESULT put_Incr( LONG lIncr );
HRESULT Add( BSTR bstr, long lData );
HRESULT AddImage( OLE_HANDLE hImage, OLE_HANDLE hImageMask, long lData );
HRESULT AddWithIndex( BSTR bstr, long lData, long *lpIndex );
HRESULT get_BorderColor( OLE_COLOR *pclr );
HRESULT get_Circular ( BOOL *pfCircular );
HRESULT get_Count( long *pcItems );
HRESULT get_FocusIndex( long *plIndex );
HRESULT get_Image( long lIndex, OLE_HANDLE *phImage, OLE_HANDLE *phImageMask );
HRESULT get_ItemData( long Index, long *plData );
HRESULT get_SpeechCommandId( long Index, long *plSpeechId );
HRESULT get_String( long lIndex, BSTR *pbstr );
HRESULT get_TabColor( OLE_COLOR *pclr );
HRESULT get_TabFocusBackColor( OLE_COLOR *pclr );
HRESULT get_TabFocusForeColor( OLE_COLOR *pclr );
HRESULT get_TabMinWidth( long *plMinWidth );
HRESULT get_TabTextColor( OLE_COLOR *pclr );
HRESULT get_VoiceMenu( IVCmdMenu **ppVoiceMenu );
HRESULT get_VoiceMenuActivateCommand( BSTR *pbstrCommand );
HRESULT InsertAt( long index, BSTR bstr, long lData );
HRESULT put_BorderColor( OLE_COLOR clr );
HRESULT put_Circular( BOOL fCircular );
HRESULT put_DeferredNotification( BOOL fDeferredNotification );
HRESULT put_FocusIndex( long lIndex );
HRESULT put_Image( long lIndex, OLE_HANDLE hImage, 
OLE_HANDLE hImageMask );
HRESULT put_ItemData( long Index, long lData );
HRESULT put_SpeechCommandId( long Index, long lSpeechId );
HRESULT put_String( long lIndex, BSTR bstr );
HRESULT put_TabColor( OLE_COLOR clr );
HRESULT put_TabFocusBackColor( OLE_COLOR clr );
HRESULT put_TabFocusForeColor( OLE_COLOR clr );
HRESULT put_TabMinWidth( long lMinWidth );
HRESULT put_TabTextColor( OLE_COLOR clr );
HRESULT put_VoiceMenu( IVCmdMenu *pVoiceMenu );
HRESULT put_VoiceMenuActivateCommand( BSTR bstrCommand );
HRESULT RemoveAll( );
HRESULT RemoveAt( long index );
HRESULT SpeakFocusTab( );
HRESULT get_Interval( long *plMillis );
HRESUTL get_TimerEnabled( BOOL*pfEnabled );
HRESULT put_Interval( longlMillis );
HRESULT put_TimerEnabled( BOOLfEnabled );
HRESULT get_Icon( OLE_HANDLE *phIcon );
HRESULT get_MaxTitleWidth( long *plMaxTitleWidth);
HRESULT get_StatusFlags( long *plStatusFlags );
HRESULT get_StatusImageList( OLE_HANDLE *phbmImage, OLE_HANDLE *phbmImageMask, long *pcxImage, long *pcyImage );
HRESULT get_SubCaption( BSTR *pbstrSubCaption );
HRESULT put_Icon( OLE_HANDLE hIcon );
HRESULT put_MaxTitleWidth( long lMaxTitleWidth);
HRESULT put_StatusFlags( long lStatusFlags );
HRESULT put_StatusImageList( OLE_HANDLE hbmImage, OLE_HANDLE hbmImageMask, long cxImage, long cyImage );
HRESULT put_SubCaption( BSTR bstrSubCaption );
HRESULT get_NavState( long *plNavState );
HRESULT put_NavState( long lNavState );
HRESULT QueryFormForNavState( );
HRESULT get_Inverted( BOOL *pfInverted );
HRESULT get_Mirrored( BOOL *pfMirrored );
HRESULT put_Inverted( BOOL fInverted );
HRESULT put_Mirrored( BOOL fMirrored );
HRESULT SendMessage(
 UINT uMsg,
 DWORD dw1,
 DWORD dw2
);
HRESULT IBlockFormats::get_Count(long *p);
HRESULT Item( 
 VARIANT *pvarIndex, 
 BSTR *pbstrBlockFormat 
);
HRESULT GetBufferingDepth(
 REFERENCE_TIME* ptStop
);
HRESULT SetBufferingDepth(
 const REFERENCE_TIME* ptStop
);
HRESULT SetUIHandler( 
 IDocHostUIHandler *pUIHandler 
);
HRESULT GetDisplayGravity( 
 DISPLAY_GRAVITY *peGravity 
);
HRESULT GetFlowElement( 
 IHTMLElement **ppLayoutElement 
);
HRESULT GetLineInfo( 
 ILineInfo **ppLineInfo 
);
HRESULT GetPointerGravity( 
 POINTER_GRAVITY *peGravity 
);
HRESULT IsAtBOL( 
 BOOL *pfBOL 
);
HRESULT IsEqualTo( 
 IDisplayPointer *pDispPointer, 
 BOOL *pfIsEqual 
);
HRESULT IsLeftOf( 
 IDisplayPointer *pDispPointer, 
 BOOL *pfIsLeftOf 
);
HRESULT IsPositioned( 
 BOOL *pfPositioned 
);
HRESULT IsRightOf( 
 IDisplayPointer *pDispPointer, 
 BOOL *pfIsLeftOf 
);
HRESULT MoveToMarkupPointer( 
 IMarkupPointer *pPointer, 
 IDisplayPointer *pDispLineContext 
);
HRESULT MoveToPoint( 
 POINT ptPoint, 
 COORD_SYSTEM eCoordSystem, 
 IHTMLElement *pElementContext, 
 DWORD dwHitTestOptions, 
 DWORD *pdwHitTestResults 
);
HRESULT MoveToPointer( 
 IDisplayPointer *pDispPointer 
);
HRESULT MoveUnit( 
 DISPLAY_MOVEUNIT eMoveUnit, 
 LONG lXPos 
);
HRESULT PositionMarkupPointer( 
 IMarkupPointer *pMarkupPointer 
);
HRESULT QueryBreaks( 
 DWORD *pdwBreaks 
);
HRESULT ScrollIntoView(VOID);
HRESULT SetDisplayGravity( 
 DISPLAY_GRAVITY eGravity 
);
HRESULT SetPointerGravity( 
 POINTER_GRAVITY eGravity 
);
HRESULT Unposition(VOID);
HRESULT CreateDisplayPointer( 
 IDisplayPointer **ppDispPointer 
);
HRESULT GetCaret( 
 IHTMLCaret **ppCaret 
);
HRESULT GetComputedStyle( 
 IMarkupPointer *pPointer, 
 IHTMLComputedStyle **ppComputedStyle 
);
HRESULT HasFlowLayout( 
 IHTMLElement *pIElement, 
 BOOL *pfHasFlowLayout 
);
HRESULT ScrollRectIntoView( 
 IHTMLElement *pIElement, 
 RECT rect 
);
HRESULT TransformPoint( 
 POINT *pPoint, 
 COORD_SYSTEM eSource, 
 COORD_SYSTEM eDestination, 
 IHTMLElement *pIElement 
);
HRESULT TransformRect( 
 RECT *pRect, 
 COORD_SYSTEM eSource, 
 COORD_SYSTEM eDestination, 
 IHTMLElement *pIElement 
);
HRESULT ShowHelp( 
 HWND hwnd, 
 LPOLESTR pszHelpFile, 
 UINT uCommand, 
 DWORD dwData, 
 POINT ptMouse, 
 IDispatch *pDispatchObjectHit 
);
HRESULT ShowMessage( 
 HWND hwnd, 
 LPOLESTR lpstrText, 
 LPOLESTR lpstrCaption, 
 DWORD dwType, 
 LPOLESTR lpstrHelpFile, 
 DWORD dwHelpContext, 
 LRESULT *plResult 
);
HRESULT GetOverrideKeyPath( 
 LPOLESTR *pchKey, 
 DWORD dw 
);
HRESULT EnableModeless( 
 BOOL fEnable 
);
HRESULT FilterDataObject( 
 IDataObject *pDO, 
 IDataObject **ppDORet 
);
HRESULT GetDropTarget( 
 IDropTarget *pDropTarget, 
 IDropTarget **ppDropTarget 
);
HRESULT GetExternal( 
 IDispatch **ppDispatch 
);
HRESULT GetHostInfo( 
 DOCHOSTUIINFO *pInfo 
);
HRESULT GetOptionKeyPath( 
 LPOLESTR *pchKey, 
 DWORD dw 
);
HRESULT HideUI(VOID);
HRESULT OnDocWindowActivate( 
 BOOL fActivate 
);
HRESULT OnFrameWindowActivate( 
 BOOL fActivate 
);
HRESULT ResizeBorder( 
 LPCRECT prcBorder, 
 IOleInPlaceUIWindow *pUIWindow, 
 BOOL fFrameWindow 
);
HRESULT ShowContextMenu( 
 DWORD dwID, 
 POINT *ppt, 
 IUnknown *pcmdtReserved, 
 IDispatch *pdispReserved 
);
HRESULT ShowUI( 
 DWORD dwID, 
 IOleInPlaceActiveObject *pActiveObject, 
 IOleCommandTarget *pCommandTarget, 
 IOleInPlaceFrame *pFrame, 
 IOleInPlaceUIWindow *pDoc 
);
HRESULT TranslateAccelerator( 
 LPMSG lpMsg, 
 const GUID *pguidCmdGroup, 
 DWORD nCmdID 
);
HRESULT TranslateUrl( 
 DWORD dwTranslate, 
 OLECHAR *pchURLIn, 
 OLECHAR **ppchURLOut 
);
HRESULT UpdateUI(VOID);
HRESULT Close( );
HRESULT CreateCaptureBuffer( 
LPWAVEFORMATEX pwfx, 
DWORD dwFlags, 
DWORD dwCardAddress, 
LPDWORD pdwcbBufferSize, 
LPBYTE *ppbBuffer, 
LPVOID *ppvObj );
HRESULT GetCaps( 
PDSDRIVERCAPS pDsDrvCaps );
HRESULT GetDriverDesc( 
PDSDRIVERDESC pDsDriverDesc );
HRESULT Open( );
HRESULT GetCurrentPosition( 
LPDWORD lpdwCurrentCaptureCursor, 
LPDWORD lpdwCurrentWriteCursor );
HRESULT GetStatus( 
LPDWORD lpdwStatus );
HRESULT Lock( 
LPLPVOID ppvAudio1, 
LPDWORD pdwLen1, 
LPLPVOID ppvAudio2, 
LPDWORD pdwLen2, 
DWORD dwWritePosition, 
DWORD dwWriteLen, 
DWORD dwFlags );
HRESULT Start( 
DWORD dwFlags );
HRESULT Stop( );
HRESULT Unlock( 
LPVOID pvAudio1, 
DWORD dwLen1, 
LPVOID pvAudio2, 
DWORD dwLen2 );
HRESULT Close( );
HRESULT CreateSoundBuffer( 
LPWAVEFORMATEX pwfx, 
DWORD dwFlags, 
DWORD dwCardAddress, 
LPDWORD pdwcbBufferSize, 
LPBYTE *ppbBuffer, 
LPVOID *ppvObj );
HRESULT DuplicateSoundBuffer( 
IDSDRIVERBUFFER pIDsDriverBuffer, 
LPVOID *ppv );
HRESULT GetCaps( 
PDSDRIVERCAPS pDsDrvCaps );
HRESULT GetDriverDesc( 
PDSDRIVERDESC pDsDriverDesc );
HRESULT Open( );
HRESULT GetCurrentPosition( 
LPDWORD lpdwCurrentPlayCursor, 
LPDWORD lpdwCurrentWriteCursor );
HRESULT GetStatus( 
LPDWORD lpdwStatus );
HRESULT Lock( 
LPLPVOID ppvAudio1, 
LPDWORD pdwLen1, 
LPLPVOID ppvAudio2, 
LPDWORD pdwLen2, 
DWORD dwWritePosition, 
DWORD dwWriteLen, 
DWORD dwFlags );
HRESULT Play( 
DWORD dwReserved1, 
DWORD dwReserved2, 
DWORD dwFlags );
HRESULT SetFormat( 
LPWAVEFORMATEX pwfxToSet );
HRESULT SetFrequency( 
DWORD dwFrequency );
HRESULT SetPosition( 
DWORD dwNewPosition );
HRESULT SetVolumePan( 
PDSVOLUMEPAN pDsVolumePan );
HRESULT Stop( );
HRESULT Unlock( 
LPVOID pvAudio1, 
DWORD dwLen1, 
LPVOID pvAudio2, 
DWORD dwLen2 );
HRESULT Pause(
 BOOL bOn
);
HRESULT CleanupOrphanedRecordings(
 LPCOLESTR pszDirName
);
HRESULT DeleteRecording(
 LPCOLESTR pszFileName
);
HRESULT Detach(VOID);
HRESULT Init( 
 IElementBehaviorSite *pBehaviorSite 
);
HRESULT Notify( 
 LONG lEvent, 
 VARIANT *pVar 
);
HRESULT GetCategory( 
 LPOLESTR **ppchCategory 
);
HRESULT FindBehavior( 
 BSTR bstrBehavior, 
 BSTR bstrBehaviorUrl, 
 IElementBehaviorSite *pSite, 
 IElementBehavior **ppBehavior 
);
HRESULT GetFocusRect( 
 RECT *pRect 
);
HRESULT GetTextDescent( 
 LONG *plDescent 
);
HRESULT GetLayoutInfo( 
 LONG *plLayoutInfo 
);
HRESULT GetPosition( 
 LONG lFlags, 
 POINT *pptTopLeft 
);
HRESULT GetSize( 
 LONG dwFlags, 
 SIZE sizeContent, 
 POINT *pptTranslateBy, 
 POINT *pptTopLeft, 
 SIZE *psizeProposed 
);
HRESULT MapSize( 
 SIZE *psizeIn, 
 RECT *prcOut 
);
HRESULT Draw( 
 HDC hdc, 
 LONG lLayer, 
 RECT *pRect, 
 IUnknown *pReserved 
);
HRESULT GetRenderInfo( 
 LONG *plRenderInfo 
);
HRESULT HitTestPoint( 
 POINT *pPoint, 
 IUnknown *pReserved, 
 BOOL *pbHit 
);
HRESULT GetElement( 
 IHTMLElement **ppElement 
);
HRESULT GetRelatedBehaviors( 
 LONG lDirection, 
 LPOLESTR pchCategory, 
 IEnumUnknown **ppEnumerator 
);
HRESULT GetFontInfo( 
 LOGFONTW *plf 
);
HRESULT GetMediaResolution( 
 SIZE *psizeResolution 
);
HRESULT InvalidateLayoutInfo(VOID);
HRESULT InvalidateSize(VOID);
HRESULT GetDefaults( 
 IHTMLElementDefaults **ppDefaults 
);
HRESULT CreateEventObject( 
 IHTMLEventObj **ppEventObject 
);
HRESULT FireEvent( 
 LONG lCookie, 
 IHTMLEventObj *pEventObject 
);
HRESULT GetEventCookie( 
 LPOLESTR pchEvent, 
 LONG *plCookie 
);
HRESULT RegisterEvent( 
 LPOLESTR pchEvent, 
 LONG lFlags, 
 LONG *plCookie 
);
HRESULT RegisterName( 
 LPOLESTR pchName 
);
HRESULT RegisterUrn( 
 LPOLESTR pchUrn 
);
HRESULT Invalidate( 
 RECT *pRect 
);
HRESULT InvalidateRenderInfo(VOID);
HRESULT InvalidateStyle(VOID);
HRESULT GetSubmitInfo( 
 IHTMLSubmitData *pSubmitData 
);
HRESULT Reset(VOID);
HRESULT AddTag( 
 BSTR bstrTagName, 
 LONG lFlags 
);
HRESULT CreateWithImplementation( 
 IElementNamespace *pNamespace, 
 BSTR bstrImplementation 
);
HRESULT Create( 
 IElementNamespace *pNamespace 
);
HRESULT Resolve( 
 BSTR bstrNamespace, 
 BSTR bstrTagName, 
 BSTR bstrAttrs, 
 IElementNamespace *pNamespace 
);
HRESULT AddNamespace( 
 BSTR bstrNamespace, 
 BSTR bstrUrn, 
 LONG lFlags, 
 VARIANT *pvarFactory 
);
HRESULT GetElement( 
 IHTMLElement **ppIElement 
);
HRESULT IsPrimary( 
 BOOL *pfPrimary 
);
HRESULT SetPrimary( 
 BOOL fPrimary 
);
HRESULT get_Count( long *pcItems );
HRESULT GetFocus( IDispatch **ppdispfmManage );
HRESULT Item( VARIANT index, IDispatch **ppdisp );
HRESULT SetFocus( IDispatch *pdispfmManage );
HRESULT ClipAndCommit( OLE_HANDLE hDC, OLE_HANDLE hRgnClip );
HRESULT Commit( OLE_HANDLE hDC );
HRESULT GetDC( OLE_HANDLE *phDC );
HRESULT GetDeviceCaps( long index, long *plDeviceCap );
HRESULT ReleaseDC( OLE_HANDLE hDC );
HRESULT CloseAppByName( BSTR bstrAppName, BOOL fTerminate );
HRESULT DeregisterStartedApplication( OLE_HANDLE hFC, BSTR bstrAppName );
HRESULT fmMessageBox( BSTR bstrMsg, BSTR bstrCaption, LONG uType, LONG Flags, LONG *pRes );
HRESULT fmStartHelp( BSTR bstrFileName, DWORD dwFlags, DWORDdwTopicID );
HRESULT fmStopHelp( );
HRESULT fmStopMessageBox( );
HRESULT fmVerifyLoginState( BSTR bstrTitle, BOOL fDoLogin, BOOL fKeepFocusOnFail, BOOL *pfLoggedIn);
HRESULT get_AppName( BSTR *pbstrAppname );
HRESULT get_AppSmallIcon( OLE_HANDLE *phSmallIcon );
HRESULT get_ClassMsgSink( IDispatch **ppdispSink );
HRESULT get_EventSink( IDispatch **ppdispSink );
HRESULT get_HelpContext( BSTR *pbstrHelpFile, BSTR *pbstrHelpTopic );
HRESULT get_Menu( IDispatch **ppdispMenu );
HRESULT get_MenuTitlebar( IASTitlebar **ppTitlebar );
HRESULT get_MenuVisible( BOOL *pfVisible );
HRESULT get_Parent( IDispatch **ppdispParent );
HRESULT get_Speech( IAPCSpeech **ppSpeech );
HRESULT GetAppAlertState( OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, BOOL *pfAlert, LONG *pAlertVal );
HRESULT GetFormsContextHandle( OLE_HANDLE *phFC );
HRESULT LoadFormResource( OLE_HANDLE hFC, long wRsrcID, IDispatch **ppForm, IDispatch *pDispSink );
HRESULT LoadMenuResource(OLE_HANDLE hFC, long wRsrcID, IDispatch **ppMenu);
HRESULT MoveAppToForeground( LONG ProcID, LONG *pZOrder, LONG Flags );
HRESULT MoveToForeground( BOOL fThis, LONG *pZOrder );
HRESULT PostMessageToApp( long uMsg, long wParam, long lParam );
HRESULT PostMsg( long uMsg, long wParam, long lParam );
HRESULT put_AppName ( BSTR bstrAppName );
HRESULT set_AppSmallIcon( OLE_HANDLE hSmallIcon );
HRESULT put_ClassMsgSink( IDispatch *pdispSink );
HRESULT put_EventSink( IDispatch *pdispSink );
HRESULT put_HelpContext( BSTR bstrHelpFile, BSTR bstrHelpTopic );
HRESULT put_Menu( IDispatch *pdispMenu, short wID );
HRESULT put_MenuVisible( BOOL pfVisible );
HRESULT RegisterStartedApplication( OLE_HANDLE hFC BSTR bstrAppName LONG AppMsgID LONG Flags );
HRESULT RestoreAppZOrder( LONG ZOrder );
HRESULT RestoreZOrder( LONG ZOrder );
HREULT SendMsg( long uMsg, long wParam, long lParam );
HRESULT SetAppAlertState( OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, LONG AlertAction, LONG AlertVal );
HRESULT Start( IDispatch *pdispForm );
HRESULT Stop( IDispatch *pdispForm );
HRESULT StopAll( void );
HRESULT CreateFMCompatibleBitmap( OLE_HANDLE hFC, OLE_HANDLE *phBitMap, LONG Width, LONG Height );
HRESULT CreateFMCompatibleDC( OLE_HANDLE hFC, OLE_HANDLE *phDC );
HRESULT GetFMSystemFont( OLE_HANDLE hFC, BOOL fSmall, IDispatch **ppdispFont);
HRESULT GetFormDisplayCaps( OLE_HANDLE hFC, LONG nIndex, LONG *pRetInfo);
HRESULT IFontNames::get_Count(long *p);
HRESULT Item( 
 VARIANT *pvarIndex, 
 BSTR *pbstrBlockFormat 
);
HRESULT AddSegment( 
 IDisplayPointer *pDispPointerStart, 
 IDisplayPointer *pDispPointerEnd, 
 IHTMLRenderStyle *pIRenderStyle, 
 IHighlightSegment **ppISegment 
);
HRESULT MoveSegmentToPointers( 
 IHighlightSegment *pISegment, 
 IDisplayPointer *pDispPointerStart, 
 IDisplayPointer *pDispPointerEnd 
);
HRESULT RemoveSegment( 
 IHighlightSegment *pISegment 
);
HRESULT PopulateNamespaceTable(VOID);
HRESULT ShowHTMLDialog( 
 HWND hwndParent, 
 IMoniker *pMk, 
 VARIANT *pvarArgIn, 
 WCHAR *pchOptions, 
 VARIANT *pvarArgOut, 
 IUnknown *punkHost 
);
HRESULT IHTMLAnchorElement2::get_charset(BSTR *p);
HRESULT IHTMLAnchorElement2::put_charset(BSTR v);
HRESULT IHTMLAnchorElement2::get_coords(BSTR *p);
HRESULT IHTMLAnchorElement2::put_coords(BSTR v);
HRESULT IHTMLAnchorElement2::get_hreflang(BSTR *p);
HRESULT IHTMLAnchorElement2::put_hreflang(BSTR v);
HRESULT IHTMLAnchorElement2::get_shape(BSTR *p);
HRESULT IHTMLAnchorElement2::put_shape(BSTR v);
HRESULT IHTMLAnchorElement2::get_type(BSTR *p);
HRESULT IHTMLAnchorElement2::put_type(BSTR v);
HRESULT IHTMLAnchorElement::get_accessKey(BSTR *p);
HRESULT IHTMLAnchorElement::put_accessKey(BSTR v);
HRESULT blur(VOID);
HRESULT focus(VOID);
HRESULT IHTMLAnchorElement::get_hash(BSTR *p);
HRESULT IHTMLAnchorElement::put_hash(BSTR v);
HRESULT IHTMLAnchorElement::get_host(BSTR *p);
HRESULT IHTMLAnchorElement::put_host(BSTR v);
HRESULT IHTMLAnchorElement::get_hostname(BSTR *p);
HRESULT IHTMLAnchorElement::put_hostname(BSTR v);
HRESULT IHTMLAnchorElement::get_href(BSTR *p);
HRESULT IHTMLAnchorElement::put_href(BSTR v);
HRESULT IHTMLAnchorElement::get_Methods(BSTR *p);
HRESULT IHTMLAnchorElement::put_Methods(BSTR v);
HRESULT IHTMLAnchorElement::get_mimeType(BSTR *p);
HRESULT IHTMLAnchorElement::get_name(BSTR *p);
HRESULT IHTMLAnchorElement::put_name(BSTR v);
HRESULT IHTMLAnchorElement::get_nameProp(BSTR *p);
HRESULT IHTMLAnchorElement::get_onblur(VARIANT *p);
HRESULT IHTMLAnchorElement::put_onblur(VARIANT v);
HRESULT IHTMLAnchorElement::get_onfocus(VARIANT *p);
HRESULT IHTMLAnchorElement::put_onfocus(VARIANT v);
HRESULT IHTMLAnchorElement::get_pathname(BSTR *p);
HRESULT IHTMLAnchorElement::put_pathname(BSTR v);
HRESULT IHTMLAnchorElement::get_port(BSTR *p);
HRESULT IHTMLAnchorElement::put_port(BSTR v);
HRESULT IHTMLAnchorElement::get_protocol(BSTR *p);
HRESULT IHTMLAnchorElement::put_protocol(BSTR v);
HRESULT IHTMLAnchorElement::get_protocolLong(BSTR *p);
HRESULT IHTMLAnchorElement::get_rel(BSTR *p);
HRESULT IHTMLAnchorElement::put_rel(BSTR v);
HRESULT IHTMLAnchorElement::get_rev(BSTR *p);
HRESULT IHTMLAnchorElement::put_rev(BSTR v);
HRESULT IHTMLAnchorElement::get_search(BSTR *p);
HRESULT IHTMLAnchorElement::put_search(BSTR v);
HRESULT IHTMLAnchorElement::get_tabIndex(short *p);
HRESULT IHTMLAnchorElement::put_tabIndex(short v);
HRESULT IHTMLAnchorElement::get_target(BSTR *p);
HRESULT IHTMLAnchorElement::put_target(BSTR v);
HRESULT IHTMLAnchorElement::get_urn(BSTR *p);
HRESULT IHTMLAnchorElement::put_urn(BSTR v);
HRESULT IHTMLAreaElement::get_alt(BSTR *p);
HRESULT IHTMLAreaElement::put_alt(BSTR v);
HRESULT blur(VOID);
HRESULT IHTMLAreaElement::get_coords(BSTR *p);
HRESULT IHTMLAreaElement::put_coords(BSTR v);
HRESULT focus(VOID);
HRESULT IHTMLAreaElement::get_hash(BSTR *p);
HRESULT IHTMLAreaElement::put_hash(BSTR v);
HRESULT IHTMLAreaElement::get_host(BSTR *p);
HRESULT IHTMLAreaElement::put_host(BSTR v);
HRESULT IHTMLAreaElement::get_hostname(BSTR *p);
HRESULT IHTMLAreaElement::put_hostname(BSTR v);
HRESULT IHTMLAreaElement::get_href(BSTR *p);
HRESULT IHTMLAreaElement::put_href(BSTR v);
HRESULT IHTMLAreaElement::get_noHref(VARIANT_BOOL *p);
HRESULT IHTMLAreaElement::put_noHref(VARIANT_BOOL v);
HRESULT IHTMLAreaElement::get_onblur(VARIANT *p);
HRESULT IHTMLAreaElement::put_onblur(VARIANT v);
HRESULT IHTMLAreaElement::get_onfocus(VARIANT *p);
HRESULT IHTMLAreaElement::put_onfocus(VARIANT v);
HRESULT IHTMLAreaElement::get_pathname(BSTR *p);
HRESULT IHTMLAreaElement::put_pathname(BSTR v);
HRESULT IHTMLAreaElement::get_port(BSTR *p);
HRESULT IHTMLAreaElement::put_port(BSTR v);
HRESULT IHTMLAreaElement::get_protocol(BSTR *p);
HRESULT IHTMLAreaElement::put_protocol(BSTR v);
HRESULT IHTMLAreaElement::get_search(BSTR *p);
HRESULT IHTMLAreaElement::put_search(BSTR v);
HRESULT IHTMLAreaElement::get_shape(BSTR *p);
HRESULT IHTMLAreaElement::put_shape(BSTR v);
HRESULT IHTMLAreaElement::get_tabIndex(short *p);
HRESULT IHTMLAreaElement::put_tabIndex(short v);
HRESULT IHTMLAreaElement::get_target(BSTR *p);
HRESULT IHTMLAreaElement::put_target(BSTR v);
HRESULT urns( 
 VARIANT urn, 
 IDispatch **pdisp 
);
HRESULT namedItem( 
 BSTR name, 
 IDispatch **pdisp 
);
HRESULT IHTMLAreasCollection::get__newEnum(IUnknown **p);
HRESULT add( 
 IHTMLElement *element, 
 VARIANT before 
);
HRESULT item( 
 VARIANT name, 
 VARIANT index, 
 IDispatch **pdisp 
);
HRESULT IHTMLAreasCollection::get_length(long *p);
HRESULT IHTMLAreasCollection::put_length(long v);
HRESULT remove( 
 long index 
);
HRESULT tags( 
 VARIANT tagName, 
 IDispatch **pdisp 
);
HRESULT getNamedItem( 
 BSTR bstrName, 
 IHTMLDOMAttribute **newretNode 
);
HRESULT removeNamedItem( 
 BSTR bstrName, 
 IHTMLDOMAttribute **newretNode 
);
HRESULT setNamedItem( 
 IHTMLDOMAttribute *ppNode, 
 IHTMLDOMAttribute **newretNode 
);
HRESULT IHTMLAttributeCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 VARIANT *name, 
 IDispatch **pdisp 
);
HRESULT IHTMLAttributeCollection::get_length(long *p);
HRESULT IHTMLBaseElement::get_href(BSTR *p);
HRESULT IHTMLBaseElement::put_href(BSTR v);
HRESULT IHTMLBaseElement::get_target(BSTR *p);
HRESULT IHTMLBaseElement::put_target(BSTR v);
HRESULT IHTMLBaseFontElement::get_color(VARIANT *p);
HRESULT IHTMLBaseFontElement::put_color(VARIANT v);
HRESULT IHTMLBaseFontElement::get_face(BSTR *p);
HRESULT IHTMLBaseFontElement::put_face(BSTR v);
HRESULT IHTMLBaseFontElement::get_size(long *p);
HRESULT IHTMLBaseFontElement::put_size(long v);
HRESULT IHTMLBGsound::get_balance(VARIANT *p);
HRESULT IHTMLBGsound::put_balance(VARIANT v);
HRESULT IHTMLBGsound::get_loop(VARIANT *p);
HRESULT IHTMLBGsound::put_loop(VARIANT v);
HRESULT IHTMLBGsound::get_src(BSTR *p);
HRESULT IHTMLBGsound::put_src(BSTR v);
HRESULT IHTMLBGsound::get_volume(VARIANT *p);
HRESULT IHTMLBGsound::put_volume(VARIANT v);
HRESULT IHTMLBlockElement2::get_cite(BSTR *p);
HRESULT IHTMLBlockElement2::put_cite(BSTR v);
HRESULT IHTMLBlockElement2::get_width(BSTR *p);
HRESULT IHTMLBlockElement2::put_width(BSTR v);
HRESULT IHTMLBlockElement::get_clear(BSTR *p);
HRESULT IHTMLBlockElement::put_clear(BSTR v);
HRESULT IHTMLBodyElement2::get_onafterprint(VARIANT *p);
HRESULT IHTMLBodyElement2::put_onafterprint(VARIANT v);
HRESULT IHTMLBodyElement2::get_onbeforeprint(VARIANT *p);
HRESULT IHTMLBodyElement2::put_onbeforeprint(VARIANT v);
HRESULT IHTMLBodyElement::get_aLink(VARIANT *p);
HRESULT IHTMLBodyElement::put_aLink(VARIANT v);
HRESULT IHTMLBodyElement::get_background(BSTR *p);
HRESULT IHTMLBodyElement::put_background(BSTR v);
HRESULT IHTMLBodyElement::get_bgColor(VARIANT *p);
HRESULT IHTMLBodyElement::put_bgColor(VARIANT v);
HRESULT IHTMLBodyElement::get_bgProperties(BSTR *p);
HRESULT IHTMLBodyElement::put_bgProperties(BSTR v);
HRESULT IHTMLBodyElement::get_bottomMargin(VARIANT *p);
HRESULT IHTMLBodyElement::put_bottomMargin(VARIANT v);
HRESULT createTextRange( 
 IHTMLTxtRange **range 
);
HRESULT IHTMLBodyElement::get_leftMargin(VARIANT *p);
HRESULT IHTMLBodyElement::put_leftMargin(VARIANT v);
HRESULT IHTMLBodyElement::get_link(VARIANT *p);
HRESULT IHTMLBodyElement::put_link(VARIANT v);
HRESULT IHTMLBodyElement::get_noWrap(VARIANT_BOOL *p);
HRESULT IHTMLBodyElement::put_noWrap(VARIANT_BOOL v);
HRESULT IHTMLBodyElement::get_onbeforeunload(VARIANT *p);
HRESULT IHTMLBodyElement::put_onbeforeunload(VARIANT v);
HRESULT IHTMLBodyElement::get_onload(VARIANT *p);
HRESULT IHTMLBodyElement::put_onload(VARIANT v);
HRESULT IHTMLBodyElement::get_onselect(VARIANT *p);
HRESULT IHTMLBodyElement::put_onselect(VARIANT v);
HRESULT IHTMLBodyElement::get_onunload(VARIANT *p);
HRESULT IHTMLBodyElement::put_onunload(VARIANT v);
HRESULT IHTMLBodyElement::get_rightMargin(VARIANT *p);
HRESULT IHTMLBodyElement::put_rightMargin(VARIANT v);
HRESULT IHTMLBodyElement::get_scroll(BSTR *p);
HRESULT IHTMLBodyElement::put_scroll(BSTR v);
HRESULT IHTMLBodyElement::get_text(VARIANT *p);
HRESULT IHTMLBodyElement::put_text(VARIANT v);
HRESULT IHTMLBodyElement::get_topMargin(VARIANT *p);
HRESULT IHTMLBodyElement::put_topMargin(VARIANT v);
HRESULT IHTMLBodyElement::get_vLink(VARIANT *p);
HRESULT IHTMLBodyElement::put_vLink(VARIANT v);
HRESULT IHTMLBookmarkCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 long index, 
 VARIANT *pVarBookmark 
);
HRESULT IHTMLBookmarkCollection::get_length(long *p);
HRESULT IHTMLBRElement::get_clear(BSTR *p);
HRESULT IHTMLBRElement::put_clear(BSTR v);
HRESULT createTextRange( 
 IHTMLTxtRange **range 
);
HRESULT IHTMLButtonElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLButtonElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLButtonElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLButtonElement::get_name(BSTR *p);
HRESULT IHTMLButtonElement::put_name(BSTR v);
HRESULT IHTMLButtonElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLButtonElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLButtonElement::get_type(BSTR *p);
HRESULT IHTMLButtonElement::get_value(BSTR *p);
HRESULT IHTMLButtonElement::put_value(BSTR v);
HRESULT GetCaretDirection( 
 CARET_DIRECTION *peDir 
);
HRESULT GetLocation( 
 POINT *pPoint, 
 BOOL fTranslate 
);
HRESULT Hide(VOID);
HRESULT InsertText( 
 OLECHAR *pText, 
 LONG lLen 
);
HRESULT IsVisible( 
 BOOL *pIsVisible 
);
HRESULT MoveCaretToPointer( 
 IDisplayPointer *pDispPointer, 
 BOOL fScrollIntoView, 
 CARET_DIRECTION eDir 
);
HRESULT MoveCaretToPointerEx( 
 IDisplayPointer *pDispPointer, 
 BOOL fVisible, 
 BOOL fScrollIntoView, 
 CARET_DIRECTION eDir 
);
HRESULT MoveDisplayPointerToCaret( 
 IDisplayPointer *pDispPointer 
);
HRESULT MoveMarkupPointerToCaret( 
 IMarkupPointer *pIMarkupPointer 
);
HRESULT ScrollIntoView(VOID);
HRESULT SetCaretDirection( 
 CARET_DIRECTION eDir 
);
HRESULT Show( 
 BOOL fScrollIntoView 
);
HRESULT GetNextChange( 
 BYTE *pbBuffer, 
 long nBufferSize, 
 long *pnRecordLength 
);
HRESULT ExecChange( 
 BYTE *pbRecord, 
 BOOL fForward 
);
HRESULT Notify(VOID);
HRESULT appendData( 
 BSTR bstrstring 
);
HRESULT IHTMLCommentElement2::get_data(BSTR *p);
HRESULT IHTMLCommentElement2::put_data(BSTR v);
HRESULT deleteData( 
 long offset, 
 long Count 
);
HRESULT insertData( 
 long offset, 
 BSTR bstrstring 
);
HRESULT IHTMLCommentElement2::get_length(long *p);
HRESULT replaceData( 
 long offset, 
 long Count, 
 BSTR bstrstring 
);
HRESULT substringData( 
 long offset, 
 long Count, 
 BSTR *pbstrsubString 
);
HRESULT IHTMLCommentElement::get_text(BSTR *p);
HRESULT IHTMLCommentElement::put_text(BSTR v);
HRESULT IHTMLComputedStyle::get_backgroundColor(DWORD *p);
HRESULT IHTMLComputedStyle::get_blockDirection(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_bold(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_direction(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_explicitFace(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_fontName(TCHAR *p);
HRESULT IHTMLComputedStyle::get_fontSize(long *p);
HRESULT IHTMLComputedStyle::get_fontWeight(long *p);
HRESULT IHTMLComputedStyle::get_hasBgColor(VARIANT_BOOL *p);
HRESULT IsEqual( 
 IHTMLComputedStyle *pComputedStyle, 
 VARIANT_BOOL *pfEqual 
);
HRESULT IHTMLComputedStyle::get_italic(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_OL(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_overline(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_preFormatted(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_strikeOut(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_subScript(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_superScript(VARIANT_BOOL *p);
HRESULT IHTMLComputedStyle::get_textColor(DWORD *p);
HRESULT IHTMLComputedStyle::get_underline(VARIANT_BOOL *p);
HRESULT IHTMLControlElement::get_accessKey(BSTR *p);
HRESULT IHTMLControlElement::put_accessKey(BSTR v);
HRESULT addFilter( 
 IUnknown *pUnk 
);
HRESULT blur(VOID);
HRESULT IHTMLControlElement::get_clientHeight(long *p);
HRESULT IHTMLControlElement::get_clientLeft(long *p);
HRESULT IHTMLControlElement::get_clientTop(long *p);
HRESULT IHTMLControlElement::get_clientWidth(long *p);
HRESULT focus(VOID);
HRESULT IHTMLControlElement::get_onblur(VARIANT *p);
HRESULT IHTMLControlElement::put_onblur(VARIANT v);
HRESULT IHTMLControlElement::get_onfocus(VARIANT *p);
HRESULT IHTMLControlElement::put_onfocus(VARIANT v);
HRESULT IHTMLControlElement::get_onresize(VARIANT *p);
HRESULT IHTMLControlElement::put_onresize(VARIANT v);
HRESULT removeFilter( 
 IUnknown *pUnk 
);
HRESULT IHTMLControlElement::get_tabIndex(short *p);
HRESULT IHTMLControlElement::put_tabIndex(short v);
HRESULT addElement( 
 IHTMLElement *item 
);
HRESULT add( 
 IHTMLControlElement *item 
);
HRESULT commonParentElement( 
 IHTMLElement **parent 
);
HRESULT execCommand( 
 BSTR cmdID, 
 VARIANT_BOOL showUI, 
 VARIANT value, 
 VARIANT_BOOL *pfRet 
);
HRESULT execCommandShowHelp( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT item( 
 long index, 
 IHTMLElement **pdisp 
);
HRESULT IHTMLControlRange::get_length(long *p);
HRESULT queryCommandEnabled( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandIndeterm( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandState( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandSupported( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandText( 
 BSTR cmdID, 
 BSTR *pcmdText 
);
HRESULT queryCommandValue( 
 BSTR cmdID, 
 VARIANT *pcmdValue 
);
HRESULT remove( 
 long index 
);
HRESULT scrollIntoView( 
 VARIANT varargStart 
);
HRESULT select(VOID);
HRESULT IHTMLCurrentStyle2::get_filter(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_hasLayout(VARIANT_BOOL *p);
HRESULT IHTMLCurrentStyle2::get_isBlock(VARIANT_BOOL *p);
HRESULT IHTMLCurrentStyle2::get_layoutFlow(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_scrollbar3dLightColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarArrowColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarBaseColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarDarkShadowColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarFaceColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarHighlightColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarShadowColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_scrollbarTrackColor(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_textAlignLast(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_textKashidaSpace(VARIANT *p);
HRESULT IHTMLCurrentStyle2::get_textUnderlinePosition(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_wordWrap(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_writingMode(BSTR *p);
HRESULT IHTMLCurrentStyle2::get_zoom(VARIANT *p);
HRESULT IHTMLCurrentStyle3::get_minHeight(VARIANT *p);
HRESULT IHTMLCurrentStyle3::put_minHeight(VARIANT v);
HRESULT IHTMLCurrentStyle3::get_textOverflow(VARIANT *p);
HRESULT IHTMLCurrentStyle3::put_textOverflow(VARIANT v);
HRESULT IHTMLCurrentStyle3::get_whiteSpace(BSTR *p);
HRESULT IHTMLCurrentStyle3::get_wordSpacing(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_accelerator(BSTR *p);
HRESULT IHTMLCurrentStyle::get_backgroundAttachment(BSTR *p);
HRESULT IHTMLCurrentStyle::get_backgroundColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_backgroundImage(BSTR *p);
HRESULT IHTMLCurrentStyle::get_backgroundPositionX(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_backgroundPositionY(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_backgroundRepeat(BSTR *p);
HRESULT IHTMLCurrentStyle::get_behavior(BSTR *p);
HRESULT IHTMLCurrentStyle::get_blockDirection(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderBottomColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderBottomStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderBottomWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderCollapse(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderColor(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderLeftColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderLeftStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderLeftWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderRightColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderRightStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderRightWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderTopColor(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderTopStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_borderTopWidth(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_borderWidth(BSTR *p);
HRESULT IHTMLCurrentStyle::get_bottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_clear(BSTR *p);
HRESULT IHTMLCurrentStyle::get_clipBottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_clipLeft(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_clipRight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_clipTop(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_color(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_cursor(BSTR *p);
HRESULT IHTMLCurrentStyle::get_direction(BSTR *p);
HRESULT IHTMLCurrentStyle::get_display(BSTR *p);
HRESULT IHTMLCurrentStyle::get_fontFamily(BSTR *p);
HRESULT IHTMLCurrentStyle::get_fontSize(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_fontStyle(BSTR *p);
HRESULT IHTMLCurrentStyle::get_fontVariant(BSTR *p);
HRESULT IHTMLCurrentStyle::get_fontWeight(BSTR *p);
HRESULT getAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT *AttributeValue 
);
HRESULT IHTMLCurrentStyle::get_height(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_imeMode(BSTR *p);
HRESULT IHTMLCurrentStyle::get_layoutGridChar(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_layoutGridLine(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_layoutGridMode(BSTR *p);
HRESULT IHTMLCurrentStyle::get_layoutGridType(BSTR *p);
HRESULT IHTMLCurrentStyle::get_left(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_letterSpacing(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_lineBreak(BSTR *p);
HRESULT IHTMLCurrentStyle::get_lineHeight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_listStyleImage(BSTR *p);
HRESULT IHTMLCurrentStyle::get_listStylePosition(BSTR *p);
HRESULT IHTMLCurrentStyle::get_listStyleType(BSTR *p);
HRESULT IHTMLCurrentStyle::get_margin(BSTR *p);
HRESULT IHTMLCurrentStyle::get_marginBottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_marginLeft(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_marginRight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_marginTop(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_overflow(BSTR *p);
HRESULT IHTMLCurrentStyle::get_overflowX(BSTR *p);
HRESULT IHTMLCurrentStyle::get_overflowY(BSTR *p);
HRESULT IHTMLCurrentStyle::get_padding(BSTR *p);
HRESULT IHTMLCurrentStyle::get_paddingBottom(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_paddingLeft(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_paddingRight(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_paddingTop(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_pageBreakAfter(BSTR *p);
HRESULT IHTMLCurrentStyle::get_pageBreakBefore(BSTR *p);
HRESULT IHTMLCurrentStyle::get_position(BSTR *p);
HRESULT IHTMLCurrentStyle::get_right(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_rubyAlign(BSTR *p);
HRESULT IHTMLCurrentStyle::get_rubyOverhang(BSTR *p);
HRESULT IHTMLCurrentStyle::get_rubyPosition(BSTR *p);
HRESULT IHTMLCurrentStyle::get_styleFloat(BSTR *p);
HRESULT IHTMLCurrentStyle::get_tableLayout(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textAlign(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textAutospace(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textDecoration(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textIndent(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_textJustify(BSTR *p);
HRESULT IHTMLCurrentStyle::get_textTransform(BSTR *p);
HRESULT IHTMLCurrentStyle::get_top(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_unicodeBidi(BSTR *p);
HRESULT IHTMLCurrentStyle::get_verticalAlign(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_visibility(BSTR *p);
HRESULT IHTMLCurrentStyle::get_width(VARIANT *p);
HRESULT IHTMLCurrentStyle::get_wordBreak(BSTR *p);
HRESULT IHTMLCurrentStyle::get_zIndex(VARIANT *p);
HRESULT IHTMLDatabinding::get_dataFld(BSTR *p);
HRESULT IHTMLDatabinding::put_dataFld(BSTR v);
HRESULT IHTMLDatabinding::get_dataFormatAs(BSTR *p);
HRESULT IHTMLDatabinding::put_dataFormatAs(BSTR v);
HRESULT IHTMLDatabinding::get_dataSrc(BSTR *p);
HRESULT IHTMLDatabinding::put_dataSrc(BSTR v);
HRESULT clearData( 
 BSTR format, 
 VARIANT_BOOL *pret 
);
HRESULT IHTMLDataTransfer::get_dropEffect(BSTR *p);
HRESULT IHTMLDataTransfer::put_dropEffect(BSTR v);
HRESULT IHTMLDataTransfer::get_effectAllowed(BSTR *p);
HRESULT IHTMLDataTransfer::put_effectAllowed(BSTR v);
HRESULT getData( 
 BSTR format, 
 VARIANT *pvarRet 
);
HRESULT setData( 
 BSTR format, 
 VARIANT *data, 
 VARIANT_BOOL *pret 
);
HRESULT IHTMLDDElement::get_noWrap(VARIANT_BOOL *p);
HRESULT IHTMLDDElement::put_noWrap(VARIANT_BOOL v);
HRESULT IHTMLDialog2::get_resizable(BSTR *p);
HRESULT IHTMLDialog2::put_resizable(BSTR v);
HRESULT IHTMLDialog2::get_status(BSTR *p);
HRESULT IHTMLDialog2::put_status(BSTR v);
HRESULT IHTMLDialog3::get_dialogHide(BSTR *p);
HRESULT IHTMLDialog3::put_dialogHide(BSTR v);
HRESULT IHTMLDialog3::get_unadorned(BSTR *p);
HRESULT IHTMLDialog3::put_unadorned(BSTR v);
HRESULT close(VOID);
HRESULT IHTMLDialog::get_dialogArguments(VARIANT *p);
HRESULT IHTMLDialog::get_dialogHeight(VARIANT *p);
HRESULT IHTMLDialog::put_dialogHeight(VARIANT v);
HRESULT IHTMLDialog::get_dialogLeft(VARIANT *p);
HRESULT IHTMLDialog::put_dialogLeft(VARIANT v);
HRESULT IHTMLDialog::get_dialogTop(VARIANT *p);
HRESULT IHTMLDialog::put_dialogTop(VARIANT v);
HRESULT IHTMLDialog::get_dialogWidth(VARIANT *p);
HRESULT IHTMLDialog::put_dialogWidth(VARIANT v);
HRESULT IHTMLDialog::get_returnValue(VARIANT *p);
HRESULT IHTMLDialog::put_returnValue(VARIANT v);
HRESULT toString( 
 BSTR *String 
);
HRESULT IHTMLDivElement::get_align(BSTR *p);
HRESULT IHTMLDivElement::put_align(BSTR v);
HRESULT IHTMLDivElement::get_noWrap(VARIANT_BOOL *p);
HRESULT IHTMLDivElement::put_noWrap(VARIANT_BOOL v);
HRESULT IHTMLDivPosition::get_align(BSTR *p);
HRESULT IHTMLDivPosition::put_align(BSTR v);
HRESULT IHtmlDlgSafeHelper::get_blockFormats(IDispatch **p);
HRESULT ChooseColorDlg( 
 VARIANT initColor, 
 VARIANT *rgbColor 
);
HRESULT IHtmlDlgSafeHelper::get_fonts(IDispatch **p);
HRESULT getCharset( 
 BSTR fontName, 
 VARIANT *charset 
);
HRESULT IHTMLDListElement::get_compact(VARIANT_BOOL *p);
HRESULT IHTMLDListElement::put_compact(VARIANT_BOOL v);
HRESULT IHTMLDocument2::get_activeElement(IHTMLElement **p);
HRESULT IHTMLDocument2::get_alinkColor(VARIANT *p);
HRESULT IHTMLDocument2::put_alinkColor(VARIANT v);
HRESULT IHTMLDocument2::get_all(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_anchors(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_applets(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_bgColor(VARIANT *p);
HRESULT IHTMLDocument2::put_bgColor(VARIANT v);
HRESULT IHTMLDocument2::get_body(IHTMLElement **p);
HRESULT IHTMLDocument2::get_charset(BSTR *p);
HRESULT IHTMLDocument2::put_charset(BSTR v);
HRESULT close(VOID);
HRESULT IHTMLDocument2::get_cookie(BSTR *p);
HRESULT IHTMLDocument2::put_cookie(BSTR v);
HRESULT createElement( 
 BSTR eTag, 
 IHTMLElement **newElem 
);
HRESULT createStyleSheet( 
 BSTR bstrHref, 
 long lIndex, 
 IHTMLStyleSheet **ppnewStyleSheet 
);
HRESULT IHTMLDocument2::get_defaultCharset(BSTR *p);
HRESULT IHTMLDocument2::put_defaultCharset(BSTR v);
HRESULT IHTMLDocument2::get_designMode(BSTR *p);
HRESULT IHTMLDocument2::put_designMode(BSTR v);
HRESULT IHTMLDocument2::get_domain(BSTR *p);
HRESULT IHTMLDocument2::put_domain(BSTR v);
HRESULT elementFromPoint( 
 long x, 
 long y, 
 IHTMLElement **elementHit 
);
HRESULT IHTMLDocument2::get_embeds(IHTMLElementCollection **p);
HRESULT execCommand( 
 BSTR cmdID, 
 VARIANT_BOOL showUI, 
 VARIANT value, 
 VARIANT_BOOL *pfRet 
);
HRESULT execCommandShowHelp( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT IHTMLDocument2::get_expando(VARIANT_BOOL *p);
HRESULT IHTMLDocument2::put_expando(VARIANT_BOOL v);
HRESULT IHTMLDocument2::get_fgColor(VARIANT *p);
HRESULT IHTMLDocument2::put_fgColor(VARIANT v);
HRESULT IHTMLDocument2::get_fileCreatedDate(BSTR *p);
HRESULT IHTMLDocument2::get_fileModifiedDate(BSTR *p);
HRESULT IHTMLDocument2::get_fileSize(BSTR *p);
HRESULT IHTMLDocument2::get_fileUpdatedDate(BSTR *p);
HRESULT IHTMLDocument2::get_forms(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_frames(IHTMLFramesCollection2 **p);
HRESULT IHTMLDocument2::get_images(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_lastModified(BSTR *p);
HRESULT IHTMLDocument2::get_linkColor(VARIANT *p);
HRESULT IHTMLDocument2::put_linkColor(VARIANT v);
HRESULT IHTMLDocument2::get_links(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_location(IHTMLLocation **p);
HRESULT IHTMLDocument2::get_mimeType(BSTR *p);
HRESULT IHTMLDocument2::get_nameProp(BSTR *p);
HRESULT IHTMLDocument2::get_onafterupdate(VARIANT *p);
HRESULT IHTMLDocument2::put_onafterupdate(VARIANT v);
HRESULT IHTMLDocument2::get_onbeforeupdate(VARIANT *p);
HRESULT IHTMLDocument2::put_onbeforeupdate(VARIANT v);
HRESULT IHTMLDocument2::get_onclick(VARIANT *p);
HRESULT IHTMLDocument2::put_onclick(VARIANT v);
HRESULT IHTMLDocument2::get_ondblclick(VARIANT *p);
HRESULT IHTMLDocument2::put_ondblclick(VARIANT v);
HRESULT IHTMLDocument2::get_ondragstart(VARIANT *p);
HRESULT IHTMLDocument2::put_ondragstart(VARIANT v);
HRESULT IHTMLDocument2::get_onerrorupdate(VARIANT *p);
HRESULT IHTMLDocument2::put_onerrorupdate(VARIANT v);
HRESULT IHTMLDocument2::get_onhelp(VARIANT *p);
HRESULT IHTMLDocument2::put_onhelp(VARIANT v);
HRESULT IHTMLDocument2::get_onkeydown(VARIANT *p);
HRESULT IHTMLDocument2::put_onkeydown(VARIANT v);
HRESULT IHTMLDocument2::get_onkeypress(VARIANT *p);
HRESULT IHTMLDocument2::put_onkeypress(VARIANT v);
HRESULT IHTMLDocument2::get_onkeyup(VARIANT *p);
HRESULT IHTMLDocument2::put_onkeyup(VARIANT v);
HRESULT IHTMLDocument2::get_onmousedown(VARIANT *p);
HRESULT IHTMLDocument2::put_onmousedown(VARIANT v);
HRESULT IHTMLDocument2::get_onmousemove(VARIANT *p);
HRESULT IHTMLDocument2::put_onmousemove(VARIANT v);
HRESULT IHTMLDocument2::get_onmouseout(VARIANT *p);
HRESULT IHTMLDocument2::put_onmouseout(VARIANT v);
HRESULT IHTMLDocument2::get_onmouseover(VARIANT *p);
HRESULT IHTMLDocument2::put_onmouseover(VARIANT v);
HRESULT IHTMLDocument2::get_onmouseup(VARIANT *p);
HRESULT IHTMLDocument2::put_onmouseup(VARIANT v);
HRESULT IHTMLDocument2::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLDocument2::put_onreadystatechange(VARIANT v);
HRESULT IHTMLDocument2::get_onrowenter(VARIANT *p);
HRESULT IHTMLDocument2::put_onrowenter(VARIANT v);
HRESULT IHTMLDocument2::get_onrowexit(VARIANT *p);
HRESULT IHTMLDocument2::put_onrowexit(VARIANT v);
HRESULT IHTMLDocument2::get_onselectstart(VARIANT *p);
HRESULT IHTMLDocument2::put_onselectstart(VARIANT v);
HRESULT open( 
 BSTR url, 
 VARIANT name, 
 VARIANT features, 
 VARIANT replace, 
 IDispatch **pomWindowResult 
);
HRESULT IHTMLDocument2::get_parentWindow(IHTMLWindow2 **p);
HRESULT IHTMLDocument2::get_plugins(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_protocol(BSTR *p);
HRESULT IHTMLDocument2::put_protocol(BSTR v);
HRESULT queryCommandEnabled( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandIndeterm( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandState( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandSupported( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandText( 
 BSTR cmdID, 
 BSTR *pcmdText 
);
HRESULT queryCommandValue( 
 BSTR cmdID, 
 VARIANT *pcmdValue 
);
HRESULT IHTMLDocument2::get_readyState(BSTR *p);
HRESULT IHTMLDocument2::get_referrer(BSTR *p);
HRESULT IHTMLDocument2::get_scripts(IHTMLElementCollection **p);
HRESULT IHTMLDocument2::get_security(BSTR *p);
HRESULT IHTMLDocument2::get_selection(IHTMLSelectionObject **p);
HRESULT IHTMLDocument2::get_styleSheets(IHTMLStyleSheetsCollection **p);
HRESULT IHTMLDocument2::get_title(BSTR *p);
HRESULT IHTMLDocument2::put_title(BSTR v);
HRESULT toString( 
 BSTR *String 
);
HRESULT IHTMLDocument2::get_URL(BSTR *p);
HRESULT IHTMLDocument2::put_URL(BSTR v);
HRESULT IHTMLDocument2::get_vlinkColor(VARIANT *p);
HRESULT IHTMLDocument2::put_vlinkColor(VARIANT v);
HRESULT write( 
 SAFEARRAY *psarray 
);
HRESULT writeln( 
 SAFEARRAY *psarray 
);
HRESULT attachEvent( 
 BSTR event, 
 IDispatch *pDisp, 
 VARIANT_BOOL *pfResult 
);
HRESULT IHTMLDocument3::get_childNodes(IDispatch **p);
HRESULT createDocumentFragment( 
 IHTMLDocument2 **pNewDoc 
);
HRESULT createTextNode( 
 BSTR text, 
 IHTMLDOMNode **newTextNode 
);
HRESULT detachEvent( 
 BSTR event, 
 IDispatch *pDisp 
);
HRESULT IHTMLDocument3::get_dir(BSTR *p);
HRESULT IHTMLDocument3::put_dir(BSTR v);
HRESULT IHTMLDocument3::get_documentElement(IHTMLElement **p);
HRESULT getElementById( 
 BSTR v, 
 IHTMLElement **pel 
);
HRESULT getElementsByName( 
 BSTR v, 
 IHTMLElementCollection **pelColl 
);
HRESULT getElementsByTagName( 
 BSTR v, 
 IHTMLElementCollection **pelColl 
);
HRESULT IHTMLDocument3::get_onbeforeeditfocus(VARIANT *p);
HRESULT IHTMLDocument3::put_onbeforeeditfocus(VARIANT v);
HRESULT IHTMLDocument3::get_oncellchange(VARIANT *p);
HRESULT IHTMLDocument3::put_oncellchange(VARIANT v);
HRESULT IHTMLDocument3::get_oncontextmenu(VARIANT *p);
HRESULT IHTMLDocument3::put_oncontextmenu(VARIANT v);
HRESULT IHTMLDocument3::get_ondataavailable(VARIANT *p);
HRESULT IHTMLDocument3::put_ondataavailable(VARIANT v);
HRESULT IHTMLDocument3::get_ondatasetchanged(VARIANT *p);
HRESULT IHTMLDocument3::put_ondatasetchanged(VARIANT v);
HRESULT IHTMLDocument3::get_ondatasetcomplete(VARIANT *p);
HRESULT IHTMLDocument3::put_ondatasetcomplete(VARIANT v);
HRESULT IHTMLDocument3::get_onpropertychange(VARIANT *p);
HRESULT IHTMLDocument3::put_onpropertychange(VARIANT v);
HRESULT IHTMLDocument3::get_onrowsdelete(VARIANT *p);
HRESULT IHTMLDocument3::put_onrowsdelete(VARIANT v);
HRESULT IHTMLDocument3::get_onrowsinserted(VARIANT *p);
HRESULT IHTMLDocument3::put_onrowsinserted(VARIANT v);
HRESULT IHTMLDocument3::get_onstop(VARIANT *p);
HRESULT IHTMLDocument3::put_onstop(VARIANT v);
HRESULT IHTMLDocument3::get_parentDocument(IHTMLDocument3 **p);
HRESULT recalc( 
 VARIANT_BOOL fForce 
);
HRESULT releaseCapture(VOID);
HRESULT IHTMLDocument3::get_uniqueID(BSTR *p);
HRESULT createDocumentFromUrl( 
 BSTR bstrUrl, 
 BSTR bstrOptions, 
 IHTMLDocument2 **oNewDoc 
);
HRESULT createEventObject( 
 VARIANT *pvarEventObject, 
 IHTMLEventObj **ppEventObj 
);
HRESULT createRenderStyle( 
 BSTR v, 
 IHTMLRenderStyle **ppIHTMLRenderStyle 
);
HRESULT fireEvent( 
 BSTR bstrEventName, 
 VARIANT *pvarEventObject, 
 VARIANT_BOOL *pfCancelled 
);
HRESULT focus(VOID);
HRESULT hasFocus( 
 VARIANT_BOOL *pfFocus 
);
HRESULT IHTMLDocument4::get_namespaces(IDispatch **p);
HRESULT IHTMLDocument4::get_oncontrolselect(VARIANT *p);
HRESULT IHTMLDocument4::put_oncontrolselect(VARIANT v);
HRESULT IHTMLDocument4::get_onselectionchange(VARIANT *p);
HRESULT IHTMLDocument4::put_onselectionchange(VARIANT v);
HRESULT IHTMLDocument4::get_URLUnencoded(BSTR *p);
HRESULT IHTMLDocument5::get_compatMode(BSTR *p);
HRESULT createAttribute( 
 BSTR bstrattrName, 
 IHTMLDOMAttribute **ppattribute 
);
HRESULT createComment( 
 BSTR bstrdata, 
 IHTMLDOMNode **ppRetNode 
);
HRESULT IHTMLDocument5::get_doctype(IHTMLDOMNode **p);
HRESULT IHTMLDocument5::get_implementation(IHTMLDOMImplementation **p);
HRESULT IHTMLDocument5::get_onactivate(VARIANT *p);
HRESULT IHTMLDocument5::put_onactivate(VARIANT v);
HRESULT IHTMLDocument5::get_onbeforeactivate(VARIANT *p);
HRESULT IHTMLDocument5::put_onbeforeactivate(VARIANT v);
HRESULT IHTMLDocument5::get_onbeforedeactivate(VARIANT *p);
HRESULT IHTMLDocument5::put_onbeforedeactivate(VARIANT v);
HRESULT IHTMLDocument5::get_ondeactivate(VARIANT *p);
HRESULT IHTMLDocument5::put_ondeactivate(VARIANT v);
HRESULT IHTMLDocument5::get_onfocusin(VARIANT *p);
HRESULT IHTMLDocument5::put_onfocusin(VARIANT v);
HRESULT IHTMLDocument5::get_onfocusout(VARIANT *p);
HRESULT IHTMLDocument5::put_onfocusout(VARIANT v);
HRESULT IHTMLDocument5::get_onmousewheel(VARIANT *p);
HRESULT IHTMLDocument5::put_onmousewheel(VARIANT v);
HRESULT IHTMLDocument::get_Script(IDispatch **p);
HRESULT appendChild( 
 IHTMLDOMNode *newChild, 
 IHTMLDOMNode **node 
);
HRESULT IHTMLDOMAttribute2::get_attributes(IDispatch **p);
HRESULT IHTMLDOMAttribute2::get_childNodes(IDispatch **p);
HRESULT cloneNode( 
 VARIANT_BOOL fDeep, 
 IHTMLDOMAttribute **clonedNode 
);
HRESULT IHTMLDOMAttribute2::get_expando(VARIANT_BOOL *p);
HRESULT IHTMLDOMAttribute2::put_expando(VARIANT_BOOL v);
HRESULT IHTMLDOMAttribute2::get_firstChild(IHTMLDOMNode **p);
HRESULT hasChildNodes( 
 VARIANT_BOOL *fChildren 
);
HRESULT insertBefore( 
 IHTMLDOMNode *newChild, 
 VARIANT refChild, 
 IHTMLDOMNode **node 
);
HRESULT IHTMLDOMAttribute2::get_lastChild(IHTMLDOMNode **p);
HRESULT IHTMLDOMAttribute2::get_name(BSTR *p);
HRESULT IHTMLDOMAttribute2::get_nextSibling(IHTMLDOMNode **p);
HRESULT IHTMLDOMAttribute2::get_nodeType(long *p);
HRESULT IHTMLDOMAttribute2::get_ownerDocument(IDispatch **p);
HRESULT IHTMLDOMAttribute2::get_parentNode(IHTMLDOMNode **p);
HRESULT IHTMLDOMAttribute2::get_previousSibling(IHTMLDOMNode **p);
HRESULT removeChild( 
 IHTMLDOMNode *oldChild, 
 IHTMLDOMNode **node 
);
HRESULT replaceChild( 
 IHTMLDOMNode *newChild, 
 IHTMLDOMNode *oldChild, 
 IHTMLDOMNode **node 
);
HRESULT IHTMLDOMAttribute2::get_value(BSTR *p);
HRESULT IHTMLDOMAttribute2::put_value(BSTR v);
HRESULT IHTMLDOMAttribute::get_nodeName(BSTR *p);
HRESULT IHTMLDOMAttribute::get_nodeValue(VARIANT *p);
HRESULT IHTMLDOMAttribute::put_nodeValue(VARIANT v);
HRESULT IHTMLDOMAttribute::get_specified(VARIANT_BOOL *p);
HRESULT IHTMLDOMChildrenCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 long index, 
 IDispatch **ppItem 
);
HRESULT IHTMLDOMChildrenCollection::get_length(long *p);
HRESULT hasFeature( 
 BSTR bstrfeature, 
 VARIANT version, 
 VARIANT_BOOL *pfHasFeature 
);
HRESULT IHTMLDOMNode2::get_ownerDocument(IDispatch **p);
HRESULT appendChild( 
 IHTMLDOMNode *newChild, 
 IHTMLDOMNode **node 
);
HRESULT IHTMLDOMNode::get_attributes(IDispatch **p);
HRESULT IHTMLDOMNode::get_childNodes(IDispatch **p);
HRESULT cloneNode( 
 VARIANT_BOOL fDeep, 
 IHTMLDOMNode **clonedNode 
);
HRESULT IHTMLDOMNode::get_firstChild(IHTMLDOMNode **p);
HRESULT hasChildNodes( 
 VARIANT_BOOL *fChildren 
);
HRESULT insertBefore( 
 IHTMLDOMNode *newChild, 
 VARIANT refChild, 
 IHTMLDOMNode **node 
);
HRESULT IHTMLDOMNode::get_lastChild(IHTMLDOMNode **p);
HRESULT IHTMLDOMNode::get_nextSibling(IHTMLDOMNode **p);
HRESULT IHTMLDOMNode::get_nodeName(BSTR *p);
HRESULT IHTMLDOMNode::get_nodeType(long *p);
HRESULT IHTMLDOMNode::get_nodeValue(VARIANT *p);
HRESULT IHTMLDOMNode::put_nodeValue(VARIANT v);
HRESULT IHTMLDOMNode::get_parentNode(IHTMLDOMNode **p);
HRESULT IHTMLDOMNode::get_previousSibling(IHTMLDOMNode **p);
HRESULT removeChild( 
 IHTMLDOMNode *oldChild, 
 IHTMLDOMNode **node 
);
HRESULT removeNode( 
 VARIANT_BOOL fDeep, 
 IHTMLDOMNode **removed 
);
HRESULT replaceChild( 
 IHTMLDOMNode *newChild, 
 IHTMLDOMNode *oldChild, 
 IHTMLDOMNode **node 
);
HRESULT replaceNode( 
 IHTMLDOMNode *replacement, 
 IHTMLDOMNode **replaced 
);
HRESULT swapNode( 
 IHTMLDOMNode *otherNode, 
 IHTMLDOMNode **swappedNode 
);
HRESULT appendData( 
 BSTR bstrstring 
);
HRESULT deleteData( 
 long offset, 
 long Count 
);
HRESULT insertData( 
 long offset, 
 BSTR bstrstring 
);
HRESULT replaceData( 
 long offset, 
 long Count, 
 BSTR bstrstring 
);
HRESULT substringData( 
 long offset, 
 long Count, 
 BSTR *pbstrsubString 
);
HRESULT IHTMLDOMTextNode::get_data(BSTR *p);
HRESULT IHTMLDOMTextNode::put_data(BSTR v);
HRESULT IHTMLDOMTextNode::get_length(long *p);
HRESULT splitText( 
 long offset, 
 IHTMLDOMNode pRetNode 
);
HRESULT toString( 
 BSTR *String 
);
HRESULT IHTMLDTElement::get_noWrap(VARIANT_BOOL *p);
HRESULT IHTMLDTElement::put_noWrap(VARIANT_BOOL v);
HRESULT PostEditorEventNotify( 
 DISPID inEvtDispId, 
 IHTMLEventObj *pIEventObj 
);
HRESULT PostHandleEvent( 
 DISPID inEvtDispId, 
 IHTMLEventObj *pIEventObj 
);
HRESULT PreHandleEvent( 
 DISPID inEvtDispId, 
 IHTMLEventObj *pIEventObj 
);
HRESULT TranslateAccelerator( 
 DISPID inEvtDispId, 
 IHTMLEventObj *pIEventObj 
);
HRESULT PreDrag(VOID);
HRESULT SnapRect( 
 IHTMLElement *pIElement, 
 RECT *prcNew, 
 ELEMENT_CORNER eHandle 
);
HRESULT FreezeVirtualCaretPos( 
 BOOL fReCompute 
);
HRESULT MoveToSelectionAnchorEx( 
 IDisplayPointer *pIStartAnchor 
);
HRESULT MoveToSelectionEndEx( 
 IDisplayPointer *pIEndAnchor 
);
HRESULT UnFreezeVirtualCaretPos( 
 BOOL fReset 
);
HRESULT AddDesigner( 
 IHTMLEditDesigner *pIDesigner 
);
HRESULT GetSelectionServices( 
 IMarkupContainer *pIContainer, 
 ISelectionServices **ppSelSvc 
);
HRESULT MoveToSelectionAnchor( 
 IMarkupPointer *pIStartAnchor 
);
HRESULT MoveToSelectionEnd( 
 IMarkupPointer *pIEndAnchor 
);
HRESULT RemoveDesigner( 
 IHTMLEditDesigner *pIDesigner 
);
HRESULT IHTMLElement2::get_accessKey(BSTR *p);
HRESULT IHTMLElement2::put_accessKey(BSTR v);
HRESULT addBehavior( 
 BSTR bstrUrl, 
 VARIANT *pvarFactory, 
 long *pCookie 
);
HRESULT addFilter( 
 IUnknown *pUnk 
);
HRESULT applyElement( 
 IHTMLElement *apply, 
 BSTR where, 
 IHTMLElement **applied 
);
HRESULT attachEvent( 
 BSTR event, 
 IDispatch *pDisp, 
 VARIANT_BOOL *pfResult 
);
HRESULT IHTMLElement2::get_behaviorUrns(IDispatch **p);
HRESULT blur(VOID);
HRESULT IHTMLElement2::get_canHaveChildren(VARIANT_BOOL *p);
HRESULT clearAttributes(VOID);
HRESULT IHTMLElement2::get_clientHeight(long *p);
HRESULT IHTMLElement2::get_clientLeft(long *p);
HRESULT IHTMLElement2::get_clientTop(long *p);
HRESULT IHTMLElement2::get_clientWidth(long *p);
HRESULT componentFromPoint( 
 long x, 
 long y, 
 BSTR *component 
);
HRESULT createControlRange( 
 IDispatch **range 
);
HRESULT IHTMLElement2::get_currentStyle(IHTMLCurrentStyle **p);
HRESULT detachEvent( 
 BSTR event, 
 IDispatch *pDisp 
);
HRESULT IHTMLElement2::get_dir(BSTR *p);
HRESULT IHTMLElement2::put_dir(BSTR v);
HRESULT doScroll( 
 VARIANT component 
);
HRESULT focus(VOID);
HRESULT getAdjacentText( 
 BSTR where, 
 BSTR *text 
);
HRESULT getBoundingClientRect( 
 IHTMLRect **pRect 
);
HRESULT getClientRects( 
 IHTMLRectCollection **pRectCol 
);
HRESULT getElementsByTagName( 
 BSTR v, 
 IHTMLElementCollection **pelColl 
);
HRESULT getExpression( 
 BSTR propname, 
 VARIANT *expression 
);
HRESULT insertAdjacentElement( 
 BSTR where, 
 IHTMLElement *insertedElement, 
 IHTMLElement **inserted 
);
HRESULT mergeAttributes( 
 IHTMLElement *mergeThis, 
 VARIANT *pvarFlags 
);
HRESULT IHTMLElement2::get_onbeforecopy(VARIANT *p);
HRESULT IHTMLElement2::put_onbeforecopy(VARIANT v);
HRESULT IHTMLElement2::get_onbeforecut(VARIANT *p);
HRESULT IHTMLElement2::put_onbeforecut(VARIANT v);
HRESULT IHTMLElement2::get_onbeforeeditfocus(VARIANT *p);
HRESULT IHTMLElement2::put_onbeforeeditfocus(VARIANT v);
HRESULT IHTMLElement2::get_onbeforepaste(VARIANT *p);
HRESULT IHTMLElement2::put_onbeforepaste(VARIANT v);
HRESULT IHTMLElement2::get_onblur(VARIANT *p);
HRESULT IHTMLElement2::put_onblur(VARIANT v);
HRESULT IHTMLElement2::get_oncellchange(VARIANT *p);
HRESULT IHTMLElement2::put_oncellchange(VARIANT v);
HRESULT IHTMLElement2::get_oncontextmenu(VARIANT *p);
HRESULT IHTMLElement2::put_oncontextmenu(VARIANT v);
HRESULT IHTMLElement2::get_oncopy(VARIANT *p);
HRESULT IHTMLElement2::put_oncopy(VARIANT v);
HRESULT IHTMLElement2::get_oncut(VARIANT *p);
HRESULT IHTMLElement2::put_oncut(VARIANT v);
HRESULT IHTMLElement2::get_ondrag(VARIANT *p);
HRESULT IHTMLElement2::put_ondrag(VARIANT v);
HRESULT IHTMLElement2::get_ondragend(VARIANT *p);
HRESULT IHTMLElement2::put_ondragend(VARIANT v);
HRESULT IHTMLElement2::get_ondragenter(VARIANT *p);
HRESULT IHTMLElement2::put_ondragenter(VARIANT v);
HRESULT IHTMLElement2::get_ondragleave(VARIANT *p);
HRESULT IHTMLElement2::put_ondragleave(VARIANT v);
HRESULT IHTMLElement2::get_ondragover(VARIANT *p);
HRESULT IHTMLElement2::put_ondragover(VARIANT v);
HRESULT IHTMLElement2::get_ondrop(VARIANT *p);
HRESULT IHTMLElement2::put_ondrop(VARIANT v);
HRESULT IHTMLElement2::get_onfocus(VARIANT *p);
HRESULT IHTMLElement2::put_onfocus(VARIANT v);
HRESULT IHTMLElement2::get_onlosecapture(VARIANT *p);
HRESULT IHTMLElement2::put_onlosecapture(VARIANT v);
HRESULT IHTMLElement2::get_onpaste(VARIANT *p);
HRESULT IHTMLElement2::put_onpaste(VARIANT v);
HRESULT IHTMLElement2::get_onpropertychange(VARIANT *p);
HRESULT IHTMLElement2::put_onpropertychange(VARIANT v);
HRESULT IHTMLElement2::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLElement2::put_onreadystatechange(VARIANT v);
HRESULT IHTMLElement2::get_onresize(VARIANT *p);
HRESULT IHTMLElement2::put_onresize(VARIANT v);
HRESULT IHTMLElement2::get_onrowsdelete(VARIANT *p);
HRESULT IHTMLElement2::put_onrowsdelete(VARIANT v);
HRESULT IHTMLElement2::get_onrowsinserted(VARIANT *p);
HRESULT IHTMLElement2::put_onrowsinserted(VARIANT v);
HRESULT IHTMLElement2::get_onscroll(VARIANT *p);
HRESULT IHTMLElement2::put_onscroll(VARIANT v);
HRESULT IHTMLElement2::get_readyState(VARIANT *p);
HRESULT IHTMLElement2::get_readyStateValue(long *p);
HRESULT releaseCapture(VOID);
HRESULT removeBehavior( 
 long cookie, 
 VARIANT_BOOL *pfResult 
);
HRESULT removeExpression( 
 BSTR propname, 
 VARIANT_BOOL *pfSuccess 
);
HRESULT removeFilter( 
 IUnknown *pUnk 
);
HRESULT replaceAdjacentText( 
 BSTR where, 
 BSTR newText, 
 BSTR *oldText 
);
HRESULT IHTMLElement2::get_runtimeStyle(IHTMLStyle **p);
HRESULT IHTMLElement2::get_scopeName(BSTR *p);
HRESULT IHTMLElement2::get_scrollHeight(long *p);
HRESULT IHTMLElement2::get_scrollLeft(long *p);
HRESULT IHTMLElement2::put_scrollLeft(long v);
HRESULT IHTMLElement2::get_scrollTop(long *p);
HRESULT IHTMLElement2::put_scrollTop(long v);
HRESULT IHTMLElement2::get_scrollWidth(long *p);
HRESULT setCapture( 
 VARIANT_BOOL containerCapture 
);
HRESULT setExpression( 
 BSTR propname, 
 BSTR expression, 
 BSTR language 
);
HRESULT IHTMLElement2::get_tabIndex(short *p);
HRESULT IHTMLElement2::put_tabIndex(short v);
HRESULT IHTMLElement2::get_tagUrn(BSTR *p);
HRESULT IHTMLElement2::put_tagUrn(BSTR v);
HRESULT IHTMLElement3::get_canHaveHTML(VARIANT_BOOL *p);
HRESULT IHTMLElement3::get_contentEditable(BSTR *p);
HRESULT IHTMLElement3::put_contentEditable(BSTR v);
HRESULT IHTMLElement3::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLElement3::put_disabled(VARIANT_BOOL v);
HRESULT dragDrop( 
 VARIANT_BOOL *pfRet 
);
HRESULT fireEvent( 
 BSTR bstrEventName, 
 VARIANT *pvarEventObject, 
 VARIANT_BOOL *pfCancelled 
);
HRESULT IHTMLElement3::get_glyphMode(LONG *p);
HRESULT IHTMLElement3::get_hideFocus(VARIANT_BOOL *p);
HRESULT IHTMLElement3::put_hideFocus(VARIANT_BOOL v);
HRESULT IHTMLElement3::get_inflateBlock(VARIANT_BOOL *p);
HRESULT IHTMLElement3::put_inflateBlock(VARIANT_BOOL v);
HRESULT IHTMLElement3::get_isContentEditable(VARIANT_BOOL *p);
HRESULT IHTMLElement3::get_isDisabled(VARIANT_BOOL *p);
HRESULT IHTMLElement3::get_isMultiLine(VARIANT_BOOL *p);
HRESULT mergeAttributes( 
 IHTMLElement *mergeThis, 
 VARIANT *pvarFlags 
);
HRESULT IHTMLElement3::get_onactivate(VARIANT *p);
HRESULT IHTMLElement3::put_onactivate(VARIANT v);
HRESULT IHTMLElement3::get_onbeforedeactivate(VARIANT *p);
HRESULT IHTMLElement3::put_onbeforedeactivate(VARIANT v);
HRESULT IHTMLElement3::get_oncontrolselect(VARIANT *p);
HRESULT IHTMLElement3::put_oncontrolselect(VARIANT v);
HRESULT IHTMLElement3::get_ondeactivate(VARIANT *p);
HRESULT IHTMLElement3::put_ondeactivate(VARIANT v);
HRESULT IHTMLElement3::get_onlayoutcomplete(VARIANT *p);
HRESULT IHTMLElement3::put_onlayoutcomplete(VARIANT v);
HRESULT IHTMLElement3::get_onmouseenter(VARIANT *p);
HRESULT IHTMLElement3::put_onmouseenter(VARIANT v);
HRESULT IHTMLElement3::get_onmouseleave(VARIANT *p);
HRESULT IHTMLElement3::put_onmouseleave(VARIANT v);
HRESULT IHTMLElement3::get_onresizeend(VARIANT *p);
HRESULT IHTMLElement3::put_onresizeend(VARIANT v);
HRESULT IHTMLElement3::get_onresizestart(VARIANT *p);
HRESULT IHTMLElement3::put_onresizestart(VARIANT v);
HRESULT setActive(VOID);
HRESULT getAttributeNode( 
 BSTR bstrname, 
 IHTMLDOMAttribute **ppAttribute 
);
HRESULT normalize(VOID);
HRESULT IHTMLElement4::get_onbeforeactivate(VARIANT *p);
HRESULT IHTMLElement4::put_onbeforeactivate(VARIANT v);
HRESULT IHTMLElement4::get_onfocusin(VARIANT *p);
HRESULT IHTMLElement4::put_onfocusin(VARIANT v);
HRESULT IHTMLElement4::get_onfocusout(VARIANT *p);
HRESULT IHTMLElement4::put_onfocusout(VARIANT v);
HRESULT IHTMLElement4::get_onmousewheel(VARIANT *p);
HRESULT IHTMLElement4::put_onmousewheel(VARIANT v);
HRESULT removeAttributeNode( 
 IHTMLDOMAttribute *pattr, 
 IHTMLDOMAttribute **ppretAttribute 
);
HRESULT setAttributeNode( 
 IHTMLDOMAttribute *pattr, 
 IHTMLDOMAttribute **ppretAttribute 
);
HRESULT IHTMLElement::get_all(IDispatch **p);
HRESULT IHTMLElement::get_children(IDispatch **p);
HRESULT IHTMLElement::get_className(BSTR *p);
HRESULT IHTMLElement::put_className(BSTR v);
HRESULT click(VOID);
HRESULT contains( 
 IHTMLElement *pChild, 
 VARIANT_BOOL *pfResult 
);
HRESULT IHTMLElement::get_document(IHTMLDocument2 **p);
HRESULT IHTMLElement::get_filters(IHTMLFiltersCollection **p);
HRESULT getAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT *AttributeValue 
);
HRESULT IHTMLElement::get_id(BSTR *p);
HRESULT IHTMLElement::put_id(BSTR v);
HRESULT IHTMLElement::get_innerHTML(BSTR *p);
HRESULT IHTMLElement::put_innerHTML(BSTR v);
HRESULT IHTMLElement::get_innerText(BSTR *p);
HRESULT IHTMLElement::put_innerText(BSTR v);
HRESULT insertAdjacentHTML( 
 BSTR where, 
 BSTR html 
);
HRESULT insertAdjacentText( 
 BSTR where, 
 BSTR text 
);
HRESULT IHTMLElement::get_isTextEdit(VARIANT_BOOL *p);
HRESULT IHTMLElement::get_lang(BSTR *p);
HRESULT IHTMLElement::put_lang(BSTR v);
HRESULT IHTMLElement::get_language(BSTR *p);
HRESULT IHTMLElement::put_language(BSTR v);
HRESULT IHTMLElement::get_offsetHeight(long *p);
HRESULT IHTMLElement::get_offsetLeft(long *p);
HRESULT IHTMLElement::get_offsetParent(IHTMLElement **p);
HRESULT IHTMLElement::get_offsetTop(long *p);
HRESULT IHTMLElement::get_offsetWidth(long *p);
HRESULT IHTMLElement::get_onafterupdate(VARIANT *p);
HRESULT IHTMLElement::put_onafterupdate(VARIANT v);
HRESULT IHTMLElement::get_onbeforeupdate(VARIANT *p);
HRESULT IHTMLElement::put_onbeforeupdate(VARIANT v);
HRESULT IHTMLElement::get_onclick(VARIANT *p);
HRESULT IHTMLElement::put_onclick(VARIANT v);
HRESULT IHTMLElement::get_ondataavailable(VARIANT *p);
HRESULT IHTMLElement::put_ondataavailable(VARIANT v);
HRESULT IHTMLElement::get_ondatasetchanged(VARIANT *p);
HRESULT IHTMLElement::put_ondatasetchanged(VARIANT v);
HRESULT IHTMLElement::get_ondatasetcomplete(VARIANT *p);
HRESULT IHTMLElement::put_ondatasetcomplete(VARIANT v);
HRESULT IHTMLElement::get_ondblclick(VARIANT *p);
HRESULT IHTMLElement::put_ondblclick(VARIANT v);
HRESULT IHTMLElement::get_ondragstart(VARIANT *p);
HRESULT IHTMLElement::put_ondragstart(VARIANT v);
HRESULT IHTMLElement::get_onerrorupdate(VARIANT *p);
HRESULT IHTMLElement::put_onerrorupdate(VARIANT v);
HRESULT IHTMLElement::get_onfilterchange(VARIANT *p);
HRESULT IHTMLElement::put_onfilterchange(VARIANT v);
HRESULT IHTMLElement::get_onhelp(VARIANT *p);
HRESULT IHTMLElement::put_onhelp(VARIANT v);
HRESULT IHTMLElement::get_onkeydown(VARIANT *p);
HRESULT IHTMLElement::put_onkeydown(VARIANT v);
HRESULT IHTMLElement::get_onkeypress(VARIANT *p);
HRESULT IHTMLElement::put_onkeypress(VARIANT v);
HRESULT IHTMLElement::get_onkeyup(VARIANT *p);
HRESULT IHTMLElement::put_onkeyup(VARIANT v);
HRESULT IHTMLElement::get_onmousedown(VARIANT *p);
HRESULT IHTMLElement::put_onmousedown(VARIANT v);
HRESULT IHTMLElement::get_onmousemove(VARIANT *p);
HRESULT IHTMLElement::put_onmousemove(VARIANT v);
HRESULT IHTMLElement::get_onmouseout(VARIANT *p);
HRESULT IHTMLElement::put_onmouseout(VARIANT v);
HRESULT IHTMLElement::get_onmouseover(VARIANT *p);
HRESULT IHTMLElement::put_onmouseover(VARIANT v);
HRESULT IHTMLElement::get_onmouseup(VARIANT *p);
HRESULT IHTMLElement::put_onmouseup(VARIANT v);
HRESULT IHTMLElement::get_onrowenter(VARIANT *p);
HRESULT IHTMLElement::put_onrowenter(VARIANT v);
HRESULT IHTMLElement::get_onrowexit(VARIANT *p);
HRESULT IHTMLElement::put_onrowexit(VARIANT v);
HRESULT IHTMLElement::get_onselectstart(VARIANT *p);
HRESULT IHTMLElement::put_onselectstart(VARIANT v);
HRESULT IHTMLElement::get_outerHTML(BSTR *p);
HRESULT IHTMLElement::put_outerHTML(BSTR v);
HRESULT IHTMLElement::get_outerText(BSTR *p);
HRESULT IHTMLElement::put_outerText(BSTR v);
HRESULT IHTMLElement::get_parentElement(IHTMLElement **p);
HRESULT IHTMLElement::get_parentTextEdit(IHTMLElement **p);
HRESULT IHTMLElement::get_recordNumber(VARIANT *p);
HRESULT removeAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT_BOOL *pfSuccess 
);
HRESULT scrollIntoView( 
 VARIANT varargStart 
);
HRESULT setAttribute( 
 BSTR strAttributeName, 
 VARIANT AttributeValue, 
 LONG lFlags 
);
HRESULT IHTMLElement::get_sourceIndex(long *p);
HRESULT IHTMLElement::get_style(IHTMLStyle **p);
HRESULT IHTMLElement::get_tagName(BSTR *p);
HRESULT IHTMLElement::get_title(BSTR *p);
HRESULT IHTMLElement::put_title(BSTR v);
HRESULT toString( 
 BSTR *String 
);
HRESULT urns( 
 VARIANT urn, 
 IDispatch **pdisp 
);
HRESULT namedItem( 
 BSTR name, 
 IDispatch **pdisp 
);
HRESULT IHTMLElementCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 VARIANT name, 
 VARIANT index, 
 IDispatch **pdisp 
);
HRESULT IHTMLElementCollection::get_length(long *p);
HRESULT IHTMLElementCollection::put_length(long v);
HRESULT tags( 
 VARIANT tagName, 
 IDispatch **pdisp 
);
HRESULT toString( 
 BSTR *String 
);
HRESULT IHTMLElementDefaults::get_canHaveHTML(VARIANT_BOOL *p);
HRESULT IHTMLElementDefaults::get_contentEditable(BSTR *p);
HRESULT IHTMLElementDefaults::put_contentEditable(BSTR v);
HRESULT IHTMLElementDefaults::get_isMultiLine(VARIANT_BOOL *p);
HRESULT IHTMLElementDefaults::get_style(IHTMLStyle **p);
HRESULT IHTMLElementDefaults::get_tabStop(VARIANT_BOOL *p);
HRESULT IHTMLElementDefaults::put_tabStop(VARIANT_BOOL v);
HRESULT IHTMLElementDefaults::get_viewInheritStyle(VARIANT_BOOL *p);
HRESULT IHTMLElementDefaults::put_viewInheritStyle(VARIANT_BOOL v);
HRESULT IHTMLElementDefaults::get_viewLink(IHTMLDocument **p);
HRESULT IHTMLElementDefaults::putref_viewLink(IHTMLDocument *v);
HRESULT IHTMLElementDefaults::get_viewMasterTab(VARIANT_BOOL *p);
HRESULT IHTMLElementDefaults::put_viewMasterTab(VARIANT_BOOL v);
HRESULT DrawToDC( 
 HDC hDC 
);
HRESULT SetDocumentPrinter( 
 BSTR bstrPrinterName, 
 HDC hDC 
);
HRESULT IHTMLEmbedElement::get_height(VARIANT *p);
HRESULT IHTMLEmbedElement::put_height(VARIANT v);
HRESULT IHTMLEmbedElement::get_hidden(BSTR *p);
HRESULT IHTMLEmbedElement::put_hidden(BSTR v);
HRESULT IHTMLEmbedElement::get_name(BSTR *p);
HRESULT IHTMLEmbedElement::put_name(BSTR v);
HRESULT IHTMLEmbedElement::get_palette(BSTR *p);
HRESULT IHTMLEmbedElement::get_pluginspage(BSTR *p);
HRESULT IHTMLEmbedElement::get_src(BSTR *p);
HRESULT IHTMLEmbedElement::put_src(BSTR v);
HRESULT IHTMLEmbedElement::get_units(BSTR *p);
HRESULT IHTMLEmbedElement::put_units(BSTR v);
HRESULT IHTMLEmbedElement::get_width(VARIANT *p);
HRESULT IHTMLEmbedElement::put_width(VARIANT v);
HRESULT IHTMLEventObj2::get_altKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj2::get_bookmarks(IHTMLBookmarkCollection **p);
HRESULT IHTMLEventObj2::put_bookmarks(IHTMLBookmarkCollection *v);
HRESULT IHTMLEventObj2::get_boundElements(IHTMLElementCollection *v);
HRESULT IHTMLEventObj2::get_button(long *p);
HRESULT IHTMLEventObj2::put_button(long v);
HRESULT IHTMLEventObj2::get_clientX(long *p);
HRESULT IHTMLEventObj2::put_clientX(long v);
HRESULT IHTMLEventObj2::get_clientY(long *p);
HRESULT IHTMLEventObj2::put_clientY(long v);
HRESULT IHTMLEventObj2::get_ctrlKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj2::put_ctrlKey(VARIANT_BOOL v);
HRESULT IHTMLEventObj2::get_dataFld(BSTR *p);
HRESULT IHTMLEventObj2::put_dataFld(BSTR v);
HRESULT IHTMLEventObj2::get_dataTransfer(IHTMLDataTransfer **p);
HRESULT IHTMLEventObj2::get_fromElement(IHTMLElement **p);
HRESULT IHTMLEventObj2::put_fromElement(IHTMLElement *v);
HRESULT getAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT *AttributeValue 
);
HRESULT IHTMLEventObj2::get_offsetX(long *p);
HRESULT IHTMLEventObj2::put_offsetX(long v);
HRESULT IHTMLEventObj2::get_offsetY(long *p);
HRESULT IHTMLEventObj2::put_offsetY(long v);
HRESULT IHTMLEventObj2::get_propertyName(BSTR *p);
HRESULT IHTMLEventObj2::put_propertyName(BSTR v);
HRESULT IHTMLEventObj2::get_qualifier(BSTR *p);
HRESULT IHTMLEventObj2::put_qualifier(BSTR v);
HRESULT IHTMLEventObj2::get_reason(long *p);
HRESULT IHTMLEventObj2::put_reason(long v);
HRESULT IHTMLEventObj2::get_recordset(IDispatch **p);
HRESULT IHTMLEventObj2::put_recordset(IDispatch *v);
HRESULT removeAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT_BOOL *pfSuccess 
);
HRESULT IHTMLEventObj2::get_repeat(VARIANT_BOOL *p);
HRESULT IHTMLEventObj2::put_repeat(VARIANT_BOOL v);
HRESULT IHTMLEventObj2::get_screenX(long *p);
HRESULT IHTMLEventObj2::put_screenX(long v);
HRESULT IHTMLEventObj2::get_screenY(long *p);
HRESULT IHTMLEventObj2::put_screenY(long v);
HRESULT setAttribute( 
 BSTR strAttributeName, 
 VARIANT AttributeValue, 
 LONG lFlags 
);
HRESULT IHTMLEventObj2::get_shiftKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj2::get_srcElement(IHTMLElement **p);
HRESULT IHTMLEventObj2::put_srcElement(IHTMLElement *v);
HRESULT IHTMLEventObj2::get_srcFilter(IDispatch **p);
HRESULT IHTMLEventObj2::put_srcFilter(IDispatch *v);
HRESULT IHTMLEventObj2::get_srcUrn(BSTR *p);
HRESULT IHTMLEventObj2::put_srcUrn(BSTR v);
HRESULT IHTMLEventObj2::get_toElement(IHTMLElement **p);
HRESULT IHTMLEventObj2::put_toElement(IHTMLElement *v);
HRESULT IHTMLEventObj2::get_type(BSTR *p);
HRESULT IHTMLEventObj2::put_type(BSTR v);
HRESULT IHTMLEventObj2::get_x(long *p);
HRESULT IHTMLEventObj2::put_x(long v);
HRESULT IHTMLEventObj2::get_y(long *p);
HRESULT IHTMLEventObj2::put_y(long v);
HRESULT IHTMLEventObj3::get_altLeft(VARIANT_BOOL *p);
HRESULT IHTMLEventObj3::get_behaviorCookie(long *p);
HRESULT IHTMLEventObj3::get_behaviorPart(long *p);
HRESULT IHTMLEventObj3::get_contentOverflow(VARIANT_BOOL *p);
HRESULT IHTMLEventObj3::get_ctrlLeft(VARIANT_BOOL *p);
HRESULT IHTMLEventObj3::put_ctrlLeft(VARIANT_BOOL v);
HRESULT IHTMLEventObj3::get_nextPage(BSTR *p);
HRESULT IHTMLEventObj3::get_shiftLeft(VARIANT_BOOL *p);
HRESULT IHTMLEventObj4::get_wheelDelta(long *p);
HRESULT IHTMLEventObj::get_altKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj::get_button(long *p);
HRESULT IHTMLEventObj::get_cancelBubble(VARIANT_BOOL *p);
HRESULT IHTMLEventObj::put_cancelBubble(VARIANT_BOOL v);
HRESULT IHTMLEventObj::get_clientX(long *p);
HRESULT IHTMLEventObj::get_clientY(long *p);
HRESULT IHTMLEventObj::get_ctrlKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj::get_fromElement(IHTMLElement **p);
HRESULT IHTMLEventObj::get_keyCode(long *p);
HRESULT IHTMLEventObj::put_keyCode(long v);
HRESULT IHTMLEventObj::get_offsetX(long *p);
HRESULT IHTMLEventObj::get_offsetY(long *p);
HRESULT IHTMLEventObj::get_qualifier(BSTR *p);
HRESULT IHTMLEventObj::get_reason(long *p);
HRESULT IHTMLEventObj::get_returnValue(VARIANT *p);
HRESULT IHTMLEventObj::put_returnValue(VARIANT v);
HRESULT IHTMLEventObj::get_screenX(long *p);
HRESULT IHTMLEventObj::get_screenY(long *p);
HRESULT IHTMLEventObj::get_shiftKey(VARIANT_BOOL *p);
HRESULT IHTMLEventObj::get_srcElement(IHTMLElement **p);
HRESULT IHTMLEventObj::get_srcFilter(IDispatch **p);
HRESULT IHTMLEventObj::get_toElement(IHTMLElement **p);
HRESULT IHTMLEventObj::get_type(BSTR *p);
HRESULT IHTMLEventObj::get_x(long *p);
HRESULT IHTMLEventObj::get_y(long *p);
HRESULT IHTMLFieldSetElement2::get_form(IHTMLFormElement **p);
HRESULT IHTMLFieldSetElement::get_align(BSTR *p);
HRESULT IHTMLFieldSetElement::put_align(BSTR v);
HRESULT IHTMLFiltersCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 VARIANT *pvarIndex, 
 VARIANT *pvarResult 
);
HRESULT IHTMLFiltersCollection::get_length(long *p);
HRESULT IHTMLFontElement::get_color(VARIANT *p);
HRESULT IHTMLFontElement::put_color(VARIANT v);
HRESULT IHTMLFontElement::get_face(BSTR *p);
HRESULT IHTMLFontElement::put_face(BSTR v);
HRESULT IHTMLFontElement::get_size(long *p);
HRESULT IHTMLFontElement::put_size(long v);
HRESULT IHTMLFontNamesCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 long index, 
 BSTR *pName 
);
HRESULT IHTMLFontNamesCollection::get_length(long *p);
HRESULT IHTMLFontSizesCollection::get__newEnum(IUnknown **p);
HRESULT IHTMLFontSizesCollection::get_forFont(BSTR *p);
HRESULT item( 
 long index, 
 long *plSize 
);
HRESULT IHTMLFontSizesCollection::get_length(long *p);
HRESULT IHTMLFormElement2::get_acceptCharset(BSTR *p);
HRESULT IHTMLFormElement2::put_acceptCharset(BSTR v);
HRESULT urns( 
 VARIANT urn, 
 IDispatch **pdisp 
);
HRESULT namedItem( 
 BSTR name, 
 IDispatch **pdisp 
);
HRESULT IHTMLFormElement::get__newEnum(IUnknown **p);
HRESULT IHTMLFormElement::get_action(BSTR *p);
HRESULT IHTMLFormElement::put_action(BSTR v);
HRESULT IHTMLFormElement::get_dir(BSTR *p);
HRESULT IHTMLFormElement::put_dir(BSTR v);
HRESULT IHTMLFormElement::get_elements(IDispatch **p);
HRESULT IHTMLFormElement::get_encoding(BSTR *p);
HRESULT IHTMLFormElement::put_encoding(BSTR v);
HRESULT item( 
 VARIANT name, 
 VARIANT index, 
 IDispatch **pdisp 
);
HRESULT IHTMLFormElement::get_length(long *p);
HRESULT IHTMLFormElement::put_length(long v);
HRESULT IHTMLFormElement::get_method(BSTR *p);
HRESULT IHTMLFormElement::put_method(BSTR v);
HRESULT IHTMLFormElement::get_name(BSTR *p);
HRESULT IHTMLFormElement::put_name(BSTR v);
HRESULT IHTMLFormElement::get_onreset(VARIANT *p);
HRESULT IHTMLFormElement::put_onreset(VARIANT v);
HRESULT IHTMLFormElement::get_onsubmit(VARIANT *p);
HRESULT IHTMLFormElement::put_onsubmit(VARIANT v);
HRESULT reset(VOID);
HRESULT submit(VOID);
HRESULT tags( 
 VARIANT tagName, 
 IDispatch **pdisp 
);
HRESULT IHTMLFormElement::get_target(BSTR *p);
HRESULT IHTMLFormElement::put_target(BSTR v);
HRESULT IHTMLFrameBase2::get_allowTransparency(VARIANT_BOOL *p);
HRESULT IHTMLFrameBase2::put_allowTransparency(VARIANT_BOOL v);
HRESULT IHTMLFrameBase2::get_contentWindow(IHTMLWindow2 **p);
HRESULT IHTMLFrameBase2::get_onload(VARIANT *p);
HRESULT IHTMLFrameBase2::put_onload(VARIANT v);
HRESULT IHTMLFrameBase2::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLFrameBase2::put_onreadystatechange(VARIANT v);
HRESULT IHTMLFrameBase2::get_readyState(BSTR *p);
HRESULT IHTMLFrameBase3::get_longDesc(BSTR *p);
HRESULT IHTMLFrameBase3::put_longDesc(BSTR v);
HRESULT IHTMLFrameBase::get_border(VARIANT *p);
HRESULT IHTMLFrameBase::put_border(VARIANT v);
HRESULT IHTMLFrameBase::get_frameBorder(BSTR *p);
HRESULT IHTMLFrameBase::put_frameBorder(BSTR v);
HRESULT IHTMLFrameBase::get_frameSpacing(VARIANT *p);
HRESULT IHTMLFrameBase::put_frameSpacing(VARIANT v);
HRESULT IHTMLFrameBase::get_marginHeight(VARIANT *p);
HRESULT IHTMLFrameBase::put_marginHeight(VARIANT v);
HRESULT IHTMLFrameBase::get_marginWidth(VARIANT *p);
HRESULT IHTMLFrameBase::put_marginWidth(VARIANT v);
HRESULT IHTMLFrameBase::get_name(BSTR *p);
HRESULT IHTMLFrameBase::put_name(BSTR v);
HRESULT IHTMLFrameBase::get_noResize(VARIANT_BOOL *p);
HRESULT IHTMLFrameBase::put_noResize(VARIANT_BOOL v);
HRESULT IHTMLFrameBase::get_scrolling(BSTR *p);
HRESULT IHTMLFrameBase::put_scrolling(BSTR v);
HRESULT IHTMLFrameBase::get_src(BSTR *p);
HRESULT IHTMLFrameBase::put_src(BSTR v);
HRESULT IHTMLFrameElement2::get_height(VARIANT *p);
HRESULT IHTMLFrameElement2::get_width(VARIANT *p);
HRESULT IHTMLFrameElement::get_borderColor(VARIANT *p);
HRESULT IHTMLFrameElement::put_borderColor(VARIANT v);
HRESULT item( 
 VARIANT *pvarIndex, 
 VARIANT *pvarResult 
);
HRESULT IHTMLFramesCollection2::get_length(long *p);
HRESULT IHTMLFrameSetElement2::get_onafterprint(VARIANT *p);
HRESULT IHTMLFrameSetElement2::put_onafterprint(VARIANT v);
HRESULT IHTMLFrameSetElement2::get_onbeforeprint(VARIANT *p);
HRESULT IHTMLFrameSetElement2::put_onbeforeprint(VARIANT v);
HRESULT IHTMLFrameSetElement::get_border(VARIANT *p);
HRESULT IHTMLFrameSetElement::put_border(VARIANT v);
HRESULT IHTMLFrameSetElement::get_borderColor(VARIANT *p);
HRESULT IHTMLFrameSetElement::put_borderColor(VARIANT v);
HRESULT IHTMLFrameSetElement::get_cols(long *p);
HRESULT IHTMLFrameSetElement::put_cols(long v);
HRESULT IHTMLFrameSetElement::get_frameBorder(BSTR *p);
HRESULT IHTMLFrameSetElement::put_frameBorder(BSTR v);
HRESULT IHTMLFrameSetElement::get_frameSpacing(VARIANT *p);
HRESULT IHTMLFrameSetElement::put_frameSpacing(VARIANT v);
HRESULT IHTMLFrameSetElement::get_name(BSTR *p);
HRESULT IHTMLFrameSetElement::put_name(BSTR v);
HRESULT IHTMLFrameSetElement::get_onbeforeunload(VARIANT *p);
HRESULT IHTMLFrameSetElement::put_onbeforeunload(VARIANT v);
HRESULT IHTMLFrameSetElement::get_onload(VARIANT *p);
HRESULT IHTMLFrameSetElement::put_onload(VARIANT v);
HRESULT IHTMLFrameSetElement::get_onunload(VARIANT *p);
HRESULT IHTMLFrameSetElement::put_onunload(VARIANT v);
HRESULT IHTMLFrameSetElement::get_rows(long *p);
HRESULT IHTMLFrameSetElement::put_rows(long v);
HRESULT namedRecordset( 
 BSTR dataMember, 
 VARIANT *hierarchy, 
 IDispatch **ppRecordset 
);
HRESULT IHTMLGenericElement::get_recordset(IDispatch **p);
HRESULT IHTMLGenericElement::put_recordset(IDispatch *v);
HRESULT IHTMLHeadElement::get_profile(BSTR *p);
HRESULT IHTMLHeadElement::put_profile(BSTR v);
HRESULT IHTMLHeaderElement::get_align(BSTR *p);
HRESULT IHTMLHeaderElement::put_align(BSTR v);
HRESULT IHTMLHRElement::get_align(BSTR *p);
HRESULT IHTMLHRElement::put_align(BSTR v);
HRESULT IHTMLHRElement::get_color(VARIANT *p);
HRESULT IHTMLHRElement::put_color(VARIANT v);
HRESULT IHTMLHRElement::get_noShade(VARIANT_BOOL *p);
HRESULT IHTMLHRElement::put_noShade(VARIANT_BOOL v);
HRESULT IHTMLHRElement::get_size(VARIANT *p);
HRESULT IHTMLHRElement::put_size(VARIANT v);
HRESULT IHTMLHRElement::get_width(VARIANT *p);
HRESULT IHTMLHRElement::put_width(VARIANT v);
HRESULT IHTMLHtmlElement::get_version(BSTR *p);
HRESULT IHTMLHtmlElement::put_version(BSTR v);
HRESULT IHTMLIFrameElement::get_align(BSTR *p);
HRESULT IHTMLIFrameElement::put_align(BSTR v);
HRESULT IHTMLIFrameElement::get_hspace(long *p);
HRESULT IHTMLIFrameElement::put_hspace(long v);
HRESULT IHTMLIFrameElement::get_vspace(long *p);
HRESULT IHTMLIFrameElement::put_vspace(long v);
HRESULT create( 
 VARIANT width, 
 VARIANT height, 
 IHTMLImgElement **ppImgElement 
);
HRESULT IHTMLImgElement2::get_longDesc(BSTR *p);
HRESULT IHTMLImgElement2::put_longDesc(BSTR v);
HRESULT IHTMLImgElement::get_align(BSTR *p);
HRESULT IHTMLImgElement::put_align(BSTR v);
HRESULT IHTMLImgElement::get_alt(BSTR *p);
HRESULT IHTMLImgElement::put_alt(BSTR v);
HRESULT IHTMLImgElement::get_border(VARIANT *p);
HRESULT IHTMLImgElement::put_border(VARIANT v);
HRESULT IHTMLImgElement::get_complete(VARIANT_BOOL *p);
HRESULT IHTMLImgElement::get_dynsrc(BSTR *p);
HRESULT IHTMLImgElement::put_dynsrc(BSTR v);
HRESULT IHTMLImgElement::get_fileCreatedDate(BSTR *p);
HRESULT IHTMLImgElement::get_fileModifiedDate(BSTR *p);
HRESULT IHTMLImgElement::get_fileSize(BSTR *p);
HRESULT IHTMLImgElement::get_fileUpdatedDate(BSTR *p);
HRESULT IHTMLImgElement::get_height(VARIANT *p);
HRESULT IHTMLImgElement::put_height(VARIANT v);
HRESULT IHTMLImgElement::get_href(BSTR *p);
HRESULT IHTMLImgElement::get_hspace(long *p);
HRESULT IHTMLImgElement::put_hspace(long v);
HRESULT IHTMLImgElement::get_isMap(VARIANT_BOOL *p);
HRESULT IHTMLImgElement::put_isMap(VARIANT_BOOL v);
HRESULT IHTMLImgElement::get_loop(VARIANT *p);
HRESULT IHTMLImgElement::put_loop(VARIANT v);
HRESULT IHTMLImgElement::get_lowsrc(BSTR *p);
HRESULT IHTMLImgElement::put_lowsrc(BSTR v);
HRESULT IHTMLImgElement::get_mimeType(BSTR *p);
HRESULT IHTMLImgElement::get_name(BSTR *p);
HRESULT IHTMLImgElement::put_name(BSTR v);
HRESULT IHTMLImgElement::get_nameProp(BSTR *p);
HRESULT IHTMLImgElement::get_onabort(VARIANT *p);
HRESULT IHTMLImgElement::put_onabort(VARIANT v);
HRESULT IHTMLImgElement::get_onerror(VARIANT *p);
HRESULT IHTMLImgElement::put_onerror(VARIANT v);
HRESULT IHTMLImgElement::get_onload(VARIANT *p);
HRESULT IHTMLImgElement::put_onload(VARIANT v);
HRESULT IHTMLImgElement::get_protocol(BSTR *p);
HRESULT IHTMLImgElement::put_protocol(BSTR v);
HRESULT IHTMLImgElement::get_readyState(BSTR *p);
HRESULT IHTMLImgElement::get_src(BSTR *p);
HRESULT IHTMLImgElement::put_src(BSTR v);
HRESULT IHTMLImgElement::get_start(BSTR *p);
HRESULT IHTMLImgElement::put_start(BSTR v);
HRESULT IHTMLImgElement::get_useMap(BSTR *p);
HRESULT IHTMLImgElement::put_useMap(BSTR v);
HRESULT IHTMLImgElement::get_vrml(BSTR *p);
HRESULT IHTMLImgElement::put_vrml(BSTR v);
HRESULT IHTMLImgElement::get_vspace(long *p);
HRESULT IHTMLImgElement::put_vspace(long v);
HRESULT IHTMLImgElement::get_width(long *p);
HRESULT IHTMLImgElement::put_width(long v);
HRESULT createTextRange( 
 IHTMLTxtRange **range 
);
HRESULT IHTMLInputButtonElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLInputButtonElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLInputButtonElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLInputButtonElement::get_name(BSTR *p);
HRESULT IHTMLInputButtonElement::put_name(BSTR v);
HRESULT IHTMLInputButtonElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLInputButtonElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLInputButtonElement::get_type(BSTR *p);
HRESULT IHTMLInputButtonElement::put_type(BSTR v);
HRESULT IHTMLInputButtonElement::get_value(BSTR *p);
HRESULT IHTMLInputButtonElement::put_value(BSTR v);
HRESULT IHTMLInputElement2::get_accept(BSTR *p);
HRESULT IHTMLInputElement2::put_accept(BSTR v);
HRESULT IHTMLInputElement2::get_useMap(BSTR *p);
HRESULT IHTMLInputElement2::put_useMap(BSTR v);
HRESULT IHTMLInputElement::get_align(BSTR *p);
HRESULT IHTMLInputElement::put_align(BSTR v);
HRESULT IHTMLInputElement::get_alt(BSTR *p);
HRESULT IHTMLInputElement::put_alt(BSTR v);
HRESULT IHTMLInputElement::get_border(VARIANT *p);
HRESULT IHTMLInputElement::put_border(VARIANT v);
HRESULT IHTMLInputElement::get_checked(VARIANT_BOOL *p);
HRESULT IHTMLInputElement::put_checked(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_complete(VARIANT_BOOL *p);
HRESULT createTextRange( 
 IHTMLTxtRange **range 
);
HRESULT IHTMLInputElement::get_defaultChecked(VARIANT_BOOL *p);
HRESULT IHTMLInputElement::put_defaultChecked(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_defaultValue(BSTR *p);
HRESULT IHTMLInputElement::put_defaultValue(BSTR v);
HRESULT IHTMLInputElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLInputElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_dynsrc(BSTR *p);
HRESULT IHTMLInputElement::put_dynsrc(BSTR v);
HRESULT IHTMLInputElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLInputElement::get_height(VARIANT *p);
HRESULT IHTMLInputElement::put_height(VARIANT v);
HRESULT IHTMLInputElement::get_hspace(long *p);
HRESULT IHTMLInputElement::put_hspace(long v);
HRESULT IHTMLInputElement::get_indeterminate(VARIANT_BOOL *p);
HRESULT IHTMLInputElement::put_indeterminate(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_loop(VARIANT *p);
HRESULT IHTMLInputElement::put_loop(VARIANT v);
HRESULT IHTMLInputElement::get_lowsrc(BSTR *p);
HRESULT IHTMLInputElement::put_lowsrc(BSTR v);
HRESULT IHTMLInputElement::get_maxLength(long *p);
HRESULT IHTMLInputElement::put_maxLength(long v);
HRESULT IHTMLInputElement::get_name(BSTR *p);
HRESULT IHTMLInputElement::put_name(BSTR v);
HRESULT IHTMLInputElement::get_onabort(VARIANT *p);
HRESULT IHTMLInputElement::put_onabort(VARIANT v);
HRESULT IHTMLInputElement::get_onchange(VARIANT *p);
HRESULT IHTMLInputElement::put_onchange(VARIANT v);
HRESULT IHTMLInputElement::get_onerror(VARIANT *p);
HRESULT IHTMLInputElement::put_onerror(VARIANT v);
HRESULT IHTMLInputElement::get_onload(VARIANT *p);
HRESULT IHTMLInputElement::put_onload(VARIANT v);
HRESULT IHTMLInputElement::get_onselect(VARIANT *p);
HRESULT IHTMLInputElement::put_onselect(VARIANT v);
HRESULT IHTMLInputElement::get_readOnly(VARIANT_BOOL *p);
HRESULT IHTMLInputElement::put_readOnly(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_readyState(BSTR *p);
HRESULT select(VOID);
HRESULT IHTMLInputElement::get_size(long *p);
HRESULT IHTMLInputElement::put_size(long v);
HRESULT IHTMLInputElement::get_src(BSTR *p);
HRESULT IHTMLInputElement::put_src(BSTR v);
HRESULT IHTMLInputElement::get_start(BSTR *p);
HRESULT IHTMLInputElement::put_start(BSTR v);
HRESULT IHTMLInputElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLInputElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLInputElement::get_type(BSTR *p);
HRESULT IHTMLInputElement::put_type(BSTR v);
HRESULT IHTMLInputElement::get_value(BSTR *p);
HRESULT IHTMLInputElement::put_value(BSTR v);
HRESULT IHTMLInputElement::get_vrml(BSTR *p);
HRESULT IHTMLInputElement::put_vrml(BSTR v);
HRESULT IHTMLInputElement::get_vspace(long *p);
HRESULT IHTMLInputElement::put_vspace(long v);
HRESULT IHTMLInputElement::get_width(long *p);
HRESULT IHTMLInputElement::put_width(long v);
HRESULT IHTMLInputFileElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLInputFileElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLInputFileElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLInputFileElement::get_maxLength(long *p);
HRESULT IHTMLInputFileElement::put_maxLength(long v);
HRESULT IHTMLInputFileElement::get_name(BSTR *p);
HRESULT IHTMLInputFileElement::put_name(BSTR v);
HRESULT IHTMLInputFileElement::get_onchange(VARIANT *p);
HRESULT IHTMLInputFileElement::put_onchange(VARIANT v);
HRESULT IHTMLInputFileElement::get_onselect(VARIANT *p);
HRESULT IHTMLInputFileElement::put_onselect(VARIANT v);
HRESULT select(VOID);
HRESULT IHTMLInputFileElement::get_size(long *p);
HRESULT IHTMLInputFileElement::put_size(long v);
HRESULT IHTMLInputFileElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLInputFileElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLInputFileElement::get_type(BSTR *p);
HRESULT IHTMLInputFileElement::put_type(BSTR v);
HRESULT IHTMLInputFileElement::get_value(BSTR *p);
HRESULT IHTMLInputFileElement::put_value(BSTR v);
HRESULT createTextRange( 
 IHTMLTxtRange **range 
);
HRESULT IHTMLInputHiddenElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLInputHiddenElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLInputHiddenElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLInputHiddenElement::get_name(BSTR *p);
HRESULT IHTMLInputHiddenElement::put_name(BSTR v);
HRESULT IHTMLInputHiddenElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLInputHiddenElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLInputHiddenElement::get_type(BSTR *p);
HRESULT IHTMLInputHiddenElement::put_type(BSTR v);
HRESULT IHTMLInputHiddenElement::get_value(BSTR *p);
HRESULT IHTMLInputHiddenElement::put_value(BSTR v);
HRESULT IHTMLInputImage::get_align(BSTR *p);
HRESULT IHTMLInputImage::put_align(BSTR v);
HRESULT IHTMLInputImage::get_alt(BSTR *p);
HRESULT IHTMLInputImage::put_alt(BSTR v);
HRESULT IHTMLInputImage::get_border(VARIANT *p);
HRESULT IHTMLInputImage::put_border(VARIANT v);
HRESULT IHTMLInputImage::get_complete(VARIANT_BOOL *p);
HRESULT IHTMLInputImage::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLInputImage::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLInputImage::get_dynsrc(BSTR *p);
HRESULT IHTMLInputImage::put_dynsrc(BSTR v);
HRESULT IHTMLInputImage::get_height(VARIANT *p);
HRESULT IHTMLInputImage::put_height(VARIANT v);
HRESULT IHTMLInputImage::get_hspace(long *p);
HRESULT IHTMLInputImage::put_hspace(long v);
HRESULT IHTMLInputImage::get_loop(VARIANT *p);
HRESULT IHTMLInputImage::put_loop(VARIANT v);
HRESULT IHTMLInputImage::get_lowsrc(BSTR *p);
HRESULT IHTMLInputImage::put_lowsrc(BSTR v);
HRESULT IHTMLInputImage::get_name(BSTR *p);
HRESULT IHTMLInputImage::put_name(BSTR v);
HRESULT IHTMLInputImage::get_onabort(VARIANT *p);
HRESULT IHTMLInputImage::put_onabort(VARIANT v);
HRESULT IHTMLInputImage::get_onerror(VARIANT *p);
HRESULT IHTMLInputImage::put_onerror(VARIANT v);
HRESULT IHTMLInputImage::get_onload(VARIANT *p);
HRESULT IHTMLInputImage::put_onload(VARIANT v);
HRESULT IHTMLInputImage::get_readyState(BSTR *p);
HRESULT IHTMLInputImage::get_src(BSTR *p);
HRESULT IHTMLInputImage::put_src(BSTR v);
HRESULT IHTMLInputImage::get_start(BSTR *p);
HRESULT IHTMLInputImage::put_start(BSTR v);
HRESULT IHTMLInputImage::get_type(BSTR *p);
HRESULT IHTMLInputImage::put_type(BSTR v);
HRESULT IHTMLInputImage::get_vrml(BSTR *p);
HRESULT IHTMLInputImage::put_vrml(BSTR v);
HRESULT IHTMLInputImage::get_vspace(long *p);
HRESULT IHTMLInputImage::put_vspace(long v);
HRESULT IHTMLInputImage::get_width(long *p);
HRESULT IHTMLInputImage::put_width(long v);
HRESULT createTextRange( 
 IHTMLTxtRange **range 
);
HRESULT IHTMLInputTextElement::get_defaultValue(BSTR *p);
HRESULT IHTMLInputTextElement::put_defaultValue(BSTR v);
HRESULT IHTMLInputTextElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLInputTextElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLInputTextElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLInputTextElement::get_maxLength(long *p);
HRESULT IHTMLInputTextElement::put_maxLength(long v);
HRESULT IHTMLInputTextElement::get_name(BSTR *p);
HRESULT IHTMLInputTextElement::put_name(BSTR v);
HRESULT IHTMLInputTextElement::get_onchange(VARIANT *p);
HRESULT IHTMLInputTextElement::put_onchange(VARIANT v);
HRESULT IHTMLInputTextElement::get_onselect(VARIANT *p);
HRESULT IHTMLInputTextElement::put_onselect(VARIANT v);
HRESULT IHTMLInputTextElement::get_readOnly(VARIANT_BOOL *p);
HRESULT IHTMLInputTextElement::put_readOnly(VARIANT_BOOL v);
HRESULT select(VOID);
HRESULT IHTMLInputTextElement::get_size(long *p);
HRESULT IHTMLInputTextElement::put_size(long v);
HRESULT IHTMLInputTextElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLInputTextElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLInputTextElement::get_type(BSTR *p);
HRESULT IHTMLInputTextElement::put_type(BSTR v);
HRESULT IHTMLInputTextElement::get_value(BSTR *p);
HRESULT IHTMLInputTextElement::put_value(BSTR v);
HRESULT IHTMLIsIndexElement2::get_form(IHTMLFormElement **p);
HRESULT IHTMLIsIndexElement::get_action(BSTR *p);
HRESULT IHTMLIsIndexElement::put_action(BSTR v);
HRESULT IHTMLIsIndexElement::get_prompt(BSTR *p);
HRESULT IHTMLIsIndexElement::put_prompt(BSTR v);
HRESULT IHTMLLabelElement2::get_form(IHTMLFormElement **p);
HRESULT IHTMLLabelElement::get_accessKey(BSTR *p);
HRESULT IHTMLLabelElement::put_accessKey(BSTR v);
HRESULT IHTMLLabelElement::get_htmlFor(BSTR *p);
HRESULT IHTMLLabelElement::put_htmlFor(BSTR v);
HRESULT IHTMLLegendElement2::get_form(IHTMLFormElement **p);
HRESULT IHTMLLegendElement::get_align(BSTR *p);
HRESULT IHTMLLegendElement::put_align(BSTR v);
HRESULT IHTMLLIElement::get_type(BSTR *p);
HRESULT IHTMLLIElement::put_type(BSTR v);
HRESULT IHTMLLIElement::get_value(long *p);
HRESULT IHTMLLIElement::put_value(long v);
HRESULT IHTMLLinkElement2::get_target(BSTR *p);
HRESULT IHTMLLinkElement2::put_target(BSTR v);
HRESULT IHTMLLinkElement3::get_charset(BSTR *p);
HRESULT IHTMLLinkElement3::put_charset(BSTR v);
HRESULT IHTMLLinkElement3::get_hreflang(BSTR *p);
HRESULT IHTMLLinkElement3::put_hreflang(BSTR v);
HRESULT IHTMLLinkElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLLinkElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLLinkElement::get_href(BSTR *p);
HRESULT IHTMLLinkElement::put_href(BSTR v);
HRESULT IHTMLLinkElement::get_media(BSTR *p);
HRESULT IHTMLLinkElement::put_media(BSTR v);
HRESULT IHTMLLinkElement::get_onerror(VARIANT *p);
HRESULT IHTMLLinkElement::put_onerror(VARIANT v);
HRESULT IHTMLLinkElement::get_onload(VARIANT *p);
HRESULT IHTMLLinkElement::put_onload(VARIANT v);
HRESULT IHTMLLinkElement::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLLinkElement::put_onreadystatechange(VARIANT v);
HRESULT IHTMLLinkElement::get_readyState(BSTR *p);
HRESULT IHTMLLinkElement::get_rel(BSTR *p);
HRESULT IHTMLLinkElement::put_rel(BSTR v);
HRESULT IHTMLLinkElement::get_rev(BSTR *p);
HRESULT IHTMLLinkElement::put_rev(BSTR v);
HRESULT IHTMLLinkElement::get_styleSheet(IHTMLStyleSheet **p);
HRESULT IHTMLLinkElement::get_type(BSTR *p);
HRESULT IHTMLLinkElement::put_type(BSTR v);
HRESULT IHTMLListElement2::get_compact(VARIANT_BOOL *p);
HRESULT IHTMLListElement2::put_compact(VARIANT_BOOL v);
HRESULT assign( 
 BSTR bstr 
);
HRESULT IHTMLLocation::get_hash(BSTR *p);
HRESULT IHTMLLocation::put_hash(BSTR v);
HRESULT IHTMLLocation::get_host(BSTR *p);
HRESULT IHTMLLocation::put_host(BSTR v);
HRESULT IHTMLLocation::get_hostname(BSTR *p);
HRESULT IHTMLLocation::put_hostname(BSTR v);
HRESULT IHTMLLocation::get_href(BSTR *p);
HRESULT IHTMLLocation::put_href(BSTR v);
HRESULT IHTMLLocation::get_pathname(BSTR *p);
HRESULT IHTMLLocation::put_pathname(BSTR v);
HRESULT IHTMLLocation::get_port(BSTR *p);
HRESULT IHTMLLocation::put_port(BSTR v);
HRESULT IHTMLLocation::get_protocol(BSTR *p);
HRESULT IHTMLLocation::put_protocol(BSTR v);
HRESULT reload( 
 VARIANT_BOOL flag 
);
HRESULT replace( 
 BSTR bstr 
);
HRESULT IHTMLLocation::get_search(BSTR *p);
HRESULT IHTMLLocation::put_search(BSTR v);
HRESULT toString( 
 BSTR *String 
);
HRESULT IHTMLMapElement::get_areas(IHTMLAreasCollection **p);
HRESULT IHTMLMapElement::get_name(BSTR *p);
HRESULT IHTMLMapElement::put_name(BSTR v);
HRESULT IHTMLMarqueeElement::get_behavior(BSTR *p);
HRESULT IHTMLMarqueeElement::put_behavior(BSTR v);
HRESULT IHTMLMarqueeElement::get_bgColor(VARIANT *p);
HRESULT IHTMLMarqueeElement::put_bgColor(VARIANT v);
HRESULT IHTMLMarqueeElement::get_direction(BSTR *p);
HRESULT IHTMLMarqueeElement::put_direction(BSTR v);
HRESULT IHTMLMarqueeElement::get_height(VARIANT *p);
HRESULT IHTMLMarqueeElement::put_height(VARIANT v);
HRESULT IHTMLMarqueeElement::get_hspace(long *p);
HRESULT IHTMLMarqueeElement::put_hspace(long v);
HRESULT IHTMLMarqueeElement::get_loop(long *p);
HRESULT IHTMLMarqueeElement::put_loop(long v);
HRESULT IHTMLMarqueeElement::get_onbounce(VARIANT *p);
HRESULT IHTMLMarqueeElement::put_onbounce(VARIANT v);
HRESULT IHTMLMarqueeElement::get_onfinish(VARIANT *p);
HRESULT IHTMLMarqueeElement::put_onfinish(VARIANT v);
HRESULT IHTMLMarqueeElement::get_onstart(VARIANT *p);
HRESULT IHTMLMarqueeElement::put_onstart(VARIANT v);
HRESULT IHTMLMarqueeElement::get_scrollAmount(long *p);
HRESULT IHTMLMarqueeElement::put_scrollAmount(long v);
HRESULT IHTMLMarqueeElement::get_scrollDelay(long *p);
HRESULT IHTMLMarqueeElement::put_scrollDelay(long v);
HRESULT start(VOID);
HRESULT stop(VOID);
HRESULT IHTMLMarqueeElement::get_trueSpeed(VARIANT_BOOL *p);
HRESULT IHTMLMarqueeElement::put_trueSpeed(VARIANT_BOOL v);
HRESULT IHTMLMarqueeElement::get_vspace(long *p);
HRESULT IHTMLMarqueeElement::put_vspace(long v);
HRESULT IHTMLMarqueeElement::get_width(VARIANT *p);
HRESULT IHTMLMarqueeElement::put_width(VARIANT v);
HRESULT IHTMLMetaElement2::get_scheme(BSTR *p);
HRESULT IHTMLMetaElement2::put_scheme(BSTR v);
HRESULT IHTMLMetaElement::get_charset(BSTR *p);
HRESULT IHTMLMetaElement::put_charset(BSTR v);
HRESULT IHTMLMetaElement::get_content(BSTR *p);
HRESULT IHTMLMetaElement::put_content(BSTR v);
HRESULT IHTMLMetaElement::get_httpEquiv(BSTR *p);
HRESULT IHTMLMetaElement::put_httpEquiv(BSTR v);
HRESULT IHTMLMetaElement::get_name(BSTR *p);
HRESULT IHTMLMetaElement::put_name(BSTR v);
HRESULT IHTMLMetaElement::get_url(BSTR *p);
HRESULT IHTMLMetaElement::put_url(BSTR v);
HRESULT IHTMLMimeTypesCollection::get_length(long *p);
HRESULT attachEvent( 
 BSTR event, 
 IDispatch *pDisp, 
 VARIANT_BOOL *pfResult 
);
HRESULT detachEvent( 
 BSTR event, 
 IDispatch *pDisp 
);
HRESULT doImport( 
 BSTR bstrImplementationUrl 
);
HRESULT IHTMLNamespace::get_name(BSTR *p);
HRESULT IHTMLNamespace::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLNamespace::put_onreadystatechange(VARIANT v);
HRESULT IHTMLNamespace::get_readyState(VARIANT *p);
HRESULT IHTMLNamespace::get_urn(BSTR *p);
HRESULT IHTMLNamespace::put_urn(BSTR v);
HRESULT add( 
 BSTR bstrNamespace, 
 BSTR bstrUrn, 
 VARIANT implementationUrl, 
 IDispatch **ppNamespace 
);
HRESULT item( 
 VARIANT index, 
 IDispatch **ppNamespace 
);
HRESULT IHTMLNamespaceCollection::get_length(long *p);
HRESULT IHTMLNextIdElement::get_n(BSTR *p);
HRESULT IHTMLNextIdElement::put_n(BSTR v);
HRESULT IHTMLObjectElement2::get_classid(BSTR *p);
HRESULT IHTMLObjectElement2::put_classid(BSTR v);
HRESULT IHTMLObjectElement2::get_data(BSTR *p);
HRESULT IHTMLObjectElement2::put_data(BSTR v);
HRESULT namedRecordset( 
 BSTR dataMember, 
 VARIANT *hierarchy, 
 IDispatch **ppRecordset 
);
HRESULT IHTMLObjectElement3::get_alt(BSTR *p);
HRESULT IHTMLObjectElement3::put_alt(BSTR v);
HRESULT IHTMLObjectElement3::get_archive(BSTR *p);
HRESULT IHTMLObjectElement3::put_archive(BSTR v);
HRESULT IHTMLObjectElement3::get_border(VARIANT *p);
HRESULT IHTMLObjectElement3::put_border(VARIANT v);
HRESULT IHTMLObjectElement3::get_declare(VARIANT_BOOL *p);
HRESULT IHTMLObjectElement3::put_declare(VARIANT_BOOL v);
HRESULT IHTMLObjectElement3::get_standby(BSTR *p);
HRESULT IHTMLObjectElement3::put_standby(BSTR v);
HRESULT IHTMLObjectElement3::get_useMap(BSTR *p);
HRESULT IHTMLObjectElement3::put_useMap(BSTR v);
HRESULT IHTMLObjectElement::get_align(BSTR *p);
HRESULT IHTMLObjectElement::put_align(BSTR v);
HRESULT IHTMLObjectElement::put_altHTML(BSTR sHTMLCode);
HRESULT IHTMLObjectElement::get_BaseHref(BSTR *p);
HRESULT IHTMLObjectElement::get_classid(BSTR *p);
HRESULT IHTMLObjectElement::get_code(BSTR *p);
HRESULT IHTMLObjectElement::put_code(BSTR v);
HRESULT IHTMLObjectElement::get_codeBase(BSTR *p);
HRESULT IHTMLObjectElement::put_codeBase(BSTR v);
HRESULT IHTMLObjectElement::get_codeType(BSTR *p);
HRESULT IHTMLObjectElement::put_codeType(BSTR v);
HRESULT IHTMLObjectElement::get_data(BSTR *p);
HRESULT IHTMLObjectElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLObjectElement::get_height(VARIANT *p);
HRESULT IHTMLObjectElement::put_height(VARIANT v);
HRESULT IHTMLObjectElement::get_hspace(long *p);
HRESULT IHTMLObjectElement::put_hspace(long v);
HRESULT IHTMLObjectElement::get_name(BSTR *p);
HRESULT IHTMLObjectElement::put_name(BSTR v);
HRESULT IHTMLObjectElement::get_object(IDispatch **p);
HRESULT IHTMLObjectElement::get_onerror(VARIANT *p);
HRESULT IHTMLObjectElement::put_onerror(VARIANT v);
HRESULT IHTMLObjectElement::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLObjectElement::put_onreadystatechange(VARIANT v);
HRESULT IHTMLObjectElement::get_readyState(long *p);
HRESULT IHTMLObjectElement::get_recordset(IDispatch **p);
HRESULT IHTMLObjectElement::put_recordset(IDispatch *v);
HRESULT IHTMLObjectElement::get_type(BSTR *p);
HRESULT IHTMLObjectElement::put_type(BSTR v);
HRESULT IHTMLObjectElement::get_vspace(long *p);
HRESULT IHTMLObjectElement::put_vspace(long v);
HRESULT IHTMLObjectElement::get_width(VARIANT *p);
HRESULT IHTMLObjectElement::put_width(VARIANT v);
HRESULT IHTMLOListElement::get_compact(VARIANT_BOOL *p);
HRESULT IHTMLOListElement::put_compact(VARIANT_BOOL v);
HRESULT IHTMLOListElement::get_start(long *p);
HRESULT IHTMLOListElement::put_start(long v);
HRESULT IHTMLOListElement::get_type(BSTR *p);
HRESULT IHTMLOListElement::put_type(BSTR v);
HRESULT addReadRequest( 
 BSTR name, 
 VARIANT reserved, 
 VARIANT_BOOL *success 
);
HRESULT clearRequest(VOID);
HRESULT doReadRequest( 
 VARIANT usage, 
 VARIANT fname, 
 VARIANT domain, 
 VARIANT path, 
 VARIANT expire, 
 VARIANT reserved 
);
HRESULT getAttribute( 
 BSTR name, 
 BSTR *value 
);
HRESULT IHTMLOptionButtonElement::get_checked(VARIANT_BOOL *p);
HRESULT IHTMLOptionButtonElement::put_checked(VARIANT_BOOL v);
HRESULT IHTMLOptionButtonElement::get_defaultChecked(VARIANT_BOOL *p);
HRESULT IHTMLOptionButtonElement::put_defaultChecked(VARIANT_BOOL v);
HRESULT IHTMLOptionButtonElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLOptionButtonElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLOptionButtonElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLOptionButtonElement::get_indeterminate(VARIANT_BOOL *p);
HRESULT IHTMLOptionButtonElement::put_indeterminate(VARIANT_BOOL v);
HRESULT IHTMLOptionButtonElement::get_name(BSTR *p);
HRESULT IHTMLOptionButtonElement::put_name(BSTR v);
HRESULT IHTMLOptionButtonElement::get_onchange(VARIANT *p);
HRESULT IHTMLOptionButtonElement::put_onchange(VARIANT v);
HRESULT IHTMLOptionButtonElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLOptionButtonElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLOptionButtonElement::get_type(BSTR *p);
HRESULT IHTMLOptionButtonElement::put_type(BSTR v);
HRESULT IHTMLOptionButtonElement::get_value(BSTR *p);
HRESULT IHTMLOptionButtonElement::put_value(BSTR v);
HRESULT IHTMLOptionElement3::get_label(BSTR *p);
HRESULT IHTMLOptionElement3::put_label(BSTR v);
HRESULT IHTMLOptionElement::get_defaultSelected(VARIANT_BOOL *p);
HRESULT IHTMLOptionElement::put_defaultSelected(VARIANT_BOOL v);
HRESULT IHTMLOptionElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLOptionElement::get_index(long *p);
HRESULT IHTMLOptionElement::put_index(long v);
HRESULT IHTMLOptionElement::get_selected(VARIANT_BOOL *p);
HRESULT IHTMLOptionElement::put_selected(VARIANT_BOOL v);
HRESULT IHTMLOptionElement::get_text(BSTR *p);
HRESULT IHTMLOptionElement::put_text(BSTR v);
HRESULT IHTMLOptionElement::get_value(BSTR *p);
HRESULT IHTMLOptionElement::put_value(BSTR v);
HRESULT create( 
 VARIANT text, 
 VARIANT value, 
 VARIANT defaultselected, 
 VARIANT selected, 
 IHTMLOptionElement **__MIDL_0017 
);
HRESULT choosecolordlg( 
 VARIANT initColor, 
 long *rgbColor 
);
HRESULT IHTMLOptionsHolder::get_document(IHTMLDocument2 **p);
HRESULT IHTMLOptionsHolder::get_errorCharacter(long *p);
HRESULT IHTMLOptionsHolder::put_errorCharacter(long v);
HRESULT IHTMLOptionsHolder::get_errorCode(long *p);
HRESULT IHTMLOptionsHolder::put_errorCode(long v);
HRESULT IHTMLOptionsHolder::get_errorDebug(VARIANT_BOOL *p);
HRESULT IHTMLOptionsHolder::put_errorDebug(VARIANT_BOOL v);
HRESULT IHTMLOptionsHolder::get_errorLine(long *p);
HRESULT IHTMLOptionsHolder::put_errorLine(long v);
HRESULT IHTMLOptionsHolder::get_errorMessage(BSTR *p);
HRESULT IHTMLOptionsHolder::put_errorMessage(BSTR v);
HRESULT IHTMLOptionsHolder::get_execArg(VARIANT *p);
HRESULT IHTMLOptionsHolder::put_execArg(VARIANT v);
HRESULT IHTMLOptionsHolder::get_findText(BSTR *p);
HRESULT IHTMLOptionsHolder::put_findText(BSTR v);
HRESULT IHTMLOptionsHolder::get_fonts(IHTMLFontNamesCollection **p);
HRESULT openfiledlg( 
 VARIANT initFile, 
 VARIANT initDir, 
 VARIANT filter, 
 VARIANT title, 
 BSTR *pathName 
);
HRESULT savefiledlg( 
 VARIANT initFile, 
 VARIANT initDir, 
 VARIANT filter, 
 VARIANT title, 
 BSTR *pathName 
);
HRESULT showSecurityInfo(VOID);
HRESULT sizes( 
 BSTR fontName, 
 IHTMLFontSizesCollection **pSizesCollection 
);
HRESULT IHTMLOptionsHolder::get_unsecuredWindowOfDocument(IHTMLWindow2 **p);
HRESULT Draw( 
 RECT rcBounds, 
 RECT rcUpdate, 
 LONG lDrawFlags, 
 HDC hdc, 
 LPVOID pvDrawObject 
);
HRESULT GetPainterInfo( 
 HTML_PAINTER_INFO *pInfo 
);
HRESULT HitTestPoint( 
 POINT pt, 
 BOOL *pbHit, 
 LONG *plPartID 
);
HRESULT OnResize( 
 SIZE pt 
);
HRESULT GetEventInfoFlags( 
 long *plEventInfoFlags 
);
HRESULT GetEventTarget( 
 IHTMLElement **ppElement 
);
HRESULT SetCursor( 
 LONG lPartID 
);
HRESULT StringFromPartID( 
 LONG lPartID, 
 BSTR *pbstrPart 
);
HRESULT OnMove( 
 RECT rcDevice 
);
HRESULT GetDrawInfo( 
 LONG lFlags, 
 HTML_PAINT_DRAW_INFO *pDrawInfo 
);
HRESULT GetHitTestCookie( 
 LONG *plCookie 
);
HRESULT InvalidatePainterInfo(VOID);
HRESULT InvalidateRect( 
 RECT *prcInvalid 
);
HRESULT InvalidateRegion( 
 HRGN rgnInvalid 
);
HRESULT TransformGlobalToLocal( 
 POINT ptGlobal, 
 POINT *pptLocal 
);
HRESULT TransformLocalToGlobal( 
 POINT ptLocal, 
 POINT *pptGlobal 
);
HRESULT IHTMLParaElement::get_align(BSTR *p);
HRESULT IHTMLParaElement::put_align(BSTR v);
HRESULT IHTMLParamElement::get_name(BSTR *p);
HRESULT IHTMLParamElement::put_name(BSTR v);
HRESULT IHTMLParamElement::get_type(BSTR *p);
HRESULT IHTMLParamElement::put_type(BSTR v);
HRESULT IHTMLParamElement::get_value(BSTR *p);
HRESULT IHTMLParamElement::put_value(BSTR v);
HRESULT IHTMLParamElement::get_valueType(BSTR *p);
HRESULT IHTMLParamElement::put_valueType(BSTR v);
HRESULT IHTMLPhraseElement2::get_cite(BSTR *p);
HRESULT IHTMLPhraseElement2::put_cite(BSTR v);
HRESULT IHTMLPhraseElement2::get_dateTime(BSTR *p);
HRESULT IHTMLPhraseElement2::put_dateTime(BSTR v);
HRESULT IHTMLPluginsCollection::get_length(long *p);
HRESULT IHTMLPluginsCollection::put_refresh(VARIANT_BOOL reload);
HRESULT IHTMLPopup::get_document(IHTMLDocument **p);
HRESULT hide(VOID);
HRESULT IHTMLPopup::get_isOpen(VARIANT_BOOL *p);
HRESULT show( 
 long x, 
 long y, 
 long w, 
 long h, 
 VARIANT *pElement 
);
HRESULT IHTMLRect::get_bottom(long *p);
HRESULT IHTMLRect::put_bottom(long v);
HRESULT IHTMLRect::get_left(long *p);
HRESULT IHTMLRect::put_left(long v);
HRESULT IHTMLRect::get_right(long *p);
HRESULT IHTMLRect::put_right(long v);
HRESULT IHTMLRect::get_top(long *p);
HRESULT IHTMLRect::put_top(long v);
HRESULT IHTMLRectCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 VARIANT *pvarIndex, 
 VARIANT *pvarResult 
);
HRESULT IHTMLRectCollection::get_length(long *p);
HRESULT IHTMLRenderStyle::get_defaultTextSelection(BSTR *p);
HRESULT IHTMLRenderStyle::put_defaultTextSelection(BSTR v);
HRESULT IHTMLRenderStyle::get_renderingPriority(long *p);
HRESULT IHTMLRenderStyle::put_renderingPriority(long v);
HRESULT IHTMLRenderStyle::get_textBackgroundColor(VARIANT *p);
HRESULT IHTMLRenderStyle::put_textBackgroundColor(VARIANT v);
HRESULT IHTMLRenderStyle::get_textColor(VARIANT *p);
HRESULT IHTMLRenderStyle::put_textColor(VARIANT v);
HRESULT IHTMLRenderStyle::get_textDecoration(BSTR *p);
HRESULT IHTMLRenderStyle::put_textDecoration(BSTR v);
HRESULT IHTMLRenderStyle::get_textDecorationColor(VARIANT *p);
HRESULT IHTMLRenderStyle::put_textDecorationColor(VARIANT v);
HRESULT IHTMLRenderStyle::get_textLineThroughStyle(BSTR *p);
HRESULT IHTMLRenderStyle::put_textLineThroughStyle(BSTR v);
HRESULT IHTMLRenderStyle::get_textUnderlineStyle(BSTR *p);
HRESULT IHTMLRenderStyle::put_textUnderlineStyle(BSTR v);
HRESULT IHTMLRuleStyle2::get_accelerator(BSTR *p);
HRESULT IHTMLRuleStyle2::put_accelerator(BSTR v);
HRESULT IHTMLRuleStyle2::get_behavior(BSTR *p);
HRESULT IHTMLRuleStyle2::put_behavior(BSTR v);
HRESULT IHTMLRuleStyle2::get_borderCollapse(BSTR *p);
HRESULT IHTMLRuleStyle2::put_borderCollapse(BSTR v);
HRESULT IHTMLRuleStyle2::get_bottom(VARIANT *p);
HRESULT IHTMLRuleStyle2::put_bottom(VARIANT v);
HRESULT IHTMLRuleStyle2::get_direction(BSTR *p);
HRESULT IHTMLRuleStyle2::put_direction(BSTR v);
HRESULT IHTMLRuleStyle2::get_imeMode(BSTR *p);
HRESULT IHTMLRuleStyle2::put_imeMode(BSTR v);
HRESULT IHTMLRuleStyle2::get_layoutGrid(BSTR *p);
HRESULT IHTMLRuleStyle2::put_layoutGrid(BSTR v);
HRESULT IHTMLRuleStyle2::get_layoutGridChar(VARIANT *p);
HRESULT IHTMLRuleStyle2::put_layoutGridChar(VARIANT v);
HRESULT IHTMLRuleStyle2::get_layoutGridLine(VARIANT *p);
HRESULT IHTMLRuleStyle2::put_layoutGridLine(VARIANT v);
HRESULT IHTMLRuleStyle2::get_layoutGridMode(BSTR *p);
HRESULT IHTMLRuleStyle2::put_layoutGridMode(BSTR v);
HRESULT IHTMLRuleStyle2::get_layoutGridType(BSTR *p);
HRESULT IHTMLRuleStyle2::put_layoutGridType(BSTR v);
HRESULT IHTMLRuleStyle2::get_lineBreak(BSTR *p);
HRESULT IHTMLRuleStyle2::put_lineBreak(BSTR v);
HRESULT IHTMLRuleStyle2::get_overflowX(BSTR *p);
HRESULT IHTMLRuleStyle2::put_overflowX(BSTR v);
HRESULT IHTMLRuleStyle2::get_overflowY(BSTR *p);
HRESULT IHTMLRuleStyle2::put_overflowY(BSTR v);
HRESULT IHTMLRuleStyle2::get_pixelBottom(long *p);
HRESULT IHTMLRuleStyle2::put_pixelBottom(long v);
HRESULT IHTMLRuleStyle2::get_pixelRight(long *p);
HRESULT IHTMLRuleStyle2::put_pixelRight(long v);
HRESULT IHTMLRuleStyle2::get_posBottom(float *p);
HRESULT IHTMLRuleStyle2::put_posBottom(float v);
HRESULT IHTMLRuleStyle2::get_position(BSTR *p);
HRESULT IHTMLRuleStyle2::put_position(BSTR v);
HRESULT IHTMLRuleStyle2::get_posRight(float *p);
HRESULT IHTMLRuleStyle2::put_posRight(float v);
HRESULT IHTMLRuleStyle2::get_right(VARIANT *p);
HRESULT IHTMLRuleStyle2::put_right(VARIANT v);
HRESULT IHTMLRuleStyle2::get_rubyAlign(BSTR *p);
HRESULT IHTMLRuleStyle2::put_rubyAlign(BSTR v);
HRESULT IHTMLRuleStyle2::get_rubyOverhang(BSTR *p);
HRESULT IHTMLRuleStyle2::put_rubyOverhang(BSTR v);
HRESULT IHTMLRuleStyle2::get_rubyPosition(BSTR *p);
HRESULT IHTMLRuleStyle2::put_rubyPosition(BSTR v);
HRESULT IHTMLRuleStyle2::get_tableLayout(BSTR *p);
HRESULT IHTMLRuleStyle2::put_tableLayout(BSTR v);
HRESULT IHTMLRuleStyle2::get_textAutospace(BSTR *p);
HRESULT IHTMLRuleStyle2::put_textAutospace(BSTR v);
HRESULT IHTMLRuleStyle2::get_textJustify(BSTR *p);
HRESULT IHTMLRuleStyle2::put_textJustify(BSTR v);
HRESULT IHTMLRuleStyle2::get_unicodeBidi(BSTR *p);
HRESULT IHTMLRuleStyle2::put_unicodeBidi(BSTR v);
HRESULT IHTMLRuleStyle2::get_wordBreak(BSTR *p);
HRESULT IHTMLRuleStyle2::put_wordBreak(BSTR v);
HRESULT IHTMLRuleStyle3::get_layoutFlow(BSTR *p);
HRESULT IHTMLRuleStyle3::put_layoutFlow(BSTR v);
HRESULT IHTMLRuleStyle3::get_scrollbar3dLightColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbar3dLightColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_scrollbarArrowColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbarArrowColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_scrollbarBaseColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbarBaseColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_scrollbarDarkShadowColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbarDarkShadowColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_scrollbarFaceColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbarFaceColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_scrollbarHighlightColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbarHighlightColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_scrollbarShadowColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbarShadowColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_scrollbarTrackColor(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_scrollbarTrackColor(VARIANT v);
HRESULT IHTMLRuleStyle3::get_textAlignLast(BSTR *p);
HRESULT IHTMLRuleStyle3::put_textAlignLast(BSTR v);
HRESULT IHTMLRuleStyle3::get_textKashidaSpace(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_textKashidaSpace(VARIANT v);
HRESULT IHTMLRuleStyle3::get_textUnderlinePosition(BSTR *p);
HRESULT IHTMLRuleStyle3::put_textUnderlinePosition(BSTR v);
HRESULT IHTMLRuleStyle3::get_wordWrap(BSTR *p);
HRESULT IHTMLRuleStyle3::put_wordWrap(BSTR v);
HRESULT IHTMLRuleStyle3::get_writingMode(BSTR *p);
HRESULT IHTMLRuleStyle3::put_writingMode(BSTR v);
HRESULT IHTMLRuleStyle3::get_zoom(VARIANT *p);
HRESULT IHTMLRuleStyle3::put_zoom(VARIANT v);
HRESULT IHTMLRuleStyle4::get_minHeight(VARIANT *p);
HRESULT IHTMLRuleStyle4::put_minHeight(VARIANT v);
HRESULT IHTMLRuleStyle4::get_textOverflow(VARIANT *p);
HRESULT IHTMLRuleStyle4::put_textOverflow(VARIANT v);
HRESULT IHTMLRuleStyle::get_background(BSTR *p);
HRESULT IHTMLRuleStyle::put_background(BSTR v);
HRESULT IHTMLRuleStyle::get_backgroundAttachment(BSTR *p);
HRESULT IHTMLRuleStyle::put_backgroundAttachment(BSTR v);
HRESULT IHTMLRuleStyle::get_backgroundColor(VARIANT *p);
HRESULT IHTMLRuleStyle::put_backgroundColor(VARIANT v);
HRESULT IHTMLRuleStyle::get_backgroundImage(BSTR *p);
HRESULT IHTMLRuleStyle::put_backgroundImage(BSTR v);
HRESULT IHTMLRuleStyle::get_backgroundPosition(BSTR *p);
HRESULT IHTMLRuleStyle::put_backgroundPosition(BSTR v);
HRESULT IHTMLRuleStyle::get_backgroundPositionX(VARIANT *p);
HRESULT IHTMLRuleStyle::put_backgroundPositionX(VARIANT v);
HRESULT IHTMLRuleStyle::get_backgroundPositionY(VARIANT *p);
HRESULT IHTMLRuleStyle::put_backgroundPositionY(VARIANT v);
HRESULT IHTMLRuleStyle::get_backgroundRepeat(BSTR *p);
HRESULT IHTMLRuleStyle::put_backgroundRepeat(BSTR v);
HRESULT IHTMLRuleStyle::get_border(BSTR *p);
HRESULT IHTMLRuleStyle::put_border(BSTR v);
HRESULT IHTMLRuleStyle::get_borderBottom(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderBottom(BSTR v);
HRESULT IHTMLRuleStyle::get_borderBottomColor(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderBottomColor(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderBottomStyle(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderBottomStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_borderBottomWidth(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderBottomWidth(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderColor(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderColor(BSTR v);
HRESULT IHTMLRuleStyle::get_borderLeft(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderLeft(BSTR v);
HRESULT IHTMLRuleStyle::get_borderLeftColor(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderLeftColor(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderLeftStyle(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderLeftStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_borderLeftWidth(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderLeftWidth(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderRight(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderRight(BSTR v);
HRESULT IHTMLRuleStyle::get_borderRightColor(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderRightColor(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderRightStyle(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderRightStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_borderRightWidth(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderRightWidth(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderStyle(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_borderTop(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderTop(BSTR v);
HRESULT IHTMLRuleStyle::get_borderTopColor(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderTopColor(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderTopStyle(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderTopStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_borderTopWidth(VARIANT *p);
HRESULT IHTMLRuleStyle::put_borderTopWidth(VARIANT v);
HRESULT IHTMLRuleStyle::get_borderWidth(BSTR *p);
HRESULT IHTMLRuleStyle::put_borderWidth(BSTR v);
HRESULT IHTMLRuleStyle::get_clear(BSTR *p);
HRESULT IHTMLRuleStyle::put_clear(BSTR v);
HRESULT IHTMLRuleStyle::get_clip(BSTR *p);
HRESULT IHTMLRuleStyle::put_clip(BSTR v);
HRESULT IHTMLRuleStyle::get_color(VARIANT *p);
HRESULT IHTMLRuleStyle::put_color(VARIANT v);
HRESULT IHTMLRuleStyle::get_cssText(BSTR *p);
HRESULT IHTMLRuleStyle::put_cssText(BSTR v);
HRESULT IHTMLRuleStyle::get_cursor(BSTR *p);
HRESULT IHTMLRuleStyle::put_cursor(BSTR v);
HRESULT IHTMLRuleStyle::get_display(BSTR *p);
HRESULT IHTMLRuleStyle::put_display(BSTR v);
HRESULT IHTMLRuleStyle::get_filter(BSTR *p);
HRESULT IHTMLRuleStyle::put_filter(BSTR v);
HRESULT IHTMLRuleStyle::get_font(BSTR *p);
HRESULT IHTMLRuleStyle::put_font(BSTR v);
HRESULT IHTMLRuleStyle::get_fontFamily(BSTR *p);
HRESULT IHTMLRuleStyle::put_fontFamily(BSTR v);
HRESULT IHTMLRuleStyle::get_fontSize(VARIANT *p);
HRESULT IHTMLRuleStyle::put_fontSize(VARIANT v);
HRESULT IHTMLRuleStyle::get_fontStyle(BSTR *p);
HRESULT IHTMLRuleStyle::put_fontStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_fontVariant(BSTR *p);
HRESULT IHTMLRuleStyle::put_fontVariant(BSTR v);
HRESULT IHTMLRuleStyle::get_fontWeight(BSTR *p);
HRESULT IHTMLRuleStyle::put_fontWeight(BSTR v);
HRESULT getAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT *AttributeValue 
);
HRESULT IHTMLRuleStyle::get_height(VARIANT *p);
HRESULT IHTMLRuleStyle::put_height(VARIANT v);
HRESULT IHTMLRuleStyle::get_left(VARIANT *p);
HRESULT IHTMLRuleStyle::put_left(VARIANT v);
HRESULT IHTMLRuleStyle::get_letterSpacing(VARIANT *p);
HRESULT IHTMLRuleStyle::put_letterSpacing(VARIANT v);
HRESULT IHTMLRuleStyle::get_lineHeight(VARIANT *p);
HRESULT IHTMLRuleStyle::put_lineHeight(VARIANT v);
HRESULT IHTMLRuleStyle::get_listStyle(BSTR *p);
HRESULT IHTMLRuleStyle::put_listStyle(BSTR v);
HRESULT IHTMLRuleStyle::get_listStyleImage(BSTR *p);
HRESULT IHTMLRuleStyle::put_listStyleImage(BSTR v);
HRESULT IHTMLRuleStyle::get_listStylePosition(BSTR *p);
HRESULT IHTMLRuleStyle::put_listStylePosition(BSTR v);
HRESULT IHTMLRuleStyle::get_listStyleType(BSTR *p);
HRESULT IHTMLRuleStyle::put_listStyleType(BSTR v);
HRESULT IHTMLRuleStyle::get_margin(BSTR *p);
HRESULT IHTMLRuleStyle::put_margin(BSTR v);
HRESULT IHTMLRuleStyle::get_marginBottom(VARIANT *p);
HRESULT IHTMLRuleStyle::put_marginBottom(VARIANT v);
HRESULT IHTMLRuleStyle::get_marginLeft(VARIANT *p);
HRESULT IHTMLRuleStyle::put_marginLeft(VARIANT v);
HRESULT IHTMLRuleStyle::get_marginRight(VARIANT *p);
HRESULT IHTMLRuleStyle::put_marginRight(VARIANT v);
HRESULT IHTMLRuleStyle::get_marginTop(VARIANT *p);
HRESULT IHTMLRuleStyle::put_marginTop(VARIANT v);
HRESULT IHTMLRuleStyle::get_overflow(BSTR *p);
HRESULT IHTMLRuleStyle::put_overflow(BSTR v);
HRESULT IHTMLRuleStyle::get_padding(BSTR *p);
HRESULT IHTMLRuleStyle::put_padding(BSTR v);
HRESULT IHTMLRuleStyle::get_paddingBottom(VARIANT *p);
HRESULT IHTMLRuleStyle::put_paddingBottom(VARIANT v);
HRESULT IHTMLRuleStyle::get_paddingLeft(VARIANT *p);
HRESULT IHTMLRuleStyle::put_paddingLeft(VARIANT v);
HRESULT IHTMLRuleStyle::get_paddingRight(VARIANT *p);
HRESULT IHTMLRuleStyle::put_paddingRight(VARIANT v);
HRESULT IHTMLRuleStyle::get_paddingTop(VARIANT *p);
HRESULT IHTMLRuleStyle::put_paddingTop(VARIANT v);
HRESULT IHTMLRuleStyle::get_pageBreakAfter(BSTR *p);
HRESULT IHTMLRuleStyle::put_pageBreakAfter(BSTR v);
HRESULT IHTMLRuleStyle::get_pageBreakBefore(BSTR *p);
HRESULT IHTMLRuleStyle::put_pageBreakBefore(BSTR v);
HRESULT IHTMLRuleStyle::get_position(BSTR *p);
HRESULT removeAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT_BOOL *pfSuccess 
);
HRESULT setAttribute( 
 BSTR strAttributeName, 
 VARIANT AttributeValue, 
 LONG lFlags 
);
HRESULT IHTMLRuleStyle::get_styleFloat(BSTR *p);
HRESULT IHTMLRuleStyle::put_styleFloat(BSTR v);
HRESULT IHTMLRuleStyle::get_textAlign(BSTR *p);
HRESULT IHTMLRuleStyle::put_textAlign(BSTR v);
HRESULT IHTMLRuleStyle::get_textDecoration(BSTR *p);
HRESULT IHTMLRuleStyle::put_textDecoration(BSTR v);
HRESULT IHTMLRuleStyle::get_textDecorationBlink(VARIANT_BOOL *p);
HRESULT IHTMLRuleStyle::put_textDecorationBlink(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationLineThrough(VARIANT_BOOL *p);
HRESULT IHTMLRuleStyle::put_textDecorationLineThrough(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationNone(VARIANT_BOOL *p);
HRESULT IHTMLRuleStyle::put_textDecorationNone(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationOverline(VARIANT_BOOL *p);
HRESULT IHTMLRuleStyle::put_textDecorationOverline(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textDecorationUnderline(VARIANT_BOOL *p);
HRESULT IHTMLRuleStyle::put_textDecorationUnderline(VARIANT_BOOL v);
HRESULT IHTMLRuleStyle::get_textIndent(VARIANT *p);
HRESULT IHTMLRuleStyle::put_textIndent(VARIANT v);
HRESULT IHTMLRuleStyle::get_textTransform(BSTR *p);
HRESULT IHTMLRuleStyle::put_textTransform(BSTR v);
HRESULT IHTMLRuleStyle::get_top(VARIANT *p);
HRESULT IHTMLRuleStyle::put_top(VARIANT v);
HRESULT IHTMLRuleStyle::get_verticalAlign(VARIANT *p);
HRESULT IHTMLRuleStyle::put_verticalAlign(VARIANT v);
HRESULT IHTMLRuleStyle::get_visibility(BSTR *p);
HRESULT IHTMLRuleStyle::put_visibility(BSTR v);
HRESULT IHTMLRuleStyle::get_whiteSpace(BSTR *p);
HRESULT IHTMLRuleStyle::put_whiteSpace(BSTR v);
HRESULT IHTMLRuleStyle::get_width(VARIANT *p);
HRESULT IHTMLRuleStyle::put_width(VARIANT v);
HRESULT IHTMLRuleStyle::get_wordSpacing(VARIANT *p);
HRESULT IHTMLRuleStyle::put_wordSpacing(VARIANT v);
HRESULT IHTMLRuleStyle::get_zIndex(VARIANT *p);
HRESULT IHTMLRuleStyle::put_zIndex(VARIANT v);
HRESULT IHTMLScreen2::get_deviceXDPI(long *p);
HRESULT IHTMLScreen2::get_deviceYDPI(long *p);
HRESULT IHTMLScreen2::get_logicalXDPI(long *p);
HRESULT IHTMLScreen2::get_logicalYDPI(long *p);
HRESULT IHTMLScreen::get_availHeight(long *p);
HRESULT IHTMLScreen::get_availWidth(long *p);
HRESULT IHTMLScreen::get_bufferDepth(long *p);
HRESULT IHTMLScreen::put_bufferDepth(long v);
HRESULT IHTMLScreen::get_colorDepth(long *p);
HRESULT IHTMLScreen::get_fontSmoothingEnabled(VARIANT_BOOL *p);
HRESULT IHTMLScreen::get_height(long *p);
HRESULT IHTMLScreen::get_updateInterval(long *p);
HRESULT IHTMLScreen::put_updateInterval(long v);
HRESULT IHTMLScreen::get_width(long *p);
HRESULT IHTMLScriptElement2::get_charset(BSTR *p);
HRESULT IHTMLScriptElement2::put_charset(BSTR v);
HRESULT IHTMLScriptElement::get_defer(VARIANT_BOOL *p);
HRESULT IHTMLScriptElement::put_defer(VARIANT_BOOL v);
HRESULT IHTMLScriptElement::get_event(BSTR *p);
HRESULT IHTMLScriptElement::put_event(BSTR v);
HRESULT IHTMLScriptElement::get_htmlFor(BSTR *p);
HRESULT IHTMLScriptElement::put_htmlFor(BSTR v);
HRESULT IHTMLScriptElement::get_onerror(VARIANT *p);
HRESULT IHTMLScriptElement::put_onerror(VARIANT v);
HRESULT IHTMLScriptElement::get_readyState(BSTR *p);
HRESULT IHTMLScriptElement::get_src(BSTR *p);
HRESULT IHTMLScriptElement::put_src(BSTR v);
HRESULT IHTMLScriptElement::get_text(BSTR *p);
HRESULT IHTMLScriptElement::put_text(BSTR v);
HRESULT IHTMLScriptElement::get_type(BSTR *p);
HRESULT IHTMLScriptElement::put_type(BSTR v);
HRESULT urns( 
 VARIANT urn, 
 IDispatch **pdisp 
);
HRESULT namedItem( 
 BSTR name, 
 IDispatch **pdisp 
);
HRESULT IHTMLSelectElement::get__newEnum(IUnknown **p);
HRESULT add( 
 IHTMLElement *element, 
 VARIANT before 
);
HRESULT IHTMLSelectElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLSelectElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLSelectElement::get_form(IHTMLFormElement **p);
HRESULT item( 
 VARIANT name, 
 VARIANT index, 
 IDispatch **pdisp 
);
HRESULT IHTMLSelectElement::get_length(long *p);
HRESULT IHTMLSelectElement::put_length(long v);
HRESULT IHTMLSelectElement::get_multiple(VARIANT_BOOL *p);
HRESULT IHTMLSelectElement::put_multiple(VARIANT_BOOL v);
HRESULT IHTMLSelectElement::get_name(BSTR *p);
HRESULT IHTMLSelectElement::put_name(BSTR v);
HRESULT IHTMLSelectElement::get_onchange(VARIANT *p);
HRESULT IHTMLSelectElement::put_onchange(VARIANT v);
HRESULT IHTMLSelectElement::get_options(IDispatch **p);
HRESULT remove( 
 long index 
);
HRESULT IHTMLSelectElement::get_selectedIndex(long *p);
HRESULT IHTMLSelectElement::put_selectedIndex(long v);
HRESULT IHTMLSelectElement::get_size(long *p);
HRESULT IHTMLSelectElement::put_size(long v);
HRESULT tags( 
 VARIANT tagName, 
 IDispatch **pdisp 
);
HRESULT IHTMLSelectElement::get_type(BSTR *p);
HRESULT IHTMLSelectElement::get_value(BSTR *p);
HRESULT IHTMLSelectElement::put_value(BSTR v);
HRESULT createRangeCollection( 
 IDispatch **rangeCollection 
);
HRESULT IHTMLSelectionObject2::get_typeDetail(BSTR *p);
HRESULT clear(VOID);
HRESULT createRange( 
 IDispatch **range 
);
HRESULT empty(VOID);
HRESULT IHTMLSelectionObject::get_type(BSTR *p);
HRESULT IHTMLSpanFlow::get_align(BSTR *p);
HRESULT IHTMLSpanFlow::put_align(BSTR v);
HRESULT IHTMLStyle2::get_accelerator(BSTR *p);
HRESULT IHTMLStyle2::put_accelerator(BSTR v);
HRESULT IHTMLStyle2::get_behavior(BSTR *p);
HRESULT IHTMLStyle2::put_behavior(BSTR v);
HRESULT IHTMLStyle2::get_borderCollapse(BSTR *p);
HRESULT IHTMLStyle2::put_borderCollapse(BSTR v);
HRESULT IHTMLStyle2::get_bottom(VARIANT *p);
HRESULT IHTMLStyle2::put_bottom(VARIANT v);
HRESULT IHTMLStyle2::get_direction(BSTR *p);
HRESULT IHTMLStyle2::put_direction(BSTR v);
HRESULT getExpression( 
 BSTR propname, 
 VARIANT *expression 
);
HRESULT IHTMLStyle2::get_imeMode(BSTR *p);
HRESULT IHTMLStyle2::put_imeMode(BSTR v);
HRESULT IHTMLStyle2::get_layoutGrid(BSTR *p);
HRESULT IHTMLStyle2::put_layoutGrid(BSTR v);
HRESULT IHTMLStyle2::get_layoutGridChar(VARIANT *p);
HRESULT IHTMLStyle2::put_layoutGridChar(VARIANT v);
HRESULT IHTMLStyle2::get_layoutGridLine(VARIANT *p);
HRESULT IHTMLStyle2::put_layoutGridLine(VARIANT v);
HRESULT IHTMLStyle2::get_layoutGridMode(BSTR *p);
HRESULT IHTMLStyle2::put_layoutGridMode(BSTR v);
HRESULT IHTMLStyle2::get_layoutGridType(BSTR *p);
HRESULT IHTMLStyle2::put_layoutGridType(BSTR v);
HRESULT IHTMLStyle2::get_lineBreak(BSTR *p);
HRESULT IHTMLStyle2::put_lineBreak(BSTR v);
HRESULT IHTMLStyle2::get_overflowX(BSTR *p);
HRESULT IHTMLStyle2::put_overflowX(BSTR v);
HRESULT IHTMLStyle2::get_overflowY(BSTR *p);
HRESULT IHTMLStyle2::put_overflowY(BSTR v);
HRESULT IHTMLStyle2::get_pixelBottom(long *p);
HRESULT IHTMLStyle2::put_pixelBottom(long v);
HRESULT IHTMLStyle2::get_pixelRight(long *p);
HRESULT IHTMLStyle2::put_pixelRight(long v);
HRESULT IHTMLStyle2::get_posBottom(float *p);
HRESULT IHTMLStyle2::put_posBottom(float v);
HRESULT IHTMLStyle2::get_position(BSTR *p);
HRESULT IHTMLStyle2::put_position(BSTR v);
HRESULT IHTMLStyle2::get_posRight(float *p);
HRESULT IHTMLStyle2::put_posRight(float v);
HRESULT removeExpression( 
 BSTR propname, 
 VARIANT_BOOL *pfSuccess 
);
HRESULT IHTMLStyle2::get_right(VARIANT *p);
HRESULT IHTMLStyle2::put_right(VARIANT v);
HRESULT IHTMLStyle2::get_rubyAlign(BSTR *p);
HRESULT IHTMLStyle2::put_rubyAlign(BSTR v);
HRESULT IHTMLStyle2::get_rubyOverhang(BSTR *p);
HRESULT IHTMLStyle2::put_rubyOverhang(BSTR v);
HRESULT IHTMLStyle2::get_rubyPosition(BSTR *p);
HRESULT IHTMLStyle2::put_rubyPosition(BSTR v);
HRESULT setExpression( 
 BSTR propname, 
 BSTR expression, 
 BSTR language 
);
HRESULT IHTMLStyle2::get_tableLayout(BSTR *p);
HRESULT IHTMLStyle2::put_tableLayout(BSTR v);
HRESULT IHTMLStyle2::get_textAutospace(BSTR *p);
HRESULT IHTMLStyle2::put_textAutospace(BSTR v);
HRESULT IHTMLStyle2::get_textJustify(BSTR *p);
HRESULT IHTMLStyle2::put_textJustify(BSTR v);
HRESULT IHTMLStyle2::get_unicodeBidi(BSTR *p);
HRESULT IHTMLStyle2::put_unicodeBidi(BSTR v);
HRESULT IHTMLStyle2::get_wordBreak(BSTR *p);
HRESULT IHTMLStyle2::put_wordBreak(BSTR v);
HRESULT IHTMLStyle3::get_layoutFlow(BSTR *p);
HRESULT IHTMLStyle3::put_layoutFlow(BSTR v);
HRESULT IHTMLStyle3::get_scrollbar3dLightColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbar3dLightColor(VARIANT v);
HRESULT IHTMLStyle3::get_scrollbarArrowColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbarArrowColor(VARIANT v);
HRESULT IHTMLStyle3::get_scrollbarBaseColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbarBaseColor(VARIANT v);
HRESULT IHTMLStyle3::get_scrollbarDarkShadowColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbarDarkShadowColor(VARIANT v);
HRESULT IHTMLStyle3::get_scrollbarFaceColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbarFaceColor(VARIANT v);
HRESULT IHTMLStyle3::get_scrollbarHighlightColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbarHighlightColor(VARIANT v);
HRESULT IHTMLStyle3::get_scrollbarShadowColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbarShadowColor(VARIANT v);
HRESULT IHTMLStyle3::get_scrollbarTrackColor(VARIANT *p);
HRESULT IHTMLStyle3::put_scrollbarTrackColor(VARIANT v);
HRESULT IHTMLStyle3::get_textAlignLast(BSTR *p);
HRESULT IHTMLStyle3::put_textAlignLast(BSTR v);
HRESULT IHTMLStyle3::get_textKashidaSpace(VARIANT *p);
HRESULT IHTMLStyle3::put_textKashidaSpace(VARIANT v);
HRESULT IHTMLStyle3::get_textUnderlinePosition(BSTR *p);
HRESULT IHTMLStyle3::put_textUnderlinePosition(BSTR v);
HRESULT IHTMLStyle3::get_wordWrap(BSTR *p);
HRESULT IHTMLStyle3::put_wordWrap(BSTR v);
HRESULT IHTMLStyle3::get_writingMode(BSTR *p);
HRESULT IHTMLStyle3::put_writingMode(BSTR v);
HRESULT IHTMLStyle3::get_zoom(VARIANT *p);
HRESULT IHTMLStyle3::put_zoom(VARIANT v);
HRESULT IHTMLStyle4::get_minHeight(VARIANT *p);
HRESULT IHTMLStyle4::put_minHeight(VARIANT v);
HRESULT IHTMLStyle4::get_textOverflow(VARIANT *p);
HRESULT IHTMLStyle4::put_textOverflow(VARIANT v);
HRESULT IHTMLStyle::get_background(BSTR *p);
HRESULT IHTMLStyle::put_background(BSTR v);
HRESULT IHTMLStyle::get_backgroundAttachment(BSTR *p);
HRESULT IHTMLStyle::put_backgroundAttachment(BSTR v);
HRESULT IHTMLStyle::get_backgroundColor(VARIANT *p);
HRESULT IHTMLStyle::put_backgroundColor(VARIANT v);
HRESULT IHTMLStyle::get_backgroundImage(BSTR *p);
HRESULT IHTMLStyle::put_backgroundImage(BSTR v);
HRESULT IHTMLStyle::get_backgroundPosition(BSTR *p);
HRESULT IHTMLStyle::put_backgroundPosition(BSTR v);
HRESULT IHTMLStyle::get_backgroundPositionX(VARIANT *p);
HRESULT IHTMLStyle::put_backgroundPositionX(VARIANT v);
HRESULT IHTMLStyle::get_backgroundPositionY(VARIANT *p);
HRESULT IHTMLStyle::put_backgroundPositionY(VARIANT v);
HRESULT IHTMLStyle::get_backgroundRepeat(BSTR *p);
HRESULT IHTMLStyle::put_backgroundRepeat(BSTR v);
HRESULT IHTMLStyle::get_border(BSTR *p);
HRESULT IHTMLStyle::put_border(BSTR v);
HRESULT IHTMLStyle::get_borderBottom(BSTR *p);
HRESULT IHTMLStyle::put_borderBottom(BSTR v);
HRESULT IHTMLStyle::get_borderBottomColor(VARIANT *p);
HRESULT IHTMLStyle::put_borderBottomColor(VARIANT v);
HRESULT IHTMLStyle::get_borderBottomStyle(BSTR *p);
HRESULT IHTMLStyle::put_borderBottomStyle(BSTR v);
HRESULT IHTMLStyle::get_borderBottomWidth(VARIANT *p);
HRESULT IHTMLStyle::put_borderBottomWidth(VARIANT v);
HRESULT IHTMLStyle::get_borderColor(BSTR *p);
HRESULT IHTMLStyle::put_borderColor(BSTR v);
HRESULT IHTMLStyle::get_borderLeft(BSTR *p);
HRESULT IHTMLStyle::put_borderLeft(BSTR v);
HRESULT IHTMLStyle::get_borderLeftColor(VARIANT *p);
HRESULT IHTMLStyle::put_borderLeftColor(VARIANT v);
HRESULT IHTMLStyle::get_borderLeftStyle(BSTR *p);
HRESULT IHTMLStyle::put_borderLeftStyle(BSTR v);
HRESULT IHTMLStyle::get_borderLeftWidth(VARIANT *p);
HRESULT IHTMLStyle::put_borderLeftWidth(VARIANT v);
HRESULT IHTMLStyle::get_borderRight(BSTR *p);
HRESULT IHTMLStyle::put_borderRight(BSTR v);
HRESULT IHTMLStyle::get_borderRightColor(VARIANT *p);
HRESULT IHTMLStyle::put_borderRightColor(VARIANT v);
HRESULT IHTMLStyle::get_borderRightStyle(BSTR *p);
HRESULT IHTMLStyle::put_borderRightStyle(BSTR v);
HRESULT IHTMLStyle::get_borderRightWidth(VARIANT *p);
HRESULT IHTMLStyle::put_borderRightWidth(VARIANT v);
HRESULT IHTMLStyle::get_borderStyle(BSTR *p);
HRESULT IHTMLStyle::put_borderStyle(BSTR v);
HRESULT IHTMLStyle::get_borderTop(BSTR *p);
HRESULT IHTMLStyle::put_borderTop(BSTR v);
HRESULT IHTMLStyle::get_borderTopColor(VARIANT *p);
HRESULT IHTMLStyle::put_borderTopColor(VARIANT v);
HRESULT IHTMLStyle::get_borderTopStyle(BSTR *p);
HRESULT IHTMLStyle::put_borderTopStyle(BSTR v);
HRESULT IHTMLStyle::get_borderTopWidth(VARIANT *p);
HRESULT IHTMLStyle::put_borderTopWidth(VARIANT v);
HRESULT IHTMLStyle::get_borderWidth(BSTR *p);
HRESULT IHTMLStyle::put_borderWidth(BSTR v);
HRESULT IHTMLStyle::get_clear(BSTR *p);
HRESULT IHTMLStyle::put_clear(BSTR v);
HRESULT IHTMLStyle::get_clip(BSTR *p);
HRESULT IHTMLStyle::put_clip(BSTR v);
HRESULT IHTMLStyle::get_color(VARIANT *p);
HRESULT IHTMLStyle::put_color(VARIANT v);
HRESULT IHTMLStyle::get_cssText(BSTR *p);
HRESULT IHTMLStyle::put_cssText(BSTR v);
HRESULT IHTMLStyle::get_cursor(BSTR *p);
HRESULT IHTMLStyle::put_cursor(BSTR v);
HRESULT IHTMLStyle::get_display(BSTR *p);
HRESULT IHTMLStyle::put_display(BSTR v);
HRESULT IHTMLStyle::get_filter(BSTR *p);
HRESULT IHTMLStyle::put_filter(BSTR v);
HRESULT IHTMLStyle::get_font(BSTR *p);
HRESULT IHTMLStyle::put_font(BSTR v);
HRESULT IHTMLStyle::get_fontFamily(BSTR *p);
HRESULT IHTMLStyle::put_fontFamily(BSTR v);
HRESULT IHTMLStyle::get_fontSize(VARIANT *p);
HRESULT IHTMLStyle::put_fontSize(VARIANT v);
HRESULT IHTMLStyle::get_fontStyle(BSTR *p);
HRESULT IHTMLStyle::put_fontStyle(BSTR v);
HRESULT IHTMLStyle::get_fontVariant(BSTR *p);
HRESULT IHTMLStyle::put_fontVariant(BSTR v);
HRESULT IHTMLStyle::get_fontWeight(BSTR *p);
HRESULT IHTMLStyle::put_fontWeight(BSTR v);
HRESULT getAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT *AttributeValue 
);
HRESULT IHTMLStyle::get_height(VARIANT *p);
HRESULT IHTMLStyle::put_height(VARIANT v);
HRESULT IHTMLStyle::get_left(VARIANT *p);
HRESULT IHTMLStyle::put_left(VARIANT v);
HRESULT IHTMLStyle::get_letterSpacing(VARIANT *p);
HRESULT IHTMLStyle::put_letterSpacing(VARIANT v);
HRESULT IHTMLStyle::get_lineHeight(VARIANT *p);
HRESULT IHTMLStyle::put_lineHeight(VARIANT v);
HRESULT IHTMLStyle::get_listStyle(BSTR *p);
HRESULT IHTMLStyle::put_listStyle(BSTR v);
HRESULT IHTMLStyle::get_listStyleImage(BSTR *p);
HRESULT IHTMLStyle::put_listStyleImage(BSTR v);
HRESULT IHTMLStyle::get_listStylePosition(BSTR *p);
HRESULT IHTMLStyle::put_listStylePosition(BSTR v);
HRESULT IHTMLStyle::get_listStyleType(BSTR *p);
HRESULT IHTMLStyle::put_listStyleType(BSTR v);
HRESULT IHTMLStyle::get_margin(BSTR *p);
HRESULT IHTMLStyle::put_margin(BSTR v);
HRESULT IHTMLStyle::get_marginBottom(VARIANT *p);
HRESULT IHTMLStyle::put_marginBottom(VARIANT v);
HRESULT IHTMLStyle::get_marginLeft(VARIANT *p);
HRESULT IHTMLStyle::put_marginLeft(VARIANT v);
HRESULT IHTMLStyle::get_marginRight(VARIANT *p);
HRESULT IHTMLStyle::put_marginRight(VARIANT v);
HRESULT IHTMLStyle::get_marginTop(VARIANT *p);
HRESULT IHTMLStyle::put_marginTop(VARIANT v);
HRESULT IHTMLStyle::get_overflow(BSTR *p);
HRESULT IHTMLStyle::put_overflow(BSTR v);
HRESULT IHTMLStyle::get_padding(BSTR *p);
HRESULT IHTMLStyle::put_padding(BSTR v);
HRESULT IHTMLStyle::get_paddingBottom(VARIANT *p);
HRESULT IHTMLStyle::put_paddingBottom(VARIANT v);
HRESULT IHTMLStyle::get_paddingLeft(VARIANT *p);
HRESULT IHTMLStyle::put_paddingLeft(VARIANT v);
HRESULT IHTMLStyle::get_paddingRight(VARIANT *p);
HRESULT IHTMLStyle::put_paddingRight(VARIANT v);
HRESULT IHTMLStyle::get_paddingTop(VARIANT *p);
HRESULT IHTMLStyle::put_paddingTop(VARIANT v);
HRESULT IHTMLStyle::get_pageBreakAfter(BSTR *p);
HRESULT IHTMLStyle::put_pageBreakAfter(BSTR v);
HRESULT IHTMLStyle::get_pageBreakBefore(BSTR *p);
HRESULT IHTMLStyle::put_pageBreakBefore(BSTR v);
HRESULT IHTMLStyle::get_pixelHeight(long *p);
HRESULT IHTMLStyle::put_pixelHeight(long v);
HRESULT IHTMLStyle::get_pixelLeft(long *p);
HRESULT IHTMLStyle::put_pixelLeft(long v);
HRESULT IHTMLStyle::get_pixelTop(long *p);
HRESULT IHTMLStyle::put_pixelTop(long v);
HRESULT IHTMLStyle::get_pixelWidth(long *p);
HRESULT IHTMLStyle::put_pixelWidth(long v);
HRESULT IHTMLStyle::get_posHeight(float *p);
HRESULT IHTMLStyle::put_posHeight(float v);
HRESULT IHTMLStyle::get_position(BSTR *p);
HRESULT IHTMLStyle::get_posLeft(float *p);
HRESULT IHTMLStyle::put_posLeft(float v);
HRESULT IHTMLStyle::get_posTop(float *p);
HRESULT IHTMLStyle::put_posTop(float v);
HRESULT IHTMLStyle::get_posWidth(float *p);
HRESULT IHTMLStyle::put_posWidth(float v);
HRESULT removeAttribute( 
 BSTR strAttributeName, 
 LONG lFlags, 
 VARIANT_BOOL *pfSuccess 
);
HRESULT setAttribute( 
 BSTR strAttributeName, 
 VARIANT AttributeValue, 
 LONG lFlags 
);
HRESULT IHTMLStyle::get_styleFloat(BSTR *p);
HRESULT IHTMLStyle::put_styleFloat(BSTR v);
HRESULT IHTMLStyle::get_textAlign(BSTR *p);
HRESULT IHTMLStyle::put_textAlign(BSTR v);
HRESULT IHTMLStyle::get_textDecoration(BSTR *p);
HRESULT IHTMLStyle::put_textDecoration(BSTR v);
HRESULT IHTMLStyle::get_textDecorationBlink(VARIANT_BOOL *p);
HRESULT IHTMLStyle::put_textDecorationBlink(VARIANT_BOOL v);
HRESULT IHTMLStyle::get_textDecorationLineThrough(VARIANT_BOOL *p);
HRESULT IHTMLStyle::put_textDecorationLineThrough(VARIANT_BOOL v);
HRESULT IHTMLStyle::get_textDecorationNone(VARIANT_BOOL *p);
HRESULT IHTMLStyle::put_textDecorationNone(VARIANT_BOOL v);
HRESULT IHTMLStyle::get_textDecorationOverline(VARIANT_BOOL *p);
HRESULT IHTMLStyle::put_textDecorationOverline(VARIANT_BOOL v);
HRESULT IHTMLStyle::get_textDecorationUnderline(VARIANT_BOOL *p);
HRESULT IHTMLStyle::put_textDecorationUnderline(VARIANT_BOOL v);
HRESULT IHTMLStyle::get_textIndent(VARIANT *p);
HRESULT IHTMLStyle::put_textIndent(VARIANT v);
HRESULT IHTMLStyle::get_textTransform(BSTR *p);
HRESULT IHTMLStyle::put_textTransform(BSTR v);
HRESULT IHTMLStyle::get_top(VARIANT *p);
HRESULT IHTMLStyle::put_top(VARIANT v);
HRESULT toString( 
 BSTR *String 
);
HRESULT IHTMLStyle::get_verticalAlign(VARIANT *p);
HRESULT IHTMLStyle::put_verticalAlign(VARIANT v);
HRESULT IHTMLStyle::get_visibility(BSTR *p);
HRESULT IHTMLStyle::put_visibility(BSTR v);
HRESULT IHTMLStyle::get_whiteSpace(BSTR *p);
HRESULT IHTMLStyle::put_whiteSpace(BSTR v);
HRESULT IHTMLStyle::get_width(VARIANT *p);
HRESULT IHTMLStyle::put_width(VARIANT v);
HRESULT IHTMLStyle::get_wordSpacing(VARIANT *p);
HRESULT IHTMLStyle::put_wordSpacing(VARIANT v);
HRESULT IHTMLStyle::get_zIndex(VARIANT *p);
HRESULT IHTMLStyle::put_zIndex(VARIANT v);
HRESULT IHTMLStyleElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLStyleElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLStyleElement::get_media(BSTR *p);
HRESULT IHTMLStyleElement::put_media(BSTR v);
HRESULT IHTMLStyleElement::get_onerror(VARIANT *p);
HRESULT IHTMLStyleElement::put_onerror(VARIANT v);
HRESULT IHTMLStyleElement::get_onload(VARIANT *p);
HRESULT IHTMLStyleElement::put_onload(VARIANT v);
HRESULT IHTMLStyleElement::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLStyleElement::put_onreadystatechange(VARIANT v);
HRESULT IHTMLStyleElement::get_readyState(BSTR *p);
HRESULT IHTMLStyleElement::get_styleSheet(IHTMLStyleSheet **p);
HRESULT IHTMLStyleElement::get_type(BSTR *p);
HRESULT IHTMLStyleElement::put_type(BSTR v);
HRESULT addPageRule( 
 BSTR bstrSelector, 
 BSTR bstrStyle, 
 long lIndex, 
 long *plNewIndex 
);
HRESULT IHTMLStyleSheet2::get_pages(IHTMLStyleSheetPagesCollection **p);
HRESULT addImport( 
 BSTR bstrURL, 
 long lIndex, 
 long *plIndex 
);
HRESULT addRule( 
 BSTR bstrSelector, 
 BSTR bstrStyle, 
 long lIndex, 
 long *plNewIndex 
);
HRESULT IHTMLStyleSheet::get_cssText(BSTR *p);
HRESULT IHTMLStyleSheet::put_cssText(BSTR v);
HRESULT IHTMLStyleSheet::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLStyleSheet::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLStyleSheet::get_href(BSTR *p);
HRESULT IHTMLStyleSheet::put_href(BSTR v);
HRESULT IHTMLStyleSheet::get_id(BSTR *p);
HRESULT IHTMLStyleSheet::put_id(BSTR v);
HRESULT IHTMLStyleSheet::get_imports(IHTMLStyleSheetsCollection **p);
HRESULT IHTMLStyleSheet::get_media(BSTR *p);
HRESULT IHTMLStyleSheet::put_media(BSTR v);
HRESULT IHTMLStyleSheet::get_owningElement(IHTMLElement **p);
HRESULT IHTMLStyleSheet::get_parentStyleSheet(IHTMLStyleSheet **p);
HRESULT IHTMLStyleSheet::get_readOnly(VARIANT_BOOL *p);
HRESULT removeImport( 
 long lIndex 
);
HRESULT removeRule( 
 long lIndex 
);
HRESULT IHTMLStyleSheet::get_rules(IHTMLStyleSheetRulesCollection **p);
HRESULT IHTMLStyleSheet::get_title(BSTR *p);
HRESULT IHTMLStyleSheet::put_title(BSTR v);
HRESULT IHTMLStyleSheet::get_type(BSTR *p);
HRESULT IHTMLStyleSheetPage::get_pseudoClass(BSTR *p);
HRESULT IHTMLStyleSheetPage::get_selector(BSTR *p);
HRESULT item( 
 long index, 
 IHTMLStyleSheetPage **ppHTMLStyleSheetPage 
);
HRESULT IHTMLStyleSheetPagesCollection::get_length(long *p);
HRESULT IHTMLStyleSheetRule::get_readOnly(VARIANT_BOOL *p);
HRESULT IHTMLStyleSheetRule::get_selectorText(BSTR *p);
HRESULT IHTMLStyleSheetRule::put_selectorText(BSTR v);
HRESULT IHTMLStyleSheetRule::get_style(IHTMLStyle **p);
HRESULT item( 
 long index, 
 IHTMLStyleSheetRule **ppHTMLStyleSheetRule 
);
HRESULT IHTMLStyleSheetRulesCollection::get_length(long *p);
HRESULT IHTMLStyleSheetsCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 VARIANT *pvarIndex, 
 VARIANT *pvarResult 
);
HRESULT IHTMLStyleSheetsCollection::get_length(long *p);
HRESULT appendItemSeparator(VOID);
HRESULT appendNameFilePair( 
 BSTR name, 
 BSTR filename 
);
HRESULT appendNameValuePair( 
 BSTR name, 
 BSTR value 
);
HRESULT IHTMLTable2::get_cells(IHTMLElementCollection **p);
HRESULT firstPage(VOID);
HRESULT lastPage(VOID);
HRESULT moveRow( 
 long indexFrom, 
 long indexTo, 
 IDispatch row 
);
HRESULT IHTMLTable3::get_summary(BSTR *p);
HRESULT IHTMLTable3::put_summary(BSTR v);
HRESULT IHTMLTable::get_align(BSTR *p);
HRESULT IHTMLTable::put_align(BSTR v);
HRESULT IHTMLTable::get_background(BSTR *p);
HRESULT IHTMLTable::put_background(BSTR v);
HRESULT IHTMLTable::get_bgColor(VARIANT *p);
HRESULT IHTMLTable::put_bgColor(VARIANT v);
HRESULT IHTMLTable::get_border(VARIANT *p);
HRESULT IHTMLTable::put_border(VARIANT v);
HRESULT IHTMLTable::get_borderColor(VARIANT *p);
HRESULT IHTMLTable::put_borderColor(VARIANT v);
HRESULT IHTMLTable::get_borderColorDark(VARIANT *p);
HRESULT IHTMLTable::put_borderColorDark(VARIANT v);
HRESULT IHTMLTable::get_borderColorLight(VARIANT *p);
HRESULT IHTMLTable::put_borderColorLight(VARIANT v);
HRESULT IHTMLTable::get_cellPadding(VARIANT *p);
HRESULT IHTMLTable::put_cellPadding(VARIANT v);
HRESULT IHTMLTable::get_cellSpacing(VARIANT *p);
HRESULT IHTMLTable::put_cellSpacing(VARIANT v);
HRESULT IHTMLTable::get_cols(long *p);
HRESULT IHTMLTable::put_cols(long v);
HRESULT createCaption( 
 IHTMLTableCaption **caption 
);
HRESULT createTFoot( 
 IDispatch **foot 
);
HRESULT createTHead( 
 IDispatch **head 
);
HRESULT IHTMLTable::get_dataPageSize(long *p);
HRESULT IHTMLTable::put_dataPageSize(long v);
HRESULT deleteCaption(VOID);
HRESULT deleteRow( 
 long index 
);
HRESULT deleteTFoot(VOID);
HRESULT deleteTHead(VOID);
HRESULT IHTMLTable::get_frame(BSTR *p);
HRESULT IHTMLTable::put_frame(BSTR v);
HRESULT IHTMLTable::get_height(VARIANT *p);
HRESULT IHTMLTable::put_height(VARIANT v);
HRESULT insertRow( 
 long index, 
 IDispatch **row 
);
HRESULT nextPage(VOID);
HRESULT IHTMLTable::get_onreadystatechange(VARIANT *p);
HRESULT IHTMLTable::put_onreadystatechange(VARIANT v);
HRESULT previousPage(VOID);
HRESULT IHTMLTable::get_readyState(BSTR *p);
HRESULT refresh(VOID);
HRESULT IHTMLTable::get_rows(IHTMLElementCollection **p);
HRESULT IHTMLTable::get_rules(BSTR *p);
HRESULT IHTMLTable::put_rules(BSTR v);
HRESULT IHTMLTable::get_tBodies(IHTMLElementCollection **p);
HRESULT IHTMLTable::get_tFoot(IHTMLTableSection **p);
HRESULT IHTMLTable::get_tHead(IHTMLTableSection **p);
HRESULT IHTMLTable::get_width(VARIANT *p);
HRESULT IHTMLTable::put_width(VARIANT v);
HRESULT IHTMLTableCaption::get_align(BSTR *p);
HRESULT IHTMLTableCaption::put_align(BSTR v);
HRESULT IHTMLTableCaption::get_vAlign(BSTR *p);
HRESULT IHTMLTableCaption::put_vAlign(BSTR v);
HRESULT IHTMLTableCell2::get_abbr(BSTR *p);
HRESULT IHTMLTableCell2::put_abbr(BSTR v);
HRESULT IHTMLTableCell2::get_axis(BSTR *p);
HRESULT IHTMLTableCell2::put_axis(BSTR v);
HRESULT IHTMLTableCell2::get_ch(BSTR *p);
HRESULT IHTMLTableCell2::put_ch(BSTR v);
HRESULT IHTMLTableCell2::get_chOff(BSTR *p);
HRESULT IHTMLTableCell2::put_chOff(BSTR v);
HRESULT IHTMLTableCell2::get_headers(BSTR *p);
HRESULT IHTMLTableCell2::put_headers(BSTR v);
HRESULT IHTMLTableCell2::get_scope(BSTR *p);
HRESULT IHTMLTableCell2::put_scope(BSTR v);
HRESULT IHTMLTableCell::get_align(BSTR *p);
HRESULT IHTMLTableCell::put_align(BSTR v);
HRESULT IHTMLTableCell::get_background(BSTR *p);
HRESULT IHTMLTableCell::put_background(BSTR v);
HRESULT IHTMLTableCell::get_bgColor(VARIANT *p);
HRESULT IHTMLTableCell::put_bgColor(VARIANT v);
HRESULT IHTMLTableCell::get_borderColor(VARIANT *p);
HRESULT IHTMLTableCell::put_borderColor(VARIANT v);
HRESULT IHTMLTableCell::get_borderColorDark(VARIANT *p);
HRESULT IHTMLTableCell::put_borderColorDark(VARIANT v);
HRESULT IHTMLTableCell::get_borderColorLight(VARIANT *p);
HRESULT IHTMLTableCell::put_borderColorLight(VARIANT v);
HRESULT IHTMLTableCell::get_cellIndex(long *p);
HRESULT IHTMLTableCell::get_colSpan(long *p);
HRESULT IHTMLTableCell::put_colSpan(long v);
HRESULT IHTMLTableCell::get_height(VARIANT *p);
HRESULT IHTMLTableCell::put_height(VARIANT v);
HRESULT IHTMLTableCell::get_noWrap(VARIANT_BOOL *p);
HRESULT IHTMLTableCell::put_noWrap(VARIANT_BOOL v);
HRESULT IHTMLTableCell::get_rowSpan(long *p);
HRESULT IHTMLTableCell::put_rowSpan(long v);
HRESULT IHTMLTableCell::get_vAlign(BSTR *p);
HRESULT IHTMLTableCell::put_vAlign(BSTR v);
HRESULT IHTMLTableCell::get_width(VARIANT *p);
HRESULT IHTMLTableCell::put_width(VARIANT v);
HRESULT IHTMLTableCol2::get_ch(BSTR *p);
HRESULT IHTMLTableCol2::put_ch(BSTR v);
HRESULT IHTMLTableCol2::get_chOff(BSTR *p);
HRESULT IHTMLTableCol2::put_chOff(BSTR v);
HRESULT IHTMLTableCol::get_align(BSTR *p);
HRESULT IHTMLTableCol::put_align(BSTR v);
HRESULT IHTMLTableCol::get_span(long *p);
HRESULT IHTMLTableCol::put_span(long v);
HRESULT IHTMLTableCol::get_vAlign(BSTR *p);
HRESULT IHTMLTableCol::put_vAlign(BSTR v);
HRESULT IHTMLTableCol::get_width(VARIANT *p);
HRESULT IHTMLTableCol::put_width(VARIANT v);
HRESULT IHTMLTableRow2::get_height(VARIANT *p);
HRESULT IHTMLTableRow2::put_height(VARIANT v);
HRESULT IHTMLTableRow3::get_ch(BSTR *p);
HRESULT IHTMLTableRow3::put_ch(BSTR v);
HRESULT IHTMLTableRow3::get_chOff(BSTR *p);
HRESULT IHTMLTableRow3::put_chOff(BSTR v);
HRESULT IHTMLTableRow::get_align(BSTR *p);
HRESULT IHTMLTableRow::put_align(BSTR v);
HRESULT IHTMLTableRow::get_bgColor(VARIANT *p);
HRESULT IHTMLTableRow::put_bgColor(VARIANT v);
HRESULT IHTMLTableRow::get_borderColor(VARIANT *p);
HRESULT IHTMLTableRow::put_borderColor(VARIANT v);
HRESULT IHTMLTableRow::get_borderColorDark(VARIANT *p);
HRESULT IHTMLTableRow::put_borderColorDark(VARIANT v);
HRESULT IHTMLTableRow::get_borderColorLight(VARIANT *p);
HRESULT IHTMLTableRow::put_borderColorLight(VARIANT v);
HRESULT IHTMLTableRow::get_cells(IHTMLElementCollection **p);
HRESULT deleteCell( 
 long index 
);
HRESULT insertCell( 
 long index, 
 IDispatch **row 
);
HRESULT IHTMLTableRow::get_rowIndex(long *p);
HRESULT IHTMLTableRow::get_sectionRowIndex(long *p);
HRESULT IHTMLTableRow::get_vAlign(BSTR *p);
HRESULT IHTMLTableRow::put_vAlign(BSTR v);
HRESULT IHTMLTableRowMetrics::get_clientHeight(long *p);
HRESULT IHTMLTableRowMetrics::get_clientLeft(long *p);
HRESULT IHTMLTableRowMetrics::get_clientTop(long *p);
HRESULT IHTMLTableRowMetrics::get_clientWidth(long *p);
HRESULT moveRow( 
 long indexFrom, 
 long indexTo, 
 IDispatch row 
);
HRESULT IHTMLTableSection3::get_ch(BSTR *p);
HRESULT IHTMLTableSection3::put_ch(BSTR v);
HRESULT IHTMLTableSection3::get_chOff(BSTR *p);
HRESULT IHTMLTableSection3::put_chOff(BSTR v);
HRESULT IHTMLTableSection::get_align(BSTR *p);
HRESULT IHTMLTableSection::put_align(BSTR v);
HRESULT IHTMLTableSection::get_bgColor(VARIANT *p);
HRESULT IHTMLTableSection::put_bgColor(VARIANT v);
HRESULT deleteRow( 
 long index 
);
HRESULT insertRow( 
 long index, 
 IDispatch **row 
);
HRESULT IHTMLTableSection::get_rows(IHTMLElementCollection **p);
HRESULT IHTMLTableSection::get_vAlign(BSTR *p);
HRESULT IHTMLTableSection::put_vAlign(BSTR v);
HRESULT IHTMLTextAreaElement::get_cols(long *p);
HRESULT IHTMLTextAreaElement::put_cols(long v);
HRESULT createTextRange( 
 IHTMLTxtRange **range 
);
HRESULT IHTMLTextAreaElement::get_defaultValue(BSTR *p);
HRESULT IHTMLTextAreaElement::put_defaultValue(BSTR v);
HRESULT IHTMLTextAreaElement::get_disabled(VARIANT_BOOL *p);
HRESULT IHTMLTextAreaElement::put_disabled(VARIANT_BOOL v);
HRESULT IHTMLTextAreaElement::get_form(IHTMLFormElement **p);
HRESULT IHTMLTextAreaElement::get_name(BSTR *p);
HRESULT IHTMLTextAreaElement::put_name(BSTR v);
HRESULT IHTMLTextAreaElement::get_onchange(VARIANT *p);
HRESULT IHTMLTextAreaElement::put_onchange(VARIANT v);
HRESULT IHTMLTextAreaElement::get_onselect(VARIANT *p);
HRESULT IHTMLTextAreaElement::put_onselect(VARIANT v);
HRESULT IHTMLTextAreaElement::get_readOnly(VARIANT_BOOL *p);
HRESULT IHTMLTextAreaElement::put_readOnly(VARIANT_BOOL v);
HRESULT IHTMLTextAreaElement::get_rows(long *p);
HRESULT IHTMLTextAreaElement::put_rows(long v);
HRESULT select(VOID);
HRESULT IHTMLTextAreaElement::get_status(VARIANT_BOOL *p);
HRESULT IHTMLTextAreaElement::put_status(VARIANT_BOOL v);
HRESULT IHTMLTextAreaElement::get_type(BSTR *p);
HRESULT IHTMLTextAreaElement::get_value(BSTR *p);
HRESULT IHTMLTextAreaElement::put_value(BSTR v);
HRESULT IHTMLTextAreaElement::get_wrap(BSTR *p);
HRESULT IHTMLTextAreaElement::put_wrap(BSTR v);
HRESULT createControlRange( 
 IDispatch **range 
);
HRESULT IHTMLTextContainer::get_onscroll(VARIANT *p);
HRESULT IHTMLTextContainer::put_onscroll(VARIANT v);
HRESULT IHTMLTextContainer::get_scrollHeight(long *p);
HRESULT IHTMLTextContainer::get_scrollLeft(long *p);
HRESULT IHTMLTextContainer::put_scrollLeft(long v);
HRESULT IHTMLTextContainer::get_scrollTop(long *p);
HRESULT IHTMLTextContainer::put_scrollTop(long v);
HRESULT IHTMLTextContainer::get_scrollWidth(long *p);
HRESULT getBoundingClientRect( 
 IHTMLRect **pRect 
);
HRESULT getClientRects( 
 IHTMLRectCollection **pRectCol 
);
HRESULT IHTMLTextRangeMetrics::get_boundingHeight(long *p);
HRESULT IHTMLTextRangeMetrics::get_boundingLeft(long *p);
HRESULT IHTMLTextRangeMetrics::get_boundingTop(long *p);
HRESULT IHTMLTextRangeMetrics::get_boundingWidth(long *p);
HRESULT IHTMLTextRangeMetrics::get_offsetLeft(long *p);
HRESULT IHTMLTextRangeMetrics::get_offsetTop(long *p);
HRESULT IHTMLTitleElement::get_text(BSTR *p);
HRESULT IHTMLTitleElement::put_text(BSTR v);
HRESULT collapse( 
 VARIANT_BOOL Start 
);
HRESULT compareEndPoints( 
 BSTR how, 
 IHTMLTxtRange *SourceRange, 
 long *ret 
);
HRESULT duplicate( 
 IHTMLTxtRange **Duplicate 
);
HRESULT execCommand( 
 BSTR cmdID, 
 VARIANT_BOOL showUI, 
 VARIANT value, 
 VARIANT_BOOL *pfRet 
);
HRESULT execCommandShowHelp( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT expand( 
 BSTR Unit, 
 VARIANT_BOOL *Success 
);
HRESULT findText( 
 BSTR String, 
 long count, 
 long Flags, 
 VARIANT_BOOL *Success 
);
HRESULT getBookmark( 
 BSTR *Boolmark 
);
HRESULT IHTMLTxtRange::get_htmlText(BSTR *p);
HRESULT inRange( 
 IHTMLTxtRange *Range, 
 VARIANT_BOOL *InRange 
);
HRESULT isEqual( 
 IHTMLTxtRange *Range, 
 VARIANT_BOOL *IsEqual 
);
HRESULT move( 
 BSTR Unit, 
 long Count, 
 long *ActualCount 
);
HRESULT moveEnd( 
 BSTR Unit, 
 long Count, 
 long *ActualCount 
);
HRESULT moveStart( 
 BSTR Unit, 
 long Count, 
 long *ActualCount 
);
HRESULT moveToBookmark( 
 BSTR Bookmark, 
 VARIANT_BOOL *Success 
);
HRESULT moveToElementText( 
 IHTMLElement *element 
);
HRESULT moveToPoint( 
 long x, 
 long y 
);
HRESULT parentElement( 
 IHTMLElement **parent 
);
HRESULT pasteHTML( 
 BSTR html 
);
HRESULT queryCommandEnabled( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandIndeterm( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandState( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandSupported( 
 BSTR cmdID, 
 VARIANT_BOOL *pfRet 
);
HRESULT queryCommandText( 
 BSTR cmdID, 
 BSTR *pcmdText 
);
HRESULT queryCommandValue( 
 BSTR cmdID, 
 VARIANT *pcmdValue 
);
HRESULT scrollIntoView( 
 VARIANT varargStart 
);
HRESULT select(VOID);
HRESULT setEndPoint( 
 BSTR how, 
 IHTMLTxtRange *SourceRange 
);
HRESULT IHTMLTxtRange::get_text(BSTR *p);
HRESULT IHTMLTxtRange::put_text(BSTR v);
HRESULT IHTMLTxtRangeCollection::get__newEnum(IUnknown **p);
HRESULT item( 
 VARIANT *pvarIndex, 
 VARIANT *pvarResult 
);
HRESULT IHTMLTxtRangeCollection::get_length(long *p);
HRESULT IHTMLUListElement::get_compact(VARIANT_BOOL *p);
HRESULT IHTMLUListElement::put_compact(VARIANT_BOOL v);
HRESULT IHTMLUListElement::get_type(BSTR *p);
HRESULT IHTMLUListElement::put_type(BSTR v);
HRESULT IHTMLUniqueName::get_uniqueID(BSTR *p);
HRESULT IHTMLUniqueName::get_UniqueNumber(long *p);
HRESULT item( 
 long index, 
 BSTR *pName 
);
HRESULT IHTMLUrnCollection::get_length(long *p);
HRESULT IHTMLWindow2::get__newEnum(IUnknown **p);
HRESULT alert( 
 BSTR message 
);
HRESULT blur(VOID);
HRESULT clearInterval( 
 long timerID 
);
HRESULT clearTimeout( 
 long timerID 
);
HRESULT IHTMLWindow2::get_clientInformation(IOmNavigator **p);
HRESULT close(VOID);
HRESULT IHTMLWindow2::get_closed(VARIANT_BOOL *p);
HRESULT confirm( 
 BSTR message, 
 VARIANT_BOOL *confirmed 
);
HRESULT IHTMLWindow2::get_defaultStatus(BSTR *p);
HRESULT IHTMLWindow2::put_defaultStatus(BSTR v);
HRESULT IHTMLWindow2::get_document(IHTMLDocument2 **p);
HRESULT IHTMLWindow2::get_event(IHTMLEventObj **p);
HRESULT execScript( 
 BSTR code, 
 BSTR language, 
 VARIANT *pvarRet 
);
HRESULT IHTMLWindow2::get_external(IDispatch **p);
HRESULT focus(VOID);
HRESULT IHTMLWindow2::get_frames(IHTMLFramesCollection2 **p);
HRESULT IHTMLWindow2::get_history(IOmHistory **p);
HRESULT IHTMLWindow2::get_Image(IHTMLImageElementFactory **p);
HRESULT IHTMLWindow2::get_location(IHTMLLocation **p);
HRESULT moveBy( 
 long x, 
 long y 
);
HRESULT moveTo( 
 long x, 
 long y 
);
HRESULT IHTMLWindow2::get_name(BSTR *p);
HRESULT IHTMLWindow2::put_name(BSTR v);
HRESULT navigate( 
 BSTR url 
);
HRESULT IHTMLWindow2::get_navigator(IOmNavigator **p);
HRESULT IHTMLWindow2::get_offscreenBuffering(VARIANT_BOOL *p);
HRESULT IHTMLWindow2::put_offscreenBuffering(VARIANT_BOOL v);
HRESULT IHTMLWindow2::get_onbeforeunload(VARIANT *p);
HRESULT IHTMLWindow2::put_onbeforeunload(VARIANT v);
HRESULT IHTMLWindow2::get_onblur(VARIANT *p);
HRESULT IHTMLWindow2::put_onblur(VARIANT v);
HRESULT IHTMLWindow2::get_onerror(VARIANT *p);
HRESULT IHTMLWindow2::put_onerror(VARIANT v);
HRESULT IHTMLWindow2::get_onfocus(VARIANT *p);
HRESULT IHTMLWindow2::put_onfocus(VARIANT v);
HRESULT IHTMLWindow2::get_onhelp(VARIANT *p);
HRESULT IHTMLWindow2::put_onhelp(VARIANT v);
HRESULT IHTMLWindow2::get_onload(VARIANT *p);
HRESULT IHTMLWindow2::put_onload(VARIANT v);
HRESULT IHTMLWindow2::get_onresize(VARIANT *p);
HRESULT IHTMLWindow2::put_onresize(VARIANT v);
HRESULT IHTMLWindow2::get_onscroll(VARIANT *p);
HRESULT IHTMLWindow2::put_onscroll(VARIANT v);
HRESULT IHTMLWindow2::get_onunload(VARIANT *p);
HRESULT IHTMLWindow2::put_onunload(VARIANT v);
HRESULT open( 
 BSTR url, 
 BSTR name, 
 BSTR features, 
 VARIANT replace, 
 IHTMLWindow2 **pomWindowResult 
);
HRESULT IHTMLWindow2::get_opener(VARIANT *p);
HRESULT IHTMLWindow2::put_opener(VARIANT v);
HRESULT IHTMLWindow2::get_Option(IHTMLOptionElementFactory **p);
HRESULT IHTMLWindow2::get_parent(IHTMLWindow2 **p);
HRESULT prompt( 
 BSTR message, 
 BSTR defstr, 
 VARIANT textdata 
);
HRESULT resizeBy( 
 long x, 
 long y 
);
HRESULT resizeTo( 
 long x, 
 long y 
);
HRESULT IHTMLWindow2::get_screen(IHTMLScreen **p);
HRESULT scroll( 
 long x, 
 long y 
);
HRESULT scrollBy( 
 long x, 
 long y 
);
HRESULT scrollTo( 
 long x, 
 long y 
);
HRESULT IHTMLWindow2::get_self(IHTMLWindow2 **p);
HRESULT setInterval( 
 VARIANT *expression, 
 long msec, 
 VARIANT *language, 
 long timerID 
);
HRESULT setTimeout( 
 VARIANT *expression, 
 long msec, 
 VARIANT *language, 
 long *timerID 
);
HRESULT showHelp( 
 BSTR helpURL, 
 VARIANT helpArg 
);
HRESULT showModalDialog( 
 BSTR dialog, 
 VARIANT *varArgIn, 
 VARIANT *varOptions, 
 VARIANT varArgOut 
);
HRESULT IHTMLWindow2::get_status(BSTR *p);
HRESULT IHTMLWindow2::put_status(BSTR v);
HRESULT IHTMLWindow2::get_top(IHTMLWindow2 **p);
HRESULT toString( 
 BSTR *String 
);
HRESULT IHTMLWindow2::get_window(IHTMLWindow2 **p);
HRESULT attachEvent( 
 BSTR event, 
 IDispatch *pDisp, 
 VARIANT_BOOL *pfResult 
);
HRESULT IHTMLWindow3::get_clipboardData(IHTMLDataTransfer **p);
HRESULT detachEvent( 
 BSTR event, 
 IDispatch *pDisp 
);
HRESULT IHTMLWindow3::get_onafterprint(VARIANT *p);
HRESULT IHTMLWindow3::put_onafterprint(VARIANT v);
HRESULT IHTMLWindow3::get_onbeforeprint(VARIANT *p);
HRESULT IHTMLWindow3::put_onbeforeprint(VARIANT v);
HRESULT print(VOID);
HRESULT IHTMLWindow3::get_screenLeft(long *p);
HRESULT IHTMLWindow3::get_screenTop(long *p);
HRESULT setInterval( 
 VARIANT *expression, 
 long msec, 
 VARIANT *language, 
 long timerID 
);
HRESULT setTimeout( 
 VARIANT *expression, 
 long msec, 
 VARIANT *language, 
 long *timerID 
);
HRESULT showModelessDialog( 
 BSTR url, 
 VARIANT *varArgIn, 
 VARIANT *options, 
 IHTMLWindow2 **pDialog 
);
HRESULT createPopup( 
 VARIANT *varArgIn, 
 IDispatch **ppPopup 
);
HRESULT IHTMLWindow4::get_frameElement(IHTMLFrameBase **p);
HRESULT SetEncoderParameters(
 DWORD dwCount,
 StructEncoderParameter* Parameter
);
HRESULT SetQuality(
 DWORD dwQuality
);
HRESULT GetActiveIMM( 
 IActiveIMMApp **ppActiveIMM 
);
HRESULT IRAvailable ( );
HRESULT Transfer ( IfmManage *pFrmMgr, WORD wNum, CEOID *rgOID);
HRESULT QuerySupported(
 REFGUID guidPropSet,
 DWORD dwPropID,
 DWORD* pTypeSupport
);
HRESULT ILineInfo::get_baseLine(long *p);
HRESULT ILineInfo::get_lineDirection(LONG *p);
HRESULT ILineInfo::get_textDescent(long *p);
HRESULT ILineInfo::get_textHeight(long *p);
HRESULT ILineInfo::get_x(long *p);
HRESULT CreateChangeLog( 
 IHTMLChangeSink *pChangeSink, 
 IHTMLChangeLog **ppChangeLog, 
 BOOL fForward, 
 BOOL fBackward 
);
HRESULT GetAndClearDirtyRange( 
 DWORD dwCookie, 
 IMarkupPointer *pIPointerBegin, 
 IMarkupPointer *pIPointerEnd 
);
HRESULT GetMasterElement( 
 IHTMLElement **ppElementMaster 
);
long GetVersionNumber(VOID);
HRESULT RegisterForDirtyRange( 
 IHTMLChangeSink *pChangeSink, 
 DWORD *pdwCookie 
);
HRESULT UnRegisterForDirtyRange( 
 DWORD dwCookie 
);
HRESULT OwningDoc( 
 IHTMLDocument2 **ppDoc 
);
HRESULT GetMarkupPosition( 
 long *plMP 
);
HRESULT IsAtWordBreak( 
 BOOL *pfAtBreak 
);
HRESULT IsInsideURL( 
 IMarkupPointer *pRight, 
 BOOL *pfResult 
);
HRESULT MoveToContent( 
 IHTMLElement *pIElement, 
 BOOL fAtStart 
);
HRESULT MoveToMarkupPosition( 
 IMarkupContainer *pContainer, 
 long lMP 
);
HRESULT MoveUnitBounded( 
 MOVEUNIT_ACTION muAction, 
 IMarkupPointer *pIBoundary 
);
HRESULT Cling( 
 BOOL *pfCling 
);
HRESULT CurrentScope( 
 IHTMLElement **ppElemCurrent 
);
HRESULT FindText( 
 OLECHAR *pchFindText, 
 DWORD dwFlags, 
 IMarkupPointer *pIEndMatch, 
 IMarkupPointer *pIEndSearch 
);
HRESULT GetContainer( 
 IMarkupContainer **ppContainer 
);
HRESULT Gravity( 
 POINTER_GRAVITY *pGravity 
);
HRESULT IsEqualTo( 
 IMarkupPointer *pPointerThat, 
 BOOL *pfAreEqual 
);
HRESULT IsLeftOf( 
 IMarkupPointer *pPointerThat, 
 BOOL *pfResult 
);
HRESULT IsLeftOfOrEqualTo( 
 IMarkupPointer *pPointerThat, 
 BOOL *pfResult 
);
HRESULT IsPositioned( 
 BOOL *pfPositioned 
);
HRESULT IsRightOf( 
 IMarkupPointer *pPointerThat, 
 BOOL *pfResult 
);
HRESULT IsRightOfOrEqualTo( 
 IMarkupPointer *pPointerThat, 
 BOOL *pfResult 
);
HRESULT Left( 
 BOOL fMove, 
 MARKUP_CONTEXT_TYPE *pContext, 
 IHTMLElement **ppElement, 
 long *pcch, 
 OLECHAR *pchText 
);
HRESULT MoveAdjacentToElement( 
 IHTMLElement *pElement, 
 ELEMENT_ADJACENCY eAdj 
);
HRESULT MoveToContainer( 
 IMarkupContainer *pContainer, 
 BOOL fAtStart 
);
HRESULT MoveToPointer( 
 IMarkupPointer *pPointer 
);
HRESULT MoveUnit( 
 MOVEUNIT_ACTION muAction 
);
HRESULT OwningDoc( 
 IHTMLDocument2 **ppDoc 
);
HRESULT Right( 
 BOOL fMove, 
 MARKUP_CONTEXT_TYPE *pContext, 
 IHTMLElement **ppElement, 
 long *pcch, 
 OLECHAR *pchText 
);
HRESULT SetCling( 
 BOOL fCLing 
);
HRESULT SetGravity( 
 POINTER_GRAVITY Gravity 
);
HRESULT UnPosition(VOID);
HRESULT ParseGlobalEx( 
 HGLOBAL hglobalHTML, 
 DWORD dwFlags, 
 IMarkupContainer *pContext, 
 IMarkupContainer **ppContainerResult, 
 IMarkupPointer *pPointerStart, 
 IMarkupPointer *pPointerFinish 
);
HRESULT SaveSegmentsToClipboard( 
 ISegmentList *pSegmentList, 
 DWORD dwFlags 
);
HRESULT ValidateElements( 
 IMarkupPointer *pPointerStart, 
 IMarkupPointer *pPointerFinish, 
 IMarkupPointer *pPointerTarget, 
 IMarkupPointer *pPointerStatus, 
 IHTMLElement **ppElemFailBottom, 
 IHTMLElement **ppElemFailTop 
);
HRESULT BeginUndoUnit( 
 OLECHAR *pchTitle 
);
HRESULT CloneElement( 
 IHTMLElement *pElemCloneThis, 
 IHTMLElement **ppElementTheClone 
);
HRESULT Copy( 
 IMarkupPointer *pPointerSourceStart, 
 IMarkupPointer *pPointerSourceFinish, 
 IMarkupPointer *pPointerTarget 
);
HRESULT CreateElement( 
 ELEMENT_TAG_ID tagID, 
 OLECHAR *pchAttributes, 
 IHTMLElement **ppElement 
);
HRESULT CreateMarkupContainer( 
 IMarkupContainer **ppMarkupContainer 
);
HRESULT CreateMarkupPointer( 
 IMarkupPointer **ppPointer 
);
HRESULT EndUndoUnit(VOID);
HRESULT GetElementTagId( 
 IHTMLElement *pElement, 
 ELEMENT_TAG_ID *ptagId 
);
HRESULT GetNameForTagID( 
 ELEMENT_TAG_ID tagId, 
 BSTR *pbstrName 
);
HRESULT GetTagIDForName( 
 BSTR bstrName, 
 ELEMENT_TAG_ID *ptagId 
);
HRESULT InsertElement( 
 IHTMLElement *pElementInsert, 
 IMarkupPointer *pPointerStart, 
 IMarkupPointer *pPointerFinish 
);
HRESULT InsertText( 
 OLECHAR *pchText, 
 long cch, 
 IMarkupPointer *pPointerTarget 
);
HRESULT Move( 
 IMarkupPointer *pPointerSourceStart, 
 IMarkupPointer *pPointerSourceFinish, 
 IMarkupPointer *pPointerTarget 
);
HRESULT MovePointersToRange( 
 IHTMLTxtRange *pIRange, 
 IMarkupPointer *pPointerStart, 
 IMarkupPointer *pPointerFinish 
);
HRESULT MoveRangeToPointers( 
 IMarkupPointer *pPointerStart, 
 IMarkupPointer *pPointerFinish, 
 IHTMLTxtRange *pIRange 
);
HRESULT ParseGlobal( 
 HGLOBAL hglobalHTML, 
 DWORD dwFlags, 
 IMarkupContainer **ppContainerResult, 
 IMarkupPointer *pPointerStart, 
 IMarkupPointer *pPointerFinish 
);
HRESULT ParseString( 
 OLECHAR *pchHTML, 
 DWORD dwFlags, 
 IMarkupContainer **ppContainerResult, 
 IMarkupPointer *ppPointerStart, 
 IMarkupPointer *ppPointerFinish 
);
HRESULT Remove( 
 IMarkupPointer *pPointerStart, 
 IMarkupPointer *pPointerFinish 
);
HRESULT RemoveElement( 
 IHTMLElement *pElementRemove 
);
HRESULT FindTextFragFromMarkupPointer( 
 IMarkupPointer *pPointerFind, 
 long *piFrag, 
 BOOL *pfFragFound 
);
HRESULT GetTextFrag( 
 long iFrag, 
 BSTR *pbstrFrag, 
 IMarkupPointer *pPointerFrag 
);
HRESULT GetTextFragCount( 
 long *pcFrags 
);
HRESULT InsertTextFrag( 
 long iFrag, 
 BSTR bstrInsert, 
 IMarkupPointer *pPointerInsert 
);
HRESULT RemoveTextFrag( 
 long iFrag 
);
HRESULT get_RedirectDrives( 
 VARIANT_BOOL *pRedirectDrives
);
HRESULT put_RedirectDrives( 
 VARIANT_BOOL redirectDrives
);
EXTERN_C BOOL buildDDHALInfo ( 
LPDDHALINFO lpddhi, 
DWORD modeidx 
);
HRESULT NonDelegatingQueryInterface(
 REFIID iid,
 void **ppvObject 
);
ULONG NonDelegatingAddRef(void);
ULONG NonDelegatingRelease(void);
HRESULT back( 
 VARIANT *pvargdistance 
);
HRESULT forward(VOID);
HRESULT go( 
 VARIANT *pvargdistance 
);
HRESULT IOmHistory::get_length(short *p);
HRESULT IOmNavigator::get_appCodeName(BSTR *p);
HRESULT IOmNavigator::get_appMinorVersion(BSTR *p);
HRESULT IOmNavigator::get_appName(BSTR *p);
HRESULT IOmNavigator::get_appVersion(BSTR *p);
HRESULT IOmNavigator::get_browserLanguage(BSTR *p);
HRESULT IOmNavigator::get_cookieEnabled(VARIANT_BOOL *p);
HRESULT IOmNavigator::get_cpuClass(BSTR *p);
HRESULT javaEnabled( 
 VARIANT_BOOL *enabled 
);
HRESULT IOmNavigator::get_mimeTypes(IHTMLMimeTypesCollection **p);
HRESULT IOmNavigator::get_onLine(VARIANT_BOOL *p);
HRESULT IOmNavigator::get_opsProfile(IHTMLOpsProfile **p);
HRESULT IOmNavigator::get_platform(BSTR *p);
HRESULT IOmNavigator::get_plugins(IHTMLPluginsCollection **p);
HRESULT IOmNavigator::get_systemLanguage(BSTR *p);
HRESULT taintEnabled( 
 VARIANT_BOOL *enabled 
);
HRESULT toString( 
 BSTR *String 
);
HRESULT IOmNavigator::get_userAgent(BSTR *p);
HRESULT IOmNavigator::get_userLanguage(BSTR *p);
HRESULT IOmNavigator::get_userProfile(IHTMLOpsProfile **p);
HRESULT BearingToVelocity ( const pPNVELENU pENUVel, pPNVELBEAR pBearVel );
HRESULT CloseDevice( hPNDevice hPN, );
HRESULT DegreesToRadians ( pPNPOSLLA pLLAPos );
HRESULT DeleteDeviceList ( pPNDEVICE pPNDeviceHead );
HRESULT FindDevices( ppPNDEVICE ppDevArray, DWORD *pdwNumDev );
HRESULT GetData ( hPNDevice hPN, LPVOID pBuffer, DWORD dwSize, PNData_t DataType );
HRESULT OpenDevice ( phPNDevice phPN, pPNDEVICE pDevice );
HRESULT PNTMToWintm ( SYSTEMTIME pTime, const PNTM pNTM );
HRESULT RadiansToDegrees ( pPNPOSLLA pLLAPos );
HRESULT SetData( hPNDevice hPN, LPVOID pBuffer, DWORD dwSize, PNData_t Data_Type );
HRESULT StartCall ( hPNDevice hPN, PNData_t Call, DWORD dwPeriod );
HRESULT StopCall ( hPNDevice hPN, PNData_t Call );
HRESULT VelocityToBearing( pPNVELBEAR pBearVel, const pPNVELENU pENUVel );
HRESULT WintmPNTM ( PNTM pNTM, const SYSTEMTIME pTime, );
HRESULT FlagKeysUsed( long lKeysUsed, long lKeysEaten );
HRESULT GetPointers( 
 IMarkupPointer *pIStart, 
 IMarkupPointer *pIEnd 
);
HRESULT CreateIterator( 
 ISegmentListIterator **ppIIter 
);
HRESULT GetType( 
 SELECTION_TYPE *peType 
);
HRESULT IsEmpty( 
 BOOL *pfEmpty 
);
HRESULT Advance(VOID);
HRESULT Current( 
 ISegment **ppISegment 
);
HRESULT First(VOID);
HRESULT IsDone(VOID);
HRESULT AddElementSegment( 
 IHTMLElement *pIElement, 
 IElementSegment **ppISegmentAdded 
);
HRESULT AddSegment( 
 IMarkupPointer *pIStart, 
 IMarkupPointer *pIEnd, 
 ISegment **ppISegmentAdded 
);
HRESULT GetMarkupContainer( 
 IMarkupContainer **ppIContainer 
);
HRESULT GetSelectionServicesListener( 
 ISelectionServicesListener **ppISelectionServicesListener 
);
HRESULT RemoveSegment( 
 ISegment *pISegment 
);
HRESULT SetSelectionType( 
 SELECTION_TYPE eType, 
 ISelectionServicesListener *pIListener 
);
HRESULT BeginSelectionUndo(VOID);
HRESULT EndSelectionUndo(VOID);
HRESULT GetTypeDetail( 
 BSTR *pTypeDetail 
);
HRESULT OnChangeType( 
 SELECTION_TYPE eType, 
 ISelectionServicesListener *pIListener 
);
HRESULT OnSelectedElementExit( 
 IMarkupPointer *pIElementStart, 
 IMarkupPointer *pIElementEnd, 
 IMarkupPointer *pIElementContentStart, 
 IMarkupPointer *pIElementContentEnd 
);
DWORD ISRHandler(
 DWORD InstanceIndex
);
HRESULT GetFramesContainer( 
 IOleContainer **ppContainer 
);
HRESULT GetFrameUrl( 
 LPWSTR *ppszFrameSrc 
);
HRESULT FindFrame( 
 LPCWSTR pszTargetName, 
 DWORD dwFlags, 
 IUnknown **ppunkTargetFrame 
);
HRESULT GetFrameMargins( 
 DWORD *pdwWidth, 
 DWORD *pdwHeight 
);
HRESULT GetFrameName( 
 LPWSTR *ppszFrameName 
);
HRESULT GetFrameOptions( 
 DWORD *pdwFlags 
);
HRESULT GetFramesContainer( 
 IOleContainer **ppContainer 
);
HRESULT GetFrameSrc( 
 LPWSTR *ppszFrameSrc 
);
HRESULT GetParentFrame( 
 IUnknown **ppunkParent 
);
HRESULT GetTargetAlias( 
 LPCWSTR pszTargetName, 
 LPWSTR *ppszTargetAlias 
);
HRESULT SetFrameMargins( 
 DWORD dwWidth, 
 DWORD dwHeight 
);
HRESULT SetFrameName( 
 LPCWSTR pszFrameName 
);
HRESULT SetFrameOptions( 
 DWORD dwFlags 
);
HRESULT SetFrameSrc( 
 LPCWSTR pszFrameSrc 
);
HRESULT FindFrame( 
 LPCWSTR pszTargetName, 
 IUnknown *ppunkContextFrame, 
 DWORD dwFlags, 
 IUnknown **ppunkTargetFrame 
);
HRESULT GetFrameName( 
 LPWSTR *ppszFrameName 
);
HRESULT GetFrameSrc( 
 LPWSTR *ppszFrameSrc 
);
HRESULT GetParentFrame( 
 IUnknown **ppunkParent 
);
HRESULT SetFrameName( 
 LPCWSTR pszFrameName 
);
HRESULT SetFrameSrc( 
 LPCWSTR pszFrameSrc 
);
HRESULT OnCreate( 
 IUnknown *pUnkDestination, 
 ULONG cbCookie 
);
HRESULT OnReuse( 
 IUnknown *pUnkDestination 
);
HRESULT Advise( 
 VARIANT vtimeMin, 
 VARIANT vtimeMax, 
 VARIANT vtimeInterval, 
 DWORD dwFlags, 
 ITimerSink *pTimerSink, 
 DWORD *pdwCookie 
);
HRESULT Freeze( 
 BOOL fFreeze 
);
HRESULT GetTime( 
 VARIANT *pvtime 
);
HRESULT Unadvise( 
 DWORD dwCookie 
);
HRESULT CreateTimer( 
 ITimer *pReferenceTimer, 
 ITimer **ppNewTimer 
);
HRESULT GetNamedTimer( 
 REFGUID rguidName, 
 ITimer **ppTimer 
);
HRESULT SetNamedTimerReference( 
 REFGUID rguidName, 
 ITimer *pReferenceTimer 
);
HRESULT OnTimer( 
 VARIANT vtimeAdvise 
);
HRESULT GetTitle( 
 LPOLESTR *ppszTitle 
);
HRESULT GetURL( 
 LPOLESTR *ppszURL 
);
HRESULT CreateEntry( 
 LPCOLESTR pszUrl, 
 LPCOLESTR pszTitle, 
 ITravelLogEntry *ptleRelativeTo, 
 BOOL fPrepend, 
 ITravelLogEntry **pptle 
);
HRESULT EnumEntries( 
 TLENUMF flags, 
 IEnumTravelLogEntry **ppenum 
);
HRESULT GetCount( 
 TLENUMF flags, 
 DWORD *pcEntries 
);
HRESULT GetRelativeEntry( 
 int iOffset, 
 ITravelLogEntry **ptle 
);
HRESULT RemoveEntry( 
 ITravelLogEntry *ptle 
);
HRESULT TravelTo( 
 ITravelLogEntry *ptle 
);
HRESULT AwakeStateGet( DWORD*pdwAwake );
HRESULT AwakeStateSet( DWORD dwAwake );
HRESULT EnabledGet( DWORD *dwEnabled );
HRESULT EnabledSet( DWORD dwEnabled );
HRESULT SpeakerGet( PTSTR pszSpeaker, DWORD dwSize, DWORD *pdwNeeded);
HRESULT SpeakerSet( PTSTR pszSpeaker);
HRESULT SRModeGet( GUID *pgMode);
HRESULT SRModeSet( GUID gMode);
HRESULT ThresholdGet( DWORD *pdwThreshold);
HRESULT ThresholdSet( DWORD dwThreshold);
HRESULT Clone( IEnumXXX **ppenum);
HRESULT IEnumX::Next( ULONG celt, Unknown **rgelt, ULONG *pceltFetched);
HRESULT IEnumX::Reset(void);
HRESULT IEnumX::Skip ( ULONG celt);
HRESULT Activate( HWND hWndListening, DWORD dwFlags);
HRESULT Add( DWORD dwCmdNum, SDATA dData, DWORD *pdwCmdStart);
HRESULT Deactivate(void);
HRESULT EnableItem( DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT Get( DWORD dwCmdStart, DWORD dwCmdNum, DWORD dwFlag, PSDATA pdData, DWORD *pdwCmdNum);
HRESULT ListGet( PTSTR pszList, PSDATA pdList, DWORD *pdwListNum);
HRESULT ListSet( PTSTR pszList, DWORD dwListNum, SDATA dList);
HRESULT Num( DWORD *pdwNumCmd);
HRESULT Remove( DWORD dwCmdStart, DWORD dwCmdNum, DWORD dwFlag);
HRESULT Set( DWORD dwCmdStart, DWORD dwCmdNum, DWORD dwFlag, SDATA dData);
HRESULT SetItem( DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT AttribChanged( DWORD dwAttribute);
HRESULT CommandOther( PVCMDNAME pName, PTSTR pszCommand);
HRESULT CommandRecognize( DWORD dwID, PVCMDNAME pvCmdName, DWORD dwFlags, DWORD dwActionSize, PVOID pAction, DWORD dwNumLists, PTSTR pszListValues, PTSTR pszCommand);
HRESULT CommandStart();
HRESULT Interference( DWORD dwType);
HRESULT AddSIFile( LPCWSTR lpszFileName, DWORD *pdwID, DWORD dwFlag );
HRESULT GetPhraseList( DWORD dwFlags, PWSTR pszBuf PDWORD *pdwSize);
HRESULT ModifyTraining( LPTSTR lpszPhrase, DWORD dwFlags);
HRESULT QueryPhrase( LPTSTR lpszPhrase, DWORD *pdwValue);
HRESULT RemoveSIFile( DWORD dwID, DWORD dwFlag );
HRESULT Train( PCWSTR lpPhrases, DWORD dwSize, PCWSTR lpCaption, DWORD dwSizeCap, DWORD hHandle, DWORD dwFlags);
HRESULT IsContactValid( CEOID ceoidContact, PROPID propidAddress, BSTR* pbstrExplanation);
HRESULT IVIO_DataValue::get_DataValue ( LPVARIANT pDataValue);
HRESULT IVIO_DataValue::get_ItemID ( LPDWORD *pItemID);
HRESULT IVIO_Device::get_AccessMode ( DWORD dwMode, DWORD *pAccessMode );
HRESULT IVIO_Device::get_Metrics ( LPVIODEVICEMETRICS pVIODeviceMetrics );
HRESULT IVIO_Device::get_Status ( DWORD *pStatus );
HRESULT IVIO_Device::GetData ( LPVARIANT pData, DWORD dwTimeOut );
HRESULT IVIO_Device::set_AccessMode( DWORD dwMode, DWORD dwAccessMode );
HRESULT IVIO_Device::SetData ( const LPVARIANT pData, DWORD dwTimeout );
HRESULT IVIO_Device::SetNotify ( const LPVARIANT pParameterData, IVIO_EventSink *pEventSink, DWORD dwFreq );
HRESULT IVIO_EnumDevices::Clone ( IVIO_EnumDevices **ppEnumClone);
HRESULT IVIO_EnumDevices::Next ( ULONG cDevices, LPCLSID *rgDevicesArray, ULONG *pcDevicesFetched);
HRESULT IVIO_EnumDevices::Reset ( );
HRESULT IVIO_EnumDevices::Seek ( REFCLSID rclsid);
HRESULT IVIO_EnumDevices::Skip ( ULONG cDevices);
HRESULT IVIO_EnumDiagnosticEntry::Clone ( IVIO_EnumDiagnosticEntry **ppEnumClone);
HRESULT IVIO_EnumDiagnosticEntry::Next ( ULONG cItems, IVIO_DataValue **rgItemsArray, ULONG *pcItemsFetched);
HRESULT IVIO_EnumDiagnosticEntry::Reset ( );
HRESULT IVIO_EnumDiagnosticEntry::Seek ( DWORD nItem );
HRESULT IVIO_EnumDiagnosticEntry::Skip ( ULONG cItems);
HRESULT IVIO_EnumDiagnosticItems::Clone ( IVIO_EnumDiagnosticItems **ppEnumClone);
HRESULT IVIO_EnumDiagnosticItems::Next ( ULONG cItems, IVIO_EnumDiagnosticEntry **rgItemsArray, ULONG *pcItemsFetched);
HRESULT IVIO_EnumDiagnosticItems::Reset ( );
HRESULT IVIO_EnumDiagnosticItems::Skip ( ULONG cItems);
HRESULT IVIO_EnumMaintenanceEntry::Clone ( IVIO_EnumMetrics **ppEnumClone);
HRESULT IVIO_EnumMaintenanceEntry::Next ( ULONG cItems, IVIO_DataValue **rgItemsArray, ULONG *pcItemsFetched);
HRESULT IVIO_EnumMaintenanceEntry::Reset ( );
HRESULT IVIO_EnumMaintenanceEntry::Seek ( DWORD nItemId);
HRESULT IVIO_EnumMaintenanceEntry::Set ( LPVARIANT pValue);
HRESULT IVIO_EnumMaintenanceEntry::Skip ( ULONG cItems);
HRESULT IVIO_EnumMaintenanceItems::Add ( DWORD nItemId);
HRESULT IVIO_EnumMaintenanceItems::Clone ( IVIO_EnumMaintenanceItems **ppEnumClone);
HRESULT IVIO_EnumMaintenanceItems::Next ( ULONG cItems, IVIO_DataValue **rgItemsArray, ULONG *pcItemsFetched);
HRESULT IVIO_EnumMaintenanceItems::Reset ( );
HRESULT IVIO_EnumMaintenanceItems::Seek ( DWORD nItemId);
HRESULT IVIO_EnumMaintenanceItems::Skip ( ULONG cItems);
HRESULT IVIO_EnumMetrics::Add ( DWORD nItemId);
HRESULT IVIO_EnumMetrics::Clone ( IVIO_EnumMetrics **ppEnumClone);
HRESULT IVIO_EnumMetrics::Next ( ULONG cItems, IVIO_DataValue **rgItemsArray, ULONG *pcItemsFetched);
HRESULT IVIO_EnumMetrics::Reset ( );
HRESULT IVIO_EnumMetrics::Seek ( DWORD nItemId);
HRESULT IVIO_EnumMetrics::Set ( LPVARIANT pValue);
HRESULT IVIO_EnumMetrics::Skip ( ULONG cItems);
HRESULT IVIO_EventSink::ReceiveData( LPVARIANT pData, LPARAM lParam );
HRESULT IVIO_Ioctl::DoCommand( DWORD dwCommandId, const PVOID pCommandData, DWORD cb, PVOID pReply, DWORD dwOutputSize, DWORD *pReplySize );
HRESULT IVIO_MiniDriver::GetData( IVIO_MiniDriverData *pInputData, IVIO_MiniDriverData **ppData, DWORD dwTimeout );
HRESULT IVIO_MiniDriver::IOControl( DWORD dwCommandId, const PVOID pCommandData, DWORD cb, PVOID pReply, DWORD dwOutputSize, DWORD *pReplySize );
HRESULT IVIO_MiniDriver::SetData( IVIO_MiniDriverData *pInputData, DWORD dwTimeout );
HRESULT IVIO_MiniDriver::SetNotify( HANDLE *hNotifyEvent, IVIO_MiniDriverData *pInputData, IVIO_MiniDriverData **ppReturnedData, DWORD dwInterval );
HRESULT IVIO_MiniDriverData::get_DataBuffer( PVOID *ppv, );
HRESULT IVIO_MiniDriverMgr::StartManager( PVOID *pReserved );
HRESULT IVIO_Vehicle::get_Devices ( IVIO_EnumDevices **ppDevices);
HRESULT IVIO_Vehicle::get_MaintenanceItems( IVIO_EnumMaintenanceItems **ppItems);
HRESULT IVIO_Vehicle::get_Metrics ( IVIO_EnumMetrics **ppMetric);
HRESULT CmdMimic( PVCMDNAME pMenu, PTSTR pszCommand);
HRESULT MenuCreate( PVCMDNAME pName, PLANGUAGE pLanguage, DWORD dwFlags, PIVCMDMENU *ppIVCmdMenu);
HRESULT MenuDelete( PVCMDNAME pName);
HRESULT MenuEnum( DWORD dwFlags, PTSTR pszApplicationFilter, PTSTR pszStateFilter, PIVCMDENUM *ppiVCmdEnum);
HRESULT Register( PTSTR pszSite, PIVCMDNOTIFYSINK pNotifyInterface, IID IIDNotifyInterface, DWORD dwFlags, PVCSITEINFO pSiteInfo);
HRESULT AudioPause(void);
HRESULT AudioResume(void);
HRESULT Register( PTSTR pszSite, PTSTR pszApplication, PIVTXTNOTIFYSINK pNotifyInterface, IID IIDNotifyInterface, DWORD dwFlags, PVTSITEINFO pSiteInfo);
HRESULT Speak( PTSTR pszSpeak, DWORD dwFlags, PTSTR pszTags);
HRESULT StopSpeaking(void);
HRESULT SetDDSurfaceKernelHandle( 
 DWORD dwDDKernelHandle 
);
HRESULT GetColorControls(
 LPDDCOLORCONTROL* ppColorControl
) PURE;
HRESULT SetColorControls(
 LPDDCOLORCONTROL pColorControl
) PURE;
HRESULT EnabledGet( DWORD *dwEnabled);
HRESULT EnabledSet( DWORD dwEnabled);
HRESULT IsSpeaking( BOOL *pfSpeaking);
HRESULT SpeedGet( DWORD *pdwSpeed);
HRESULT SpeedSet( DWORD dwSpeed);
HRESULT TTSModeGet( GUID *pgVoice);
HRESULT TTSModeSet( GUID gVoice);
HRESULT SpeakingDone ( void );
HRESULT SpeakingStarted(void);
HRESULT IWebBrowser2::get_AddressBar(VARIANT_BOOL *pValue);
HRESULT IWebBrowser2::put_AddressBar(VARIANT_BOOL Value);
HRESULT IWebBrowser2::get_Application(IDispatch **ppDisp);
HRESULT IWebBrowser2::get_Busy(VARIANT_BOOL *pBool);
HRESULT IWebBrowser2::get_Container(IDispatch **ppDisp);
HRESULT IWebBrowser2::get_Document(IDispatch **ppDisp);
HRESULT IWebBrowser2::get_FullName(BSTR *pbstrFullName);
HRESULT IWebBrowser2::get_FullScreen(VARIANT_BOOL *pbFullScreen);
HRESULT IWebBrowser2::put_FullScreen(VARIANT_BOOL bFullScreen);
HRESULT IWebBrowser2::get_Height(long *pl);
HRESULT IWebBrowser2::put_Height(long Height);
HRESULT IWebBrowser2::get_HWND(long *pHWND);
HRESULT IWebBrowser2::get_Left(long *pl);
HRESULT IWebBrowser2::put_Left(long Left);
HRESULT IWebBrowser2::get_LocationName(BSTR *pbstrLocationName);
HRESULT IWebBrowser2::get_LocationURL(BSTR *pbstrLocationURL);
HRESULT IWebBrowser2::get_MenuBar(VARIANT_BOOL *pValue);
HRESULT IWebBrowser2::put_MenuBar(VARIANT_BOOL Value);
HRESULT IWebBrowser2::get_Name(BSTR *pbstrName);
HRESULT IWebBrowser2::get_Offline(VARIANT_BOOL *pbOffline);
HRESULT IWebBrowser2::put_Offline(VARIANT_BOOL bOffline);
HRESULT IWebBrowser2::get_Parent(IDispatch **ppDisp);
HRESULT IWebBrowser2::get_Path(BSTR *Path);
HRESULT IWebBrowser2::get_ReadyState(READYSTATE *plReadyState);
HRESULT IWebBrowser2::get_RegisterAsBrowser(VARIANT_BOOL *pbRegister);
HRESULT IWebBrowser2::put_RegisterAsBrowser(VARIANT_BOOL bRegister);
HRESULT IWebBrowser2::get_RegisterAsDropTarget(VARIANT_BOOL *pbRegister);
HRESULT IWebBrowser2::put_RegisterAsDropTarget(VARIANT_BOOL bRegister);
HRESULT IWebBrowser2::get_Resizable(VARIANT_BOOL *pValue);
HRESULT IWebBrowser2::put_Resizable(VARIANT_BOOL Value);
HRESULT ShowBrowserBar( 
 VARIANT *pvaClsid, 
 VARIANT *pvarShow, 
 VARIANT *pvarSize 
);
HRESULT IWebBrowser2::get_Silent(VARIANT_BOOL *pbSilent);
HRESULT IWebBrowser2::put_Silent(VARIANT_BOOL bSilent);
HRESULT IWebBrowser2::get_StatusBar(VARIANT_BOOL *pBool);
HRESULT IWebBrowser2::put_StatusBar(VARIANT_BOOL Value);
HRESULT IWebBrowser2::get_StatusText(BSTR *pbstr);
HRESULT IWebBrowser2::put_StatusText(BSTR bstr);
HRESULT IWebBrowser2::get_TheaterMode(VARIANT_BOOL *pbRegister);
HRESULT IWebBrowser2::put_TheaterMode(VARIANT_BOOL bRegister);
HRESULT IWebBrowser2::get_ToolBar(int *pValue);
HRESULT IWebBrowser2::put_ToolBar(int Value);
HRESULT IWebBrowser2::get_Top(long *pl);
HRESULT IWebBrowser2::put_Top(long Top);
HRESULT IWebBrowser2::get_TopLevelContainer(VARIANT_BOOL *pBool);
HRESULT IWebBrowser2::get_Type(BSTR *pType);
HRESULT IWebBrowser2::get_Visible(VARIANT_BOOL *pBool);
HRESULT IWebBrowser2::put_Visible(VARIANT_BOOL Value);
HRESULT IWebBrowser2::get_Width(long *pl);
HRESULT IWebBrowser2::put_Width(long Width);
virtual HRESULT STDMETHODCALLTYPE GetCursor(
 XRCursor* pCursor
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetCursor(
 XRCursor Cursor
) = 0;
virtual HRESULT STDMETHODCALLTYPE IsIdentity(
 bool* pValue
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetFontSource(
 HANDLE* pHFile
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetFontSource(
 HANDLE hFile
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetSegments(
 __out IXRPathSegmentCollection **ppSegments
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetSegments(
 __in IXRPathSegmentCollection *pSegments
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetAngle(
 float* pAngle
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetCenterX(
 float* pCenterX
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetCenterY(
 float* pCenterY
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetAngle(
 float Angle
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetCenterX(
 float CenterX
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetCenterY(
 float CenterY
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetText(
 BSTR* pText
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetText(
 const WCHAR* pText
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetInlines(
 IXRInlineCollection** ppInlines
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetInlines(
 IXRInlineCollection* pInlines
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetAlignmentX(
 XRAlignmentX* pAlignmentX
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetAlignmentY(
 XRAlignmentY* pAlignmentY
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetStretch(
 XRStretch* pStretch
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetAlignmentX(
 XRAlignmentX AlignmentX
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetAlignmentY(
 XRAlignmentY AlignmentY
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetStretch(
 XRStretch Stretch
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetX(
 float* pX
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetY(
 float* pY
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetX(
 float X
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetY(
 float Y
) = 0;
virtual HRESULT STDMETHODCALLTYPE GetPosition(
 UINT* pXCoordinate,
 UINT* pYCoordinate
) = 0;
virtual HRESULT STDMETHODCALLTYPE SetPosition(
 UINT XCoordinate,
 UINT YCoordinate
) = 0;
/// <summary>
/// Test cases always want logging, so they generally use the
/// Summary level (lowest level) which is always logged.
/// </summary>
public void TestCaseMethod()
{
 // This will always be logged
 GlobalLogger.AddComment(
 GlobalLogger.VerboseLevel.Summary, "Test case");
 // This will also always be logged
 GlobalLogger.AddComment("Test case comment");
}
BOOL OEMIsROM(
 LPVOID pvAddr,
 DWORD cbSize
);
BOOL (*pfnNKDrWatsonClear)(void);
BOOL (*pfnNKDrWatsonFlush)(void);
DWORD (*pfnNKDrWatsonRead)(
 DWORD dwOffset, 
 LPVOID pData, 
 DWORD cbSize 
);
DWORD (*pfnNKDrWatsonWrite)(
 DWORD dwOffset, 
 LPVOID pData, 
 DWORD cbSize 
);
extern BOOL (*pfnOEMIsRom) (LPVOID pvAddr, DWORD cbSize);
extern void (*pfnOEMRefreshWatchDog)(void);
extern BOOL(*pfnOEMSetMemoryAttributes)( LPVOID pVirtualAddr,LPVOID pPhysAddr,DWORD cbSize,DWORD dwAttributes);
BOOL PIN_Deinit(
 DWORD dwContext
);
BOOL PIN_IOControl(
 DWORD dwContext,
 DWORD Ioctl,
 PUCHAR pInBuf,
 DWORD InBufLen, 
 PUCHAR pOutBuf,
 DWORD OutBufLen,
 PDWORD pdwBytesTransferred
);
void (*pLogProcessCreate)(
 DWORD ProcessID
);
void (*pLogProcessDelete)(
 DWORD ProcessID
);
void (*pLogThreadCreate)(
 DWORD ThreadID, 
 DWORD ProcessID
);
void (*pLogThreadDelete)(
 DWORD ThreadID, 
 DWORD ProcessID
);
void (*pLogThreadSwitch)(
 DWORD ThreadID, 
 DWORD ProcessID
);
void (*pOEMCertifyModule)(
 LPBYTE Data, 
 DWORD Data
);
void (*pOEMCertifyModuleInit)(
 LPTSTR ModuleName
);
extern BOOL (*pOEMIsProcessorFeaturePresent)(
 DWORD dwProcessorFeature
);
extern BOOL (*pOEMLoadInit)( 
 LPWSTR lpszName 
);
extern BOOL (*pOEMLoadModule)(
 LPBYTE lpData, 
 DWORD cbData 
);
extern void (*pOEMUpdateRescheduleTime)(
 DWORD dwTick 
);
extern BOOL (*pQueryPerformanceCounter)(
 LARGE_INTEGER* lpPerformanceCount
);
extern BOOL (*pQueryPerformanceFrequency)(
 LARGE_INTEGER* lpPerformanceFreq
);
DWORD (*pReadRegistryFromOEM)(
 DWORD dwFlags, 
 DWORD lpData, 
 DWORD cbData
);
VOID (*pWriteDebugLED)(
 WORD wIndex,
 DWORD dwPattern
);
BOOL (*pWriteRegistryToOEM)(
 DWORD dwFlags, 
 LPBYTES lpData, 
 DWORD cbData
);
static HRESULT Register(
 REFIID iid,
 const WCHAR *pControlName,
 const WCHAR *pNamespace
);
BOOL xxx_Close(
 DWORD dwData
);
BOOL xxx_Deinit(
 DWORD dwData
);
BOOL XXX_GetMessageInfo(
 const RILMESSAGE* prmMessage,
 SMSROUNTERMSGINFO* psmsriInfo
);
HRESULT XXX_GetSize(
 SMS_MANAGER_COOKIE smsmcCookie,
 SMSSTOREITEM* psmssiMessage,
 SMS_MANAGER_GET_NEXT_MESSAGE smsmgnmGetNextMessageFunction,
 DWORD* pdwSize
);
BOOL xxx_IOControl(
 DWORD dwData,
 DWORD dwCode,
 PBYTE pBufIn,
 DWORD dwLenIn,
 PBYTE pBufOut,
 DWORD dwLenOut,
 PDWORD pdwActualOut
);
BOOL xxx_Open(
 DWORD dwData,
 DWORD dwAccess,
 DWORD dwShareMode
);
void xxx_PowerDown( DWORD hDeviceContext );
void xxx_PowerUp( DWORD hDeviceContext );
BOOL XXX_PreClose(
 DWORD hOpenContext 
);
BOOL XXX_PreDeinit(
 DWORD hDeviceContext 
);
DWORD xxx_Read(
 DWORD dwData,
 LPVOID pBuf,
 DWORD dwLen
);
BOOL XXX_RecognizeMessage(
 const RILMESSAGE* prmMessage
);
DWORD xxx_Seek(
 DWORD dwData,
 long pos,
 DWORD type
);
BOOL XXX_Send(
 SMS_MANAGER_COOKIE smsmcCookie,
 const BYTE* pbData,
 DWORD dwDataSize,
 const BYTE* pbProviderSpecificData,
 DWORD dwProviderSpecificDataSize,
 SMS_DATA_ENCODING smsdeDesiredDataEncoding,
 RILMESSAGE* prilmTemplate,
 SMS_MANAGER_SEND_MESSAGE smsmsmSendMessageFunction
);
DWORD xxx_Write(
 DWORD dwData,
 LPcVOID pInBuf,
 DWORD dwInLen
);
interface IFst { HRESULT fst(BSTR b); HRESULT fst(long l); };
#pragma keyword("interface", on)
#pragma warning(disable:4199)
interface IX1 {
  public:
  [ property(get={0, 1}) ]
  int Size;
};
interface IMyInterface static void myFunc(); };
interface I1 {
};
interface I2 {
};
interface I3 : I1, I2 {
};
interface I1 { }; interface I2 : virtual I1 { };
interface IX11 { [ property, id(1), helpstring("Help!") ] // id and helpstring not valid on property int Size; };
interface I {
  void f1();
};
class C : I {
  private:
  void f1();// C3252; define under public:
};
#define ARRAYSIZE(hArray) sizeof (hArray) / sizeof (HANDLE)
enum
{
  WAD_ALLINPUT = 0x0000,
  WAD_SENDMESSAGE = 0x0001,
};
DWORD WaitAndDispatch (DWORD nCount, HANDLE *phWait, DWORD dwTimeout,
UINT uFlags)
{
  DWORD dwObj;
  DWORD dwStart = GetTickCount ();
  DWORD dwTimeLeft = dwTimeout;
  for (;;)
  {
    dwObj= MsgWaitForMultipleObjects (nCount, phWait, FALSE, dwTimeLeft,
    (uFlags & WAD_SENDMESSAGE) ? QS_SENDMESSAGE : QS_ALLINPUT);
    if (dwObj == (DWORD)-1)
    {
      dwObj = WaitForMultipleObjects (nCount, phWait, FALSE, 100);
      if (dwObj == (DWORD)-1)
      break;
    }
    else
    {
      if (dwObj == WAIT_TIMEOUT)
      break;
    }
    if ((UINT)(dwObj - WAIT_OBJECT_0) < nCount)
    break;
    MSG msg;
    if (uFlags & WAD_SENDMESSAGE)
    PeekMessage (&msg, NULL, 0, 0, PM_NOREMOVE);
    else
    {
      while (PeekMessage (&msg, NULL, 0, 0, PM_REMOVE))
      DispatchMessage (&msg);
    }
    if (INFINITE != dwTimeout)
    {
      dwTimeLeft = dwTimeout - (GetTickCount () - dwStart);
      if ((int)dwTimeLeft < 0)
      break;
    }
  }
  return dwObj;
}
HRESULT InitRapi (HANDLE hExit)
{
  RAPIINIT rapiinit = {sizeof (RAPIINIT)};
  HRESULT hResult = CeRapiInitEx (&rapiinit);
  if (FAILED(hResult))
  return hResult;
  HANDLE hWait[] = {hExit, rapiinit.heRapiInit};
  enum {WAIT_EXIT=WAIT_OBJECT_0, WAIT_INIT};
  DWORD dwObj = WaitAndDispatch (ARRAYSIZE(hWait), hWait, 1000, 1);
  if (WAIT_INIT == dwObj)
  {
    if (FAILED(rapiinit.hrRapiInit))
    CeRapiUninit ();
    return rapiinit.hrRapiInit;
  }
  CeRapiUninit ();
  if (WAIT_EXIT == dwObj)
  return HRESULT_FROM_WIN32(ERROR_CANCELLED);
  return E_FAIL;
};
#define MAX_HWXRESULT 10
HANDLE hMem = GlobalAlloc(GHND, MAX_HWXRESULT * (sizeof(HWXRESULTS) + (5-1) * sizeof(WCHAR)) );
HWXRESULTS * rgBoxR = (HWXRESULTS * ) GlobalLock( hMem);
do
{
  int iRes = HwxGetResults ( hrc, 5, indx, MAX_HWXRESULT, rgBoxR);
  if( HRCR_ERROR == iRes )
  {
    break;
  }
  if( (0 iRes) )
  {
    indx += (UINT) iRes;
  }
  else
  {
  }
}
while (iRes == 10);
#define SF_UTEXT 0x0005
#define DDGPEStandardHeader\  DWORD dwSize;\  DWORD dwDriverSignature;\  DWORD dwVersion;\  DWORD dwReserved0;\  DWORD dwReserved1;\  DWORD dwReserved2;\  DWORDdwReserved3
#define cEvents 3
HANDLE rghEvent[cEvents] = {0};
DSBPOSITIONNOTIFY rgdsbpn[cEvents];
HRESULT hr;
int i;
for (i = 0; i SetNotificationPositions(cEvents, rgdsbpn);
#define HSE_URL_FLAGS_READ 0x00000001 #define HSE_URL_FLAGS_EXECUTE 0x00000004 #define HSE_URL_FLAGS_SCRIPT 0x00000200
#define DECLARE_IUNKNOWN
#define MSR_START(  int Id)
#define MSR_STOP(  int Id)
#define HSE_URL_FLAGS_READ 0x00000001  #define HSE_URL_FLAGS_EXECUTE 0x00000004  #define HSE_URL_FLAGS_SCRIPT 0x00000200
#define BSF_SHOW_FATAL_ERRORS ((UINT)0x00000004)  #define BSF_SHOW_RESOLVE_ERRORS ((UINT)0x00000008)
#define SDP_RECORD_SIZE 0x00000043
#define OEM_CUSTOM_PRIMITIVE_TYPE 0x2
#define SetTextureColorStage( dev, i, arg1, op, arg2 ) \  dev->SetTextureStageState( i, D3DMTSS_COLOROP, op); \  dev->SetTextureStageState( i, D3DMTSS_COLORARG1, arg1 ); \  dev->SetTextureStageState( i, D3DMTSS_COLORARG2, arg2 );  #define SetTextureAlphaStage( dev, i, arg1, op, arg2 ) \  dev->SetTextureStageState( i, D3DMTSS_ALPHAOP, op); \  dev->SetTextureStageState( i, D3DMTSS_ALPHARG1, arg1 ); \  dev->SetTextureStageState( i D3DMTSS_ALPHARG2, arg2 );
#define D3DMERR_ALREADYLOCKED MAKE_D3DMHRESULT(2158)  #define D3DMERR_CONFLICTINGRENDERSTATE MAKE_D3DMHRESULT(2081)  #define D3DMERR_CONFLICTINGTEXTUREFILTER MAKE_D3DMHRESULT(2078)  #define D3DMERR_CONFLICTINGTEXTUREPALETTE MAKE_D3DMHRESULT(2086)  #define D3DMERR_DEVICELOST MAKE_D3DMHRESULT(2152)  #define D3DMERR_DEVICENOTRESET MAKE_D3DMHRESULT(2153)  #define D3DMERR_DRIVERINTERNALERROR MAKE_D3DMHRESULT(2087)  #define D3DMERR_DRIVERINVALIDCALL MAKE_D3DMHRESULT(2157)  #define D3DMERR_DRIVERUNSUPPORTED MAKE_D3DMHRESULT(2088)  #define D3DMERR_INVALIDCALL MAKE_D3DMHRESULT(2156)  #define D3DMERR_INVALIDDEVICE MAKE_D3DMHRESULT(2155)  #define D3DMERR_MEMORYPOOLEMPTY MAKE_D3DMHRESULT(380)  #define D3DMERR_MOREDATA MAKE_D3DMHRESULT(2151)  #define D3DMERR_NOTAVAILABLE MAKE_D3DMHRESULT(2154)  #define D3DMERR_NOTFOUND MAKE_D3DMHRESULT(2150)  #define D3DMERR_TOOMANYOPERATIONS MAKE_D3DMHRESULT(2077)  #define D3DMERR_UNSUPPORTEDALPHAARG MAKE_D3DMHRESULT(2076)  #define D3DMERR_UNSUPPORTEDALPHAOPERATION MAKE_D3DMHRESULT(2075)  #define D3DMERR_UNSUPPORTEDCOLORARG MAKE_D3DMHRESULT(2074)  #define D3DMERR_UNSUPPORTEDCOLOROPERATION MAKE_D3DMHRESULT(2073)  #define D3DMERR_UNSUPPORTEDFACTORVALUE MAKE_D3DMHRESULT(2079)  #define D3DMERR_UNSUPPORTEDTEXTUREFILTER MAKE_D3DMHRESULT(2082)  #define D3DMERR_WRONGTEXTUREFORMAT MAKE_D3DMHRESULT(2072)
#define IMPLTYPEFLAG_FDEFAULT 0x1  #define IMPLTYPEFLAG_FSOURCE 0x2  #define IMPLTYPEFLAG_FRESTRICTED 0x4  #define IMPLTYPEFLAG_FDEFAULTVTABLE 0x8
#define DVD_SYSTEM_SPACE_BIT 1 #define DVD_MENU_SPACE_BIT (DVD_SYSTEM_SPACE_BIT << 1) #define DVD_VMG_SPACE_BIT (DVD_MENU_SPACE_BIT << 1) #define DVD_VTS_SPACE_BIT (DVD_VMG_SPACE_BIT << 1) #define DVD_NAVSTATREQ_VOLUME_BIT 1 #define DVD_NAVSTATREQ_HIGHLIGHT_BIT (DVD_NAVSTATREQ_VOLUME_BIT << 1) #define DVD_NAVSTATREQ_PCI_BIT (DVD_NAVSTATREQ_HIGHLIGHT_BIT << 1) #define DVD_PROGRAM_PREVIOUS 0 #define DVD_PROGRAM_NEXT 1 #define DVD_PROGRAM_TOP 2 #define DVD_MENU_TITLE 0 #define DVD_MENU_ROOT 1 #define DVD_MENU_SUBPICTURE 2 #define DVD_MENU_AUDIO 3 #define DVD_MENU_ANGLE 4 #define DVD_MENU_PTT 5 #define DVD_SELECT_UPPER 0 #define DVD_SELECT_RIGHT 1 #define DVD_SELECT_LOWER 2 #define DVD_SELECT_LEFT 3 #define DVD_SCANCAP_FORWARD_SCAN 0x1 #define DVD_SCANCAP_FORWARD_SLOW 0x2 #define DVD_SCANCAP_FORWARD_SINGLE 0x4 #define DVD_SCANCAP_BACKWARD_SCAN 0x8 #define DVD_SCANCAP_BACKWARD_SLOW 0x10 #define DVD_SCANCAP_BACKWARD_SINGLE 0x20 #define SPRM_M_LCD 0 #define SPRM_ASTN 1 #define SPRM_SPSTN 2 #define SPRM_AGLN 3 #define SPRM_TTN 4 #define SPRM_VTS_TTN 5 #define SPRM_TT_PGCN 6 #define SPRM_PTTN 7 #define SPRM_HL_BTNN 8 #define SPRM_NV_TMR 9 #define SPRM_NV_TMR_PGCN 10 #define SPRM_P_AMXMD 11 #define SPRM_CTY_CD 12 #define SPRM_PTL_LVL 13 #define SPRM_P_CFG_VIDEO 14 #define SPRM_P_CFG_AUDIO 15 #define SPRM_INI_LCD_AST 16 #define SPRM_INI_LCD_EXT_AST 17 #define SPRM_INI_LCD_SPST 18 #define SPRM_INI_LCD_EXT_SPST 19 #define SPRM_REGION 20
#define OBEX_REQ_REQUEST 0x00000001  #define OBEX_REQ_CLOSE 0x00000002  #define OBEX_REQ_INIT 0x00000003  #define OBEX_REQ_UNLOAD 0x00000004
#define SPDUI_AddRemoveWord L"AddRemoveWord"
#define SPDUI_AudioProperties L"AudioProperties"
#define SPDUI_AudioVolume L"AudioVolume"
#define SPDUI_EngineProperties L"EngineProperties"
#define SPDUI_MicTraining L"MicTraining"
#define SPDUI_RecoProfileProperties L"RecoProfileProperties"
#define SPDUI_UserTraining L"UserTraining"
#define SERVICE_INIT_STARTED 0x00000000  #define SERVICE_INIT_STOPPED 0x00000001
#define PATHLENGTH 256  HWND hwndSubclass; HANDLE hIconProp, hCursProp;  TCHAR *lpFilename;  TCHAR tchBuffer[PATHLENGTH];  int nSize;  HDC hdc;  hIconProp = (HICON) GetProp(hwndSubclass, TEXT("PROP_ICON"));  ExtTextOut(hdc, 10, 40, 0, NULL, TEXT("PROP_ICON"),  _tcslen(TEXT("PROP_ICON")));  DrawIcon(hdc, 90, 40, hIconProp);  hCursProp = (HCURSOR) GetProp(hwndSubclass, TEXT("PROP_CURSOR"));  ExtTextOut(hdc, 10, 85, 0, NULL, TEXT("PROP_CURSOR"),  _tcslen(TEXT("PROP_CURSOR")));  DrawIcon(hdc, 110, 85, hCursProp);  lpFilename = (TCHAR*) GetProp(hwndSubclass, TEXT("PROP_BUFFER"));  nSize = _stprintf(tchBuffer, TEXT("Path to file: %s"), lpFilename);  ExtTextOut(hdc, 10, 10, 0, NULL, tchBuffer, nSize);
#define WC_CAPEDIT L"CAPEDIT"
#define WC_SBEDIT L"sbedit"
#define FL2FX(x) ((ULONG) (32768.0 * (x)))
MMRESULT SetRate(HWAVEOUT hwo, double rate)
{
  return waveOutSetPlaybackRate(hwo, FL2FX(rate));
}
#define OALLogV NkvDbgPrintfW
#define toupper(c) ( (islower(c)) ? _toupper(c) : (c) )
#define STRSAFE_NO_DEPRECATE
#define IMPLTYPEFLAG_FDEFAULT 0x1 #define IMPLTYPEFLAG_FSOURCE 0x2 #define IMPLTYPEFLAG_FRESTRICTED 0x4 #define IMPLTYPEFLAG_FDEFAULTVTABLE 0x8
#define PROTECTION_LEVEL_RESTRICTED 10 /* for Intranet apps /* #define PROTECTION_LEVEL_DEFAULT 20 /* default level /* #define PROTECTION_LEVEL_UNRESTRICTED 30 /* for peer-to-peer apps /*
#define HSE_URL_FLAGS_READ 0x00000001 #define HSE_URL_FLAGS_WRITE 0x00000002 #define HSE_URL_FLAGS_EXECUTE 0x00000004 #define HSE_URL_FLAGS_SSL 0x00000008 #define HSE_URL_FLAGS_NEGO_CERT 0x00000020 #define HSE_URL_FLAGS_REQUIRE_CERT 0x00000040 #define HSE_URL_FLAGS_MAP_CERT 0x00000080 #define HSE_URL_FLAGS_SSL128 0x00000100 #define HSE_URL_FLAGS_SCRIPT 0x00000200 #define HSE_URL_FLAGS_SCRIPT_SOURCE 0x00000400
#define DVD_AUDIOCAP_AC3 0x4000#define DVD_AUDIOCAP_MPEG 0x1000#define DVD_AUDIOCAP_DTS 0x0800#define DVD_AUDIOCAP_SDDS 0x0400#define DVD_AUDIOCAP_LPCM_KARAOKE 0x0080#define DVD_AUDIOCAP_AC3_KARAOKE 0x0040#define DVD_AUDIOCAP_MPEG_KARAOKE 0x0010#define DVD_AUDIOCAP_DTS_KARAOKE 0x0008#define DVD_AUDIOCAP_SDDS_KARAOKE 0x0004#define DVD_SCANCAP_FORWARD_SCAN 0x1#define DVD_SCANCAP_FORWARD_SLOW 0x2#define DVD_SCANCAP_FORWARD_SINGLE 0x4#define DVD_SCANCAP_BACKWARD_SCAN 0x8#define DVD_SCANCAP_BACKWARD_SLOW 0x10#define DVD_SCANCAP_BACKWARD_SINGLE 0x20
#define keybd_driver "MyKeyboardDriver.dll"
#define SPDUI_AddRemoveWord L"AddRemoveWord"
#define SPDUI_AudioProperties L"AudioProperties"
#define DEBUG_IOCTL ((ULONG) 0x00000001) #define DEBUG_ATR ((ULONG) 0x00000002) #define DEBUG_PROTOCOL ((ULONG) 0x00000004) #define DEBUG_DRIVER ((ULONG) 0x00000008) #define DEBUG_TRACE ((ULONG) 0x00000010) #define DEBUG_ERROR ((ULONG) 0x00000020) #define DEBUG_BREAK ((ULONG) 0x80000000) #define DEBUG_ALL ((ULONG) 0x7FFFFFFF)
#define SPDUI_AudioVolume L"AudioVolume"
#define SPDUI_EngineProperties L"EngineProperties"
#define SPDUI_MicTraining L"MicTraining"
#define SPDUI_RecoProfileProperties L"RecoProfileProperties"
#define SPDUI_UserTraining L"UserTraining"
#define DRIVERS_DIR $(_WINCEROOT)\public\common\oak\drivers
#define DDGPEALLOCSURFACEDATA_VERSION0(0)#define DDGPEALLOCSURFACEDATA_CURRENTVERSION (DDGPEBLTPARMS_VERSION0)struct DDGPEAllocSurfaceData{DDGPEStandardHeader; DWORD dwCreateFlags; int nWidth; int nHeight; int nStride; int nSurfaceFlags; unsigned char*pBits; EGPEFormat gpeFormat; EDDGPEPixelFormat* ddgpePixelFormat};
#define DDGPEBLTPARMS_VERSION0(0)#define DDGPEBLTPARMS_CURRENTVERSION(DDGPEBLTPARMS_VERSION0) struct DDGPEBltParms {GPEBltParms gpeBltParms;DDGPEStandardHeader};
#define GPEMODEEX_VERSION0(0)#define GPEMODEEX_CURRENTVERSION(GPEMODEEX_VERSION0) struct GPEModeEx {GPEMode modeInfo;DDGPEStandardHeader;EDDGPEPixelFormat ePixelFormat;DWORD dwPixelFourCC;DWORD dwPixelFormatData;LONG lPitch;DWORD dwFlags;DWORD dwRBitMask;DWORD dwGBitMask;DWORD dwBBitMask;DWORD dwAlphaBitMask };
#define LOC_HKL_DEFAULT ""
#define D3DMCURRENT_DISPLAY_MODE 0x00EFFFFF
#define variable_name [variable_value]
#define WC_SIPPREF L"SIPPREF"
#define DISABLEFAULTS() (UTlsPtr () [TLSSLOT_KERNEL] |= (TLSKERN_NOFAULTMSG | TLSKERN_NOFAULT))
#define ENABLEFAULTS() (UTlsPtr () [TLSSLOT_KERNEL] &= ~(TLSKERN_NOFAULTMSG | TLSKERN_NOFAULT))
DISABLEFAULTS();
__try
{
  bDataOut = *((BYTE *)pAddr);
}
__except (EXCEPTION_EXECUTE_HANDLER)
{
  ++ dwExceptionCount;
}
ENABLEFAULTS();
#define mac(a,b) ##a // error
#define print(a) printf(#b) // error
#define BOTTESINI \ if (1) { \ } \
#define DOSWIN32
#define declint( varname ) int #varname; declint( a ); //Warning, int a;; declint( b ) //OK, int b;
#define ALPHA_SHIFT 24#define RED_SHIFT 16#define GREEN_SHIFT 8#define BLUE_SHIFT 0#define ALPHA_MASK ((ARGB) 0xff << ALPHA_SHIFT)#define MAKEARGB(a, r, g, b) \ (((ARGB) ((a) & 0xff) << ALPHA_SHIFT)| \ ((ARGB) ((r) & 0xff) << RED_SHIFT) | \ ((ARGB) ((g) & 0xff) << GREEN_SHIFT)| \ ((ARGB) ((b) & 0xff) << BLUE_SHIFT))
#define BITRATE (DX * abs(DY) * DBITCOUNT * FRAMERATE)
#define SAMPLESIZE (DX * abs(DY) * DBITCOUNT / 8)
#define FOURCC_YV12 mmioFOURCC('Y', 'V', '1', '2')
#define DX 176
#define DY -144 // **** YUV is always negative ****
#define DBITCOUNT 12 // **** YV12 is 12 bits format ****
#define FRAMERATE 15
CS_DATARANGE_VIDEO DCAM_StreamMode = {
  {
    sizeof (CS_DATARANGE_VIDEO),
    0,
    SAMPLESIZE,
    0,
    STATIC_CSDATAFORMAT_TYPE_VIDEO,
    FOURCC_YV12,
    0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71,
    STATIC_CSDATAFORMAT_SPECIFIER_VIDEOINFO
  },
  TRUE,
  TRUE,
  CS_VIDEOSTREAM_CAPTURE,
  0,
  {
    STATIC_CSDATAFORMAT_SPECIFIER_VIDEOINFO,
    CS_AnalogVideo_None,
    DX,DY,
    DX,DY,
    DX,DY,
    1,
    1,
    1,
    1,
    DX, DY,
    DX, DY,
    DX,
    DY,
    0,
    0,
    0,
    0,
    FRAMEINTERVAL_15FPS,
    FRAMEINTERVAL_3_75FPS,
    BITRATE / 8, // (DX * DY * DBITCOUNT) * DFPS_MIN,
    BITRATE, // (DX * DY * DBITCOUNT) * DFPS_MAX
  },
  {
    0,0,DX,DY,
    0,0,DX,DY,
    BITRATE,
    0L,
    REFTIME_15FPS,
    sizeof (CS_BITMAPINFOHEADER),
    DX,
    DY,
    3,
    DBITCOUNT,
    FOURCC_YV12|BI_SRCPREROTATE,
    SAMPLESIZE,
    0,
    0,
    0,
    0,
    0, 0, 0
  }
};
#define CeCreateTokenFromAccount
#define DRVM_MAPPER 0x2000 #define DRVM_MAPPER_PREFERRED_GET (DRVM_MAPPER+21)  #define DRVM_MAPPER_PREFERRED_SET (DRVM_MAPPER+22)
#define OEM_FLASH_PARAMETER_GUID 0A0C7E46-3399-4021-90C8-FA6D389C4BA2
#define LINE_GPRSCLASS dwParam1 = LINE_GPRSCLASS; dwParam2; dwParam3;
#define _OLE2_H_ #define NOIME
#define WINAPI __declspec(nothrow) __stdcall 
void WINAPI foo1();
void __declspec(nothrow) __stdcall foo2();
void __stdcall foo3() throw();
typedef struct CVF { D3DMVECTOR position; D3DMVECTOR normal; D3DMCOLOR diffuse; float u, v; // 1st set, 2-D float t; // 2nd set, 1-D } CustomVertexFormat;
typedef struct _DDHAL_DDEXEBUFCALLBACKS { DWORD dwSize; DWORD dwFlags; LPDDHALEXEBUFCB_CANCREATEEXEBUF CanCreateExecuteBuffer; LPDDHALEXEBUFCB_CREATEEXEBUF CreateExecuteBuffer; LPDDHALEXEBUFCB_DESTROYEXEBUF DestroyExecuteBuffer; LPDDHALEXEBUFCB_LOCKEXEBUF LockExecuteBuffer; LPDDHALEXEBUFCB_UNLOCKEXEBUF UnlockExecuteBuffer; } DDHAL_DDEXEBUFCALLBACKS;
typedef struct _GUID { DWORD Data1; WORD Data2; WORD Data3; BYTE Data4[8]; } GUID;
typedef struct _MTPIPCONNECTIONINFO { DWORD dwNonce; GUID guidClient; WCHAR rgwchClientName[MTPIP_CONNAUTH_MAX_NAME_LENGTH]; DWORD cchClientName; SOCKADDR_STORAGE saClient; SOCKADDR_STORAGE saLocal; } MTPIPCONNECTIONINFO;
typedef struct _obex_command { unsigned int uiOp; unsigned int uiResp; unsigned int fFinal; ObexPacketData sPktData; unsigned int cProp; unsigned int *aPropID; ObexVariant *aPropVar; } ObexCommand;
typedef struct _obex_transaction { unsigned int uiConnectionId; unsigned int uiTransactionId; unsigned int uiOp; ObexCommand *pObex; MemAlloc ObexAlloc; MemFree ObexFree; ServerCallback ObexExecute; AuthCallback ObexAuthRequest; } ObexTransaction;
typedef struct tagPNACCURACY{ DWORD dwStructureSize; PNTIME tiTime; PNDouble dHorizError; PNDouble dVerticalError; PNDouble dEDOP; PNDouble dNDOP; PNDouble dVDOP; PNDouble dPDOP; PNDouble dTDOP; PNDouble dGDOP; PNAVACCURACY acAvAccuracy; DWORD dwPNReserved; } PNACCURACY;
typedef struct tagPNALMANAC{ DWORD dwStructureSize; PNTIME tiTime; PNSATELLITE saSatellite[PN_NUM_SATS_c]; DWORD dwPNReserved; } PNALMANAC;
typedef struct tagPNAVACCURACY{ DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVACCURACY;
typedef struct tagPNAVDEVSTATE{ DWORD dwStructureSize; DWORD dwAv1; DWORD wPNReserved; } PNAVDEVSTATE;
typedef struct tagPNAVINDSTATION{ DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVINDSTATION;
typedef struct tagPNAVPOSLLA{ DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVPOSLLA;
typedef struct tagPNAVSATELLITE{ DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVSATELLITE;
typedef struct tagPNAVSETTINGS{ DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVSETTINGS;
typedef struct tagPNAVSTATION{ DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVSTATION;
typedef struct tagPNAVTM { DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVTM;
typedef struct tagPNAVVELENU{ DWORD dwStructureSize; DWORD dwAv1; DWORD dwPNReserved; } PNAVVELENU;
typedef struct tagPNCONFIG{ DWORD dwStructureSize; PNPOSITION poPositionData; PNACCURACY acAccuracy; PNPOSITION poStaticRefPos; PNALMANAC alAlmanac; PNSETTINGS seSettings; PNBool fInitAlmanac; PNBool fInitPosition; PNBool fInitTime; DWORD dwPNReserved; } PNCONFIG;
typedef struct tagPNDEVICE{ DWORD dwStructureSize; WCHAR szManufacturer[PN_MNFCT_SIZE_c]; WCHAR szModel[PN_MODEL_SIZE_c]; PNReceiver_t rtReceiverType; DWORD dwUseCount; DWORD dwQuality; WCHAR szComPort[PN_COM_PORT_LEN_c]; WCHAR szRegRoot[PN_REG_PATH_LEN_c]; DWORD dwComPort; DWORD dwPNReserved; struct tagPNDEVICE* pNext; } PNDEVICE;
typedef struct tagPNDEVSTATE{ DWORD dwStructureSize; PNTIME tiTime; PNDeviceState_t dsState; PNAVDEVSTATE dsAvState; DWORD dwPNReserved; } PNDEVSTATE;
typedef struct tagPNINDSTATION{ DWORD dwStructureSize; PNTIME tiTime; PNStationState_t ssState; DWORD dwStationIDNum; PNBool fUsed; PNDouble dSatElevation; PNDouble dSatAzimuth; PNDouble dSignalStrength; DWORD dwCoverage; PNAVINDSTATION siAvIndStation; DWORD dwPNReserved; } PNINDSTATION;
typedef struct tagPNPOSITION{ DWORD dwStructureSize; PNTIME tiTime; PNPOSLLA psPosition; PNAVPOSLLA psAvPosition; DWORD dwPNReserved; } PNPOSITION;
typedef struct tagPNPOSLLA{ PNDouble dLong; PNDouble dLat; PNDouble dAlt; PNBool fRadians; } PNPOSLLA;
typedef struct tagPNSATELLITE{ DWORD dwStructureSize; PNTIME tiTime; PNBool fSetData; DWORD dwPRN; PNByte bSatHealth; DWORD dwRefWeekNumber; DWORD dwRefTimeOfWeek; PNDouble dEccentricity; PNDouble dRootSemiMajorAxis; PNDouble dArgumentOfPerigee; PNDouble dMeanAnomalyAtRefTime; PNDouble dRightAscensionAtRefTime; PNDouble dRateRightAscension; PNDouble dCorrectToInclination; PNDouble dAF0ClockCorrect; PNDouble dAF1ClockCorrect; PNAVSATELLITE saAvSatellite; DWORD dwPNReserved; } PNSATELLITE;
typedef struct tagPNSETTINGS{ DWORD dwStructureSize; PNTIME tiTime; PNSTATIONMODE cmMode[PN_NUM_SATS_c]; PNBool fDGPSEnable; PNBool fDREnable;; DWORD dwDGPSTimeOut; PNBool fDGPS2DEnable; DWORD dwDGPS2DTimeOut; PNDatum_t daDatum; PNPowerState_t pwPowerState; PNAltHold_t ahAltitudeHold; PNDouble dAHAltitude; PN2DMode_t mo2DPosMode; PNDouble d2DAltitude; PNAccess_t asAccess; PNEnv_t etEnvironment; PNAVSETTINGS seAvSettings; DWORD dwPNReserved; } PNSETTINGS;
typedef struct tagPNSTATION{ DWORD dwStructureSize; PNTIME tiTime; DWORD dwNumAvailable; DWORD dwNumUsed; PNAVSTATION snAvStation; PNINDSTATION siStations[PN_NUM_STATIONS_c]; DWORD dwPNReserved; } PNSTATION;
typedef struct tagPNTIME{ PNTM tmDevice; PNAVTM tmAvDevice; PNTM tmLeapDiffTime; PNAVTM tmAvLeapDiffTime; PNTM tmComputer; PNAVTM tmAvComputer; } PNTIME;
typedef struct tagPNTM{ DWORD dwMillisec; DWORD dwDay; } PNTM;
typedef struct tagPNVELBEAR{ PNDouble dBearing; PNDouble dHorizSpeed; PNDouble dVertSpeed; } PNVELBEAR;
typedef struct tagPNVELENU{ PNDouble dEast; PNDouble dNorth; PNDouble dUp; } PNVELENU;
typedef struct tagPNVELOCITY{ DWORD dwStructureSize; PNTIME tiTime; PNVELENU vlVelocity; PNAVVELENU vlAvVelocity; DWORD dwPNReserved; } PNVELOCITY;
typedef struct StringFileInfo { WORD wLength; WORD wValueLength; WORD wType; WCHAR szKey[]; WORD Padding[]; StringTable Children[]; } StringFileInfo;
typedef struct StringTable { WORD wLength; WORD wValueLength; WORD wType; WCHAR szKey[]; WORD Padding[]; String Children[]; } StringTable;
typedef struct tagTZREG { LONG Bias; LONG StandardBias; LONG DaylightBias; SYSTEMTIME StandardDate; SYSTEMTIME DaylightDate; } TZREG;
typedef struct _WAVEFORMATEX_G711 { WAVEFORMATEX WaveFormatEx; WORD wSamplesPerBlock; } WAVEFORMATEX_G711;
typedef struct _packet_marker { unsigned int fMarker; union { BD_ADDR ba; unsigned short connection_handle; };
typedef struct tagVARIANT { VARTYPE vt; unsigned short wReserved1; unsigned short wReserved2; unsigned short wReserved3; union { unsigned char bVal; short iVal; long lVal; float fltVal;. double dblVal; VARIANT_BOOL boolVal; SCODE scode; CY cyVal; DATE date ; BSTR bstrVal; IUnknown FAR *punkVal; IDispatch FAR *pdispVal; SAFEARRAY FAR *parray; unsigned char FAR *pbVal; short FAR *piVal; long FAR *plVal; float FAR *pfltVal; double FAR *pdblVal; VARIANT_BOOL FAR *pboolVal; SCODE FAR *pscode; CY FAR *pcyVal; DATE FAR *pdate; BSTR FAR *pbstrVal ; IUnknown FAR *FAR *ppunkVal ; IDispatch FAR *FAR *ppdispVal ; SAFEARRAY FAR *FAR *pparray ; VARIANT FAR *pvarVal; void FAR *byref;};
typedef struct {
  DWORD dwLength;
  WORD wRevision;
  WORD wCertificateType; // = WIN_CERT_TYPE_PKCS1_SIGN
  DWORD cbSignedData;
  BYTE bSignedData[MAX_WIN_CERT_SIGN_DATA_LEN];
  BYTE bSign[MAX_RSA_KEY_BITS/8];
} PKCS1_MODULE_SIGN ;
struct VS_VERSIONINFO {
  WORD wLength;
  WORD wValueLength;
  WORD wType;
  WCHAR szKey[];
  WORD Padding1[];
  VS_FIXEDFILEINFO Value;
  WORD Padding2[];
  WORD Children[]; };
typedef struct _DDHAL_CALLBACKS
{
  DDHAL_DDCALLBACKS cbDDCallbacks;
  DDHAL_DDSURFACECALLBACKS cbDDSurfaceCallbacks;
  DDHAL_DDPALETTECALLBACKS cbDDPaletteCallbacks;
  DDHAL_DDCALLBACKS HALDD;
  DDHAL_DDSURFACECALLBACKS HALDDSurface;
  DDHAL_DDPALETTECALLBACKS HALDDPalette;
  DDHAL_DDCALLBACKS HELDD;
  DDHAL_DDSURFACECALLBACKS HELDDSurface;
  DDAHL_DDPALETTECALLBACKS HELDDPalette;
  DDHAL_DDEXEBUFCALLBACKS cbDDExeBufCallbacks;
  DDHAL_DDEXBUFCALLBACKS HALDDExeBuf;
  DDHAL_DDEXEBUFCALLBACKS HELDDExeBuf;
  DDHAL_DDVIDEOPORTCALLBACKS cbDDVideoPortCallbacks;
  DDHAL_DDVIDEOPORTCALLBACKS HALDDVideoport;
  DDHAL_DDCOLORCONTROLCALLBACKS cbDDColorControlCallbacks;
  DDHAL_DDCOLORCONTROLCALLBACKS HALDDColorControl;
  DDHAL_DDMISCELLANEOUSCALLBACKS cbDDMiscellaneousCallbacks;
  DDHAL_DDMISCELLANEOUSCALLBACKS HALDDMiscellaneous;
  DDHAL_DDKERNELCALLBACKS cbDDKernelCallbacks;
  DDHAL_DDKERNELCALLBACKS HALDDKernel;
} DDHAL_CALLBACKS, far *LPDDHAL_CALLBACKS;
typedef struct tagRECT {
  LONG left;
  LONG top;
  LONG right;
  LONG bottom;
} RECT, *PRECT, NEAR *NPRECT, FAR *LPRECT;
typedef struct {
  DWORD dwMicroSecPerFrame;
  DWORD dwMaxBytesPerSec;
  DWORD dwReserved1;
  DWORD dwFlags;
  DWORD dwTotalFrames;
  DWORD dwInitialFrames;
  DWORD dwStreams;
  DWORD dwSuggestedBufferSize;
  DWORD dwWidth;
  DWORD dwHeight;
  DWORD dwReserved[4];
} MainAVIHeader;
typedef struct {
  FOURCC fccType;
  FOURCC fccHandler;
  DWORD dwFlags;
  DWORD dwPriority;
  DWORD dwInitialFrames;
  DWORD dwScale;
  DWORD dwRate;
  DWORD dwStart;
  DWORD dwLength;
  DWORD dwSuggestedBufferSize;
  DWORD dwQuality;
  DWORD dwSampleSize;
  RECT rcFrame;
} AVIStreamHeader;
#define BTH_MARKER_NONE 0
#define BTH_MARKER_CONNECTION 1
#define BTH_MARKER_ADDRESS 2
typedef struct _packet_marker {
  unsigned int fMarker;
  union {
    BD_ADDR ba;
    unsigned short connection_handle;
  };
} PacketMarker;
typedef int (*HCI_CustomCode_In) (
HANDLE hDeviceContext,
void *pCallContext,
unsigned short usOpCode,
unsigned short cPacketSize,
unsigned char *pPacket,
PacketMarker *pMarker,
unsigned char cEvent
);
typedef struct tagTOOLINFO{
  UINT cbSize;
  UINT uFlags;
  HWND hwnd;
  WPARAM uId;
  RECT rect;
  HINSTANCE hinst;
  LPTSTR lpszText;
  LPARAM lParam;
} TOOLINFO, NEAR *PTOOLINFO, FAR *LPTOOLINFO;
struct X { int a[0]; // error, unsized array };
struct S
{
  int i : 1;
  int j;
};
void main()
{
  &S::i; // error, address of a bit field
  &S::j;
};
struct s1 { // in cpp file
static voidfunc();
inti;
};
void s1::func()
{
  i = 1;// error C2597 here
};
struct A {
  __declspec(property(get=GetProp)) int prop;
  int GetProp(void);
};
void f(A* pa, int val)
{
  pa->prop = val; // error C2774
  pa->prop++;// error C2774
};
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {
};
void sample(void)
{
  __uuidof(int); // error C2786
  __uuidof(int *); // error C2786
  __uuidof(A **); // error C2786
  __uuidof(A);
  __uuidof(A *);
  __uuidof(A &);
  __uuidof(A[]);
  int i;
  int *pi;
  A **ppa;
  __uuidof(i);// error C2786
  __uuidof(pi);// error C2786
  __uuidof(ppa);// error C2786
};
struct D {
  void mf() {
    __super::mf();
  }
};
struct B {
  void mf();
};
struct D : B {
  void mf() {
    __super.();
  }
};
struct B {
  int m_data;
};
struct D : B {
  void mf() {
    super::m_data += 1;
  }
};
struct S
{
  float y;
  struct
  {
    int a, b, c; // warning
  };
} *p_s;
struct C
{
  C();
};
C * pC = &C();// yields C4238;
struct A* pA;
struct B { int i; };
B* pB;
void main()
{
  pA++; // error, size of A not known
  pB++;
};
struct Point
{
  int x, y;
};
int f( Point p = { 1, 2 } ); // error C2279;
class __single_inheritance X; struct A { }; struct B { }; struct X : A, B { }; // error, X uses multiple inheritance;
#pragma keyword("interface", on)
struct IUnknown {
};
interface IMyIF {
  [ property(put=0, put=0) ]
  int data;
};
struct myStruct1 {
  virtual void __stdcall func( int ) = 0;
};
struct myStruct2: public myStruct1 {
  static void __stdcall func( int );
};
struct S; union S;
struct S {// unmanaged class }; class C : public S { };
struct S1 {};
struct S2: virtual public S1 {
  S2( int i, ... );
};
void func1() {
  S2 S3( 2, 1, 2 );
};
struct A {
  int z;
  A& operator ->();
};
void f(A y) {
  int i = y->z; // warning C4280
};
struct A;
struct B;
struct C;
struct A {
  int z;
  B& operator->();
};
struct B {
  C& operator->();
};
struct C {
  A& operator->();
};
void f(A p) {
  int i = p->z; // warning C4281
};
#ifdef __cplusplus
typedef struct D3DXMATRIX : public D3DMATRIX
{
  public:
  D3DXMATRIX() {};
  D3DXMATRIX( CONST FLOAT * );
  D3DXMATRIX( CONST D3DMATRIX& );
  D3DXMATRIX( FLOAT _11, FLOAT _12, FLOAT _13, FLOAT _14,
  FLOAT _21, FLOAT _22, FLOAT _23, FLOAT _24,
  FLOAT _31, FLOAT _32, FLOAT _33, FLOAT _34,
  FLOAT _41, FLOAT _42, FLOAT _43, FLOAT _44 );
  FLOAT& operator () ( UINT Row, UINT Col );
  FLOAT operator () ( UINT Row, UINT Col ) const;
  operator FLOAT* ();
  operator CONST FLOAT* () const;
  D3DXMATRIX& operator *= ( CONST D3DXMATRIX& );
  D3DXMATRIX& operator += ( CONST D3DXMATRIX& );
  D3DXMATRIX& operator -= ( CONST D3DXMATRIX& );
  D3DXMATRIX& operator *= ( FLOAT );
  D3DXMATRIX& operator /= ( FLOAT );
  D3DXMATRIX operator + () const;
  D3DXMATRIX operator - () const;
  D3DXMATRIX operator * ( CONST D3DXMATRIX& ) const;
  D3DXMATRIX operator + ( CONST D3DXMATRIX& ) const;
  D3DXMATRIX operator - ( CONST D3DXMATRIX& ) const;
  D3DXMATRIX operator * ( FLOAT ) const;
  D3DXMATRIX operator / ( FLOAT ) const;
  friend D3DXMATRIX operator * ( FLOAT, CONST D3DXMATRIX& );
  BOOL operator == ( CONST D3DXMATRIX& ) const;
  BOOL operator != ( CONST D3DXMATRIX& ) const;
} D3DXMATRIX, *LPD3DXMATRIX;
#else //!__cplusplus;
struct tagVARIANT
{
  union
  {
    struct __tagVARIANT
    {
      VARTYPE vt;
      WORD wReserved1;
      WORD wReserved2;
      WORD wReserved3;
      union
      {
        LONG lVal;
        BYTE bVal;
        SHORT iVal;
        FLOAT fltVal;
        DOUBLE dblVal;
        VARIANT_BOOL boolVal; };
typedef struct SMSSTOREITEM_TAG{
  UINT cbSize;
  RILMESSAGE rmMessage;
  UINT cbMessageUID;
  BYTE rgbMessageUID[SMS_MAX_MESSAGEUID_SIZE];
  UINT nTotalParts;
  UINT iPartInde;
} SMSSTOREITEM, *LPSMSSTOREITEM;
typedef struct SMSROUTERMSGINFO_TAG{
  UINT cbSize;
  UINT cbMessageUID;
  BYTE rgbMessageUID[SMS_MAX_MESSAGEUID_SIZE];
  UINT nTotalParts;
  UINT iPartIndex;
} SMSROUTERMSGINFO, *LPSMSROUTERMSGINFO;
struct COMMAND_MESSAGE_DATA {
  DWORD dwCommand;
  HPACKET hPacketIn;
  HPACKET hPacketOut;
};
typedef struct {
  CEOID ceoid;
  DWORD dwEnabled;
  DWORD dwParam;
  WORD wInitView;
  WORD wFieldOrd;
  WORD wCard;
  BSTR bstrHelpIndexFile;
  BSTR bstrHelpTopicFile;
  BSTR bstrMainFormCaption;
  BSTR bstrCardFormCaption;
  BSTR bstrParam1;
  BSTR bstrParam2;
  IVerifyContactSink *pVerifyListSink;
  IVerifyContactSink *pVerifySelectionSink;
} ABDIALOGINFO, *LPDIALOGINFO;
typedef struct _TUNERDEVCAPS {
  DWORD dwMakerID;
  DWORD dwDrvVer;
  DWORD dwTunerCaps;
  DWORD dwBands;
  DWORD dwReserved1;
  DWORD dwReserved2;
} TUNERDEVCAPS, *PTUNERDEVCAPS;
typedef struct {
  DWORD dwSize;
  WCHAR szTTSName[32];
  WCHAR szAlertName[32]
} APCCPLINFO;
typedef struct _LOGENTRYINFO {
  DWORD LogEntry;
  DWORD dwSequenceId;
  FILETIME EntryTime;
  DWORD dwEventClass;
  BOOL bFinalEntryData;
} LOGENTRYINFO, *PLOGENTRYINFO;
typedef struct {
  DWORD m_dwID;
  DWORD m_dwInfo;
  WCHAR[] m_szDevDrv[AAM_SRC_DEVDRV_LEN];
  WCHAR[] m_szName[AAM_SRC_NAME_LEN];
  DWORD m_dwMisc;
  DWORD m_dwReserve1;
  DWORD m_dwReserve2;
} AAM_SRCCAP;
typedef struct { // srmi
GUID gEngineID;
TCHAR szMfgName[SRMI_NAMELEN];
TCHAR szProductName[SRMI_NAMELEN];
GUID gModeID;
TCHAR szModeName[SRMI_NAMELEN];
LANGUAGE language;
DWORD dwSequencing;
DWORD dwMaxWordsVocab;
DWORD dwMaxWordsState;
DWORD dwGrammars;
DWORD dwFeatures;
DWORD dwInterfaces;
DWORD dwEngineFeatures;
} SRMODEINFO, *PSRMODEINFO;
typedef struct { // srmir
DWORD dwEngineID;
DWORD dwMfgName;
DWORD dwProductName;
DWORD dwModeID;
DWORD dwModeName;
DWORD dwLanguage;
DWORD dwDialect;
DWORD dwSequencing;
DWORD dwMaxWordsVocab;
DWORD dwMaxWordsState;
DWORD dwGrammars;
DWORD dwFeatures;
DWORD dwInterfaces;
DWORD dwEngineFeatures;
} SRMODEINFORANK, *PSRMODEINFORANK;
typedef struct { // srp DWORD dwSize; BYTE abWords[0]; } SRPHRASE, *PSRPHRASE;
typedef struct { // srrwn
DWORD dwNextWordNode;
DWORD dwUpAlternateWordNode;
DWORD dwDownAlternateWordNode;
DWORD dwPreviousWordNode;
DWORD dwPhonemeNode;
QWORD qwStartTime;
QWORD qwEndTime;
DWORD dwWordScore;
WORD wVolume;
WORD wPitch;
VOICEPARTOFSPEECH pos;
DWORD dwCFGParse;
DWORD dwCue;
} SRRESWORDNODE, *PSRRESWORDNODE;
typedef struct { // srw
DWORD dwSize;
DWORD dwWordNum;
TCHAR szWord[ ];
} SRWORD, *PSRWORD;
typedef struct { // ttsmi
GUID gEngineID;
TCHAR szMfgName[TTSI_NAMELEN];
TCHAR szProductName[TTSI_NAMELEN];
GUID gModeID;
TCHAR szModeName[TTSI_NAMELEN];
LANGUAGE language;
TCHAR szSpeaker[TTSI_NAMELEN];
TCHAR szStyle[TTSI_STYLELEN];
WORD wGender;
WORD wAge;
DWORD dwFeatures;
DWORD dwInterfaces;
DWORD dwEngineFeatures;
} TTSMODEINFO, *PTTSMODEINFO;
typedef struct { // ttsmir
DWORD dwEngineID;
DWORD dwMfgName;
DWORD dwProductName;
DWORD dwModeID;
DWORD dwModeName;
DWORD dwLanguage;
DWORD dwDialect;
DWORD dwSpeaker;
DWORD dwStyle;
DWORD dwGender;
DWORD dwAge;
DWORD dwFeatures;
DWORD dwInterfaces;
DWORD dwEngineFeatures;
} TTSMODEINFORANK, *PTTSMODEINFORANK;
typedef struct _TUNERBANDINFO {
  DWORD dwBandID;
  FREQUENCY RangeLow;
  FREQUENCY RangeHigh;
  FREQUENCY MinTuningStep;
  DWORD dwBandCaps
} TUNERBANDINFO, *PTUNERBANDINFO;
typedef struct _FREQUENCY { DWORD dwFreqValue; DWORD dwFreqUnit; } FREQUENCY, *PFREQUENCY;
typedef struct _TUNERCONFIG {
  DWORD dwBand;
  FREQUENCY CurrentFreq;
  FREQUENCY SeekStep;
  FREQUENCY RangeLow;
  FREQUENCY RangeHigh;
  DWORD dwState;
} TUNERCONFIG, *PTUNERCONFIG;
typedef struct _SIGNALINFO {
  BOOL fIsStation;
  FREQUENCY CurrentFreq;
  FIELDSTRENGTH FieldStrength;
  DWORD dwMultiPath;
  BOOL fStereoPresent;
  DWORD dwReserved;
} SIGNALINFO, *PSIGNALINFO;
typedef struct _FIELDSTRENGTH { unsigned short MaxStrength; unsigned short CurrentStrength; } FIELDSTRENGTH, *PFIELDSTRENGTH;
typedef struct _TUNERSEEKINFO {
  WORD wSeekOptions;
  WORD wSensitivity;
  FREQUENCY RangeLow;
  FREQUENCY RangeHigh;
  SEEK_STATUS_NOTIFY fnCallBack;
  DWORD Reserved;
} TUNERSEEKINFO, *PTUNERSEEKINFO;
typedef struct { // vccmd
DWORD dwSize;
DWORD dwFlags;
DWORD dwID;
DWORD dwCommand;
DWORD dwDescription;
DWORD dwCategory;
DWORD dwCommandText;
DWORD dwAction;
DWORD dwActionSize;
BYTE abData[];
} VCMDCOMMAND, *PVCMDCOMMAND;
typedef struct { // vcn TCHAR szApplication[VCMD_APPLEN]; TCHAR szState[VCMD_STATELEN]; } VCMDNAME, *PVCMDNAME;
typedef struct { // vcsi
DWORD dwAutoGainEnable;
DWORD dwAwakeState;
DWORD dwThreshold;
DWORD dwDevice;
DWORD dwEnable;
TCHAR szMicrophone[VCMD_MICLEN];
TCHAR szSpeaker[VCMD_SPEAKERLEN];
GUID gModeID;
} VCSITEINFO, *PVCSITEINFO;
typedef struct {
  CLSID clsidDevice;
  TCHAR szDeviceName[VIODEVICENAMESIZE];
  DWORD grfModes;
  VARIANT vRangeLow;
  VARIANT vRangeHigh;
  DWORD dwValueType;
  DWORD dwValueUnits;
  LONG lExponent;
};
typedef struct {
  DWORD cDiagnosticInfo;
  DWORD cbDiagnosticInfo;
  VIODIAGNOSTICINFO vdiItems[1];
};
typedef struct {
  DWORD cbFixed;
  DWORD cExtraFields;
  DWORD dwSystem;
  DWORD dwSubsystem;
  VIODIAGNOSTICFIELD vdiFields[1];
};
typedef struct {
  DWORD cbFixed;
  DWORD cbData;
  DWORD vdfID;
  VARTYPE vdfType;
  BYTE vdfData[1];
};
typedef struct { // vtsi
DWORD dwDevice;
DWORD dwEnable;
DWORD dwSpeed;
GUID gModeID;
} VTSITEINFO, *PVTSITEINFO;
typedef struct _PEGDIRINFO {- // pegdi };
typedef struct _CALLBACKINFO{- };
typedef struct _PEGRECORDINFO {- };
typedef struct _PEGBLOB {- // pegblob };
typedef struct _PropertyDataStruct {- };
struct COMMAND_MESSAGE_DATA {
 DWORD dwCommand;
 HPACKET hPacketIn;
 HPACKET hPacketOut;
};
typedef struct _DDHAL_CALLBACKS 
{ 
DDHAL_DDCALLBACKS cbDDCallbacks; 
DDHAL_DDSURFACECALLBACKS cbDDSurfaceCallbacks; 
DDHAL_DDPALETTECALLBACKS cbDDPaletteCallbacks; 
DDHAL_DDCALLBACKS HALDD; 
DDHAL_DDSURFACECALLBACKS HALDDSurface; 
DDHAL_DDPALETTECALLBACKS HALDDPalette; 
DDHAL_DDCALLBACKS HELDD; 
DDHAL_DDSURFACECALLBACKS HELDDSurface; 
DDAHL_DDPALETTECALLBACKS HELDDPalette; 
DDHAL_DDEXEBUFCALLBACKS cbDDExeBufCallbacks; 
DDHAL_DDEXBUFCALLBACKS HALDDExeBuf; 
DDHAL_DDEXEBUFCALLBACKS HELDDExeBuf; 
DDHAL_DDVIDEOPORTCALLBACKS cbDDVideoPortCallbacks; 
DDHAL_DDVIDEOPORTCALLBACKS HALDDVideoport; 
DDHAL_DDCOLORCONTROLCALLBACKS cbDDColorControlCallbacks; 
DDHAL_DDCOLORCONTROLCALLBACKS HALDDColorControl; 
DDHAL_DDMISCELLANEOUSCALLBACKS cbDDMiscellaneousCallbacks; 
DDHAL_DDMISCELLANEOUSCALLBACKS HALDDMiscellaneous; 
DDHAL_DDKERNELCALLBACKS cbDDKernelCallbacks; 
DDHAL_DDKERNELCALLBACKS HALDDKernel; 
} DDHAL_CALLBACKS, far *LPDDHAL_CALLBACKS;
typedef struct SMSROUTERMSGINFO_TAG{
 UINT cbSize;
 UINT cbMessageUID;
 BYTE rgbMessageUID[SMS_MAX_MESSAGEUID_SIZE];
 UINT nTotalParts;
 UINT iPartIndex;
} SMSROUTERMSGINFO, *LPSMSROUTERMSGINFO;
typedef struct SMSSTOREITEM_TAG{
 UINT cbSize;
 RILMESSAGE rmMessage;
 UINT cbMessageUID;
 BYTE rgbMessageUID[SMS_MAX_MESSAGEUID_SIZE];
 UINT nTotalParts;
 UINT iPartInde;
} SMSSTOREITEM, *LPSMSSTOREITEM;
typedef OLECHAR * BSTR;
typedef CStaticIOWindow CPcmciaIoWindow;
typedef CStaticMemoryWindow CPcmciaMemWindow;
typedef CGenericList CSampleList;
typedef VeryLongClassNameA ClassA;
typedef VeryLongClassNameB ClassB;
typedef VeryLongClassNameC ClassC;
typedef VeryLongClassNameD ClassD ;
typedef SecHandle CredHandle;
typedef SecHandle CtxtHandle;
typedef long HRESULT;
typedef int IID;
typedef DDHAL_DDEXEBUFCALLBACKS FAR *LPDDHAL_DDEXEBUFCALLBACKS;
typedef VARIANT __RPC_FAR *LPVARIANT;
typedef VARIANT __RPC_FAR *LPVARIANTARG;
typedef CList LineList;
typedef long int LongInt;
typedef [public] long MEMBERID;
typedef Sample MyBadSample;
typedef Sample MyGoodSample;
typedef PSecHandle PCredHandle;
typedef PSecHandle PCtxtHandle;
typedef int;
typedef CArray SingleLine;
typedef VARIANT VARIANTARG;
typedef used for Z } Send Feedback on this topic to the authors Feedback FAQs © 2006 Microsoft Corporation. All rights reserved. Additional resources Last updated on 2012-09-14 In this article en-us Your Privacy Choices Theme Light Dark High contrast AI Disclaimer Previous Versions Blog Contribute Privacy Consumer Health Privacy Terms of Use Trademarks (c);
typedef redefinition A type was redefined to be the same type as in the first definition. The following example shows how this message might occur. typedef long lPulseWidth;
typedef int (*ServiceCallback) (;
typedef int __near nint;
typedef int;
typedef A* pA_t;
typedef int pINT_t;
typedef Z *pZ_t;
typedef types both define indirection Two typedef types declare an item, and both typedef types have indirection. The following example shows how this error might occur. typedef int *p_int;
typedef short *p_short;
typedef union { unsigned char uc;
typedef statement. The following example shows ways this error might occur. typedefunsigned long ulong;
typedef wchar_t wchar;
typedef unsigned char wchar_t;
typedef void (F) ();// OK
typedef F AT[10];// Error
void main()
{
};
typedef int *p_int; typedef short *p_short; p_short p_int p; // error;
typedef long lPulseWidth; typedef long lPulseWidth; // warning;
typedef int int I; const RefInt cri=i; //generates warning C4181;
typedef struct_IMAGE_RUNTIME_FUNCTION_ENTRY {
  ULONG BeginAddress;
  ULONG EndAddress;
  PVOID ExceptionHandler;
  PVOID HandlerData;
  ULONG PrologEndAddress;
} IMAGE_RUNTIME_FUNCTION_ENTRY,
*PIMAGE_RUNTIME_FUNCTIONG_ENTRY;
typedef HRESULT STDAPICALLTYPE pfnCommandCallback( DWORD dwCmd, const CCommandPacket *pCmdIn, CCommandPacket *pCmdOut );
typedef struct_IMAGE_RUNTIME_FUNCTION_ENTRY {
 ULONG BeginAddress;
 ULONG EndAddress;
 PVOID ExceptionHandler;
 PVOID HandlerData;
 ULONG PrologEndAddress;
} IMAGE_RUNTIME_FUNCTION_ENTRY,
*PIMAGE_RUNTIME_FUNCTIONG_ENTRY;
typedef HRESULT STDAPICALLTYPE pfnCommandCallback(
 DWORD dwCmd,
 const CCommandPacket *pCmdIn,
 CCommandPacket *pCmdOut
);
#endif /* _EXTRADECLARATIONS_H_ */
