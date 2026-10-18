/* ExtraDeclarations.h -- declarations without header assignment
 * 4017 unassigned declarations
 */
#ifndef _EXTRADECLARATIONS_H_
#define _EXTRADECLARATIONS_H_

typedef BOOL(* PFN_PDD_GET)(UINT uiRequestId,PVOID pvData,ULONG ulDataLength,ULONG* pulRequiredLength);
typedef int (*HCI_InquiryCompleteEvent) (void* pUserContext,
 void* pCallContext,
 unsigned char status,
 unsigned char num_responses);
typedef enum ePN3State_t{ PN_3S_FALSE = MIN_PNALTHOLD_T, PN_3S_TRUE = 1, PN_3S_OTHER = MAX_PNALTHOLD_T }PN3State_t;
typedef enum SPCFGRULEATTRIBUTES{ SPRAF_TopLevel = (1 << 0), SPRAF_Active = (1 << 1), SPRAF_Export = (1 << 2), SPRAF_Import = (1 << 3), SPRAF_Interpreter = (1 << 4), SPRAF_Dynamic = (1 << 5), SPRAF_AutoPause = (1 << 16) } SPCFGRULEATTRIBUTES;
typedef enum CaptureMode { STRMBUF_TEMPORARY_RECORDING = 0, STRMBUF_PERMANENT_RECORDING} STRMBUF_CAPTURE_MODE;
enum StreamControlState CheckStreamState(IMediaSample *pSample);
enum MPEG2Level {
 MPEG2Level_Low = 1,
 MPEG2Level_Main,
 MPEG2Level_High1440,
 MPEG2Level_High
};
enum MPEG2Profile {
 MPEG2Profile_Simple = 1,
 MPEG2Profile_Main,
 MPEG2Profile_SNRScalable,
 MPEG2Profile_SpatiallyScalable,
 MPEG2Profile_High
};
enum StreamControlState { STREAM_FLOWING, STREAM_DISCARDING };
typedef enum {
 MERIT_PREFERRED = 0x800000,
 MERIT_NORMAL = 0x600000,
 MERIT_UNLIKELY = 0x400000,
 MERIT_DO_NOT_USE = 0x200000,
 MERIT_SW_COMPRESSOR = 0x100000,
 MERIT_HW_COMPRESSOR = 0x100050
};
HRESULT OnRequestProgress(IExchangeClientRequest* pRequest, enum ExchangeClientRequestStatus status);
enum InterpolationHint {
 InterpolationHintDefault,
 InterpolationHintNearestNeighbor,
 InterpolationHintBilinear,
 InterpolationHintAveraging,
 InterpolationHintBicubic
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
typedef enum { POINTER_GRAVITY_Left = 0, POINTER_GRAVITY_Right = 1 } POINTER_GRAVITY;
typedef enum {
 TLEF_RELATIVE_INCLUDE_CURRENT = 0x00000001,
 TLEF_RELATIVE_BACK = 0x00000010,
 TLEF_RELATIVE_FORE = 0x00000020,
 TLEF_INCLUDE_UNINVOKEABLE = 0x00000040,
 TLEF_ABSOLUTE = 0x00000031
} TLENUMF;
enum ButtonControlRectangleStyle_t {
 CBR_CLIENTRECT,
 CBR_CHECKBOX,
 CBR_CHECKTEXT,
 CBR_GROUPTEXT,
 CBR_GROUPFRAME,
 CBR_PUSHBUTTON
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
typedef enum STRMBUF_PLAYBACK_TUNE_POLICY { STRMBUF_PLAYBACK_TUNE_FLUSH_AND_GO_TO_LIVE, STRMBUF_PLAYBACK_TUNE_IGNORED} STRMBUF_PLAYBACK_TUNE_POLICY;
enum HCI_EVENT {DEVICE_UP,DEVICE_DOWN,DEVICE_ERROR};
enum PROVIDER_SPECIFIC_MESSAGE_CLASS {
 PS_MESSAGE_CLASS0 = 0,
 PS_MESSAGE_CLASS1,
 PS_MESSAGE_CLASS2,
 PS_MESSAGE_CLASS3,
 PS_MESSAGE_CLASSUNSPECIFIED,
};
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
 MERIT_PREFERRED = 0x800000,
 MERIT_NORMAL = 0x600000,
 MERIT_UNLIKELY = 0x400000,
 MERIT_DO_NOT_USE = 0x200000,
 MERIT_SW_COMPRESSOR = 0x100000,
 MERIT_HW_COMPRESSOR = 0x100050
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
DWORD AAM_AudioIoControl (DWORD dwFlag, DWORD dwIoControlCode, LPVOID lpInBuf, DWORD nInBufSize, LPVOID lpOutBuf, DWORD nOutBufSize, LPDWORD lpBytesReturned, LPOVERLAPPED lpOverLapped);
DWORD AAM_EQBandControl(DWORD dwIndex, DWORD dwFlags, LONG *plValue);
DWORD AAM_EnableSSD (BOOL bEnable);
DWORD AAM_FilterControl (DWORD dwFlags, DWORD *plEnable, DWORD *plFreq);
DWORD AAM_GetEQCaps(DWORD *pdwCap);
DWORD AAM_GetNumSources(void);
DWORD AAM_GetSSDCaps(DWORD *pdwCap);
DWORD AAM_GetSourceCap(IN DWORD dwIndex, OUT AAM_SRCCAP *pASC);
DWORD AAM_RegisterAudioCtrl(AAM_SRCCAP pSrc, BOOL bRegister);
DWORD AAM_RegisterCallback(DWORD idThread, BOOL bRegister);
DWORD AAM_SelectSource(DWORD dwAudioSourceID);
DWORD AAM_VolumeControl(DWORD dwFlag, LONG *plValue);
HRESULT AMovieDllRegisterServer(void);
HRESULT AMovieDllUnregisterServer(void);
HRESULT Abort(IHeaderCollection* pHeaders);
BOOL AbortPipeTransfers(USB_PIPE hPipe, DWORD dwFlags);
HRESULT Accept(ITransportConnection** ppiTransportConnection);
HRESULT AcceptedContentType (BSTR* pbstrAcceptedContentType);
HRESULT Activate(HWND hwndParent, LPCRECT prect, BOOL fModal);
HRESULT ActivateDialog(UINT uDlg, HWND hwndParent, HREPLFLD hFolder, IEnumReplItem *penum);
HRESULT ActivateWindow();
HRESULT Active(void);
HRESULT Add(IDispatch ** ppolItem);
HRESULT AddCPU(BSTR bstrCPUName, long dwCpuNum, int wArchitecture, long dwCPUType, BSTR bstrCPUId, VARIANT vtPageSize, VARIANT vtLevel, BSTR bstrDefaultValue, IPMCPU** ppiCPU);
HRESULT AddCPUFiles(BSTR bstrFullPath, BSTR bstrKeyName, BSTR bsOSIdOrName, VARIANT vtLocaleId, VARIANT vtFlags);
HRESULT AddCallback(IUnknown* pUnkCallback);
HRESULT AddDynamicService(LPCWSTR pszServiceId, LPCWSTR pszEndpointAddress, const WSD_PORT_TYPE* pPortType, const WSDXML_NAME* pPortName, const WSDXML_ELEMENT* pAny, IUnknown* pService);
HRESULT AddFilter(IBaseFilter *pFilter, LPCWSTR pName);
HRESULT AddImage(OLE_HANDLE hImage, OLE_HANDLE hImageMask, long lData);
HRESULT AddItemToInfraredFolder(int olItem, IDispatch * polItem);
HRESULT AddItemsFromResource (HINSTANCE hinst, PCWSTR pszMenuName, DWORD dwMenuState);
HRESULT AddLexicon(ISpLexicon* pAddLexicon, DWORD dwFlags);
HRESULT AddNameToNamespace(const LPCWSTR* pszUri, const LPCWSTR* pszName, WSDXML_NAME** ppName);
HRESULT AddNamespace(const LPCWSTR* pszUri, const LPCWSTR* pszSuggestedPrefix, WSDXML_NAMESPACE** ppNamespace);
HRESULT AddOS(BSTR bstrOSName, int wMajorVersion, int wMinorVersion, BSTR bstrOSTypeId, BSTR bstrOSId, IPMOS** ppiOS);
HRESULT AddObject(BSTR in_bstrName, BSTR in_bstrID, ICcObject** out_ppiObject);
void AddParameterBytes(HPACKET hPacket, BYTE *pData, DWORD cbData);
void AddParameterDWORD(HPACKET hPacket, DWORD dwData);
void AddParameterString(HPACKET hPacket, WCHAR *szData);
void AddParameterWORD(HPACKET hPacket, WORD wData);
HRESULT AddParticipantToConference(IVoIPCurrentCall *piCall);
HRESULT AddPort(IDirectMusicPort* pPort);
HRESULT AddSIFile(LPCWSTR lpszFileName, DWORD *pdwID, DWORD dwFlag);
HRESULT AddServiceInfo(BSTR bstrServiceCategoryIdOrName, BSTR bstrServiceCLSID);
HRESULT AddSourceFilterForMoniker(IMoniker *pMoniker, IBindCtx *pCtx, LPCWSTR lpcwstrFilterName, IBaseFilter **ppFilter);
HRESULT AddTokens(ULONG cTokens, ISpObjectToken** pToken);
HRESULT AddTokensFromDataKey(ISpDataKey* pDataKey, const WCHAR* pszSubKey, const WCHAR* pszCategoryId);
HRESULT AddTokensFromTokenEnum(IEnumSpObjectTokens* pTokenEnum);
HRESULT AddToolkit(BSTR bstrToolkitName, BSTR bstrToolkitId);
HRESULT AddWithIndex(BSTR bstr, long lData, long *lpIndex);
HRESULT Advise(IUnknown *pUnk, DWORD *pdwCookie);
HRESULT AdvisePeriodic(REFERENCE_TIME StartTime, REFERENCE_TIME PeriodTime, HSEMAPHORE hSemaphore, DWORD *pdwAdviseToken);
HRESULT AdviseTime(REFERENCE_TIME baseTime, REFERENCE_TIME streamTime, HEVENT hEvent, DWORD *pdwAdviseToken);
int Alert(HWND hwndParent, UINT uType, UINT uMessage, ...);
LONG AlignDown(LONGLONG ll, LONG lAlign);
LONG AlignUp(LONGLONG ll, LONG lAlign);
DWORD AlignedWidth (void);
HRESULT Alloc(void);
HRESULT AllocateBuffer(DWORD dwSize, IDirectMusicDownload** ppIDMDownload);
HRESULT AllocateSample(DWORD dwFlags, IStreamSample **ppSample);
HRESULT AllowDialogNotifications (BSTR bstrDialogNotifications);
HRESULT AlterQuality(Quality q);
HRESULT AnswerWithSessionDescription(BSTR bstrContentType, BSTR bstrSessionDescription);
HRESULT Apply(void);
HRESULT Architecture(int* pwArchitecture);
void Arrived(IDispatch* Queue, long Cursor);
HRESULT AssignPChannel(DWORD dwPChannel, IDirectMusicPort* pPort, DWORD dwGroup, DWORD dwMChannel);
HRESULT AssignPChannelBlock(DWORD dwBlockNum, IDirectMusicPort* pPort, DWORD dwGroup);
HRESULT AttribChanged(DWORD dwAttribute);
HRESULT AudioPause(void);
HRESULT AudioResume(void);
HRESULT AutoTransition(IDirectMusicPerformance* pPerformance, IDirectMusicSegment* pToSeg, WORD wCommand, DWORD dwFlags, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppTransSeg, IDirectMusicSegmentState** ppToSegState, IDirectMusicSegmentState** ppTransSegState);
DWORD Available (void);
HRESULT AwakeStateGet(DWORD*pdwAwake);
HRESULT AwakeStateSet(DWORD dwAwake);
HRESULT BearingToVelocity (const pPNVELENU pENUVel, pPNVELBEAR pBearVel);
void BeforeNavigate2(IDispatch* pdisp, VARIANT* pvtURL, VARIANT* pvtFlags, VARIANT* pvtTargetFrameName, VARIANT* pvtPostData, VARIANT* pvtHeaders, VARIANT_BOOL* pvbCancel);
HRESULT BeforeWindowOpen(BSTR url, BSTR urlContext, BSTR name, BSTR features, IUnknown* punkEvents);
HRESULT BeginDecode(IImageSink* sink, OPTIONAL IPropertySetStorage* newPropSet);
HRESULT BeginFlush(void);
HRESULT BeginMessage(void);
HRESULT BeginPermanentRecording(LONGLONG hyRetainedSizeInMilliseconds, LONGLONG* phyActualRetainedSizeInMillisecs);
HRESULT BeginTemporaryRecording(LONGLONG hyBufferSizeInMilliseconds);
HRESULT BindToDevice(IPropertyBag* pPropertyBag, IObexDevice** ppDevice);
HRESULT BindToObject(IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riidResult, void **ppvResult);
HRESULT BindToSource(DWORD bindflags, IBindCtx* pbc);
HRESULT BindToStorage(IBindCtx *pbc, IMoniker *pmkToLeft, REFIID riid, void **ppvObj);
DWORD Bpp (void);
HRESULT BreakConnect(void);
HRESULT BstrFromVector(SAFEARRAY FAR *psa, BSTR FAR *pbstr);
void BthAGATSetCallback (PFN_SendATCommand pfn);
DWORD BthAGSetServiceCallback(PFN_PhoneExtServiceCallback pfn);
void BufferFree (BD_BUFFER *pBuf);
HRESULT Buffering(VARIANT_BOOL bBuffering);
HRESULT ByteSwapUint64(ULONGLONG inUint64, ULONGLONG* pOutUint64);
HRESULT CLSID (BSTR* pbstrServiceCLSID);
HRESULT CacheObject(IDirectMusicObject* pObject);
void CalculatePrimes(UINT n);
HRESULT Call(BSTR bstrURI, IVoIPCurrentCall** ppiCurrentCall);
DWORD CallWorker(DWORD dw);
HRESULT CanSeekBackward(LONG *pCanSeekBackward);
HRESULT CanSeekForward(LONG *pCanSeekForward);
HRESULT CancelNotification(void);
HRESULT CategoryId(BSTR* pbstrServiceCategoryId);
HANDLE CeHeapCreate(DWORD flOptions, DWORD dwInitialSize, DWORD dwMaximumSize, PFN_AllocHeapMem pfnAlloc, PFN_FreeHeapMem pfnFee);
VOID WINAPI CertEnumPhysicalStore(const void* pvSystemStore, DWORD dwFlags, void* pvArg, PFN_CERT_ENUM_PHYSICAL_STORE pfnEnum);
VOID WINAPI CertEnumSystemStore(DWORD dwFlags, void *pvSystemStoreLocationPara, void *pvArg, PFN_CERT_ENUM_SYSTEM_STORE pfnEnum);
VOID WINAPI CertEnumSystemStoreLocation(DWORD dwFlags, void *pvArg, PFN_CERT_ENUM_SYSTEM_STORE_LOCATION pfnEnum);
HRESULT ChangeChordMap(IDirectMusicSegment* pSegment, BOOL fTrackScale, IDirectMusicChordMap* pChordMap);
BOOL Check(void);
HRESULT CheckCapabilities(DWORD * pCapabilities);
HRESULT CheckConnect(IPin *pPin);
BOOL CheckReady(void);
BOOL CheckRequest(DWORD *pParam);
HRESULT CheckSourceRect(RECT *pSourceRect);
HRESULT CheckStreaming();
HRESULT CheckTargetRect(RECT *pTargetRect);
HRESULT CleanupOrphanedRecordings(LPCOLESTR pszDirName);
UINT CleanupTestThread(HANDLE hThread, DWORD dwThreadId, int index);
HRESULT ClearPendingSample(void);
HRESULT ClipAndCommit(OLE_HANDLE hrgnClip);
HRESULT CloseAppByName(BSTR bstrAppName, BOOL fTerminate);
void CloseBrowser();
HRESULT CloseDevice(hPNDevice hPN);
VOID WINAPI ClosePerformanceData();
HRESULT CmdMimic(PVCMDNAME pMenu, PTSTR pszCommand);
HRESULT CoCopyProxy(IUnknown *pProxy, IUnknown **ppCopy);
HRESULT CoCreateInstanceEx(REFCLSID rclsid, IUnknown *punkOuter, DWORD dwClsCtx, COSERVERINFO *pServerInfo, ULONG cmq, MULTI_QI *pResults);
VOID STDAPI CoDisconnectObject(IUnknown *pUnk, DWORD dwReserved);
HRESULT CoGetInstanceFromFile(COSERVERINFO *pServerInfo, CLSID *pclsid, IUnknown *punkOuter, DWORD dwClsCtx, DWORD grfMode, OLECHAR *szName, ULONG cmq, MULTI_QI *rgmqResults);
HRESULT CoGetInstanceFromIStorage(COSERVERINFO *pServerInfo, CLSID *pclsid, IUnknown *punkOuter, DWORD dwClsCtx, IStorage *pstg, ULONG cmq, MULTI_QI *rgmqResults);
VOID STDAPI CoGetMarshalSizeMax(ULONG *pulSize, REFIID riid, IUnknown *pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags);
VOID STDAPI CoGetStandardMarshal(REFIID riid, IUnknown *pUnk, DWORD dwDestContext, LPVOID pvDestContext, DWORD mshlflags, LPMARSHAL *ppMarshal);
HRESULT CoInternetCreateSecurityManager(IServiceProvider* pSP, IInternetSecurityManager** ppSM, DWORD dwReserved);
VOID STDAPI CoInternetGetSession(DWORD dwSessionMode, IInternetSession** ppIInternetSession, DWORD dwReserved);
VOID STDAPI CoLockObjectExternal(IUnknown *pUnk, BOOL fLock, BOOL fLastUnlockReleases);
VOID STDAPI CoMarshalHresult(IStream *pStm, HRESULT hresult);
VOID STDAPI CoMarshalInterface(IStream *pStm, REFIID riid, IUnknown *pUnk, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags);
HRESULT CoQueryProxyBlanket(IUnknown *pProxy, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTH_IDENTITY_HANDLE *ppAuthInfo, DWORD *pCapabilities);
VOID STDAPI CoRegisterClassObject(REFCLSID rclsid, IUnknown *pUnk, DWORD dwClsContext, DWORD flags, LPDWORD lpdwRegister);
HRESULT CoRegisterSurrogate(ISurrogate *pSurrogate);
VOID STDAPI CoReleaseMarshalData(IStream *pStm);
HRESULT CoSetProxyBlanket(IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, WCHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, RPC_AUTH_IDENTITY_HANDLE pAuthInfo, DWORD dwCapabilities);
HRESULT CoSwitchCallContext(IUnknown *pNewObject, IUnknown **ppOldObject);
VOID STDAPI CoUnmarshalInterface(IStream *pStm, REFIID riid, void **ppv);
VOID WINAPI CollectPerformanceData(LPWSTR lpwszValue, LPVOID *lppData, LPDWORD lpcbBytes, LPDWORD lpcObjectTypes);
HRESULT ColorFill(IDirect3DMobileSurface* pSurface, CONST RECT* pRect, D3DMCOLOR Color);
DWORD ColorKeyHigh(void);
DWORD ColorKeyLow (void);
DWORD ColorKeyMask (void);
HRESULT CommandOther(PVCMDNAME pName, PTSTR pszCommand);
HRESULT CommandRecognize(DWORD dwID, PVCMDNAME pvCmdName, DWORD dwFlags, DWORD dwActionSize, PVOID pAction, DWORD dwNumLists, PTSTR pszListValues, PTSTR pszCommand);
HRESULT CommandStart();
HRESULT CommitAt(long xDest, long yDest, long xSrc, long ySrc, long dx, long dy);
HRESULT CommitFrom(long xSrc, long ySrc);
HRESULT CommonPrefixWith(IMoniker *pmkOther, IMoniker **ppmkPrefix);
HRESULT CompileStream(IStream* pSource, IStream* pDest, IStream* pHeader, IUnknown* pReserved, ISpErrorLog* pErrorLog, DWORD dwFlags);
HRESULT CompleteConnect(IPin *pReceivePin);
HRESULT CompleteStateChange(FILTER_STATE OldState);
HRESULT ComposeSegmentFromShape(IDirectMusicStyle* pStyle, WORD wNumMeasures, WORD wShape, WORD wActivity, BOOL fIntro, BOOL fEnd, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppSegment);
HRESULT ComposeSegmentFromTemplate(IDirectMusicStyle* pStyle, IDirectMusicSegment* pTemplate, WORD wActivity, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppSegment);
HRESULT ComposeTemplateFromShape(WORD wNumMeasures, WORD wShape, BOOL fIntro, BOOL fEnd, WORD wEndLength, IDirectMusicSegment** ppTemplate);
HRESULT ComposeTransition(IDirectMusicSegment* pFromSeg, IDirectMusicSegment* pToSeg, MUSIC_TIME mtTime, WORD wCommand, DWORD dwFlags, IDirectMusicChordMap* pChordMap, IDirectMusicSegment** ppTransSeg);
HRESULT ComposeWith(IMoniker *pmkRight, BOOL fOnlyIfNotGeneric, IMoniker **ppmkComposite);
BOOL ConfigInit(PPCI_DEV_INFO pInfo);
BOOL ConfigRsrc(PPCI_DEV_INFO pInfo,PPCI_RSRC pMemHead,PPCI_RSRC pIoHead,DWORD* pMemSize,DWORD* pIoSize);
BOOL ConfigSet(PPCI_RSRC pRsrc);
BOOL ConfigSize(PPCI_DEV_INFO pInfo);
HRESULT Configure(HWND hWnd, IRemoteDevice* piDevice);
HRESULT Connect(IPin *pReceivePin, const AM_MEDIA_TYPE *pmt);
HRESULT ConnectDirect(IPin *ppinOut, IPin *ppinIn, const AM_MEDIA_TYPE *pmt);
HRESULT ConnectedTo(IPin **ppPin);
HRESULT ConnectionMediaType(AM_MEDIA_TYPE *pmt);
BOOL ContainsPalette(const VIDEOINFOHEADER *pVideoInfo);
HRESULT ControlStream(const GUID* pCategory, const GUID* pType, IBaseFilter* pFilter, REFERENCE_TIME* pstart, REFERENCE_TIME* pstop, WORD wStartCookie, WORD wStopCookie);
HRESULT ConvertStringInIStream(DWORD* pdwMode, DWORD dwFlag, WCHAR* lpFallBack, DWORD dwSrcEncoding, DWORD dwDstEncoding, IStream* pstmIn, IStream* pstmOut);
HRESULT ConvertTimeFormat(LONGLONG * pTarget, const GUID * pTargetFormat, LONGLONG Source, const GUID * pSourceFormat);
HRESULT ConvertToTemporaryRecording(LPCOLESTR pszFileName);
VOID STDAPI ConvertVideoInfoToVideoInfo2(AM_MEDIA_TYPE *pmt);
HRESULT Copy(ITEMTYPE ** ppolItem);
HRESULT CopyImage(IMediaSample *pMediaSample, VIDEOINFOHEADER *pVideoInfo, LONG *pBufferSize, BYTE *pVideoImage, RECT *pSourceRect);
VOID WINAPI CopyMediaType(AM_MEDIA_TYPE *pmtTarget, const AM_MEDIA_TYPE *pmtSource);
HRESULT CopyPackage(BSTR bstrPackageId, BSTR bstrDestPath, VARIANT_BOOL bOverWrite, long* pdwTotalSize);
HRESULT CopyProxy(IUnknown *pProxy, IUnknown **ppCopy);
HRESULT CopyRects(IDirect3DMobileSurface* pSourceSurface, CONST RECT* pSourceRectsArray, UINT cRects, IDirect3DMobileSurface* pDestinationSurface, CONST POINT* pDestPointsArray);
HRESULT CopyTo(DWORD ciidExclude, IID const *rgiidExclude, SNB snbExclude, IStorage *pstgDest);
BOOL Create(void);
HRESULT CreateAdditionalSwapChain(D3DMPRESENT_PARAMETERS* pPresentationParameters, IDirect3DMobileSwapChain** pSwapChain);
HRESULT CreateAsyncBindCtx(DWORD dwReserved, IBindStatusCallback* pbsc, IEnumFORMATETC* penumfmtetc, IBindCtx** ppbc);
HRESULT CreateAsyncBindCtxEx(IBindCtx* pbc, DWORD dwOptions, IBindStatusCallback* pBSCb, IEnumFORMATETC* pEnum, IBindCtx** ppBC, DWORD reserved);
HRESULT CreateAsyncFind(BSTR bstrTypeURI, DWORD dwFlags, IUnknown* punkDeviceFinderCallback, LONG* plFindData);
HRESULT CreateBitmapFromImage(IImage* image, OPTIONAL UINT width, OPTIONAL UINT height, OPTIONAL PixelFormatID pixelFormat, InterpolationHint hints, IBitmapImage** bitmap);
HRESULT CreateBrowserObject();
HRESULT CreateBrowserWindow();
HRESULT CreateCaptureBuffer(LPWAVEFORMATEX pwfx, DWORD dwFlags, DWORD dwCardAddress, LPDWORD pdwcbBufferSize, LPBYTE *ppbBuffer, LPVOID *ppvObj);
HRESULT CreateClipper(DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter);
HRESULT CreateCommand(HPACKET *pHPacket);
HRESULT CreateDepthStencilSurface(UINT Width, UINT Height, D3DMFORMAT Format, D3DMMULTISAMPLE_TYPE MultiSample, IDirect3DMobileSurface** ppSurface);
HRESULT CreateDevice(UINT Adapter, D3DMDEVTYPE DeviceType, HWND hFocusWindow, ULONG BehaviorFlags, D3DMPRESENT_PARAMETERS* pPresentationParameters, IDirect3DMobileDevice** ppReturnedDeviceInterface);
HRESULT CreateErrorInfo(ICreateErrorInfo **pperrinfo);
HRESULT CreateFMCompatibleBitmap(OLE_HANDLE hFC, OLE_HANDLE *phBitMap, LONG Width, LONG Height);
HRESULT CreateFMCompatibleDC(OLE_HANDLE hFC, OLE_HANDLE *phDC);
HRESULT CreateFormatEnumerator(UINT cfmtetc, FORMATETC* rgfmtetc, IEnumFORMATETC** ppenumfmtetc);
HRESULT CreateGUID(BSTR* pbstrNewGuid);
HRESULT CreateGrammar(ULONGLONG ullGrammarId, ISpRecoGrammar** ppGrammar);
HRESULT CreateImageDecoder(IStream* stream, DecoderInitFlag flags, IImageDecoder** decoder);
HRESULT CreateImageEncoderToFile(const CLSID* clsid, const WCHAR* filename, IImageEncoder** encoder);
HRESULT CreateImageEncoderToStream(const CLSID* clsid, IStream* stream, IImageEncoder** encoder);
HRESULT CreateImageFromBuffer(const VOID* buf, UINT size, BufferDisposalFlag disposalFlag, IImage** image);
HRESULT CreateImageFromFile(const WCHAR* filename, IImage** image);
HRESULT CreateImageFromStream(IStream* stream, IImage** image);
HRESULT CreateImageSurface(UINT Width, UINT Height, D3DMFORMAT Format, IDirect3DMobileSurface** ppSurface);
HRESULT CreateIndexBuffer(UINT Length, DWORD Usage, D3DMFORMAT Format, D3DMPOOL Pool, IDirect3DMobileIndexBuffer** ppIndexBuffer);
HRESULT CreateInstance(IUnknown *pUnkOuter, REFIID riid, void **ppvObject);
HRESULT CreateInstanceLic(IUnknown *pUnkOuter, IUnknown *pUnkReserved, REFIID riid, BSTR bstrKey, void **ppvObject);
HRESULT CreateItem(int olItem, IDispatch ** ppolItem);
HRESULT CreateKey(const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey);
VOID WINAPI CreateMediaType(AM_MEDIA_TYPE const *pSrc);
HRESULT CreateMoniker(LPOLESTR szName, IBindCtx* pBC, IMoniker** ppmk, DWORD dwReserved);
HRESULT CreateNewBitmap(UINT width, UINT height, PixelFormatID pixelFormat, IBitmapImage** bitmap);
HRESULT CreateNewItem (HWND hwndParent);
VOID STDAPI CreatePosPassThru(LPUNKNOWN pAgg, BOOL bRenderer, IPin *pPin, IUnknown **ppPassThru);
HRESULT CreateRecoContext(ISpRecoContext** ppNewContext);
HRESULT CreateRecord(VoIPCallType vct, IVoIPCallRecord** ppiRecord);
HRESULT CreateRenderTarget(UINT Width, UINT Height, D3DMFORMAT Format, D3DMMULTISAMPLE_TYPE MultiSample, BOOL Lockable, IDirect3DMobileSurface** ppSurface);
HRESULT CreateReoccurringTask(ISpTask* pTask, void* pvTaskData, HANDLE hCompEvent, ISpNotifySink** ppTaskCtrl);
HRESULT CreateSegment(IDirectMusicSegment** ppSegment);
HRESULT CreateSharedSample(IStreamSample *pExistingSample, DWORD dwFlags, IStreamSample **ppNewSample);
HRESULT CreateSoundBuffer(LPWAVEFORMATEX pwfx, DWORD dwFlags, DWORD dwCardAddress, LPDWORD pdwcbBufferSize, LPBYTE *ppbBuffer, LPVOID *ppvObj);
HRESULT CreateStorage(const WCHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD reserved2, IStorage **ppstg);
HRESULT CreateStream(const WCHAR *pwcsName, DWORD grfMode, DWORD reserved1, DWORD *reserved2, IStream *ppstm);
HRESULT CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DMFORMAT Format, D3DMPOOL Pool, IDirect3DMobileTexture** ppTexture);
HRESULT CreateThreadControl(ISpThreadTask* pTask, void* pvTaskData, long nPriority, ISpThreadControl** ppThreadCtrl);
HRESULT CreateTypeLib2(SYSKIND syskind, LPOLESTR szFile, ICreateTypeLib2 **ppctlib);
HRESULT CreateURLMoniker(IMoniker* pmkContext, LPWSTR szURL, IMoniker** ppmk);
HRESULT CreateVertexBuffer(UINT Length, DWORD Usage, DWORD FVF, D3DMPOOL Pool, IDirect3DMobileVertexBuffer** ppVertexBuffer);
HRESULT CreateViewWindow(IShellView* psvPrevious, LPCFOLDERSETTINGS pfs, IShellBrowser* psb, RECT* prcView, HWND* phWnd);
HRESULT CreateVirtualChannels(BSTR channelNames);
HRESULT CreateVirtualMachine(LPOLESTR commandLine);
VOID WINAPI CryptEnumKeyIdentifierProperties(const CRYPT_HASH_BLOB *pKeyIdentifier, DWORD dwPropId, DWORD dwFlags, LPCWSTR pwszComputerName, void *pvReserved, void *pvArg, PFN_CRYPT_ENUM_KEYID_PROP pfnEnum);
VOID WINAPI CryptEnumOIDInfo(DWORD dwGroupId, DWORD dwFlags, void *pvArg, PFN_CRYPT_ENUM_OID_INFO pfnEnumOIDInfo);
void CurrentItemChange(IDispatch* pdispMedia);
BOOL CustomTrackPopupMenu(HMENU hmenu, UNIT uFlags, Int x, Int y, HWND hWnd, LPTPMPARAMS lpTpm, BOOL fSelectFirst, BOOL *pfCustomTracked);
HRESULT DAdvise(FORMATETC* pFormatetc, DWORD advf, IAdviseSink* pAdvSink, DWORD* pdwConnection);
BOOL DRM_ND_GetPrivateKey(PrivateKeyDef *pDef);
int Data();
VOID WINAPI DbgAssert(const TCHAR *pCondition, const TCHAR *pFileName, INT iLine);
VOID WINAPI DbgBreakPoint(const TCHAR *pCondition, const TCHAR *pFileName, INT iLine);
VOID WINAPI DbgDumpObjectRegister();
VOID WINAPI DbgKernelAssert(const TCHAR *pCondition, const TCHAR *pFileName, INT iLine);
VOID WINAPI DbgOutString(LPCTSTR psz);
VOID WINAPI DbgSetWaitTimeout(DWORD dwTimeout);
VOID WINAPI DbgWaitForMultipleObjects(DWORD nCount, CONST HANDLE *lpHandles, BOOL bWaitAll);
VOID WINAPI DbgWaitForSingleObject(HANDLE h);
BOOL DeInit();
HRESULT Deactivate(void);
void DebugInitialize (void);
void DebugOut (unsigned int cMask, WCHAR *lpszFormat, ...);
HRESULT DecideAllocator(IMemInputPin *pPin, IMemAllocator **pAlloc);
HRESULT DecideBufferSize(IMemAllocator *pAlloc, ALLOCATOR_PROPERTIES *ppropInputRequest);
HRESULT Decommit(void);
BOOL DecryptFile (LPTSTR, LPTSTR, LPTSTR);
HRESULT DefaultValue(BSTR* pbstrName);
HRESULT DegreesToRadians (pPNPOSLLA pLLAPos);
void Deinitialize();
HRESULT DeleteBootableDevice(BSTR bstrBootableDeviceIdOrName);
HRESULT DeleteCPU(BSTR bstrCPUIdOrName);
HRESULT DeleteDevice(BSTR bstrDeviceIdOrName);
HRESULT DeleteDeviceList (pPNDEVICE pPNDeviceHead);
VOID WINAPI DeleteMediaType(AM_MEDIA_TYPE *pmt);
HRESULT DeleteOS(BSTR bstrOSIdOrName);
HRESULT DeletePackage(BSTR bstrPackageIdOrName);
HRESULT DeletePlatform(BSTR bstrPlatformIdOrName);
HRESULT DeletePropInfo(BSTR bstrPropInfoName);
HRESULT DeleteProperty(BSTR bstrPropId);
HRESULT DeleteRecording(LPCOLESTR pszFileName);
HRESULT DeleteService(BSTR bstrServiceCategoryIdOrName);
HRESULT DeleteServiceCategory(BSTR bstrServiceCategoryIdOrName);
HRESULT DeleteServiceInfo(BSTR bstrServiceIdOrName);
HRESULT DeleteStartupServer(BSTR bstrStartupServerIdOrName);
void DeleteSurface (LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface);
HRESULT DeleteToolkit(BSTR bstrToolkitIdOrName);
HRESULT DeleteTransport(BSTR bstrTransportIdOrName);
HRESULT DeleteVirtualMachine(GUID* virtualMachineID);
HRESULT Deliver(IMediaSample *pSample);
HRESULT DeliverBeginFlush(void);
HRESULT DeliverEndFlush(void);
HRESULT DeliverEndOfStream(void);
HRESULT DeliverNewSegment(REFERENCE_TIME tStart, REFERENCE_TIME tStop, double dRate);
BOOL DeregisterDevice(Handle hDevice);
HRESULT DeregisterStartedApplication(OLE_HANDLE hFC, BSTR bstrAppName);
HRESULT DeserializeResult(const SPSERIALIZEDRESULT* pSerializedResult, ISpRecoResult** ppResult);
BOOL DestroyInstance(DWORD InstanceIndex);
HRESULT DetectCodepageInIStream(DWORD dwFlag, DWORD dwPrefWinCodePage, IStream* pstmIn, DetectEncodingInfo* lpEncoding, INT* pnScores);
HRESULT DetectInputCodepage(DWORD dwFlag, DWORD dwPrefWinCodePage, CHAR* pSrcStr, INT* pcSrcSize, DetectEncodingInfo* lpEncoding, INT* pnScores);
HRESULT DetectOutboundCodePageInIStream(DWORD dwFlags, IStream* pStrIn, UINT* puiPreferredCodePages, UINT nPreferredCodePages, UINT* puiDetectedCodePages, UINT* pnDetectedCodePages, WCHAR* lpSpecialChar);
HRESULT Device (BSTR* pbstrDeviceId);
DWORD DeviceConfig(DWORD Command, PPCI_DEV_INFO pInfo,PPCI_RSRC pRsrc1,PPCI_RSRC pRsrc2,DWORD* pMemSize,DWORD* pIoSize);
HRESULT DeviceId (BSTR*pbstrDeviceId);
HRESULT DeviceRemoved(LONG lFindData, BSTR bstrUDN);
VOID WINAPI DirectDrawCreate(GUID FAR *lpGUID, LPDIRECTDRAW FAR *lplpDD, IUnknown FAR *pUnkOuter);
VOID WINAPI DirectDrawCreateClipper(DWORD dwFlags, LPDIRECTDRAWCLIPPER FAR *lplpDDClipper, IUnknown FAR *pUnkOuter);
void DisableWindow();
HRESULT Disconnect();
void DisplayPinInfo(IPin *pReceivePin);
HRESULT DisplayUI(HWND hwndParent, const WCHAR* pszTitle, const WCHAR pszTypeOfUI, void* pvExtraData, ULONG cbExtraData, IUnknown* punkObject);
BOOL DllEntry(HANDLE hInstDll, DWORD dwReason, LPVOID lpvReserved);
HRESULT DoBufferProcessingLoop(void);
HRESULT DoGetWindowStyle(long *pStyle, long WindowLong);
HRESULT DoOptionsDialog (HWND hwndParent, LPCSTR lpszObjType, IReplNotify* pntfy);
HRESULT DoRealisePalette(BOOL bForceBackground);
void DoSetWindowForeground(BOOL bFocus);
HRESULT DoSetWindowStyle(long Style, long WindowLong);
HRESULT DoShowWindow(LONG ShowCmd);
void DoSomething(void);
UINT DoStressIteration(HANDLE hThread, DWORD dwThreadId, LPVOID pv);
HRESULT DoVerb(LONG iVerb, LPMSG lpmsg, IOleClientSite * pActiveSite, LONG lindex, HWND hwndParent, LPCRECT lprcPosRect);
void DocumentComplete (IDispatch* pdisp, VARIANT* pvtURL);
HRESULT DoneWithWindow();
HRESULT DownloadInstrument(IDirectMusicInstrument* pInst, DWORD dwPChannel, IDirectMusicDownloadedInstrument** ppDownInst, DMUS_NOTERANGE* pNoteRanges, DWORD dwNumNoteRanges, IDirectMusicPort** ppPort, DWORD* pdwGroup, DWORD* pdwMChannel);
HRESULT DragEnter(IDataObject* pDataObject, DWORD grfKeyState, POINTL pt, DWORD* pdwEffect);
HRESULT Drop(IDataObject* pDataObject, DWORD grfKeyState, POINTL pt, DWORD* pdwEffect);
void DumpBuff (unsigned int cMask, unsigned char *lpBuffer, unsigned int cBuffer);
HRESULT DuplicateSoundBuffer(IDSDRIVERBUFFER pIDsDriverBuffer, LPVOID *ppv);
HRESULT Duration(REFERENCE_TIME *ptDuration);
void EOS();
BOOL EdbgCancelRegisterClient(CHAR * ServiceName CHAR * DeviceName);
HRESULT EmulateRecognition(ISpPhrase* pPhrase);
HRESULT EnableItem(DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT EnabledGet(DWORD *dwEnabled);
HRESULT EnabledSet(DWORD dwEnabled);
BOOL EncryptFile (LPTSTR, LPTSTR, LPTSTR);
HRESULT EndFlush(void);
HRESULT EndMessage(void);
HRESULT EndOfStream(void);
HRESULT Enum(IEnumMoniker **ppenumMoniker);
HRESULT EnumAllModules(IOsAxsEnumModule** ppienum);
HRESULT EnumAllProcesses(IOsAxsEnumProcess** ppienum);
HRESULT EnumAllThreads(IOsAxsEnumThread** ppienum);
HRESULT EnumBootableDevices(IEnumVariant** ppiEnumBootableDevice);
HRESULT EnumCPUs(IEnumVariant** ppiEnumCPU);
HRESULT EnumCategories(LCID lcid, IEnumCATEGORYINFO** ppenumCatInfo);
HRESULT EnumClassesOfCategories(ULONG cImplemented, CATID rgcatidImpl, ULONG cRequired, CATID rgcatidReq, IEnumCLSID** ppenumCLSID);
HRESULT EnumCodePages(DWORD grfFlags, LANGID LangId, IEnumCodePage** ppEnumCodePage);
HRESULT EnumConnectionPoints(IEnumConnectionPoints **ppEnum);
HRESULT EnumConnections(IEnumConnections **ppEnum);
HRESULT EnumDAdvise(IEnumSTATDATA** ppenumAdvise);
HRESULT EnumElement(DWORD reserved1, void *reserved2, DWORD reserved3, IEnumSTATSTG **ppenum);
HRESULT EnumFiles(IEnumVariant** ppiEnumFiles);
HRESULT EnumFilters(IEnumFilters **ppEnum);
HRESULT EnumFormatEtc(DWORD dwDirection, IEnumFORMATETC** ppenumFormatetc);
HRESULT EnumHeaders(IHeaderEnum** pHeaderEnum);
HRESULT EnumImplCategoriesOfClass(REFCLSID rclsid, IEnumCATID** ppenumCATD);
HRESULT EnumMatchingFilters(IEnumMoniker **ppEnum, DWORD dwFlags, BOOL bExactMatch, DWORD dwMerit, BOOL bInputNeeded, DWORD cInputTypes, const GUID *pInputTypes, const REGPINMEDIUM *pMedIn, const CLSID *pPinCategoryIn, BOOL bRender, BOOL bOutputNeeded, DWORD cOutputTypes, const GUID *pOutputTypes, const REGPINMEDIUM *pMedOut, const CLSID *pPinCategoryOut);
HRESULT EnumMediaStreams(long Index, IMediaStream **ppMediaStream);
HRESULT EnumMediaTypes(IEnumMediaTypes **ppEnum);
HRESULT EnumOSs(IEnumVariant** ppiEnumOS);
HRESULT EnumObjectParam(IEnumString** ppenum);
HRESULT EnumObjects(HWND hwndOwner, SHCONTF grfFlags, IENUMIDLIST** ppenumIDList);
HRESULT EnumOwnedThreads(IOsAxsEnumThread**ppiOsAxsEnumThd);
HRESULT EnumPackages(IEnumVariant** ppiEnumPackage);
HRESULT EnumPins(IEnumPins **ppEnum);
HRESULT EnumPlatforms(IEnumVariant** ppiEnumPlatform);
HRESULT EnumPropInfos(IEnumVariant** ppiEnumPropInfo);
HRESULT EnumProperties(IEnumVariant** ppiEnumProperty);
HRESULT EnumReqCategoriesOfClass(REFCLSID rclsid, IEnumCATID** ppenumCATD);
HRESULT EnumRfc1766(LANGID LangId, IEnumRfc1766** ppEnumRfc1766);
HRESULT EnumRunning(IEnumMoniker **ppenumMoniker);
HRESULT EnumScripts(DWORD dwFlags, LANGID LangId, IEnumScript** ppEnumScript);
HRESULT EnumServiceCategories(IEnumVariant** ppiEnumServiceCategory);
HRESULT EnumServiceInfos(IEnumVariant** ppiEnumServiceInfo);
HRESULT EnumStartupServers(IEnumVariant** ppiEnumStartupServer);
HRESULT EnumTokens(const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, IEnumSpObjectTokens** ppEnum);
HRESULT EnumTransports(IEnumVariant** ppiEnumTransport);
HRESULT EnumUniversalPlatforms(IEnumVariant** ppiEnumUniversalPlatform);
HRESULT EnumUsedModules(IOsAxsEnumModule**ppiOsAxsEnumMod);
HRESULT EnumVerbs(IEnumOleVerb **ppEnumOleVerb);
HRESULT EnumerateObjects(ICcCollection**out_ppiCollection);
BOOL EqualPins(IUnknown *pPin1, IUnknown *pPin2);
BOOL ErrorAnalysis(INT32 cCalibrationPoints,INT32* pScreenXBuffer,INT32* pScreenYBuffer,INT32* pUncalXBuffer,INT32* pUncalYBuffer);
HRESULT EvaluateSessionDescription(BSTR bstrContentType, BSTR bstrSessionDescription, VARIANT_BOOL* pfApplicationSession);
HRESULT EventPackage(BSTR* pbstrEventPackage);
DWORD EventThread(LPVOID threadParams);
HRESULT ExecuteOperation(ISoapReader* pISoapReader, ISoapSerializer* pISoapSerializer);
HRESULT Exit(void);
HANDLE ExitThreadEvent(void);
int ExtensionLayer_CloseDriverInstance (void);
int ExtensionLayer_CreateDriverInstance (void);
int ExtensionLayer_InitializeOnce (void);
int ExtensionLayer_UnInitialize (void);
HRESULT FileCopy(BSTR bstrSource, BSTR bstrDest, VARIANT_BOOL bOverWrite, long* pdwTotalSize);
HRESULT FileDelete(BSTR bstrFullPath);
HRESULT FileGetInfo(BSTR bstrRemotePath, long* pdwFileAttributes, long* pdwFileSize, VARIANT* pvtCreationTime);
HRESULT Find(BSTR pwszRestriction, IDispatch ** ppolItem);
HRESULT FindCallerInfoBySpeedDialEntry(INT idxSpeedDial, IVoIPCallerInfoRecord** ppiRecord);
HRESULT FindCallerInfoByURI(BSTR bstrURI, IVoIPCallerInfoRecord** ppiRecord);
HRESULT FindConnectionPoint(REFIID riid, IConnectionPoint **ppCP);
HRESULT FindFile(BSTR bstrFileName,VARIANT_BOOL fUseExisting, BSTR*pbstrFullPath);
HRESULT FindFilterByName(LPCWSTR pName, IBaseFilter **ppFilter);
HRESULT FindItem(BSTR bstr, long lIndexStart, long *pIndex);
HRESULT FindItemPartial(BSTR bstr, long lIndexStart, long *pIndex);
HRESULT FindNext(IDispatch ** ppolItem);
HRESULT FindPin(LPCWSTR Id, IPin **ppPin);
int FindPinNumber(IPin *iPin);
VOID WINAPI FingerWorker(LPVOID lpv);
HRESULT FlagKeysUsed(long lKeysUsed, long lKeysEaten);
void Flushing(BOOL bInProgress);
HRESULT ForceRefresh();
HRESULT Forward(BSTR bstrForwardToURI);
VOID STDAPI FreeBSTR(BSTR *pstr);
HRESULT FreeCommand(HPACKET hPacket);
void FreeResources();
void FreeSamples();
void FreeString(HPACKET hPacket, WCHAR *pszData);
HRESULT Get(IHeaderCollection* pHeaders, IStream** ppStream);
HRESULT GetActualDataLength(void);
HRESULT GetAdditionalHeaderValues(BSTR bstrHeaderValuePairs);
HRESULT GetAdvise(DWORD * pdwAspect, DWORD * padvf, IAdviseSink **ppAdvSink);
DWORD GetAdviseCount();
HRESULT GetAllocator(IMemAllocator **ppAllocator);
HRESULT GetAllocatorRequirements(ALLOCATOR_PROPERTIES * pProps);
HRESULT GetAltInfo(ISpPhrase** ppParent, ULONG* pulStartElementInParent, ULONG* pcElementsInParent, ULONG* pcElementsInAlt);
HRESULT GetAlternates(ULONG ulStartElement, ULONG cElements, ULONG ulRequestCount, ISpPhraseAlt** ppPhrases, ULONG* pcPhrasesReturned);
HRESULT GetAppAlertState(OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, BOOL *pfAlert, LONG *pAlertVal);
HRESULT GetAsyncState(IUnknown** ppAsyncState);
HRESULT GetAudio(ULONG ulStartElement, ULONG cElements, ISpStreamFormat** ppStream);
HRESULT GetAvailable(LONGLONG * pEarliest, LONGLONG * pLatest);
BOOL GetAvailableDataSize(HPACKET hPacket, DWORD *pdwAvailable);
HRESULT GetBackBuffer(UINT BackBuffer, D3DMBACKBUFFER_TYPE Type, IDirect3DMobileSurface** ppBackBuffer);
HRESULT GetBaseStream(ISpStreamFormat** ppStream);
LONG GetBitmapFormatSize(const BITMAPINFOHEADER *pHeader);
DWORD GetBitmapSize(const BITMAPINFOHEADER *pHeader);
HRESULT GetBoundSource(IUnknown** ppunk);
HRESULT GetBoundToLiveToken(LPOLESTR* ppszToken);
HRESULT GetBounds(long *plxLeft, long *plyTop, long *pldxWidth, long *pldyHeight);
HRESULT GetBuffer(IMediaSample **ppBuffer, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime, DWORD dwFlags);
HRESULT GetBufferingDepth(REFERENCE_TIME* ptStop);
HRESULT GetCPU(BSTR bstrCPUIdOrName, IPMCPU** ppiCPU);
HRESULT GetCapabilities(DWORD * pCapabilities);
HRESULT GetCaps(PDSDRIVERCAPS pDsDrvCaps);
HRESULT GetCaption(long lIndex, long lItemId, long lItemData, BSTR *pbstrCaption);
HRESULT GetCaptureMode(STRMBUF_CAPTURE_MODE* peStrmbufCaptureMode, LONGLONG* phyMaxBufferMilliseconds);
HRESULT GetCharsetInfo(BSTR Charset, PMIMECSETINFO pCharsetInfo);
HRESULT GetClientSite(IOleClientSite **ppClientSite);
HRESULT GetCommonBoolProperties(short *pwProps);
HRESULT GetConnectionFromId(BSTR bstrConnectionId, ICcConnection** ppiConnection);
HRESULT GetConnectionInterface(IID *pIID);
HRESULT GetConnectionPointContainer(IConnectionPointContainer **ppCPC);
DWORD GetContentDirectory(IContentDirectory** ppContentDirectory);
int GetCount();
int GetCountI();
HRESULT GetCurMoniker(IMoniker** ppimkName);
HRESULT GetCurrentActualFrameRate (IPin* pPin, LONGLONG* ActualFrameRate);
HRESULT GetCurrentImage(long *pBufferSize, long *pVideoImage);
HRESULT GetCurrentPosition(LPDWORD lpdwCurrentCaptureCursor, LPDWORD lpdwCurrentWriteCursor);
HRESULT GetCurrentProcessAndThread(DWORD dwCpuNum, IOsAxsProcess**ppiproc, IOsAxsThread**ppithrd);
DWORD GetCurrentTemp (DWORD dwShelfId);
HRESULT GetCurrentlyViewedProcess(IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetDataItemArray(IExchangeClientDataItemArray** ppiArray);
HRESULT GetDataKey(SPDATAKEYLOCATION spdkl, ISpDataKey** ppDataKey);
HRESULT GetDatastore(DWORD dwLocale, ICcDatastore** ppiDatastore);
HRESULT GetDefaultFolder(int olFolder, IFolder **ppIFolder);
HRESULT GetDeliveryBuffer(IMediaSample **ppSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime, DWORD dwFlags);
HRESULT GetDepthStencilSurface(IDirect3DMobileSurface** ppZStencilSurface);
HRESULT GetDescription(BSTR *pBstrDescription);
HRESULT GetDestinationPosition(long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetDevMemoryObject(IUnknown **ppUnkInnner, IUnknown *pUnkOuter);
HRESULT GetDirect3D(IDirect3DMobile** ppD3DM);
HRESULT GetDllEntry(MEMBERID memid, INVOKEKIND invKind, BSTR FAR *pBstrDllName, BSTR FAR *pBstrName, unsigned short FAR *pwOrdinal);
HRESULT GetDocumentURL(BSTR* pbstrDocument);
HRESULT GetDocumentation(MEMBERID memid, BSTR FAR *pBstrName, BSTR FAR *pBstrDocString, unsigned long FAR *pdwHelpContext, BSTR FAR *pBstrHelpFile);
HRESULT GetDocumentation2(MEMID memid, LCID lcid, BSTR FAR *pbstrHelpString, unsigned long FAR *pdwHelpStringContext, BSTR FAR *pbstrHelpStringDll);
HRESULT GetDriverDesc(PDSDRIVERDESC pDsDriverDesc);
HRESULT GetDriverInfoDword(GUID guidQuery, DWORD *pdwInfo);
HRESULT GetDriverInfoString(GUID guidDriverQuery, LANGID wLangID, LPOLESTR * ppszInfo);
HRESULT GetDuration(LONGLONG *pDuration);
HRESULT GetEncodeSink(IImageSink** sink);
HANDLE GetEvent();
HRESULT GetExecModeAtAddress(ADDRESS_TYPE AddrCode, DWORD* pdwExecMode);
HRESULT GetExtendedControl(IDispatch** ppDisp);
HRESULT GetExtendedDiscoXML(WSDXML_ELEMENT** ppHeaderAny, WSDXML_ELEMENT** ppBodyAny);
HRESULT GetFMSystemFont(OLE_HANDLE hFC, BOOL fSmall, IDispatch **ppdispFont);
DWORD GetFOURCC(void);
HRESULT GetFile(BSTR bstrRemotePath, BSTR bstrDest, long* pdwTotalSize);
HRESULT GetFiltergraph(IGraphBuilder** ppfg);
HRESULT GetFolderInfo(LPSTR lpszName, HREPLFLD *phFolder, IUnknown **ppObjHandler);
HRESULT GetFormDisplayCaps(OLE_HANDLE hFC, LONG nIndex, LONG *pRetInfo);
HRESULT GetFormsContextHandle(OLE_HANDLE *phFC);
HRESULT GetFrameRateList (IPin* pPin, long iIndex, SIZE Dimensions, long* ListSize, LONGLONG** FrameRates);
HRESULT GetFrontBuffer(IDirect3DMobileSurface** pFrontBuffer);
HRESULT GetGraph(IDirectMusicGraph** ppGraph);
HRESULT GetHaltReasons(VARIANT dwIndex,VARIANT*pdwHaltReasonCode,VARIANT*ppdwExceptionCode,VARIANT*ppChance, VARIANT*ppieXdiCodeBP, VARIANT*ppieXdiDataBP);
HRESULT GetHeader(BSTR bstrHeaderName, BSTR** prgValues, UINT* pcValues);
HRESULT GetHelpFile(BSTR *pBstrHelpFile);
HRESULT GetIFMDraw(IDispatch **ppdispFMDraw, long lxLeft, long lyTop, long lxWidth, long lyHeight);
HRESULT GetImageSize(VIDEOINFOHEADER *pVideoInfo, long *pBufferSize, RECT *pSourceRect);
HRESULT GetIndices(IDirect3DMobileIndexBuffer** ppIndexData);
HRESULT GetInfo(IMINFO *pimi);
HRESULT GetInputObjectToken(ISpObjectToken** ppToken);
HRESULT GetInputStream(ISpStreamFormat** ppStream);
HRESULT GetInstrument(DWORD dwPatch, IDirectMusicInstrument** ppInstrument);
HRESULT GetItemAt(UINT idxItem, IUnknown** ppiItem);
HRESULT GetItemFromOid(CEOID oid, IDispatch ** ppolItem);
HRESULT GetLatencyClock(IReferenceClock** ppClock);
HRESULT GetLcidFromRfc1766(LCID* pLocale, BSTR bstrRfc1766);
HRESULT GetLinkURL(BSTR* pbstrURL);
HRESULT GetLoader(IDirectMusicLoader** ppLoader);
HRESULT GetLocalPresenceInfo(RTC_PRESENCE_STATUS* penStatus, BSTR* pbstrNotes);
HRESULT GetMapping(BSTR bstrRemoteAddress, RTC_PORT_TYPE enPortType, BSTR* pbstrInternalLocalAddress, long* plInternalLocalPort, BSTR* pbstrExternalLocalAddress, long* plExternalLocalPort);
HRESULT GetMappingEx(BSTR bstrRemoteAddress, long lRemotePort, long lTransport, RTC_PORT_TYPE enPortType, BSTR* pbstrInternalLocalAddress, long* plInternalLocalPort, BSTR* pbstrExternalLocalAddress, long* plExternalLocalPort);
HRESULT GetMarkerName(long MarkerNum, BSTR* pbstrMarkerName);
HRESULT GetMaxAvailableFrameRate(IPin* pPin, long iIndex, SIZE Dimensions, LONGLONG* MaxAvailableFrameRate);
HRESULT GetMaxIdealImageSize(long *pWidth, long *pHeight);
HRESULT GetMediaPositionInterface(REFIID riid, void **ppv);
HRESULT GetMediaStream(REFMSPID idPurpose, IMediaStream **ppMediaStream);
HRESULT GetMediaTime(LONGLONG * pStart, LONGLONG * pEnd);
LONG GetMediaTypeVersion();
HRESULT GetMenuLanguageInfo(UNIT16* plangcount, UINT16* pLCBuffer, UINT8* pFlagsBuffer);
HRESULT GetMessageText(BSTR* pbstrMessage);
HRESULT GetMinIdealImageSize(long *pWidth, long *pHeight);
HRESULT GetMode (IPin* pPin, long* Mode);
HRESULT GetModuleByID(DWORD dwID, IOsAxsProcess** ppiOsAxsModule);
HRESULT GetModuleFromAddress(ADDRESS_TYPEAddr, IOsAxsModule** ppiModule);
HRESULT GetMoinker(DWORD dwAssign, DWORD dwWhichMoniker, IMoniker ** ppmk);
HRESULT GetMoniker(DWORD dwAssign, DWORD dwWhichMoniker, IMoniker **ppmk);
HRESULT GetMops(MEMBERID memid, BSTR FAR *pBstrMops);
HRESULT GetMultiMediaStream(IMultiMediaStream **ppMultiMediaStream);
HRESULT GetNames(MEMBERID memid, BSTR FAR *rgBstrNames, unsigned int cMaxNames, unsigned int FAR *pcNames);
DWORD GetNewLength(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset);
DWORD GetNewOffset(PSS_WINDOW_STATE pWindowState, DWORD dwNewOffset);
BOOL GetNextParameterType(HPACKET hPacket, MANAGED_DATATYPE *pType, DWORD *pSize);
HRESULT GetNotificationData(BSTR* pbstrContentType, BSTR* pbstrMessageData);
HRESULT GetNotifyFlags(long *lplNoNotifyFlags);
HRESULT GetOS(BSTR bstrOSIdOrName, IPMOS** ppiOS);
HRESULT GetObjectParam(LPOLESTR pszKey, IUnknown** ppunk);
HRESULT GetObjectStorage(LPOLESTR pszItem, IBindCtx* pbc, REFIID riid, void** ppvStorage);
HRESULT GetObjectToken(ISpObjectToken** ppToken);
HRESULT GetOccurrence(DATE date, IAppointmentItem * polAppt);
HRESULT GetOperationParts(IenumSoapMappers** ppIEnumSoapMappers);
HRESULT GetOsAxsService(ICcService**ppiOsAxsService);
HRESULT GetOutputObjectToken(ISpObjectToken** ppObjectToken);
HRESULT GetOutputStream(ISpStreamFormat** ppStream);
HRESULT GetPageInfo(LPPROPPAGEINFO pPageInfo);
BOOL GetParameterBytes(HPACKET hPacket, BYTE *pData, DWORD cbData);
BOOL GetParameterDWORD(HPACKET hPacket, DWORD *pdwData);
BOOL GetParameterString(HPACKET hPacket, WCHAR **pszData);
BOOL GetParameterWORD(HPACKET hPacket, WORD *pwData);
HRESULT GetPath(LPCWSTR* ppszPath);
HRESULT GetPhraseList(DWORD dwFlags, PWSTR pszBuf PDWORD *pdwSize);
DWORD GetPhysicalModeId (void);
int GetPinCount(void);
HRESULT GetPixelDataBuffer(const RECT* rect, PixelFormatID pixelFormat, BOOL lastPass, BitmapData* bitmapData);
HRESULT GetPixelFormat(LPDDPIXELFORMAT lpDDPixelFormat);
HRESULT GetPixelFormatID(PixelFormatID* pixelFormat);
HRESULT GetPointer(BYTE ** ppBuffer);
HRESULT GetPositions(LONGLONG *pCurrent, LONGLONG *pStop);
HRESULT GetPreroll(LONGLONG *pllPreroll);
HRESULT GetPresenceData(BSTR* pbstrNamespace, BSTR* pbstrData);
HRESULT GetProcessByID(DWORD dwID, IOsAxsProcess** ppiOsAxsProcess);
HRESULT GetProfile(BSTR bstrUserAccount, BSTR bstrUserPassword, BSTR bstrUserURI, BSTR bstrServer, long lTransport, LONG_PTR lCookie);
int GetPropToo(void);
HRESULT GetProperties(ALLOCATOR_PROPERTIES *pProps);
HRESULT GetRate(double *pdRate);
HRESULT GetRecoContext(ISpRecoContext** ppRecoCtxt);
HRESULT GetRecoProfile(ISpObjectToken** ppToken);
HRESULT GetRecognizer(ISpRecognizer** ppRecognizer);
HRESULT GetRecordingPath(LPOLESTR* ppszPath);
HRESULT GetRecordingSizeOnDisk(LPCOLESTR pszRecordingName, LONGLONG* pllBytes);
HRESULT GetRecurrence(IRecurrencePattern * pRec);
HRESULT GetRecurrencePattern(IRecurrencePattern * pRec);
HRESULT GetRemoteSessionDescription(BSTR* pbstrContentType, BSTR* pbstrSessionDescription);
HRESULT GetRenderTarget(IDirect3DMobileSurface** ppRenderTarget);
DWORD GetRequest();
HRESULT GetRequestLine(BSTR* pbstrRequestLine);
HRESULT GetRestorePosition(long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetRfc1766FromLcid(LCID Locale, BSTR* pbstrRfc1766);
HRESULT GetRoutineDataByAddress(ADDRESS_TYPEAddrCode, ROUTINE_DATA*pPData, IOsAxsModule **ppiModule);
HRESULT GetSampleTimes(IMediaSample *pMediaSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime);
HRESULT GetSecuritySite(IInternetSecurityMgrSite** ppSite);
HRESULT GetSegment(IDirectMusicSegment** ppSegment);
HRESULT GetSegmentState(IDirectMusicSegmentState** ppSegmentState, MUSIC_TIME mtTime);
HRESULT GetService(LPCOLESTR pwszDeviceId,LPCOLESTR pwszServiceCategoryId,ICcService** piService);
HRESULT GetServiceMap(BSTR in_bstrServiceCategoryID, ICcServiceInfo** out_ppiServiceInfo);
HRESULT GetServiceObject(BSTR bstrUDN, BSTR bstrServiceId, IDispatch** ppdispService);
HRESULT GetServiceParamsShort(BSTR*pbstrShortParams);
HRESULT GetSize(void);
HRESULT GetSoapOperations(IEnumWSDLOperations** ppIWSDLOperations);
HRESULT GetSoapPorts(IEnumWSDLPorts** ppIWSDLPorts);
HRESULT GetSoapServices(IEnumWSDLService** ppWSDLServiceEnum);
DWORD GetSoftwareVersion(void);
HRESULT GetSource(BSTR *pBstrSource);
HRESULT GetSourceEndMarkerName(DWORD dwSourceIndex, BSTR* pbstrEndMarker);
HRESULT GetSourceMoniker(IMoniker** ppmk);
HRESULT GetSourcePosition(long *pLeft, long *pTop, long *pWidth, long *pHeight);
HRESULT GetSourceStartMarkerName(DWORD dwSourceIndex, BSTR* pbstrStartMarker);
HRESULT GetState(DWORD dwMilliSecsTimeout, FILTER_STATE *State);
HRESULT GetStdDev(int nSamples, int *piResult, LONGLONG llSumSq, LONGLONG iTot);
HRESULT GetStopPosition(LONGLONG* pStop);
HRESULT GetStreamSource(UINT StreamNumber, IDirect3DMobileVertexBuffer** ppStreamData, UINT* pStride);
HRESULT GetSurfaceLevel(UINT Level, IDirect3DMobileSurface** ppSurfaceLevel);
HRESULT GetSyncSource(IReferenceClock **pClock);
HRESULT GetTexture(DWORD Stage, IDirect3DMobileBaseTexture** ppTexture);
HANDLE GetThreadHandle();
DWORD GetThreadID();
HRESULT GetThumbnail(OPTIONAL UINT thumbWidth, OPTIONAL UINT thumbHeight, IImage** thumbImage);
HRESULT GetTime(REFERENCE_TIME *pTime);
HRESULT GetTimeOfLastChange(IBindCtx *pbc, IMoniker *pmkToLeft, FILETIME *pFileTime);
HRESULT GetTimeZoneFromIndex(int iIndex, ITimeZone ** ppTimeZone);
DWORD GetTimingInfo(LPDWORD lpdwAvgPerfTicks, LPDWORD lpdwMax, LPDWORD lpdwMin, LPDWORD lpdwDeltaMax, LPDWORD lpdwDeltaMin);
HRESULT GetTool(DWORD dwIndex, IDirectMusicTool** ppTool);
BOOL GetTransferError(USB_TRANSFER hTransfer, LPDWORD lpdwError);
HRESULT GetTunePolicy(STRMBUF_PLAYBACK_TUNE_POLICY* peStrmbufPlaybackTunePolicy);
HRESULT GetUniqueDeviceName(BSTR bstrDeviceIdentifier, BSTR bstrTemplateUDN, BSTR* pbstrUDN);
LONG GetUnits(void);
HRESULT GetVideoPaletteEntries(long StartIndex, long Entries, long *pRetrieved, long *pPalette);
HRESULT GetVideoPosition(RECT *pSourceRect, RECT *pDestinationRect);
HRESULT GetVideoSize(long *pWidth, long *pHeight);
HRESULT GetVirtualChannelOptions(BSTR ChanName, LONG* pChanOptions);
HRESULT GetVirtualMachineCount(ULONG* numberOfVMs);
HRESULT GetVirtualMachineName(GUID* virtualMachineID, LPOLESTR* virtualMachineName);
HRESULT GetVoice(ISpVoice** ppVoice);
HRESULT GetWindowContext(IOleInPlaceFrame **ppFrame, IOleInPlaceUIWindow **ppDoc, LPRECT lprcPosRect, LPRECT lprcClipRect, LPOLEINPLACEFRAMEINFO lpFrameInfo);
HRESULT GetWindowHandle(HWND *pHwnd);
LONG GetWindowHeight();
HRESULT GetWindowPosition(long *pLeft, long *pTop, long *pWidth, long *pHeight);
LONG GetWindowWidth();
HRESULT GetZoneMappings(DWORD dwZone, IEnumString** ppenumString, DWORD dwFlags);
HRESULT GeteXdi2Service(ICcService**ppeXdi2Service);
HRESULT GotFocus(void);
HRESULT HScroll (WPARAM wp);
HRESULT HandleClose(IDispatch *pdispControl);
HRESULT HandleDraw(IDispatch *pdispControl, OLE_HANDLE hDC);
HRESULT HandleGotFocus(IDispatch *pdispControl);
HRESULT HandleKeyPress(IDispatch *pdispControl, long lKeyDown);
HRESULT HandleLostFocus(IDispatch *pdispControl);
HRESULT HandleMessage(IDispatch *pdispControl, long uMsg, long wParam, long lParam);
HRESULT HandleStart(IDispatch *pdispControl);
BOOL HasAlpha (void);
BOOL HaveCurrentSample(void);
HRESULT Help(LPCWSTR lpszHelpDir);
HRESULT HideCursor(long HideCursor);
VOID WINAPI HighPriority(LPVOID lp);
HRESULT HitTest(long lx, long ly);
HRESULT ID (BSTR* pbstrStreamId);
HRESULT IconURL(BSTR bstrEncodingFormat, LONG lSizeX, LONG lSizeY, LONG lBitDepth, BSTR* pbstrIconURL);
HRESULT Id(BSTR* pbstrBootableDeviceId);
HRESULT ImageFail (DWORD dwCookie);
BOOL ImageList_DrawIndirect(IMAGELISTDRAWPARAMS* pimldp);
int InDisplay (void);
HRESULT InactivateWindow();
HRESULT Inactive(void);
void IncrementPinVersion();
void IncrementTypeVersion(void);
HRESULT Info(long lIndex, AM_MEDIA_TYPE **ppmt, DWORD *pdwFlags, LCID *plcid, DWORD *pdwGroup, WCHAR **ppszName, IUnknown **ppObject, IUnknown **ppUnk);
HRESULT InitASFormsManager(void);
HRESULT InitAllocator(IMemAllocator **ppAlloc);
HRESULT InitConnection(IRemoteDevice* piDevice);
HRESULT InitData(IDVDROM* pDisk);
HRESULT InitDecoder(IStream* stream, DecoderInitFlag flags);
HRESULT InitEncoder(IStream* stream);
HRESULT InitFromData(IDataObject *pDataObject, BOOL fCreation, DWORD dwReserved);
HRESULT InitFromDataKey(const WCHAR* pszCategoryId, const WCHAR* pszTokenId, ISpDataKey* pDataKey);
void InitMediaType();
HRESULT InitNew(IStorage *pStg);
BOOL InitObjType (LPWSTR lpszObjType, IReplObjHandler *ppObjHandler, UINT uPartnerBit);
BOOL InitPubKey (BYTE *pKey, DWORD cbBlob);
HRESULT InitSpNotifyCallback(ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam);
DWORD InitialThreadProc(LPVOID pv);
HRESULT InitializeService(WCHAR *szService);
BOOL InitializeStressModule(MODULE_PARAMS* pmp, UINT* pnThreads);
UINT InitializeTestThread(HANDLE hThread, DWORD dwThreadId, int index);
HRESULT Insert(short ch);
HRESULT InsertAt(long index, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BSTR bstr, short wID, BOOL fBitmap);
HRESULT InsertTool(IDirectMusicTool* pTool, DWORD* pdwPChannels, DWORD cPChannels, LONG lIndex);
VOID WINAPI Int64x32Div32(LONGLONG a, LONG b, LONG c, LONG rnd);
void IntToWstr(int i, LPWSTR wstrDest);
HRESULT Interference(DWORD dwType);
HRESULT Interpret(ISpPhraseBuilder* pPhrase, const ULONG ulFirstElement, const ULONG ulCountOfElements, ISpCFGInterpreterSite* pSite);
HRESULT Inverse(IMoniker **ppmk);
HRESULT InvokeAction(BSTR bstrActionName, VARIANT varInActionArgs, VARIANT* pvarOutActionArgs, VARIANT* pvarRetVal);
HRESULT Ioctl_Register_DataCollector(LPVOID pId, DWORD dwIDSize, LPVOID pBuffer, DWORD dwBufSize);
HRESULT Ioctl_Send_DataCollector(LPVOID pId, DWORD dwIDSize, LPVOID pBuffer, DWORD dwBufSize);
BOOL IsActive(void);
HRESULT IsAsyncMoniker(IMoniker* pmk);
BOOL IsAutoShowEnabled();
BOOL IsClassID(REFCLSID rclsid);
BOOL IsConflictObject();
BOOL IsConnected(void);
HRESULT IsContactValid(CEOID ceoidContact, PROPID propidAddress, BSTR* pbstrExplanation);
HRESULT IsControlOnForm(IDispatch *pdispControl);
HRESULT IsCursorHidden(long *CursorHidden);
HRESULT IsDirectDrawLoaded(void);
BOOL IsDirectDrawVersion1(void);
HRESULT IsDiscontinuity(void);
VOID WINAPI IsDlgButtonChecked(HWND hDlg, int nIDButton);
BOOL IsEndOfStream(void);
BOOL IsEndOfStreamDelivered(void);
HRESULT IsEqual(IMoniker *pmkOtherMoniker);
VOID WINAPI IsEqualObject(IUnknown *pFirst, IUnknown *pSecond);
BOOL IsFlushing(void);
HRESULT IsFormatSupported(const GUID *pFormat);
BOOL IsIdle();
BOOL IsNetPresent();
HRESULT IsPageDirty(void);
HRESULT IsPlaying(IDirectMusicSegment* pSegment, IDirectMusicSegmentState* pSegState);
HRESULT IsPreroll(void);
BOOL IsPrime(UINT n);
BOOL IsQueued();
BOOL IsReadOnly(void);
HRESULT IsRunning(IBindCtx *pbc, IMoniker *pmkToLeft, IMoniker *pmkNewlyRunning);
HRESULT IsSpeaking(BOOL *pfSpeaking);
BOOL IsSpecialSample(IMediaSample *pSample);
HRESULT IsStarted(void);
BOOL IsStopped();
BOOL IsStreaming(void);
HRESULT IsSyncPoint(void);
HRESULT IsUISupported(const WCHAR* pszTypeOfUI, void* pvExtraData, ULONG cbExtraData, IUnknown* punkObject, BOOL* pfSupported);
HRESULT IsUsingDefaultDestination(void);
HRESULT IsUsingDefaultSource(void);
HRESULT IsUsingTimeFormat(const GUID *pFormat);
HRESULT IsVirtualMachineRunning(GUID* virtualMachineID, boolean* isRunning);
HRESULT Item(int iIndex, IException ** ppException);
HRESULT ItemAt(long lIndex IDispatch **ppdispItem);
HRESULT ItemFromID(short ID, IDispatch **ppdispControl);
HRESULT JoinFilterGraph(IFilterGraph *pGraph, LPCWSTR pName);
HRESULT JumpToAnchor (BSTR bstrAnchor);
HRESULT KeyName(BSTR* pbstrName);
void KeybdDriverInitialize(PFN_KEYBD_EVENT_CALLBACK pfnKeybdEventCallback);
BOOL KeybdIstLoop(PKEYBD_IST pKeybdIst);
VOID WINAPI KeybdPdd_DllEntry(HANDLE hinstDLL, DWORD Op, LPVOID lpvReserved);
VOID WINAPI KeybdPdd_GetEvent(UINT32 VirtualKeys[16], KEY_STATE_FLAGS KeyEvents[16]);
VOID WINAPI KeybdPdd_GetEventEx2(UINT uiPddId, UINT32 rguiScanCode[16], BOOL rgfKeyDown[16]);
VOID WINAPI KeybdPdd_InitializeDriver(PFN_KEYBD_EVENT_CALLBACK pfnKeybdEventCallback);
VOID WINAPI KeybdPdd_PowerHandler(BOOL bOff);
int L2CAP_EstablishDeviceContext(void* *pUserContext, unsigned short psm, L2CAP_EVENT_INDICATION* pInd, L2CAP_CALLBACKS* pCall, L2CAP_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE* phDeviceContext);
int LAYER_CloseDeviceContext (HANDLE hDeviceContext);
int LAYER_EstablishDeviceConect(void* pUserContext, filters for the incomming connection, LAYER_EVENT_INDICATION* pInd, LAYER_CALLBACKS* pCall, LAYER_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE* phDeviceContext);
DWORD LED (BYTE ucPort, BOOL fState);
int Largest(MyInt ia,out MyInt element);
HRESULT Launch(BSTR bstrRemotePath, BSTR bstrCmdLine);
int Layer_CloseDeviceContext (HANDLE hDeviceContext);
int Layer_EstablishDeviceConnect(void* pUserContext, //Layer specific filtering parameters ... LAYER_EVENT_INDICATION* pInd, LAYER_CALLBACKS* pCall, LAYER_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE* phDeviceContext);
HRESULT LicenseAcquired(VARIANT_BOOL varResult);
HRESULT ListGet(PTSTR pszList, PSDATA pdList, DWORD *pdwListNum);
HRESULT ListSet(PTSTR pszList, DWORD dwListNum, SDATA dList);
HRESULT LoadAsync(BSTR bstrUrl, IUnknown* punkCallback);
BOOL LoadDeviceAsync();
HRESULT LoadDirectDraw(LPSTR szDevice);
HRESULT LoadFormResource(OLE_HANDLE hFC, long wRsrcID, IDispatch **ppForm, IDispatch *pDispSink);
HRESULT LoadMenuResource(OLE_HANDLE hFC, long wRsrcID, IDispatch **ppMenu);
LONG LoadPerfCounterTextStrings(LPSTR lpCommandLine, BOOL bQuietModeArg);
BOOL LoadWindowsSettings();
HRESULT LockBits(const RECT* rect, UINT flags, PixelFormatID pixelFormat, BitmapData* lockedBitmapData);
void LogMemUse(void);
void LogProcessCreate (DWORD dwProcID);
void LogProcessDelete (DWORD dwProcID);
void LogThreadCreate (DWORD dwThreadID, DWORD dwProcID);
void LogThreadDelete (DWORD dwThreadID, DWORD dwProcID);
void LogThreadSwitch (DWORD dwThreadID, DWORD dwProcID);
HRESULT LostFocus(void);
VOID WINAPI LowPriority(HANDLE h);
VOID WINAPI MBX_TA(void);
VOID WINAPI MBX_TB(void);
HRESULT MarshalInterface(IStream *pStm, REFIID riid, void *pv, DWORD dwDestContext, void *pvDestContext, DWORD mshlflags);
VOID WINAPI MedPriority(HANDLE h);
HRESULT MediaParameter(long EntryNum, BSTR bstrName, BSTR* pbstrValue);
HRESULT MediaParameterName(long EntryNum, long Index, BSTR* pbstrName);
HRESULT MenuCreate(PVCMDNAME pName, PLANGUAGE pLanguage, DWORD dwFlags, PIVCMDMENU *ppIVCmdMenu);
HRESULT MenuDelete(PVCMDNAME pName);
HRESULT MenuEnum(DWORD dwFlags, PTSTR pszApplicationFilter, PTSTR pszStateFilter, PIVCMDENUM *ppiVCmdEnum);
LONG Millisecs(void);
HRESULT MkParseDisplayNameEx(IBindCtx* pbc, LPWSTR szDisplayName, ULONG* pcchEaten, IMoniker** ppmk);
HRESULT ModifyTraining(LPTSTR lpszPhrase, DWORD dwFlags);
HRESULT MonikerBindToObject(IMoniker* pMk, IBindCtx* pBC, IBindStatusCallback* pBSC, REFIID riid, void** ppvObj);
HRESULT MonikerBindToStorage(IMoniker* pMk, IBindCtx* pBC, IBindStatusCallback* pBSC, REFIID riid, void** ppvObj);
HRESULT Move(LPCRECT prect);
HRESULT MoveAppToForeground(LONG ProcID, LONG *pZOrder, LONG Flags);
HRESULT MoveElementTo(const WCHAR *pwcsName, IStorage *pstgDest, LPWSTR pwcsNewName, DWORD grfFlags);
HRESULT MoveToForeground(BOOL fThis, LONG *pZOrder);
void MyFunction();
HRESULT Navigate(BSTR URL, VARIANT *Flags, VARIANT *TargetFrameName, VARIANT *PostData, VARIANT *Headers);
void NavigateComplete2(IDispatch* pdisp, VARIANT vtURL);
void NavigateError(IDispatch* pDisp, VARIANT* pvtURL, VARIANT* pvtFrame, VARIANT* pvtStatusCode, VARIANT_BOOL* pvbCancel);
HRESULT NavigateToURL(LPWSTR szURL);
HRESULT NewSegment(REFERENCE_TIME tStart, REFERENCE_TIME tStop, double dRate);
void NewWindow2(IDispatch** ppdisp, VARIANT_BOOL* pvbCancel);
HRESULT NextChar();
LONG NonDelegatingAddRef();
HRESULT NonDelegatingQueryInterface(REFIID riid, void ** ppv);
LONG NonDelegatingRelease();
void NotReady(void);
HRESULT Notify(IBaseFilter *pSelf, Quality q);
DWORD NotifyAddrChange(OUT PHANDLE Handle, IN LPOVERLAPPED overlapped);
HRESULT NotifyAllocator(IMemAllocator *pAllocator, BOOL bReadOnly);
void NotifyEndOfStream(void);
HRESULT NotifyEvent(long EventCode, long EventParam1, long EventParam2);
HRESULT NotifyGraphIsConnected();
HRESULT NotifyOwnerMessage(long hwnd, long uMsg, long wParam, long lParam);
DWORD NotifyRouteChange(OUT PHANDLE Handle, IN LPOVERLAPPED overlapped);
void NotifySample(void);
void NotifyThread();
HRESULT NotifyThreadSwitched(IOsAxsThread*pthrd);
HRESULT Num(DWORD *pdwNumCmd);
HRESULT Number(long *pVal);
LONG ObjectsActive();
HRESULT OnActivate(void);
void OnAngleChange(int cAngles, int nAngle);
HRESULT OnApplyChanges(void);
void OnAudioStreamChange(int nAudio, LCID lcidAudio);
HRESULT OnCallEvent(VoIPCallEvent vceEvent, IVoIPCurrentCall* piCurrentCall);
void OnChapterChange(int nChapter);
HRESULT OnConnect(IUnknown* pUnknown);
HRESULT OnDeactivate(void);
void OnDirectRender(IMediaSample *pMediaSample);
HRESULT OnDisconnect(void);
void OnDvdDriveReady(bool bReady);
void OnInit();
void OnMenu(bool bInMenu);
HRESULT OnObjectAvailable(REFIID riid, IUnknown* punk);
void OnParentalLevelChange(int nLevel);
void OnProhibitedChange(DVD_UOP_PROHIBITED edvdOperation, bool bProhibited);
void OnReceiveFirstSample(IMediaSample *pMediaSample);
void OnRename(IMoniker *pmk);
void OnRenderEnd(IMediaSample *pMediaSample);
void OnRenderStart(IMediaSample *pMediaSample);
HRESULT OnRequestProgress(IExchangeClientRequest* pRequest, enum ExchangeClientRequestStatus status);
BOOL OnSize(LONG Width, LONG Height);
HRESULT OnStartBinding(DWORD dwReserved, IBinding* pib);
HRESULT OnStartStreaming(void);
HRESULT OnStopStreaming(void);
void OnSubpictureStreamChange(int nSubpicture, LCID lcidSubpicture);
HRESULT OnThreadCreate(void);
HRESULT OnThreadDestroy(void);
void OnThreadInit();
HRESULT OnThreadStartPlay(void);
void OnTimeChange(DVD_HMSF_TIMECODE time);
void OnTimeEnd();
void OnTimeStart(long lTitleLenFrames, int nFramesPerSecond);
void OnTitleChange(int nTitle);
HRESULT OnUpdateRectangles();
HRESULT OnVideoSizeChange();
void OnWaitEnd(void);
void OnWaitStart(void);
HRESULT Open();
HRESULT OpenDevice (phPNDevice phPN, pPNDEVICE pDevice);
HRESULT OpenKey(const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey);
HRESULT OpenStorage(const WCHAR *pwcsName, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstg);
HRESULT OpenStream(const WCHAR *pwcsName, void *reserved1, DWORD grfMode, DWORD reserved2, IStream **ppstm);
HRESULT PChannelInfo(DWORD dwPChannel, IDirectMusicPort** ppPort, DWORD* pdwGroup, DWORD* pdwMChannel);
BOOL PIN_Close (DWORD Context);
BOOL PIN_Deinit(DWORD dwContext);
BOOL PIN_IOControl(DWORD dwContext, DWORD Ioctl, PUCHAR pInBuf, DWORD InBufLen, PUCHAR pOutBuf, DWORD OutBufLen, PDWORD pdwBytesTransferred);
DWORD PIN_Init(LPCTSTR Context, LPVOID lpvBusContext);
DWORD PIN_Open(DWORD Context, DWORD Access, DWORD ShareMode);
DWORD PRLED (BYTE ucPort, BOOL fState);
BOOL PageSetupDlg(LPPAGESETUPDLG lppsd);
void PaintWindow(BOOL bErase);
HRESULT ParkSession (BSTR bstrParkServerURI);
BOOL ParseCommand(LPCTSTR szCmd, LPCTSTR szCmdLine, PFN_FmtPuts pfnFmtPuts, PFN_Gets pfnGets);
HRESULT ParseDisplayName(IBindCtx *pbc, IMoniker *pmkToLeft, LPOLESTR *pszDisplayName, ULONG *pchEaten, IMoniker **ppmkOut);
HRESULT ParseFromTransitions(const SPPARSEINFO* pParseInfo, ISpPhraseBuilder** ppPhrase);
HRESULT PassNotify(Quality q);
HRESULT Pause (void);
HRESULT PerformanceAlignWindow();
VOID WINAPI Philosopher(LPVOID lpPhilosopherID);
void PinClickHandler(Pin source, PinClickEventArgs args);
HRESULT PlatformId(BSTR* pbstrPlatformId);
HRESULT Play(DWORD dwReserved1, DWORD dwReserved2, DWORD dwFlags);
HRESULT PlayBuffer(IDIRECTMUSICBUFFER* pBuffer);
HRESULT PlaySegment(IDirectMusicSegment* pSegment, DWORD dwFlags, __int64 i64StartTime, IDirectMusicSegmentState** ppSegmentState);
HRESULT PlaylistCount(long* pNumberEntries);
VOID WINAPI PossiblyEatMessage(HWND hwndDrain, UINT uMsg, WPARAM wParam, LPARAM lParam);
HRESULT PostMessageToApp(long uMsg, long wParam, long lParam);
HRESULT PostMsg(long uMsg, long wParam, long lParam);
HRESULT Power(VARIANT_BOOL * pbPower);
void PreparePerformanceData(int trLate, int trFrame);
HRESULT PrepareReceive(IMediaSample *pMediaSample);
void PrepareRender(void);
HRESULT PrepareWindow();
HRESULT PrevChar();
void Print(TCHAR *pFormat, ...);
BOOL PrintDlg(LPPRINTDLG lppd);
HRESULT ProcessInput(DWORD dwInputStreamIndex, IMediaBuffer* pBuffer, DWORD dwFlags, REFERENCE_TIME rtTimestamp, REFERENCE_TIME rtTimelength);
void ProcessStartupFolder();
HRESULT ProcessVertices(UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DMobileVertexBuffer* pDestBuffer, DWORD Flags);
void ProgramWindow();
void PropertyChange(BSTR bstrProperty);
void PublicStatMemFunc1(void);
HRESULT PushCommand(DWORD dwCmd, HPACKET hPacket);
HRESULT PushIntoSink(IImageSink* sink);
HRESULT PushPixelData(const RECT* rect, const BitmapData* bitmapData, BOOL lastPass);
HRESULT Put(IHeaderCollection* pHeaders, IStream** ppStream);
HRESULT PutCommonBoolProperties(short pwProps);
int PutProp(void);
int PutPropToo(void);
void PutQueueObject(T object);
HRESULT QueryAccept(const AM_MEDIA_TYPE *pmt);
HRESULT QueryBlanket(IUnknown *pProxy, DWORD *pAuthnSvc, DWORD *pAuthzSvc, OLECHAR **pServerPrincName, DWORD *pAuthnLevel, DWORD *pImpLevel, RPC_AUTH_IDENTITY_HANDLE* pAuthInfo, DWORD *pCapabilities);
HRESULT QueryDirection(PIN_DIRECTION* pPinDir);
HRESULT QueryFilterInfo(FILTER_INFO *pInfo);
HRESULT QueryFormForNavState();
HRESULT QueryId(LPWSTR *Id);
HRESULT QueryInternalConnections(IPin **apPin, ULONG *nPin);
HRESULT QueryPhrase(LPTSTR lpszPhrase, DWORD *pdwValue);
HRESULT QueryPinInfo(PIN_INFO *pInfo);
HRESULT QueryPreferredFormat(GUID *pFormat);
HRESULT QueryStateVariable(BSTR bstrVariableName, VARIANT* pvarValue);
HRESULT QuerySupported(REFGUID guidPropSet, DWORD dwPropID, DWORD* pTypeSupport);
HRESULT QueryVendorInfo(LPWSTR *pVendorInfo);
HRESULT QueryWriteSync();
HRESULT QueueFile(BSTR bstrSource, BSTR bstrDest, VARIANT_BOOL bOverWrite);
HRESULT QueuePackage(BSTR bstrPackageId, BSTR bstrDestPath, VARIANT_BOOL bOverWrite);
void QueueSample(IMediaSample *pSample);
HRESULT QueueTask(ISpTask pTask, void* pvTaskData, HANDLE hCompEvent, DWORD** pdwGroupId, DWORD** pTaskID);
int RFCOMM_EstablishDeviceContext(void* *pUserContext, unsigned char channel, RFCOMM_EVENT_INDICATION* pInd, RFCOMM_CALLBACKS* pCall, RFCOMM_INTERFACE* pInt, int* pcDataHeaders, int* pcDataTrailers, HANDLE *phDeviceContext);
BOOL RT_Bare_GetRealTime (LPSYSTEMTIME lpst);
BOOL RT_Bare_SetRealTime (LPSYSTEMTIME lpst);
BOOL RT_Init_RealTime (void);
HRESULT RadiansToDegrees (pPNPOSLLA pLLAPos);
HRESULT ReInviteWithDescription(BSTR offerContentType, BSTR offerDescription);
HRESULT ReInviteWithSessionDescription(BSTR bstrContentType, BSTR bstrSessionDescription, LONG_PTR lCookie);
HRESULT ReadFromStream(IStream* pStream);
HRESULT ReadVOB(UINT16 hVOB, INT8* buf, UINT32 startBlock, UINT32 endBlock);
void Ready(void);
void ReallyFree (void);
HRESULT Receive(IMediaSample *pSample);
HRESULT ReceiveAllocator(IMemAllocator *pAllocator, BOOL bReadOnly);
HRESULT ReceiveCanBlock(void);
HRESULT ReceiveConnection(IPin *pConnector, AM_MEDIA_TYPE *pmt);
HRESULT ReceiveMsg(long uMsg, long wParam, long lParam);
HRESULT ReceiveMultiple(IMediaSample **pSamples, long nSamples, long * nSamplesProcessed);
HRESULT RecognizeStream(REFGUID rguidFmtId, const WAVEFORMATEX* pWaveFormatEx, HANDLE hRequestSync, HANDLE hDataAvailable, HANDLE hExit, BOOL fNewAudioStream, BOOL fRealTimeAudio, ISpObjectToken* pAudioObjectToken);
HRESULT Reconnect(IPin *ppin);
HRESULT ReconnectEx(IPin *ppin, const AM_MEDIA_TYPE *pmt);
HRESULT ReconnectPin(IPin *pPin, AM_MEDIA_TYPE const *pmt);
void RecordFrameLateness(int trLate, int trFrame);
HRESULT Redraw(void);
HRESULT Reduce(IBindCtx *pbc, DWORD dwReduceHowFar, IMoniker **ppmkReduced);
HRESULT Refer(BSTR bstrReferToURI, BSTR bstrReferCookie);
HRESULT ReferToSessionInfo(BSTR* pbstrReferToCallID, BSTR* pbstrReferToFromTag, BSTR* pbstrReferToToTag);
HRESULT ReferToURI(BSTR* pbstrReferredToURI);
HRESULT ReferredByURI(BSTR* pbstrReferredByURI);
void RefreshCache();
HRESULT Register(DWORD grfFlags, IUnknown *punkObject, IMoniker *pmkObjectName, DWORD *pdwRegister);
HRESULT RegisterBindStatusCallback(IBindCtx* pbc, IBindStatusCallback* pbsc, IBindStatusCallback** ppbscPrevious, DWORD dwReserved);
HRESULT RegisterBrowserEventSink();
HRESULT RegisterClassImplCategories(REFCLSID rclsid, ULONG cCategories, CATID rgcatid);
HRESULT RegisterClassReqCategories(REFCLSID rclsid, ULONG cCategories, CATID rgcatid);
HRESULT RegisterFilter(REFCLSID clsidFilter, LPCWSTR Name, IMoniker **ppMoniker, const CLSID *pclsidCategory, const OLECHAR *szInstance, const REGFILTER2 *prf2);
HRESULT RegisterFormatEnumerator(LPBC pBC, IEnumFORMATETC* pEFetc, DWORD reserved);
HRESULT RegisterInterfaceInGlobal(IUnknown* pUnk, REFIID riid, DWORD* pdwCookie);
HRESULT RegisterMediaTime(IMediaSample *pMediaSample);
HRESULT RegisterMimeFilter(IClassFactory* pCF, REFCLSID rclsid, LPCWSTR pwzType);
HRESULT RegisterNameSpace(IClassFactory* pCF, REFCLSID rclsid, LPCWSTR pwzProtocol, ULONG cPatterns, const LPCWSTR* ppwzPatterns, DWORD dwReserved);
HRESULT RegisterObjectBound(IUnknown* punk);
HRESULT RegisterObjectParam(LPOLESTR pszKey, IUnknown* punk);
void RegisterPerfId();
HRESULT RelativePathTo(IMoniker *pmkOther, IMoniker **ppmkRelPath);
HRESULT ReleaseBuffer(IMediaSample *pSample);
void ReleaseDirectDraw(void);
HRESULT ReleaseMapping(BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort);
HRESULT ReleaseMappingEx(long lTransport, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort);
HRESULT ReleaseMarshalData(IStream *pStm);
HRESULT ReleaseObject(IDirectMusicObject* pObject);
HRESULT ReleasePixelDataBuffer(const BitmapData* bitmapData);
HRESULT RemoteDbgDirectory(BSTR* pbstrRemoteDbgDirectory);
void RemoveAll();
HRESULT RemoveAt(long index);
HRESULT RemoveAtIndex(long index);
HRESULT RemoveByID(short wID);
HRESULT RemoveFilter(IBaseFilter *pFilter);
HRESULT RemovePort(IDirectMusicPort* pPort);
HRESULT RemoveSIFile(DWORD dwID, DWORD dwFlag);
HRESULT RemoveTool(IDirectMusicTool* pTool);
HRESULT Render(IMediaSample *pMediaSample);
HRESULT RenderStream(const GUID* pCategory, const GUID* pType, IUnknown* pSource, IBaseFilter* pIntermediate, IBaseFilter* pSink);
void Reply(DWORD dw);
HRESULT Request(IMediaSample* pSample, DWORD dwUser);
HRESULT RequestAllocator(IMemAllocator* pPreferred, ALLOCATOR_PROPERTIES* pProps, IMemAllocator ** ppActual);
HRESULT RequestContacts(struct ContactsSearchCriteria* pCriteria, IExchangeClientRequest** ppiRequest);
HRESULT RequestFreeBusyData(struct FreeBusyCriteria* pCriteria, IExchangeClientRequest** ppiRequest);
HRESULT RequestLicKey(DWORD dwReserved, BSTR *pbstrKey);
HRESULT ReregisterDevice(BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, BSTR bstrProgIDDeviceControlClass, BSTR bstrInitString, BSTR bstrContainerId, BSTR bstrResourcePath, LONG nLifeTime);
HRESULT ReregisterRunningDevice(BSTR bstrDeviceIdentifier, BSTR bstrXMLDesc, IUnknown* punkDeviceControl, BSTR bstrInitString, BSTR bstrResourcePath, LONG nLifeTime);
HRESULT ResetEndOfStream(void);
void ResetEndOfStreamTimer(void);
void ResetFormatBuffer();
HRESULT ResetMediaTime(void);
HRESULT ResetStreamingTimes(void);
HRESULT Resize(UINT newWidth, UINT newHeight, PixelFormatID pixelFormat, InterpolationHint hints, IBitmapImage** outbmp);
HRESULT RestoreAppZOrder(LONG ZOrder);
HRESULT RestoreVirtualMachine(GUID* virtualMachineID);
HRESULT RestoreZOrder(LONG ZOrder);
HRESULT Resubscribe(BSTR bstrContentType, BSTR bstrBody);
HRESULT Retrieve(BSTR bstrAddress, BSTR bstrName, BSTR bstrReferredByURI, BSTR bstrRetrieveCallID, BSTR bstrRetrieveFromTag, BSTR bstrRetrieveToTag, VARIANT_BOOL fEarlyOnly);
HRESULT RetrieveRecords(UCHAR* pStream, ULONG size, ISdpRecord** ppSdpRecords, ULONG* pNumRecords);
HRESULT RetrieveUint64(UCHAR* pStream, ULONGLONG* pUint64);
void Reverse();
HRESULT RevokeBindStatusCallback(IBindCtx* pbc, IBindStatusCallback* pbsc);
HRESULT RevokeFormatEnumerator(LPBC pbc, IEnumFORMATETC* pEFetc);
HRESULT RevokeObjectBound(IUnknown* punk);
HRESULT Rotate(FLOAT angle, InterpolationHint hints, IBitmapImage** outbmp);
HRESULT SaveCmd(IStream* pSaveStream, WCHAR** ppCoMemErrorText);
BOOL ScheduleSample(IMediaSample *pMediaSample);
HRESULT ScrollIntoView (DWORD dwCookie);
BOOL SecondaryCompareFunc();
void SendAnyway();
HRESULT SendEndOfStream(void);
HRESULT SendInfo(BSTR bstrInfoHeader, BSTR bstrInfo, LONG_PTR lCookie);
HRESULT SendMessageStatus(RTC_MESSAGING_USER_STATUS enUserStatus, LONG_PTR lCookie);
void SendNotifyWindow(IPin *pPin, HWND hwnd);
HRESULT SendOnRename(IMoniker *pmk);
HRESULT SendOnVirtualChannel(BSTR ChanName, BSTR ChanData);
HRESULT SendQuality(REFERENCE_TIME trLate, REFERENCE_TIME trRealStream);
void SendRepaint(void);
VOID WINAPI ServerThread (PVOID pArg);
void Set(void);
void SetAbortSignal(BOOL bAbort);
HRESULT SetActualDataLength(long lLen);
HRESULT SetAdditionalHeaderValues(BSTR bstrHeaderValuePairs);
HRESULT SetAdvise(DWORD dwAspect, DWORD advf, IAdviseSink *pAdvSink);
BOOL SetAllocatedSize(HPACKET hPacket, DWORD dwBytesRequested, DWORD *pBytesAllocated);
HRESULT SetAppAlertState(OLE_HANDLE hFC, BOOL fCurrentUser, BSTR bstrAppName, BSTR bstrAlertName, LONG AlertAction, LONG AlertVal);
HRESULT SetBaseStream(ISpStreamFormat* pStream, BOOL fSetFormatToBaseStreamFormat, BOOL fWriteToBaseStream);
HRESULT SetBlanket(IUnknown *pProxy, DWORD dwAuthnSvc, DWORD dwAuthzSvc, OLECHAR *pServerPrincName, DWORD dwAuthnLevel, DWORD dwImpLevel, RPC_AUTH_IDENTITY_HANDLE pAuthInfo, DWORD dwCapabilities);
HRESULT SetBounds(long lxLeft, long lyTop, long ldxWidth, long ldyHeight);
HRESULT SetBufferingDepth(const REFERENCE_TIME* ptStop);
HRESULT SetClientSite(IOleClientSite *pClientSite);
void SetColorKey (DWORD dwColorKey);
void SetColorKeyHigh (DWORD dwColorKey);
void SetColorKeyLow (DWORD dwColorKey);
void SetColorKeyMask (DWORD dwColorKeyMask);
HRESULT SetColumns(BSTR Columns);
void SetCursorPosition(UINT XScreenSpace, UINT YScreenSpace, DWORD Flags);
HRESULT SetCursorProperties(UINT XHotSpot, UINT YHotSpot, IDirect3DSurface8* pCursorBitmap);
void SetDDGPESurf(LPDDRAWI_DDRAWSURFACE_GBL lpDDSurface);
HRESULT SetDDSurfaceKernelHandle(DWORD dwDDKernelHandle);
HRESULT SetDefaultDestinationPosition();
HRESULT SetDefaultSourcePosition();
HRESULT SetDestinationPosition(long Left, long Top, long Width, long Height);
void SetDirectDraw(LPDIRECTDRAW pDirectDraw);
void SetDirectDrawSurface (LPDDRAWI_DDRAWSURFACE_LCL lpDDSurface);
HRESULT SetDirty(BOOL fDirty);
HRESULT SetDiscontinuity(BOOL bDiscont);
void SetDriverGUID (GUID guidDriverGUID);
HRESULT SetErrorInfo(DWORD dwReserved, IErrorInfo *perrinfo);
void SetFOURCC(const GUID * pguid);
void SetFilterGraph(IMediaEventSink *pSink);
HRESULT SetFiltergraph(IGraphBuilder* pfg);
HRESULT SetFocusNext(void);
HRESULT SetFocusPrev(void);
HRESULT SetFormat(LPWAVEFORMATEX pwfxToSet);
void SetFormatType(const GUID * pformattype);
BOOL SetFrameLength(USB_HANDLE hDevice, HANDLE hEvent, USHORT uFrameLength);
HRESULT SetFrequency(DWORD dwFrequency);
HRESULT SetGraph(IDirectMusicGraph* pGraph);
HRESULT SetImInfo(IMINFO *pimi);
HRESULT SetIndices(IDirect3DMobileIndexBuffer* pIndexData);
HRESULT SetInput(IUnknown* pUnkInput, BOOL fAllowFormatChanges);
HRESULT SetItem(DWORD dwEnable, DWORD dwCmdNum, DWORD dwFlag);
HRESULT SetLocalPresenceInfo(RTC_PRESENCE_STATUS enStatus, BSTR bstrNotes);
HRESULT SetMediaTime(LONGLONG * pStart, LONGLONG * pEnd);
HRESULT SetMode(DWORD dwMode);
HRESULT SetMops(unsigned int index, BSTR bstrMops);
HRESULT SetNotifyCallbackInterface(ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam);
HRESULT SetNotifySink(ISpNotifySink* pNotifySink);
HRESULT SetObject(REFGUID guidServiceId, IUnknown* pUnkObject);
HRESULT SetObjectToken(ISpObjectToken* pToken);
HRESULT SetObjects(ULONG cObjects, LPUNKNOWN* ppUnk);
HRESULT SetOutput(IUnknown* pUnkOutput, BOOL fAllowFormatChanges);
HRESULT SetOutputFileName(const GUID* pType, LPCOLESTR lpwstrFile, IBaseFilter** ppf, IFileSinkFilter** pSink);
HRESULT SetPageSite(IPropertyPageSite* pPageSite);
HRESULT SetPath(LPCWSTR pszName, DWORD dwFlags, IHeaderCollection* pHeaders);
HRESULT SetPosition(DWORD dwNewPosition);
HRESULT SetPositions(LONGLONG *pCurrent, DWORD dwCurrentFlags, LONGLONG *pStop, DWORD dwStopFlags);
HRESULT SetPreroll(BOOL bIsPreroll);
HRESULT SetPresenceData(BSTR bstrNamespace, BSTR bstrData);
HRESULT SetProperties(ALLOCATOR_PROPERTIES *pRequest, ALLOCATOR_PROPERTIES *pActual);
HRESULT SetQuality(DWORD dwQuality);
HRESULT SetRate(double dRate);
HRESULT SetRecoProfile(ISpObjectToken* pToken);
HRESULT SetRecognizer(ISpObjectToken* pEngineToken);
HRESULT SetRecordingPath(LPCOLESTR pszPath);
HRESULT SetRenderTarget(IDirect3DMobileSurface* pRenderTarget, IDirect3DMobileSurface* pNewZStencil);
void SetRepaintStatus(BOOL bRepaint);
HRESULT SetSameFormat(IMediaStream *pStreamThatHasDesiredFormat, DWORD dwFlags);
void SetSampleSize(ULONG sz);
HRESULT SetSaveObjects(IStream* pStream, ISpErrorLog* pErrorLog);
HRESULT SetSecuritySite(IInternetSecurityMgrSite* pSite);
HRESULT SetSink(IQualityControl *piqc);
HRESULT SetSite(ISpSREngineSite* pSite);
HRESULT SetSourceMoniker(IMoniker* pmk, REFCLSID rclsid);
HRESULT SetSourcePosition(long Left, long Top, long Width, long Height);
HRESULT SetStreamSource(UINT StreamNumber, IDirect3DMobileVertexBuffer* pStreamData, UINT Stride);
void SetSubtype(const GUID * psubtype);
HRESULT SetSyncPoint(BOOL bIsSyncPoint);
HRESULT SetSyncSource (IReferenceClock *pClock);
VOID WINAPI SetSysColors(int cElements, CONST INT *lpaElements, CONST COLORREF *lpaRgbValues);
void SetTemporalCompression(BOOL bCompressed);
HRESULT SetTexture(DWORD Stage, IDirect3DMobileBaseTexture* pTexture);
HRESULT SetTime(REFERENCE_TIME * pTimeStart, REFERENCE_TIME * pTimeEnd);
HRESULT SetTimeFormat(const GUID *pFormat);
HRESULT SetTunePolicy(STRMBUF_PLAYBACK_TUNE_POLICY eStrmbufPlaybackTunePolicy);
void SetType(const GUID * ptype);
void SetVariableSize();
HRESULT SetVertexShader(DWORD Handle);
HRESULT SetVirtualChannelOptions(BSTR chanName, LONG chanOptions);
HRESULT SetVirtualMachineName(GUID* virtualMachineID, LPOLESTR virtualMachineName);
HRESULT SetVoice(ISpVoice* pVoice, BOOL fAllowFormatChanges);
HRESULT SetVolumePan(PDSVOLUMEPAN pDsVolumePan);
void SetWaiting();
HRESULT SetWindowForeground(long Focus);
HRESULT SetWindowPosition(long Left, long Top, long Width, long Height);
DWORD SetupControl (void);
DWORD SetupInterrupt (void);
DWORD SetupMemory (void);
HRESULT ShouldDrawSampleNow(IMediaSample *pMediaSample, REFERENCE_TIME *pStartTime, REFERENCE_TIME *pEndTime);
BOOL ShouldSkipFrame(IMediaSample *pIn);
void Show();
BOOL SideShowMgr_GetAvailableUserNames(WCHAR* wcNames, DWORD dwAllocatedCharacters, INT* iCurrentUserIndex);
void SignalTimerFired(void);
int SipEnumIMProc(IMENUMINFO *pIMInfo);
int SizeMax(void);
BOOL SnmpExtensionInit(DWORD dwUptimeReference, Handle dwUptimeReference, AsnObjectIdentifier pFirstSupportedRegion);
HRESULT SoapAttribute(BSTR name, BSTR ns_uri, BSTR value, BSTR prefix);
HRESULT SoapDefaultNamespace(BSTR ns_uri);
HRESULT SoapInvoke(VARIANT varInput, IUnknown* pOutputStream, BSTR bstrSoapAction);
HRESULT SoapNamespace(BSTR prefix, BSTR ns_uri);
HRESULT Sort(BSTR pwszProperty, VARIANT_BOOL fDescending);
HRESULT SourceThreadCanWait(BOOL bCanWait);
HRESULT SpCreateNewToken(const WCHAR* pszCategoryId, const WCHAR* pszTokenKeyName, ISpObjectToken** ppToken);
HRESULT SpCreateNewTokenEx(const WCHAR* pszCategoryId, const WCHAR* pszTokenKeyName, const CLSID* pclsid, const WCHAR* pszLangIndependentName, LANGID langid, const WCHAR* pszLangDependentName, ISpObjectToken** ppToken, ISpDataKey** ppDataKeyAttribs);
HRESULT SpCreatePhoneConverter(LANGID* langid, const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, ISpPhoneConverter** ppPhoneConverter);
HRESULT SpEnumTokens(const WCHAR* pszCategoryId, const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, IEnumSpObjectTokens** ppEnum);
HRESULT SpFindBestToken(const WCHAR* pszCategoryId, const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, ISpObjectToken** ppObjectToken);
HRESULT SpSetCommonTokenData(ISpObjectToken* pToken, const CLSID* pclsid, const WCHAR* pszLangIndependentName, LANGID langid, const WCHAR* pszLangDependentName, ISpDataKey** ppDataKeyAttribs);
HRESULT SpSetDefaultTokenForCategoryId(const WCHAR* pszCategoryId, ISpObjectToken* pToken);
HRESULT Speak(DWORD dwSpeakFlags, REFGUID rguidFormatId, const WaveFormatEx* pWaveFormatEx, const SPVTEXTFRAG* pTextFragList, ISpTTSEngineSite* pOutputSite);
HRESULT SpeakFocusTab();
HRESULT SpeakStream(IStream* pStream, DWORD dwFlags, ULONG* pulStreamNumber);
HRESULT SpeakerGet(PTSTR pszSpeaker, DWORD dwSize, DWORD *pdwNeeded);
HRESULT SpeakerSet(PTSTR pszSpeaker);
HRESULT SpeakingDone (void);
HRESULT SpeakingStarted(void);
HRESULT SpeedGet(DWORD *pdwSpeed);
HRESULT SpeedSet(DWORD dwSpeed);
HRESULT Start(DWORD dwFlags);
HRESULT StartBrowser(LPWSTR szURL);
HRESULT StartCommandHandler(WCHAR *szService, MANAGED_COMMANDHANDLER_TYPE type, HWND hwndNotify, UINT Msg);
HRESULT StartListenAddressAndPort(BSTR bstrInternalLocalAddress, long lInternalLocalPort);
HRESULT StartStreaming(void);
HRESULT StartupServer(BSTR* pbstrStartupServerId);
HRESULT StatusText(BSTR* pbstrText);
void StatusTextChange(BSTR bstrText);
HRESULT Stop();
HRESULT StopAll(void);
HRESULT StopCommandHandler();
HRESULT StopListenAddressAndPort(BSTR bstrInternalLocalAddress, long lInternalLocalPort);
HRESULT StopSpeaking(void);
HRESULT StopStreaming(void);
HRESULT StretchRect(IDirect3DMobileSurface* pSourceSurface, CONST RECT* pSourceRect, IDirect3DMobileSurface* pDestSurface, CONST RECT* pDestRect, D3DMTEXTUREFILTERTYPE Filter);
HRESULT Subscribe(GUID PlatformID, GUID DeviceID, GUID PublisherID, ISubscriber* pSubscriber, IPublisher** ppPublisher, GUID* pCookieID);
HRESULT SubscribeToOperation(const WSD_OPERATION* pOperation, IUnknown* pUnknown, const WSDXML_ELEMENT* pAny, WSDXML_ELEMENT** ppAny);
void Swap (LPDDRAWI_DDRAWSURFACE_LCL s1, LPDDRAWI_DDRAWSURFACE_LCL s2);
HRESULT SwitchExecutionTo(IOsAxsProcess** ppiOldProc, IOsAxsThread**ppiOldThrd, IOsAxsProcess** ppiNewProc);
HRESULT SwitchSink(IInternetProtocolSink* pOIProtSink);
HRESULT SyncReadAligned(IMediaSample *pSample);
HRESULT SysFreeString(BSTR bstr);
HRESULT SysReAllocString(BSTR FAR *pbstr, OLECHAR FAR *sz);
HRESULT SysReAllocStringLen(BSTR FAR *pbstr, OLECHAR FAR *pch, unsigned int cch);
HRESULT SysStringByteLen(BSTR bstr);
HRESULT SysStringLen(BSTR bstr);
VOID WINAPI TGTPLAT_Entry(UINT uiPddId, PFN_KEYBD_EVENT pfnKeybdEvent, PKEYBD_PDD *ppKeybdPdd);
BOOL TakeFrameLengthControl(USB_HANDLE hDevice);
HRESULT TearDown();
DWORD TerminateStressModule(void);
VOID WINAPI ThreadAlgoritm1 (LPVOID lpvParam);
VOID WINAPI ThreadAlgoritm2 (LPVOID lpvParam);
VOID WINAPI ThreadAlgoritm3 (LPVOID lpvParam);
VOID WINAPI ThreadControl (LPVOID lpvParam);
BOOL ThreadExists();
VOID WINAPI ThreadIST (LPVOID lpvParam);
VOID WINAPI ThreadProc(LPVOID lpParameter);
VOID WINAPI ThreadWatchdog (LPVOID lpvParam);
HRESULT ThresholdGet(DWORD *pdwThreshold);
HRESULT ThresholdSet(DWORD dwThreshold);
void ThrottleWait(void);
void TimerCallback(void);
void TitleChange(BSTR bstrTitle);
BOOL TouchPanelEnable(PFN_TOUCH_PANEL_CALLBACK pfnCallback);
BOOL TouchPanelInitializeCursor(PFN_DISP_DRIVER_MOVE_CURSOR);
BOOL TouchPanelReadCalibrationPoint(INT *pRawX, INT *pRawY);
HRESULT Train(PCWSTR lpPhrases, DWORD dwSize, PCWSTR lpCaption, DWORD dwSizeCap, DWORD hHandle, DWORD dwFlags);
HRESULT Transfer (IfmManage *pFrmMgr, WORD wNum, CEOID *rgOID);
BOOL TranslateStringDescr(LPCUSB_STRING_DESCRIPTOR lpStringDescr, LPWSTR szString, DWORD cchStringLength);
HRESULT Transport(BSTR* pbstrTransportId);
void TriggerThread();
BOOL TunerCancelSeek(HANDLE hTuner);
BOOL TunerClose(HANDLE hTuner);
DWORD TunerGetBandInfo(DWORD dwDeviceidentifier, DWORD dwBands, PTUNERBANDINFO pBandInfo, DWORD dwBufSize, DWORD *pdwActualOutSize);
BOOL TunerGetConfig (HANDLE hTuner, PTUNERCONFIG pTunerConfig);
BOOL TunerGetDevCaps(DWORD dwTuner, PTUNERDEVCAPS pTunerDevCaps);
BOOL TunerGetSignalInfo(HANDLE hTuner, PSIGNALINFO pSignalInfo);
HANDLE TunerOpen(DWORD dwTuneridentifier);
BOOL TunerQuery(DWORD *pdwTunerAPIVer, OUT DWORD *pdwNumDevs);
BOOL TunerReset(HANDLE hTuner);
BOOL TunerSeekStation(HANDLE hTuner, PTUNERSEEKINFO pTunerSeekInfo);
BOOL TunerSetConfig(HANDLE hTuner, PTUNERCONFIG pTunerConfig);
HRESULT TypeId(BSTR* pbstrTypeId);
HRESULT UnInitASFormsManager(void);
HRESULT UnInitializeService();
DWORD UnLoad(DWORD dwType, DWORD dwFlags);
HRESULT UnPublish(LPCWSTR pszDeviceId, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSDXML_ELEMENT* pAny);
BOOL UnRegisterClientSettings(LPCWSTR szUniqueDriverId, LPCWSTR szReserved, LPCUSB_DRIVER_SETTINGS lpDriverSettings);
BOOL UnRegisterNotificationRoutine(USB_HANDLE hDevice, LPDEVICE_NOTIFY_ROUTINE lpNotifyRoutine, LPVOID lpvNotifyParameter);
HRESULT UniversalSDK(BSTR* pbstrUniversalSDKGuid);
HRESULT Unload(IDirectMusicPerformance* pPerformance);
HRESULT UnloadInstrument(IDirectMusicDownloadedInstrument* pDownloadedInstrument);
LONG UnloadPerfCounterTextStrings(LPSTR lpCommandLine, BOOL bQuietModeArg);
HRESULT UnlockBits(const BitmapData* lockedBitmapData);
HRESULT UnmarshalInterface(IStream *pStm, REFIID riid, void **ppv);
HRESULT Unregister();
HRESULT UnregisterMimeFilter(IClassFactory* pCF, LPCWSTR pwzType);
HRESULT UnregisterNameSpace(IClassFactory* pCF, LPCWSTR pszProtocol);
HRESULT UpdateRemoteAddress(BSTR bstrRemoteAddress, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort);
HRESULT UpdateRemoteAddressEx(BSTR bstrRemoteAddress, long lRemotePort, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort);
HRESULT UpdateRemoteAddressEx2(BSTR bstrRemoteAddress, long lRemotePort, long lTransport, BSTR bstrInternalLocalAddress, long lInternalLocalPort, BSTR bstrExternalLocalAddress, long lExternalLocalPort);
HRESULT UpdateTexture(IDirect3DMobileBaseTexture* pSourceTexture, IDirect3DMobileBaseTexture* pDestinationTexture);
HRESULT UserOptionsDlg(HWND hwndParent);
HRESULT VScroll (WPARAM wp);
HRESULT VarBoolFromDisp(IDispatch *pdispIn, LCID lcid, BOOL *pboolOut);
HRESULT VarBstrFromBool(BOOL boolIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarBstrFromCy(CURRENCY cyIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarBstrFromDec(DECIMAL *pdecIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarBstrFromDisp(IDispatch *pdispln, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarBstrFromI2(short iVal, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarBstrFromI4(long lIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarBstrFromR4(float fltIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarBstrFromR8(double dblIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
HRESULT VarCyFromDisp(IDispatch *pdispIn, LCID lcid, CURRENCY *pcyOut);
HRESULT VarDateFromDisp(IDispatch *pdispIn, LCID lcid, DATE *pdateOut);
HRESULT VarDecFromDisp(IDispatch *pdispIn, LCID lcid, DECIMAL *pdecOut);
HRESULT VarI2FromDisp(IDispatch *pdispIn, LCID lcid, short *psOut);
HRESULT VarI4FromDisp(IDispatch *pdispIn, LCID lcid, long *plOut);
HRESULT VarR4FromDisp(IDispatch *pdispIn, LCID lcid, float *pfltOut);
HRESULT VarR8FromDips(IDispatch *pdispIn, LCID lcid, double *pdblOut);
HRESULT VarUI1FromDisp(IDispatch *pdispIn, LCID lcid, BYTE *pbOut);
HRESULT VectorFromBstr(BSTR bstr, SAFEARRAY FAR *FAR *ppsa);
HRESULT VelocityToBearing(pPNVELBEAR pBearVel, const pPNVELENU pENUVel);
HRESULT VerifyVideoFile(WCHAR *filename);
HRESULT Version(BSTR* out_pbstrVersion);
BOOL Wait(DWORD dwTimeout);
HRESULT WaitForCompletion(long msTimeout, long *pEvCode);
HRESULT WaitForNext(DWORD dwTimeout, IMediaSample **ppSample, DWORD *pdwUser);
HRESULT WaitForNotifyEvent(DWORD dwMilliseconds);
void WaitForReceiveToComplete();
HRESULT WaitForRenderTime(void);
HRESULT WaitForSync(DWORD dwFlags, DWORD dwLine, DWORD dwTimeout);
HRESULT WaitForThreadDone(BOOL fForceStop, HRESULT* phrThreadResult, ULONG msTimeOut);
BOOL WaitForThreadExit(LPDWORD lpdwExitCode);
BOOL WaitMsg(DWORD dwTimeOut);
HRESULT WaitOnCommandHandler();
HRESULT Walk(ISdpWalk* pWalk);
void WhereProhibited(void);
HRESULT WintmPNTM (PNTM pNTM, const SYSTEMTIME pTime);
VOID STDAPI WriteBSTR(BSTR *pstrDest, LPCWSTR szSrc);
VOID STDAPI WriteInt(IStream *pIStream, int n);
HRESULT WriteRTPPayloadHeader(IUnknown *pEncoder, const CHAR *szFmtp, PBYTE pbEncodedFrame, DWORD dwEncodedSize, DWORD *pdwFrameStartBitOffset, DWORD *pdwFrameEndBitOffset, BOOL fKeyFrame, BYTE *pbPayloadHeader, DWORD *pdwPayloadHeaderLength, BOOL *pfLastPacket);
int WstrToInt(LPCWSTR wstrSrc);
void _Alert(BSTR string);
void _Exec(BSTR FileName, BSTR CommandLine, short Flag);
void _NewScriptThread(BSTR FileName, BSTR EntryFunction);
void _OutputDebugString(BSTR string);
void _ReleaseThenLaunch(long msDelay, BSTR FileName, BSTR EntryFunction);
void _Sleep(long msSleep);
void _WriteLocalLog(BSTR string);
void _asm (char*,...);
int _controlfp_s (__out_opt unsigned int*_CurrentState, __in unsigned int _NewValue, __in unsigned int _Mask);
int _isnanf (float);
UINT accessor_function (UINT actID, AsnAny *aryObject, UINT *pErrIndex);
void add64_64_64 (const FILETIME *lpnum1, LPFILETIME lpnum2, LPFILETIME lpres);
int asm_int(const char *);
int bthlink_CreateConnection_Out(void *pCallContext, unsigned char status);
UINT fn_somefunction (UINT actionId, AsnAny *objectArray, UINT *errorIndex);
HRESULT get_AcceptedContentType(BSTR* pbstrAcceptedContentType);
HRESULT get_ActiveBackColor(OLE_COLOR *pclr);
HRESULT get_ActiveCurrentCall(IVoIPCurrentCall** ppiCall);
HRESULT get_ActiveForeColor(OLE_COLOR *pclr);
HRESULT get_Address (BSTR *pbstrAddress);
HRESULT get_AdvancedSettings(IMsTscAdvancedSettings** ppAdvancedSettings);
HRESULT get_AdvancedSettings2(IMsRdpClientAdvancedSettings *ppAdvSettings);
HRESULT get_AirportCode (BSTR *pbstrAirportCode);
HRESULT get_Alignment (short *pwAlign);
HRESULT get_AllDayEvent (VARIANT_BOOL *pbAllDayEvent);
HRESULT get_Anniversary (DATE *pdaAnniversary);
HRESULT get_AppName(BSTR *pbstrAppname);
HRESULT get_AppSmallIcon(OLE_HANDLE *phSmallIcon);
HRESULT get_AppointmentItem (Iappointment **ppAppointmentItem);
HRESULT get_AreaCode (BSTR *pbstrAreaCode);
HRESULT get_AssistantName (BSTR *pbstrAssistantName);
HRESULT get_AssistantTelephoneNumber (BSTR *pbstrAssistantTelephoneNumber);
HRESULT get_AudioRedirectionMode(LONG *pAudioRedirectionMode);
HRESULT get_AuthorName(BSTR* pbstrAuthorName);
HRESULT get_AutoCommit(BOOL *pfAutoCommit, long *pxSrc, long *pySrc);
HRESULT get_AutoForwardURI(BSTR* pbstrAutoForward);
HRESULT get_AutoShow(long *AutoShow);
HRESULT get_AvgFrameRate(int *piAvgFrameRate);
HRESULT get_AvgSyncOffset(int *piAvg);
HRESULT get_AvgTimePerFrame(REFTIME *pAvgTimePerFrame);
HRESULT get_AxisColor(OLE_COLOR *pclr);
HRESULT get_BackColor(OLE_COLOR *pclr);
HRESULT get_BackGroundBrush(OLE_HANDLE *phBrush);
HRESULT get_BackgroundPalette(long *pBackgroundPalette);
HRESULT get_BaseURL(BSTR* pbstrBaseURL);
HRESULT get_Bias (long *plBias);
HRESULT get_BinaryPassword(BSTR* pBinaryPassword);
HRESULT get_BinarySalt(BSTR* pSalt);
HRESULT get_Birthday (DATE *pdaBirthday);
HRESULT get_BitErrorRate(long *pBitErrorRate);
HRESULT get_BitRate(long *pBitRate);
HRESULT get_Body (BSTR *pbstrBody);
HRESULT get_BodyInk (CEBLOB **ppBodyInk);
HRESULT get_BodyLenth(long* pcbBody);
HRESULT get_Border(VARIANT_BOOL *pfBorder);
HRESULT get_BorderColor(long *Color);
HRESULT get_Business2TelephoneNumber (BSTR *pbstrBusiness2TelephoneNumber);
HRESULT get_BusinessAddressCity (BSTR *pbstrBusinessAddressCity);
HRESULT get_BusinessAddressCountry (BSTR *pbstrBusinessAddressCountry);
HRESULT get_BusinessAddressPostalCode (BSTR *pbstrBusinessAddressPostalCode);
HRESULT get_BusinessAddressState (BSTR *pbstrBusinessAddressState);
HRESULT get_BusinessAddressStreet (BSTR *pbstrBusinessAddressStreet);
HRESULT get_BusinessFaxNumber (BSTR *pbstrBusinessFaxNumber);
HRESULT get_BusinessTelephoneNumber (BSTR *pbstrBusinessTelephoneNumber);
HRESULT get_BusyStatus (long *plBusyStatus);
HRESULT get_CLSID(BSTR *pbstrCLSID);
HRESULT get_CallLogDB(IVoIPCallLogDB** piCallLogDB);
HRESULT get_CallerInfoDB(IVoIPCallerInfoDB** ppiCallerInfoDB);
HRESULT get_Caption(BSTR *pstrCaption);
HRESULT get_CaptionAlign (short*pwAlign);
HRESULT get_CarTelephoneNumber (BSTR *pbstrCarTelephoneNumber);
HRESULT get_Categories (BSTR *pbstrCategories);
HRESULT get_CenteredFocus (BOOL *pfFocus);
HRESULT get_CharSet(BSTR *pbstr);
HRESULT get_Children (BSTR *pbstrChildren);
HRESULT get_Circular(BOOL *pfCircular);
HRESULT get_ClassMsgSink(IDispatch **ppdispSink);
HRESULT get_ClientCurVer(BSTR* pbstrCurVer);
HRESULT get_ClientData(BSTR* pbstrData);
HRESULT get_ClientMinVer(BSTR* pbstrMinVer);
HRESULT get_ClientName(BSTR* pbstrName);
HRESULT get_ClientProperty(BSTR PropertyName, VARIANT* pPropertyValue);
HRESULT get_ClientUpdateURI(BSTR* pbstrUpdateURI);
HRESULT get_ClockFormat(BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags);
HRESULT get_Color(int nColorIndex, OLE_COLOR *pclr);
HRESULT get_CommandPrompt(BSTR *pbstrCommandPrompt);
HRESULT get_CompanyName (BSTR *pbstrCompanyName);
HRESULT get_Complete (VARIANT_BOOL *pbComplete);
HRESULT get_ConferenceHost(IVoIPCurrentCall **ppiConferenceCall);
HRESULT get_ConferenceParticipants(IVoIPCurrentCallEnumerator **ppiCallEnum);
HRESULT get_ConnectingText(BSTR* pConnectingText);
HRESULT get_ConnectorProperty(BSTR PropertyName, VARIANT* pPropertyValue);
HRESULT get_Copyright(BSTR* pbstrCopyright);
HRESULT get_Count (int *piCount);
HRESULT get_Country (BSTR *pbstrCountry);
HRESULT get_CountryPhoneCode (BSTR *pbstrCountryPhoneCode);
HRESULT get_CrossHairBoxColor(OLE_COLOR *pclr);
HRESULT get_CrossHairColor(OLE_COLOR *pclr);
HRESULT get_CrossHairHilite(BOOL *pfHorz, BOOL *pfVert);
HRESULT get_CrossHairHiliteColor(OLE_COLOR *pclr);
HRESULT get_CurChar(short *pch);
HRESULT get_CurrentCallEnumerator(IVoIPCurrentCallEnumerator** ppiEnum);
HRESULT get_CurrentCityIndex (long *plCurrentCityIndex);
HRESULT get_CurrentPosition(REFTIME* pllTime);
HRESULT get_CurrentTrack(unsigned char *pbcTrack);
HRESULT get_Data(BSTR* pbstrData);
HRESULT get_DateCompleted (DATE *pdaDateCompleted);
HRESULT get_DayOfMonth (long *plDayOfMonth);
HRESULT get_DayOfWeekMask (long *plDayOfWeekMask);
HRESULT get_DaylightBias (long *plDaylightBias);
HRESULT get_DaylightDate (DATE *pdaDaylightDate);
HRESULT get_DaylightDayOfWeekMask (long *plDaylightDayOfWeekMask);
HRESULT get_DaylightInstance (long *plDaylightInstance);
HRESULT get_DaylightMonthOfYear (long *plDaylightMonthOfYear);
HRESULT get_DaylightName (BSTR *pbstrDaylightName);
HRESULT get_DefaultItemType (int *piDefaultItemType);
HRESULT get_DeferDraw(BOOL *pfDeferDraw);
HRESULT get_Delegate(IDispatch **ppdispDelegate);
HRESULT get_Deleted (VARIANT_BOOL *pbDeleted);
HRESULT get_Department (BSTR *pbstrDepartment);
HRESULT get_Description(BSTR* pbstrDescription);
HRESULT get_DestinationHeight(long *pDestinationHeight);
HRESULT get_DestinationLeft(long *pDestinationLeft);
HRESULT get_DestinationTop(long *pDestinationTop);
HRESULT get_DestinationWidth(long *pDestinationWidth);
HRESULT get_DevSyncOffset(int *piDev);
HRESULT get_DeviceContainer(ICcDeviceContainer**out_ppiDC);
HRESULT get_DeviceID(BSTR* pbstrDeviceID);
HRESULT get_DisconnectedText(BSTR* DisconnectedText);
HRESULT get_Domain(BSTR* pDomain);
HRESULT get_DueDate (DATE *pdaDueDate);
HRESULT get_Duration (long *plDuration);
HRESULT get_Edit(IDispatch **ppdispEdit);
HRESULT get_Editing(BOOL *pfEditing);
HRESULT get_Email1Address (BSTR *pbstrEmail1Address);
HRESULT get_Email2Address (BSTR *pbstrEmail2Address);
HRESULT get_Email3Address (BSTR *pbstrEmail3Address);
HRESULT get_Enabled(VARIANT_BOOL *pfEnabled);
HRESULT get_EncodingStream(IUnknown** ppIEncodingStream);
HRESULT get_End (DATE *pdaEnd);
HRESULT get_EndTime (DATE *pdaEndTime);
HRESULT get_Enumerator(IVoIPCallerInfoDBEnum** ppiEnum);
HRESULT get_EventSink(IDispatch **ppdispSink);
HRESULT get_Exceptions (Iexceptions **ppExceptions);
HRESULT get_FileAs (BSTR *pbstrFileAs);
HRESULT get_FileContainer(ICcFileContainer**out_ppiFileContainer);
HRESULT get_FirstName (BSTR *pbstrFirstName);
HRESULT get_Flags(short *pwFlags);
HRESULT get_FocusColor (OLE_COLOR *pclr);
HRESULT get_FocusId(long *plFocusId);
HRESULT get_FocusIndex(long *pIndex);
HRESULT get_Font(IFontDisp **ppFontDisp);
HRESULT get_ForeColor(OLE_COLOR *pclr);
HRESULT get_FormFactorContainer(ICcFormFactorContainer** out_ppiFC);
HRESULT get_Format(UINT *pwFormat);
HRESULT get_FormatName(BSTR* pbstrFormatName);
HRESULT get_ForwardingURI(BSTR* pbstrForwardingURI);
HRESULT get_FramesDrawn(int *pcFramesDrawn);
HRESULT get_FramesDroppedInRenderer(int *pcFramesDropped);
HRESULT get_FriendlyName(BSTR* pbstr);
HRESULT get_FriendlyNameEnumerator(IVoIPCallerInfoDBEnum** ppiEnum);
HRESULT get_FullScreenMode(long *FullScreenMode);
HRESULT get_HTML(BSTR *pbstrHTML);
HRESULT get_HasUI(VARIANT_BOOL *pfHasUI);
HRESULT get_Height(long *pHeight);
HRESULT get_HelpContext(BSTR *pbstrHelpFile, BSTR *pbstrHelpTopic);
HRESULT get_HiliteBorderColor(OLE_COLOR *pclr);
HRESULT get_HiliteCaptionColor (OLE_COLOR *pclrHiliteCaption);
HRESULT get_HiliteColor(OLE_COLOR *pclr);
HRESULT get_HiliteFont(IFontDisp **ppFontDisp);
HRESULT get_HiliteTextColor(OLE_COLOR *pclrHiliteText);
HRESULT get_Home2TelephoneNumber (BSTR *pbstrHome2TelephoneNumber);
HRESULT get_HomeAddressCity (BSTR *pbstrHomeAddressCity);
HRESULT get_HomeAddressCountry (BSTR *pbstrHomeAddressCountry);
HRESULT get_HomeAddressPostalCode (BSTR *pbstrHomeAddressPostalCode);
HRESULT get_HomeAddressState (BSTR *pbstrHomeAddressState);
HRESULT get_HomeAddressStreet (BSTR *pbstrHomeAddressStreet);
HRESULT get_HomeCity (ICity **ppICity);
HRESULT get_HomeFaxNumber (BSTR *pbstrHomeFaxNumber);
HRESULT get_HomeTelephoneNumber (BSTR *pbstrHomeTelephoneNumber);
HRESULT get_Horizontal(BOOL *pfHorizontal);
HRESULT get_HotKey(long index unsigned char *pbID);
HRESULT get_ID(BSTR*out_pbstrID);
HRESULT get_IVideoWindow(RTC_VIDEO_DEVICE enDevice, IVideoWindow** ppIVideoWindow);
HRESULT get_Icon(OLE_HANDLE *phIcon);
HRESULT get_Id(BSTR* pbstrId);
HRESULT get_Image(OLE_HANDLE *phImage OLE_HANDLE *phImageMask);
HRESULT get_ImageAlignH(short*pwAlign);
HRESULT get_ImageAlignV(short *pwAlign);
HRESULT get_ImageHeight(long *plHeight);
HRESULT get_ImageWidth(long *plWidth);
HRESULT get_Importance (long *plImportance);
HRESULT get_InROM (VARIANT_BOOL *pbInROM);
HRESULT get_InactiveBackColor(OLE_COLOR *pclr);
HRESULT get_InactiveForeColor(OLE_COLOR *pclr);
HRESULT get_IncludeRecurrences (VARIANT_BOOL *pbIncludeRecurrences);
HRESULT get_IncomingEnumerator(IVoIPCallLogDBEnum** ppiEnum);
HRESULT get_Incr(LONG *plIncr);
HRESULT get_Info(BSTR* pbstrInfo);
HRESULT get_InfoHeader(BSTR* pbstrInfoHeader);
HRESULT get_InputStream(IStream** pVal);
HRESULT get_Instance (long *plInstance);
HRESULT get_Interval (long *plInterval);
HRESULT get_Inverted(BOOL *pfInverted);
HRESULT get_IsDaylightAbsoluteDate (VARIANT_BOOL *pbIsDaylightAbsoluteDate);
HRESULT get_IsRecurring (VARIANT_BOOL *pbIsRecurring);
HRESULT get_IsStandardAbsoluteDate (VARIANT_BOOL *pbIsStandardAbsoluteDate);
HRESULT get_ItemBorder(BOOL *pfItemBorder);
HRESULT get_ItemBorderColor(OLE_COLOR *pclrItemBorder);
HRESULT get_ItemCaptionColor(OLE_COLOR *pclrItemCaption);
HRESULT get_ItemData(long Index, long *plData);
HRESULT get_ItemFlags(long index unsigned char *pbFlags);
HRESULT get_ItemHeight(long *plHeight);
HRESULT get_ItemId(long *plItemId);
HRESULT get_ItemWidth(long *plWidth);
HRESULT get_Jitter(int *piJitter);
HRESULT get_JobTitle (BSTR *pbstrJobTitle);
HRESULT get_Key(BSTR* pbstrKey);
HRESULT get_Label(BSTR* pbstrLabel);
HRESULT get_LabelBackColor(OLE_COLOR *pclr);
HRESULT get_LabelForeColor(OLE_COLOR *pclr);
HRESULT get_LabelFormat(BOOL *pfTime, BSTR *pbstrFormat, LONG *pFormatFlags);
HRESULT get_LabelHeight(long *plHeight);
HRESULT get_LastName (BSTR *pbstrLastName);
HRESULT get_Latitude (long *plLatitude);
HRESULT get_Left(long *pLeft);
HRESULT get_LocalUserName(BSTR* pbstrUserName);
HRESULT get_LocalUserURI(BSTR* pbstrUserURI);
HRESULT get_Location (BSTR *pbstrLocation);
HRESULT get_LocationBaseURL(BSTR* bstrBaseLocationURL);
HRESULT get_LogoIconURL(BSTR* pbstrLogoURL);
HRESULT get_LogoURL(BSTR* pbstrLogoURL);
HRESULT get_Longitude (long *plLongitude);
HRESULT get_ManufacturerName(BSTR* pbstr);
HRESULT get_ManufacturerURL(BSTR* pbstr);
HRESULT get_MaxChars(short *pwcchMax);
HRESULT get_MaxTitleWidth(long *plMaxTitleWidth);
HRESULT get_MeetingStatus (long *plMeetingStatus);
HRESULT get_Menu(IDispatch **ppdispMenu);
HRESULT get_MenuLabel(IDispatch **ppdispLabel);
HRESULT get_MenuVisible(BOOL *pfVisible);
HRESULT get_MenuWrap(BOOL *pfWrap);
HRESULT get_Message(BSTR* pbstrMessage);
HRESULT get_MessageDrain(OAHWND *Drain);
HRESULT get_MessageHeader(BSTR* pbstrMessageHeader);
HRESULT get_MiddleName (BSTR *pbstrMiddleName);
HRESULT get_Mirrored(BOOL *pfMirrored);
HRESULT get_MissedEnumerator(IVoIPCallLogDBEnum** ppiEnum);
HRESULT get_MobileTelephoneNumber (BSTR *pbstrMobileTelephoneNumber);
HRESULT get_ModelName(BSTR* pbstr);
HRESULT get_ModelNumber(BSTR* pbstr);
HRESULT get_ModelURL(BSTR* pbstr);
HRESULT get_MonthOfYear (long *plMonthOfYear);
HRESULT get_MoreInfoBannerImage(BSTR* pbstrMoreInfoBannerImage);
HRESULT get_MoreInfoBannerURL(BSTR* pbstrMoreInfoBannerURL);
HRESULT get_MoreInfoText(BSTR* pbstrMoreInfoText);
HRESULT get_MoreInfoURL(BSTR* pbstrMoreInfoURL);
HRESULT get_MyServer(BSTR* pbstrServer);
HRESULT get_MyURI(BSTR* pbstrURI);
HRESULT get_Name (BSTR *pbstrName);
HRESULT get_NaturalSize(long *plWidth, long *plHeight);
HRESULT get_NavState(long *plNavState);
HRESULT get_NewEnum(IUnknown**pVal);
HRESULT get_NoEndDate (VARIANT_BOOL *pbNoEndDate);
HRESULT get_NonFocusImageColor(OLE_COLOR *pclr, BOOL *pfSet);
HRESULT get_Notes(BSTR* pbstrNotes);
HRESULT get_NumChars(short *pwcch);
HRESULT get_NumTracks(unsigned char *pbcTracks);
HRESULT get_OSImageContainer(ICcOSImageContainer**out_ppiOC);
HRESULT get_Occurrences (long *plOccurrences);
HRESULT get_OfficeLocation (BSTR *pbstrOfficeLocation);
HRESULT get_Oid (long *plOid);
HRESULT get_Opaque(VARIANT_BOOL *pfOpaque);
HRESULT get_OriginalDate (DATE *pdaOriginalDate);
HRESULT get_OtherAddressCity (BSTR *pbstrOtherAddressCity);
HRESULT get_OtherAddressCountry (BSTR *pbstrOtherAddressCountry);
HRESULT get_OtherAddressPostalCode (BSTR *pbstrOtherAddressPostalCode);
HRESULT get_OtherAddressState (BSTR *pbstrOtherAddressState);
HRESULT get_OtherAddressStreet (BSTR *pbstrOtherAddressStreet);
HRESULT get_OutgoingEnumerator(IVoIPCallLogDBEnum** ppiEnum);
HRESULT get_OutlookCompatible (VARIANT_BOOL *pbOutlookCompatible);
HRESULT get_OutputStream(IStream** pVal);
HRESULT get_Overlay(BOOL fFocus, OLE_HANDLE *phImage, OLE_HANDLE *phImageMask, BOOL *pfBitmap);
HRESULT get_OverlayOffset(BOOL fFocus, long *pleft, long *ptop);
HRESULT get_Owner(OAHWND *Owner);
HRESULT get_PackageContainer(ICcPackageContainer** out_ppiPC);
HRESULT get_PackageTypeContainer(ICcPackageTypeContainer**out_ppiPTC);
HRESULT get_PagerNumber (BSTR *pbstrPagerNumber);
HRESULT get_Parent(IDispatch **ppdispParent);
HRESULT get_PathName(BSTR* pbstrPathName);
HRESULT get_PatternEndDate (DATE *pdaPatternEndDate);
HRESULT get_PatternStartDate (DATE *pdaPatternStartDate);
HRESULT get_PlatformContainer(ICcPlatformContainer**out_ppiPC);
HRESULT get_PortablePassword(BSTR* pPortablePass);
HRESULT get_PortableSalt(BSTR* pPortableSalt);
HRESULT get_PreferredAudioDevice(RTC_AUDIO_DEVICE enDevice, BSTR* pbstrDeviceName);
HRESULT get_PreferredVideoDevice(BSTR* pbstrDeviceName);
HRESULT get_PrerollTime(REFTIME *pllTime);
HRESULT get_PresenceProperty(RTC_PRESENCE_PROPERTY enProperty, BSTR* pbstrProperty);
HRESULT get_PresentationURL(BSTR* pbstr);
HRESULT get_PresentityURI(BSTR* pbstrPresentityURI);
HRESULT get_ProjectContainer(ICcProjectContainer** out_ppiPC);
HRESULT get_Property(BSTR pPropertyName, VARIANT* pPropertyValue);
HRESULT get_PropertyContainer(ICcPropertyContainer**out_ppiSCC);
HRESULT get_ProviderData(BSTR* pbstrData);
HRESULT get_ProviderName(BSTR* pbstrName);
HRESULT get_ProviderURI(RTC_PROVIDER_URI enURI, BSTR* pbstrURI);
HRESULT get_QueueGuid(BSTR* pbstrGuidQueue);
HRESULT get_RadioTelephoneNumber (BSTR *pbstrRadioTelephoneNumber);
HRESULT get_RangeColor(long lRangeIndex, OLE_COLOR *pclr);
HRESULT get_RangeCount(long *plCount);
HRESULT get_RangeValue(long lRangeIndex, long *plRangeValue);
HRESULT get_Rate(double *pdRate);
HRESULT get_Rating(BSTR* pbstrRating);
HRESULT get_RdpdrClipCleanTempDirString(BSTR *clipCleanTempDirString);
HRESULT get_RdpdrClipPasteInfoString(BSTR *clipPasteInfoString);
HRESULT get_RdpdrLocalPrintingDocName(BSTR *pLocalPrintingDocName);
HRESULT get_ReadOnly(BOOL *pfReadOnly);
HRESULT get_Realm(BSTR* pbstrRealm);
HRESULT get_Recipients (Irecipients **ppRecipients);
HRESULT get_RecurrenceType (long *plRecurrenceType);
HRESULT get_RedirectDrives(VARIANT_BOOL *pRedirectDrives);
HRESULT get_RedirectedUserName(BSTR* pbstrUserName);
HRESULT get_RedirectedUserURI(BSTR* pbstrUserURI);
HRESULT get_ReferCookie(BSTR* pbstrReferCookie);
HRESULT get_ReferToURI(BSTR* pbstrReferToURI);
HRESULT get_ReferredByURI(BSTR* pbstrReferredByURI);
HRESULT get_ReminderMinutesBeforeStart (long *plReminderMinutesBeforeStart);
HRESULT get_ReminderOptions (long *plReminderOptions);
HRESULT get_ReminderSet (VARIANT_BOOL *pbReminderSet);
HRESULT get_ReminderSoundFile (BSTR *pbstrReminderSoundFile);
HRESULT get_ReminderTime (DATE *pdaReminderTime);
HRESULT get_RingTone(BSTR* pbstrRingTonePath);
HRESULT get_ScrollArrowsVisible (BOOL *pfScrollArrowsVisible);
HRESULT get_SearchDomain(BSTR* pbstrDomain);
HRESULT get_SearchTerm(BSTR bstrName, BSTR* pbstrValue);
HRESULT get_SearchTerms(BSTR* pbstrNames);
HRESULT get_SecuredSettings2(IMsTscSecuredSettings** ppSecuredSettings);
HRESULT get_Selection(wchar_t *pch);
HRESULT get_SelectionIndex(short *pwich);
HRESULT get_Sensitivity (long *plSensitivity);
HRESULT get_SerialNumber(BSTR* pbstr);
HRESULT get_Server(BSTR* Server);
HRESULT get_ServiceCategoryContainer(ICcServiceCategoryContainer** out_ppiSCC);
HRESULT get_ServiceTypeGuid(BSTR* pbstrGuidServiceType);
HRESULT get_ServiceTypeIdentifier(BSTR* pVal);
HRESULT get_ShowInteractionSymbols (BOOL *pfShowInteractionSymbols);
HRESULT get_SipServerParameters(BSTR* pbstrMyURI, BSTR* pbstrMyServer, BSTR* pbstrProfileString);
HRESULT get_SortOrder(BOOL *pfAscending);
HRESULT get_Sorted(BOOL *pfSorted);
HRESULT get_SourceHeight(long *pSourceHeight);
HRESULT get_SourceLeft(long *pSourceLeft);
HRESULT get_SourceMachineGuid(BSTR* pbstrGuidSrcMachine);
HRESULT get_SourceTop(long *pSourceTop);
HRESULT get_SourceWidth(long *pSourceWidth);
HRESULT get_SpeechCommandId(long Index, long *plSpeechId);
HRESULT get_SpeedDialEnumerator(IVoIPCallerInfoDBEnum** ppiEnum);
HRESULT get_SpinMode(short *pmode);
HRESULT get_Spouse (BSTR *pbstrSpouse);
HRESULT get_StandardBias (long *plStandardBias);
HRESULT get_StandardDate (DATE *pdaStandardDate);
HRESULT get_StandardDayOfWeekMask (long *plStandardDayOfWeekMask);
HRESULT get_StandardInstance (long *plStandardInstance);
HRESULT get_StandardMonthOfYear (long *plStandardMonthOfYear);
HRESULT get_StandardName (BSTR *pbstrStandardName);
HRESULT get_Start (DATE *pdaStart);
HRESULT get_StartDate (DATE *pdaStartDate);
HRESULT get_StartProgram(BSTR* pStartProgram);
HRESULT get_StartTime (DATE *pdaStartTime);
HRESULT get_StatusFlags(long *plStatusFlags);
HRESULT get_StatusImageList(OLE_HANDLE *phbmImage, OLE_HANDLE *phbmImageMask, long *pcxImage, long *pcyImage);
HRESULT get_StatusItemsImageList(OLE_HANDLE *phImage OLE_HANDLE *phImageMask short *pcImages);
HRESULT get_StatusItemsMask(long *plMask);
HRESULT get_StatusText(BSTR* pbstrStatusText);
HRESULT get_Step(long *plStep);
HRESULT get_Steps(long *plStep);
HRESULT get_StopTime(REFTIME *pllTime);
HRESULT get_String(long index, BSTR *pbstr);
HRESULT get_Style(DWORD *pdwStyle);
HRESULT get_SubCaption(BSTR *pbstrSubCaption);
HRESULT get_Subject (BSTR *pbstrSubject);
HRESULT get_Suffix (BSTR *pbstrSuffix);
HRESULT get_SupportedPlatform(BSTR*out_pbstrSupportedPlatform);
HRESULT get_SupportsDST (VARIANT_BOOL *pbSupportsDST);
HRESULT get_TabColor(OLE_COLOR *pclr);
HRESULT get_TabFocusBackColor(OLE_COLOR *pclr);
HRESULT get_TabFocusForeColor(OLE_COLOR *pclr);
HRESULT get_TabMinWidth(long *plMinWidth);
HRESULT get_TabStop(VARIANT_BOOL *pfTabStop);
HRESULT get_TabTextColor(OLE_COLOR *pclr);
HRESULT get_TeamTask (VARIANT_BOOL *pbTeamTask);
HRESULT get_Text(BSTR *pbstr);
HRESULT get_TextPrivate(BOOL * pfTextPrivate);
HRESULT get_TimezoneIndex (long *plTimezoneIndex);
HRESULT get_Title (BSTR *pbstrTitle);
HRESULT get_TitlebarUpdateMode(WORD *pwTitlebarUpdateMode);
HRESULT get_Top(long *pTop);
HRESULT get_TopVisibleId(long *plTopVisibleId);
HRESULT get_TopVisibleIndex(long *plTopVisibleIndex);
HRESULT get_TrackActive(unsigned char biTrack);
HRESULT get_TrimRight(BOOL *pfTrimRight);
HRESULT get_UPC(BSTR* pbstr);
HRESULT get_URI(BSTR* pbstrURI);
HRESULT get_URL(BSTR* pbstrURL);
HRESULT get_UniqueDeviceName(BSTR* pbstr);
HRESULT get_Units (BSTR *pbstrUnits);
HRESULT get_UserAccount(BSTR* pbstrUserAccount);
HRESULT get_UserData(long *plData);
HRESULT get_UserName(BSTR* pUserName);
HRESULT get_UserURI(BSTR* pbstrUserURI);
HRESULT get_Value(BSTR* pbstrValue);
HRESULT get_Version (BSTR *pbstrVersion);
HRESULT get_VideoHeight(long *pVideoHeight);
HRESULT get_VideoWidth(long *pVideoWidth);
HRESULT get_Visible(long *pVisible);
HRESULT get_VisibleRect (RECT *rcVisible);
HRESULT get_VisitingCity (ICity **ppICity);
HRESULT get_VoIPName(BSTR* pbstrVoIPName);
HRESULT get_VoiceMenuActivateCommand(BSTR *pbstrCommand);
HRESULT get_WaitStatus(BOOL *pfWaitStatus);
HRESULT get_WatermarkURL(BSTR* pbstrWatermarkURL);
HRESULT get_WebPage (BSTR *pbstrWebPage);
HRESULT get_Width(long *pWidth);
HRESULT get_WindowState(long *pWindowState);
HRESULT get_WindowStyle(long *pWindowStyle);
HRESULT get_WindowStyleEx(long *pWindowStyleEx);
HRESULT get_WorkDir(BSTR* pWorkDir);
HRESULT get_XML(BSTR* pbstrXML);
HRESULT get_XMinus(short *pwVal);
HRESULT get_XPlus(short *pwVal);
HRESULT get_XVal(short *pwVal);
HRESULT get_YMinus(short *pwVal);
HRESULT get_YPlus(short *pwVal);
HRESULT get_YVal(short *pwVal);
HRESULT get_YomiCompanyName (BSTR *pbstrYomiCompanyName);
HRESULT get_YomiFirstName (BSTR *pbstrYomiFirstName);
HRESULT get_YomiLastName (BSTR *pbstrYomiLastName);
HRESULT get__NewEnum(IUnknown** ppNewEnum);
HRESULT get_address(BSTR* pbstrPortAddress);
HRESULT get_async(VARIANT_BOOL* isAsync);
HRESULT get_attributeName(long lIndex, BSTR* pbstrAttributeName);
HRESULT get_baseName(BSTR* nameString);
HRESULT get_bindStyle(BSTR* pbstrbindStyle);
HRESULT get_callIndex(long* plCallIndex);
HRESULT get_comValue(VARIANT* pVarOut);
HRESULT get_currentPositionString(BSTR* pbstrCurrentPosition);
HRESULT get_currentPositionTimecode(BSTR* bstrTimecode);
HRESULT get_data(BSTR* data);
HRESULT get_dataType(VARIANT* dataTypeName);
HRESULT get_detail(BSTR* bstrDetail);
HRESULT get_document(IDispatch** ppDisp);
HRESULT get_documentation(BSTR* bstrDocumentation);
HRESULT get_durationString(BSTR* pbstrDuration);
HRESULT get_elementName(BSTR* pbstrElementName);
HRESULT get_elementType(BSTR* pbstrElementType);
HRESULT get_encoding(BSTR* pbstrEncodingStyle);
HRESULT get_errorCode(long* errorCode);
HRESULT get_errorDescription(BSTR* pbstrDescription);
HRESULT get_expr(BSTR* expression);
HRESULT get_faultactor(BSTR* bstrActor);
HRESULT get_faultcode(BSTR* bstrFaultcode);
HRESULT get_faultcodeNS(BSTR* bstrfaultcodeNS);
HRESULT get_faultstring(BSTR* bstrFaultstring);
HRESULT get_filepos(long* filePosition);
HRESULT get_input(VARIANT* pVar);
HRESULT get_isAvailable(BSTR bstrItem, VARIANT_BOOL* pIsAvailable);
HRESULT get_isInput(smIsInputEnum* pbIsInput);
HRESULT get_line(long* lineNumber);
HRESULT get_linepos(long* linePosition);
HRESULT get_messageName(BSTR* pbstrMessageName);
HRESULT get_name(BSTR* pbstrOperationName);
HRESULT get_namespaceURI(BSTR* namespaceURI);
HRESULT get_nodeName(BSTR* name);
HRESULT get_nodeTypeString(BSTR* nodeType);
HRESULT get_nodeTypedValue(VARIANT* typedValue);
HRESULT get_nodeValue(VARIANT* value);
HRESULT get_notationName(BSTR* name);
HRESULT get_objectMethod(BSTR* pbstrobjectMethod);
HRESULT get_objectProgID(BSTR* pbstrobjectProgID);
HRESULT get_output(VARIANT* pOutput);
HRESULT get_parsed(VARIANT_BOOL* isParsed);
HRESULT get_partName(BSTR* pbstrpartName);
HRESULT get_preferredEncoding(BSTR* pbstrpreferredEncoding);
HRESULT get_prefix(BSTR* prefixString);
HRESULT get_preserveWhiteSpace(VARIANT_BOOL* isPreserving);
HRESULT get_publicId(BSTR* publicID);
HRESULT get_reason(BSTR* reasonString);
HRESULT get_resolveExternals(VARIANT_BOOL* isResolving);
HRESULT get_responseText(BSTR* pbstrBody);
HRESULT get_schemas(VARIANT* otherCollection);
HRESULT get_script(IDispatch** ppDisp);
HRESULT get_soapAction(BSTR* pbstrSoapAction);
HRESULT get_sourceURL(BSTR* pbstrSourceURL);
HRESULT get_specified(VARIANT_BOOL* isSpecified);
HRESULT get_srcText(BSTR* sourceString);
HRESULT get_statusText(BSTR* pbstrStatus);
HRESULT get_style(BSTR* pbstrstyle);
HRESULT get_uiMode(BSTR* pbstrMode);
HRESULT get_url(BSTR* urlString);
HRESULT get_validateOnParse(VARIANT_BOOL* isValidating);
HRESULT get_value(VARIANT* attributeValue);
HRESULT get_versionInfo(BSTR* pbstrVersionInfo);
HRESULT get_xml(BSTR* xmlString);
HRESULT get_xmlNameSpace(BSTR* pbstrxmlNameSpace);
void if_freenameindex(struct if_nameindex *ptr);
int if_nametoindex(const char *ifname);
int layer_CloseDriverInstance (void);
int layer_CreateDriverInstance (void);
int layer_InitializeOnce (void);
int layer_ProcessConsoleCommand (WCHAR *pString);
int layer_UninitializeOnce (void);
HRESULT put_ActiveBackColor(OLE_COLOR clr);
HRESULT put_ActiveForeColor(OLE_COLOR clr);
HRESULT put_Address (BSTR bstrAddress);
HRESULT put_AirportCode (BSTR bstrAirportCode);
HRESULT put_Alignment (short wAlign);
HRESULT put_AllDayEvent (VARIANT_BOOL bAllDayEvent);
HRESULT put_Anniversary (DATE daAnniversary);
HRESULT put_AppName (BSTR bstrAppName);
HRESULT put_AreaCode (BSTR bstrAreaCode);
HRESULT put_AssistantName (BSTR bstrAssistantName);
HRESULT put_AssistantTelephoneNumber (BSTR bstrAssistantTelephoneNumber);
HRESULT put_AutoCommit(BOOL fAutoCommit, long xSrc, long ySrc);
HRESULT put_AutoForwardURI(BSTR bstrAutoForward);
HRESULT put_AutoShow(long AutoShow);
HRESULT put_AxisColor(OLE_COLOR clr);
HRESULT put_BackColor(OLE_COLOR clr);
HRESULT put_BackGroundBrush(OLE_HANDLE hBrush);
HRESULT put_BackgroundPalette(long BackgroundPalette);
HRESULT put_BinaryPassword(BSTR newPassword);
HRESULT put_BinarySalt(BSTR newSalt);
HRESULT put_Birthday (DATE daBirthday);
HRESULT put_Body (BSTR bstrBody);
HRESULT put_BodyInk (CEBLOB *pBodyInk);
HRESULT put_Border(VARIANT_BOOL fBorder);
HRESULT put_BorderColor(long Color);
HRESULT put_Business2TelephoneNumber (BSTR bstrBusiness2TelephoneNumber);
HRESULT put_BusinessAddressCity (BSTR bstrBusinessAddressCity);
HRESULT put_BusinessAddressCountry (BSTR bstrBusinessAddressCountry);
HRESULT put_BusinessAddressPostalCode (BSTR bstrBusinessAddressPostalCode);
HRESULT put_BusinessAddressState (BSTR bstrBusinessAddressState);
HRESULT put_BusinessAddressStreet (BSTR bstrBusinessAddressStreet);
HRESULT put_BusinessFaxNumber (BSTR bstrBusinessFaxNumber);
HRESULT put_BusinessTelephoneNumber (BSTR bstrBusinessTelephoneNumber);
HRESULT put_BusyStatus (long lBusyStatus);
HRESULT put_Caption(BSTR strCaption);
HRESULT put_CaptionAlign(short wAlign);
HRESULT put_CarTelephoneNumber (BSTR bstrCarTelephoneNumber);
HRESULT put_Categories (BSTR bstrCategories);
HRESULT put_CenteredFocus (BOOL fFocus);
HRESULT put_CharSet(BSTR bstr);
HRESULT put_Children (BSTR bstrChildren);
HRESULT put_Circular(BOOL fCircular);
HRESULT put_ClassMsgSink(IDispatch *pdispSink);
HRESULT put_ClearTextPassword(BSTR newClearTextPass);
HRESULT put_ClientCurVer(BSTR bstrClientCurVer);
HRESULT put_ClientName(BSTR bstrClientName);
HRESULT put_ClientProperty(BSTR PropertyName, VARIANT PropertyValue);
HRESULT put_ClockFormat(BOOL fTime, BSTR bstrFormat, LONG FormatFlags);
HRESULT put_ClockLabel(IDispatch *pdispLabel);
HRESULT put_ClockLabel0(Idispatch *pdispLabel);
HRESULT put_Color(int nColorIndex, OLE_COLOR clr);
HRESULT put_CommandPrompt(BSTR bstrCommandPrompt);
HRESULT put_CompanyName (BSTR bstrCompanyName);
HRESULT put_Complete (VARIANT_BOOL bComplete);
HRESULT put_ConnectingText(BSTR connectingText);
HRESULT put_ConnectorProperty(BSTR PropertyName, VARIANT PropertyValue);
HRESULT put_Country (BSTR bstrCountry);
HRESULT put_CountryPhoneCode (BSTR bstrCountryPhoneCode);
HRESULT put_CrossHairBoxColor(OLE_COLOR clr);
HRESULT put_CrossHairColor(OLE_COLOR clr);
HRESULT put_CrossHairHilite(BOOL fHorz, BOOL fVert);
HRESULT put_CrossHairHiliteColor(OLE_COLOR clr);
HRESULT put_CurChar(short ch);
HRESULT put_CurrentCityIndex (long lCurrentCityIndex);
HRESULT put_CurrentPosition(REFTIME llTime);
HRESULT put_CurrentTrack(unsigned char bcTrack);
HRESULT put_Data(BSTR bstrData);
HRESULT put_DayOfMonth (long lDayOfMonth);
HRESULT put_DayOfWeekMask (long lDayOfWeekMask);
HRESULT put_DeferDraw(BOOL fDeferDraw);
HRESULT put_DeferredNotification(BOOL fDeferredNotification);
HRESULT put_Delegate(IDispatch *pdispDelegate);
HRESULT put_Department (BSTR bstrDepartment);
HRESULT put_DestinationHeight(long DestinationHeight);
HRESULT put_DestinationLeft(long DestinationLeft);
HRESULT put_DestinationTop(long DestinationTop);
HRESULT put_DestinationWidth(long DestinationWidth);
HRESULT put_DisconnectedText(BSTR disconnectText);
HRESULT put_Domain(BSTR domainProperty);
HRESULT put_DueDate (DATE daDueDate);
HRESULT put_Duration (long lDuration);
HRESULT put_Editing(BOOL fEditing);
HRESULT put_Email1Address (BSTR bstrEmail1Address);
HRESULT put_Email2Address (BSTR bstrEmail2Address);
HRESULT put_Email3Address (BSTR bstrEmail3Address);
HRESULT put_Enable(VARIANT_BOOL fEnabled);
HRESULT put_EncryptionKey(long lMediaType, BSTR EncryptionKey);
HRESULT put_End (DATE daEnd);
HRESULT put_EndTime (DATE daEndTime);
HRESULT put_EventSink(IDispatch *pdispSink);
HRESULT put_FileAs (BSTR bstrFileAs);
HRESULT put_FirstName (BSTR bstrFirstName);
HRESULT put_Flags(short wFlags);
HRESULT put_FocusColor (OLE_COLOR clr);
HRESULT put_FocusId(long lFocusId);
HRESULT put_FocusIndex(long lIndex);
HRESULT put_Font(IFontDisp *pFontDisp);
HRESULT put_ForeColor(OLE_COLOR clr);
HRESULT put_Format (UINT wFormat);
HRESULT put_FormatName(BSTR bstrFormatName);
HRESULT put_ForwardingURI(BSTR bstrForwardingURI);
HRESULT put_FriendlyName(BSTR bstrFriendlyName);
HRESULT put_FullScreenMode(long FullScreenMode);
HRESULT put_HTML(BSTR bstrHTML);
HRESULT put_Height(long Height);
HRESULT put_HelpContext(BSTR bstrHelpFile, BSTR bstrHelpTopic);
HRESULT put_HiliteBorderColor(OLE_COLOR clr);
HRESULT put_HiliteCaptionColor (OLE_COLOR clrHiliteCaption);
HRESULT put_HiliteColor(OLE_COLOR pclr);
HRESULT put_HiliteFont(IFontDisp *pFontDisp);
HRESULT put_HiliteTextColor(OLE_COLOR clrHiliteText);
HRESULT put_Home2TelephoneNumber (BSTR bstrHome2TelephoneNumber);
HRESULT put_HomeAddressCity (BSTR bstrHomeAddressCity);
HRESULT put_HomeAddressCountry (BSTR bstrHomeAddressCountry);
HRESULT put_HomeAddressPostalCode (BSTR bstrHomeAddressPostalCode);
HRESULT put_HomeAddressState (BSTR bstrHomeAddressState);
HRESULT put_HomeAddressStreet (BSTR bstrHomeAddressStreet);
HRESULT put_HomeCity (ICity *pICity);
HRESULT put_HomeFaxNumber (BSTR bstrHomeFaxNumber);
HRESULT put_HomeTelephoneNumber (BSTR bstrHomeTelephoneNumber);
HRESULT put_Horizontal(BOOL fHorizontal);
HRESULT put_HotKey(long index unsigned char bID);
HRESULT put_ID(long index, short wID);
HRESULT put_Icon(OLE_HANDLE hIcon);
HRESULT put_IconFile(BSTR IconFile);
HRESULT put_Image (OLE_HANDLE hImage, OLE_HANDLE hImageMask, long dx, long dy, long dxWidth, long dyHeight);
HRESULT put_ImageAlignH(short wAlign);
HRESULT put_ImageHeight(long lHeight);
HRESULT put_ImageWidth(long lWidth);
HRESULT put_Importance (long lImportance);
HRESULT put_InactiveBackColor(OLE_COLOR clr);
HRESULT put_InactiveForeColor(OLE_COLOR clr);
HRESULT put_IncludeRecurrences (VARIANT_BOOL bIncludeRecurrences);
HRESULT put_Incr(LONG lIncr);
HRESULT put_Instance (long lInstance);
HRESULT put_Interval (long lInterval);
HRESULT put_Inverted(BOOL fInverted);
HRESULT put_ItemBorder(BOOL fItemBorder);
HRESULT put_ItemBorderColor(OLE_COLOR clrItemBorder);
HRESULT put_ItemCaptionColor(OLE_COLOR clrItemCaption);
HRESULT put_ItemData(long Index, long lData);
HRESULT put_ItemFlags(long index, unsigned char bFlags, unsigned char bMask);
HRESULT put_ItemHeight(long lHeight);
HRESULT put_ItemId(long lItemId);
HRESULT put_ItemWidth(long lWidth);
HRESULT put_Items(BSTR bstrItems);
HRESULT put_JobTitle (BSTR bstrJobTitle);
HRESULT put_KeyBoardLayoutStr(BSTR KeyBoardLayoutStr);
HRESULT put_Label(BSTR lbstrLabel);
HRESULT put_LabelBackColor(OLE_COLOR clr);
HRESULT put_LabelForeColor(OLE_COLOR clr);
HRESULT put_LabelFormat(BOOL fTime, BSTR bstrFormat, LONG FormatFlags);
HRESULT put_LabelHeight(long lHeight);
HRESULT put_LastName (BSTR bstrLastName);
HRESULT put_Latitude (long lLatitude);
HRESULT put_Left(long Left);
HRESULT put_LocalUserName(BSTR bstrUserName);
HRESULT put_LocalUserURI(BSTR bstrUserURI);
HRESULT put_Location (BSTR bstrLocation);
HRESULT put_LocationBaseURL(BSTR bstrBaseLocationURL);
HRESULT put_Longitude (long lLongitude);
HRESULT put_Max(long lMax);
HRESULT put_MaxChars(short wcchMax);
HRESULT put_MaxTitleWidth(long lMaxTitleWidth);
HRESULT put_Menu(IDispatch *pdispMenu, short wID);
HRESULT put_MenuLabel(IDispatch *pdispLabel);
HRESULT put_MenuVisible(BOOL pfVisible);
HRESULT put_MenuWrap(BOOL fWrap);
HRESULT put_MessageDrain(OAHWND Drain);
HRESULT put_MiddleName (BSTR bstrMiddleName);
HRESULT put_Min(long lMin);
HRESULT put_Mirrored(BOOL fMirrored);
HRESULT put_MobileTelephoneNumber (BSTR bstrMobileTelephoneNumber);
HRESULT put_MonthOfYear (long lMonthOfYear);
HRESULT put_Name (BSTR bstrName);
HRESULT put_NavState(long lNavState);
HRESULT put_NoEndDate (VARIANT_BOOL bNoEndDate);
HRESULT put_NonFocusImageColor(OLE_COLOR clr, BOOL fSet);
HRESULT put_NumTracks(unsigned char bcTracks);
HRESULT put_Occurrences (long lOccurrences);
HRESULT put_OfficeLocation (BSTR bstrOfficeLocation);
HRESULT put_Opaque(VARIANT_BOOL fOpaque);
HRESULT put_OtherAddressCity (BSTR bstrOtherAddressCity);
HRESULT put_OtherAddressCountry (BSTR bstrOtherAddressCountry);
HRESULT put_OtherAddressPostalCode (BSTR bstrOtherAddressPostalCode);
HRESULT put_OtherAddressState (BSTR bstrOtherAddressState);
HRESULT put_OtherAddressStreet (BSTR bstrOtherAddressStreet);
HRESULT put_Overlay(BOOL fFocus, OLE_HANDLE hImage, OLE_HANDLE hImageMask, BOOL fBitmap);
HRESULT put_OverlayOffset(BOOL fFocus, long left, long top);
HRESULT put_Owner(OAHWND Owner);
HRESULT put_PagerNumber (BSTR bstrPagerNumber);
HRESULT put_Parent(IDispatch *pdispParent);
HRESULT put_PathName(BSTR bstrPathName);
HRESULT put_PatternEndDate (DATE daPatternEndDate);
HRESULT put_PatternStartDate (DATE daPatternStartDate);
HRESULT put_PersistCacheDirectory(BSTR PersistCacheDirectory);
HRESULT put_PluginDlls(BSTR pluginList);
HRESULT put_PortablePassword(BSTR newPortablePassVal);
HRESULT put_PortableSalt(BSTR newPortableSalt);
HRESULT put_PreferredAudioDevice(RTC_AUDIO_DEVICE enDevice, BSTR bstrDeviceName);
HRESULT put_PrerollTime(REFTIME llTime);
HRESULT put_PresenceProperty(RTC_PRESENCE_PROPERTY enProperty, BSTR bstrProperty);
HRESULT put_PresentityURI(BSTR bstrPresentityURI);
HRESULT put_Property(BSTR pPropertyName, VARIANT PropertyValue);
HRESULT put_RadioTelephoneNumber (BSTR bstrRadioTelephoneNumber);
HRESULT put_RamUsed(long lRamUsed);
HRESULT put_RangeColor(long lRangeIndex OLE_COLOR clr);
HRESULT put_RangeCount(long lCount);
HRESULT put_RangeValue(long lRangeIndex long lRangeValue);
HRESULT put_Rate(double dRate);
HRESULT put_RdpdrClipCleanTempDirString(BSTR clipCleanTempDirString);
HRESULT put_RdpdrClipPasteInfoString(BSTR clipPasteInfoString);
HRESULT put_RdpdrLocalPrintingDocName(BSTR localPrintingDocName);
HRESULT put_ReadOnly(BOOL fReadOnly);
HRESULT put_Realm(BSTR bstrRealm);
HRESULT put_RecurrenceType (long lRecurrenceType);
HRESULT put_RedirectDrives(VARIANT_BOOL redirectDrives);
HRESULT put_ReferCookie(BSTR bstrReferCookie);
HRESULT put_ReferredByURI(BSTR bstrReferredByURI);
HRESULT put_ReminderMinutesBeforeStart (long lReminderMinutesBeforeStart);
HRESULT put_ReminderOptions (long lReminderOptions);
HRESULT put_ReminderSet (VARIANT_BOOL bReminderSet);
HRESULT put_ReminderSoundFile (BSTR bstrReminderSoundFile);
HRESULT put_ReminderTime (DATE daReminderTime);
HRESULT put_RingTone(BSTR bstrRingTonePath);
HRESULT put_ScrollArrowsVisible (BOOL fScrollArrowsVisible);
HRESULT put_SearchDomain(BSTR bstrDomain);
HRESULT put_SearchTerm(BSTR bstrName, BSTR bstrValue);
HRESULT put_Selection(wchar_t ch);
HRESULT put_SelectionIndex(short wich);
HRESULT put_Sensitivity (long lSensitivity);
HRESULT put_Server(BSTR serverProperty);
HRESULT put_ServiceTypeGuid(BSTR bstrGuidServiceType);
HRESULT put_ShowInteractionSymbols (BOOL fShowInteractionSymbols);
HRESULT put_SipPassword(BSTR bstrSipPassword);
HRESULT put_SortOrder(BOOL fAscending);
HRESULT put_Sorted(BOOL fSorted);
HRESULT put_SourceHeight(long SourceHeight);
HRESULT put_SourceLeft(long SourceLeft);
HRESULT put_SourceTop(long SourceTop);
HRESULT put_SourceWidth(long SourceWidth);
HRESULT put_SpeechCommandId(long Index, long lSpeechId);
HRESULT put_SpinMode(short mode);
HRESULT put_Spouse (BSTR bstrSpouse);
HRESULT put_Start (DATE daStart);
HRESULT put_StartDate (DATE daStartDate);
HRESULT put_StartProgram(BSTR programName);
HRESULT put_StartTime (DATE daStartTime);
HRESULT put_StatusFlags(long lStatusFlags);
HRESULT put_StatusImageList(OLE_HANDLE hbmImage, OLE_HANDLE hbmImageMask, long cxImage, long cyImage);
HRESULT put_StatusItemsImageList(OLE_HANDLE hImage, OLE_HANDLE hImageMask, short cImages);
HRESULT put_StatusItemsMask(long lMask);
HRESULT put_Step(long lStep);
HRESULT put_Steps(long lStep);
HRESULT put_StopTime(REFTIME llTime);
HRESULT put_StoreUsed(long lStoreUsed);
HRESULT put_String(long index, BSTR bstr);
HRESULT put_SubCaption(BSTR bstrSubCaption);
HRESULT put_Subject (BSTR bstrSubject);
HRESULT put_Suffix (BSTR bstrSuffix);
HRESULT put_TabColor(OLE_COLOR clr);
HRESULT put_TabFocusBackColor(OLE_COLOR clr);
HRESULT put_TabFocusForeColor(OLE_COLOR clr);
HRESULT put_TabMinWidth(long lMinWidth);
HRESULT put_TabTextColor(OLE_COLOR clr);
HRESULT put_TeamTask (VARIANT_BOOL bTeamTask);
HRESULT put_Text(BSTR bstr);
HRESULT put_TextPrivate(BOOL fTextPrivate);
HRESULT put_TimezoneIndex (long lTimezoneIndex);
HRESULT put_Title (BSTR bstrTitle);
HRESULT put_TitlebarUpdateMode(WORD wTitlebarUpdateMode);
HRESULT put_Top(long Top);
HRESULT put_TopVisibleId(long lTopVisibleId);
HRESULT put_TopVisibleIndex(long lTopVisibleIndex);
HRESULT put_TrackActive(unsigned char biTrack, BOOL fActive);
HRESULT put_TrimRight(BOOL fTrimRight);
HRESULT put_URI(BSTR bstrURI);
HRESULT put_URL(BSTR bstrURL);
HRESULT put_Units (BSTR bstrUnits);
HRESULT put_UserData(long lData);
HRESULT put_UserName(BSTR userName);
HRESULT put_Value(BSTR in_bstrVal);
HRESULT put_Visible(long Visible);
HRESULT put_VisitingCity (ICity *pICity);
HRESULT put_VoIPName(BSTR bstrVoIPName);
HRESULT put_VoiceMenuActivateCommand(BSTR bstrCommand);
HRESULT put_WaitStatus(BOOL fWaitStatus);
HRESULT put_WebPage (BSTR bstrWebPage);
HRESULT put_Width(long Width);
HRESULT put_WindowState(long WindowState);
HRESULT put_WindowStyle(long WindowStyle);
HRESULT put_WindowStyleEx(long WindowStyleEx);
HRESULT put_WorkDir(BSTR workingDir);
HRESULT put_XMinus(short wVal);
HRESULT put_XPlus(short wval);
HRESULT put_XVal(short wVal);
HRESULT put_YMinus(short wVal);
HRESULT put_YPlus(short wval);
HRESULT put_YVal(short wVal);
HRESULT put_YomiCompanyName (BSTR bstrYomiCompanyName);
HRESULT put_YomiFirstName (BSTR bstrYomiFirstName);
HRESULT put_YomiLastName (BSTR bstrYomiLastName);
HRESULT put_async(VARIANT_BOOLisAsync);
HRESULT put_expr(BSTR expression);
HRESULT put_input(VARIANT pVar);
HRESULT put_nodeTypedValue(VARIANT typedValue);
HRESULT put_ondataavailable(VARIANT ondataavailableSink);
HRESULT put_ontransformnode(VARIANT ontransformnodeSink);
HRESULT put_output(VARIANT output);
HRESULT put_preserveWhiteSpace(VARIANT_BOOL isPreserving);
HRESULT put_resolveExternals(VARIANT_BOOLisResolving);
HRESULT put_uiMode(BSTR bstrMode);
HRESULT put_validateOnParse(VARIANT_BOOLisValidating);
HRESULT put_value(VARIANT* attributeValue);
HRESULT putref_HeaderHandler(IDispatch* pHeaderHandler);
HRESULT set_AppSmallIcon(OLE_HANDLE hSmallIcon);
HRESULT set_PreferredVideoDevice(BSTR bstrDeviceName);
UINT setter_function (UINT actID, AsnAny *aryObject, UINT *pErrIndex);
BOOL waveui_AcmDlgProc (HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void waveui_AfterDialogBox (LPVOID pChooseStruct, BOOL fIsFormatDialog);
void waveui_BeforeDialogBox (LPVOID pChooseStruct, BOOL fIsFormatDialog);
void waveui_DeInit (void);
void waveui_Init (void);
VOID EdbgSetDebug(DWORD DebugZoneMask, PFN_OutputDebugString pDebugStringFunc);
WINOLEAPI CreateOleAdviseHolder(IOleAdviseHolder FAR * FAR *ppOAHolder);
WINOLEAPI OleCreate(REFCLSID rclsid, REFIID riid, DWORD renderopt, FORMATETC *pFormatEtc, IOleClientSite *pClientSite, IStorage *pStg, void **ppvObject);
WINOLEAPI OleDraw(IUnknown *pUnk, DWORD dwAspect, HDC hdcDraw, LPCRECT lprcBounds);
WINOLEAPI OleSave(IPersistStorage *pPS, IStorage *pStg, BOOL fSameAsLoad);
WINOLEAPI ReadClassStm(IStream *pStm, CLSID *pclsid);
WINOLEAPI StgCreateDocfile(const WCHAR *pwcsName, DWORD grfMode, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI StgCreateDocfileOnILockBytes(ILockBytes *plkbyt, DWORD grfMode, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI StgOpenStorage(const WCHAR *pwcsName, IStorage *pstgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI StgOpenStorageOnILockBytes(ILockBytes *plkbyt, IStorage *pStgPriority, DWORD grfMode, SNB snbExclude, DWORD reserved, IStorage **ppstgOpen);
WINOLEAPI WriteClassStg(IStorage *pStg, REFCLSID rclsid);
WINOLEAPI WriteClassStm(IStream *pStm, REFCLSID rclsid);
VOID CREATE_INVALIDGUID(PCEGUID pceguid);
VOID CREATE_SYSTEMGUID(PCEGUID pceguid);
HTREEITEM TreeView_GetChild(hwnd, hitem);
HTREEITEM TreeView_GetDropHilight(hwnd);
HTREEITEM TreeView_GetFirstVisible(hwnd);
HTREEITEM TreeView_GetNextItem(hwnd, hitem, flag);
HTREEITEM TreeView_GetNextSibling(hwnd, hitem);
HTREEITEM TreeView_GetNextVisible(hwnd, hitem);
HTREEITEM TreeView_GetParent(hwnd, hitem);
HTREEITEM TreeView_GetPrevSibling(hwnd, hitem);
HTREEITEM TreeView_GetPrevVisible(hwnd, hitem);
HTREEITEM TreeView_GetRoot(hwnd);
HTREEITEM TreeView_GetSelection(hwnd);
HTREEITEM TreeView_HitTest(hwnd, lpht);
HTREEITEM TreeView_InsertItem(hwnd, lpis);
WINOLEAUTAPI VarBstrFromI1(char cIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
WINOLEAUTAPI VarBstrFromUI2(USHORT uiIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
WINOLEAUTAPI VarBstrFromUI4(ULONG ulIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
WINOLEAUTAPI VarI1FromDisp(IDispatch *pdispIn, LCID lcid, char *pcOut);
WINOLEAUTAPI VarI1FromStr(BSTR strIn, LCID lcid, ULONG dwFlags, char *pcOut);
WINOLEAUTAPI VarUI2FromDisp(IDispatch *pdispIn, LCID lcid, USHORT *puiOut);
WINOLEAUTAPI VarUI2FromStr(BSTR strIn, LCID lcid, ULONG dwFlags, USHORT *puiOut);
WINOLEAUTAPI VarUI4FromDisp(IDispatch *pdispIn, LCID lcid, ULONG *pulOut);
WINOLEAUTAPI VarUI4FromStr(BSTR strIn, LCID lcid, ULONG dwFlags, ULONG *pulOut);
BOOL CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam);
BOOL CALLBACK ExtensionPropSheetPageProc(LPVOID lpv, LPFNADDPROPSHEETPAGE lpfnAddPropSheetPageProc, LPARAM lParam);
WINOLEAPI CreateClassMoniker(REFCLSID rclsid, IMoniker **ppmk);
WINOLEAPI GetHGlobalFromStream(IStream *pstm, HGLOBAL *phglobal);
HRESUTL SetMoniker(DWORD dwWhichMoinker, IMoniker *pmk);
WINOLEAPI OleLoadFromStream(IStream *pStm, REFIID iidInterface, void **ppvObj);
WINOLEAPI OleSaveToStream(IPersistStream *pPStm, IStream *pStm);
WINOLEAPI ReadClassStg(IStorage *pStg, CLSID *pclsid);
BSTR SysAllocString(OLECHAR FAR *sz);
BSTR SysAllocStringByteLen(char FAR *psz, unsigned int len);
BSTR SysAllocStringLen(OLECHAR FAR *pch, unsigned int cch);
BOOL CALLBACK AddPropSheetPageProc(HPROPSHEETPAGE hpage, LPARAM lParam);
LONG TSPIAPI TSPI_lineGetProcTable (LPTSPI_PROCS *lplpTSpiProcs);
ADDRESS Address (void);
PCHAR CONTAINING_RECORD(IN PCHAR Address, IN TYPE Type, IN PCHAR Field);
extern "C" __declspec(dllexport) DWORD GPS_Init(DWORD dwContext);
USB_TRANSFER SetFeature(USB_HANDLE hDevice, LPTRANSFER_NOTIFY_ROUTINE lpStartAddress, LPVOID lpvNotifyParameter, DWORD dwFlags, WORD wFeature, UCHAR bIndex);
USB_TRANSFER SetInterface(USB_HANDLE hDevice, LPTRANSFER_NOTIFY_ROUTINE lpStartAddress, LPVOID lpvNotifyParameter, DWORD dwFlags, UCHAR bInterfaceNumber, UCHAR bAlternateSetting);
USB_TRANSFER SyncFrame(USB_HANDLE hDevice, LPTRANSFER_NOTIFY_ROUTINE lpStartAddress, LPVOID lpvNotifyParameter, DWORD dwFlags, UCHAR bEndpoint, LPWORD lpwFrame);
VOID TouchPanelCalibrateAPoint(INT32 UncalX, INT32 UncalY, INT32 *pCalX, INT32 *pCalY);
VOID TouchPanelSetCalibration(INT32 cCalibrationPoints, INT32 *pScreenXBuffer, INT32 *pScreenYBuffer, INT32 *pUncalXBuffer, INT32 *pUncalYBuffer);
DWORD __stdcall ColorControl(LPDDHAL_COLORCONTROLDATA pccd);
DWORD __stdcall DestroyDriver(LPDDHAL_DESTROYDRIVERDATA pddd);
DWORD __stdcall SetExclusiveMode(LPDDHAL_SETEXCLUSIVEMODEDATA psemd);
WORD GetBitCount(const GUID *pSubtype);
const RGBQUAD * GetBitmapPalette(const VIDEOINFOHEADER *pVideoInfo);
const GUID GetBitmapSubtype(const BITMAPINFOHEADER *pHeader);
TCHAR * GetSubtypeName(const GUID *pSubtype);
const GUID GetTrueColorType(const BITMAPINFOHEADER *pHeader);
REFERENCE_TIME GetNextAdviseTime();
COLORREF GetBorderColour();
HWND GetOwnerWindow();
IFilterGraph *GetFilterGraph();
POSITION AddAfterI(POSITION pos, void *pObj);
POSITION AddBeforeI(POSITION pos, void *pObj);
POSITION AddHeadI(void *pObj);
POSITION AddTailI(void *pObj);
POSITION FindI(void *pObj);
POSITION GetHeadPositionI();
void *GetI(POSITION pos);
POSITION GetTailPositionI();
POSITION Prev(POSITION pos);
void *RemoveHeadI();
void *RemoveI(POSITION pos);
void *RemoveTailI();
double CurrentRate();
REFERENCE_TIME CurrentStartTime();
REFERENCE_TIME CurrentStopTime();
IPin *GetConnected();
FILTER_STATE GetRealState(void);
HDC GetWindowHDC();
HWND GetWindowHWND();
OBJECT GetHead();
POSITION GetHeadPosition();
POSITION GetTailPosition();
OBJECT *RemoveHead();
OBJECT *RemoveTail();
IAsyncReader* GetReader(void);
T GetQueueObject();
HRESULT Init(void);
IMemAllocator * PeekAllocator();
const BOOL ReadOnly();
IMemInputPin * ConnectedIMemInputPin();
LPUNKNOWN GetOwner(void);
HINSTANCE LoadOLEAut32();
Unable to Start Up ConPMon (earlier conpmon could be shutting down);
HRESULT GetDevice(IDirect3DMobileDevice** ppDevice);
HRESULT VarBstrFromDate(DATE dateIn, LCID lcid, ULONG dwFlags, BSTR pbstrOut);
RESULT GetSourceURL(DWORD dwSourceIndex, BSTR* pbstrURL);
HRESULT CreateBitmapFromBuffer(BitmapData* bitmapData, IBitmapImage** bitmap);
HRESULT FindBehavior(BSTR bstrBehavior, BSTR bstrBehaviorUrl, IElementBehaviorSite *pSite, IElementBehavior **ppBehavior);
HRESULT GetFocusRect(RECT *pRect);
HRESULT GetLayoutInfo(LONG *plLayoutInfo);
HRESULT GetPosition(LONG lFlags, POINT *pptTopLeft);
HRESULT MapSize(SIZE *psizeIn, RECT *prcOut);
HRESULT GetTextDescent(LONG *plDescent);
HRESULT GetRenderInfo(LONG *plRenderInfo);
HRESULT HitTestPoint(POINT *pPoint, IUnknown *pReserved, BOOL *pbHit);
HRESULT GetRelatedBehaviors(LONG lDirection, LPOLESTR pchCategory, IEnumUnknown **ppEnumerator);
HRESULT GetMediaResolution(SIZE *psizeResolution);
HRESULT InvalidateLayoutInfo(VOID);
HRESULT InvalidateSize(VOID);
HRESULT GetFontInfo(LOGFONTW *plf);
HRESULT GetEventCookie(LPOLESTR pchEvent, LONG *plCookie);
HRESULT RegisterEvent(LPOLESTR pchEvent, LONG lFlags, LONG *plCookie);
HRESULT RegisterName(LPOLESTR pchName);
HRESULT RegisterUrn(LPOLESTR pchUrn);
HRESULT InvalidateRenderInfo(VOID);
HRESULT InvalidateStyle(VOID);
HRESULT AddTag(BSTR bstrTagName, LONG lFlags);
HRESULT CreateWithImplementation(IElementNamespace *pNamespace, BSTR bstrImplementation);
HRESULT PopulateNamespaceTable(VOID);
HRESULT CreateHTMLPropertyPage(IMoniker *pmk, IPropertyPage **ppPP);
HRESULT ShowHTMLDialog(HWND hwndParent, IMoniker *pMk, VARIANT *pvarArgIn, WCHAR *pchOptions, VARIANT *pvarArgOut);
HRESULT ShowHTMLDialogEx(HWND hwndParent, IMoniker *pMk, DWORD dwDialogFlags, VARIANT *pvarArgIn, WCHAR *pchOptions, VARIANT *pvarArgOut);
HRESULT GetCaretDirection(CARET_DIRECTION *peDir);
HRESULT GetLocation(POINT *pPoint, BOOL fTranslate);
HRESULT Hide(VOID);
HRESULT InsertText(OLECHAR *pText, LONG lLen);
HRESULT IsVisible(BOOL *pIsVisible);
HRESULT MoveCaretToPointer(IDisplayPointer *pDispPointer, BOOL fScrollIntoView, CARET_DIRECTION eDir);
HRESULT MoveCaretToPointerEx(IDisplayPointer *pDispPointer, BOOL fVisible, BOOL fScrollIntoView, CARET_DIRECTION eDir);
HRESULT MoveDisplayPointerToCaret(IDisplayPointer *pDispPointer);
HRESULT MoveMarkupPointerToCaret(IMarkupPointer *pIMarkupPointer);
HRESULT SetCaretDirection(CARET_DIRECTION eDir);
HRESULT GetNextChange(BYTE *pbBuffer, long nBufferSize, long *pnRecordLength);
HRESULT ExecChange(BYTE *pbRecord, BOOL fForward);
HRESULT GetDisplayGravity(DISPLAY_GRAVITY *peGravity);
HRESULT GetLineInfo(ILineInfo **ppLineInfo);
HRESULT GetPointerGravity(POINTER_GRAVITY *peGravity);
HRESULT IsAtBOL(BOOL *pfBOL);
HRESULT IsEqualTo(IDisplayPointer *pDispPointer, BOOL *pfIsEqual);
HRESULT IsLeftOf(IDisplayPointer *pDispPointer, BOOL *pfIsLeftOf);
HRESULT IsPositioned(BOOL *pfPositioned);
HRESULT IsRightOf(IDisplayPointer *pDispPointer, BOOL *pfIsLeftOf);
HRESULT MoveToMarkupPointer(IMarkupPointer *pPointer, IDisplayPointer *pDispLineContext);
HRESULT MoveToPointer(IDisplayPointer *pDispPointer);
HRESULT MoveUnit(DISPLAY_MOVEUNIT eMoveUnit, LONG lXPos);
HRESULT PositionMarkupPointer(IMarkupPointer *pMarkupPointer);
HRESULT QueryBreaks(DWORD *pdwBreaks);
HRESULT SetDisplayGravity(DISPLAY_GRAVITY eGravity);
HRESULT SetPointerGravity(POINTER_GRAVITY eGravity);
HRESULT Unposition(VOID);
HRESULT CreateDisplayPointer(IDisplayPointer **ppDispPointer);
HRESULT ChooseColorDlg(VARIANT initColor, VARIANT *rgbColor);
HRESULT PreDrag(VOID);
HRESULT GetSelectionServices(IMarkupContainer *pIContainer, ISelectionServices **ppSelSvc);
HRESULT MoveToSelectionAnchor(IMarkupPointer *pIStartAnchor);
HRESULT MoveToSelectionEnd(IMarkupPointer *pIEndAnchor);
HRESULT FreezeVirtualCaretPos(BOOL fReCompute);
HRESULT MoveToSelectionAnchorEx(IDisplayPointer *pIStartAnchor);
HRESULT MoveToSelectionEndEx(IDisplayPointer *pIEndAnchor);
HRESULT UnFreezeVirtualCaretPos(BOOL fReset);
HRESULT IsPrimary(BOOL *pfPrimary);
HRESULT SetPrimary(BOOL fPrimary);
HRESULT MoveSegmentToPointers(IHighlightSegment *pISegment, IDisplayPointer *pDispPointerStart, IDisplayPointer *pDispPointerEnd);
HRESULT RemoveSegment(IHighlightSegment *pISegment);
HRESULT DrawToDC(HDC hDC);
HRESULT SetDocumentPrinter(BSTR bstrPrinterName, HDC hDC);
HRESULT GetActiveIMM(IActiveIMMApp **ppActiveIMM);
HRESULT GetAndClearDirtyRange(DWORD dwCookie, IMarkupPointer *pIPointerBegin, IMarkupPointer *pIPointerEnd);
long GetVersionNumber(VOID);
HRESULT UnRegisterForDirtyRange(DWORD dwCookie);
HRESULT Cling(BOOL *pfCling);
HRESULT FindText(OLECHAR *pchFindText, DWORD dwFlags, IMarkupPointer *pIEndMatch, IMarkupPointer *pIEndSearch);
HRESULT Gravity(POINTER_GRAVITY *pGravity);
HRESULT IsLeftOfOrEqualTo(IMarkupPointer *pPointerThat, BOOL *pfResult);
HRESULT IsRightOfOrEqualTo(IMarkupPointer *pPointerThat, BOOL *pfResult);
HRESULT MoveToContainer(IMarkupContainer *pContainer, BOOL fAtStart);
HRESULT SetCling(BOOL fCLing);
HRESULT SetGravity(POINTER_GRAVITY Gravity);
HRESULT UnPosition(VOID);
HRESULT GetMarkupPosition(long *plMP);
HRESULT IsAtWordBreak(BOOL *pfAtBreak);
HRESULT IsInsideURL(IMarkupPointer *pRight, BOOL *pfResult);
HRESULT MoveToMarkupPosition(IMarkupContainer *pContainer, long lMP);
HRESULT MoveUnitBounded(MOVEUNIT_ACTION muAction, IMarkupPointer *pIBoundary);
HRESULT BeginUndoUnit(OLECHAR *pchTitle);
HRESULT CreateMarkupContainer(IMarkupContainer **ppMarkupContainer);
HRESULT CreateMarkupPointer(IMarkupPointer **ppPointer);
HRESULT EndUndoUnit(VOID);
HRESULT GetNameForTagID(ELEMENT_TAG_ID tagId, BSTR *pbstrName);
HRESULT GetTagIDForName(BSTR bstrName, ELEMENT_TAG_ID *ptagId);
HRESULT ParseGlobal(HGLOBAL hglobalHTML, DWORD dwFlags, IMarkupContainer **ppContainerResult, IMarkupPointer *pPointerStart, IMarkupPointer *pPointerFinish);
HRESULT ParseString(OLECHAR *pchHTML, DWORD dwFlags, IMarkupContainer **ppContainerResult, IMarkupPointer *ppPointerStart, IMarkupPointer *ppPointerFinish);
HRESULT ParseGlobalEx(HGLOBAL hglobalHTML, DWORD dwFlags, IMarkupContainer *pContext, IMarkupContainer **ppContainerResult, IMarkupPointer *pPointerStart, IMarkupPointer *pPointerFinish);
HRESULT SaveSegmentsToClipboard(ISegmentList *pSegmentList, DWORD dwFlags);
HRESULT FindTextFragFromMarkupPointer(IMarkupPointer *pPointerFind, long *piFrag, BOOL *pfFragFound);
HRESULT GetTextFrag(long iFrag, BSTR *pbstrFrag, IMarkupPointer *pPointerFrag);
HRESULT GetTextFragCount(long *pcFrags);
HRESULT InsertTextFrag(long iFrag, BSTR bstrInsert, IMarkupPointer *pPointerInsert);
HRESULT RemoveTextFrag(long iFrag);
HRESULT GetPainterInfo(HTML_PAINTER_INFO *pInfo);
HRESULT OnResize(SIZE pt);
HRESULT GetEventInfoFlags(long *plEventInfoFlags);
HRESULT StringFromPartID(LONG lPartID, BSTR *pbstrPart);
HRESULT OnMove(RECT rcDevice);
HRESULT GetDrawInfo(LONG lFlags, HTML_PAINT_DRAW_INFO *pDrawInfo);
HRESULT GetHitTestCookie(LONG *plCookie);
HRESULT InvalidatePainterInfo(VOID);
HRESULT InvalidateRegion(HRGN rgnInvalid);
HRESULT TransformGlobalToLocal(POINT ptGlobal, POINT *pptLocal);
HRESULT TransformLocalToGlobal(POINT ptLocal, POINT *pptGlobal);
HRESULT GetPointers(IMarkupPointer *pIStart, IMarkupPointer *pIEnd);
HRESULT CreateIterator(ISegmentListIterator **ppIIter);
HRESULT IsEmpty(BOOL *pfEmpty);
HRESULT Advance(VOID);
HRESULT Current(ISegment **ppISegment);
HRESULT First(VOID);
HRESULT IsDone(VOID);
HRESULT AddSegment(IMarkupPointer *pIStart, IMarkupPointer *pIEnd, ISegment **ppISegmentAdded);
HRESULT GetMarkupContainer(IMarkupContainer **ppIContainer);
HRESULT GetSelectionServicesListener(ISelectionServicesListener **ppISelectionServicesListener);
HRESULT SetSelectionType(SELECTION_TYPE eType, ISelectionServicesListener *pIListener);
HRESULT BeginSelectionUndo(VOID);
HRESULT EndSelectionUndo(VOID);
HRESULT GetTypeDetail(BSTR *pTypeDetail);
HRESULT OnChangeType(SELECTION_TYPE eType, ISelectionServicesListener *pIListener);
HRESULT OnSelectedElementExit(IMarkupPointer *pIElementStart, IMarkupPointer *pIElementEnd, IMarkupPointer *pIElementContentStart, IMarkupPointer *pIElementContentEnd);
HRESULT CreateTimer(ITimer *pReferenceTimer, ITimer **ppNewTimer);
HRESULT GetNamedTimer(REFGUID rguidName, ITimer **ppTimer);
HRESULT SetNamedTimerReference(REFGUID rguidName, ITimer *pReferenceTimer);
HRESULT OnTimer(VARIANT vtimeAdvise);
BOOL LaunchConnectionDialog(HWND hParent);
BOOL LaunchInternetControlPanel(HWND hParent);
BOOL LaunchSecurityDialog(HWND hParent);
HRESULT GetFramesContainer(IOleContainer **ppContainer);
HRESULT GetFrameUrl(LPWSTR *ppszFrameSrc);
HRESULT FindFrame(LPCWSTR pszTargetName, IUnknown *ppunkContextFrame, DWORD dwFlags, IUnknown **ppunkTargetFrame);
HRESULT GetFrameName(LPWSTR *ppszFrameName);
HRESULT GetFrameSrc(LPWSTR *ppszFrameSrc);
HRESULT GetParentFrame(IUnknown **ppunkParent);
HRESULT SetFrameName(LPCWSTR pszFrameName);
HRESULT SetFrameSrc(LPCWSTR pszFrameSrc);
HRESULT GetFrameMargins(DWORD *pdwWidth, DWORD *pdwHeight);
HRESULT GetFrameOptions(DWORD *pdwFlags);
HRESULT GetTargetAlias(LPCWSTR pszTargetName, LPWSTR *ppszTargetAlias);
HRESULT SetFrameMargins(DWORD dwWidth, DWORD dwHeight);
HRESULT SetFrameOptions(DWORD dwFlags);
HRESULT OnCreate(IUnknown *pUnkDestination, ULONG cbCookie);
HRESULT OnReuse(IUnknown *pUnkDestination);
HRESULT GetOverrideKeyPath(LPOLESTR *pchKey, DWORD dw);
HRESULT SetUIHandler(IDocHostUIHandler *pUIHandler);
HRESULT ShowHelp(HWND hwnd, LPOLESTR pszHelpFile, UINT uCommand, DWORD dwData, POINT ptMouse, IDispatch *pDispatchObjectHit);
HRESULT ShowMessage(HWND hwnd, LPOLESTR lpstrText, LPOLESTR lpstrCaption, DWORD dwType, LPOLESTR lpstrHelpFile, DWORD dwHelpContext, LRESULT *plResult);
HRESULT FilterDataObject(IDataObject *pDO, IDataObject **ppDORet);
HRESULT GetDropTarget(IDropTarget *pDropTarget, IDropTarget **ppDropTarget);
HRESULT GetExternal(IDispatch **ppDispatch);
HRESULT GetHostInfo(DOCHOSTUIINFO *pInfo);
HRESULT GetOptionKeyPath(LPOLESTR *pchKey, DWORD dw);
HRESULT HideUI(VOID);
HRESULT OnDocWindowActivate(BOOL fActivate);
HRESULT OnFrameWindowActivate(BOOL fActivate);
HRESULT ResizeBorder(LPCRECT prcBorder, IOleInPlaceUIWindow *pUIWindow, BOOL fFrameWindow);
HRESULT ShowContextMenu(DWORD dwID, POINT *ppt, IUnknown *pcmdtReserved, IDispatch *pdispReserved);
HRESULT ShowUI(DWORD dwID, IOleInPlaceActiveObject *pActiveObject, IOleCommandTarget *pCommandTarget, IOleInPlaceFrame *pFrame, IOleInPlaceUIWindow *pDoc);
HRESULT TranslateUrl(DWORD dwTranslate, OLECHAR *pchURLIn, OLECHAR **ppchURLOut);
HRESULT UpdateUI(VOID);
HRESULT GetTitle(LPOLESTR *ppszTitle);
HRESULT GetURL(LPOLESTR *ppszURL);
HRESULT CreateEntry(LPCOLESTR pszUrl, LPCOLESTR pszTitle, ITravelLogEntry *ptleRelativeTo, BOOL fPrepend, ITravelLogEntry **pptle);
HRESULT EnumEntries(TLENUMF flags, IEnumTravelLogEntry **ppenum);
HRESULT GetRelativeEntry(int iOffset, ITravelLogEntry **ptle);
HRESULT RemoveEntry(ITravelLogEntry *ptle);
HRESULT TravelTo(ITravelLogEntry *ptle);
void BeforeNavigate(IDispatch *pDisp, VARIANT *&url, VARIANT *&Flags, VARIANT *&TargetFrameName, VARIANT *&PostData, VARIANT *&Headers, VARIANT_BOOL *&Cancel);
void NavigateComplete(IDispatch *pDisp, VARIANT *URL);
void NewWindow(IDispatch **&ppDisp, VARIANT_BOOL *&Cancel);
void PrintTemplateInstantiation(IDispatch *pDisp);
void PrintTemplateTeardown(IDispatch *pDisp);
HRESULT ShowBrowserBar(VARIANT *pvaClsid, VARIANT *pvarShow, VARIANT *pvarSize);
DWORD IsDialogBoxHandled(HWND hWnd, DWORD dwAction, DWORD dwPermissions, LPCTSTR lpszText);
HRESULT Redirect(BSTR bstrRedirectURI);
BSTR _BuildVersion(void);
VT_DISPATCH _CreateLogObject(void);
BSTR _GetCPU(void);
BSTR _GetOSVer(void);
long _LangHost(void);
BSTR _Name(void);
BSTR _StrConv(BSTR string, Integer convertFlag);
long DRM_ND_DeregisterFromService (BSTR sServerUDN);
HRESULT EnumerateProcesses(SAFEARRAY(BSTR)*out_Processes, SAFEARRAY(DWORD)*out_ProcessesId);
HRESULT EnumerateConnections(DWORD dwSizeActual, DWORD* pdwSizeReturned, BSTR Connections, VARIANT_BOOL* pfMoreEntries);
HRESULT GetConnection(ICcDevice* piDevice, DWORD dwTimeout, ICcServiceCB* piCallback, BSTR* pbstrConnectionId, ICcConnection** piTargetDevice);
HRESULT NotifyRunStateChange(RUN_STATUS_TYPE2 ers2Current, DWORD dwNbOfHaltReasons, HALT_REASON_TYPE2 *pehr2List, ADDRESS_TYPE CurrentExecAddress, DWORD64dw64CycleSinceLastRun);
HRESULT ReadAll(DWORD dwCpuNum, DWORD *pdwNbRegsInList, REGVAL_TYPE** pprvList);
HRESULT AddCodeBps(DWORD ccbp, CODE_BP_TYPE acbp, IeXdi2CodeBp *apieXdi2CodeBp);
HRESULT AddDataBps(DWORD cdbp, DATA_BP_TYPE adbp, IeXdi2DataBp*apieXdi2DataBp);
HRESULT UnregisterEmbeddedBpOpCode(DWORD dwOpCodeSizeInByte, const BYTE *pbOpCode, DWORD dwExecMode);
HRESULT WriteClientScratchPad(GUID guidClient, DWORD dwBuffInSize, const BYTE* pbBufferIn);
HRESULT CreateCpuRegCustomList(DWORD dwNbRegsInList, LPOLESTR* pszRegName, IeXdi2EnumCpuRegs** ppieXdi2EnumCpuRegs);
HRESULT EnumAllCpuRegGroups(DWORD* pdwNbGroups, CPU_REG_GROUP_STRUCT** ppscrg);
HRESULT GetLinearMemMapList(DWORD *pdwNbTotalMemMapInList, MEMMAP_DESCRIPTION_TYPE **ppmmdTable);
HRESULT GetMemAccessExclusionRange(LINEAR_MEM_MAP_TYPE lmt, DWORD* pdwNbTotalExclRange, MEM_ACCESS_EXCLUSION_RANGE** ppmaerExclusionList);
HRESULT SetMemAccessExclusionRange(LINEAR_MEM_MAP_TYPE lmt, DWORD dwNbTotalExclRange, MEM_ACCESS_EXCLUSION_RANGE* pmaerExclusionList);
HRESULT GetAllRoutineData(ULONG*pcelt, ROUTINE_DATA**ppPData);
HRESULT ReadRegsFromThdCtx(IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx, DWORD* pdwNbRegsInList, REGVAL_TYPE **pprvList);
HRESULT AddFile(BSTR bstrFullPath,BSTR bstrKeyName,IPMCPU* piPMCPU,IPMOS* piPMOS,long dwLocaleId,long dwFlagsIPMPackageFile** ppiPMPackageFile);
HRESULT GetData2(FLEXI_GETDATA_TYPE2 fgds2, PTM_RAW_DATA **ppdatProcess, DWORD *pcProcess, DWORD *pcProcessTotal, PTM_RAW_DATA **ppdatThread, DWORD *pcThread, DWORD *pcThreadTotal, PTM_RAW_DATA **ppdatModule, DWORD *pcModule, DWORD *pcModuleTotal, PTM_RAW_DATA **ppdatContext, DWORD *pcContext, DWORD *pcContextTotal);
HRESULT GetDescriptionTables2(PTM_FIELD_DESC** ppfdProcDescTable, DWORD* pcProcField, PTM_FIELD_DESC** ppfdThreadDescTable, DWORD* pcThreadField, PTM_FIELD_DESC** ppfdModDescTable, DWORD* pcModField, PTM_FIELD_DESC **ppfdCtxDescTable, DWORD *pcCtxField);
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
FILE *_wfreopen(const wchar_t*path,constwchar_t*mode,FILE*stream);
HRESULT GetDescriptionTables(PTM_FIELD_DESC**ppfdProcDescTable, DWORD*pcProcField, PTM_FIELD_DESC**ppfdThreadDescTable, DWORD*pcThreadField, PTM_FIELD_DESC**ppfdModDescTable, DWORD*pcModField);
DWORD IsMessageBoxHandled(HWND hWnd, UINT uText, UINT uCaption, UINT uType);
#pragma runtime_checks("",off) // ignore any RTC compiler options ... #pragma runtime_checks("",restore) // restore compiler option settings
unsigned __int64 __cdecl __ull_rshift(unsigned__int64,int);
__int64 __cdecl __ll_lshift(int64,int);
__int64 __cdecl __ll_rshift(int64,int);
BOOL KitlSetTimerCallback(int nSecs, PFN_KITLTIMERCB pfnCB, LPVOID lpParam);
BOOL KitlStopTimerCallback(PFN_KITLTIMERCB pfnCB, LPVOID lpParam);
HRESULT Download(IDirectMusicPerformance* pPerformance);
BOOL TranEnumKnownDevice(PFN_EnumProc pfnCB, LPVOID pUserData);
HRESULT AddCommand(BSTR szCmdName, BSTR szMethodName, long nBitmapOffset, long dwCookie VARIANT_BOOL FAR* pbResult);
HRESULT AddCommandBarButton(long nButtonType, BSTR szCmdName, long dwCookie);
HRESULT SetAddInInfo(long nInstanceHandle, IDispatch* pCmdDispatch, long nIDBitmapResourceMedium, long nIDBitmapResourceLarge, long dwCookie);
HRESULT OnConnection (IApplication* pApp, VARIANT BOOL bFirstTime, Long dwCookie VARIANT_BOOL* OnConnection);
public override string ToString ();
public PluginDataView (PluginData data);
public CommandPacket ReceiveCommand (PluginData pluginData);
protected void RunOnPrimaryThread (AnonymousDelegate handler);
public CommandPacket ();
public void CopyToClipboard ();
public void RenderGeneric (GenericDataAcceptor acceptor);
public GenericDataAcceptor (ListView listView);
protected override void WndProc (ref Message m);
public CommandPacketEventArgs (CommandPacket commandPacket);
public CommandPacketParameter GetNextParameter ();
public delegate void AnonymousDelegate ();
public void StopService ();
public CommandPacket ProcessCommand (CommandPacket commandIn, PluginData pluginData);
public void StartCommandHandlerSync ();
protected abstract void OnRenderGeneric (GenericDataAcceptor dataAcceptor);
public void RefreshData ();
public void StartCommandHandlerAsync ();
public void AddData (PluginData data);
public void SendCommand (CommandPacket commandIn, PluginData pluginData);
public void AddNode (PluginNode node);
HRESULT SetOSImage(BSTR in_bstrOSImage);
HRESULT CmdOut(BSTR bstrData);
HRESULT ReadMemoryX(DWORD dwCpuNum, LINEAR_MEM_MAP_TYPElmt, ADDRESS_TYPE Address, DWORD dwNbElemToRead, BYTE bAccessWidthInBytes, BYTE* pbReadBuffer, DWORD* pdwNbElementEffectRead);
HRESULT WriteRegsToThdCtx(IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx, DWORD dwNbRegsInList, REGVAL_TYPE* prvList);
HRESULT AddDataBpsInProcAndThd(DWORD ProcID, DWORD ThdID, DWORD cdbp, DATA_BP_TYPE adbp, IeXdi2DataBp* apieXdi2DataBp);
HRESULT ClearServiceMap(BSTR in_bstrServiceCategoryID);
HRESULT RegisterEmbeddedBpOpCode(DWORD dwOpCodeSizeInByte, const BYTE* pbOpCode, DWORD dwExecMode, BOOL fToBeUsedAsSwBp);
HRESULT RegisterRefreshEvent(BSTR in_bstrEventName);
HRESULT OnStatusChangeNotify(DWORD dwPreviousState, DWORD dwCurrentState, LPCOLESTR pwszStringData, IUnknown* pUnk);
HRESULT WriteMemoryByProc(DWORD ProcID, LINEAR_MEM_MAP_TYPE lmt, ADDRESS_TYPE Address, DWORD dwNbElemToWrite, BYTE bAccessWidthInBytes, const BYTE* pbWriteBuffer, DWORD* pdwNbElementEffectWritten);
HRESULT SetServiceMap(BSTR in_bstrServiceCategoryID, BSTR in_bstrServiceInfoID);
HRESULT FindObject(BSTR in_bstrNameOrID, ICcObject** out_ppiObject);
bool WaitForActiveServer (DWORD WaitTimeInMSec);
HRESULT SetProperty(BSTR bstrPropertyName, BSTR bstrPropertyValue);
HRESULT SearchMemoryByProc(DWORD ProcID, LINEAR_MEM_MAP_TYPE lmt, ADDRESS_TYPE AddressRangeStart, ADDRESS_TYPE AddressRangeEnd, DWORD dwNbElem, BYTE bAccessWidthInBytes, BYTE* pbSequenceToSearch ADDRESS_TYPE** ppAddressFound);
HRESULT GetCallStack(DWORD dwStartingFrameNb, DWORD dwEndingFrameNb, IeXdi2EnumCpuRegs* piOsAxsEnumCpuRegThreadCtx, IOsAxsProcess* piOsAxsCurProc, IeXdi2EnumCpuRegs** ppiOsAxsEnumCpuRegThreadCtxNew, IOsAxsProcess** ppiOsAxsCurProcNew, DWORD* pdwNbActualFramesRead, FRAME_TYPE ** ppframeList);
HRESULT SearchFileSystem(LPCOLESTR in_Criteria, LPCOLESTR in_StartingDirectory, SAFEARRAY(BSTR)* out_FileSystems);
HRESULT AddCodeBpsInProcAndThd(DWORD ProcID, DWORD ThdID, DWORD ccbp, CODE_BP_TYPE acbp, IeXdi2CodeBp* apieXdi2CodeBp);
HRESULT FillMemoryX(DWORD dwCpuNum, LINEAR_MEM_MAP_TYPE lmt, ADDRESS_TYPE AddressRangeStart, ADDRESS_TYPE AddressRangeEnd, DWORD dwNbElem, BYTE bAccessWidthInBytes, BYTE* pbSequenceToFill);
HRESULT ReadMemoryByProc(DWORD ProcID, LINEAR_MEM_MAP_TYPE lmt, ADDRESS_TYPE Address, DWORD dwNbElemToRead, BYTE bAccessWidthInBytes, BYTE* pbReadBuffer, DWORD* pdwNbElementEffectRead);
HRESULT GetCommand(int nMaxCmdSize, BSTR* pbstrCommand);
HRESULT NotifyModule(IOsAxsModule* pmod, BOOL fLoaded);
HRESULT GetThreadByID (DWORD dwID, IOsAxsProcess** ppiOsAxsThread);
HRESULT NotifyProcess(IOsAxsProcess* pproc, BOOL fCreated);
HRESULT WriteMemoryX(DWORD dwCpuNum, LINEAR_MEM_MAP_TYPE lmt, ADDRESS_TYPE Address, DWORD dwNbElemToWrite, BYTE bAccessWidthInBytes, const BYTE* pbWriteBuffer, DWORD* pdwNbElementEffectWritten);
HRESULT FillMemoryByProc(DWORD ProcID, LINEAR_MEM_MAP_TYPE lmt, ADDRESS_TYPE AddressRangeStart, ADDRESS_TYPE AddressRangeEnd, DWORD dwNbElem, BYTE bAccessWidthInBytes, BYTE* pbSequenceToFill);
HRESULT WriteAll(DWORD dwCpuNum, DWORD dwNbRegsInList, REGVAL_TYPE* prvList);
HRESULT SearchMemoryX(DWORD dwCpuNum, LINEAR_MEM_MAP_TYPE lmt, ADDRESS_TYPE AddressRangeStart, ADDRESS_TYPE AddressRangeEnd, DWORD dwNbElem, BYTE bAccessWidthInBytes, BYTE* pbSequenceToSearch, ADDRESS_TYPE** ppAddressFound);
HRESULT ReadClientScratchPad(GUID guidClient, DWORD* pdwBuffOutSize, BYTE** ppbBufferOut);
bool VirtualMemory(const TCHAR* const tpsParm);
HRESULT Create16BppTexture(int fRenderTarget, UINT nWidth, UINT nHeight, int fKeepsystemMemory, ICustomSurface** ppSurface);
BOOL ReadFileScatter(HANDLE hFile, FILE_SEGMENT_ELEMENT aSegmentArray, DWORD nNumberOfBytesToRead, LPDWORD lpReserved, LPOVERLAPPED lpOverlapped);
BOOL DefragVolume(HANDLE hVolume, PDISK_INFO pdi, PDEFRAG_OPTIONS pdo, PFN_PROGRESS pfnProgress, PFN_MESSAGE pfnMessage);
BOOL ScanVolume(HANDLE hVolume, PDISK_INFO pdi, PSCAN_OPTIONS pso, PFN_PROGRESS pfnProgress, PFN_MESSAGE pfnMessage);
DWORD FormatVolume(HANDLE hVolume, PDISK_INFO pdi, PFORMAT_OPTIONS pfo, PFN_PROGRESS pfnProgress, PFN_PROGRESS pfnMessage);
BOOL WriteFileGather(HANDLE hFile, FILE_SEGMENT_ELEMENT aSegmentArray, DWORD nNumberOfBytesToWrite, LPDWORD lpReserved, LPOVERLAPPED lpOverlapped);
HRESULT MatchResolve(LPCWSTR pszId, ULONGLONG ullMetadataVersion, ULONGLONG ullInstanceId, ULONGLONG ullMessageNumber, LPCWSTR pszSessionId, const WSD_NAME_LIST* pTypesList, const WSD_URI_LIST* pScopesList, const WSD_URI_LIST* pXAddrsList const WSDXML_ELEMENT* pHeaderAny, const WSDXML_ELEMENT* pReferenceParameterAny, const WSDXML_ELEMENT* pPolicyAny, const WSDXML_ELEMENT* pEndpointReferenceAny, const WSDXML_ELEMENT* pAny);
RESULT get_EventPackage(BSTR* pbstrEventPackage);
COLORREF RGBA(BYTE byRed, BYTE byGreen, BYTE byBlue, BYTE alpha);
public void RunOnThread (Control control, AnonymousDelegate handler);
DeviceConnection get_DeviceConnection ();
public boolean get_PluginClosing ();
public void AddToMenu (Menu menu);
boolean get_ContainedInToolWindow ();
function get AllowThisPluginToBeFound () : boolean function set AllowThisPluginToBeFound (value : boolean);
public RtfxAboutBox ();
boolean get_ShellShuttingDown ();
public long GetHeartbeatRefCount ();
public void ProcessCommandEx (ProcessCommandExData pcexdata);
public void add_PendingRequest (EventHandler value) public void remove_PendingRequest (EventHandler value);
Object get_CustomAPI ();
public ShellDisplayModes get_ShellDisplayMode () public void set_ShellDisplayMode (ShellDisplayModes value);
public function get ShellDisplayMode () : ShellDisplayModes public function set ShellDisplayMode (value : ShellDisplayModes);
CommandTransport get_CommandTransport ();
public boolean get_RequiresDevicePings ();
DeviceDatabase get_DeviceDatabase ();
public void IncrementHeartbeatRefCount ();
function get ShowPacketSniffer () : boolean function set ShowPacketSniffer (value : boolean);
boolean get_UsingVirtualData ();
public PluginLaunchedEventArgs ();
public CommandUI ();
bool CanExportFile ();
public void add_ConnectionEvent (EventHandler value) public void remove_ConnectionEvent (EventHandler value);
public static boolean get_InUse ();
public void ClosePlugin ();
public FrameworkInformation ();
public bool GetSystemInfoEx (out SYSTEMINFOEX systemInfo);
public CommandPacket get_CommandPacket ();
public void DecrementHeartbeatRefCount ();
public CommandTransportCommandEventArgs (CommandPacket commandPacket);
bool CanImportFile ();
boolean get_RunningInShell ();
boolean get_ContainedInForm ();
public function get DeviceConnection () : DeviceConnection public function set DeviceConnection (value : DeviceConnection);
CommandUI get_CommandUI ();
boolean get_RunningUnderAutomation ();
public function get ParentedToDifferentPlugin () : boolean public function set ParentedToDifferentPlugin (value : boolean);
public function get SilentLoad () : boolean public function set SilentLoad (value : boolean);
boolean get_Standalone ();
public PluginComponent get_OwningPluginComponent () public void set_OwningPluginComponent (PluginComponent value);
public function get OwningPluginComponent () : PluginComponent public function set OwningPluginComponent (value : PluginComponent);
public List GetGuidsOfAvailablePlugins (bool onlyThosePluginsWhichDependOnThisPlugin);
function get RequiresToolHelpDll () : boolean function set RequiresToolHelpDll (value : boolean);
public static CommandPacket MakeCopy (CommandPacket source);
public static void ConfigureDevices (IntPtr hWnd);
public ProcessCommandExData (CommandPacket commandIn, PluginData pluginData);
function get DoesNotDeployDeviceComponent () : boolean function set DoesNotDeployDeviceComponent (value : boolean);
HRESUTL get_TimerEnabled(BOOL*pfEnabled);
HRESULT get_VoiceMenu(IUnknown **ppUnknownVoiceMenu);
HRESULT put_VoiceMenu(IUnknown *pUnknownVoiceMenu);
HREULT SendMsg(long uMsg, long wParam, long lParam);
HRESULT FindDevices(ppPNDEVICE ppDevArray, DWORD *pdwNumDev);
ATLAPI AtlAxGetControl(HWND h, IUnknown** pp);
ATLAPI AtlAxGetHost(HWND h, IUnknown** pp);
HRESULT AtlSetChildSite(IUnknown* punkChild, IUnknown* punkParent);
ATLAPI AtlAxAttachControl(IUnknown* pControl, HWND hWnd);
ATLAPI AtlAxCreateControl(LPCOLESTR lpszName, HWND hWnd, IStream* pStream, IUnknown** ppUnkContainer);
HRESULT SetExternalUIHandler(IDocHostUIHandlerDispatch* pUIHandler);
HRESULT AttachControl(IUnknown* pControl, IUnknown** ppUnkContainer);
HRESULT SetExternalDispatch(IDispatch* pDisp);
void AppendBSTR(BSTR p);
static LPCTSTR WINAPI GetObjectDescription();
void WINAPI BattyerNotifyOfTimeChange(BOOL fForward, FILETIME * pftDelta);
int CALLBACK LibMain(HINSTANCE hinst, WORD wDataSeg, WORD cbHeapSize, LPSTR lpszCmdLine);
BOOL NotifyIME(HIMC hIMC, DWORD dwAction, DWORD dwIndex, DWORD dwValue);
void CALLBACK LineCallbackFunc (DWORD hDevice, DWORD dwMsg, DWORD wCallbackInstance, DWORD dwParam1, DWORD dwParam2, DWORD dwParam3);
HRESULT GetAmbientFont(IFont** ppFont);
HRESULT RegisterClassObjects(DWORD dwClsContext, DWORD* dwFlags);
HRESULT EnumAdvise(IEnumSTATDATA** ppenumAdvise);
HRESULT GetDisplayString(DISPID dispID, BSTR* pBstr);
UINT GetObjectSchema();
BOOL PolylineTo(const POINT* lpPoints, int nCount);
BOOL PolyPolygon (LPPOINT lpPoints, LPINT lpPolyCounts, int nCount);
BOOL PolyPolyline(const POINT* lpPoints, const DWORD* lpPolyPoints, int nCount);
void SetRectNP(LPCRECT lpRect);
BOOL CreateFont(int nHeight, int nWidth, int nEscapement, int nOrientation, int nWeight, BYTE bItalic, BYTE bUnderline, BYTE cStrikeOut, BYTE nCharSet, BYTE nOutPrecision, BYTE nClipPrecision, BYTE nQuality, BYTE nPitchAndFamily, LPCTSTR lpszFacename);
BOOL SetRectInContainer(LPRECT lpRect);
void InitializeIIDs(const IID* piidPrimary, const IID* piidEvents);
HTREEITEM GetChildItem(HTREEITEM hItem);
HTREEITEM GetDropHilightItem();
HTREEITEM GetFirstVisibleItem();
HTREEITEM GetNextSiblingItem(HTREEITEM hItem);
HTREEITEM GetNextVisibleItem(HTREEITEM hItem);
HTREEITEM GetParentItem(HTREEITEM hItem);
HTREEITEM GetPrevSiblingItem(HTREEITEM hItem);
HTREEITEM GetPrevVisibleItem(HTREEITEM hItem);
HTREEITEM GetRootItem();
HTREEITEM GetSelectedItem();
BOOL ItemHasChildren(HTREEITEM hItem);
HTREEITEM SelectDropTarget(HTREEITEM hItem);
BOOL SetItemImage(HTREEITEM hItem, int nImage, int nSelectedImage);
BOOL SortChildren(HTREEITEM hItem);
BOOL Expand(HTREEITEM hItem, UINT nCode);
HRESULT get_Items(BSTR *pbstrItems);
HTREEITEM TreeView_GetDropHilite(hwnd);
enum {
 SHIC_FEATURE_RESTOREDEFAULT = 0,
 SHIC_FEATURE_AUTOCORRECT = 0x00000001L,
 SHIC_FEATURE_AUTOSUGGEST = 0x00000002L,
 SHIC_FEATURE_HAVETRAILER = 0x00000003L,
 SHIC_FEATURE_CLASS = 0x00000004L
} SHIC_FEATURE;
void LogMemUse(void);
void WINAPI (IfilterGraph* pGraph,
 DWORD dwLevel);
EXTERN_C BOOL buildDDHALInfo (LPDDHALINFO lpddhi,
DWORD modeidx);
BOOL PIN_Deinit(DWORD dwContext);
BOOL PIN_IOControl(DWORD dwContext,
 DWORD Ioctl,
 PUCHAR pInBuf,
 DWORD InBufLen,
 PUCHAR pOutBuf,
 DWORD OutBufLen,
 PDWORD pdwBytesTransferred);
extern HRESULT (*pIoctl_Register_DataCollector)(LPVOID,DWORD,LPVOID,DWORD);
extern HRESULT (*pIoctl_Send_DataCollector)(LPVOID,DWORD,LPVOID,DWORD);
interface IFst { HRESULT fst(BSTR b); HRESULT fst(long l); };
#pragma keyword("interface", on)
#pragma warning(disable:4199)
interface IX2 {
 public:
 // 3 is not a valid value to the get parameter
 int Size;
};
interface I1 {
};
interface I2 {
};
interface I3 : I1, I2 {
};
typedef struct CVF { D3DMVECTOR position; D3DMVECTOR normal; D3DMCOLOR diffuse; float u, v; // 1st set, 2-D float t; // 2nd set, 1-D } CustomVertexFormat;
typedef struct _DDHAL_DDEXEBUFCALLBACKS { DWORD dwSize; DWORD dwFlags; LPDDHALEXEBUFCB_CANCREATEEXEBUF CanCreateExecuteBuffer; LPDDHALEXEBUFCB_CREATEEXEBUF CreateExecuteBuffer; LPDDHALEXEBUFCB_DESTROYEXEBUF DestroyExecuteBuffer; LPDDHALEXEBUFCB_LOCKEXEBUF LockExecuteBuffer; LPDDHALEXEBUFCB_UNLOCKEXEBUF UnlockExecuteBuffer; } DDHAL_DDEXEBUFCALLBACKS;
typedef struct _GUID { DWORD Data1; WORD Data2; WORD Data3; BYTE Data4[8]; } GUID;
typedef struct tagImageInfo { /* DERIVED member omitted -- type body unprinted: GUID RawDataFormat; */ PixelFormatID PixelFormat; UINT Width; UINT Height; UINT TileWidth; UINT TileHeight; double Xdpi; double Ydpi; UINT Flags; } ImageInfo;
typedef struct _MTPIPCONNECTIONINFO { DWORD dwNonce; /* DERIVED member omitted -- type body unprinted: GUID guidClient; */ WCHAR rgwchClientName[MTPIP_CONNAUTH_MAX_NAME_LENGTH]; DWORD cchClientName; SOCKADDR_STORAGE saClient; SOCKADDR_STORAGE saLocal; } MTPIPCONNECTIONINFO;
typedef struct tagMyData { };
typedef struct _NM_UPDOWN { NMHDR hdr; int iPos; int iDelta; } NM_UPDOWNW;
typedef struct _obex_command { unsigned int uiOp; unsigned int uiResp; unsigned int fFinal; ObexPacketData sPktData; unsigned int cProp; unsigned int *aPropID; ObexVariant *aPropVar; } ObexCommand;
typedef struct _obex_transaction { unsigned int uiConnectionId; unsigned int uiTransactionId; unsigned int uiOp; ObexCommand *pObex; MemAlloc ObexAlloc; MemFree ObexFree; ServerCallback ObexExecute; AuthCallback ObexAuthRequest; } ObexTransaction;
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
typedef struct tagPNPOSITION{ DWORD dwStructureSize; PNTIME tiTime; PNPOSLLA psPosition; PNAVPOSLLA psAvPosition; DWORD dwPNReserved; } PNPOSITION;
typedef struct tagPNSTATION{ DWORD dwStructureSize; PNTIME tiTime; DWORD dwNumAvailable; DWORD dwNumUsed; PNAVSTATION snAvStation; PNINDSTATION siStations[PN_NUM_STATIONS_c]; DWORD dwPNReserved; } PNSTATION;
typedef struct tagPNTIME{ PNTM tmDevice; PNAVTM tmAvDevice; PNTM tmLeapDiffTime; PNAVTM tmAvLeapDiffTime; PNTM tmComputer; PNAVTM tmAvComputer; } PNTIME;
typedef struct tagPNTM{ DWORD dwMillisec; DWORD dwDay; } PNTM;
typedef struct tagPNVELOCITY{ DWORD dwStructureSize; PNTIME tiTime; PNVELENU vlVelocity; PNAVVELENU vlAvVelocity; DWORD dwPNReserved; } PNVELOCITY;
typedef struct _ServicesExeCallbackFunctions { PFN_SERVICE_SHUTDOWN pfnServiceShutdown; } ServicesExeCallbackFunctions;
typedef struct StringFileInfo { WORD wLength; WORD wValueLength; WORD wType; WCHAR szKey; WORD Padding; StringTable Children; } StringFileInfo;
typedef struct tagTZREG { LONG Bias; LONG StandardBias; LONG DaylightBias; SYSTEMTIME StandardDate; SYSTEMTIME DaylightDate; } TZREG;
typedef struct _WAVEFORMATEX_G711 { /* DERIVED member omitted -- type body unprinted: WAVEFORMATEX WaveFormatEx; */ WORD wSamplesPerBlock; } WAVEFORMATEX_G711;
typedef struct tagINITCOMMONCONTROLSEX { DWORD dwSize; DWORD dwICC;} INITCOMMONCONTROLSEX, *LPINITCOMMONCONTROLSEX;
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
 int cchText;}
 TBBUTTONINFOA, *LPTBBUTTONINFOA;
typedef struct tagSTGMEDIUM {
 unsigned long tymed;
 union {
 HBITMAP hBitmap;
 HMETAFILEPICT hMetaFilePict;
 HENHMETAFILE hEnhMetaFile;
 HGLOBAL hGlobal;
 /* DERIVED member omitted -- type body unprinted: LPOLESTR lpszFileName; */
 IStream *pstm;
 IStorage *pstg;
 }u;
 IUnknown *pUnkForRelease;
} uSTGMEDIUM;
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
struct hostent {
 char FAR *h_name;
 char FAR *FAR *h_aliases;
 short h_addrtype;
 short h_length;
 char FAR *FAR *h_addr_list;
};
typedef struct IDirectSoundBuffer *LPDIRECTSOUNDBUFFER;
typedef struct IDirectSoundCaptureBuffer *LPDIRECTSOUNDCAPTUREBUFFER;
typedef struct IDirectSoundCapture *LPDIRECTSOUNDCAPTURE;
typedef struct IDirectSoundNotify *LPDIRECTSOUNDNOTIFY;
typedef struct IDirectSound *LPDIRECTSOUND;
struct linger { u_short l_onoff; u_short l_linger; };
struct sockaddr { unsigned short sa_family; char sa_data[14];};
struct sockaddr_in{
 short sin_family;
 unsigned short sin_port;
 IN_ADDR sin_addr;
 char sin_zero[8];};
SOCKET accept(SOCKET s, struct sockaddr *addr, int *addrlen);
int bind(SOCKET s, const struct sockaddr *addr, int namelen);
struct hostent *gethostbyaddr(const char *addr, int len, int type);
struct hostent *gethostbyname(const char *name);
char *inet_ntoa (struct in_addr in);
int recvfrom (SOCKET s, char *buf, int len, int flags, struct sockaddr *from, int *fromlen);
int select (int nfds, fd_set *readfds, fd_set *writefds, fd_set *exceptfds, const struct timeval *timeout);
int sendto (SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int tolen);
typedef struct _SecHandle {
 ULONG_PTR dwLower;
 ULONG_PTR dwUpper;
} SecHandle, * PSecHandle;
typedef SecHandle CredHandle;
typedef PSecHandle PCredHandle;
typedef SecHandle CtxtHandle;
typedef PSecHandle PCtxtHandle;
typedef struct {
 WORD wLength;
 WORD wValueLength;
 WORD wType;
 WCHAR szKey;
 WORD Padding1;
 VS_FIXEDFILEINFO Value;
 WORD Padding2;
 WORD Children;
} VS_VERSIONINFO;
HRESULT RequestContacts(struct ContactsSearchCriteria* pCriteria, IExchangeClientRequest** ppiRequest);
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
typedef struct tagTOOLINFO {
 UINT cbSize;
 UINT uFlags;
 HWND hwnd;
 UINT uId;
 RECT rect;
 HINSTANCE hinst;
 LPTSTR lpszText;
 LPARAM lParam;
} TTTOOLINFO, NEAR* PTOOLINFO, FAR* LPTTTOOLINFO;
struct servent {char FAR* s_name;char FAR* FAR* s_aliases;short s_port;char FAR* s_proto;};
struct timeval {long tv_sec;long tv_usec;};
struct protoent {char FAR* p_name;char FAR* FAR* p_aliases;short p_proto;};
struct S { int *b : 1; // error };
struct A* pA;
struct B { int i; };
B* pB;
void main()
{
 pA++; // error, size of A not known
 pB++;
};
struct S
{
 int mem0;
} *pS;
void main()
{
 pS->mem1 = 0; // error, mem1 is not a member
 pS->mem0 = 0;
};
struct S; union S;
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
typedef struct _CE_DMA_ADAPTER {
 ULONG Size;
 INTERFACE_TYPE InterfaceType;
 ULONG BusNumber;
 ULONG DeviceLocation;
 ULONG DmaAdapter;
 ULONG MaximunSizeOfMappingRegister;
 ULONG AddressBoundary;
 ULONG AddressAlignment;
 PHYSICAL_ADDRESS DmaSystemMemoryRangeStart;
 ULONG DmaSystemMemoryRangeLength;
 CE_REGISTER_ACCESS_WIDTH CeDmaWidth;
 CE_DMA_SPEED DmaSpeed;
 BOOLEAN DemandMode;
 BOOLEAN BusMaster;
 DWORD dwFlags;
} DEVICE_DMA_REQUIRMENT_INFO, *PDEVICE_DMA_REQUIRMENT_INFO;
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
 /* DERIVED member omitted -- type body unprinted: BSTR bstrHelpIndexFile; */
 /* DERIVED member omitted -- type body unprinted: BSTR bstrHelpTopicFile; */
 /* DERIVED member omitted -- type body unprinted: BSTR bstrMainFormCaption; */
 /* DERIVED member omitted -- type body unprinted: BSTR bstrCardFormCaption; */
 /* DERIVED member omitted -- type body unprinted: BSTR bstrParam1; */
 /* DERIVED member omitted -- type body unprinted: BSTR bstrParam2; */
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
 WCHAR m_szDevDrv[AAM_SRC_DEVDRV_LEN];
 WCHAR m_szName[AAM_SRC_NAME_LEN];
 DWORD m_dwMisc;
 DWORD m_dwReserve1;
 DWORD m_dwReserve2;
} AAM_SRCCAP;
typedef struct { // srmi
/* DERIVED member omitted -- type body unprinted: GUID gEngineID; */
TCHAR szMfgName[SRMI_NAMELEN];
TCHAR szProductName[SRMI_NAMELEN];
/* DERIVED member omitted -- type body unprinted: GUID gModeID; */
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
TCHAR szWord;
} SRWORD, *PSRWORD;
typedef struct { // ttsmi
/* DERIVED member omitted -- type body unprinted: GUID gEngineID; */
TCHAR szMfgName[TTSI_NAMELEN];
TCHAR szProductName[TTSI_NAMELEN];
/* DERIVED member omitted -- type body unprinted: GUID gModeID; */
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
BYTE abData;
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
/* DERIVED member omitted -- type body unprinted: GUID gModeID; */
} VCSITEINFO, *PVCSITEINFO;
typedef struct {
 /* DERIVED member omitted -- type body unprinted: CLSID clsidDevice; */
 TCHAR szDeviceName[VIODEVICENAMESIZE];
 DWORD grfModes;
 /* DERIVED member omitted -- type body unprinted: VARIANT vRangeLow; */
 /* DERIVED member omitted -- type body unprinted: VARIANT vRangeHigh; */
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
/* DERIVED member omitted -- type body unprinted: GUID gModeID; */
} VTSITEINFO, *PVTSITEINFO;
int sendto (SOCKET s, const char *buf, int len, int flags, const struct sockaddr *to, int token);
struct COMMAND_MESSAGE_DATA {
 DWORD dwCommand;
 HPACKET hPacketIn;
 HPACKET hPacketOut;
};
typedef struct {
/* DERIVED member omitted -- type body unprinted: CLSID clsidDevice; */
TCHAR szDeviceName[VIODEVICENAMESIZE];
DWORD grfModes;
/* DERIVED member omitted -- type body unprinted: VARIANT vRangeLow; */
/* DERIVED member omitted -- type body unprinted: VARIANT vRangeHigh; */
DWORD dwValueType;
DWORD dwValueUnits;
LONG lExponent;
}
typedef struct {
DWORD cbFixed;
DWORD cbData;
DWORD vdfID;
VARTYPE vdfType;
BYTE vdfData[1];
}
typedef struct {
DWORD cbFixed;
DWORD cExtraFields;
DWORD dwSystem;
DWORD dwSubsystem;
VIODIAGNOSTICFIELD vdiFields[1];
}
typedef struct {
DWORD cDiagnosticInfo;
DWORD cbDiagnosticInfo;
VIODIAGNOSTICINFO vdiItems[1];
}
typedef OLECHAR * BSTR;
#ifdef __cplusplus
typedef CStaticIOWindow CPcmciaIoWindow;
#endif /* __cplusplus */
#ifdef __cplusplus
typedef CStaticMemoryWindow CPcmciaMemWindow;
#endif /* __cplusplus */
#ifdef __cplusplus
typedef CGenericList CSampleList;
#endif /* __cplusplus */
typedef VeryLongClassNameA ClassA;
typedef VeryLongClassNameB ClassB;
typedef VeryLongClassNameC ClassC;
typedef VeryLongClassNameD ClassD;
typedef SecHandle CredHandle;
typedef SecHandle CtxtHandle;
typedef long HRESULT;
typedef int IID;
typedef const ITEMIDLIST * LPCITEMIDLIST;
typedef const TBBUTTON FAR* LPCTBBUTTON;
typedef DDHAL_DDEXEBUFCALLBACKS FAR *LPDDHAL_DDEXEBUFCALLBACKS;
typedef IDirectMusicBuffer *LPDIRECTMUSICBUFFER;
typedef IDirectMusicPort *LPDIRECTMUSICPORT;
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
#ifdef __cplusplus
typedef CArray SingleLine;
#endif /* __cplusplus */
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
typedef HRESULT (CALLBACK *SHOWHTMLDIALOGEXFN)(HWND hwndParent, IMoniker *pMk, DWORD dwDialogFlags, VARIANT *pvarArgIn, TCHAR *pchOptions, VARIANT *pvarArgOut);
#ifdef __cplusplus
typedef HRESULT STDAPICALLTYPE pfnCommandCallback(DWORD dwCmd, const CCommandPacket *pCmdIn, CCommandPacket *pCmdOut);
#endif /* __cplusplus */
typedef PVOID PSECURITY_DESCRIPTOR;
#ifdef __cplusplus
typedef HRESULT STDAPICALLTYPE pfnCommandCallback(DWORD dwCmd,
 const CCommandPacket *pCmdIn,
 CCommandPacket *pCmdOut);
#endif /* __cplusplus */
#endif /* _EXTRADECLARATIONS_H_ */
