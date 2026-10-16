/* Sapiddk.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 7 declarations, 0 outlines, 0 base types, 0 extra macros, 65 extra decls
 */
#ifndef _SAPIDDK_
#define _SAPIDDK_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddTokens( ULONG cTokens, ISpObjectToken** pToken );
HRESULT AddTokensFromDataKey( ISpDataKey* pDataKey, const WCHAR* pszSubKey, const WCHAR* pszCategoryId );
HRESULT AddTokensFromTokenEnum( IEnumSpObjectTokens* pTokenEnum );
HRESULT CallEngine( VOID* pCallFrame, ULONG ulCallFrameSize );
HRESULT CallEngineEx( const void* pInFrame, ULONG ulInFrameSize, void** ppCoMemOutFrame, ULONG* pulOutFrameSize );
HRESULT CompleteSkip( long ulNumSkipped );
HRESULT CreateReoccurringTask( ISpTask* pTask, void* pvTaskData, HANDLE hCompEvent, ISpNotifySink** ppTaskCtrl );
HRESULT DataAvailable( ULONG* pcb );
DWORD GetActions(void);
HRESULT GetPropertyNum( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, LONG* lValue );
HRESULT GetPropertyString( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, WCHAR** ppCoMemValue );
HRESULT GetResourceValue( const WCHAR* pszResourceName, WCHAR** ppCoMemResource );
HRESULT GetSkipInfo( SPVSKIPTYPE* peType, long* plNumItems );
HRESULT ITNPhrase( ISpPhraseBuilder* pPhrase );
HRESULT InitGrammar( const WCHAR* pszGrammarName, const void** pvGrammarData );
HRESULT Interpret( ISpPhraseBuilder* pPhrase, const ULONG ulFirstElement, const ULONG ulCountOfElements, ISpCFGInterpreterSite* pSite );
HRESULT LoadITNGrammar( WCHAR* pszCLSID );
HRESULT LoadSLM( void* pvEngineGrammar, const WCHAR* pszTopicName );
HRESULT OnDeleteGrammar( void* pvEngineGrammar );
HRESULT OnDeleteRecoContext( void* pvEngineContext );
HRESULT PrivateCall( void* pvEngineContext, PVOID* pCallFrame, ULONG ulCallFrameSize );
HRESULT PrivateCallEx( void* pvEngineContext, const void* pInCallFrame, ULONG ulInCallFrameSize, void** ppvCoMemResponse, ULONG* pulResponseSize );
HRESULT QueueTask( ISpTask pTask, void* pvTaskData, HANDLE hCompEvent, DWORD** pdwGroupId, DWORD** pTaskID );
HRESULT SetAttribs( const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs );
HRESULT SetPropertyNum( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, LONG lValue );
HRESULT SetPropertyString( SPPROPSRC eSrc, void* pvSrcObj, const WCHAR* pName, const WCHAR* pValue );
HRESULT SetSaveObjects( IStream* pStream, ISpErrorLog* pErrorLog );
HRESULT SetSite( ISpSREngineSite* pSite );
HRESULT StartThread( DWORD dwFlags, HWND* phwnd );
HRESULT TerminateTask( DWORD dwTaskId, ULONG ulWaitPeriod );
HRESULT TerminateTaskGroup( DWORD dwGroupId, ULONG ulWaitPeriod );
HANDLE ThreadCompleteEvent(void);
HANDLE ThreadHandle(void);
DWORD ThreadId(void);
HRESULT UnloadProprietaryGrammar( void* pvEngineGrammar );
HRESULT UnloadSLM( void* pvEngineGrammar );
HWND WindowHandle(void);

#endif /* _SAPIDDK_ */
