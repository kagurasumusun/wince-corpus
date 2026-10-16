/* Sapiddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 7 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 68 extra decls
 */
#ifndef _SAPIDDK_
#define _SAPIDDK_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SPRIO_NONE 0
#define SPRT_CFG 0
#define SPRT_PROPRIETARY 2
#define SPRT_SLM 1
#define SPVES_CONTINUE 0
#define SPWIO_NONE 0
#define SPWIO_WANT_TEXT 1

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddEvent( const SPEVENT* pEvent, SPRECOCONTEXTHANDLE hContext );
HRESULT AddTextReplacement( SPPHRASEREPLACEMENT* pReplace );
HRESULT AddTokens( ULONG cTokens, ISpObjectToken** pToken );
HRESULT AddTokensFromDataKey( ISpDataKey* pDataKey, const WCHAR* pszSubKey, const WCHAR* pszCategoryId );
HRESULT AddTokensFromTokenEnum( IEnumSpObjectTokens* pTokenEnum );
HRESULT CallEngine( VOID* pCallFrame, ULONG ulCallFrameSize );
HRESULT CallEngineEx( const void* pInFrame, ULONG ulInFrameSize, void** ppCoMemOutFrame, ULONG* pulOutFrameSize );
HRESULT CompileStream( IStream* pSource, IStream* pDest, IStream* pHeader, IUnknown* pReserved, ISpErrorLog* pErrorLog, DWORD dwFlags );
HRESULT CompleteSkip( long ulNumSkipped );
HRESULT CreateReoccurringTask( ISpTask* pTask, void* pvTaskData, HANDLE hCompEvent, ISpNotifySink** ppTaskCtrl );
HRESULT DataAvailable( ULONG* pcb );
DWORD GetActions(void);
HRESULT GetContextMaxAlternates( SPRECOCONTEXTHANDLE hContext, ULONG* pulNumAlts );
HRESULT GetInputAudioFormat( const GUID* pguidSourceFormatId, const WAVEFORMATEX* pSourceWaveFormatEx, GUID* pguidDesiredFormatId, WAVEFORMATEX** ppCoMemDesiredWaveFormatEx, );
HRESULT GetOutputFormat( const GUID* pTargetFmtId, const WAVEFORMATEX* pTargetWaveFormatEx, GUID* pOutputFormatId, WAVEFORMATEX** ppCoMemOutputWaveFormatEx );
HRESULT GetPropertyNum( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, LONG* lValue );
HRESULT GetPropertyString( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, WCHAR** ppCoMemValue );
HRESULT GetResource( SPRULEHANDLE hRule, WCHAR* pszResourceName, WCHAR** ppCoMemResource );
HRESULT GetResourceValue( const WCHAR* pszResourceName, WCHAR** ppCoMemResource );
HRESULT GetRuleInfo( SPRULEENTRY* pRuleEntry, SPRULEINFOOPT Options );
HRESULT GetSkipInfo( SPVSKIPTYPE* peType, long* plNumItems );
HRESULT GetStateInfo( SPSTATEHANDLE hState, SPSTATEINFO* pStateInfo );
HRESULT GetThreadPoolInfo( SPTMTHREADINFO* pPoolInfo );
HRESULT GetTransitionProperty( SPTRANSITIONID ID, SPTRANSITIONPROPERTY** ppCoMemProperty );
HRESULT GetWordInfo( SPWORDENTRY* pWordEntry, SPWORDINFOOPT Options );
HRESULT ITNPhrase( ISpPhraseBuilder* pPhrase );
HRESULT InitFromBinaryGrammar( const SPBINARYGRAMMAR* pBinaryData );
HRESULT InitGrammar( const WCHAR* pszGrammarName, const void** pvGrammarData );
HRESULT Interpret( ISpPhraseBuilder* pPhrase, const ULONG ulFirstElement, const ULONG ulCountOfElements, ISpCFGInterpreterSite* pSite );
HRESULT IsAlternate( SPRULEHANDLE hPriRule, SPRULEHANDLE hAltRule );
HRESULT LoadITNGrammar( WCHAR* pszCLSID );
HRESULT LoadProprietaryGrammar( void* pvEngineGrammar, REFGUID rguidParam, const WCHAR* pszStringParam, const void* pvDataParam, ULONG ulDataSize, SPLOADOPTIONS Options );
HRESULT LoadSLM( void* pvEngineGrammar, const WCHAR* pszTopicName );
HRESULT OnCreateGrammar( void* pvEngineRecoContext, SPGRAMMARHANDLE hSAPIGrammar, void** ppvEngineGrammar );
HRESULT OnCreateRecoContext( SPRECOCONTEXTHANDLE hSAPIRecoContext, void** ppvEngineContext );
HRESULT OnDeleteGrammar( void* pvEngineGrammar );
HRESULT OnDeleteRecoContext( void* pvEngineContext );
HRESULT ParseFromTransitions( const SPPARSEINFO* pParseInfo, ISpPhraseBuilder** ppPhrase );
HRESULT PrivateCall( void* pvEngineContext, PVOID* pCallFrame, ULONG ulCallFrameSize );
HRESULT PrivateCallEx( void* pvEngineContext, const void* pInCallFrame, ULONG ulInCallFrameSize, void** ppvCoMemResponse, ULONG* pulResponseSize );
HRESULT QueueTask( ISpTask pTask, void* pvTaskData, HANDLE hCompEvent, DWORD** pdwGroupId, DWORD** pTaskID );
HRESULT Recognition( SPRECORESULTINFO* pResultInfo );
HRESULT RecognizeStream( REFGUID rguidFmtId, const WAVEFORMATEX* pWaveFormatEx, HANDLE hRequestSync, HANDLE hDataAvailable, HANDLE hExit, BOOL fNewAudioStream, BOOL fRealTimeAudio, ISpObjectToken* pAudioObjectToken );
HRESULT RuleNotify( SPCFGNOTIFY Action, ULONG cRules, const SPRULEENTRY* pRules );
HRESULT SetAttribs( const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs );
HRESULT SetPropertyNum( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, LONG lValue );
HRESULT SetPropertyString( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, const WCHAR* pValue );
HRESULT SetProprietaryRuleIdState( void* pvEngineGrammar, DWORD dwRuleId, SPRULESTATE NewState );
HRESULT SetProprietaryRuleState( void* pvEngineGrammar, const WCHAR* pszName, const WCHAR* pszValue, SPRULESTATE NewState, ULONG* pcRulesChanged );
HRESULT SetRuleClientContext( SPRULEHANDLE hRule, void* pvClientContext );
HRESULT SetSLMState( void* pvEngineGrammar, SPRULESTATE NewState );
HRESULT SetSaveObjects( IStream* pStream, ISpErrorLog* pErrorLog );
HRESULT SetSite( ISpSREngineSite* pSite );
HRESULT SetThreadPoolInfo( const SPTMTHREADINFO* pPoolInfo );
HRESULT SetWordClientContext( SPWORDHANDLE hWord, void* pvClientContext );
HRESULT Speak( DWORD dwSpeakFlags, REFGUID rguidFormatId, const WaveFormatEx* pWaveFormatEx, const SPVTEXTFRAG* pTextFragList, ISpTTSEngineSite* pOutputSite );
HRESULT StartThread( DWORD dwFlags, HWND* phwnd );
HRESULT TerminateTask( DWORD dwTaskId, ULONG ulWaitPeriod );
HRESULT TerminateTaskGroup( DWORD dwGroupId, ULONG ulWaitPeriod );
HANDLE ThreadCompleteEvent(void);
HANDLE ThreadHandle(void);
DWORD ThreadId(void);
HRESULT UnloadProprietaryGrammar( void* pvEngineGrammar );
HRESULT UnloadSLM( void* pvEngineGrammar );
HWND WindowHandle(void);
HRESULT WordNotify( SPCFGNOTIFY Action, ULONG cWords, const SPWORDENTRY* pWords );

#endif /* _SAPIDDK_ */
