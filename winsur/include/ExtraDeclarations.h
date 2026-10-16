/* ExtraDeclarations.h -- declarations without header assignment
 * 5443 unassigned declarations
 */
#ifndef _EXTRADECLARATIONS_H_
#define _EXTRADECLARATIONS_H_

typedef int (*HCI_CreateConnection_In)  (HANDLE hDeviceContext,  void *pCallContext,  BD_ADDR *pba,  unsigned short packet_type,  unsigned char page_scan_repetition_mode,  unsigned char page_scan_mode,  unsigned short clock_offset,  unsigned char allow_role_switch);
Typedef BOOL(* PFN_PDD_GET)(UINT uiRequestId,PVOID pvData,ULONG ulDataLength,ULONG* pulRequiredLength);
typedef PFN_BltFunction (*PFN_PCodeToCpuCode)(int FnIndex, DWORD * pPCode, GenBltSignature * pBltSig, void * pBltFn);
typedef void( *PFN_KITLTIMERCB)( LPVOID lpParam );
typedef int (*HCI_InquiryCompleteEvent) ( void* pUserContext, void* pCallContext, unsigned char status, unsigned char num_responses );
typedef BOOL (* PFN_EnumProc)( LPCWSTR pszDevName, LPVOID pData );
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
enum ButtonControlRectangleStyle_t {CBR_CLIENTRECT, CBR_CHECKBOX, CBR_CHECKTEXT, CBR_GROUPTEXT, CBR_GROUPFRAME, CBR_PUSHBUTTON};
enum tagDOMNodeType {NODE_INVALID,NODE_ELEMENT, 1 NODE_ATTRIBUTE,NODE_TEXT,NODE_CDATA_SECTION,NODE_ENTITY_REFERENCE,NODE_ENTITY,NODE_PROCESSING_INSTRUCTION,NODE_COMMENT,NODE_DOCUMENT,NODE_DOCUMENT_TYPE,NODE_DOCUMENT_FRAGMENT,NODE_NOTATION} DOMNodeType;
typedef enum _WSAEcomparator {COMP_EQUAL = 0,COMP_NOTLESS} WSAECOMPARATOR, *PWSAECOMPARATOR;
enum HCI_EVENT {DEVICE_UP,DEVICE_DOWN,DEVICE_ERROR};
typedef enum { MERIT_PREFERRED = 0x800000, MERIT_NORMAL = 0x600000, MERIT_UNLIKELY = 0x400000, MERIT_DO_NOT_USE = 0x200000, MERIT_SW_COMPRESSOR = 0x100000, MERIT_HW_COMPRESSOR = 0x100050};
enum MPEG2Level {MPEG2Level_Low = 1, MPEG2Level_Main, MPEG2Level_High1440, MPEG2Level_High};
enum MPEG2Profile {MPEG2Profile_Simple = 1, MPEG2Profile_Main, MPEG2Profile_SNRScalable, MPEG2Profile_SpatiallyScalable, MPEG2Profile_High};
typedef enum _DSCP_TRAFFIC_TYPE {
  DSCPTypeNotSet = 0,
  DSCPBestEffort = 1,
  DSCPBackground = 2,
  DSCPExcellentEffort = 3,
  DSCPVideo = 4,
  DSCPAudio = 5,
  DSCPControl = 6,
  NumDSCPTrafficTypes = 6
} DSCP_TRAFFIC_TYPE;
enum PROVIDER_SPECIFIC_MESSAGE_CLASS {
  PS_MESSAGE_CLASS0 = 0,
  PS_MESSAGE_CLASS1,
  PS_MESSAGE_CLASS2,
  PS_MESSAGE_CLASS3,
  PS_MESSAGE_CLASSUNSPECIFIED,
};
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
HRESULT AbortAsyncOperation( IWSDAsyncResult* pAsyncResult );
BOOL AbortPipeTransfers( USB_PIPE hPipe, DWORD dwFlags );
HRESULT AcceptedContentType ( BSTR* pbstrAcceptedContentType );
HRESULT Activate( HWND hwndParent, LPCRECT prect, BOOL fModal );
HRESULT ActivateWindow( );
HRESULT Active(void);
HRESULT Add( IDispatch ** ppolItem );
DWORD AddAdvisePacket( const REFERENCE_TIME & time1, const REFERENCE_TIME & time2, HANDLE hNotify, BOOL bPeriodic);
BOOL AddAfter( POSITION pos, CBaseList *pList);
BOOL AddBefore( POSITION pos, CBaseList *pList);
HRESULT AddBootableDevice( BSTR bstrBootableDeviceName, BSTR bstrBootableDeviceId, IPMBootableDevice** ppiBootableDevice );
HRESULT AddBuddyEx( BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fPersistent, RTC_BUDDY_SUBSCRIPTION_TYPE enSubscriptionType, IRTCProfile* pProfile, long lFlags, IRTCBuddy2** ppBuddy2 );
HRESULT AddCPU( BSTR bstrCPUName, long dwCpuNum, int wArchitecture, long dwCPUType, BSTR bstrCPUId, VARIANT vtPageSize, VARIANT vtLevel, BSTR bstrDefaultValue, IPMCPU** ppiCPU );
HRESULT AddCPUFiles( BSTR bstrFullPath, BSTR bstrKeyName, BSTR bsOSIdOrName, VARIANT vtLocaleId, VARIANT vtFlags );
HRESULT AddCallback( IUnknown* pUnkCallback );
HRESULT AddDevice( BSTR bstrDeviceName, BSTR bstrDeviceId, IPMRemoteDevice** ppiDevice );
HRESULT AddDynamicService( LPCWSTR pszServiceId, LPCWSTR pszEndpointAddress, const WSD_PORT_TYPE* pPortType, const WSDXML_NAME* pPortName, const WSDXML_ELEMENT* pAny, IUnknown* pService );
HRESULT AddFile( BSTR bstrFullPath, BSTR bstrKeyName, IPMCPU* piPMCPU, IPMOS* piPMOS, long dwLocaleId, long dwFlags, IPMPackageFile** ppiPMPackageFile );
HRESULT AddGroup( BSTR bstrGroupName, BSTR bstrData, IRTCProfile* pProfile, long lFlags, IRTCBuddyGroup** ppGroup );
BOOL AddHead( CBaseList *pList);
HRESULT AddImage( OLE_HANDLE hImage, OLE_HANDLE hImageMask, long lData );
HRESULT AddItemToInfraredFolder( int olItem, IDispatch * polItem );
HRESULT AddItemsFromResource ( HINSTANCE hinst, PCWSTR pszMenuName, DWORD dwMenuState );
HRESULT AddLexicon( ISpLexicon* pAddLexicon, DWORD dwFlags );
HRESULT AddOS( BSTR bstrOSName, int wMajorVersion, int wMinorVersion, BSTR bstrOSTypeId, BSTR bstrOSId, IPMOS** ppiOS );
HRESULT AddObject( BSTR in_bstrName, BSTR in_bstrID, ICcObject** out_ppiObject );
HRESULT AddPackage( BSTR bstrPackageName, BSTR bstrPackageId, IPMPackage** ppiPackage );
void AddParameterBytes( HPACKET hPacket, BYTE *pData, DWORD cbData );
void AddParameterDWORD( HPACKET hPacket, DWORD dwData );
void AddParameterString( HPACKET hPacket, WCHAR *szData );
void AddParameterWORD( HPACKET hPacket, WORD wData );
HRESULT AddParticipant( BSTR bstrAddress, BSTR bstrName, IRTCParticipant** ppParticipant );
HRESULT AddParticipantEx( BSTR bstrAddress, BSTR bstrName, BSTR bstrEPID, IRTCParticipant2** ppParticipant );
HRESULT AddPin( CSourceStream *pStream );
HRESULT AddPlatform( BSTR bstrPlatformName, BSTR bstrPlatformId, IPMPlatform** ppiPlatform );
HRESULT AddPropInfo( BSTR bstrPropInfoName, long dwPropInfoType, BSTR bstrPropInfoValue, IPMPropInfo** ppiPropInfo );
HRESULT AddProperty( BSTR bstrLinkName, BSTR bstrPropId, IPMProperty** ppiProperty );
HRESULT AddSIFile( LPCWSTR lpszFileName, DWORD *pdwID, DWORD dwFlag );
HRESULT AddServiceCategoryName( BSTR bstrServiceCategoryName, BSTR bstrServiceCategoryId, IPMServiceCategory** ppiServiceCategory );
HRESULT AddServiceInfo( BSTR bstrServiceCategoryIdOrName, BSTR bstrServiceCLSID );
HRESULT AddStartupServer( BSTR bstrStartupServerId, VARIANT_BOOL bDefault, IPMStartupServerInfo** ppiStartupServer );
BOOL AddTail( CBaseList *pList);
HRESULT AddTokens( ULONG cTokens, ISpObjectToken** pToken );
HRESULT AddTokensFromDataKey( ISpDataKey* pDataKey, const WCHAR* pszSubKey, const WCHAR* pszCategoryId );
HRESULT AddToolkit( BSTR bstrToolkitName, BSTR bstrToolkitId );
HRESULT AddTransport( BSTR bstrTransportId, VARIANT_BOOL bDefault, IPMTransportInfo** ppiTransport );
HRESULT AddWatcher( BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, VARIANT_BOOL fBlocked, VARIANT_BOOL fPersistent, IRTCWatcher** ppWatcher );
HRESULT AddWatcherEx( BSTR bstrPresentityURI, BSTR bstrUserName, BSTR bstrData, RTC_WATCHER_STATE enState, VARIANT_BOOL fPersistent, RTC_ACE_SCOPE enScope, IRTCProfile* pProfile, long lFlags, IRTCWatcher2** ppWatcher );
HRESULT AddWithIndex( BSTR bstr, long lData, long *lpIndex );
HRESULT Advise( IUnknown *pUnk, DWORD *pdwCookie );
HRESULT AdvisePeriodic( REFERENCE_TIME StartTime, REFERENCE_TIME PeriodTime, HSEMAPHORE hSemaphore, DWORD *pdwAdviseToken);
HRESULT AdviseTime( REFERENCE_TIME baseTime, REFERENCE_TIME streamTime, HEVENT hEvent, DWORD *pdwAdviseToken);
HRESULT AgreeMediaType( IPin *pReceivePin, const CMediaType *pmt);
int Alert( HWND hwndParent, UINT uType, UINT uMessage, ... );
DWORD AlignedWidth (void );
HRESULT Alloc(void);
HRESULT AllowDialogNotifications ( BSTR bstrDialogNotifications );
HRESULT AlterQuality( Quality q );
HRESULT AnswerWithSessionDescription( BSTR bstrContentType, BSTR bstrSessionDescription );
HRESULT Apply(void);
HRESULT Architecture( int* pwArchitecture );
VOID WINAPI AreEqualVideoTypes ( CMediaType *pmt1, CMediaType *pmt2);
void Arrived( IDispatch* Queue, long Cursor );
HRESULT AsyncOperationComplete( IWSDAsyncResult* pAsyncResult, IUnknown* pAsyncState );
HRESULT Attach( BSTR bstrProcessName, long dwTimeOut, VARIANT vtProcessId, IPMConnection** ppiConnection );
HRESULT AttribChanged( DWORD dwAttribute);
HRESULT AudioPause(void);
HRESULT AudioResume(void);
DWORD Available (void );
HRESULT AwakeStateGet( DWORD*pdwAwake );
HRESULT AwakeStateSet( DWORD dwAwake );
HRESULT BearingToVelocity ( const pPNVELENU pENUVel, pPNVELBEAR pBearVel );
void BeforeNavigate2( IDispatch* pdisp, VARIANT* pvtURL, VARIANT* pvtFlags, VARIANT* pvtTargetFrameName, VARIANT* pvtPostData, VARIANT* pvtHeaders, VARIANT_BOOL* pvbCancel);
HRESULT BeforeWindowOpen( BSTR url, BSTR urlContext, BSTR name, BSTR features, IUnknown* punkEvents );
HRESULT BeginFlush(void);
HRESULT BeginGetMetadata( IWSDAsyncResult** ppResult );
HRESULT BeginMessage(void);
HRESULT BeginMessageWSDL( IWSDLOperation* pOperation );
void BltPrepare ( DDGPEBltParms *pddgpeBltParms );
DWORD Bpp (void );
HRESULT BreakConnect(void);
HRESULT BstrFromVector( SAFEARRAY FAR *psa, BSTR FAR *pbstr );
void BthAGATSetCallback ( PFN_SendATCommand pfn );
DWORD BthAGSetServiceCallback( PFN_PhoneExtServiceCallback pfn );
void BufferFree (BD_BUFFER *pBuf);
BOOL CAM_Close( DWORD Context );
BOOL CAM_Deinit( DWORD dwContext );
BOOL CAM_IOControl( DWORD dwContext, DWORD Ioctl, UCHAR* pInBuf, DWORD InBufLen, UCHAR* pOutBuf, DWORD OutBufLen, DWORD* pdwBytesTransferred );
DWORD CAM_Init( VOID* pContext );
DWORD CAM_Open( DWORD Context, DWORD Access, DWORD ShareMode );
int CFunc();
HRESULT CLSID ( BSTR* pbstrServiceCLSID );
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
HRESULT Call( BSTR bstrURI, IVoIPCurrentCall** ppiCurrentCall );
DWORD CallWorker( DWORD dw);
HRESULT CanSeekBackward( LONG *pCanSeekBackward );
HRESULT CanSeekForward( LONG *pCanSeekForward );
HRESULT CancelNotification(void);
HRESULT CategoryId( BSTR* pbstrServiceCategoryId );
HANDLE CeHeapCreate( DWORD flOptions, DWORD dwInitialSize, DWORD dwMaximumSize, PFN_AllocHeapMem pfnAlloc, PFN_FreeHeapMem pfnFee );
VOID WINAPI CertEnumPhysicalStore( const void* pvSystemStore, DWORD dwFlags, void* pvArg, PFN_CERT_ENUM_PHYSICAL_STORE pfnEnum);
VOID WINAPI CertEnumSystemStore( DWORD dwFlags, void *pvSystemStoreLocationPara, void *pvArg, PFN_CERT_ENUM_SYSTEM_STORE pfnEnum );
VOID WINAPI CertEnumSystemStoreLocation( DWORD dwFlags, void *pvArg, PFN_CERT_ENUM_SYSTEM_STORE_LOCATION pfnEnum );
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
BOOL ChooseColor( LPCHOOSECOLOR lpcc);
HRESULT CleanupOrphanedRecordings( LPCOLESTR pszDirName);
UINT CleanupTestThread( HANDLE hThread, DWORD dwThreadId, int index );
HRESULT ClearPendingSample(void);
HRESULT ClipAndCommit( OLE_HANDLE hrgnClip );
HRESULT CloseAppByName( BSTR bstrAppName, BOOL fTerminate );
void CloseBrowser();
HRESULT CloseDevice( hPNDevice hPN, );
VOID WINAPI ClosePerformanceData();
HRESULT CmdMimic( PVCMDNAME pMenu, PTSTR pszCommand);
HRESULT CoCopyProxy( IUnknown *pProxy, IUnknown **ppCopy );
HRESULT CoCreateInstanceEx( REFCLSID rclsid, IUnknown *punkOuter, DWORD dwClsCtx, COSERVERINFO *pServerInfo, ULONG cmq, MULTI_QI *pResults );
VOID STDAPI CoDisconnectObject( IUnknown *pUnk, DWORD dwReserved );
HRESULT CoGetInstanceFromFile( COSERVERINFO *pServerInfo, CLSID *pclsid, IUnknown *punkOuter, DWORD dwClsCtx, DWORD grfMode, OLECHAR *szName, ULONG cmq, MULTI_QI *rgmqResults );
HRESULT CoGetInstanceFromIStorage( COSERVERINFO *pServerInfo, CLSID *pclsid, IUnknown *punkOuter, DWORD dwClsCtx, IStorage *pstg, ULONG cmq, MULTI_QI *rgmqResults );
VOID STDAPI CoGetMarshalSizeMax( ULONG *pulSize, REFIID riid, IUnknown *pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags );
VOID STDAPI CoGetStandardMarshal( REFIID riid, IUnknown *pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags, LPMARSHAL *ppMarshal );
VOID STDAPI CoLockObjectExternal( IUnknown *pUnk, BOOL fLock, BOOL fLastUnlockReleases );
VOID STDAPI CoMarshalInterface( IStream *pStm, REFIID riid, IUnknown *pUnk, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags );
HRESULT CoQueryProxyBlanket( IUnknown *pProxy, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTH_IDENTITY_HANDLE *ppAuthInfo, DWORD *pCapabilities );
VOID STDAPI CoRegisterClassObject( REFCLSID rclsid, IUnknown *pUnk, DWORD dwClsContext, DWORD flags, LPDWORD lpdwRegister );
HRESULT CoSetProxyBlanket( IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, WCHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, RPC_AUTH_IDENTITY_HANDLE pAuthInfo, DWORD dwCapabilities );
HRESULT CoSwitchCallContext( IUnknown *pNewObject, IUnknown **ppOldObject );
VOID WINAPI CollectPerformanceData( LPWSTR lpwszValue, LPVOID *lppData, LPDWORD lpcbBytes, LPDWORD lpcObjectTypes );
HRESULT ColorFill( IDirect3DMobileSurface* pSurface, CONST RECT* pRect, D3DMCOLOR Color );
DWORD ColorKeyHigh(void );
DWORD ColorKeyLow (void );
DWORD ColorKeyMask (void );
HRESULT CommandOther( PVCMDNAME pName, PTSTR pszCommand);
HRESULT CommandRecognize( DWORD dwID, PVCMDNAME pvCmdName, DWORD dwFlags, DWORD dwActionSize, PVOID pAction, DWORD dwNumLists, PTSTR pszListValues, PTSTR pszCommand);
HRESULT CommandStart();
BOOL CommentV( DWORD dwVerbosity, LPCTSTR szFormat, va_list pArgs );
HRESULT CommitAt( long xDest, long yDest, long xSrc, long ySrc, long dx, long dy );
HRESULT CommitFrom( long xSrc, long ySrc );
HRESULT CompileStream( IStream* pSource, IStream* pDest, IStream* pHeader, IUnknown* pReserved, ISpErrorLog* pErrorLog, DWORD dwFlags );
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
HRESULT CopyPackage( BSTR bstrPackageId, BSTR bstrDestPath, VARIANT_BOOL bOverWrite, long* pdwTotalSize );
HRESULT CopyProxy( IUnknown *pProxy, IUnknown **ppCopy );
HRESULT CopyRects( IDirect3DMobileSurface* pSourceSurface, CONST RECT* pSourceRectsArray, UINT cRects, IDirect3DMobileSurface* pDestinationSurface, CONST POINT* pDestPointsArray );
BOOL Create(void);
HRESULT CreateAdditionalSwapChain( D3DMPRESENT_PARAMETERS* pPresentationParameters, IDirect3DMobileSwapChain** pSwapChain );
HRESULT CreateAsyncFind( BSTR bstrTypeURI, DWORD dwFlags, IUnknown* punkDeviceFinderCallback, LONG* plFindData );
HRESULT CreateBitmapFromImage( IImage* image, OPTIONAL UINT width, OPTIONAL UINT height, OPTIONAL PixelFormatID pixelFormat, InterpolationHint hints, IBitmapImage** bitmap );
HRESULT CreateBrowserObject();
HRESULT CreateBrowserWindow();
HRESULT CreateCaptureBuffer( LPWAVEFORMATEX pwfx, DWORD dwFlags, DWORD dwCardAddress, LPDWORD pdwcbBufferSize, LPBYTE *ppbBuffer, LPVOID *ppvObj );
HRESULT CreateClipper( DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter );
HRESULT CreateCommand( HPACKET *pHPacket );
HRESULT CreateDepthStencilSurface( UINT Width, UINT Height, D3DMFORMAT Format, D3DMMULTISAMPLE_TYPE MultiSample, IDirect3DMobileSurface** ppSurface );
HRESULT CreateDevice( UINT Adapter, D3DMDEVTYPE DeviceType, HWND hFocusWindow, ULONG BehaviorFlags, D3DMPRESENT_PARAMETERS* pPresentationParameters, IDirect3DMobileDevice** ppReturnedDeviceInterface );
HRESULT CreateFMCompatibleBitmap( OLE_HANDLE hFC, OLE_HANDLE *phBitMap, LONG Width, LONG Height );
HRESULT CreateFMCompatibleDC( OLE_HANDLE hFC, OLE_HANDLE *phDC );
HRESULT CreateGUID( BSTR* pbstrNewGuid );
HRESULT CreateIdleSubscription ( IRTCProfile* pServerProfile, BSTR bstrAcceptedContent, BSTR bstrEventPackage, IRTCSubscription2** ppSubscription );
HRESULT CreateImageSurface( UINT Width, UINT Height, D3DMFORMAT Format, IDirect3DMobileSurface** ppSurface );
HRESULT CreateIndexBuffer( UINT Length, DWORD Usage, D3DMFORMAT Format, D3DMPOOL Pool, IDirect3DMobileIndexBuffer** ppIndexBuffer );
HRESULT CreateInstance( IUnknown *pUnkOuter, REFIID riid, void **ppvObject);
HRESULT CreateInstanceLic( IUnknown *pUnkOuter, IUnknown *pUnkReserved, REFIID riid, BSTR bstrKey, void **ppvObject );
HRESULT CreateItem( int olItem, IDispatch ** ppolItem );
HRESULT CreateKey( const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey );
VOID WINAPI CreateMediaType( AM_MEDIA_TYPE const *pSrc);
HRESULT CreateNewItem ( HWND hwndParent );
HRESULT CreatePortConnector( IWSDLPort* pPort, ISoapConnector** ppConnector );
VOID STDAPI CreatePosPassThru( LPUNKNOWN pAgg, BOOL bRenderer, IPin *pPin, IUnknown **ppPassThru);
HRESULT CreateProfile( BSTR bstrProfileXML, IRTCProfile** ppProfile );
HRESULT CreateRecoContext( ISpRecoContext** ppNewContext );
HRESULT CreateRenderTarget( UINT Width, UINT Height, D3DMFORMAT Format, D3DMMULTISAMPLE_TYPE MultiSample, BOOL Lockable, IDirect3DMobileSurface** ppSurface );
HRESULT CreateReoccurringTask( ISpTask* pTask, void* pvTaskData, HANDLE hCompEvent, ISpNotifySink** ppTaskCtrl );
HRESULT CreateSession( RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile* pProfile, long lFlags, IRTCSession** ppSession );
HRESULT CreateSessionWithDescription( BSTR bstrContentType, BSTR bstrSessionDescription, IRTCProfile* pProfile, long lFlags, IRTCSession2** ppSession2 );
HRESULT CreateSoundBuffer( LPWAVEFORMATEX pwfx, DWORD dwFlags, DWORD dwCardAddress, LPDWORD pdwcbBufferSize, LPBYTE *ppbBuffer, LPVOID *ppvObj );
HRESULT CreateSubscription( IRTCProfile* pServerProfile, BSTR bstrAcceptedContent, BSTR bstrEventPackage, BSTR bstrContentType, BSTR bstrMessageBody, IRTCSubscription** ppSubscription );
HRESULT CreateTexture( UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DMFORMAT Format, D3DMPOOL Pool, IDirect3DMobileTexture** ppTexture );
HRESULT CreateThreadControl( ISpThreadTask* pTask, void* pvTaskData, long nPriority, ISpThreadControl** ppThreadCtrl );
HRESULT CreateVertexBuffer( UINT Length, DWORD Usage, DWORD FVF, D3DMPOOL Pool, IDirect3DMobileVertexBuffer** ppVertexBuffer );
HRESULT CreateVirtualChannels( BSTR channelNames );
HRESULT CreateVirtualMachine( [in] LPOLESTR commandLine );
VOID WINAPI CritCheckIn( CCritSec *pcCrit);
VOID WINAPI CritCheckOut( CCritSec *pcCrit);
VOID WINAPI CryptEnumKeyIdentifierProperties( const CRYPT_HASH_BLOB *pKeyIdentifier, DWORD dwPropId, DWORD dwFlags, LPCWSTR pwszComputerName, void *pvReserved, void *pvArg, PFN_CRYPT_ENUM_KEYID_PROP pfnEnum );
VOID WINAPI CryptEnumOIDInfo( DWORD dwGroupId, DWORD dwFlags, void *pvArg, PFN_CRYPT_ENUM_OID_INFO pfnEnumOIDInfo );
void CurrentItemChange( IDispatch* pdispMedia );
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
HRESULT DefaultValue( BSTR* pbstrName );
HRESULT DegreesToRadians ( pPNPOSLLA pLLAPos );
void Deinitialize();
HRESULT DeleteBootableDevice( BSTR bstrBootableDeviceIdOrName );
HRESULT DeleteCPU( BSTR bstrCPUIdOrName );
HRESULT DeleteDevice( BSTR bstrDeviceIdOrName );
HRESULT DeleteDeviceList ( pPNDEVICE pPNDeviceHead );
VOID WINAPI DeleteMediaType( AM_MEDIA_TYPE *pmt);
HRESULT DeleteOS( BSTR bstrOSIdOrName );
HRESULT DeletePackage( BSTR bstrPackageIdOrName );
HRESULT DeletePlatform( BSTR bstrPlatformIdOrName );
HRESULT DeletePropInfo( BSTR bstrPropInfoName );
HRESULT DeleteProperty( BSTR bstrPropId );
HRESULT DeleteRecording( LPCOLESTR pszFileName);
HRESULT DeleteService( BSTR bstrServiceCategoryIdOrName );
HRESULT DeleteServiceCategory( BSTR bstrServiceCategoryIdOrName );
HRESULT DeleteServiceInfo( BSTR bstrServiceIdOrName );
HRESULT DeleteStartupServer( BSTR bstrStartupServerIdOrName );
void DeleteSurface ( LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface );
HRESULT DeleteToolkit( BSTR bstrToolkitIdOrName );
HRESULT DeleteTransport( BSTR bstrTransportIdOrName );
HRESULT DeleteVirtualMachine( [in] GUID* virtualMachineID );
HRESULT Deliver( IMediaSample *pSample);
HRESULT DeliverBeginFlush(void);
HRESULT DeliverEndFlush(void);
HRESULT DeliverEndOfStream(void);
HRESULT DeliverNewSegment( REFERENCE_TIME tStart, REFERENCE_TIME tStop, double dRate);
BOOL DeregisterDevice( Handle hDevice);
HRESULT DeregisterStartedApplication( OLE_HANDLE hFC, BSTR bstrAppName );
HRESULT DeserializeResult( const SPSERIALIZEDRESULT* pSerializedResult, ISpRecoResult** ppResult );
BOOL DestroyInstance( DWORD InstanceIndex);
HRESULT Device ( BSTR* pbstrDeviceId);
HRESULT DeviceByUDN( BSTR bstrUDN, IUPnPDevice** ppudDevice );
DWORD DeviceConfig(DWORD Command, PPCI_DEV_INFO pInfo,PPCI_RSRC pRsrc1,PPCI_RSRC pRsrc2,DWORD* pMemSize,DWORD* pIoSize);
HRESULT DeviceId ( BSTR*pbstrDeviceId );
HRESULT DeviceRemoved( LONG lFindData, BSTR bstrUDN );
VOID WINAPI DirectDrawCreate( GUID FAR *lpGUID, LPDIRECTDRAW FAR *lplpDD, IUnknown FAR *pUnkOuter);
VOID WINAPI DirectDrawCreateClipper( DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter);
void DisableWindow();
HRESULT Disconnect( );
void DisplayPinInfo( IPin *pReceivePin);
void DisplayTypeInfo( IPin *pPin, const CMediaType *pmt);
HRESULT DisplayUI( HWND hwndParent, const WCHAR* pszTitle, const WCHAR pszTypeOfUI, void* pvExtraData, ULONG cbExtraData, IUnknown* punkObject );
BOOL DllEntry(HANDLE hInstDll, DWORD dwReason, LPVOID lpvReserved);
HRESULT DoBufferProcessingLoop(void);
HRESULT DoGetWindowStyle( long *pStyle, long WindowLong);
HRESULT DoRealisePalette( BOOL bForceBackground);
void DoSetWindowForeground( BOOL bFocus);
HRESULT DoSetWindowStyle( long Style, long WindowLong);
HRESULT DoShowWindow( LONG ShowCmd);
void DoSomething(void);
UINT DoStressIteration( HANDLE hThread, DWORD dwThreadId, LPVOID pv );
HRESULT DoVerb( LONG iVerb, LPMSG lpmsg, IOleClientSite * pActiveSite, LONG lindex, HWND hwndParent, LPCRECT lprcPosRect );
void DocumentComplete ( IDispatch* pdisp, VARIANT* pvtURL);
HRESULT DoneWithWindow( );
void DumpBuff (unsigned int cMask, unsigned char *lpBuffer, unsigned int cBuffer);
HRESULT DuplicateSoundBuffer( IDSDRIVERBUFFER pIDsDriverBuffer, LPVOID *ppv );
HRESULT Duration( REFERENCE_TIME *ptDuration );
void EOS( );
BOOL EdbgCancelRegisterClient( CHAR * ServiceName CHAR * DeviceName );
HRESULT EmulateRecognition( ISpPhrase* pPhrase );
HRESULT EnableItem( DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT EnabledGet( DWORD *dwEnabled );
HRESULT EnabledSet( DWORD dwEnabled );
BOOL EncryptFile (LPTSTR, LPTSTR, LPTSTR);
HRESULT EndFlush(void);
HRESULT EndGetMetadata( IWSDAsyncResult* pResult );
HRESULT EndMessage(void);
HRESULT EndOfStream(void);
HRESULT EnumAllModules( IOsAxsEnumModule** ppienum);
HRESULT EnumAllProcesses( IOsAxsEnumProcess** ppienum);
HRESULT EnumAllThreads( IOsAxsEnumThread** ppienum);
HRESULT EnumMediaTypes( IEnumMediaTypes **ppEnum);
HRESULT EnumOwnedThreads( IOsAxsEnumThread**ppiOsAxsEnumThd);
HRESULT EnumPins( IEnumPins **ppEnum);
HRESULT EnumUsedModules( IOsAxsEnumModule**ppiOsAxsEnumMod);
BOOL EqualPins( IUnknown *pPin1, IUnknown *pPin2);
BOOL ErrorAnalysis(INT32 cCalibrationPoints,INT32* pScreenXBuffer,INT32* pScreenYBuffer,INT32* pUncalXBuffer,INT32* pUncalYBuffer);
HRESULT EvaluateSessionDescription( BSTR bstrContentType, BSTR bstrSessionDescription, VARIANT_BOOL* pfApplicationSession );
HRESULT Event( RTC_EVENT RTCEvent, IDispatch* pEvent );
HRESULT EventPackage( BSTR* pbstrEventPackage );
DWORD EventThread(LPVOID threadParams);
HRESULT ExecuteOperation( ISoapReader* pISoapReader, ISoapSerializer* pISoapSerializer );
HRESULT Exit(void);
HANDLE ExitThreadEvent(void);
int ExtensionLayer_CloseDriverInstance (void);
int ExtensionLayer_CreateDriverInstance (void);
int ExtensionLayer_InitializeOnce (void);
int ExtensionLayer_UnInitialize (void);
HRESULT FaultRequest( WSD_SOAP_HEADER* pRequestHeader, IWSDMessageParameters* pMessageParameters, WSD_SOAP_FAULT* pFault );
HRESULT FileCopy( BSTR bstrSource, BSTR bstrDest, VARIANT_BOOL bOverWrite, long* pdwTotalSize );
HRESULT FileDelete( BSTR bstrFullPath );
HRESULT FileGetInfo( BSTR bstrRemotePath, long* pdwFileAttributes, long* pdwFileSize, VARIANT* pvtCreationTime );
HRESULT Find( BSTR pwszRestriction, IDispatch ** ppolItem );
HRESULT FindByType( BSTR bstrTypeURI, DWORD dwFlags, IUPnPDevices** pDevices );
HRESULT FindByUDN( BSTR bstrUDN, IUPnPDevice** pDevice );
HRESULT FindCallerInfoByURI( BSTR bstrURI, IVoIPCallerInfoRecord** ppiRecord );
HRESULT FindFile( BSTR bstrFileName,VARIANT_BOOL fUseExisting, BSTR*pbstrFullPath);
HRESULT FindItem( BSTR bstr, long lIndexStart, long *pIndex );
HRESULT FindItemPartial( BSTR bstr, long lIndexStart, long *pIndex );
HRESULT FindNext( IDispatch ** ppolItem );
HRESULT FindPin( LPCWSTR Id, IPin **ppPin);
int FindPinNumber( IPin *iPin );
VOID WINAPI FingerWorker(LPVOID lpv);
HRESULT FlagKeysUsed( long lKeysUsed, long lKeysEaten );
void Flushing( BOOL bInProgress);
HRESULT ForceRefresh( );
DWORD FormatMessage ( DWORD dwFlags, LPCVOID lpSource, DWORD dwMessageId, DWORD dwLanguageId, LPTSTR lpBuffer, DWORD nSize, va_list *Arguments);
HRESULT Forward( BSTR bstrForwardToURI );
VOID STDAPI FreeBSTR( BSTR *pstr);
HRESULT FreeCommand( HPACKET hPacket );
VOID WINAPI FreeMediaType( AM_MEDIA_TYPE& mt);
void FreeResources();
void FreeSamples( );
void FreeString( HPACKET hPacket, WCHAR *pszData );
HRESULT GetActualDataLength(void);
HRESULT GetAdditionalHeaderValues( BSTR bstrHeaderValuePairs );
DWORD GetAdviseCount( );
HRESULT GetAllocator( IMemAllocator **ppAllocator);
HRESULT GetAllocatorRequirements( ALLOCATOR_PROPERTIES * pProps);
HRESULT GetAltInfo( ISpPhrase** ppParent, ULONG* pulStartElementInParent, ULONG* pcElementsInParent, ULONG* pcElementsInAlt );
HRESULT GetAlternates( ULONG ulStartElement, ULONG cElements, ULONG ulRequestCount, ISpPhraseAlt** ppPhrases, ULONG* pcPhrasesReturned );
HRESULT GetAppAlertState( OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, BOOL *pfAlert, LONG *pAlertVal );
HRESULT GetAsyncState( IUnknown** ppAsyncState );
HRESULT GetAudio( ULONG ulStartElement, ULONG cElements, ISpStreamFormat** ppStream );
BOOL GetAvailableDataSize( HPACKET hPacket, DWORD *pdwAvailable );
HRESULT GetBackBuffer( UINT BackBuffer, D3DMBACKBUFFER_TYPE Type, IDirect3DMobileSurface** ppBackBuffer );
BOOL GetBaseAddress(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset, DWORD dwNewLength, DWORD& dwNewBaseAddress);
HRESULT GetBaseStream( ISpStreamFormat** ppStream );
LONG GetBitmapFormatSize( const BITMAPINFOHEADER *pHeader);
DWORD GetBitmapSize( const BITMAPINFOHEADER *pHeader);
HRESULT GetBootableDevice( BSTR bstrBootableDeviceIdOrName, IPMBootableDevice** ppiBootableDevice );
HRESULT GetBoundSource( IUnknown** ppunk );
HRESULT GetBoundToLiveToken( LPOLESTR* ppszToken);
HRESULT GetBounds( long *plxLeft, long *plyTop, long *pldxWidth, long *pldyHeight );
HRESULT GetBuffer( IMediaSample **ppBuffer, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime, DWORD dwFlags);
HRESULT GetBufferingDepth( REFERENCE_TIME* ptStop );
HRESULT GetCPU( BSTR bstrCPUIdOrName, IPMCPU** ppiCPU );
HRESULT GetCapabilities( DWORD * pCapabilities );
HRESULT GetCaps( PDSDRIVERCAPS pDsDrvCaps );
HRESULT GetCaption( long lIndex, long lItemId, long lItemData, BSTR *pbstrCaption );
HRESULT GetCharsetInfo( BSTR Charset, PMIMECSETINFO pCharsetInfo );
HRESULT GetClientSite( IOleClientSite **ppClientSite);
HRESULT GetCommand( intnMaxCmdSize,BSTR*pbstrCommand);
HRESULT GetCommonBoolProperties( short *pwProps );
HRESULT GetConnection( BSTR bstrConnectId, IPMConnection** ppiConnection );
HRESULT GetConnectionFromId( BSTR bstrConnectionId, ICcConnection** ppiConnection);
HRESULT GetControlInfo( IDVDStreaControlInfo** ppStream );
int GetCount( );
int GetCountI( );
HRESULT GetCurrentImage( long *pBufferSize, long *pVideoImage);
HRESULT GetCurrentPosition( LPDWORD lpdwCurrentCaptureCursor, LPDWORD lpdwCurrentWriteCursor );
HRESULT GetCurrentProcessAndThread( DWORD dwCpuNum, IOsAxsProcess**ppiproc, IOsAxsThread**ppithrd);
DWORD GetCurrentTemp (DWORD dwShelfId);
HRESULT GetCurrentlyViewedProcess( IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetDataKey( SPDATAKEYLOCATION spdkl, ISpDataKey** ppDataKey );
HRESULT GetDataSearchInfo( IDVDDataSearchInfo** ppDSI );
HRESULT GetDeliveryBuffer( IMediaSample **ppSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime, DWORD dwFlags);
HRESULT GetDepthStencilSurface( IDirect3DMobileSurface** ppZStencilSurface );
HRESULT GetDescription( BSTR *pBstrDescription);
HRESULT GetDestinationPosition( long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetDevMemoryObject( IUnknown **ppUnkInnner, IUnknown *pUnkOuter);
HRESULT GetDevice( BSTR bstrDeviceIdOrName, IPMRemoteDevice** ppiRemoteDevice );
HRESULT GetDirect3D( IDirect3DMobile** ppD3DM );
HRESULT GetDllEntry( MEMBERID memid, INVOKEKIND invKind, BSTR FAR *pBstrDllName, BSTR FAR *pBstrName, unsigned short FAR *pwOrdinal );
HRESULT GetDocumentURL( BSTR* pbstrDocument );
HRESULT GetDocumentation( MEMBERID memid, BSTR FAR *pBstrName, BSTR FAR *pBstrDocString, unsigned long FAR *pdwHelpContext, BSTR FAR *pBstrHelpFile );
HRESULT GetDocumentation2( [in] MEMID memid, [in] LCID lcid, [out] BSTR FAR *pbstrHelpString, [out] unsigned long FAR *pdwHelpStringContext, BSTR FAR *pbstrHelpStringDll);
HRESULT GetDomain( UINT16 languageCode, IDVDDomain** ppDomain, UINT8* pExistFlag );
HRESULT GetDriverDesc( PDSDRIVERDESC pDsDriverDesc );
HRESULT GetEndpointProxy( IWSDEndpointProxy** ppEndpoint );
HANDLE GetEvent( );
HRESULT GetExtendedControl( IDispatch** ppDisp);
HRESULT GetFMSystemFont( OLE_HANDLE hFC, BOOL fSmall, IDispatch **ppdispFont);
DWORD GetFOURCC(void);
HRESULT GetFile( BSTR bstrRemotePath, BSTR bstrDest, long* pdwTotalSize );
HRESULT GetFirstPlay( IDVDDomain* ppDomain );
HRESULT GetFolderInfo( LPSTR lpszName, HREPLFLD *phFolder, IUnknown **ppObjHandler);
HRESULT GetFormDisplayCaps( OLE_HANDLE hFC, LONG nIndex, LONG *pRetInfo);
HRESULT GetFormsContextHandle( OLE_HANDLE *phFC );
HRESULT GetFrontBuffer( IDirect3DMobileSurface** pFrontBuffer );
HRESULT GetHeader( BSTR bstrHeaderName, BSTR** prgValues, UINT* pcValues );
HRESULT GetHelpFile( BSTR *pBstrHelpFile);
HRESULT GetHighlightInfo( IDVDHighlightInfo** ppHLI );
HRESULT GetIFMDraw( IDispatch **ppdispFMDraw, long lxLeft, long lyTop, long lxWidth, long lyHeight );
HRESULT GetImageSize( VIDEOINFOHEADER *pVideoInfo, long *pBufferSize, RECT *pSourceRect);
HRESULT GetIndices( IDirect3DMobileIndexBuffer** ppIndexData );
HRESULT GetInputObjectToken( ISpObjectToken** ppToken );
HRESULT GetInputStream( ISpStreamFormat** ppStream );
HRESULT GetItemAt( UINT idxItem, IUnknown** ppiItem );
HRESULT GetItemFromOid( CEOID oid, IDispatch ** ppolItem );
HRESULT GetLcidFromRfc1766( LCID* pLocale, BSTR bstrRfc1766 );
HRESULT GetLinkURL( BSTR* pbstrURL );
HRESULT GetLocalAddress( IWSDAddress** ppAddress );
HRESULT GetLocalPresenceInfo( RTC_PRESENCE_STATUS* penStatus, BSTR* pbstrNotes );
HRESULT GetLowerParameters( IWSDMessageParameters** ppTxParams );
HRESULT GetMapping( BSTR bstrRemoteAddress, RTC_PORT_TYPE enPortType, BSTR* pbstrInternalLocalAddress, long* plInternalLocalPort, BSTR* pbstrExternalLocalAddress, long* plExternalLocalPort );
HRESULT GetMappingEx( BSTR bstrRemoteAddress, long lRemotePort, long lTransport, RTC_PORT_TYPE enPortType, BSTR* pbstrInternalLocalAddress, long* plInternalLocalPort, BSTR* pbstrExternalLocalAddress, long* plExternalLocalPort );
HRESULT GetMarkerName( long MarkerNum, BSTR* pbstrMarkerName );
HRESULT GetMaxIdealImageSize( long *pWidth, long *pHeight);
HRESULT GetMediaPositionInterface( REFIID riid, void **ppv);
HRESULT GetMediaType( int iPosition, const CMediaType *pMediaType);
LONG GetMediaTypeVersion( );
HRESULT GetMenu( IDVDMenu** ppMenu );
HRESULT GetMenuLanguageInfo( UNIT16* plangcount, UINT16* pLCBuffer, UINT8* pFlagsBuffer );
HRESULT GetMessageText( BSTR* pbstrMessage );
HRESULT GetMessageType( WSDUdpMessageType* pMessageType );
HRESULT GetMinIdealImageSize( long *pWidth, long *pHeight);
HRESULT GetModuleByID( DWORD dwID, IOsAxsProcess** ppiOsAxsModule);
HRESULT GetModuleFromAddress( ADDRESS_TYPEAddr, IOsAxsModule** ppiModule);
HRESULT GetMops( MEMBERID memid, BSTR FAR *pBstrMops );
HRESULT GetNames( MEMBERID memid, BSTR FAR *rgBstrNames, unsigned int cMaxNames, unsigned int FAR *pcNames );
DWORD GetNewLength(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset);
DWORD GetNewOffset(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset);
BOOL GetNextParameterType( HPACKET hPacket, MANAGED_DATATYPE *pType, DWORD *pSize );
HRESULT GetNotificationData( BSTR* pbstrContentType, BSTR* pbstrMessageData );
HRESULT GetOS( BSTR bstrOSIdOrName, IPMOS** ppiOS );
HRESULT GetObjectParam( LPOLESTR pszKey, IUnknown** ppunk );
HRESULT GetObjectStorage( LPOLESTR pszItem, IBindCtx* pbc, REFIID riid, void** ppvStorage );
HRESULT GetObjectToken( ISpObjectToken** ppToken );
HRESULT GetOperationParts( IenumSoapMappers** ppIEnumSoapMappers );
HRESULT GetOutputObjectToken( ISpObjectToken** ppObjectToken );
HRESULT GetOutputStream( ISpStreamFormat** ppStream );
HRESULT GetPGC( UINT16 pgcn, IDVDProgamChain* pPGC, UINT32* pPGCCat );
HRESULT GetPackage( BSTR bstrPackageIdOrName, IPMPackage** ppiPackage );
HRESULT GetPageInfo( LPPROPPAGEINFO pPageInfo );
BOOL GetParameterBytes( HPACKET hPacket, BYTE *pData, DWORD cbData );
BOOL GetParameterDWORD( HPACKET hPacket, DWORD *pdwData );
BOOL GetParameterString( HPACKET hPacket, WCHAR **pszData );
BOOL GetParameterWORD( HPACKET hPacket, WORD *pwData );
HRESULT GetParentManagementInfo( IDVDParentalManagementTable** ppTable );
HRESULT GetPath( LPCWSTR* ppszPath );
HRESULT GetPhraseList( DWORD dwFlags, PWSTR pszBuf PDWORD *pdwSize);
DWORD GetPhysicalModeId (void );
int GetPinCount(void);
HRESULT GetPixelDataBuffer( const RECT* rect, PixelFormatID pixelFormat, BOOL lastPass, BitmapData* bitmapData );
HRESULT GetPixelFormat( LPDDPIXELFORMAT lpDDPixelFormat);
HRESULT GetPixelFormatID( PixelFormatID* pixelFormat );
HRESULT GetPlatform( BSTR bstrPlatformIdOrName, IPMPlatform** ppiPlatform );
HRESULT GetPointer( BYTE ** ppBuffer );
HRESULT GetPresenceData( BSTR* pbstrNamespace, BSTR* pbstrData );
HRESULT GetProcessByID( DWORD dwID, IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetProfile( BSTR bstrUserAccount, BSTR bstrUserPassword, BSTR bstrUserURI, BSTR bstrServer, long lTransport, LONG_PTR lCookie );
HRESULT GetPropInfo( BSTR bstrPropName, IPMPropInfo** ppiPropInfo );
int GetPropToo(void);
HRESULT GetProperties( ALLOCATOR_PROPERTIES *pProps);
HRESULT GetProperty( BSTR bstrPropId, IPMProperty** ppiProperty );
HRESULT GetRate( double *pdRate );
HRESULT GetRecoContext( ISpRecoContext** ppRecoCtxt );
HRESULT GetRecoProfile( ISpObjectToken** ppToken );
HRESULT GetRecognizer( ISpRecognizer** ppRecognizer );
HRESULT GetRecordingPath( LPOLESTR* ppszPath);
HRESULT GetRemoteAddress( IWSDAddress** ppAddress );
HRESULT GetRemoteSessionDescription( BSTR* pbstrContentType, BSTR* pbstrSessionDescription );
HRESULT GetRenderTarget( IDirect3DMobileSurface** ppRenderTarget );
DWORD GetRequest( );
HRESULT GetRequestLine( BSTR* pbstrRequestLine );
HRESULT GetRestorePosition( long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetRfc1766FromLcid( LCID Locale, BSTR* pbstrRfc1766 );
HRESULT GetRoutineDataByAddress( ADDRESS_TYPEAddrCode, ROUTINE_DATA*pPData, IOsAxsModule **ppiModule);
HRESULT GetSampleTimes( IMediaSample *pMediaSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime);
HRESULT GetServiceCategory( BSTR bstrServiceCategoryIdOrName, IPMServiceCategory** ppiServiceCategory );
HRESULT GetServiceInfo( BSTR bstrServiceIdOrName, IPMServiceInfo** ppiServiceInfo );
HRESULT GetServiceMap( BSTR in_bstrServiceCategoryID, ICcServiceInfo** out_ppiServiceInfo );
HRESULT GetServiceObject( BSTR bstrUDN, BSTR bstrServiceId, IDispatch** ppdispService );
HRESULT GetServiceParamsShort( BSTR*pbstrShortParams);
HRESULT GetServiceProxyById( LPCWSTR pszServiceId, IWSDServiceProxy** ppServiceProxy );
HRESULT GetServiceProxyByType( const WSDXML_NAME* pType, IWSDServiceProxy** ppServiceProxy );
HRESULT GetSize(void);
HRESULT GetSoapOperations( IEnumWSDLOperations** ppIWSDLOperations );
HRESULT GetSoapPorts( IEnumWSDLPorts** ppIWSDLPorts );
HRESULT GetSoapServices( IEnumWSDLService** ppWSDLServiceEnum );
DWORD GetSoftwareVersion(void);
HRESULT GetSource( BSTR *pBstrSource);
HRESULT GetSourceEndMarkerName( DWORD dwSourceIndex, BSTR* pbstrEndMarker );
HRESULT GetSourcePosition( long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetSourceStartMarkerName( DWORD dwSourceIndex, BSTR* pbstrStartMarker );
HRESULT GetStartupServer( BSTR bstrStartupServerIdOrName, IPMStartupServerInfo** ppiStartupServer );
HRESULT GetState( DWORD dwMilliSecsTimeout, FILTER_STATE *State);
HRESULT GetStreamAttributes( IDVDStreamAttributes** ppAttr );
HRESULT GetStreamSource( UINT StreamNumber, IDirect3DMobileVertexBuffer** ppStreamData, UINT* pStride );
HRESULT GetStreamingInfo( IDVDStreamControlInfo** pControlInfo );
HRESULT GetSurfaceLevel( UINT Level, IDirect3DMobileSurface** ppSurfaceLevel );
HRESULT GetSyncSource( IReferenceClock **pClock);
HRESULT GetTextDataManager( IDVDTextManager** ppTxtMgr );
HRESULT GetTexture( DWORD Stage, IDirect3DMobileBaseTexture** ppTexture );
HANDLE GetThreadHandle( );
DWORD GetThreadID( );
HRESULT GetTime( REFERENCE_TIME *pTime);
HRESULT GetTimeMap( UINT16 pgcn, IDVDTimeMap** ppTimeMap );
DWORD GetTimingInfo(LPDWORD lpdwAvgPerfTicks, LPDWORD lpdwMax, LPDWORD lpdwMin, LPDWORD lpdwDeltaMax, LPDWORD lpdwDeltaMin);
HRESULT GetTitleSet( UINT16* zbVtsn, IDVDTitleSet** ppTitleSet );
HRESULT GetTitleSetAttributes( UINT16 vtsn, UINT32** pVTSCategory, IDVDStreamAttributes** ppVideoAttr );
BOOL GetTransferError( USB_TRANSFER hTransfer, LPDWORD lpdwError );
HRESULT GetTransport( BSTR bstrTransportIdOrName, IPMTransportInfo** ppiTransport );
HRESULT GetTunePolicy( STRMBUF_PLAYBACK_TUNE_POLICY* peStrmbufPlaybackTunePolicy);
HRESULT GetUniqueDeviceName( BSTR bstrDeviceIdentifier, BSTR bstrTemplateUDN, BSTR* pbstrUDN );
LONG GetUnits(void);
HRESULT GetVideoPaletteEntries( long StartIndex, long Entries, long *pRetrieved, long *pPalette);
HRESULT GetVideoSize( long *pWidth, long *pHeight);
HRESULT GetVirtualChannelOptions( BSTR ChanName, LONG* pChanOptions );
HRESULT GetVirtualMachineCount( [out, retval] ULONG* numberOfVMs );
HRESULT GetVirtualMachineName( [in] GUID* virtualMachineID, [out] LPOLESTR* virtualMachineName );
HRESULT GetVoice( ISpVoice** ppVoice );
HRESULT GetWindowContext( IOleInPlaceFrame **ppFrame, IOleInPlaceUIWindow **ppDoc, LPRECT lprcPosRect, LPRECT lprcClipRect, LPOLEINPLACEFRAMEINFO lpFrameInfo);
HRESULT GetWindowHandle( HWND *pHwnd);
LONG GetWindowHeight( );
HRESULT GetWindowPosition( long *pLeft, long *pTop, long *pWidth, long *pHeight);
LONG GetWindowWidth( );
HRESULT GetXMLContext( IWSDXMLContext** ppContext );
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
HRESULT ID ( BSTR* pbstrStreamId );
BOOL IOControl(DWORD dwInst,DWORD dwIoControlCode,LPVOID lpInBuf,DWORD nInBufSize,LPVOID lpOutBuf,DWORD nOutBufSize,LPDWORD lpBytesReturned);
HRESULT IRAvailable ( );
HRESULT ITNPhrase( ISpPhraseBuilder* pPhrase );
HRESULT IconURL( BSTR bstrEncodingFormat, LONG lSizeX, LONG lSizeY, LONG lBitDepth, BSTR* pbstrIconURL );
HRESULT Id( BSTR* pbstrBootableDeviceId );
HRESULT ImageFail ( DWORD dwCookie );
int InDisplay (void );
HRESULT InactivateWindow( );
HRESULT Inactive(void);
void IncrementPinVersion( );
void IncrementTypeVersion(void);
HRESULT Info( long lIndex, AM_MEDIA_TYPE **ppmt, DWORD *pdwFlags, LCID *plcid, DWORD *pdwGroup, WCHAR **ppszName, IUnknown **ppObject, IUnknown **ppUnk );
void Init ( int width, int height, void *pBits, int stride, EGPEFormat format, EDDGPEPixelFormat pixelFormat );
HRESULT InitASFormsManager( void );
HRESULT InitAllocator( IMemAllocator **ppAlloc);
HRESULT InitData( IDVDROM* pDisk );
HRESULT InitFromDataKey( const WCHAR* pszCategoryId, const WCHAR* pszTokenId, ISpDataKey* pDataKey );
void InitMediaType( );
BOOL InitPubKey ( BYTE *pKey, DWORD cbBlob );
HRESULT InitSpNotifyCallback( ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam );
DWORD InitialThreadProc( LPVOID pv);
HRESULT InitializeService( WCHAR *szService );
BOOL InitializeStressModule( MODULE_PARAMS* pmp, UINT* pnThreads );
UINT InitializeTestThread( HANDLE hThread, DWORD dwThreadId, int index );
HRESULT InlineImage ( IASHTMLControl *pControl, BSTR bstrTarget, DWORD dwCookie );
HRESULT Insert( short ch );
HRESULT InsertAt( long index, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BSTR bstr, short wID, BOOL fBitmap );
void IntToWstr( int i, LPWSTR wstrDest);
HRESULT Interference( DWORD dwType);
HRESULT Interpret( ISpPhraseBuilder* pPhrase, const ULONG ulFirstElement, const ULONG ulCountOfElements, ISpCFGInterpreterSite* pSite );
HRESULT InvokeAction( BSTR bstrActionName, VARIANT varInActionArgs, VARIANT* pvarOutActionArgs, VARIANT* pvarRetVal );
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
HRESULT IsUISupported( const WCHAR* pszTypeOfUI, void* pvExtraData, ULONG cbExtraData, IUnknown* punkObject, BOOL* pfSupported );
HRESULT IsUsingDefaultDestination(void);
HRESULT IsUsingDefaultSource(void);
HRESULT IsUsingTimeFormat( const GUID *pFormat );
HRESULT IsVirtualMachineRunning( [in] GUID* virtualMachineID, [out, retval] boolean* isRunning );
HRESULT ItemAt( long lIndex IDispatch **ppdispItem );
HRESULT ItemFromID( short ID, IDispatch **ppdispControl );
HRESULT JoinFilterGraph( IFilterGraph *pGraph, LPCWSTR pName);
HRESULT JumpToAnchor ( BSTR bstrAnchor );
HRESULT KeyName( BSTR* pbstrName );
void KeybdDriverInitialize( PFN_KEYBD_EVENT_CALLBACK pfnKeybdEventCallback );
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
HRESULT Launch( BSTR bstrRemotePath, BSTR bstrCmdLine );
int Layer_CloseDeviceContext ( HANDLE hDeviceContext );
int Layer_EstablishDeviceConnect( void* pUserContext, //Layer specific filtering parameters ... LAYER_EVENT_INDICATION* pInd, LAYER_CALLBACKS* pCall, LAYER_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE* phDeviceContext );
HRESULT LicenseAcquired([in] VARIANT_BOOL varResult );
HRESULT ListGet( PTSTR pszList, PSDATA pdList, DWORD *pdwListNum);
HRESULT ListSet( PTSTR pszList, DWORD dwListNum, SDATA dList);
HRESULT LoadAsync( BSTR bstrUrl, IUnknown* punkCallback );
BOOL LoadDeviceAsync();
HRESULT LoadDirectDraw( LPSTR szDevice );
HRESULT LoadFormResource( OLE_HANDLE hFC, long wRsrcID, IDispatch **ppForm, IDispatch *pDispSink );
HRESULT LoadMenuResource(OLE_HANDLE hFC, long wRsrcID, IDispatch **ppMenu);
LONG LoadPerfCounterTextStrings( LPSTR lpCommandLine, BOOL bQuietModeArg );
BOOL LoadWindowsSettings();
void LogMemUse( void );
void LogProcessCreate ( DWORD dwProcID );
void LogProcessDelete ( DWORD dwProcID );
void LogThreadCreate ( DWORD dwThreadID, DWORD dwProcID );
void LogThreadDelete ( DWORD dwThreadID, DWORD dwProcID );
void LogThreadSwitch ( DWORD dwThreadID, DWORD dwProcID );
BOOL LogV( DWORD dwVerbosity, LPCTSTR szFormat, va_list pArgs );
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
HRESULT Navigate( BSTR URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers );
void NavigateComplete2( IDispatch* pdisp, VARIANT vtURL);
void NavigateError( IDispatch* pDisp, VARIANT* pvtURL, VARIANT* pvtFrame, VARIANT* pvtStatusCode, VARIANT_BOOL* pvbCancel );
HRESULT NavigateToURL(LPWSTR szURL);
HRESULT NewSegment( REFERENCE_TIME tStart, REFERENCE_TIME tStop, double dRate);
void NewWindow2( IDispatch** ppdisp, VARIANT_BOOL* pvbCancel);
HRESULT NextChar( );
LONG NonDelegatingAddRef( );
HRESULT NonDelegatingQueryInterface( REFIID riid, void ** ppv);
LONG NonDelegatingRelease( );
void NotReady(void);
HRESULT Notify( IBaseFilter *pSelf, Quality q);
DWORD NotifyAddrChange( OUT PHANDLE Handle, IN LPOVERLAPPED overlapped );
HRESULT NotifyAllocator( IMemAllocator *pAllocator, BOOL bReadOnly);
void NotifyEndOfStream(void);
HRESULT NotifyEvent( long EventCode, long EventParam1, long EventParam2);
void NotifyFilterState( FILTER_STATE new_state, REFERENCE_TIME tStart = 0 );
HRESULT NotifyGraphIsConnected();
HRESULT NotifyOwnerMessage( long hwnd, long uMsg, long wParam, long lParam);
DWORD NotifyRouteChange( OUT PHANDLE Handle, IN LPOVERLAPPED overlapped);
void NotifySample(void);
void NotifyThread( );
HRESULT NotifyThreadSwitched( IOsAxsThread*pthrd);
HRESULT Num( DWORD *pdwNumCmd);
HRESULT Number([out, retval] long *pVal);
DWORD OEMFindFirstWakeSource(void);
BOOL OEMGetInterrupt(PDEVICE_LOCATION pDevLoc, PDWORD Irq);
void OEMInitPageTable (void);
BOOL OEMIsROM( LPVOID pvAddr, DWORD cbSize);
BOOL OEMKitlIoctl( DWORD code, VOID* pInBuffer, DWORD inSize, VOID* pOutBuffer, DWORD outSize, DWORD* pOutSize );
void OEMNMIHandler (void);
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
HRESULT OnNewProgramChain( IDVDProgramChain* pChain );
HRESULT OnObjectAvailable( REFIID riid, IUnknown* punk );
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
HRESULT OpenKey( const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey );
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
BOOL PageSetupDlg( LPPAGESETUPDLG lppsd);
void PaintWindow( BOOL bErase);
HRESULT ParkSession ( BSTR bstrParkServerURI );
BOOL ParseCommand( LPCTSTR szCmd, LPCTSTR szCmdLine, PFN_FmtPuts pfnFmtPuts, PFN_Gets pfnGets);
HRESULT ParseFromTransitions( const SPPARSEINFO* pParseInfo, ISpPhraseBuilder** ppPhrase );
HRESULT ParseRequest( ISoapReader* pReader, IWSDLPort** ppIWSDLPort, IWSDLOperation** ppIWSDLOperation );
HRESULT PassNotify( Quality q);
HRESULT Pause (void);
HRESULT PerformanceAlignWindow( );
VOID WINAPI Philosopher(LPVOID lpPhilosopherID);
void PinClickHandler(Pin source, PinClickEventArgs args);
HRESULT PlatformId( BSTR* pbstrPlatformId );
HRESULT Play( DWORD dwReserved1, DWORD dwReserved2, DWORD dwFlags );
HRESULT PlaylistCount( long* pNumberEntries );
VOID WINAPI PossiblyEatMessage( HWND hwndDrain, UINT uMsg, WPARAM wParam, LPARAM lParam);
HRESULT PostMessageToApp( long uMsg, long wParam, long lParam );
HRESULT PostMsg( long uMsg, long wParam, long lParam );
HRESULT Power([out, retval] VARIANT_BOOL * pbPower);
void PreparePerformanceData( int trLate, int trFrame);
HRESULT PrepareReceive( IMediaSample *pMediaSample);
void PrepareRender(void);
HRESULT PrepareWindow( );
HRESULT PrevChar( );
void Print(TCHAR *pFormat, ...);
BOOL PrintDlg( LPPRINTDLG lppd);
HRESULT ProbeHandler( const WSD_SOAP_MESSAGE* pSoap, IWSDMessageParameters* pMessageParameters );
void ProcessStartupFolder();
HRESULT ProcessVertices( UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DMobileVertexBuffer* pDestBuffer, DWORD Flags );
void ProgramWindow();
void PropertyChange( BSTR bstrProperty);
void PublicStatMemFunc1(void);
HRESULT PushCommand( DWORD dwCmd, HPACKET hPacket );
HRESULT PutCommonBoolProperties( short pwProps );
int PutProp(void);
int PutPropToo(void);
void PutQueueObject( T object );
HRESULT QueryAccept( const AM_MEDIA_TYPE *pmt);
HRESULT QueryBlanket( IUnknown *pProxy, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTH_IDENTITY_HANDLE* pAuthInfo, DWORD *pCapabilities );
HRESULT QueryDirection( PIN_DIRECTION* pPinDir);
HRESULT QueryFilterInfo( FILTER_INFO *pInfo);
HRESULT QueryFormForNavState( );
HRESULT QueryId( LPWSTR *Id);
HRESULT QueryInternalConnections( IPin **apPin, ULONG *nPin);
HRESULT QueryPhrase( LPTSTR lpszPhrase, DWORD *pdwValue);
HRESULT QueryPinInfo( PIN_INFO *pInfo);
HRESULT QueryPreferredFormat( GUID *pFormat );
HRESULT QueryStateVariable( BSTR bstrVariableName, VARIANT* pvarValue );
HRESULT QuerySupported( REFGUID guidPropSet, DWORD dwPropID, DWORD* pTypeSupport);
HRESULT QueryVendorInfo( LPWSTR *pVendorInfo);
HRESULT QueryWriteSync( );
HRESULT QueueFile( BSTR bstrSource, BSTR bstrDest, VARIANT_BOOL bOverWrite );
HRESULT QueuePackage( BSTR bstrPackageId, BSTR bstrDestPath, VARIANT_BOOL bOverWrite );
void QueueSample( IMediaSample *pSample );
HRESULT QueueTask( ISpTask pTask, void* pvTaskData, HANDLE hCompEvent, DWORD** pdwGroupId, DWORD** pTaskID );
int RFCOMM_EstablishDeviceContext( void* *pUserContext, unsigned char channel, RFCOMM_EVENT_INDICATION* pInd, RFCOMM_CALLBACKS* pCall, RFCOMM_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE *phDeviceContext );
BOOL RT_Bare_GetRealTime (LPSYSTEMTIME lpst);
BOOL RT_Bare_SetRealTime (LPSYSTEMTIME lpst);
BOOL RT_Init_RealTime ( void );
HRESULT RadiansToDegrees ( pPNPOSLLA pLLAPos );
HRESULT ReInviteWithDescription( BSTR offerContentType, BSTR offerDescription );
HRESULT ReInviteWithSessionDescription( BSTR bstrContentType, BSTR bstrSessionDescription, LONG_PTR lCookie );
HRESULT ReadFromStream( IStream* pStream );
HRESULT ReadRTPPacket( IUnknown *pDecoder, const CHAR *szFmtp, BYTE *pbRTPPayload, DWORD dwRTPPayloadSize, RTCRTPHeader *pRTPHeader, BYTE *pbEncodedFrame, DWORD dwEncodedFrameSize, DWORD *pdwFrameStartBitOffset, DWORD *pdwFrameEndBitOffset, BOOL *pfLastPacket );
void Ready(void);
void ReallyFree (void);
HRESULT Receive( IMediaSample *pSample);
HRESULT ReceiveAllocator( IMemAllocator *pAllocator, BOOL bReadOnly );
HRESULT ReceiveCanBlock(void);
HRESULT ReceiveConnection( IPin *pConnector, AM_MEDIA_TYPE *pmt);
HRESULT ReceiveMsg( long uMsg, long wParam, long lParam );
HRESULT ReceiveMultiple( IMediaSample **pSamples, long nSamples, long * nSamplesProcessed);
HRESULT RecognizeStream( REFGUID rguidFmtId, const WAVEFORMATEX* pWaveFormatEx, HANDLE hRequestSync, HANDLE hDataAvailable, HANDLE hExit, BOOL fNewAudioStream, BOOL fRealTimeAudio, ISpObjectToken* pAudioObjectToken );
HRESULT ReconnectPin( IPin *pPin, AM_MEDIA_TYPE const *pmt);
void RecordFrameLateness( int trLate, int trFrame);
HRESULT Redirect( RTC_SESSION_TYPE enType, BSTR bstrLocalPhoneURI, IRTCProfile* pProfile, long lFlags );
HRESULT Redraw( void );
HRESULT Refer( BSTR bstrReferToURI, BSTR bstrReferCookie );
HRESULT ReferToSessionInfo( [out] BSTR* pbstrReferToCallID, [out] BSTR* pbstrReferToFromTag, [out] BSTR* pbstrReferToToTag );
HRESULT ReferToURI( [out] BSTR* pbstrReferredToURI );
HRESULT ReferredByURI( [out] BSTR* pbstrReferredByURI );
void RefreshCache();
LONG RegQueryInfoKey ( HKEY hKey, LPWSTR lpClass, LPDWORD lpcbClass, LPDWORD lpReserved, LPDWORDlpcSubKeys, LPDWORD lpcbMaxSubKeyLen, LPDWORD lpcbMaxClassLen, LPDWORD lpcValues, LPDWORD lpcbMaxValueNameLen, LPDWORD lpcbMaxValueLen, LPDWORD lpcbSecurityDescriptor, PFILETIME lpftLastWriteTime );
HRESULT Register( DWORD grfFlags, IUnknown *punkObject, IMoniker *pmkObjectName, DWORD *pdwRegister );
HRESULT RegisterBrowserEventSink();
HRESULT RegisterClassImplCategories( REFCLSID rclsid, ULONG cCategories, CATID rgcatid[] );
HRESULT RegisterClassReqCategories( REFCLSID rclsid, ULONG cCategories, CATID rgcatid[] );
HRESULT RegisterInterfaceInGlobal( IUnknown* pUnk, REFIID riid, DWORD* pdwCookie );
HRESULT RegisterMediaTime( IMediaSample *pMediaSample );
HRESULT RegisterNotificationSink( IWSDiscoveryPublisherNotify* pSink );
HRESULT RegisterObjectBound( IUnknown* punk );
HRESULT RegisterObjectParam( LPOLESTR pszKey, IUnknown* punk );
void RegisterPerfId( );
HRESULT RegisterScopeMatchingRule( IWSDScopeMatchingRule* pScopeMatchingRule );
HRESULT RegisterStartedApplication( OLE_HANDLE hFC BSTR bstrAppName LONG AppMsgID LONG Flags );
HRESULT RegisterUnsolicitedNotification ( BSTR bstrAcceptedContent, BSTR bstrEventPackage, IRTCUnsolicitedSubscription** ppSubscription );
HRESULT ReleaseBuffer( IMediaSample *pSample);
void ReleaseDirectDraw(void);
HRESULT ReleaseMapping( BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT ReleaseMappingEx( long lTransport, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT RemoteDbgDirectory(BSTR* pbstrRemoteDbgDirectory );
void RemoveAll( );
HRESULT RemoveAt( long index );
HRESULT RemoveAtIndex( long index );
HRESULT RemoveByID( short wID );
HRESULT RemovePin( CSourceStream *pStream );
HRESULT RemoveSIFile( DWORD dwID, DWORD dwFlag );
HRESULT Render( IMediaSample *pMediaSample);
HRESULT RenderStream( const GUID* pCategory, const GUID* pType, IUnknown* pSource, IBaseFilter* pIntermediate, IBaseFilter* pSink );
HRESULT ReplaceSession ( BSTR IRTCSession* pReplacedSession );
void Reply( DWORD dw);
HRESULT Request( IMediaSample* pSample, DWORD dwUser );
HRESULT RequestLicKey( DWORD dwReserved, BSTR *pbstrKey );
HRESULT ReregisterDevice( BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, BSTR bstrProgIDDeviceControlClass, BSTR bstrInitString, BSTR bstrContainerId, BSTR bstrResourcePath, LONG nLifeTime );
HRESULT ReregisterRunningDevice( BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, IUnknown* punkDeviceControl, BSTR bstrInitString, BSTR bstrResourcePath, LONG nLifeTime );
HRESULT ResetEndOfStream(void);
void ResetEndOfStreamTimer(void);
void ResetFormatBuffer( );
HRESULT ResetMediaTime(void);
HRESULT ResetStreamingTimes(void);
HRESULT ResetVirtualMachine( [in] GUID* virtualMachineID, [in] boolean hardReset );
HRESULT ResolveHandler( const WSD_SOAP_MESSAGE* pSoap, IWSDMessageParameters* pMessageParameters );
HRESULT RestoreAppZOrder( LONG ZOrder );
HRESULT RestoreVirtualMachine( [in] GUID* virtualMachineID );
HRESULT RestoreZOrder( LONG ZOrder );
HRESULT Restrict( BSTR pwszRestriction, IPOutlookItemCollection ** ppolItems );
HRESULT Resubscribe( BSTR bstrContentType, BSTR bstrBody );
HRESULT Retrieve( BSTR bstrAddress, BSTR bstrName, BSTR bstrReferredByURI, BSTR bstrRetrieveCallID, BSTR bstrRetrieveFromTag, BSTR bstrRetrieveToTag, VARIANT_BOOL fEarlyOnly );
void Reverse( );
HRESULT RevokeObjectBound( IUnknown* punk );
VOID STDAPI SHGetFolderPath( HWND hwndOwner, int nFolder, HANDLE hToken, DWORD dwReserved, LPTSTR pszPath);
BOOL SHLoadContextMenuExtensions( IUnknown* punkOwner, LPCTSTR pszContext, LPCTSTR pszClass, HMENU hmenu, UINT idCmdFirst, UINT idCmdLast, HANDLE* phCMExtensions );
HRESULT SRModeGet( GUID *pgMode);
HRESULT SRModeSet( GUID gMode);
LONG STCalcDeltaUS ( LARGE_INTEGER liStart, LARGE_INTEGER liCurrent );
VOID WINAPI STThreadHigh ( LPVOID lpvParam );
BOOL ScheduleSample( IMediaSample *pMediaSample);
HRESULT ScrollIntoView ( DWORD dwCookie );
BOOL SecondaryCompareFunc();
void SendAnyway( );
HRESULT SendEndOfStream(void);
HRESULT SendInfo( BSTR bstrInfoHeader, BSTR bstrInfo, LONG_PTR lCookie );
HRESULT SendMessageStatus( RTC_MESSAGING_USER_STATUS enUserStatus, LONG_PTR lCookie );
void SendNotifyWindow( IPin *pPin, HWND hwnd);
HRESULT SendOnVirtualChannel( BSTR ChanName, BSTR ChanData );
HRESULT SendQuality( REFERENCE_TIME trLate, REFERENCE_TIME trRealStream);
void SendRepaint(void);
HRESULT SendResponse( void* pBody, WSD_OPERATION* pOperation, IWSDMessageParameters* pMessageParameters );
HRESULT SendTwoWayRequestAsync( const void* pBody, const WSD_OPERATION* pOperation, IUnknown* pAsyncState, IWSDAsyncCallback* pCallback, IWSDAsyncResult** pResult );
VOID WINAPI ServerThread (PVOID pArg);
void Set(void);
void SetAbortSignal( BOOL bAbort);
HRESULT SetActualDataLength( long lLen );
HRESULT SetAddInInfo( longnInstanceHandle,IDispatch* pCmdDispatch,longnIDBitmapResourceMedium,longnIDBitmapResourceLarge,longdwCookie);
HRESULT SetAdditionalHeaderValues( BSTR bstrHeaderValuePairs );
BOOL SetAllocatedSize( HPACKET hPacket, DWORD dwBytesRequested, DWORD *pBytesAllocated );
HRESULT SetAppAlertState( OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, LONG AlertAction, LONG AlertVal );
HRESULT SetBaseStream( ISpStreamFormat* pStream, BOOL fSetFormatToBaseStreamFormat, BOOL fWriteToBaseStream );
HRESULT SetBlanket( IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, OLECHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, RPC_AUTH_IDENTITY_HANDLE pAuthInfo, DWORD dwCapabilities );
HRESULT SetBounds( long lxLeft, long lyTop, long ldxWidth, long ldyHeight );
HRESULT SetBufferingDepth( const REFERENCE_TIME* ptStop );
HRESULT SetCallback( IWSDAsyncCallback* pCallback, IUnknown* pAsyncState );
HRESULT SetClientSite( IOleClientSite *pClientSite);
void SetColorKey ( DWORD dwColorKey );
void SetColorKeyHigh ( DWORD dwColorKey );
void SetColorKeyLow ( DWORD dwColorKey );
void SetColorKeyMask ( DWORD dwColorKeyMask );
HRESULT SetColumns( BSTR Columns );
void SetControlVideoPin( CBasePin *pPin);
void SetControlWindowPin( CBasePin *pPin);
void SetCursorPosition( UINT XScreenSpace, UINT YScreenSpace, DWORD Flags );
HRESULT SetCursorProperties( UINT XHotSpot, UINT YHotSpot, IDirect3DSurface8* pCursorBitmap );
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
HRESULT SetErrorInfo( DWORD dwReserved, IErrorInfo *perrinfo );
HRESULT SetEventingStatusCallback( IWSDEventingStatus* pStatus );
void SetFOURCC( const GUID * pguid );
void SetFilterGraph( IMediaEventSink *pSink );
HRESULT SetFocusNext( void );
HRESULT SetFocusPrev( void );
HRESULT SetFormat( LPWAVEFORMATEX pwfxToSet );
void SetFormatType( const GUID * pformattype );
BOOL SetFrameLength( USB_HANDLE hDevice, HANDLE hEvent, USHORT uFrameLength );
HRESULT SetFrequency( DWORD dwFrequency );
HRESULT SetHost(IXRVisualHost* pHost);
HRESULT SetIndices( IDirect3DMobileIndexBuffer* pIndexData );
HRESULT SetInput( IUnknown* pUnkInput, BOOL fAllowFormatChanges );
HRESULT SetItem( DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT SetLocalAddress( IWSDAddress* pAddress );
HRESULT SetLocalPresenceInfo( RTC_PRESENCE_STATUS enStatus, BSTR bstrNotes );
HRESULT SetMediaType( const CMediaType *pmt);
HRESULT SetMode( DWORD dwMode );
HRESULT SetMops( unsigned int index, BSTR bstrMops);
HRESULT SetNotifyCallbackInterface( ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam );
HRESULT SetNotifySink( ISpNotifySink* pNotifySink );
HRESULT SetObject( REFGUID guidServiceId, IUnknown* pUnkObject );
HRESULT SetObjectToken( ISpObjectToken* pToken );
HRESULT SetObjects( ULONG cObjects, LPUNKNOWN* ppUnk );
HRESULT SetOutput( IUnknown* pUnkOutput, BOOL fAllowFormatChanges );
HRESULT SetPageSite( IPropertyPageSite* pPageSite );
HRESULT SetPosition( DWORD dwNewPosition );
HRESULT SetPreroll( BOOL bIsPreroll );
HRESULT SetPresenceData( BSTR bstrNamespace, BSTR bstrData );
HRESULT SetProperties( ALLOCATOR_PROPERTIES *pRequest, ALLOCATOR_PROPERTIES *pActual);
HRESULT SetQuality( DWORD dwQuality );
HRESULT SetRate( double dRate );
HRESULT SetRecoProfile( ISpObjectToken* pToken );
HRESULT SetRecognizer( ISpObjectToken* pEngineToken );
HRESULT SetRecordingPath( LPCOLESTR pszPath);
HRESULT SetRemoteAddress( IWSDAddress* pAddress );
HRESULT SetRenderTarget( IDirect3DMobileSurface* pRenderTarget, IDirect3DMobileSurface* pNewZStencil );
void SetRepaintStatus( BOOL bRepaint);
void SetSampleSize( ULONG sz );
HRESULT SetSaveObjects( IStream* pStream, ISpErrorLog* pErrorLog );
HRESULT SetSink( IQualityControl *piqc);
HRESULT SetSite( ISpSREngineSite* pSite );
HRESULT SetSourcePosition( long Left, long Top, long Width, long Height);
HRESULT SetStreamSource( UINT StreamNumber, IDirect3DMobileVertexBuffer* pStreamData, UINT Stride );
void SetSubtype( const GUID * psubtype );
HRESULT SetSyncPoint( BOOL bIsSyncPoint );
HRESULT SetSyncSource ( IReferenceClock *pClock);
void SetTemporalCompression( BOOL bCompressed );
HRESULT SetTexture( DWORD Stage, IDirect3DMobileBaseTexture* pTexture );
HRESULT SetTime( REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd );
HRESULT SetTimeDelta( const REFERENCE_TIME& TimeDelta);
HRESULT SetTimeFormat( const GUID *pFormat );
HRESULT SetTunePolicy( STRMBUF_PLAYBACK_TUNE_POLICY eStrmbufPlaybackTunePolicy);
void SetType( const GUID * ptype );
void SetVariableSize( );
HRESULT SetVertexShader( DWORD Handle );
HRESULT SetVirtualChannelOptions( BSTR chanName, LONG chanOptions );
HRESULT SetVirtualMachineName( [in] GUID* virtualMachineID, [in] LPOLESTR virtualMachineName );
HRESULT SetVoice( ISpVoice* pVoice, BOOL fAllowFormatChanges );
HRESULT SetVolumePan( PDSVOLUMEPAN pDsVolumePan );
void SetWaiting( );
HRESULT SetWindowForeground( long Focus);
HRESULT SetWindowPosition( long Left, long Top, long Width, long Height);
DWORD SetupControl ( void );
DWORD SetupInterrupt ( void );
DWORD SetupMemory ( void );
HRESULT ShouldDrawSampleNow( IMediaSample *pMediaSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime);
BOOL ShouldSkipFrame( IMediaSample *pIn );
void Show();
HRESULT ShutdownVirtualMachine( [in] GUID* virtualMachineID, [in] boolean saveMachine );
void SignalTimerFired(void);
int SizeMax(void);
BOOL SnmpExtensionInit( DWORD dwUptimeReference, Handle dwUptimeReference, AsnObjectIdentifier pFirstSupportedRegion );
HRESULT SoapAttribute( BSTR name, BSTR ns_uri, BSTR value, BSTR prefix );
HRESULT SoapDefaultNamespace( BSTR ns_uri );
HRESULT SoapInvoke( VARIANT varInput, IUnknown* pOutputStream, BSTR bstrSoapAction );
HRESULT SoapNamespace( BSTR prefix, BSTR ns_uri );
HRESULT Sort( BSTR pwszProperty, VARIANT_BOOL fDescending );
HRESULT SourceThreadCanWait( BOOL bCanWait);
HRESULT SpCreateNewToken( const WCHAR* pszCategoryId, const WCHAR* pszTokenKeyName, ISpObjectToken** ppToken );
HRESULT SpCreateNewTokenEx( const WCHAR* pszCategoryId, const WCHAR* pszTokenKeyName, const CLSID* pclsid, const WCHAR* pszLangIndependentName, LANGID langid, const WCHAR* pszLangDependentName, ISpObjectToken** ppToken, ISpDataKey** ppDataKeyAttribs );
HRESULT SpCreatePhoneConverter( LANGID* langid, const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, ISpPhoneConverter** ppPhoneConverter );
HRESULT SpFindBestToken( const WCHAR* pszCategoryId, const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, ISpObjectToken** ppObjectToken );
HRESULT SpSetCommonTokenData( ISpObjectToken* pToken, const CLSID* pclsid, const WCHAR* pszLangIndependentName, LANGID langid, const WCHAR* pszLangDependentName, ISpDataKey** ppDataKeyAttribs );
HRESULT SpSetDefaultTokenForCategoryId( const WCHAR* pszCategoryId, ISpObjectToken* pToken );
HRESULT Speak( DWORD dwSpeakFlags, REFGUID rguidFormatId, const WaveFormatEx* pWaveFormatEx, const SPVTEXTFRAG* pTextFragList, ISpTTSEngineSite* pOutputSite );
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
HRESULT StartListenAddressAndPort( BSTR bstrInternalLocalAddress, long lInternalLocalPort );
HRESULT StartStreaming(void);
HRESULT StartupServer( BSTR* pbstrStartupServerId );
HRESULT StatusText( BSTR* pbstrText );
void StatusTextChange( BSTR bstrText);
HRESULT Stop( );
HRESULT StopAll( void );
HRESULT StopCall ( hPNDevice hPN, PNData_t Call );
HRESULT StopCommandHandler();
HRESULT StopListenAddressAndPort( BSTR bstrInternalLocalAddress, long lInternalLocalPort );
HRESULT StopSpeaking(void);
HRESULT StopStreaming(void);
HRESULT StoreUsed( IASHTMLControl *pControl BSTR bstrTarget int iLoop );
HRESULT StreamTime( CRefTime& rtStream);
HRESULT StretchRect( IDirect3DMobileSurface* pSourceSurface, CONST RECT* pSourceRect, IDirect3DMobileSurface* pDestSurface, CONST RECT* pDestRect, D3DMTEXTUREFILTERTYPE Filter );
HRESULT SubscribeToOperation( const WSD_OPERATION* pOperation, IUnknown* pUnknown, const WSDXML_ELEMENT* pAny, WSDXML_ELEMENT** ppAny );
void Swap ( LPDDRAWI_DDRAWSURFACE_LCL s1, LPDDRAWI_DDRAWSURFACE_LCL s2 );
HRESULT SwitchExecutionTo( IOsAxsProcess** ppiOldProc, IOsAxsThread**ppiOldThrd, IOsAxsProcess** ppiNewProc);
HRESULT SyncReadAligned( IMediaSample *pSample);
HRESULT SysFreeString( BSTR bstr );
HRESULT SysReAllocString( BSTR FAR *pbstr, OLECHAR FAR *sz );
HRESULT SysReAllocStringLen( BSTR FAR *pbstr, OLECHAR FAR *pch, unsigned int cch );
HRESULT SysStringByteLen( BSTR bstr );
HRESULT SysStringLen( BSTR bstr );
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
void TitleChange( BSTR bstrTitle);
BOOL TouchPanelEnable(PFN_TOUCH_PANEL_CALLBACK pfnCallback);
BOOL TouchPanelInitializeCursor( PFN_DISP_DRIVER_MOVE_CURSOR);
HRESULT Train( PCWSTR lpPhrases, DWORD dwSize, PCWSTR lpCaption, DWORD dwSizeCap, DWORD hHandle, DWORD dwFlags);
HRESULT Transfer ( IfmManage *pFrmMgr, WORD wNum, CEOID *rgOID);
BOOL TranslateStringDescr( LPCUSB_STRING_DESCRIPTOR lpStringDescr, LPWSTR szString, DWORD cchStringLength );
HRESULT Transport( BSTR* pbstrTransportId );
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
HRESULT TypeId( BSTR* pbstrTypeId );
HRESULT UnInitASFormsManager( void );
HRESULT UnInitializeService();
DWORD UnLoad( DWORD dwType, DWORD dwFlags );
BOOL UnRegisterClientSettings( LPCWSTR szUniqueDriverId, LPCWSTR szReserved, LPCUSB_DRIVER_SETTINGS lpDriverSettings );
BOOL UnRegisterNotificationRoutine( USB_HANDLE hDevice, LPDEVICE_NOTIFY_ROUTINE lpNotifyRoutine, LPVOID lpvNotifyParameter );
HRESULT UnRegisterNotificationSink( IWSDiscoveryPublisherNotify* pSink );
HRESULT UnRegisterScopeMatchingRule( IWSDScopeMatchingRule* pScopeMatchingRule );
HRESULT UniversalSDK(BSTR* pbstrUniversalSDKGuid);
LONG UnloadPerfCounterTextStrings( LPSTR lpCommandLine, BOOL bQuietModeArg );
HRESULT Unregister( );
HRESULT UpdateRemoteAddress( BSTR bstrRemoteAddress, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT UpdateRemoteAddressEx( BSTR bstrRemoteAddress, long lRemotePort, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT UpdateRemoteAddressEx2( BSTR bstrRemoteAddress, long lRemotePort, long lTransport, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort );
HRESULT UpdateTexture( IDirect3DMobileBaseTexture* pSourceTexture, IDirect3DMobileBaseTexture* pDestinationTexture );
HRESULT VIOInitialize (LPVOID pvReserved);
HRESULT VIORegisterDevice( REFCLSID rclsid, BOOL bRegister);
HRESULT VIORegisterMinidriver( REFCLSID rclsidDevice, REFCLSID rclsidMinidriver, BOOL bRegister );
HRESULT VIORegisterMinidriverManager( REFCLSID rclsidManager, BOOL bRegister );
HRESULT VScroll ( WPARAM wp );
HRESULT VarBoolFromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] BOOL *pboolOut );
HRESULT VarBstrFromBool( [in] BOOL boolIn, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarBstrFromCy( [in] CURRENCY cyIn, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarBstrFromDate( [in] DATE dateIn, [in] LCID lcid, in] ULONG dwFlags, out] BSTR pbstrOut );
HRESULT VarBstrFromDec( [in] DECIMAL *pdecIn, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarBstrFromDisp( [in] IDispatch *pdispln, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarBstrFromI2( [in] short iVal, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarBstrFromI4( [in] long lIn, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarBstrFromR4( [in] float fltIn, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarBstrFromR8( [in] double dblIn, [in] LCID lcid, [in] ULONG dwFlags, [out] BSTR pbstrOut );
HRESULT VarCyFromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] CURRENCY *pcyOut );
HRESULT VarDateFromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] DATE *pdateOut );
HRESULT VarDecFromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] DECIMAL *pdecOut );
HRESULT VarI2FromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] short *psOut );
HRESULT VarI4FromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] long *plOut );
HRESULT VarR4FromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] float *pfltOut );
HRESULT VarR8FromDips( [in] IDispatch *pdispIn, [in] LCID lcid, [out] double *pdblOut );
HRESULT VarUI1FromDisp( [in] IDispatch *pdispIn, [in] LCID lcid, [out] BYTE *pbOut );
HRESULT VectorFromBstr( BSTR bstr, SAFEARRAY FAR *FAR *ppsa );
HRESULT VelocityToBearing( pPNVELBEAR pBearVel, const pPNVELENU pENUVel );
HRESULT VerifyVideoFile(WCHAR *filename);
HRESULT Version( BSTR* out_pbstrVersion);
void WSASetLastError ( int iError );
HRESULT WSDCreateDeviceHost( const WCHAR* pszLocalId, IWSDXMLContext* pContext, IWSDDeviceHost** ppDeviceHost );
HRESULT WSDCreateDeviceHostAdvanced( const WCHAR* pszLocalId, IWSDXMLContext* pContext, IWSDAddress** ppHostAddresses, DWORD dwHostAddressCount, IWSDDeviceHost** ppDeviceHost );
HRESULT WSDCreateDeviceProxy( const WCHAR* pszDeviceId, IWSDAddress* pDeviceAddress, const WCHAR* pszLocalId, IWSDXMLContext* pContext, IWSDDeviceProxy** ppDeviceProxy );
HRESULT WSDCreateDiscoveryProvider( IWSDXMLContext* pContext, IWSDiscoveryProvider** ppProvider );
HRESULT WSDCreateDiscoveryPublisher( IWSDXMLContext* pContext, IWSDiscoveryPublisher** ppPublisher );
HRESULT WSDCreateHttpAddress( IWSDHttpAddress** ppAddress );
HRESULT WSDCreateHttpMessageParameters( IWSDHttpMessageParameters** ppTxParams );
HRESULT WSDCreateOutboundAttachment ( IWSDOutboundAttachment** attachmentOut );
VOID WINAPI WSDCreateUdpAddress( IWSDUdpAddress** ppAddress );
VOID WINAPI WSDCreateUdpMessageParameters( IWSDUdpMessageParameters** ppTxParams );
HRESULT WSDGenerateFault( const LPCWSTR* pszCode, const LPCWSTR* pszSubCode, const LPCWSTR* pszReason, const LPCWSTR* pszDetail, IWSDXMLContext* pContext, WSD_SOAP_FAULT** ppFault );
void WSDRegisterNamespaces( IWSDXMLContext* pContext );
VOID WINAPI WSDXMLCreateContext( IWSDXMLContext** ppContext );
DWORD WZCQueryLatencySensitiveMode( LPWSTR pSrvAddr, PWSTR wszInterfaceGuid, BOOL *pbEnable, ULONG *pPacketLatencyMs );
DWORD WZCSetLatencySensitiveMode( LPWSTR pSrvAddr, PWSTR wszInterfaceGuid, BOOL bEnable, ULONG PacketLatencyMs );
BOOL Wait( DWORD dwTimeout);
HRESULT WaitForCompletion( long msTimeout, long *pEvCode);
HRESULT WaitForNext( DWORD dwTimeout, IMediaSample **ppSample, DWORD *pdwUser );
HRESULT WaitForNotifyEvent( DWORD dwMilliseconds );
void WaitForReceiveToComplete( );
HRESULT WaitForRenderTime(void);
HRESULT WaitForSync( DWORD dwFlags, DWORD dwLine, DWORD dwTimeout);
HRESULT WaitForThreadDone( BOOL fForceStop, HRESULT* phrThreadResult, ULONG msTimeOut );
BOOL WaitForThreadExit( LPDWORD lpdwExitCode );
BOOL WaitMsg( DWORD dwTimeOut);
HRESULT WaitOnCommandHandler();
void WhereProhibited( void );
HRESULT WintmPNTM ( PNTM pNTM, const SYSTEMTIME pTime, );
VOID STDAPI WriteBSTR( BSTR *pstrDest, LPCWSTR szSrc);
VOID STDAPI WriteInt( IStream *pIStream, int n);
HRESULT WriteRTPPayloadHeader( IUnknown *pEncoder, const CHAR *szFmtp, PBYTE pbEncodedFrame, DWORD dwEncodedSize, DWORD *pdwFrameStartBitOffset, DWORD *pdwFrameEndBitOffset, BOOL fKeyFrame, BYTE *pbPayloadHeader, DWORD *pdwPayloadHeaderLength, BOOL *pfLastPacket );
int WstrToInt( LPCWSTR wstrSrc);
void _Alert( BSTR string );
void _Exec( BSTR FileName, BSTR CommandLine, short Flag );
void _NewScriptThread( BSTR FileName, BSTR EntryFunction );
void _OutputDebugString( BSTR string );
void _ReleaseThenLaunch( long msDelay, BSTR FileName, BSTR EntryFunction );
void _Sleep( long msSleep );
void _WriteLocalLog( BSTR string );
void __asm(const char *, ...);
void _asm (char*,...);
int _controlfp_s (__out_opt unsigned int*_CurrentState, __in unsigned int _NewValue, __in unsigned int _Mask);
int _isnanf (float);
int _snprintf( char *buffer, size_tcount, const char *format [, argument] ... );
int _snwprintf( wchar_t *buffer, size_tcount, const wchar_t *format [, argument] ... );
int _vsnprintf(char *buffer, size_t count, const char * format, va_list argptr );
int _vsnwprintf( wchar_t *buffer, size_tcount, constwchar_t *format, va_listargptr);
UINT accessor_function ( UINT actID, AsnAny *aryObject, UINT *pErrIndex );
void add64_64_64 (const FILETIME *lpnum1, LPFILETIME lpnum2, LPFILETIME lpres);
int asm_int(const char *);
int bthlink_ConnectionCompleteEvent( void *pUserContext, void *pCallContext, unsigned char status, unsigned short connection_handle, BD_ADDR *pba, unsigned char link_type, unsigned char encryption_mode);
int bthlink_CreateConnection_Out( void *pCallContext, unsigned char status);
int btutil_UnScheduleEvent (SVSCookie ulCookie);
UINT fn_somefunction ( UINT actionId, AsnAny *objectArray, UINT *errorIndex );
HRESULT get_AcceptedContentType( BSTR* pbstrAcceptedContentType );
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
HRESULT get_AuthorName( BSTR* pbstrAuthorName );
HRESULT get_AutoCommit( BOOL *pfAutoCommit, long *pxSrc, long *pySrc );
HRESULT get_AutoForwardURI( BSTR* pbstrAutoForward );
HRESULT get_AutoShow( long *AutoShow);
HRESULT get_AvgFrameRate( int *piAvgFrameRate);
HRESULT get_AvgSyncOffset( int *piAvg);
HRESULT get_AvgTimePerFrame( REFTIME *pAvgTimePerFrame);
HRESULT get_AxisColor( OLE_COLOR *pclr );
HRESULT get_BackColor( OLE_COLOR *pclr );
HRESULT get_BackGroundBrush( OLE_HANDLE *phBrush );
HRESULT get_BackgroundPalette( long *pBackgroundPalette);
HRESULT get_BaseURL( BSTR* pbstrBaseURL );
HRESULT get_Bias ([out] long *plBias);
HRESULT get_BinaryPassword( BSTR* pBinaryPassword );
HRESULT get_BinarySalt( BSTR* pSalt );
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
HRESULT get_ClientCurVer( BSTR* pbstrCurVer );
HRESULT get_ClientData( BSTR* pbstrData );
HRESULT get_ClientMinVer( BSTR* pbstrMinVer );
HRESULT get_ClientName( BSTR* pbstrName );
HRESULT get_ClientProperty( BSTR PropertyName, VARIANT* pPropertyValue );
HRESULT get_ClientUpdateURI( BSTR* pbstrUpdateURI );
HRESULT get_ClockFormat( BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags );
HRESULT get_Color( int nColorIndex, OLE_COLOR *pclr );
HRESULT get_CommandPrompt( BSTR *pbstrCommandPrompt );
HRESULT get_CompanyName ([out] BSTR *pbstrCompanyName);
HRESULT get_Complete ([out] VARIANT_BOOL *pbComplete);
HRESULT get_ConnectingText( BSTR* pConnectingText );
HRESULT get_ConnectorProperty( BSTR PropertyName, VARIANT* pPropertyValue );
HRESULT get_Copyright( BSTR* pbstrCopyright );
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
HRESULT get_Data( BSTR* pbstrData );
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
HRESULT get_Description( BSTR* pbstrDescription );
HRESULT get_DestinationHeight( long *pDestinationHeight);
HRESULT get_DestinationLeft( long *pDestinationLeft);
HRESULT get_DestinationTop( long *pDestinationTop);
HRESULT get_DestinationWidth( long *pDestinationWidth);
HRESULT get_DevSyncOffset( int *piDev);
HRESULT get_DeviceID( BSTR* pbstrDeviceID);
HRESULT get_DisconnectedText( BSTR* DisconnectedText );
HRESULT get_Domain( BSTR* pDomain );
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
HRESULT get_FormatName( BSTR* pbstrFormatName );
HRESULT get_ForwardingURI( BSTR* pbstrForwardingURI );
HRESULT get_FramesDrawn( int *pcFramesDrawn);
HRESULT get_FramesDroppedInRenderer( int *pcFramesDropped);
HRESULT get_FriendlyName( BSTR* pbstr );
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
HRESULT get_ID( BSTR*out_pbstrID);
HRESULT get_Icon( OLE_HANDLE *phIcon );
HRESULT get_Id( BSTR* pbstrId );
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
HRESULT get_Info( BSTR* pbstrInfo );
HRESULT get_InfoHeader( BSTR* pbstrInfoHeader );
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
HRESULT get_Key( BSTR* pbstrKey );
HRESULT get_Label( BSTR* pbstrLabel );
HRESULT get_LabelBackColor( OLE_COLOR *pclr );
HRESULT get_LabelForeColor( OLE_COLOR *pclr );
HRESULT get_LabelFormat( BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags );
HRESULT get_LabelHeight( long *plHeight );
HRESULT get_LastName ([out] BSTR *pbstrLastName);
HRESULT get_Latitude ([out] long *plLatitude);
HRESULT get_Left( long *pLeft);
HRESULT get_LocalUserName( BSTR* pbstrUserName );
HRESULT get_LocalUserURI( BSTR* pbstrUserURI );
HRESULT get_Location ([out] BSTR *pbstrLocation);
HRESULT get_LocationBaseURL( BSTR* bstrBaseLocationURL);
HRESULT get_LogoIconURL( BSTR* pbstrLogoURL );
HRESULT get_LogoURL( BSTR* pbstrLogoURL );
HRESULT get_Longitude ([out] long *plLongitude);
HRESULT get_ManufacturerName( BSTR* pbstr );
HRESULT get_ManufacturerURL( BSTR* pbstr );
HRESULT get_MaxChars( short *pwcchMax );
HRESULT get_MaxTitleWidth( long *plMaxTitleWidth);
HRESULT get_MeetingStatus ([out] long *plMeetingStatus);
HRESULT get_Menu( IDispatch **ppdispMenu );
HRESULT get_MenuLabel( IDispatch **ppdispLabel );
HRESULT get_MenuTitlebar( IASTitlebar **ppTitlebar );
HRESULT get_MenuVisible( BOOL *pfVisible );
HRESULT get_MenuWrap( BOOL *pfWrap );
HRESULT get_Message( BSTR* pbstrMessage );
HRESULT get_MessageDrain( OAHWND *Drain);
HRESULT get_MessageHeader( BSTR* pbstrMessageHeader );
HRESULT get_MiddleName ([out] BSTR *pbstrMiddleName);
HRESULT get_Mirrored( BOOL *pfMirrored );
HRESULT get_MobileTelephoneNumber ([out] BSTR *pbstrMobileTelephoneNumber);
HRESULT get_ModelName( BSTR* pbstr );
HRESULT get_ModelNumber( BSTR* pbstr );
HRESULT get_ModelURL( BSTR* pbstr );
HRESULT get_MonthOfYear ([out] long *plMonthOfYear);
HRESULT get_MoreInfoBannerImage( BSTR* pbstrMoreInfoBannerImage );
HRESULT get_MoreInfoBannerURL( BSTR* pbstrMoreInfoBannerURL );
HRESULT get_MoreInfoText( BSTR* pbstrMoreInfoText );
HRESULT get_MoreInfoURL( BSTR* pbstrMoreInfoURL );
HRESULT get_MustUnderstandHeaderEntries( IXMLDOMNodeList** ppNodeList );
HRESULT get_MyServer( BSTR* pbstrServer );
HRESULT get_MyURI( BSTR* pbstrURI );
HRESULT get_Name ([out] BSTR *pbstrName);
HRESULT get_NaturalSize( long *plWidth, long *plHeight);
HRESULT get_NavArrows ( IASUserNavArrows **ppNavArrows );
HRESULT get_NavState( long *plNavState );
HRESULT get_NewEnum( IUnknown**pVal);
HRESULT get_NoEndDate ([out] VARIANT_BOOL *pbNoEndDate);
HRESULT get_NonFocusImageColor( OLE_COLOR *pclr, BOOL *pfSet );
HRESULT get_Notes( BSTR* pbstrNotes );
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
HRESULT get_PathName( BSTR* pbstrPathName );
HRESULT get_PatternEndDate ([out] DATE *pdaPatternEndDate);
HRESULT get_PatternStartDate ([out] DATE *pdaPatternStartDate);
HRESULT get_PortablePassword( BSTR* pPortablePass );
HRESULT get_PortableSalt( BSTR* pPortableSalt );
HRESULT get_PreferredAudioDevice( RTC_AUDIO_DEVICE enDevice, BSTR* pbstrDeviceName );
HRESULT get_PreferredVideoDevice( BSTR* pbstrDeviceName );
HRESULT get_PrerollTime( REFTIME *pllTime );
HRESULT get_PresenceProperty( RTC_PRESENCE_PROPERTY enProperty, BSTR* pbstrProperty );
HRESULT get_PresentationURL( BSTR* pbstr );
HRESULT get_PresentityURI( BSTR* pbstrPresentityURI );
HRESULT get_Property( BSTR pPropertyName, VARIANT* pPropertyValue );
HRESULT get_ProvideCommandDataSink( IASProvidePowerListBoxCommandData **ppSink );
HRESULT get_ProviderData( BSTR* pbstrData );
HRESULT get_ProviderName( BSTR* pbstrName );
HRESULT get_ProviderURI( RTC_PROVIDER_URI enURI, BSTR* pbstrURI );
HRESULT get_QueueGuid( BSTR* pbstrGuidQueue );
HRESULT get_RPCParameter( BSTR LocalName, BSTR NamespaceURI, IXMLDOMElement** ppElement );
HRESULT get_RPCResult( IXMLDOMElement** ppElement );
HRESULT get_RPCStruct( IXMLDOMElement** ppElement );
HRESULT get_RadioTelephoneNumber ([out] BSTR *pbstrRadioTelephoneNumber);
HRESULT get_RangeColor( long lRangeIndex, OLE_COLOR *pclr );
HRESULT get_RangeCount( long *plCount );
HRESULT get_RangeValue( long lRangeIndex, long *plRangeValue );
HRESULT get_Rate( double *pdRate );
HRESULT get_Rating( BSTR* pbstrRating );
HRESULT get_RdpdrClipCleanTempDirString( BSTR *clipCleanTempDirString );
HRESULT get_RdpdrClipPasteInfoString( BSTR *clipPasteInfoString );
HRESULT get_RdpdrLocalPrintingDocName( BSTR *pLocalPrintingDocName );
HRESULT get_ReadOnly( BOOL *pfReadOnly );
HRESULT get_Realm( BSTR* pbstrRealm );
HRESULT get_Recipients ([out] Irecipients **ppRecipients);
HRESULT get_RecurrenceType ([out] long *plRecurrenceType);
HRESULT get_RedirectDrives( VARIANT_BOOL *pRedirectDrives );
HRESULT get_RedirectedUserName( BSTR* pbstrUserName );
HRESULT get_RedirectedUserURI( BSTR* pbstrUserURI );
HRESULT get_ReferCookie( BSTR* pbstrReferCookie );
HRESULT get_ReferToURI( BSTR* pbstrReferToURI );
HRESULT get_ReferredByURI( BSTR* pbstrReferredByURI );
HRESULT get_ReminderMinutesBeforeStart ([out] long *plReminderMinutesBeforeStart);
HRESULT get_ReminderOptions ([out] long *plReminderOptions);
HRESULT get_ReminderSet ([out] VARIANT_BOOL *pbReminderSet);
HRESULT get_ReminderSoundFile ([out] BSTR *pbstrReminderSoundFile);
HRESULT get_ReminderTime ([out] DATE *pdaReminderTime);
HRESULT get_RingTone( BSTR* pbstrRingTonePath );
HRESULT get_ScrollArrowsVisible ( BOOL *pfScrollArrowsVisible );
HRESULT get_SearchDomain( BSTR* pbstrDomain );
HRESULT get_SearchTerm( BSTR bstrName, BSTR* pbstrValue );
HRESULT get_SearchTerms( BSTR* pbstrNames );
HRESULT get_Selection( wchar_t *pch );
HRESULT get_SelectionIndex( short *pwich );
HRESULT get_Sensitivity ([out] long *plSensitivity);
HRESULT get_SerialNumber( BSTR* pbstr );
HRESULT get_Server( BSTR* Server );
HRESULT get_ServiceTypeGuid( BSTR* pbstrGuidServiceType );
HRESULT get_ServiceTypeIdentifier( BSTR* pVal );
HRESULT get_ShowInteractionSymbols ( BOOL *pfShowInteractionSymbols );
HRESULT get_SipServerParameters( BSTR* pbstrMyURI, BSTR* pbstrMyServer, BSTR* pbstrProfileString );
HRESULT get_SortOrder( BOOL *pfAscending );
HRESULT get_Sorted( BOOL *pfSorted );
HRESULT get_SourceHeight( long *pSourceHeight);
HRESULT get_SourceLeft( long *pSourceLeft);
HRESULT get_SourceMachineGuid( BSTR* pbstrGuidSrcMachine );
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
HRESULT get_StartProgram( BSTR* pStartProgram );
HRESULT get_StartTime ([out] DATE *pdaStartTime);
HRESULT get_StatusFlags( long *plStatusFlags );
HRESULT get_StatusImageList( OLE_HANDLE *phbmImage, OLE_HANDLE *phbmImageMask, long *pcxImage, long *pcyImage );
HRESULT get_StatusItemsImageList( OLE_HANDLE *phImage OLE_HANDLE *phImageMask short *pcImages );
HRESULT get_StatusItemsMask( long *plMask );
HRESULT get_StatusText( BSTR* pbstrStatusText );
HRESULT get_Step( long *plStep );
HRESULT get_Steps( long *plStep );
HRESULT get_StopTime( REFTIME *pllTime );
HRESULT get_String( long index, BSTR *pbstr );
HRESULT get_Style( DWORD *pdwStyle );
HRESULT get_SubCaption( BSTR *pbstrSubCaption );
HRESULT get_Subject ([out] BSTR *pbstrSubject);
HRESULT get_Suffix ([out] BSTR *pbstrSuffix);
HRESULT get_SupportedPlatform( [out, retval] BSTR*out_pbstrSupportedPlatform);
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
HRESULT get_UPC( BSTR* pbstr );
HRESULT get_URI( BSTR* pbstrURI );
HRESULT get_URL( BSTR* pbstrURL );
HRESULT get_UniqueDeviceName( BSTR* pbstr );
HRESULT get_Units ( BSTR *pbstrUnits );
HRESULT get_UserAccount( BSTR* pbstrUserAccount );
HRESULT get_UserData( long *plData );
HRESULT get_UserName( BSTR* pUserName );
HRESULT get_UserURI( BSTR* pbstrUserURI );
HRESULT get_Value( BSTR* pbstrValue );
HRESULT get_Version ([out] BSTR *pbstrVersion);
HRESULT get_VideoHeight( long *pVideoHeight);
HRESULT get_VideoWidth( long *pVideoWidth);
HRESULT get_Visible( long *pVisible);
HRESULT get_VisibleRect ( RECT *rcVisible );
HRESULT get_VisitingCity ([out] ICity **ppICity);
HRESULT get_VoIPName( BSTR* pbstrVoIPName );
HRESULT get_VoiceMenu( IVCmdMenu **ppVoiceMenu );
HRESULT get_VoiceMenuActivateCommand( BSTR *pbstrCommand );
HRESULT get_WaitStatus( BOOL *pfWaitStatus );
HRESULT get_Watcher( BSTR bstrPresentityURI, IRTCWatcher** ppWatcher );
HRESULT get_WatcherEx( RTC_WATCHER_MATCH_MODE enMode, BSTR bstrPresentityURI, IRTCWatcher2** ppWatcher );
HRESULT get_WatermarkURL( BSTR* pbstrWatermarkURL );
HRESULT get_WebPage ([out] BSTR *pbstrWebPage);
HRESULT get_Width( long *pWidth);
HRESULT get_WindowState( long *pWindowState);
HRESULT get_WindowStyle( long *pWindowStyle);
HRESULT get_WindowStyleEx( long *pWindowStyleEx);
HRESULT get_WorkDir( BSTR* pWorkDir );
HRESULT get_XML( BSTR* pbstrXML );
HRESULT get_XMinus( short *pwVal );
HRESULT get_XPlus( short *pwVal );
HRESULT get_XVal( short *pwVal );
HRESULT get_YMinus( short *pwVal );
HRESULT get_YPlus( short *pwVal );
HRESULT get_YVal( short *pwVal );
HRESULT get_YomiCompanyName ([out] BSTR *pbstrYomiCompanyName);
HRESULT get_YomiFirstName ([out] BSTR *pbstrYomiFirstName);
HRESULT get_YomiLastName ([out] BSTR *pbstrYomiLastName);
HRESULT get__NewEnum( IUnknown** ppNewEnum );
HRESULT get_address( BSTR* pbstrPortAddress );
HRESULT get_async(VARIANT_BOOL* isAsync);
HRESULT get_attributeName( long lIndex, BSTR* pbstrAttributeName );
HRESULT get_attributes(IXMLDOMNamedNodeMap** attributeMap);
HRESULT get_baseName(BSTR* nameString);
HRESULT get_bindStyle( BSTR* pbstrbindStyle );
HRESULT get_callIndex( long* plCallIndex );
HRESULT get_childNodes(IXMLDOMNodeList** childList);
HRESULT get_comValue( VARIANT* pVarOut );
HRESULT get_context(IXMLDOMNode** ppNode);
HRESULT get_currentPositionString( BSTR* pbstrCurrentPosition );
HRESULT get_currentPositionTimecode( BSTR* bstrTimecode );
HRESULT get_data(BSTR* data);
HRESULT get_dataType(VARIANT* dataTypeName);
HRESULT get_definition(IXMLDOMNode** definitionNode);
HRESULT get_detail( BSTR* bstrDetail );
HRESULT get_doctype(IXMLDOMDocumentType** documentType);
HRESULT get_document( IDispatch** ppDisp);
HRESULT get_documentElement(IXMLDOMElement** DOMElement);
HRESULT get_documentation( BSTR* bstrDocumentation );
HRESULT get_durationString( BSTR* pbstrDuration );
HRESULT get_elementName( BSTR* pbstrElementName );
HRESULT get_elementType( BSTR* pbstrElementType );
HRESULT get_encoding( BSTR* pbstrEncodingStyle );
HRESULT get_entities(IXMLDOMNamedNodeMap** entityMap);
HRESULT get_errorCode(long* errorCode);
HRESULT get_errorDescription( BSTR* pbstrDescription );
HRESULT get_expr(BSTR* expression);
HRESULT get_faultactor( BSTR* bstrActor );
HRESULT get_faultcode( BSTR* bstrFaultcode );
HRESULT get_faultcodeNS( BSTR* bstrfaultcodeNS );
HRESULT get_faultstring( BSTR* bstrFaultstring );
HRESULT get_filepos(long* filePosition);
HRESULT get_firstChild(IXMLDOMNode** firstChild);
HRESULT get_implementation(IXMLDOMImplementation** impl);
HRESULT get_input(VARIANT* pVar);
HRESULT get_isAvailable( BSTR bstrItem, VARIANT_BOOL* pIsAvailable );
HRESULT get_isInput( smIsInputEnum* pbIsInput );
HRESULT get_lastChild(IXMLDOMNode** lastChild);
HRESULT get_line(long* lineNumber);
HRESULT get_linepos(long* linePosition);
HRESULT get_messageName( BSTR* pbstrMessageName );
HRESULT get_name( BSTR* pbstrOperationName );
HRESULT get_namespaceURI(BSTR* namespaceURI);
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
HRESULT get_publicId(BSTR* publicID);
HRESULT get_reason(BSTR* reasonString);
HRESULT get_resolveExternals(VARIANT_BOOL* isResolving);
HRESULT get_responseText(BSTR* pbstrBody);
HRESULT get_schemas(VARIANT* otherCollection);
HRESULT get_script( IDispatch** ppDisp);
HRESULT get_soapAction( BSTR* pbstrSoapAction );
HRESULT get_sourceURL( BSTR* pbstrSourceURL );
HRESULT get_specified(VARIANT_BOOL* isSpecified);
HRESULT get_srcText(BSTR* sourceString);
HRESULT get_statusText(BSTR* pbstrStatus);
HRESULT get_style( BSTR* pbstrstyle );
HRESULT get_tagName(BSTR* tagName);
HRESULT get_target(BSTR* name);
HRESULT get_text(BSTR* text);
HRESULT get_transport( BSTR* pbstrtransport );
HRESULT get_uiMode( BSTR* pbstrMode );
HRESULT get_url(BSTR* urlString);
HRESULT get_validateOnParse(VARIANT_BOOL* isValidating);
HRESULT get_value(VARIANT* attributeValue);
HRESULT get_versionInfo( BSTR* pbstrVersionInfo );
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
HRESULT put_AutoForwardURI( BSTR bstrAutoForward );
HRESULT put_AutoShow( long AutoShow);
HRESULT put_AxisColor( OLE_COLOR clr );
HRESULT put_BackColor( OLE_COLOR clr );
HRESULT put_BackGroundBrush( OLE_HANDLE hBrush );
HRESULT put_BackgroundPalette( long BackgroundPalette);
HRESULT put_BinaryPassword( BSTR newPassword );
HRESULT put_BinarySalt( BSTR newSalt );
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
HRESULT put_ClearTextPassword( BSTR newClearTextPass );
HRESULT put_ClientCurVer( BSTR bstrClientCurVer );
HRESULT put_ClientName( BSTR bstrClientName );
HRESULT put_ClientProperty( BSTR PropertyName, VARIANT PropertyValue );
HRESULT put_ClockFormat( BOOL fTime, BSTR bstrFormat, LONG FormatFlags );
HRESULT put_ClockLabel( IDispatch *pdispLabel );
HRESULT put_ClockLabel0( Idispatch *pdispLabel );
HRESULT put_Color( int nColorIndex, OLE_COLOR clr );
HRESULT put_CommandPrompt( BSTR bstrCommandPrompt );
HRESULT put_CompanyName ([in] BSTR bstrCompanyName);
HRESULT put_Complete ([in] VARIANT_BOOL bComplete);
HRESULT put_ConnectingText( BSTR connectingText );
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
HRESULT put_Data( BSTR bstrData );
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
HRESULT put_DisconnectedText( BSTR disconnectText );
HRESULT put_Domain( BSTR domainProperty );
HRESULT put_DueDate ([in] DATE daDueDate);
HRESULT put_Duration ([in] long lDuration);
HRESULT put_Editing( BOOL fEditing );
HRESULT put_Email1Address ([in] BSTR bstrEmail1Address);
HRESULT put_Email2Address ([in] BSTR bstrEmail2Address);
HRESULT put_Email3Address ([in] BSTR bstrEmail3Address);
HRESULT put_Enable( VARIANT_BOOL fEnabled );
HRESULT put_EncryptionKey( long lMediaType, BSTR EncryptionKey );
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
HRESULT put_FormatName( BSTR bstrFormatName );
HRESULT put_ForwardingURI( BSTR bstrForwardingURI );
HRESULT put_FriendlyName( BSTR bstrFriendlyName );
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
HRESULT put_IconFile( BSTR IconFile );
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
HRESULT put_KeyBoardLayoutStr( BSTR KeyBoardLayoutStr );
HRESULT put_Label( BSTR lbstrLabel );
HRESULT put_LabelBackColor( OLE_COLOR clr );
HRESULT put_LabelForeColor( OLE_COLOR clr );
HRESULT put_LabelFormat( BOOL fTime, BSTR bstrFormat, LONG FormatFlags );
HRESULT put_LabelHeight( long lHeight );
HRESULT put_LastName ([in] BSTR bstrLastName);
HRESULT put_Latitude ([in] long lLatitude);
HRESULT put_Left( long Left);
HRESULT put_LocalUserName( BSTR bstrUserName );
HRESULT put_LocalUserURI( BSTR bstrUserURI );
HRESULT put_Location ([in] BSTR bstrLocation);
HRESULT put_LocationBaseURL( BSTR bstrBaseLocationURL);
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
HRESULT put_PathName( BSTR bstrPathName );
HRESULT put_PatternEndDate ([in] DATE daPatternEndDate);
HRESULT put_PatternStartDate ([in] DATE daPatternStartDate);
HRESULT put_PersistCacheDirectory( BSTR PersistCacheDirectory );
HRESULT put_PluginDlls( BSTR pluginList );
HRESULT put_PortablePassword( BSTR newPortablePassVal );
HRESULT put_PortableSalt( BSTR newPortableSalt );
HRESULT put_PreferredAudioDevice( RTC_AUDIO_DEVICE enDevice, BSTR bstrDeviceName );
HRESULT put_PrerollTime( REFTIME llTime );
HRESULT put_PresenceProperty( RTC_PRESENCE_PROPERTY enProperty, BSTR bstrProperty );
HRESULT put_PresentityURI( BSTR bstrPresentityURI );
HRESULT put_Property( BSTR pPropertyName, VARIANT PropertyValue );
HRESULT put_ProvideCommandDataSink( IASProvidePowerListBoxCommandData *pSink );
HRESULT put_RadioTelephoneNumber ([in] BSTR bstrRadioTelephoneNumber);
HRESULT put_RamUsed( long lRamUsed );
HRESULT put_RangeColor( long lRangeIndex OLE_COLOR clr );
HRESULT put_RangeCount( long lCount );
HRESULT put_RangeValue( long lRangeIndex long lRangeValue );
HRESULT put_Rate( double dRate );
HRESULT put_RdpdrClipCleanTempDirString( BSTR clipCleanTempDirString );
HRESULT put_RdpdrClipPasteInfoString( BSTR clipPasteInfoString );
HRESULT put_RdpdrLocalPrintingDocName( BSTR localPrintingDocName );
HRESULT put_ReadOnly( BOOL fReadOnly );
HRESULT put_Realm( BSTR bstrRealm );
HRESULT put_RecurrenceType ([in] long lRecurrenceType);
HRESULT put_RedirectDrives( VARIANT_BOOL redirectDrives );
HRESULT put_ReferCookie( BSTR bstrReferCookie );
HRESULT put_ReferredByURI( BSTR bstrReferredByURI );
HRESULT put_ReminderMinutesBeforeStart ([in] long lReminderMinutesBeforeStart);
HRESULT put_ReminderOptions ([in] long lReminderOptions);
HRESULT put_ReminderSet ([in] VARIANT_BOOL bReminderSet);
HRESULT put_ReminderSoundFile ([in] BSTR bstrReminderSoundFile);
HRESULT put_ReminderTime ([in] DATE daReminderTime);
HRESULT put_RingTone( BSTR bstrRingTonePath );
HRESULT put_ScrollArrowsVisible ( BOOL fScrollArrowsVisible );
HRESULT put_SearchDomain( BSTR bstrDomain );
HRESULT put_SearchTerm( BSTR bstrName, BSTR bstrValue );
HRESULT put_Selection( wchar_t ch );
HRESULT put_SelectionIndex( short wich );
HRESULT put_Sensitivity ([in] long lSensitivity);
HRESULT put_Server( BSTR serverProperty );
HRESULT put_ServiceTypeGuid( BSTR bstrGuidServiceType );
HRESULT put_ShowInteractionSymbols ( BOOL fShowInteractionSymbols );
HRESULT put_SipPassword( BSTR bstrSipPassword );
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
HRESULT put_StartProgram( BSTR programName );
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
HRESULT put_TimezoneIndex ([in] long lTimezoneIndex);
HRESULT put_Title ([in] BSTR bstrTitle);
HRESULT put_TitlebarUpdateMode( WORD wTitlebarUpdateMode );
HRESULT put_Top( long Top);
HRESULT put_TopVisibleId( long lTopVisibleId );
HRESULT put_TopVisibleIndex( long lTopVisibleIndex );
HRESULT put_TrackActive( unsigned char biTrack, BOOL fActive );
HRESULT put_TrimRight( BOOL fTrimRight );
HRESULT put_URI( BSTR bstrURI );
HRESULT put_URL( BSTR bstrURL );
HRESULT put_Units ( BSTR bstrUnits );
HRESULT put_UserData( long lData );
HRESULT put_UserName( BSTR userName );
HRESULT put_Value( [in] BSTR in_bstrVal );
HRESULT put_Visible( long Visible);
HRESULT put_VisitingCity ([in] ICity *pICity);
HRESULT put_VoIPName( BSTR bstrVoIPName );
HRESULT put_VoiceMenu( IVCmdMenu *pVoiceMenu );
HRESULT put_VoiceMenuActivateCommand( BSTR bstrCommand );
HRESULT put_WaitStatus( BOOL fWaitStatus );
HRESULT put_WebPage ([in] BSTR bstrWebPage);
HRESULT put_Width( long Width);
HRESULT put_WindowState( long WindowState);
HRESULT put_WindowStyle( long WindowStyle);
HRESULT put_WindowStyleEx( long WindowStyleEx);
HRESULT put_WorkDir( BSTR workingDir );
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
HRESULT put_uiMode( BSTR bstrMode );
HRESULT put_validateOnParse(VARIANT_BOOLisValidating);
HRESULT put_value(VARIANT* attributeValue);
HRESULT putref_HeaderHandler( IDispatch* pHeaderHandler );
HRESULT putref_context(IXMLDOMNode* pNode);
HRESULT putref_documentElement(IXMLDOMElement* DOMElement);
HRESULT putref_schemas(VARIANTotherCollection);
HRESULT set_AppSmallIcon( OLE_HANDLE hSmallIcon );
HRESULT set_PreferredVideoDevice( BSTR bstrDeviceName );
UINT setter_function ( UINT actID, AsnAny *aryObject, UINT *pErrIndex );
BOOL waveui_AcmDlgProc ( HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void waveui_AfterDialogBox ( LPVOID pChooseStruct, BOOL fIsFormatDialog);
void waveui_BeforeDialogBox ( LPVOID pChooseStruct, BOOL fIsFormatDialog);
void waveui_DeInit (void);
void waveui_Init (void);
int wvsprintf( LPTSTR lpOutput, LPCTSTR lpFormat, va_list ArgList );
VOID EdbgSetDebug(  DWORD DebugZoneMask,  PFN_OutputDebugString pDebugStringFunc );
extern HRESULT (*pIoctl_Register_DataCollector)(LPVOID,DWORD,LPVOID,DWORD);
extern HRESULT (*pIoctl_Send_DataCollector)(LPVOID,DWORD,LPVOID,DWORD);
WINOLEAPI CreateOleAdviseHolder(  IOleAdviseHolder FAR * FAR *ppOAHolder);
WINOLEAPI OleCreate(  REFCLSID rclsid,  REFIID riid,  DWORD renderopt,  FORMATETC *pFormatEtc,  IOleClientSite *pClientSite,  IStorage *pStg,  void **ppvObject);
WINOLEAPI OleDraw(  IUnknown *pUnk,  DWORD dwAspect,  HDC hdcDraw,  LPCRECT lprcBounds);
VOID CREATE_INVALIDGUID(  PCEGUID pceguid);
VOID CREATE_SYSTEMGUID(  PCEGUID pceguid);
NDIS_STATUS EthChangeFilterAddresses(  IN PETH_FILTER Filter,  IN NDIS_HANDLE NdisFilterHandle,  IN PNDIS_REQUEST NdisRequest,  IN UINT AddressCount,  IN CHAR Addresses[][ETH_LENGTH_OF_ADDRESS],  IN BOOLEAN Set );
VOID EthQueryGlobalFilterAddresses(  OUT PNDIS_STATUS Status,  IN PETH_FILTER Filter,  IN UINT SizeOfArray,  OUT PUINT NumberOfAddresses,  IN OUT CHAR AddressArray[][ETH_LENGTH_OF_ADDRESS] );
VOID EthQueryOpenFilterAddresses(  OUT PNDIS_STATUS Status,  IN PETH_FILTER Filter,  IN NDIS_HANDLE NdisFilterHandle,  IN UINT SizeOfArray,  OUT PUINT NumberOfAddresses,  OUT CHAR AddressArray[][ETH_LENGTH_OF_ADDRESS] );
BOOLEAN EthShouldAddressLoopBack(  IN PETH_FILTER Filter,  IN CHAR Address[ETH_LENGTH_OF_ADDRESS] );
HTREEITEM TreeView_GetChild(  hwnd,  hitem );
HTREEITEM TreeView_GetDropHilight(hwnd);
HTREEITEM TreeView_GetFirstVisible(  hwnd);
HTREEITEM TreeView_GetNextItem(  hwnd,  hitem,  flag );
HTREEITEM TreeView_GetNextSibling(  hwnd,  hitem );
HTREEITEM TreeView_GetNextVisible(  hwnd,  hitem );
HTREEITEM TreeView_GetParent(  hwnd,  hitem );
HTREEITEM TreeView_GetPrevSibling(  hwnd,  hitem );
HTREEITEM TreeView_GetPrevVisible(  hwnd,  hitem );
HTREEITEM TreeView_GetRoot(  hwnd);
HTREEITEM TreeView_GetSelection(  hwnd);
HTREEITEM TreeView_HitTest(  hwnd,  lpht );
HTREEITEM TreeView_InsertItem(  hwnd,  lpis );
WINOLEAUTAPI VarBstrFromI1(  [in] char cIn,  [in] LCID lcid,  [in] ULONG dwFlags,  [out] BSTR pbstrOut );
WINOLEAUTAPI VarBstrFromUI2(  [in] USHORT uiIn,  [in] LCID lcid,  [in] ULONG dwFlags,  [out] BSTR pbstrOut );
WINOLEAUTAPI VarBstrFromUI4(  [in] ULONG ulIn,  [in] LCID lcid,  [in] ULONG dwFlags,  [out] BSTR pbstrOut );
WINOLEAUTAPI VarI1FromDisp(  [in] IDispatch *pdispIn,  [in] LCID lcid,  [out] char *pcOut );
WINOLEAUTAPI VarI1FromStr(  [in] BSTR strIn,  [in] LCID lcid,  [in] ULONG dwFlags,  [out] char *pcOut );
HRESULT VarR8FromDips(  [in] IDispatch *pdispIn,  [in] LCID lcid,  [out] double *pdblOut );
WINOLEAUTAPI VarUI2FromDisp(  [in] IDispatch *pdispIn,  [in] LCID lcid,  [out] USHORT *puiOut );
WINOLEAUTAPI VarUI2FromStr(  [in] BSTR strIn,  [in] LCID lcid,  [in] ULONG dwFlags,  [out] USHORT *puiOut );
WINOLEAUTAPI VarUI4FromDisp(  [in] IDispatch *pdispIn,  [in] LCID lcid,  [out] ULONG *pulOut );
WINOLEAUTAPI VarUI4FromStr(  [in] BSTR strIn,  [in] LCID lcid,  [in] ULONG dwFlags,  [out] ULONG *pulOut );
BOOL CALLBACK DialogProc(  HWND hwndDlg,  UINT uMsg,  WPARAM wParam,  LPARAM lParam);
BOOL CALLBACK ExtensionPropSheetPageProc(  LPVOID lpv,  LPFNADDPROPSHEETPAGE lpfnAddPropSheetPageProc,  LPARAM lParam );
BSTR SysAllocString(  OLECHAR FAR *sz );
BSTR SysAllocStringByteLen(  char FAR *psz,  unsigned int len );
BSTR SysAllocStringLen(  OLECHAR FAR *pch,  unsigned int cch );
BOOL CALLBACK AddPropSheetPageProc(  HPROPSHEETPAGE hpage, LPARAM lParam );
LONG TSPIAPI TSPI_lineGetProcTable  (  LPTSPI_PROCS *lplpTSpiProcs  )  ;
ADDRESS Address (void );
PCHAR CONTAINING_RECORD(  IN PCHAR Address,  IN TYPE Type,  IN PCHAR Field );
#define MEM_WIDTH_IN_PIXELS 640  #define PIXEL_BYTES 2  #define MEM_HEIGHT 1000  extern unsigned char *memBase;  Node2D AllMem(MEM_WIDTH_IN_PIXELS, MEM_HEIGHT);  Node2D *pSurf1 = AllMem->Alloc( 20, 40 );  Node2D *pSurf2 = AllMem->Alloc( 100, 100 );  int strideInBytes = MEM_WIDTH_IN_PIXELS * PIXEL_BYTES;  unsigned char *ptr1 = memBase + strideInBytes * pSurf1->Top()  + PIXEL_BYTES * pSurf1->Left();  pSurf1->Free();  pSurf2->free();
extern "C" __declspec(dllexport) DWORD GPS_Init(DWORD dwContext);
USB_TRANSFER SetFeature(  USB_HANDLE hDevice,  LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,  LPVOID lpvNotifyParameter,  DWORD dwFlags,  WORD wFeature,  UCHAR bIndex );
USB_TRANSFER SetInterface(  USB_HANDLE hDevice,  LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,  LPVOID lpvNotifyParameter,  DWORD dwFlags,  UCHAR bInterfaceNumber,  UCHAR bAlternateSetting );
USB_TRANSFER SyncFrame(  USB_HANDLE hDevice,  LPTRANSFER_NOTIFY_ROUTINE lpStartAddress,  LPVOID lpvNotifyParameter,  DWORD dwFlags,  UCHAR bEndpoint,  LPWORD lpwFrame );
DWORD __stdcall ColorControl(  LPDDHAL_COLORCONTROLDATA pccd );
DWORD __stdcall DestroyDriver(  LPDDHAL_DESTROYDRIVERDATA pddd );
DWORD __stdcall SetExclusiveMode(  LPDDHAL_SETEXCLUSIVEMODEDATA psemd );
RECT rcSource, rcDest; DDBLTFX ddbltfx; ZeroMemory(&ddbltfx, sizeof(ddbltfx)); ddbltfx.dwSize = sizeof(ddbltfx); ddbltfx.dwDDFX = DDBLTFX_MIRRORLEFTRIGHT; rcSource.top = 0; rcSource.left = 0; rcSource.bottom = 100; rcSource.right = 200; rcDest.top = 0; rcDest.left = 201; rcDest.bottom = 100; rcDest.right = 401; HRESULT hr = lpDDS->Blt(&rcDest, lpDDS, &rcSource, DDBLT_WAIT | DDBLT_DDFX, &ddbltfx);
WORD GetBitCount(  const GUID *pSubtype);
const RGBQUAD * GetBitmapPalette(  const VIDEOINFOHEADER *pVideoInfo);
const GUID GetBitmapSubtype(  const BITMAPINFOHEADER *pHeader);
TCHAR * GetSubtypeName(  const GUID *pSubtype);
const GUID GetTrueColorType(  const BITMAPINFOHEADER *pHeader);
REFERENCE_TIME GetNextAdviseTime( );
COLORREF GetBorderColour( );
HWND GetOwnerWindow( );
IFilterGraph *GetFilterGraph( );
POSITION AddAfterI(  POSITION pos,  void *pObj);
POSITION AddBeforeI(  POSITION pos,  void *pObj);
POSITION AddHeadI(  void *pObj);
POSITION AddTailI(  void *pObj);
POSITION FindI(  void *pObj);
POSITION GetHeadPositionI( );
void *GetI(  POSITION pos);
void *GetNextI( POSITION& rp);
POSITION GetTailPositionI( );
POSITION Prev(  POSITION pos);
void *RemoveHeadI( );
void *RemoveI(  POSITION pos);
void *RemoveTailI( );
double CurrentRate( );
REFERENCE_TIME CurrentStartTime( );
REFERENCE_TIME CurrentStopTime( );
IPin *GetConnected( );
CAMSchedule *GetSchedule( );
FILTER_STATE GetRealState(void);
CAMEvent *GetRenderEvent(void);
HDC GetWindowHDC( );
HWND GetWindowHWND( );
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
IAsyncReader* GetReader(void);
T GetQueueObject( );
CTransInPlaceOutputPin *OutputPin( );
LPUNKNOWN GetOwner(void);
HINSTANCE LoadOLEAut32( );
DWORD CALLBACK OpenPerformanceData(  LPWSTR lpDeviceNames  );
RESULT GetSourceURL(  DWORD dwSourceIndex,  BSTR* pbstrURL  );
The following code example shows how to do a search to retrieve all attributes and all values under the entry, ou=PNS, o=USSA, c =US.  ULONG CallValue;  int SearchScope, AttrsOnly, CallValue;  TCHAR SearchBase[128], SearchFilter[128], **Attrs;  _tcscpy(SearchBase, _T("ou = PNS, o = USSA, c = US"));  SearchScope = LDAP_SCOPE_SUBTREE;  _tcscpy(SearchFilter, _T("(objectclass=*)")); // get all entries  Attrs = NULL; // get all attributes  AttrsOnly = 0; // get values as well as attributes  CallValue = ldap_search(ld, SearchBase, SearchScope, SearchFilter, Attrs, AttrsOnly );
function F_Change()
{
  window.setTimeout("fnToggle4()", 1);
}
HRESULT FindBehavior(  BSTR bstrBehavior,  BSTR bstrBehaviorUrl,  IElementBehaviorSite *pSite,  IElementBehavior **ppBehavior  );
HRESULT GetFocusRect(  RECT *pRect  );
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
HRESULT CreateEventObject(  IHTMLEventObj **ppEventObject  );
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
HRESULT ShowModelessHTMLDialog(  HWND hwndParent,  IMoniker *pMk,  VARIANT *pvarArgIn,  WCHAR *pchOptions,  IHTMLWindow2 **ppWindow  );
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
HRESULT ChooseColorDlg(  VARIANT initColor,  VARIANT *rgbColor  );
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
HRESULT IsPrimary(  BOOL *pfPrimary  );
HRESULT SetPrimary(  BOOL fPrimary  );
HRESULT AddSegment(  IDisplayPointer *pDispPointerStart,  IDisplayPointer *pDispPointerEnd,  IHTMLRenderStyle *pIRenderStyle,  IHighlightSegment **ppISegment  );
HRESULT MoveSegmentToPointers(  IHighlightSegment *pISegment,  IDisplayPointer *pDispPointerStart,  IDisplayPointer *pDispPointerEnd  );
HRESULT RemoveSegment(  IHighlightSegment *pISegment  );
HRESULT DrawToDC(  HDC hDC  );
HRESULT SetDocumentPrinter(  BSTR bstrPrinterName,  HDC hDC  );
HRESULT GetActiveIMM(  IActiveIMMApp **ppActiveIMM  );
HRESULT OwningDoc(  IHTMLDocument2 **ppDoc  );
HRESULT CreateChangeLog(  IHTMLChangeSink *pChangeSink,  IHTMLChangeLog **ppChangeLog,  BOOL fForward,  BOOL fBackward  );
HRESULT GetAndClearDirtyRange(  DWORD dwCookie,  IMarkupPointer *pIPointerBegin,  IMarkupPointer *pIPointerEnd  );
HRESULT GetMasterElement(  IHTMLElement **ppElementMaster  );
long GetVersionNumber(VOID);
HRESULT RegisterForDirtyRange(  IHTMLChangeSink *pChangeSink,  DWORD *pdwCookie  );
HRESULT UnRegisterForDirtyRange(  DWORD dwCookie  );
HRESULT Cling(  BOOL *pfCling  );
HRESULT CurrentScope(  IHTMLElement **ppElemCurrent  );
HRESULT FindText(  OLECHAR *pchFindText,  DWORD dwFlags,  IMarkupPointer *pIEndMatch,  IMarkupPointer *pIEndSearch  );
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
HRESULT FindTextFragFromMarkupPointer(  IMarkupPointer *pPointerFind,  long *piFrag,  BOOL *pfFragFound  );
HRESULT GetTextFrag(  long iFrag,  BSTR *pbstrFrag,  IMarkupPointer *pPointerFrag  );
HRESULT GetTextFragCount(  long *pcFrags  );
HRESULT InsertTextFrag(  long iFrag,  BSTR bstrInsert,  IMarkupPointer *pPointerInsert  );
HRESULT RemoveTextFrag(  long iFrag  );
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
HRESULT GetPointers(  IMarkupPointer *pIStart,  IMarkupPointer *pIEnd  );
HRESULT CreateIterator(  ISegmentListIterator **ppIIter  );
HRESULT IsEmpty(  BOOL *pfEmpty  );
HRESULT Advance(VOID);
HRESULT Current(  ISegment **ppISegment  );
HRESULT First(VOID);
HRESULT IsDone(VOID);
HRESULT AddElementSegment(  IHTMLElement *pIElement,  IElementSegment **ppISegmentAdded  );
HRESULT GetMarkupContainer(  IMarkupContainer **ppIContainer  );
HRESULT GetSelectionServicesListener(  ISelectionServicesListener **ppISelectionServicesListener  );
HRESULT SetSelectionType(  SELECTION_TYPE eType,  ISelectionServicesListener *pIListener  );
HRESULT BeginSelectionUndo(VOID);
HRESULT EndSelectionUndo(VOID);
HRESULT GetTypeDetail(  BSTR *pTypeDetail  );
HRESULT OnChangeType(  SELECTION_TYPE eType,  ISelectionServicesListener *pIListener  );
HRESULT OnSelectedElementExit(  IMarkupPointer *pIElementStart,  IMarkupPointer *pIElementEnd,  IMarkupPointer *pIElementContentStart,  IMarkupPointer *pIElementContentEnd  );
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
inline HRESULT SpGetDescription(  ISpObjectToken* pObjToken,  WCHAR** ppszDescription,  LANGID* Language = SpGetUserDefaultUILanguage()  );
BOOL LaunchConnectionDialog(  HWND hParent  );
BOOL LaunchInternetControlPanel(  HWND hParent  );
BOOL LaunchSecurityDialog(  HWND hParent  );
HRESULT GetFramesContainer(  IOleContainer **ppContainer  );
HRESULT GetFrameUrl(  LPWSTR *ppszFrameSrc  );
HRESULT FindFrame(  LPCWSTR pszTargetName,  IUnknown *ppunkContextFrame,  DWORD dwFlags,  IUnknown **ppunkTargetFrame  );
HRESULT GetFrameName(  LPWSTR *ppszFrameName  );
HRESULT GetFrameSrc(  LPWSTR *ppszFrameSrc  );
HRESULT GetParentFrame(  IUnknown **ppunkParent  );
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
void BeforeNavigate( IDispatch *pDisp, VARIANT *&url, VARIANT *&Flags, VARIANT *&TargetFrameName, VARIANT *&PostData, VARIANT *&Headers, VARIANT_BOOL *&Cancel );
void NavigateComplete(  IDispatch *pDisp,  VARIANT *URL  );
void NewWindow( IDispatch **&ppDisp, VARIANT_BOOL *&Cancel );
void PrintTemplateInstantiation(  IDispatch *pDisp  );
void PrintTemplateTeardown(  IDispatch *pDisp  );
HRESULT ShowBrowserBar(  VARIANT *pvaClsid,  VARIANT *pvarShow,  VARIANT *pvarSize  );
BOOL APIENTRY ChooseFont(  LPCHOOSEFONT lpcf  );
INT BeginLevelV( DWORD dwLevelID,  LPCTSTR szFormat,  va_list pArgs  );
INT EndLevelV( LPCTSTR szFormat,  va_list pArgs  );
BSTR _BuildVersion( void );
VT_DISPATCH _CreateLogObject( void );
void _Alert( BSTR string  );
BSTR _GetCPU( void );
BSTR _GetOSVer( void );
long _LangHost( void );
void LogMemUse( void );
BSTR _Name( void );
BSTR _StrConv( BSTR string, Integer convertFlag );
BOOL DM_DevDeviceIoControl(
fsopendev_t *fsodev,
DWORD dwIoControlCode,
LPVOID lpInBuf,
DWORD nInBufSize,
LPVOID lpOutBuf,
DWORD nOutBufSize,
LPDWORD lpBytesReturned,
LPOVERLAPPED lpOverlapped)
{
  BOOL retval = FALSE;
  DWORD dodec = 0;
  LPEXCEPTION_POINTERS pep;
  lpInBuf = MapCallerPtr(lpInBuf,nInBufSize);
  lpOutBuf = MapCallerPtr(lpOutBuf,nOutBufSize);
}
NTSTATUS UsbClassVendorCommand( IN PDEVICE_OBJECT PDevObj,  IN UCHAR Request, IN USHORT Value,  IN USHORT Index,  IN PVOID Buffer, IN OUT PULONG BufferLen,  IN BOOLEAN Read,  IN ULONG Class  );
long DRM_ND_DeregisterFromService ( BSTR sServerUDN, );
long DRM_ND_RegisterWithService ( BSTR sOurUDN, BSTR sServerUDN, IUPnPService *pService );
HRESULT EnumerateProcesses( SAFEARRAY(BSTR)*out_Processes, SAFEARRAY(DWORD)*out_ProcessesId);
HRESULT SearchFileSystem( LPCOLESTRin_Criteria,LPCOLESTRin_StartingDirectory, SAFEARRAY( BSTR )*out_FileSystems);
HRESULT VerifyFilesInstalled( DWORD in_ArraySize, [in, size_is(in_ArraySize), length_is(in_ArraySize)] FileVerifyReferencein_InfoArray[], [out, size_is(in_ArraySize), length_is(in_ArraySize)] FileVerifyResultout_ExistenceArray[]);
HRESULT EnumerateConnections( [in] DWORD dwSizeActual, [out] DWORD* pdwSizeReturned, [out,size_is(dwSizeActual), length_is(d*pdwSizeReturned)] BSTR[] Connections, [out] VARIANT_BOOL* pfMoreEntries);
HRESULT NotifyRunStateChange( [in] RUN_STATUS_TYPE2 ers2Current, [in] DWORD dwNbOfHaltReasons, [in, size_is (dwNbOfHaltReasons)] HALT_REASON_TYPE2 *pehr2List, [in] ADDRESS_TYPE CurrentExecAddress, [in] DWORD64dw64CycleSinceLastRun);
HRESULT AddCodeBps( [in] DWORD ccbp, [in, size_is(ccbp)] CODE_BP_TYPE acbp[], [out, size_is(ccbp)] IeXdi2CodeBp *apieXdi2CodeBp[]);
HRESULT AddDataBps( [in] DWORD cdbp, [in, size_is(cdbp)] DATA_BP_TYPE adbp[], [out, size_is(cdbp)] IeXdi2DataBp*apieXdi2DataBp[] );
HRESULT UnregisterEmbeddedBpOpCode( [in] DWORD dwOpCodeSizeInByte, [in, size_is(dwOpCodeSizeInByte)] const BYTE *pbOpCode, [in] DWORD dwExecMode);
HRESULT WriteClientScratchPad( [in] GUID guidClient, [in] DWORD dwBuffInSize, [in, size_is(dwBuffInSize)] const BYTE* pbBufferIn);
HRESULT CreateCpuRegCustomList( [in] DWORD dwNbRegsInList, [in, size_is(dwNbRegsInList)] LPOLESTR* pszRegName, [out] IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs);
HRESULT SetMemAccessExclusionRange( [in] LINEAR_MEM_MAP_TYPE lmt, [in] DWORD dwNbTotalExclRange, [in, size_is(dwNbTotalExclRange)] MEM_ACCESS_EXCLUSION_RANGE* pmaerExclusionList);
HRESULT SnapCurrentDeviceState( [in, out] DWORD *pdwDumpType, [in, out] DWORD64 *pdw64DumpTotalSize, [in, out] DWORD *pdwSegmentBufferSize, [out, size_is(,*pdwSegmentBufferSize)] BYTE **ppbSegmentBuffer, [in, out] DWORD64 *pdw64SegmentIndex, [out] BOOL *pfComplete );
HRESULT StringCbVPrintf( LPTSTR pszDest, size_t cbDest, LPCTSTR pszFormat, va_list argList);
HRESULT StringCbVPrintfEx( LPTSTR pszDest, size_t cbDest, LPTSTR *ppszDestEnd, size_t *pcbRemaining, DWORD dwFlags, LPCTSTR pszFormat, va_list argList);
HRESULT StringCchVPrintf( LPTSTR pszDest, size_t cchDest, LPCTSTR pszFormat, va_list argList);
HRESULT StringCchVPrintfEx( LPTSTR pszDest, size_t cchDest, LPTSTR *ppszDestEnd, size_t *pcchRemaining, DWORD dwFlags, LPCTSTR pszFormat, va_list argList);
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
char *_strnset( char *string, int c, size_t count );wchar_t *_wcsnset( wchar_t *string, wchar_tc, size_tcount );
FILE *_wfreopen( const wchar_t*path,constwchar_t*mode,FILE*stream);
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
#pragma include_alias("StandardIO", ) // warning
#pragma code_seg("") // warning void main() {}
typedefstructtagNMSELCHANGE {NMHDR nmhdr;SYSTEMTIMEstSelStart;SYSTEMTIMEstSelEnd;}NMSELCHANGE,FAR* LPNMSELCHANGE;
typedefstructtagNMTVCUSTOMDRAW{NMCUSTOMDRAWnmcd;COLORREFclrText;COLORREFclrTextBk;}NMTVCUSTOMDRAW,*LPNMTVCUSTOMDRAW;
typedefstruct{intiLow;intiHigh;}PBRANGE,*PPBRANGE;
#pragma data_seg("MYDATA") #pragma code_seg("MYDATA") // error
inline inline void no_op( void ) { };
#pragma check_stack yes // warning #pragma check_stack + #pragma check_stack (on)
#pragma inline_depth( 10, 18, 67 ) // warning
#pragma runtime_checks("",off) // ignore any RTC compiler options ... #pragma runtime_checks("",restore) // restore compiler option settings
typedefstructtagNMDAYSTATE{NMHDRnmhdr;SYSTEMTIMEstStart;intcDayState;LPMONTHDAYSTATEprgDayState;}NMDAYSTATE,FAR* LPNMDAYSTATE;
typedefstructtagNMLVCACHEHINT{NMHDRhdr;intiFrom;intiTo;}NMLVCACHEHINT,*PNMLVCACHEHINT;
unsigned __int64 __cdecl __ull_rshift(unsigned__int64,int);
__int64 __cdecl __ll_lshift(int64,int);
__int64 __cdecl __ll_rshift(int64,int);
IDirect3D8* Direct3DCreate8( UINT SDKVersion );
PVOID PDD_AllocateBuffer( LPVOID PDDContext,  ULONG ulModeType  );
PVOID PDD_Init( PVOID MDDContext, PPDDFUNCTBL pPDDFuncTbl  );
BOOL ReadFileScatter( HANDLE hFile, FILE_SEGMENT_ELEMENT aSegmentArray[], DWORD nNumberOfBytesToRead, LPDWORD lpReserved, LPOVERLAPPED lpOverlapped );
BOOL WriteFileGather( HANDLE hFile, FILE_SEGMENT_ELEMENT aSegmentArray[], DWORD nNumberOfBytesToWrite, LPDWORD lpReserved, LPOVERLAPPED lpOverlapped );
RESULT get_EventPackage( BSTR* pbstrEventPackage );
COLORREF RGBA( BYTE byRed, BYTE byGreen, BYTE byBlue, BYTE alpha );
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
HRESUTL get_TimerEnabled( BOOL*pfEnabled );
BOOL CMPRegister ( DWORD dwProcessId, DWORD dwNotifyInterval, DWORD dwRecoverFlags, WCHAR *pCommandLine, PCPMCALLBACK pfnCPMCallBack, DWORD dwRecoverFailFlags );
HREULT SendMsg( long uMsg, long wParam, long lParam );
ATLAPI AtlAxGetControl( HWND h, IUnknown** pp );
ATLAPI AtlAxGetHost( HWND h, IUnknown** pp );
HRESULT AtlSetChildSite( IUnknown* punkChild, IUnknown* punkParent );
HRESULT AtlUnadvise( IUnknown* pUnkCP, const IID& iid, DWORD dw );
HRESULT AtlAdvise( IUnknown* pUnkCP, IUnknown* pUnk, const IID& iid, LPDWORD pdw );
ATLAPI AtlAxAttachControl( IUnknown* pControl, HWND hWnd );
ATLAPI AtlAxCreateControl( LPCOLESTR lpszName, HWND hWnd,  IStream* pStream, IUnknown** ppUnkContainer );
HRESULT AttachControl( IUnknown* pControl, IUnknown** ppUnkContainer );
HRESULT SetExternalDispatch( IDispatch* pDisp );
void AppendBSTR( BSTR p );
static LPCTSTR WINAPI GetObjectDescription( );
int CALLBACK LibMain(HINSTANCE hinst, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine);
BOOL NotifyIME(HIMC hIMC, DWORD dwAction, DWORD dwIndex, DWORD dwValue);
void CALLBACK LineCallbackFunc (DWORD hDevice, DWORD dwMsg, DWORD wCallbackInstance, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3);
HRESULT GetAmbientDisplayName( BSTR& bstrDisplayName );
HRESULT GetAmbientScaleUnits( BSTR& bstrScaleUnits );
HRESULT RegisterClassObjects( DWORD dwClsContext, DWORD* dwFlags );
HRESULT UnregisterClassHelper( const CLSID& clsid, LPCTSTR lpszProgID, LPCTSTR lpszVerIndProgID );
HRESULT RegisterClassHelper( const CLSID& clsid, LPCTSTR lpszProgID, LPCTSTR lpszVerIndProgID, UINT nDescID, DWORD dwFlags );
HRESULT GetDisplayString( DISPID dispID, BSTR* pBstr );
UINT GetObjectSchema( );
CSize SetBitmapDimension( int nWidth, int nHeight );
BOOL CreateBitmapIndirect( LPBITMAP lpBitmap );
BOOL CreateBrushIndirect( LPLOGBRUSH lpLogBrush );
void FrameRect( LPCRECT lpRect, CBrush* pBrush );
static CBrush* PASCAL GetHalftoneBrush ( CDC* pDC );
CPoint MoveTo( int x, int y );
BOOL PolylineTo( const POINT* lpPoints, int nCount );
BOOL PolyPolygon ( LPPOINT lpPoints, LPINT lpPolyCounts, int nCount );
BOOL PolyPolyline( const POINT* lpPoints, const DWORD* lpPolyPoints, int nCount );
CPoint SetBrushOrg( int x, int y );
void SetRectNP( LPCRECT lpRect );
BOOL CreateFont( int nHeight, int nWidth, int nEscapement, int nOrientation, int nWeight, BYTE bItalic, BYTE bUnderline, BYTE cStrikeOut, BYTE nCharSet, BYTE nOutPrecision, BYTE nClipPrecision, BYTE nQuality, BYTE nPitchAndFamily, LPCTSTR lpszFacename );
static BOOL DragMove( CPoint pt );
BOOL SetDragCursorImage( int nDrag, CPoint ptHotSpot );
BOOL BeginDrag( int nImage, CPoint ptHotSpot );
BOOL SetRectInContainer( LPRECT lpRect );
BOOL EnableScrollBar( UINT nArrowFlags = ESB_ENABLE_BOTH );
void FillOutsideRect( CDC* pDC, CBrush* pBrush );
CSize SetItemSize( CSize size );
HTREEITEM GetChildItem( HTREEITEM hItem );
HTREEITEM GetDropHilightItem( );
HTREEITEM GetFirstVisibleItem( );
HTREEITEM GetNextSiblingItem( HTREEITEM hItem );
HTREEITEM GetNextVisibleItem( HTREEITEM hItem );
HTREEITEM GetParentItem( HTREEITEM hItem );
HTREEITEM GetPrevSiblingItem( HTREEITEM hItem );
HTREEITEM GetPrevVisibleItem( HTREEITEM hItem );
HTREEITEM GetRootItem( );
BOOL ItemHasChildren( HTREEITEM hItem );
HTREEITEM SelectDropTarget( HTREEITEM hItem );
BOOL SetItemImage( HTREEITEM hItem, int nImage, int nSelectedImage );
BOOL SortChildren( HTREEITEM hItem );
BOOL Expand( HTREEITEM hItem, UINT nCode );
afx_msg void OnLButtonDblClk( UINT nFlags, CPoint point );
afx_msg void OnLButtonDown( UINT nFlags, CPoint point );
afx_msg void OnLButtonUp( UINT nFlags, CPoint point );
afx_msg void OnMouseMove( UINT nFlags, CPoint point );
HRESULT hr; IVIO_Device *pOdometer; IVIO_EventSink *iOdometerSink = new COdometerSink; hr = CoCreateInstance(CLSID_VIO_ODOMETER, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pOdometer); pOdometer->SetNotify(NULL, iOdometerSink, 5000); . . . pOdometer->SetNotify(NULL, NULL, 0); pOdometer->Release(); iOdometerSink->Release();
HRESULT hr; IVIO_Device *pLatchControl; VARIANT vLatchState; VariantInit(&vLatchState); hr = CoCreateInstance(CLSID_VIO_LATCH_CONTROL, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pLatchControl); vLatchState.vt = VT_UI4; vLatchState.ulVal = VIOLATCH_GAS_CAP; pLatchControl->SetData(&vLatchState, 3000); pLatchControl->Release();
HRESULT hr; IVIO_Device *pLockState; VARIANT vLockInfo; VariantInit(&vLockInfo); hr = CoCreateInstance(CLSID_VIO_LOCK_STATE, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pLockState); vLockInfo.vt = VT_UI4; vLockInfo.ulVal = VIOLOCKS_LOCKED; pLatchControl->SetData(&vLatchState, 3000); pLockState->Release();
HRESULT hr; IVIO_Device *pVehicleSpeed; IVIO_EventSink *iSpeedSink = new CVehicleSpeedSink; hr = CoCreateInstance(CLSID_VIO_VEHICLE_SPEED, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pVehicleSpeed); pVehicleSpeed->SetNotify(NULL, iSpeedSink, 500); . . pVehicleSpeed->SetNotify(NULL, NULL, 0); pVehicleSpeed->Release(); iSpeedSink->Release();
HRESULT hr; IVIO_Device *pEngineRPM; IVIO_EventSink *iRpmSink = new CEngineRPMSink; hr = CoCreateInstance(CLSID_VIO_ENGINE_RPM, NULL, CLSCTX_INPROC_SERVER, IID_VIODEVICE, &pEngineRPM); pEngineRPM->SetNotify(NULL, iRpmSink, 500); . . . //Turn off the notification sink. pVehicleSpeed->SetNotify(NULL, NULL, 0); iRpmSink->Release(); pEngineRPM->Release();
VOID VIOUninitialize ( );
#define MEM_WIDTH_IN_PIXELS 640  #define PIXEL_BYTES 2  #define MEM_HEIGHT 1000  extern unsigned char *memBase;  Node2D AllMem(MEM_WIDTH_IN_PIXELS, MEM_HEIGHT);  Node2D *pSurf1 = AllMem->Alloc( 20, 40 );  Node2D *pSurf2 = AllMem->Alloc( 100, 100 );  int strideInBytes = MEM_WIDTH_IN_PIXELS * PIXEL_BYTES;  unsigned char *ptr1 = memBase + strideInBytes * pSurf1->Top()  + PIXEL_BYTES * pSurf1->Left();  pSurf1->Free();  pSurf2->free();
HTREEITEM TreeView_GetDropHilite( hwnd );
enum {
  SHIC_FEATURE_RESTOREDEFAULT = 0,
  SHIC_FEATURE_AUTOCORRECT = 0x00000001L,
  SHIC_FEATURE_AUTOSUGGEST = 0x00000002L,
  SHIC_FEATURE_HAVETRAILER = 0x00000003L,
  SHIC_FEATURE_CLASS = 0x00000004L
} SHIC_FEATURE;
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
Class ClearTypeBlt : public GPE
SCODE ClearTypeBltDst16 (GPEBltParms *);
SCODE ClearTypeBltDst24 (GPEBltParms *);
SCODE ClearTypeBltDst32 (GPEBltParms *);
EXTERN_C BOOL buildDDHALInfo ( 
LPDDHALINFO lpddhi, 
DWORD modeidx 
);
DWORD ISRHandler(
 DWORD InstanceIndex
);
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
interface IFst { HRESULT fst(BSTR b); HRESULT fst(long l); };
#pragma keyword("interface", on)
#pragma warning(disable:4199)
interface IX1 {
  public:
  [ property(get={0, 1}) ]
  int Size;
};
interface I1 {
};
interface I2 {
};
interface I3 : I1, I2 {
};
interface IX11 { [ property, id(1), helpstring("Help!") ] // id and helpstring not valid on property int Size; };
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
#define HSE_URL_FLAGS_READ 0x00000001 #define HSE_URL_FLAGS_EXECUTE 0x00000004 #define HSE_URL_FLAGS_SCRIPT 0x00000200
#define DECLARE_IUNKNOWN
#define MSR_START(  int Id)
#define MSR_STOP(  int Id)
#define HSE_URL_FLAGS_READ 0x00000001  #define HSE_URL_FLAGS_EXECUTE 0x00000004  #define HSE_URL_FLAGS_SCRIPT 0x00000200
#define BSF_SHOW_FATAL_ERRORS ((UINT)0x00000004)  #define BSF_SHOW_RESOLVE_ERRORS ((UINT)0x00000008)
#define SDP_RECORD_SIZE 0x00000043
#define OEM_CUSTOM_PRIMITIVE_TYPE 0x2
#define SetTextureColorStage( dev, i, arg1, op, arg2 ) \  dev->SetTextureStageState( i, D3DMTSS_COLOROP, op); \  dev->SetTextureStageState( i, D3DMTSS_COLORARG1, arg1 ); \  dev->SetTextureStageState( i, D3DMTSS_COLORARG2, arg2 );  #define SetTextureAlphaStage( dev, i, arg1, op, arg2 ) \  dev->SetTextureStageState( i, D3DMTSS_ALPHAOP, op); \  dev->SetTextureStageState( i, D3DMTSS_ALPHARG1, arg1 ); \  dev->SetTextureStageState( i D3DMTSS_ALPHARG2, arg2 );
#define IMPLTYPEFLAG_FDEFAULT 0x1  #define IMPLTYPEFLAG_FSOURCE 0x2  #define IMPLTYPEFLAG_FRESTRICTED 0x4  #define IMPLTYPEFLAG_FDEFAULTVTABLE 0x8
#define DVD_SYSTEM_SPACE_BIT 1 #define DVD_MENU_SPACE_BIT (DVD_SYSTEM_SPACE_BIT << 1) #define DVD_VMG_SPACE_BIT (DVD_MENU_SPACE_BIT << 1) #define DVD_VTS_SPACE_BIT (DVD_VMG_SPACE_BIT << 1) #define DVD_NAVSTATREQ_VOLUME_BIT 1 #define DVD_NAVSTATREQ_HIGHLIGHT_BIT (DVD_NAVSTATREQ_VOLUME_BIT << 1) #define DVD_NAVSTATREQ_PCI_BIT (DVD_NAVSTATREQ_HIGHLIGHT_BIT << 1) #define DVD_PROGRAM_PREVIOUS 0 #define DVD_PROGRAM_NEXT 1 #define DVD_PROGRAM_TOP 2 #define DVD_MENU_TITLE 0 #define DVD_MENU_ROOT 1 #define DVD_MENU_SUBPICTURE 2 #define DVD_MENU_AUDIO 3 #define DVD_MENU_ANGLE 4 #define DVD_MENU_PTT 5 #define DVD_SELECT_UPPER 0 #define DVD_SELECT_RIGHT 1 #define DVD_SELECT_LOWER 2 #define DVD_SELECT_LEFT 3 #define DVD_SCANCAP_FORWARD_SCAN 0x1 #define DVD_SCANCAP_FORWARD_SLOW 0x2 #define DVD_SCANCAP_FORWARD_SINGLE 0x4 #define DVD_SCANCAP_BACKWARD_SCAN 0x8 #define DVD_SCANCAP_BACKWARD_SLOW 0x10 #define DVD_SCANCAP_BACKWARD_SINGLE 0x20 #define SPRM_M_LCD 0 #define SPRM_ASTN 1 #define SPRM_SPSTN 2 #define SPRM_AGLN 3 #define SPRM_TTN 4 #define SPRM_VTS_TTN 5 #define SPRM_TT_PGCN 6 #define SPRM_PTTN 7 #define SPRM_HL_BTNN 8 #define SPRM_NV_TMR 9 #define SPRM_NV_TMR_PGCN 10 #define SPRM_P_AMXMD 11 #define SPRM_CTY_CD 12 #define SPRM_PTL_LVL 13 #define SPRM_P_CFG_VIDEO 14 #define SPRM_P_CFG_AUDIO 15 #define SPRM_INI_LCD_AST 16 #define SPRM_INI_LCD_EXT_AST 17 #define SPRM_INI_LCD_SPST 18 #define SPRM_INI_LCD_EXT_SPST 19 #define SPRM_REGION 20
#define MAX_PATH 128  typedef [string] WCHAR UNICODE_PATH [MAX_PATH];
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
#define MAX_PATH 128typedef [string] WCHAR UNICODE_PATH [MAX_PATH];
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
#define ALTERNATE_ENTRY(Name) \ .globl Name; \ Name:; #define LEAF_ENTRY(Name) \ .text; \ .globl Name; \ .ent Name, 0; \ Name:; \ .frame sp, 0, ra; \ .prologue 0; #define NESTED_ENTRY(Name, fsize, retrg) \ .text; \ .globl Name; \ .ent Name, 0; \ Name:; \ .frame sp, fsize, retrg; #define ALTERNATE_ENTRY_S(Name) \ .globl Name; \ Name:; #define SYSTEM_ENTRY(Name) \ .text; \ .globl Name; \ .ent Name, 0; \ Name:; \ .frame sp, 0, ra; \ .prologue 0; #define LEAF_ENTRY_S(Name, Section) \ .text Section; \ .globl Name; \ .ent Name, 0; \ Name:; \ .frame sp, 0, ra; \ .prologue 0; #define NESTED_ENTRY_S(Name, fsize, retrg, Section) \ .text Section; \ .globl Name; \ .ent Name, 0; \ Name:; \ .frame sp, fsize, retrg; #define EXCEPTION_HANDLER(Handler) \ .edata 1, Handler; #define PROLOGUE_END .prologue 1;
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
typedef struct CESORTORDERSPECEX { WORD wVersion; WORD wNumProps; WORD wKeyFlags; WORD wReserved; CEPROPID rgPropID[CEDB_MAXSORTPROP]; DWROD rgdwFlags[CEDB_MAXSORTPROP]; } CESORTORDERSPECEX;
typedef struct CVF { D3DMVECTOR position; D3DMVECTOR normal; D3DMCOLOR diffuse; float u, v; // 1st set, 2-D float t; // 2nd set, 1-D } CustomVertexFormat;
typedef struct _DDHAL_DDEXEBUFCALLBACKS { DWORD dwSize; DWORD dwFlags; LPDDHALEXEBUFCB_CANCREATEEXEBUF CanCreateExecuteBuffer; LPDDHALEXEBUFCB_CREATEEXEBUF CreateExecuteBuffer; LPDDHALEXEBUFCB_DESTROYEXEBUF DestroyExecuteBuffer; LPDDHALEXEBUFCB_LOCKEXEBUF LockExecuteBuffer; LPDDHALEXEBUFCB_UNLOCKEXEBUF UnlockExecuteBuffer; } DDHAL_DDEXEBUFCALLBACKS;
typedef struct _GUID { DWORD Data1; WORD Data2; WORD Data3; BYTE Data4[8]; } GUID;
typedef struct tagImageInfo { GUID RawDataFormat; PixelFormatID PixelFormat; UINT Width; UINT Height; UINT TileWidth; UINT TileHeight; double Xdpi; double Ydpi; UINT Flags; } ImageInfo;
typedef struct _MTPIPCONNECTIONINFO { DWORD dwNonce; GUID guidClient; WCHAR rgwchClientName[MTPIP_CONNAUTH_MAX_NAME_LENGTH]; DWORD cchClientName; SOCKADDR_STORAGE saClient; SOCKADDR_STORAGE saLocal; } MTPIPCONNECTIONINFO;
typedef struct tagMyData { };
typedef struct _NM_UPDOWN { NMHDR hdr; int iPos; int iDelta; } NM_UPDOWNW;
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
typedef struct _ServicesExeCallbackFunctions { PFN_SERVICE_SHUTDOWN pfnServiceShutdown; } ServicesExeCallbackFunctions;
typedef struct StringFileInfo { WORD wLength; WORD wValueLength; WORD wType; WCHAR szKey[]; WORD Padding[]; StringTable Children[]; } StringFileInfo;
typedef struct tagTZREG { LONG Bias; LONG StandardBias; LONG DaylightBias; SYSTEMTIME StandardDate; SYSTEMTIME DaylightDate; } TZREG;
typedef struct _WAVEFORMATEX_G711 { WAVEFORMATEX WaveFormatEx; WORD wSamplesPerBlock; } WAVEFORMATEX_G711;
typedef struct {
  DWORD dwLength;
  WORD wRevision;
  WORD wCertificateType; // = WIN_CERT_TYPE_PKCS1_SIGN
  DWORD cbSignedData;
  BYTE bSignedData[MAX_WIN_CERT_SIGN_DATA_LEN];
  BYTE bSign[MAX_RSA_KEY_BITS/8];
} PKCS1_MODULE_SIGN ;
typedef struct tagINITCOMMONCONTROLSEX {  DWORD dwSize;  DWORD dwICC;}  INITCOMMONCONTROLSEX, *LPINITCOMMONCONTROLSEX;
struct VS_VERSIONINFO {
  WORD wLength;
  WORD wValueLength;
  WORD wType;
  WCHAR szKey[];
  WORD Padding1[];
  VS_FIXEDFILEINFO Value;
  WORD Padding2[];
  WORD Children[]; };
typedef struct _VENDOR_ATTR {
  struct {
    USHORT Length;
    UCHAR Buffer[MAXIMUM_ATTR_STRING_LENGTH];
  } VendorName;
  struct {
    USHORT Length;
    UCHAR Buffer[MAXIMUM_ATTR_STRING_LENGTH];
  } IfdType;
  ULONG UnitNo;
  struct {
    USHORT BuildNumber;
    UCHAR VersionMinor;
    UCHAR VersionMajor;
  } IfdVersion;
  struct {
    USHORT Length;
    UCHAR Buffer[MAXIMUM_ATTR_STRING_LENGTH];
  } IfdSerialNo;
  ULONG Reserved[25];
} VENDOR_ATTR, *PVENDOR_ATTR;
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
typedef struct _DDNONLOCALVIDMEMCAPS
{
  DWORD dwSize;
  DWORD dwNLVBCaps;
  DWORD dwNLVBCaps2;
  DWORD dwNLVBCKeyCaps;
  DWORD dwNLVBFXCaps;
  DWORD dwNLVBRops[DD_ROP_SPACE];
} DDNONLOCALVIDMEMCAPS;
typedef struct _DDNONLOCALVIDMEMCAPS FAR *LPDDNONLOCALVIDMEMCAPS;
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
struct sockaddr {  unsigned short sa_family;  char sa_data[14];};
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
SOCKET accept(  SOCKET s,  struct sockaddr FAR* addr,  int FAR* addrlen  );
int bind(  SOCKET s,  const struct sockaddr FAR* name,  int namelen  );
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
typedef struct tagCHOOSECOLOR {
  DWORD lStructSize;
  HWND hwndOwner;
  HINSTANCE hInstance;
  COLORREF rgbResult;
  COLORREF* lpCustColors;
  DWORD Flags;
  LPARAM lCustData;
  LPCCHOOKPROC lpfnHook;
  LPCTSTR lpTemplateName;
} CHOOSECOLOR, *LPCHOOSECOLOR;
typedef struct tagCHOOSEFONT {
  DWORD lStructSize;
  HWND hwndOwner;
  HDC hDC;
  LPLOGFONTW lpLogFont;
  INT iPointSize;
  DWORD Flags;
  COLORREF rgbColors;
  LPARAM lCustData;
  LPCFHOOKPROC lpfnHook;
  LPCWSTR lpTemplateName;
  HINSTANCE hInstance;
  LPWSTR lpszStyle;
  WORD nFontType;
  WORD ___MISSING_ALIGNMENT__;
  INT nSizeMin;
  INT nSizeMax;
} CHOOSEFONTW, *LPCHOOSEFONTW;
typedef struct tagINITCOMMONCONTROLSEX {  DWORD dwSize;  DWORD dwICC;  } INITCOMMONCONTROLSEX, *LPINITCOMMONCONTROLSEX;
typedef struct tagPSD {
  DWORD lStructSize;
  HWND hwndOwner;
  HGLOBAL hDevMode;
  HGLOBAL hDevNames;
  DWORD Flags;
  POINT ptPaperSize;
  RECT rtMinMargin;
  RECT rtMargin;
  HINSTANCE hInstance;
  LPARAM lCustData;
  LPPAGESETUPHOOK lpfnPageSetupHook;
  LPPAGEPAINTHOOK lpfnPagePaintHook;
  LPCTSTR lpPageSetupTemplateName;
  HGLOBAL hPageSetupTemplate;
} PAGESETUPDLG, *LPPAGESETUPDLG;
typedef struct tagPD {
  DWORD cbStruct;
  HWND hwndOwner;
  HDC hdc;
  DWORD dwFlags;
  RECT rcMinMargin;
  RECT rcMargin;
  HINSTANCE hinst;
  LPARAM lCustData;
  LPPRINTHOOKPROC pfnPrintHook;
  LPCTSTR pszPrintTemplateName;
  HGLOBAL hglbPrintTemplateResource;
} PRINTDLG , *LPPRINTDLG;
typedef struct _CDROM_TOC{UCHARLength[2]; UCHARFirstTrack; UCHARLastTrack; TRACK_DATATrackData[MAXIMUM_NUMBER_TRACKS]; } CDROM_TOC, *PCDROM_TOC;
typedef struct tagDrvEnableData{// Version control of this structure is performed by incrementing// DDI_DRIVER_VERSION whenever alterations are made. DHPDEV (* DrvEnablePDEV )( DEVMODEW* pdm, LPWSTR pwszLogAddress, ULONG cPat, HSURF* phsurfPatterns, ULONG cjCaps, ULONG* pdevcaps, ULONG cjDevInfo, DEVINFO* pdi, HDEV hdev, LPWSTR pwszDeviceName, HANDLE hDriver ); VOID (* DrvDisablePDEV )( DHPDEV dhpdev ); HSURF (* DrvEnableSurface )( DHPDEV dhpdev ); VOID (* DrvDisableSurface )( DHPDEV dhpdev ); HBITMAP (* DrvCreateDeviceBitmap )( DHPDEV dhpdev, SIZEL sizl, ULONG iFormat ); VOID (* DrvDeleteDeviceBitmap )( DHSURF dhsurf ); BOOL (* DrvRealizeBrush )( BRUSHOBJ* pbo, SURFOBJ* psoTarget, SURFOBJ* psoPattern, SURFOBJ* psoMask, XLATEOBJ* pxlo, ULONG iHatch ); BOOL (* DrvStrokePath )( SURFOBJ* pso, PATHOBJ* ppo, CLIPOBJ* pco, XFORMOBJ* pxo, BRUSHOBJ* pbo, POINTL* pptlBrushOrg, LINEATTRS* plineattrs, MIX mix ); BOOL (* DrvFillPath )( SURFOBJ* pso, PATHOBJ* ppo, CLIPOBJ* pco, BRUSHOBJ* pbo, POINTL* pptlBrushOrg, MIX mix, FLONG flOptions ); BOOL (* DrvPaint )( SURFOBJ* pso, CLIPOBJ* pco, BRUSHOBJ* pbo, POINTL* pptlBrushOrg, MIX mix ); BOOL (* DrvBitBlt )( SURFOBJ* psoTrg, SURFOBJ* psoSrc, SURFOBJ* psoMask, CLIPOBJ* pco, XLATEOBJ* pxlo, RECTL* prclTrg, POINTL* pptlSrc, POINTL* pptlMask, BRUSHOBJ* pbo, POINTL* pptlBrush, ROP4 rop4 ); BOOL (* DrvCopyBits )( SURFOBJ* psoDest, SURFOBJ* psoSrc, CLIPOBJ* pco, XLATEOBJ* pxlo, RECTL* prclDest, POINTL* pptlSrc ); BOOL (* DrvAnyBlt )( SURFOBJ* psoDest, SURFOBJ* psoSrc, SURFOBJ* psoMask, CLIPOBJ* pco, XLATEOBJ* pxlo, POINTL* pptlHTOrg, RECTL* prclDest, RECTL* prclSrc, POINTL* pptlMask, BRUSHOBJ* pbo, POINTL* pptlBrush, ROP4 rop4, ULONG iMode, ULONG bltFlags ); BOOL (* DrvTransparentBlt )( SURFOBJ* psoDest, SURFOBJ* psoSrc, CLIPOBJ* pco, XLATEOBJ* pxlo, RECTL* prclDest, RECTL* prclSrc, ULONG TransColor ); BOOL (* DrvSetPalette )( DHPDEV dhpdev, PALOBJ* ppalo, FLONG fl, ULONG iStart, ULONG cColors ); ULONG (* DrvSetPointerShape)( SURFOBJ* pso, SURFOBJ* psoMask, SURFOBJ* psoColor, XLATEOBJ* pxlo, LONG xHot, LONG yHot, LONG x, LONG y, RECTL* prcl, FLONG fl ); VOID (* DrvMovePointer)( SURFOBJ* pso, LONG x, LONG y, RECTL* prcl ); ULONG (* DrvGetModes)( HANDLE hDriver, ULONG cjSize, DEVMODEW* pdm ); ULONG (* DrvRealizeColor )( USHORT iDstType, ULONG cEntries, ULONG* pPalette, ULONG rgbColor ); ULONG* (* DrvGetMasks )( DHPDEV dhpdev ); ULONG (* DrvUnrealizeColor )( USHORT iSrcType, ULONG cEntries, ULONG* pPalette, ULONG iRealizedColor ); BOOL (* DrvContrastControl)( DHPDEV dhpdev, ULONG cmd, ULONG* pValue ); VOID (* DrvPowerHandler)( DHPDEV dhpdev, BOOL bOff ); BOOL (* DrvEndDoc )( IN SURFOBJ* pso, IN FLONG fl ); BOOL (* DrvStartDoc )( IN SURFOBJ* pso, IN PWSTR pwszDocName, IN DWORD dwJobId ); BOOL (* DrvStartPage )( IN SURFOBJ* pso ); ULONG (* DrvEscape )( IN DHPDEV dhpdev, IN SURFOBJ* pso, IN ULONG iEsc, IN ULONG cjIn, IN PVOID pvIn, OUT ULONG cjOut, OUT PVOID pvOut ); BOOL (* DrvGradientFill)( SURFOBJ* pso, CLIPOBJ* pco, XLATEOBJ* pxlo, TRIVERTEX* pVertex, ULONG nVertex, PVOID pMesh, ULONG nMesh, RECTL* prclExtents, POINTL* pptlDitherOrg, ULONG ulMode );} DRVENABLEDATA,* PDRVENABLEDATA;
typedef struct _ENGCALLBACKS { PVOID (* BRUSHOBJ_pvAllocRbrush)( BRUSHOBJ* pbo, ULONG cj ); PVOID (* BRUSHOBJ_pvGetRbrush)( BRUSHOBJ* pbo ); ULONG (* CLIPOBJ_cEnumStart)( CLIPOBJ* pco, BOOL bAll, ULONG iType, ULONG iDirection, ULONG cLimit ); BOOL (* CLIPOBJ_bEnum)( CLIPOBJ* pco, ULONG cj, ULONG* pul ); ULONG (* PALOBJ_cGetColors)( PALOBJ* ppalo, ULONG iStart, ULONG cColors, ULONG* pulColors ); VOID (* PATHOBJ_vEnumStart)( PATHOBJ* ppo ); BOOL (* PATHOBJ_bEnum)( PATHOBJ* ppo, PATHDATA* ppd ); VOID (* PATHOBJ_vGetBounds)( PATHOBJ* ppo, PRECTFX prectfx ); ULONG (* XLATEOBJ_cGetPalette)( XLATEOBJ* pxlo, ULONG iPal, ULONG cPal, ULONG* pPal ); HSURF (* EngCreateDeviceSurface)( DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat ); BOOL (* EngDeleteSurface)( HSURF hsurf ); HBITMAP (* EngCreateDeviceBitmap)( DHSURF dhsurf, SIZEL sizl, ULONG iFormatCompat ); HPALETTE (* EngCreatePalette)( ULONG iMode, ULONG cColors, PULONG pulColors, FLONG flRed, FLONG flGreen, FLONG flBlue );} ENGCALLBACKS,* PENGCALLBACKS;
typedef struct{ ULONG Length; DWORD dwCtlFlags; NDIS_802_11_MAC_ADDRESS MacAddress; UCHAR Reserved[2]; NDIS_802_11_SSID Ssid; ULONG Privacy; NDIS_802_11_RSSI Rssi; NDIS_802_11_NETWORK_TYPE NetworkTypeInUse; NDIS_802_11_CONFIGURATION Configuration; NDIS_802_11_NETWORK_INFRASTRUCTURE InfrastructureMode; NDIS_802_11_RATES SupportedRates; ULONG KeyIndex; ULONG KeyLength; UCHAR KeyMaterial[WZCCTL_MAX_WEPK_MATERIAL]; NDIS_802_11_AUTHENTICATION_MODE AuthenticationMode; RAW_DATA rdUserData; WZC_EAPOL_PARAMS EapolParams; RAW_DATA rdNetworkData; ULONG WPAMCastCipher; ULONG ulMediaType;} WZC_WLAN_CONFIG, *PWZC_WLAN_CONFIG;
struct X { int a[0]; // error, unsized array };
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
struct B {
  void mf();
};
struct D : B {
  void mf() {
    __super.();
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
typedef struct {BYTE AddressType;BYTE Address[DNS_ATMA_MAX_ADDR_LENGTH];} DNS_ATMA_DATA, *PDNS_ATMA_DATA;
struct hostent FAR* gethostbyaddr(const char FAR* addr,int len,int type);
struct hostent FAR* gethostbyname(const char FAR* name);
int recvfrom(SOCKET s,char FAR* buf,int len,int flags,struct sockaddr FAR* from,int FAR* fromlen);
int select(int nfds,fd_set FAR* readfds,fd_set FAR* writefds,fd_set FAR* exceptfds,const struct timeval FAR* timeout);
int sendto(SOCKET s,const char FAR* buf, int len,int flags,const struct sockaddr FAR* to,int tolen);
struct servent {char FAR* s_name;char FAR* FAR* s_aliases;short s_port;char FAR* s_proto;};
struct sockaddr {u_short sa_family;char sa_data[14];};
struct sockaddr_in{shortsin_family;
unsigned shortsin_port;
IN_ADDR sin_addr;
charsin_zero[8];
};
typedef struct sockaddr_storage {short ss_family;char __ss_pad1[_SS_PAD1SIZE];__int64 __ss_align;char __ss_pad2[_SS_PAD2SIZE];} SOCKADDR_STORAGE, *PSOCKADDR_STORAGE;
typedef struct _SOCKET_ADDRESS {LPSOCKADDR lpSockaddr;INT iSockaddrLength;} SOCKET_ADDRESS, *PSOCKET_ADDRESS;
struct timeval {long tv_sec;long tv_usec;};
typedef struct _BLENDFUNCTION { BYTE BlendOp; BYTE BlendFlags; BYTE SourceConstantAlpha; BYTE AlphaFormat;}BLENDFUNCTION, *PBLENDFUNCTION, *LPBLENDFUNCTION;
typedef struct _DISPLAY_DEVICE { DWORD cb; WCHAR DeviceName[32]; WCHAR DeviceString[128]; DWORD StateFlags; WCHAR DeviceID[128]; WCHAR DeviceKey[128];} DISPLAY_DEVICE, *PDISPLAY_DEVICE;
typedef struct _GRADIENT_RECT { ULONG UpperLeft; ULONG LowerRight;}GRADIENT_RECT, *PGRADIENT_RECT;
typedef struct tagKEYBDINPUT { WORD wVk; WORD wScan; DWORD dwFlags; DWORD time; ULONG_PTR dwExtraInfo;} KEYBDINPUT, *PKEYBDINPUT;
typedef struct LVGROUP { UINT cbSize; UINT mask; LPWSTR pszHeader; int cchHeader; LPWSTR pszFooter; int cchFooter; int iGroupId; UINT stateMask; UINT state; UINT uAlign;} LVGROUP, *PLVGROUP;
typedef struct LVGROUPMETRICS { UINT cbSize; UINT mask; UINT Left; UINT Top; UINT Right; UINT Bottom; COLORREF crLeft; COLORREF crTop; COLORREF crRight; COLORREF crBottom; COLORREF crRightHeader; COLORREF crFooter;} LVGROUPMETRICS, *PLVGROUPMETRICS;
typedef struct LVINSERTGROUPSORTED { PFNLVGROUPCOMPARE pfnGroupCompare; LPVOID *pvData; LVGROUP lvGroup;} LVINSERTGROUPSORTED, *PLVINSERTGROUPSORTED;
typedef struct LVSETINFOTIP { UINT cbSize; DWORD dwFlags; LPWSTR pszText; int iItem; int iSubItem;} LVSETINFOTIP, *PLVSETINFOTIP;
typedef struct {DWORD cbSize.;HWND hwndLastFocus.;UINT fSipUp.:1;UINT fSipOnDeactivation. :1;UINT fActive :1;UINT fReserved :29;} SHACTIVATEINFO, *PSHACTIVATEINFO;
typedef struct _SHELLEXECUTEINFO { DWORD cbSize; ULONG fMask; HWND hwnd; LPCTSTR lpVerb; LPCTSTR lpFile; LPCTSTR lpParameters; LPCTSTR lpDirectory; int nShow; HINSTANCE hInstApp; LPVOID lpIDList; LPCTSTR lpClass; HKEY hkeyClass; DWORD dwHotKey; union { HANDLE hIcon; HANDLE hMonitor; } DUMMYUNIONNAME; HANDLE hProcess; } SHELLEXECUTEINFO, FAR* LPSHELLEXECUTEINFO;
typedef struct _SHFILEOPSTRUCT { HWND hwnd; UINT wFunc; LPCWSTR pFrom; LPCWSTR pTo; FILEOP_FLAGS fFlags; BOOL fAnyOperationsAborted; LPVOID hNameMappings; LPCWSTR lpszProgressTitle;} SHFILEOPSTRUCT, *LPSHFILEOPSTRUCT;
typedef struct tagSHINITDIALOG { DWORD dwMask; HWND hDlg; DWORD dwFlags;} SHINITDLGINFO, *PSHINITDLGINFO;
typedef struct tagSHMENUBARINFO { DWORD cbSize; HWND hwndParent; DWORD dwFlags; UINT nToolBarId; HINSTANCE hInstRes; int nBmpId; int cBmpImages; HWND hwndMB; COLORREF clrBk;} SHMENUBARINFO, *PSHMENUBARINFO;
typedef struct tagSHRGI { DWORD cbSize; HWND hwndClient; POINT ptDown; DWORD dwFlags;} SHRGINFO, *PSHRGINFO;
typedef struct tagTOGGLEKEYS{UINT cbSize;DWORD dwFlags;} TOGGLEKEYS, *LPTOGGLEKEYS;
typedef struct tagTOOLINFO {UINT cbSize;UINT uFlags;HWND hwnd;UINT uId;RECT rect;HINSTANCE hinst;LPTSTR lpszText;LPARAM lParam;} TTTOOLINFO, NEAR* PTOOLINFO, FAR* LPTTTOOLINFO;
typedef struct tagTPMPARAMS { UINT cbSize; RECT rcExclude; } TPMPARAMS, FAR* LPTPMPARAMS;
typedef struct _TRIVERTEX { LONG x; LONG y; COLOR16 Red; COLOR16 Green; COLOR16 Blue; COLOR16 Alpha;} TRIVERTEX,*PTRIVERTEX,*LPTRIVERTEX;
typedef struct _TT_HITTESTINFO {HWND hwnd;POINT pt;TTTOOLINFO ti;} TTHITTESTINFO, FAR* LPTTHITTESTINFO;
typedef struct tagDevInfo {DWORD pid;
char szName[MAX_PATH];
char szType[80];
char szPath[MAX_PATH];
} DEVINFO, *PDEVINFO;
typedef struct tagObjUIData {UINT cbStruct;HICON hIconLarge;HICONhIconSmall;charszName[MAX_PATH];charszSyncText[MAX_PATH];charszTypeText[80];charszPlTypeText[80];} OBJUIDATA, *POBJUIDATA;
typedef struct _CE_VOLUME_INFO{DWORD cbSize;DWORD dwAttributes;DWORD dwFlags; DWORD dwBlockSize;TCHAR szStoreName[STORENAMESIZE];TCHARszPartitionName[PARTITIONNAMESIZE]; } CE_VOLUME_INFO, *PCE_VOLUME_INFO, *LPCE_VOLUME_INFO;
typedef struct _FSD_VOLUME_INFO {
  DWORD cbSize;
  DWORD dwFSVersion ;
  TCHAR szFSDDesc[MAX_FSD_DESCRIPTOR];
  TCHAR szFSDSubType[MAX_FSD_DESCRIPTOR];
  DWORD dwAttributes;
  DWORD dwBlockSize;
  DWORD dwFlags;
} FSD_VOLUME_INFO, *PFSD_VOLUME_INFO;
typedef struct _COMMTIMEOUTS { DWORD ReadIntervalTimeout; DWORD ReadTotalTimeoutMultiplier; DWORD ReadTotalTimeoutConstant; DWORD WriteTotalTimeoutMultiplier; DWORD WriteTotalTimeoutConstant; } COMMTIMEOUTS,*LPCOMMTIMEOUTS;
typedef struct _COMSTAT {DWORD fCtsHold :1;DWORD fDsrHold :1;DWORD fRlsdHold :1;DWORD fXoffHold :1;DWORD fXoffSent :1;DWORD fEof :1;DWORD fTxim :1;DWORD fReserved :25;DWORD cbInQue;DWORD cbOutQue;} COMSTAT, *LPCOMSTAT;
typedef struct _DCB {DWORD DCBlength;DWORD BaudRate; DWORD fBinary :1;DWORD fParity :1;DWORD fOutxCtsFlow :1;DWORD fOutxDsrFlow :1;DWORD fDtrControl :2;DWORD fDsrSensitivity :1;DWORD fTXContinueOnXoff :1;DWORD fOutX :1;DWORD fInX :1;DWORD fErrorChar :1;DWORD fNull :1; DWORD fRtsControl :2; DWORD fAbortOnError :1;DWORD fDummy2 :17;WORD wReserved;WORD XonLim; WORD XoffLim;BYTE ByteSize; BYTE Parity; BYTE StopBits;char XonChar; char XoffChar; char ErrorChar;char EofChar; char EvtChar; WORD wReserved1; } DCB, *LPDCB;
typedef struct _MEMORYSTATUS { DWORD dwLength; DWORD dwMemoryLoad; DWORD dwTotalPhys; DWORD dwAvailPhys; DWORD dwTotalPageFile; DWORD dwAvailPageFile; DWORD dwTotalVirtual; DWORD dwAvailVirtual; } MEMORYSTATUS, *LPMEMORYSTATUS;
typedef struct _DEFRAG_PARAMS { DWORD cbSize; DEFRAG_OPTIONS dopt; DEFRAG_RESULTS dr; PFN_PROGRESS pfnProgress; PFN_MESSAGE pfnMessage;} DEFRAG_PARAMS, *PDEFRAG_PARAMS;
typedef struct _FILE_NOTIFY_INFORMATION {DWORD NextEntryOffset; DWORD Action; DWORD FileNameLength; WCHAR FileName[1]; } FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;
struct hostent {char FAR* h_name;char FAR* FAR* h_aliases;short h_addrtype;short h_length;char FAR* FAR* h_addr_list;};
typedef struct _FORMAT_PARAMS { DWORD cbSize; FORMAT_OPTIONS fo; FORMAT_RESULTS fr; PFN_PROGRESS pfnProgress; PFN_MESSAGE pfnMessage;} FORMAT_PARAMS, *PFORMAT_PARAMS;
char FAR* inet_ntoa(struct in_addr in);
typedef struct _IP_ADAPTER_INFO{struct _IP_ADAPTER_INFO* Next;DWORD ComboIndex;Char AdapterName[MAX_ADAPTER_NAME_LENGTH + 4];char Description[MAX_ADAPTER_DESCRIPTION_LENGTH + 4];UINT AddressLength;BYTE Address[MAX_ADAPTER_ADDRESS_LENGTH];DWORD Index;UINT Type;UINT DhcpEnabled;PIP_ADDR_STRING CurrentIpAddress;IP_ADDR_STRING IpAddressList;IP_ADDR_STRING GatewayList;IP_ADDR_STRINGDhcpServer;BOOL HaveWins;IP_ADDR_STRING PrimaryWinsServer;IP_ADDR_STRING SecondaryWinsServer;time_t LeaseObtained;time_t LeaseExpires;} IP_ADAPTER_INFO, *PIP_ADAPTER_INFO;
typedef struct {DWORD cbSize;TCHAR szPartitionName[PARTITIONNAMESIZE];TCHAR szFileSys[FILESYSNAMESIZE];TCHARszVolumeName[VOLUMENAMESIZE];SECTORNUM snNumSectors;FILETIME ftCreated;FILETIME ftLastModified;DWORD dwAttributes;BYTE bPartType;} PARTINFO, *PPARTINFO;
typedef struct _PD_PARTINFO {DWORD cbSize;TCHAR szPartitionName[PARTITIONNAMESIZE];SECTORNUM snNumSectors;FILETIME ftCreated;FILETIME ftLastModified;DWORD dwAttributes;BYTE bPartType;} PD_PARTINFO, *PPD_PARTINFO;
typedef struct _SCAN_PARAMS { DWORD cbSize; SCAN_OPTIONS so; SCAN_RESULTS sr; PFN_PROGRESS pfnProgress; PFN_MESSAGE pfnMessage;} SCAN_PARAMS, *PSCAN_PARAMS;
typedef struct tagSTORAGEDEVICEINFO {DWORD cbSize;TCHAR szProfile[PROFILENAMESIZE];DWORD dwDeviceClass;DWORD dwDeviceType;DWORD dwDeviceFlags;} STORAGEDEVICEINFO, *PSTORAGEDEVICEINFO;
struct linger {u_short l_onoff;u_short l_linger;};
typedef struct _MIB_IFROW {WCHAR wszName[MAX_INTERFACE_NAME_LEN];DWORD dwIndex;DWORD dwType;DWORD dwMtu;DWORD dwSpeed;DWORD dwPhysAddrLen;BYTE bPhysAddr[MAXLEN_PHYSADDR];DWORD dwAdminStatus;DWORD dwOperStatus;DWORD dwLastChange;DWORD dwInOctets;DWORD dwInUcastPkts;DWORD dwInNUcastPkts;DWORD dwInDiscards;DWORD dwInErrors;DWORD dwInUnknownProtos;DWORD dwOutOctets;DWORD dwOutUcastPkts;DWORD dwOutNUcastPkts;DWORD dwOutDiscards;DWORD dwOutErrors;DWORD dwOutQLen;DWORD dwDescrLen;BYTE bDescr[MAXLEN_IFDESCR];} MIB_IFROW, *PMIB_IFROW;
typedef struct _MIB_IFTABLE {DWORD dwNumEntries; MIB_IFROWtable[ANY_SIZE];} MIB_IFTABLE,*PMIB_IFTABLE;
typedef struct _MIB_IPADDRTABLE {DWORD dwNumEntries;MIB_IPADDRROWtable[ANY_SIZE];} MIB_IPADDRTABLE, *PMIB_IPADDRTABLE;
typedef struct _MIB_IPFORWARDTABLE {DWORD dwNumEntries;MIB_IPFORWARDROWtable[ANY_SIZE];} MIB_IPFORWARDTABLE, *PMIB_IPFORWARDTABLE;
typedef struct _MIB_IPNETROW {DWORD dwIndex;DWORD dwPhysAddrLen;BYTE bPhysAddr[MAXLEN_PHYSADDR];DWORD dwAddr;DWORD dwType;} MIB_IPNETROW,*PMIB_IPNETROW;
typedef struct _MIB_IPNETTABLE {DWORD dwNumEntries;MIB_IPNETROWtable[ANY_SIZE];} MIB_IPNETTABLE,*PMIB_IPNETTABLE;
typedef struct _MIB_TCPTABLE {DWORD dwNumEntries; MIB_TCPROW table[ANY_SIZE];} MIB_TCPTABLE,*PMIB_TCPTABLE;
typedef struct _MIB_UDPTABLE {DWORD dwNumEntries;MIB_UDPROWtable[ANY_SIZE];} MIB_UDPTABLE,*PMIB_UDPTABLE;
typedef struct tagSTGMEDIUM {unsigned long tymed;union {HBITMAP hBitmap;HMETAFILEPICT hMetaFilePict;HENHMETAFILE hEnhMetaFile;HGLOBAL hGlobal;LPOLESTR lpszFileName;Istream* pstm;IStorage* pstg;}u;IUnknown* pUnkForRelease; } uSTGMEDIUM;
struct protoent {char FAR* p_name;char FAR* FAR* p_aliases;short p_proto;};
typedef struct _DDKISRINFO_tag {DWORD cbSize;DWORD dwIrq;DWORD dwSysintr;WCHAR szIsrDll[DEVDLL_LEN];WCHAR szIsrHandler[DEVENTRY_LEN];} DDKISRINFO, *PDDKISRINFO;
typedef struct _DDKPCIINFO_tag {DWORD cbSize;DWORD dwDeviceNumber;DWORD dwFunctionNumber;DWORD dwInstanceIndex;DWORD dwWhichIds;DWORD idVals[PCIID_MAXNUMIDS];} DDKPCIINFO, *PDDKPCIINFO;
typedef struct _DDKWINDOWINFO_tag {DWORD cbSize; DWORD dwBusNumber;DWORD dwInterfaceType;DWORD dwNumIoWindows;DEVICEWINDOW ioWindows[MAX_DEVICE_WINDOWS];DWORD dwNumMemWindows;DEVICEWINDOW memWindows[MAX_DEVICE_WINDOWS];} DDKWINDOWINFO, *PDDKWINDOWINFO;
typedef struct _DevmgrDeviceInformation_tag { DWORD dwSize; HANDLE hDevice; HANDLE hParentDevice; WCHAR szLegacyName[6]; WCHAR szDeviceKey[MAX_PATH]; WCHAR szDeviceName[MAX_PATH]; WCHAR szBusName[MAX_PATH];} DEVMGR_DEVICE_INFORMATION, *PDEVMGR_DEVICE_INFORMATION;
typedef struct _devicemodew { WCHAR dmDeviceName[CCHDEVICENAME]; WORD dmSpecVersion; WORD dmDriverVersion; WORD dmSize; WORD dmDriverExtra; DWORD dmFields; short dmOrientation; short dmPaperSize; short dmPaperLength; short dmPaperWidth; short dmScale; short dmCopies; short dmDefaultSource; short dmPrintQuality; short dmColor; short dmDuplex; short dmYResolution; short dmTTOption; short dmCollate; WCHAR dmFormName[CCHFORMNAME]; WORD dmLogPixels; DWORD dmBitsPerPel; DWORD dmPelsWidth; DWORD dmPelsHeight; DWORD dmDisplayFlags; DWORD dmDisplayFrequency; DWORD dmDisplayOrientation;} DEVMODEW,* PDEVMODEW,* NPDEVMODEW,* LPDEVMODEW;
typedef struct __WSABUF {u_long len;char FAR* buf;} WSABUF, FAR* LPWSABUF;
typedef struct _WSACOMPLETION { WSACOMPLETIONTYPE Type; union { struct { HWND hWnd; UINT uMsg; WPARAM context; } WindowMessage; struct { LPWSAOVERLAPPED lpOverlapped; } Event; struct { LPWSAOVERLAPPED lpOverlapped; LPWSAOVERLAPPED_COMPLETION_ROUTINE lpfnCompletionProc; } Apc; struct { LPWSAOVERLAPPED lpOverlapped; HANDLE hPort; ULONG_PTR Key; } Port; } Parameters;} WSACOMPLETION, *PWSACOMPLETION, FAR *LPWSACOMPLETION;
int WSAConnect(SOCKET s,const struct sockaddr FAR* name,int namelen,LPWSABUF lpCallerData,LPWSABUF lpCalleeData,LPQOS lpSQOS,LPQOS lpGQOS);
typedef struct WSAData {WORD wVersion;WORD wHighVersion;char szDescription[WSADESCRIPTION_LEN+1];char szSystemStatus[WSASYS_STATUS_LEN+1];unsigned short iMaxSockets;unsigned short iMaxUdpDg;char FAR* lpVendorInfo;} WSADATA, *LPWSADATA;
SOCKET WSAJoinLeaf(SOCKET s,const struct sockaddr FAR* name,int namelen,LPWSABUF lpCallerData,LPWSABUF lpCalleeData,LPQOS lpSQOS,LPQOS lpGQOS,DWORD dwFlags);
typedef struct _WSANAMESPACE_INFO {GUID NSProviderId;DWORD dwNameSpace;BOOL fActive;DWORD dwVersion;LPTSTR lpszIdentifier;} WSANAMESPACE_INFO, *PWSANAMESPACE_INFO;
typedef struct _WSANETWORKEVENTS {long lNetworkEvents;int iErrorCode[FD_MAX_EVENTS];} WSANETWORKEVENTS, *LPWSANETWORKEVENTS;
typedef struct _WSAOVERLAPPED {DWORD Internal;DWORD InternalHigh;DWORD Offset;DWORD OffsetHigh;WSAEVENT hEvent;} WSAOVERLAPPED, *LPWSAOVERLAPPED;
typedef struct _WSAPROTOCOLCHAIN {int ChainLen;DWORD ChainEntries[MAX_PROTOCOL_CHAIN];} WSAPROTOCOLCHAIN, *LPWSAPROTOCOLCHAIN;
typedef struct _WSAPROTOCOL_INFO {DWORD dwServiceFlags1;DWORD dwServiceFlags2;DWORD dwServiceFlags3;DWORD dwServiceFlags4;DWORD dwProviderFlags;GUID ProviderId;DWORD dwCatalogEntryId;WSAPROTOCOLCHAIN ProtocolChain;int iVersion;int iAddressFamily;int iMaxSockAddr;int iMinSockAddr;int iSocketType;int iProtocol;int iProtocolMaxOffset;int iNetworkByteOrder;int iSecurityScheme;DWORD dwMessageSize;DWORD dwProviderReserved;TCHAR szProtocol[WSAPROTOCOL_LEN+1];} WSAPROTOCOL_INFO, *LPWSAPROTOCOL_INFO;
typedef struct _WSAQuerySet {DWORD dwSize;LPTSTR lpszServiceInstanceName;LPGUID lpServiceClassId;LPWSAVERSION lpVersion;LPTSTR lpszComment;DWORD dwNameSpace;LPGUID lpNSProviderId;LPTSTR lpszContext;DWORD dwNumberOfProtocols;LPAFPROTOCOLS lpafpProtocols;LPTSTR lpszQueryString;DWORD dwNumberOfCsAddrs;LPCSADDR_INFO lpcsaBuffer;DWORD dwOutputFlags;LPBLOB lpBlob;} WSAQUERYSET, *PWSAQUERYSETW;
int WSARecvFrom(SOCKET s,LPWSABUF lpBuffers,DWORD dwBufferCount,LPDWORD lpNumberOfBytesRecvd,LPDWORD lpFlags,struct sockaddr FAR* lpFrom,LPINT lpFromlen,LPWSAOVERLAPPED lpOverlapped,LPWSAOVERLAPPED_COMPLETION_ROUTINE lpCompletionRoutine);
typedef struct _WSAServiceClassInfo {LPGUID lpServiceClassId;LPTSTR lpszServiceClassName;DWORD dwCount;LPWSANSCLASSINFOW lpClassInfos;} WSASERVICECLASSINFO, *PWSASERVICECLASSINFOW;
typedef struct _ABC { int abcA; UINT abcB; int abcC; } ABC, *PABC;
typedef struct tagKEYBD_PDD { WORD wPddMask; LPCTSTR pszName; PFN_KEYBD_PDD_POWER_HANDLER pfnPowerHandler; PFN_KEYBD_PDD_TOGGLE_LIGHTS pfnToggleLights;} KEYBD_PDD, *PKEYBD_PDD;
typedef struct _IMAGE_DATA_DIRECTORY {DWORD VirtualAddress;DWORD Size;} IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;
typedef struct _MEMORY_SECTION {DWORD dwFlags;DWORD dwStart;DWORD dwLen;} MEMORY_SECTION, *PMEMORY_SECTION;
typedef struct {DWORD dwNotificationType;TCHAR ptcDeviceName[MAX_PATH]; UINT uiOffsetToStatusBuffer; UINT uiStatusBufferSize;} NDISUIO_DEVICE_NOTIFICATION, *PNDISUIO_DEVICE_NOTIFICATION;
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
typedef struct _DDCAPS { DWORD dwSize; DWORD dwCaps; DWORD dwCaps2; DWORD dwCKeyCaps; DWORD dwFXCaps; DWORD dwFXAlphaCaps; DWORD dwPalCaps; DWORD dwSVCaps; DWORD dwAlphaBltConstBitDepths; DWORD dwAlphaBltPixelBitDepths; DWORD dwAlphaBltSurfaceBitDepths; DWORD dwAlphaOverlayConstBitDepths; DWORD dwAlphaOverlayPixelBitDepths; DWORD dwAlphaOverlaySurfaceBitDepths; DWORD dwZBufferBitDepths; DWORD dwVidMemTotal; DWORD dwVidMemFree; DWORD dwMaxVisibleOverlays; DWORD dwCurrVisibleOverlays; DWORD dwNumFourCCCodes; DWORD dwAlignBoundarySrc; DWORD dwAlignSizeSrc; DWORD dwAlignBoundaryDest; DWORD dwAlignSizeDest; DWORD dwAlignStrideAlign; DWORD dwRops[DD_ROP_SPACE]; DWORD dwReservedCaps; DWORD dwMinOverlayStretch; DWORD dwMaxOverlayStretch; DWORD dwMinLiveVideoStretch; DWORD dwMaxLiveVideoStretch; DWORD dwMinHwCodecStretch; DWORD dwMaxHwCodecStretch; DWORD dwReserved1; DWORD dwReserved2; DWORD dwReserved3; DWORD dwSVBCaps; DWORD dwSVBCKeyCaps; DWORD dwSVBFXCaps; DWORD dwSVBRops[DD_ROP_SPACE]; DWORD dwVSBCaps; DWORD dwVSBCKeyCaps; DWORD dwVSBFXCaps; DWORD dwVSBRops[DD_ROP_SPACE]; DWORD dwSSBCaps; DWORD dwSSBCKeyCaps; DWORD dwSSBCFXCaps; DWORD dwSSBRops[DD_ROP_SPACE]; DWORD dwMaxVideoPorts; DWORD dwCurrVideoPorts; DWORD dwSVBCaps2; DWORD dwNLVBCaps; DWORD dwNLVBCaps2; DWORD dwNLVBCKeyCaps; DWORD dwNLVBFXCaps; DWORD dwNLVBRops[DD_ROP_SPACE]; DDSCAPS2 ddsCaps;} DDCAPS,FAR *LPDDCAPS;
#pragma keyword("interface", on)
struct IUnknown {
};
interface IMyIF {
  [ property(put=0, put=0) ]
  int data;
};
typedef struct tagINPUT {DWORD type;union{ MOUSEINPUT mi;KEYBDINPUT ki;HARDWAREINPUT hi; };} INPUT, *PINPUT, FAR* LPINPUT;
typedef struct tagMENUITEMINFO {UINT cbSize; UINT fMask; UINT fType; UINT fState; UINT wID; HMENU hSubMenu; HBITMAP hbmpChecked; HBITMAP hbmpUnchecked; DWORD dwItemData; LPTSTR dwTypeData; UINT cch; } MENUITEMINFO, FAR* LPMENUITEMINFO;
typedef struct tagNMTTCUSTOMDRAW {NMCUSTOMDRAW nmcd;UINT uDrawFlags;} NMTTCUSTOMDRAW, FAR* LPNMTTCUSTOMDRAW;
typedef struct tagNMTTDISPINFO {NMHDR hdr;LPTSTR lpszText;TCHAR szText[80];HINSTANCE hinst;UINT uFlags;LPARAM lParam;} NMTTDISPINFO, FAR* LPNMTTDISPINFO;
typedef struct _NM_UPDOWN {NMHDR hdr;int iPos;int iDelta;} NMUPDOWN, FAR* LPNMUPDOWN;
typedef struct _NOTIFYICONDATA { DWORD cbSize; HWND hWnd; UINT uID; UINT uFlags; UINT uCallbackMessage; HICON hIcon; WCHAR szTip[64]; } NOTIFYICONDATA, *PNOTIFYICONDATA;
typedef struct _OFNOTIFY { NMHDR hdr; LPOPENFILENAME lpOFN;LPTSTR pszFile;} OFNOTIFY, FAR* LPOFNOTIFY;
typedef struct _RECTL { LONG left; LONG top; LONG right; LONG bottom; } RECTL, *PRECTL;
typedef struct _TVHITTESTINFO { POINT pt; UINT flags; HTREEITEM hItem; } TVHITTESTINFO, FAR* LPTVHITTESTINFO;
typedef struct _TVITEM { tviUINT mask; HTREEITEM hItem; UINT state; UINT stateMask; LPSTR pszText; int cchTextMax; int iImage; int iSelectedImage; int cChildren; LPARAM lParam; } TVITEM, FAR* LPTVITEM;
typedef struct _TVSORTCB { HTREEITEM hParent; PFNTVCOMPARE lpfnCompare; LPARAM lParam; } TVSORTCB, FAR* LPTVSORTCB;
typedef struct _TV_INSERTSTRUCT { HTREEITEM hParent; HTREEITEM hInsertAfter; TV_ITEM item; } TV_INSERTSTRUCT, FAR* LPTV_INSERTSTRUCT;
typedef struct _TV_ITEM { tviUINT mask; HTREEITEM hItem; UINT state; UINT stateMask; LPSTR pszText; int cchTextMax; int iImage; int iSelectedImage; int cChildren; LPARAM lParam; } TV_ITEM, FAR* LPTV_ITEM;
typedef struct tagRFC1766INFO {LCIDlcid;WCHARwszRfc1766[MAX_RFC1766_NAME];WCHARwszLocaleName[MAX_LOCALE_NAME];} RFC1766INFO, *PRFC1766INFO;
typedef struct _PCI_COMMON_CONFIG {USHORT VendorID; USHORT DeviceID; USHORT Command; USHORT Status;UCHAR RevisionID; UCHAR ProgIf; UCHAR SubClass; UCHAR BaseClass; UCHAR CacheLineSize; UCHAR LatencyTimer; UCHAR HeaderType; UCHAR BIST; union { struct _PCI_HEADER_TYPE_0 { ULONG BaseAddresses[PCI_TYPE0_ADDRESSES]; ULONG CIS; USHORT SubVendorID;USHORT SubSystemID;ULONG ROMBaseAddress;ULONG Reserved2[2];UCHAR InterruptLine; UCHAR InterruptPin; UCHAR MinimumGrant; UCHAR MaximumLatency; } type0;struct _PCI_HEADER_TYPE_1 { ULONG BaseAddresses[PCI_TYPE1_ADDRESSES]; UCHAR PrimaryBusNumber; UCHAR SecondaryBusNumber; UCHAR SubordinateBusNumber;UCHAR SecondaryLatencyTimer; UCHAR IOBase; UCHAR IOLimit;USHORT SecondaryStatus; USHORT MemoryBase; USHORT MemoryLimit;USHORT PrefetchableMemoryBase; USHORT PrefetchableMemoryLimit; ULONG PrefetchableMemoryBaseUpper32;ULONG PrefetchableMemoryLimitUpper32; USHORT IOBaseUpper; USHORT IOLimitUpper;ULONG Reserved2; ULONG ExpansionROMBase; UCHAR InterruptLine;UCHAR InterruptPin; USHORT BridgeControl;} type1;struct _PCI_HEADER_TYPE_2 { ULONG BaseAddress; UCHAR CapabilitiesPtr;UCHAR Reserved2; USHORT SecondaryStatus; UCHAR PrimaryBusNumber;UCHAR CardbusBusNumber; UCHAR SubordinateBusNumber; UCHAR CardbusLatencyTimer;ULONG MemoryBase0; ULONG MemoryLimit0; ULONG MemoryBase1;ULONG MemoryLimit1; USHORT IOBase0_LO; USHORT IOBase0_HI; USHORT IOLimit0_LO;USHORT IOLimit0_HI; USHORT IOBase1_LO; USHORT IOBase1_HI;USHORT IOLimit1_LO; USHORT IOLimit1_HI; UCHAR InterruptLine;UCHAR InterruptPin; USHORT BridgeControl; USHORT SubVendorID;USHORT SubSystemID; ULONG LegacyBaseAddress; UCHAR Reserved3[56];ULONG SystemControl; UCHAR MultiMediaControl; UCHAR GeneralStatus;UCHAR Reserved4[2]; UCHAR GPIO0Control; UCHAR GPIO1Control;UCHAR GPIO2Control; UCHAR GPIO3Control; ULONG IRQMuxRouting;UCHAR RetryStatus; UCHAR CardControl; UCHAR DeviceControl;UCHAR Diagnostic;} type2;} u; UCHAR DeviceSpecific[108];} PCI_COMMON_CONFIG , *PPCI_COMMON_CONFIG;
typedef struct _PCI_DEV_INFO {WCHAR RegPath[DEVKEY_LEN];DWORD Bus;DWORD Device;DWORD Function;PPCI_COMMON_CONFIG Cfg;PCI_RSRC_LIST MemBase;PCI_RSRC_LIST MemLen;PCI_RSRC_LIST IoBase;PCI_RSRC_LIST IoLen;BOOL Matched;BOOL Configure;BOOL ConfigEntry;WCHAR ConfigEntryName[DEVENTRY_LEN];WCHAR ConfigDllName[DEVDLL_LEN];WCHAR DllName[DEVDLL_LEN];DWORD DevFlags;PPCI_CFG_INFO ConfigInfo;DWORD Command;DWORD BridgeControl;DWORD Latency;DWORD SecondaryLatency;} PCI_DEV_INFO, *PPCI_DEV_INFO;
typedef struct _PCI_REG_INFO {WCHAR RegPath[DEVKEY_LEN];DWORD Bus;DWORD Device;DWORD Function;PCI_COMMON_CONFIG Cfg;PCI_REG_LIST MemBase;PCI_REG_LIST MemLen;PCI_REG_LIST IoBase;PCI_REG_LIST IoLen;DWORD SysIntr;} PCI_REG_INFO, *PPCI_REG_INFO;
typedef struct _PCI_REG_LIST {DWORD Num;DWORD Reg[PCI_TYPE0_ADDRESSES];} PCI_REG_LIST, *PPCI_REG_LIST;
typedef struct _SD_COMMAND_RESPONSE {SD_RESPONSE_TYPEResponseType; UCHARResponseBuffer[SDCARD_RESPONSE_BUFFER_BYTES];} SD_COMMAND_RESPONSE, *PSD_COMMAND_RESPONSE;
typedef struct _SG_REQ {DWORD sr_start;DWORD sr_num_sec;DWORD sr_num_sg;DWORD sr_status;PFN_REQDONE sr_callback;SG_BUF sr_sglist[1];} SG_REQ, *PSG_REQ;
struct S; union S;
typedef struct tagCOMBOBOXINFO { DWORD cbSize; RECT rcItem; RECT rcButton; DWORD stateButton; HWND hwndCombo; HWND hwndItem; HWND hwndList;} COMBOBOXINFO, *PCOMBOBOXINFO, *LPCOMBOBOXINFO;
typedef struct tagHIGHCONTRAST{UINT cbSize;DWORD dwFlags;LPTSTR lpszDefaultScheme;} HIGHCONTRAST, FAR* LPHIGHCONTRAST;
typedef struct tagMOUSEINPUT { LONG dx; LONG dy; DWORD mouseData; DWORD dwFlags; DWORD time; ULONG_PTR dwExtraInfo;} MOUSEINPUT, *PMOUSEINPUT;
typedef struct tagMOUSEKEYS{UINT cbSize;DWORD dwFlags;DWORD iMaxSpeed;DWORD iTimeToMaxSpeed;DWORD iCtrlSpeed;DWORD dwReserved1;DWORD dwReserved2;} MOUSEKEYS, *LPMOUSEKEYS;
typedef struct _NETUI_RESPWD {TCHARszPassword[PWLEN +1];TCHARszResourceName[RMLEN];} NETUI_RESPWD, *PNETUI_RESPWD;
typedef struct tagMONITORINFO {DWORD cbSize;RECT rcMonitor;RECT rcWork;DWORD dwFlags;} MONITORINFO, *LPMONITORINFO;
typedef struct tagMONITORINFOEX {DWORD cbSize;RECT rcMonitor;RECT rcWork;DWORD dwFlags;TCHAR szDevice [CCHDEVICENAME];} MONITORINFOEX, *LPMONITORINFOEX;
typedef struct _OUTLINETEXTMETRICW { UINT otmSize; TEXTMETRIC otmTextMetrics; BYTE otmFiller; PANOSE otmPanoseNumber; UINT otmfsSelection; UINT otmfsType; int otmsCharSlopeRise; int otmsCharSlopeRun; int otmItalicAngle; UINT otmEMSquare; int otmAscent; int otmDescent; UINT otmLineGap; UINT otmsCapEmHeight; UINT otmsXHeight; RECT otmrcFontBox; int otmMacAscent; int otmMacDescent; UINT otmMacLineGap; UINT otmusMinimumPPEM; POINT otmptSubscriptSize; POINT otmptSubscriptOffset; POINT otmptSuperscriptSize; POINT otmptSuperscriptOffset; UINT otmsStrikeoutSize; int otmsStrikeoutPosition; int otmsUnderscoreSize; int otmsUnderscorePosition; PSTR otmpFamilyName; PSTR otmpFaceName; PSTR otmpStyleName; PSTR otmpFullName; } OUTLINETEXTMETRICW, *POUTLINETEXTMETRICW;
typedef struct _CMSG_STREAM_INFO { DWORD cbContent; PFN_CMSG_STREAM_OUTPUT pfnStreamOutput; void* pvArg;} CMSG_STREAM_INFO, *PCMSG_STREAM_INFO;
typedef struct tagSOUNDSENTRY{UINT cbSize;DWORD dwFlags;DWORD iFSTextEffect;DWORD iFSTextEffectMSec;DWORD iFSTextEffectColorBits;DWORD iFSGrafEffect;DWORD iFSGrafEffectMSec;DWORD iFSGrafEffectColor;DWORD iWindowsEffect;DWORD iWindowsEffectMSec;LPTSTR lpszWindowsEffectDLL;DWORD iWindowsEffectOrdinal;} SOUNDSENTRY, *LPSOUNDSENTRY;
typedef struct tagSTICKYKEYS{UINT cbSize;DWORD dwFlags;} STICKYKEYS, *LPSTICKYKEYS;
typedef struct tagSTYLESTRUCT { DWORD styleOld; DWORD styleNew; } STYLESTRUCT, *LPSTYLESTRUCT;
typedef struct { INSTANCE hInst; INT nID; } TBADDBITMAP, *LPTBADDBITMAP;
typedef struct _IMAGE_CE_RUNTIME_FUNCTION_ENTRY { unsigned int FuncStart : 32; unsigned int PrologLen : 8; unsigned int FuncLen : 22; unsigned int ThirtyTwoBit : 1; unsigned int ExceptionFlag : 1;} IMAGE_CE_RUNTIME_FUNCTION_ENTRY,*PIMAGE_CE_RUNTIME_FUNCTION_ENTRY;
struct PDATA_EH { unsigned int* pHandler; unsigned int* pHandlerData;};
typedef struct IDirect3D8 *LPDIRECT3D8, *PDIRECT3D8;
typedef struct IDirect3DBaseTexture8 *LPDIRECT3DBASETEXTURE8, *PDIRECT3DBASETEXTURE8;
typedef struct IDirect3DDevice8 *LPDIRECT3DDEVICE8, *PDIRECT3DDEVICE8;
typedef struct IDirect3DIndexBuffer8 *LPDIRECT3DINDEXBUFFER8, *PDIRECT3DINDEXBUFFER8;
typedef struct IDirect3DResource8 *LPDIRECT3DRESOURCE8, *PDIRECT3DRESOURCE8;
typedef struct IDirect3DSurface8 *LPDIRECT3DSURFACE8, *PDIRECT3DSURFACE8;
typedef struct IDirect3DSwapChain8 *LPDIRECT3DSWAPCHAIN8, *PDIRECT3DSWAPCHAIN8;
typedef struct IDirect3DTexture8 *LPDIRECT3DTEXTURE8, *PDIRECT3DTEXTURE8;
typedef struct IDirect3DVertexBuffer8 *LPDIRECT3DVERTEXBUFFER8, *PDIRECT3DVERTEXBUFFER8;
typedef struct _DMUS_PORTCAPS {
  DWORD dwSize;
  DWORD dwFlags;
  GUID guidPort;
  DWORD dwClass;
  DWORD dwType;
  DWORD dwMemorySize;
  DWORD dwMaxChannelGroups;
  DWORD dwMaxVoices;
  DWORD dwMaxAudioChannels;
  DWORD dwEffectFlags;
  WCHAR wszDescription[DMUS_MAX_DESCRIPTION];
} DMUS_PORTCAPS, *LPDMUS_PORTCAPS;
typedef struct {
  SYSTEMTIME stStartTime;
  SYSTEMTIME stDeltaTime;
  DWORD dwFlags;
  TCHAR wzDest [MAX_PATH];
  TCHAR wzCmdLine [MAX_PATH];
} DMSDLINFO, *PDMSDLINFO;
typedef struct { TCHAR wzPackageID [DEVICE_ID_LEN]; DWORD dwState; } DMSINVPKGID, *PDMSINVPKGID;
SOCKET WSAAccept( SOCKET s, struct SOCK_ADDR* addr, LPINT addrlen, LPCONDITIONPROC lpfnCondition, DWORD dwCallbackData );
typedef struct tagIMEMENUITEMINFO {
  UINT cbSize;
  UINT fType;
  UINT fState;
  UINT wID;
  HBITMAP hbmpChecked;
  HBITMAP hbmpUnchecked;
  DWORD dwItemData;
  WCHAR szString[IMEMENUITEM_STRING_SIZE];
  HBITMAP hbmpItem;
} IMEMENUITEMINFO, *PIMEMENUITEMINFO, NEAR *NPIMEMENUITEMINFO, FAR *LPIMEMENUITEMINFO;
typedef struct _NKGLOBAL {
  DWORD dwVersion;
  PFN_WriteDebugString pfnWriteDebugString;
  void (*pfnNKvDbgPrintfW) (LPCWSTR lpszFmt, va_list lpParms);
  int (*pfnNKwvsprintfW) (LPWSTR lpOut, LPCWSTR lpFmt, va_list lpParms, int maxchars);
  void (*pfnSetLastError) (DWORD dwErr);
  DWORD (*pfnGetLastError) (void);
  void (WINAPI *pfnInitializeCS) (LPCRITICAL_SECTION lpcs);
  void (WINAPI *pfnDeleteCS) (LPCRITICAL_SECTION lpcs);
  void (WINAPI *pfnEnterCS) (LPCRITICAL_SECTION lpcs);
  void (WINAPI *pfnLeaveCS) (LPCRITICAL_SECTION lpcs);
  void (*pfnINT_OFF) (void);
  void (*pfnINT_ON) (void);
  BOOL (*pfnINT_ENABLE) (BOOL fEnable);
  BOOL (*pfnHookInterrupt) (int hwInterruptNumber, FARPROC pfnHandler);
  BOOL (*pfnUnhookInterrupt) (int hwInterruptNumber, FARPROC pfnHandler);
  DWORD (*pfnNKCallIntChain) (BYTE irq);
  BOOL (*pfnNKIsSysIntrValid) (DWORD idInt);
  BOOL (*pfnNKSetInterruptEvent) (DWORD idInt);
  void (*pfnSleep) (DWORD cmsec);
  BOOL (*pfnVMSetAttrib) (LPVOID lpvAddress, DWORD cbSize, DWORD dwNewFlags, DWORD dwMask, LPDWORD lpdwOldFlags);
  LPVOID (*pfnCreateStaticMapping) (DWORD dwPhysBase, DWORD dwSize);
  LONG (*pfnRegCreateKeyExW) (HKEY hKey, LPCWSTR lpSubKey, DWORD Reserved, LPWSTR lpClass, DWORD dwOptions, REGSAM samDesired, LPSECURITY_ATTRIBUTES lpsa, PHKEY phkResult, LPDWORD lpdwDisp);
  LONG (*pfnRegCloseKey) (HKEY hKey);
  LONG (*pfnRegQueryValueExW) (HKEY hKey, LPCWSTR lpValueName, LPDWORD lpReserved, LPDWORD lpType, LPBYTE lpData, LPDWORD lpcbData);
  LONG (*pfnRegSetValueExW) (HKEY hKey, LPCWSTR lpValueName, DWORD dwReserved, DWORD dwType, LPBYTE lpData, DWORD cbData);
  void (*pfnNKForceCleanBoot) (void);
  BOOL (*pfnNKReboot) (BOOL fClean);
  LPVOID (*pfnPhysToVirt) (DWORD dwShiftedPhysAddr, BOOL fCached);
  LPVOID (*pfnVirtToPhys) (DWORD dwVirtAddr);
  PFN_Ioctl pfnKITLIoctl;
  DWORD (*pfnNKwcslen) (const wchar_t * wcs);
  int (*pfnNKwcscmp) (const wchar_t * pwc1, const wchar_t * pwc2);
  int (*pfnNKwcsicmp) (LPCWSTR str1, LPCWSTR str2);
  int (*pfnNKwcsnicmp) (LPCWSTR str1, LPCWSTR str2, int cchLen);
  void (*pfnNKwcscpy) (LPWSTR p1, LPCWSTR p2);
  DWORD (*pfnNKwcsncpy) (LPWSTR pDst, LPCWSTR pSrc, DWORD cchLen);
  int (*pfnNKstrcmpiAandW) (LPCSTR lpa, LPCWSTR lpu);
  void (*pfnNKUnicodeToAscii) (LPSTR chptr, LPCWSTR wchptr, int maxlen);
  void (*pfnNKAsciiToUnicode) (LPWSTR wchptr, LPCSTR chptr, int maxlen);
  BOOL (*pfnSystemTimeToFileTime) (const SYSTEMTIME *pst, LPFILETIME pft);
  BOOL (*pfnFileTimeToSystemTime) (const FILETIME *pft, LPSYSTEMTIME pst);
  LONG (*pfnCompareFileTime) (const FILETIME *, const FILETIME *);
  void (*pfnProfilerHit) (UINT addr);
  DWORD (*pfnGetEPC) (void);
  DWORD dwStartupAddr;
  volatile DWORD dwNextReschedTime;
  volatile DWORD dwCurMSec;
  volatile LARGE_INTEGER liIdle;
  DWORD dwIdleConv;
  DWORD dwMaxThreadPerProc;
  DWORD dwProcessorType;
  WORD wProcessorLevel;
  WORD wProcessorRevision;
  DWORD dwInstructionSet;
  DBGPARAM *pKITLDbgZOne;
  #ifdef x86
  FARPROC pfn_except_handler3;
  FARPROC pfn__abnormal_termination;
  BOOL (*pfnX86wrmsr) (DWORD dwAddr, DWORD dwValHigh, DWORD dwValLow);
  BOOL (*pfnX86rdmsr) (DWORD dwAddr, DWORD *lpdwValHigh, DWORD *lpdwValLow);
  #else
  FARPROC pfn__C_specific_handler;
  #endif
  #ifdef SH4
  BYTE *IntrPrio;
  DWORD *InterruptTable;
  #endif
  #ifdef ARM
  const DWORD *pdwOrigVectors;
  LPDWORD pdwCurrVectors;
  #endif
} NKGLOBAL, *PNKGLOBAL;
typedef struct tagDMPFILEINFO {
  WORD wBucketParams;
  LPWSTR rgwzBucketParams[MAX_BUCKETPARAMS];
  LPWSTR pwzQueryString;
  LPWSTR pwzAppName;
  LPWSTR pwzFilesToKeep;
  LPWSTR pwzFilesToDelete;
  BOOL fGenericParams;
} DMPFILEINFO, *PDMPFILEINFO;
struct RNDIS_PDD_CHARACTERISTICS {
  PFN_PDD_SEND_RNDIS_MESSAGE SendRndisMessageHandler;
  PFN_PDD_SEND_RNDIS_PACKET SendRndisPacketHandler;
  PFN_PDD_INDICATE_RNDIS_PACKET_COMPLETE
  IndicateRndisPacketCompleteHandler;
  PFN_PDD_SET SetHandler;
  PFN_PDD_GET GetHandler;
  PFN_PDD_ISR ISRHandler;
  DWORD dwIRQ;
  DWORD dwMaxRx;
  DWORD dwBaseAddr;
};
typedef struct _ReservedReq {
  CHAR szName[RESERVED_NAME_LEN];
  DWORD dwStart;
  DWORD dwLen;
  LPBYTE pBuffer;
} ReservedReq, *PReservedReq;
typedef struct _RESOLVER_INFORMATION {
  PLUGIN_INFORMATION pluginInfo;
  DWORD minRequeryInterval;
  DWORD numReportsSupported;
  GUID reportsSupported[MAX_PLUGIN_REPORT_TYPES];
  DWORD resolverFlags;
} RESOLVER_INFORMATION, *PRESOLVER_INFORMATION;
typedef struct _FlashLayoutSector {
  BYTE abFLSSig[FLASH_LAYOUT_SIG_SIZE];
  DWORD cbReservedEntries;
  DWORD cbRegionEntries;
}FlashLayoutSector, *PFlashLayoutSector;
typedef struct _GPS_POSITION {
  DWORD dwVersion;
  DWORD dwSize;
  DWORD dwValidFields;
  DWORD dwFlags;
  SYSTEMTIME stUTCTime;
  double dblLatitude;
  double dblLongitude;
  float flSpeed;
  float flHeading;
  double dblMagneticVariation;
  float flAltitudeWRTSeaLevel;
  float flAltitudeWRTEllipsoid;
  GPS_FIX_QUALITY FixQuality;
  GPS_FIX_TYPE FixType;
  GPS_FIX_SELECTION SelectionType;
  float flPositionDilutionOfPrecision;
  float flHorizontalDilutionOfPrecision;
  float flVerticalDilutionOfPrecision;
  DWORD dwSatelliteCount;
  DWORD rgdwSatellitesUsedPRNs[GPS_MAX_SATELLITES];
  DWORD dwSatellitesInView;
  DWORD rgdwSatellitesInViewPRNs[GPS_MAX_SATELLITES];
  DWORD rgdwSatellitesInViewElevation[GPS_MAX_SATELLITES];
  DWORD rgdwSatellitesInViewAzimuth[GPS_MAX_SATELLITES];
  DWORD rgdwSatellitesInViewSignalToNoiseRatio[GPS_MAX_SATELLITES];
} GPS_POSITION, *PGPS_POSITION;
typedef struct _PLUGIN_INFORMATION {
  DWORD version;
  GUID guid;
  WCHAR friendlyName[MAX_PLUGIN_FRIENDLY_NAME];
  PLUGIN_STATE pluginState;
  DWORD retryInterval;
  DWORD maximumInitialWait;
  DWORD numReportsGenerated;
  GUID reportsGenerated[MAX_PLUGIN_REPORT_TYPES];
  FILETIME lastUpdate;
  DWORD pluginFlags;
} PLUGIN_INFORMATION, *PPLUGIN_INFORMATION;
typedef struct _LOCATION_REPORT_802_11 {
  LOCATION_REPORT_BASE base;
  DWORD numAccessPoints;
  BYTE BSSID[LOCATION_MAX_ACCESS_POINTS][BSSID_MAX_LEN];
  FLOAT RSSI[LOCATION_MAX_ACCESS_POINTS];
} LOCATION_REPORT_802_11, *PLOCATION_REPORT_802_11;
typedef struct _ReservedEntry {
  CHAR szName[RESERVED_NAME_LEN];
  DWORD dwStartBlock;
  DWORD dwNumBlocks;
} ReservedEntry, *PReservedEntry;
typedef struct _RESOLVER_CONTROL_BLOCK {
  DWORD version;
  HANDLE resContext;
  RESOLVER_INFORMATION* pResInfo;
  LOCATION_REPORT* provReport;
  GUID typesToResolve[MAX_PLUGIN_REPORT_TYPES];
  DWORD numTypesToResolve;
  DWORD (WINAPI* NewResolverReport)(HANDLE resContext, LOCATION_REPORT* pNewReport);
} RESOLVER_CONTROL_BLOCK, *PRESOLVER_CONTROL_BLOCK;
typedef struct {
  TCHAR szTabName[MAX_PATH];
  DLGPROC pDlgProc;
  UINT uTemplateId;
} RDP_TAB_INFO, *PRDP_TAB_INFO;
typedef struct _REG_NOTIFY_INFORMATION {
  DWORD NextEntryOffset;
  DWORD Action;
  DWORD RegNameLength;
  WCHAR RegName[1];
} REG_NOTIFY_INFORMATION, *PREG_NOTIFY_INFORMATION;
typedef struct _IFIMETRICS {
  ULONG cjThis;
  ULONG cjIfiExtra;
  PTRDIFF dpwszFamilyName;
  PTRDIFF dpwszStyleName;
  PTRDIFF dpwszFaceName;
  PTRDIFF dpwszUniqueName;
  PTRDIFF dpFontSim;
  LONG lEmbedId;
  LONG lItalicAngle;
  LONG lCharBias;
  PTRDIFF dpCharSets;
  BYTE jWinCharSet;
  BYTE jWinPitchAndFamily;
  USHORT usWinWeight;
  ULONG flInfo;
  USHORT fsSelection;
  USHORT fsType;
  FWORD fwdUnitsPerEm;
  FWORD fwdLowestPPEm;
  FWORD fwdWinAscender;
  FWORD fwdWinDescender;
  FWORD fwdMacAscender;
  FWORD fwdMacDescender;
  FWORD fwdMacLineGap;
  FWORD fwdTypoAscender;
  FWORD fwdTypoDescender;
  FWORD fwdTypoLineGap;
  FWORD fwdAveCharWidth;
  FWORD fwdMaxCharInc;
  FWORD fwdCapHeight;
  FWORD fwdXHeight;
  FWORD fwdSubscriptXSize;
  FWORD fwdSubscriptYSize;
  FWORD fwdSubscriptXOffset;
  FWORD fwdSubscriptYOffset;
  FWORD fwdSuperscriptXSize;
  FWORD fwdSuperscriptYSize;
  FWORD fwdSuperscriptXOffset;
  FWORD fwdSuperscriptYOffset;
  FWORD fwdUnderscoreSize;
  FWORD fwdUnderscorePosition;
  FWORD fwdStrikeoutSize;
  FWORD fwdStrikeoutPosition;
  BYTE chFirstChar;
  BYTE chLastChar;
  BYTE chDefaultChar;
  BYTE chBreakChar;
  WCHAR wcFirstChar;
  WCHAR wcLastChar;
  WCHAR wcDefaultChar;
  WCHAR wcBreakChar;
  POINTL ptlBaseline;
  POINTL ptlAspect;
  POINTL ptlCaret;
  RECTL rclFontBox;
  BYTE achVendId[4];
  ULONG cKerningPairs;
  ULONG ulPanoseCulture;
  PANOSE panose;
} IFIMETRICS, *PIFIMETRICS;
typedef struct _FD_DEVICEMETRICS {
  FLONG flRealizedType;
  POINTE pteBase;
  POINTE pteSide;
  LONG lD;
  FIX fxMaxAscender;
  FIX fxMaxDescender;
  POINTL ptlUnderline1;
  POINTL ptlStrikeout;
  POINTL ptlULThickness;
  POINTL ptlSOThickness;
  ULONG cxMax;
  ULONG cyMax;
  ULONG cjGlyphMax;
  FD_XFORM fdxQuantized;
  LONG lNonLinearExtLeading;
  LONG lNonLinearIntLeading;
  LONG lNonLinearMaxCharWidth;
  LONG lNonLinearAvgCharWidth;
  LONG lMinA;
  LONG lMinC;
  LONG lMinD;
  LONG alReserved[1];
} FD_DEVICEMETRICS, *PFD_DEVICEMETRICS;
typedef struct _DDDEVICEIDENTIFIER {
  wchar_t szDriver[MAX_DDDEVICEID_STRING];
  wchar_t szDescription[MAX_DDDEVICEID_STRING];
  LARGE_INTEGER liDriverVersion;
  DWORD dwVendorId;
  DWORD dwDeviceId;
  DWORD dwSubSysId;
  DWORD dwRevision;
  GUID guidDeviceIdentifier;
} DDDEVICEIDENTIFIER, *LPDDDEVICEIDENTIFIER;
struct sockaddr_in{
  short sin_family;
  unsigned short sin_port;
  IN_ADDR sin_addr;
  char sin_zero[8];
};
typedef struct simphonebookadditionalnumber_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  DWORD dwNumId;
} SIMPHONEBOOKADDITIONALNUMBER, *LPSIMPHONEADDITIONALNUMBER;
typedef struct rilndisgprscontext_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwContextID;
  BOOL fContextActivation;
  TCHAR tszUserName[NDIS_GPRS_USERNAME_MAX_LENGTH];
  TCHAR tszPassword[NDIS_GPRS_PASSWORD_MAX_LENGTH];
  TCHAR tszDNS1[NDIS_GRPS_DNS_MAX_LENGTH];
  TCHAR tszDNS2[NDIS_GRPS_DNS_MAX_LENGTH];
  RILNDISRECEIVECALLBACK pfnNdisReceive;
  RILNDISTRANSMITCALLBACK pfnNdisTransmit;
  RILNDISSTATUSCALLBACK pfnNdisStatus;
  PVOID pCallbackContext;
} RILNDISGPRSCONTEXT, *LPRILNDISGPRSCONTEXT;
typedef struct _CE_FIND_DATA {
  DWORD dwFileAttributes;
  FILETIME ftCreationTime;
  FILETIME ftLastAccessTime;
  FILETIME ftLastWriteTime;
  DWORD nFileSizeHigh;
  DWORD nFileSizeLow;
  DWORD dwOID;
  WCHAR cFileName[MAX_PATH];
} CE_FIND_DATA, *LPCE_FIND_DATA;
typedef struct rilatrinfo_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwPhase;
  DWORD cbATRSize;
  BYTE rgbATR[MAXLENGTH_ATR];
} RILATRINFO, *LPRILATRINFO;
typedef struct smsregistrationdata_tag {
  DWORD cbSize;
  TCHAR tszAppName[SMS_MAX_APPNAME_LENGTH];
  TCHAR tszParams[SMS_MAX_PARAMS_LENGTH];
  TCHAR tszProtocolName[SMS_MAX_PROTOCOLNAME_LENGTH];
} SMSREGISTRATIONDATA, *LPSMSREGISTRATIONDATA;
typedef struct SMSSTOREITEM_TAG{
  UINT cbSize;
  RILMESSAGE rmMessage;
  UINT cbMessageUID;
  BYTE rgbMessageUID[SMS_MAX_MESSAGEUID_SIZE];
  UINT nTotalParts;
  UINT iPartInde;
} SMSSTOREITEM, *LPSMSSTOREITEM;
typedef struct simfilerefresh_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwFileCount;
  DWORD rgdwAddress[MAX_FILES];
} SIMFILEREFRESH, FAR *LPSIMFILEREFRESH;
typedef struct lineoperator_tag {
  DWORD dwIndex;
  DWORD dwValidFields;
  DWORD dwStatus;
  TCHAR lpszLongName[MAX_LENGTH_OPERATOR_LONG];
  TCHAR lpszShortName[MAX_LENGTH_OPERATOR_SHORT];
  TCHAR lpszNumName[MAX_LENGTH_OPERATOR_NUMERIC];
} LINEOPERATOR, * LPLINEOPERATOR;
typedef struct simphonebookentryex_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  TCHAR lpszText[MAX_LENGTH_PHONEBOOKENTRYTEXT];
  TCHAR lpszSecondName[MAX_LENGTH_PHONEBOOKENTRYTEXT];
  DWORD dwIndex;
  BOOL fHidden;
  DWORD dwGroupIdCount;
  DWORD rgdwGroupId[MAX_NUM_GROUPS];
  DWORD dwUid;
  DWORD dwAdditionalNumberCount;
  LPSIMPHONEBOOKADDITIONALNUMBER lpAdditionalNumbers;
  DWORD dwEmailCount;
  LPSIMPHONEBOOKEMAILADDRESS lpEmailAddresses;
} SIMPHONEBOOKENTRYEX, *LPSIMPHONEBOOKENTRYEX;
typedef struct simlocalinfo_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwLAC;
  DWORD dwCellId;
  TCHAR lpszNumName[MAXLEN_OPERATOR_NUMERIC];
  TCHAR lpszIMEI[MAXLEN_IMEI];
  BYTE rgbNMR[MAXLEN_NMR];
  BYTE rgbBCCH[MAXLEN_BCCH * MAXNUM_BCCH];
  DWORD dwNumBCCH;
} SIMLOCALINFO, *LPSIMLOCALINFO;
typedef struct simmessage_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  SYSTEMTIME stReceiveTime;
  DWORD cbHdrLength;
  BYTE rgbHeader[MAX_LENGTH_HEADER];
  TCHAR lpszMessage[MAX_LENGTH_MESSAGE];
} SIMMESSAGE, FAR *LPSIMMESSAGE;
typedef struct simcaps_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwPBStorages;
  DWORD dwMinPBIndex;
  DWORD dwMaxPBIndex;
  DWORD dwMaxPBEAddressLength;
  DWORD dwMaxPBETextLength;
  DWORD dwLockFacilities;
  DWORD dwReadMsgStorages;
  DWORD dwWriteMsgStorages;
  DWORD dwNumLockingPwdLengths;
  SIMLOCKINGPWDLENGTH rgLockingPwdLengths[SIM_NUMLOCKFACILITIES];
} SIMCAPS, FAR *LPSIMCAPS;
typedef struct SMSROUTERMSGINFO_TAG{
  UINT cbSize;
  UINT cbMessageUID;
  BYTE rgbMessageUID[SMS_MAX_MESSAGEUID_SIZE];
  UINT nTotalParts;
  UINT iPartIndex;
} SMSROUTERMSGINFO, *LPSMSROUTERMSGINFO;
typedef struct simlanguage_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszLanguage[MAXLEN_LANGUAGE];
} SIMLANGUAGE, FAR *LPSIMLANGUAGE;
typedef struct cellgprsconnectioninfo_tag {
  DWORD dwProtocolType;
  DWORD dwL2ProtocolType
  WCHAR wszAccessPointName[CELLDEVCONFIG_MAXLENGTH_GPRSACCESSPOINTNAME];
  WCHAR wszAddress[CELLDEVCONFIG_MAXLENGTH_GPRSADDRESS];
  DWORD dwDataCompression;
  DWORD dwHeaderCompression;
  char szParameters[CELLDEVCONFIG_MAXLENGTH_GPRSPARAMETERS];
  BOOL bRequestedQOSSettingsValid;
  CELLGPRSQOSSETTINGS cgqsRequestedQOSSettings;
  BOOL bMinimumQOSSettingsValid;
  CELLGPRSQOSSETTINGS cgqsMinimumQOSSettings;
} CELLGPRSCONNECTIONINFO, *LPCELLGPRSCONNECTIONINFO;
typedef struct rilndisipv6addr_tag {
  union
  {
    UCHAR Byte[IPV6_ADDRESS_LENGTH_IN_UCHAR];
    USHORT Word[IPV6_ADDRESS_LENGTH_IN_USHORT];
  };
} RILNDISIPV6ADDR, *LPRILNDISIPV6ADDR;
typedef struct sms_address_tag { SMS_ADDRESS_TYPE smsatAddressType; TCHAR ptsAddress[SMS_MAX_ADDRESS_LENGTH]; } SMS_ADDRESS, *LPSMS_ADDRESS;
typedef struct simphonebookentry_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_ADDRESS];
  DWORD dwAddressType;
  DWORD dwNumPlan;
  TCHAR lpszText[MAX_LENGTH_PHONEBOOKENTRYTEXT];
} SIMPHONEBOOKENTRY, *LPSIMPHONEBOOKENTRY;
typedef struct simphonebookemailaddress_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszAddress[MAX_LENGTH_PHONEBOOKENTRYTEXT];
} SIMPHONEBOOKEMAILADDRESS, *LPSIMPHONEBOOKEMAILADDRESS;
typedef struct tagNMKEY {
  NMHDR hdr;
  WORD wVKey;
  UINT flags;
} NMKEY, FAR* LPNMKEY;
typedef struct {
  UINT cbSize;
  POINT pt;
  UINT uHit;
  SYSTEMTIME st;
} MCHITTESTINFO, *PMCHITTESTINFO;
typedef struct tagNMHDDISPINFO {
  NMHDR hdr;
  int iItem;
  UINT mask;
  LPTSTR pszText;
  int cchTextMax;
  int iImage;
  LPARAM lParam;
} NMHDDISPINFO, FAR* LPNMHDDISPINFO;
typedef struct tagGESTUREMETRICS {
  UINT cbSize;
  DWORD dwID;
  DWORD dwTimeout;
  DWORD dwDistanceTolerance;
  DWORD dwAngularTolerance;
  DWORD dwExtraInfo;
} GESTUREMETRICS, *LPGESTUREMETRICS;
typedef struct {
  HINSTANCE hInstOld;
  UINT nIDOld;
  HINSTANCE hInstNew;
  UINT nIDNew;
  int nButtons;
} TBREPLACEBITMAP, *LPTBREPLACEBITMAP;
typedef struct tagNMDATETIMEFORMATQUERY{
  NMHDR nmhdr;
  LPCTSTR pszFormat;
  SIZE szMax;
} NMDATETIMEFORMATQUERY, FAR* LPNMDATETIMEFORMATQUERY;
typedef struct tagNMDATETIMEWMKEYDOWN{
  NMHDR nmhdr;
  int nVirtKey;
  LPCTSTR pszFormat;
  SYSTEMTIME st;
} NMDATETIMEWMKEYDOWN, FAR* LPNMDATETIMEWMKEYDOWN;
typedef struct tagLVKEYDOWN {
  NMHDR hdr;
  WORD wVKey;
  UINT flags;
} NMLVKEYDOWN, FAR* LPNMLVKEYDOWN;
typedef struct tagNMREBAR {
  NMHDR hdr;
  UINT uBand;
  UINT wID;
  UINT cyChild;
  UINT cyBand;
} NMREBAR, *LPNMREBAR;
typedef struct tagNMCUSTOMDRAWINFO {
  NMHDR hdr;
  DWORD dwDrawStage;
  HDC hdc;
  RECT rc;
  DWORD dwItemSpec;
  UINT uItemState;
  LPARAM lItemlParam
} NMCUSTOMDRAW, FAR* LPNMCUSTOMDRAW;
typedef struct tagNMMOUSE {
  NMHDR hdr;
  DWORD dwItemSpec;
  DWORD dwItemData;
  POINT pt;
} NMMOUSE, FAR* LPNMMOUSE;
struct XRGestureEventArgs : XREventArgs
{
  BOOL Handled;
  HWND hWnd;
  GESTUREINFO GestureInfo;
};
typedef struct tagREBARBANDINFO {
  UINT cbSize;
  UINT fMask;
  UINT fStyle;
  COLORREF clrFore;
  COLORREF clrBack;
  LPTSTR lpText;
  UINT cch;
  int iImage;
  HWND hwndChild;
  UINT cxMinChild;
  UINT cyMinChild;
  UINT cx;
  HBITMAP hbmBack;
  UINT wID;
  UINT cyChild;
  UINT cyMaxChild;
  UINT cyIntegral;
  UINT cxIdeal;
  LPARAM lParam;
} REBARBANDINFO, FAR* LPREBARBANDINFO;
typedef struct {
  UINT cbSize;
  DWORD dwMask;
  int idCommand;
  int iImage;
  BYTE fsState;
  BYTE fsStyle;
  WORD cx;
  DWORD lParam;
  LPTSTR pszText;
  int cchText;
} TBBUTTONINFOA, *LPTBBUTTONINFOA;
struct COMMAND_MESSAGE_DATA {
  DWORD dwCommand;
  HPACKET hPacketIn;
  HPACKET hPacketOut;
};
typedef struct tagNMLISTVIEW {
  NMHDR hdr;
  int iItem;
  int iSubItem;
  UINT uNewState;
  UINT uOldState;
  UINT uChanged;
  POINT ptAction;
  LPARAM lParam;
} NMLISTVIEW, FAR* LPNMLISTVIEW;
typedef struct _IMAGELISTDRAWPARAMS {
  DWORD cbSize;
  HIMAGELIST himl;
  int i;
  HDC hdcDst;
  int x;
  int y;
  int cx;
  int cy;
  int xBitmap;
  int yBitmap;
  COLORREF rgbBk;
  COLORREF rgbFg;
  UINT fStyle;
  DWORD dwRop;
} IMAGELISTDRAWPARAMS, FAR * LPIMAGELISTDRAWPARAMS;
typedef struct tagNMDATETIMESTRING{
  NMHDR nmhdr;
  LPCTSTR pszUserString;
  SYSTEMTIME st;
  DWORD dwFlags;
} NMDATETIMESTRING, FAR* LPNMDATETIMESTRING;
typedef struct tagNMDATETIMECHANGE {
  NMHDR nmhdr;
  DWORD dwFlags;
  SYSTEMTIME st;
} NMDATETIMECHANGE, FAR* LPNMDATETIMECHANGE;
typedef struct tagNMDATETIMEFORMAT{
  NMHDR nmhdr;
  LPCTSTR pszFormat;
  SYSTEMTIME st;
  LPCTSTR pszDisplay;
  TCHAR szDisplay[64];
} NMDATETIMEFORMAT, FAR* LPNMDATETIMEFORMAT;
typedef struct tagREBARINFO{
  UINT cbSize;
  UINT fMask;
  HIMAGELIST himl;}
  REBARINFO, FAR* LPREBARINFO;
typedef struct tagTVKEYDOWN {
  NMHDR hdr;
  WORD wVKey;
  UINT flags;
} NMTVKEYDOWN, FAR* LPNMTVKEYDOWN;
typedef struct tagNMRBAUTOSIZE {
  NMHDR hdr;
  BOOL fChanged;
  RECT rcTarget;
  RECT rcActual;
} NMRBAUTOSIZE, *LPNMRBAUTOSIZE;
typedef struct tagCOMMANDBANDSRESTOREINFO {
  UINT cbSize;
  UINT wID;
  UINT fStyle;
  UINT cxRestored;
  BOOL fMaximized;
} COMMANDBANDSRESTOREINFO, *LPCOMMANDBANDSRESTOREINFO;
typedef struct _RB_HITTESTINFO {
  POINT pt;
  UINT flags;
  int iBand;
} RBHITTESTINFO, FAR* LPRBHITTESTINFO;
typedef struct tagNMLVODSTATECHANGE {
  NMHDR hdr;
  int iFrom;
  int iTo;
  UINT uNewState;
  UINT uOldState;
} NMLVODSTATECHANGE, FAR* LPNMLVODSTATECHANGE;
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
typedef const TBBUTTON FAR* LPCTBBUTTON;
typedef DDHAL_DDEXEBUFCALLBACKS FAR *LPDDHAL_DDEXEBUFCALLBACKS;
typedef HEAPENTRY32 *LPHEAPENTRY32;
typedef HEAPLIST32 *LPHEAPLIST32;
typedef NM_TREEVIEW FAR *LPNM_TREEVIEW;
typedef SCROLLINFO FAR *LPSCROLLINFO;
typedef VARIANT __RPC_FAR *LPVARIANT;
typedef VARIANT __RPC_FAR *LPVARIANTARG;
typedef long int LongInt;
typedef Sample MyBadSample;
typedef Sample MyGoodSample;
typedef PSecHandle PCredHandle;
typedef PSecHandle PCtxtHandle;
typedef HEAPENTRY32 *PHEAPENTRY32;
typedef HEAPLIST32 *PHEAPLIST32;
typedef MEMORY_BASIC_INFORMATION *PMEMORY_BASIC_INFORMATION;
typedef int;
typedef CArray SingleLine;
typedef VARIANT VARIANTARG;
typedef redefinition A type was redefined to be the same type as in the first definition. The following example shows how this message might occur. typedef long lPulseWidth;
typedef int __near nint;
typedef int;
typedef A* pA_t;
typedef int pINT_t;
typedef Z *pZ_t;
typedef types both define indirection Two typedef types declare an item, and both typedef types have indirection. The following example shows how this error might occur. typedef int *p_int;
typedef short *p_short;
typedef wchar_t wchar;
typedef unsigned char wchar_t;
typedef HRESULT (CALLBACK *SHOWMODELESSHTMLDIALOGFN)(  HWND hwndParent,  IMoniker *pMk,  VARIANT *pvarArgIn,  TCHAR *pchOptions,  IHTMLWindow2 **ppWindow  );
typedef void (F) ();// OK
typedef F AT[10];// Error
void main()
{
};
typedef int *p_int; typedef short *p_short; p_short p_int p; // error;
typedef long lPulseWidth; typedef long lPulseWidth; // warning;
typedef int int I; const RefInt cri=i; //generates warning C4181;
typedef void (CALLBACK* PFN_PROPERTY_CHANGE)( IXRDependencyObject* pControl,  XRValue* pOldValue,  XRValue* pNewValue );
typedef HRESULT STDAPICALLTYPE pfnCommandCallback( DWORD dwCmd, const CCommandPacket *pCmdIn, CCommandPacket *pCmdOut );
typedef HRESULT (CALLBACK *PFN_CREATE_CONTROL)( IXRDependencyObject *pExistingAXDO, IXRDependencyObject** pNewAXDO );
typedef HRESULT (CALLBACK* PFN_TYPE_CONVERTER)( XRValue *pValIn,  XRValue *pValOut );
typedef HRESULT STDAPICALLTYPE pfnCommandCallback(
 DWORD dwCmd,
 const CCommandPacket *pCmdIn,
 CCommandPacket *pCmdOut
);
#endif /* _EXTRADECLARATIONS_H_ */
