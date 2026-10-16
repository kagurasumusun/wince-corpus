/* Sapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 61 declarations, 10 outlines, 0 base types, 0 extra macros, 136 extra decls
 */
#ifndef _SAPI_
#define _SAPI_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SPAUDIOSTATUS  [struct; ce-only] */

/* SPEVENT  [struct; ce-only] */

/* SPEVENTSOURCEINFO  [struct; ce-only] */

/* SPPARSEINFO  [struct; ce-only] */

/* SPPHRASE  [struct; ce-only] */

/* SPRECOGNIZERSTATUS  [struct; ce-only] */

/* SPRECORESULTINFO  [struct; ce-only] */

/* SPRECORESULTTIMES  [struct; ce-only] */

/* SPSERIALIZEDEVENT  [struct; ce-only] */

/* SPSERIALIZEDEVENT64  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* SPAUDIOBUFFERINFO  [struct; ce-only] */
typedef struct SPAUDIOBUFFERINFO{
 ULONG ulMsMinNotification;
 ULONG ulMsBufferSize;
 ULONG ulMsEventBias;
} SPAUDIOBUFFERINFO;

/* SPBINARYGRAMMAR  [struct; ce-only] */
typedef struct SPBINARYGRAMMAR{
 ULONG ulTotalSerializedSize;
} SPBINARYGRAMMAR;

/* SPDATAKEYLOCATION  [enum; ce-only] */
typedef enum SPDATAKEYLOCATION{
 SPDKL_DefaultLocation = 0,
 SPDKL_CurrentUser = 1,
 SPDKL_LocalMachine = 2,
 SPDKL_CurrentConfig = 5
} SPDATAKEYLOCATION;

/* SPLEXICONTYPE  [enum; ce-only] */
typedef enum SPLEXICONTYPE{
 eLEXTYPE_USER = (1L << 0),
 eLEXTYPE_APP = (1L << 1),
 eLEXTYPE_RESERVED1 = (1L << 2),
 eLEXTYPE_RESERVED2 = (1L << 3),
 eLEXTYPE_RESERVED3 = (1L << 4),
 eLEXTYPE_RESERVED4 = (1L << 5),
 eLEXTYPE_RESERVED5 = (1L << 6),
 eLEXTYPE_RESERVED6 = (1L << 7),
 eLEXTYPE_RESERVED7 = (1L << 8),
 eLEXTYPE_RESERVED8 = (1L << 9),
 eLEXTYPE_RESERVED9 = (1L << 10),
 eLEXTYPE_RESERVED10 = (1L << 11),
 eLEXTYPE_PRIVATE1 = (1L << 12),
 eLEXTYPE_PRIVATE2 = (1L << 13),
 eLEXTYPE_PRIVATE3 = (1L << 14),
 eLEXTYPE_PRIVATE4 = (1L << 15),
 eLEXTYPE_PRIVATE5 = (1L << 16),
 eLEXTYPE_PRIVATE6 = (1L << 17),
 eLEXTYPE_PRIVATE7 = (1L << 18),
 eLEXTYPE_PRIVATE8 = (1L << 19),
 eLEXTYPE_PRIVATE9 = (1L << 20),
 eLEXTYPE_PRIVATE10 = (1L << 21),
 eLEXTYPE_PRIVATE11 = (1L << 22),
 eLEXTYPE_PRIVATE12 = (1L << 23),
 eLEXTYPE_PRIVATE13 = (1L << 24),
 eLEXTYPE_PRIVATE14 = (1L << 25),
 eLEXTYPE_PRIVATE15 = (1L << 26),
 eLEXTYPE_PRIVATE16 = (1L << 27),
 eLEXTYPE_PRIVATE17 = (1L << 28),
 eLEXTYPE_PRIVATE18 = (1L << 29),
 eLEXTYPE_PRIVATE19 = (1L << 30),
 eLEXTYPE_PRIVATE20 = (1L << 31)
} SPLEXICONTYPE;

/* SPPHRASEALT  [struct; ce-only] */
typedef struct tagSPPHRASEALT{
 ISpPhraseBuilder* pPhrase;
 ULONG ulStartElementInParent;
 ULONG cElementsInParent;
 ULONG cElementsInAlternate;
 void* pvAltExtra;
 ULONG cbAltExtra;
} SPPHRASEALT;

/* SPPHRASEALTREQUEST  [struct; ce-only] */
typedef struct tagSPPHRASEALTREQUEST{
 ULONG ulStartElement;
 ULONG cElements;
 ULONG ulRequestAltCount;
 void* pvResultExtra;
 ULONG cbResultExtra;
 ISpPhrase* pPhrase;
 ISpRecoContext* pRecoContext;
} SPPHRASEALTREQUEST;

/* SPPHRASEREPLACEMENT  [struct; ce-only] */
typedef struct tagSPPHRASEREPLACEMENT{
 BYTE bDisplayAttributes;
 const WCHAR* pszReplacementText;
 ULONG ulFirstElement;
 ULONG ulCountOfElements;
} SPPHRASEREPLACEMENT;

/* SPPHRASERULE  [struct; ce-only] */
struct tagSPPHRASERULE{
 const WCHAR* pszName;
 ULONG ulId;
 ULONG ulFirstElement;
 ULONG ulCountOfElements;
 const SPPHRASERULE* pNextSibling;
 const SPPHRASERULE* pFirstChild;
 float SREngineConfidence;
 signed char Confidence;
};

/* SPSERIALIZEDPHRASE  [struct; ce-only] */
typedef struct tagSPSERIALIZEDPHRASE{
 ULONG ulSerializedSize;
} SPSERIALIZEDPHRASE;

/* SPSERIALIZEDRESULT  [struct; ce-only] */
typedef struct SPSERIALIZEDRESULT{
 ULONG ulSerializedSize;
} SPSERIALIZEDRESULT;

/* SPTEXTSELECTIONINFO  [struct; ce-only] */
typedef struct tagSPTEXTSELECTIONINFO{
 ULONG ulStartActiveOffset;
 ULONG cchActiveChars;
 ULONG ulStartSelection;
 ULONG cchSelection;
} SPTEXTSELECTIONINFO;

/* SPTMTHREADINFO  [struct; ce-only] */
typedef struct SPTMTHREADINFO{
 long lPoolSize;
 long lPriority;
 ULONG ulConcurrencyLimit;
 ULONG ulMaxQuickAllocThreads;
} SPTMTHREADINFO;

/* SPVACTIONS  [enum; ce-only] */
typedef enum SPVACTIONS{
 SPVA_Speak = 0,
 SPVA_Silence,
 SPVA_Pronounce,
 SPVA_Bookmark,
 SPVA_SpellOut,
 SPVA_Section,
 SPVA_ParseUnknownTag
} SPVACTIONS;

/* SPVCONTEXT  [struct; ce-only] */
typedef [restricted] struct SPVCONTEXT{
 LPCWSTR pCategory;
 LPCWSTR pBefore;
 LPCWSTR pAfter;
} SPVCONTEXT;

/* SPVPITCH  [struct; ce-only] */
typedef struct SPVPITCH{
 long MiddleAdj;
 long RangeAdj;
} SPVPITCH;

/* SPWORDTYPE  [enum; ce-only] */
typedef enum SPWORDTYPE{
 eWORDTYPE_ADDED = (1L << 0),
 eWORDTYPE_DELETED = (1L << 1)
} SPWORDTYPE;

/* SPEVENTENUM  [extra enum] */
typedef enum SPEVENTENUM{ SPEI_UNDEFINED = 0, };

/* SPRECOECOEVENTFLAGS  [extra enum] */
typedef enum SPRECOEVENTFLAGS{ SPREF_AutoPause = (1 << 0) SPREF_Emulated = (1 << 1) } SPRECOECOEVENTFLAGS;

/* SPSTREAMFORMATTYPE  [extra enum] */
typedef enum SPWAVEFORMATTYPE{ SPWF_INPUT, SPWF_SRENGINE } SPSTREAMFORMATTYPE;

/* charConfidence  [extra struct] */
struct SPPHRASEPROPERTY{ constWCHAR* pszName; ULONGulId; constWCHAR* pszValue; VARIANTvValue; ULONGulFirstElement; ULONGulCountOfElements; constSPPHRASEPROPERTY* pNextSibling; constSPPHRASEPROPERTY* pFirstChild; charSREngineConfidence; charConfidence;};

/* signedcharConfidence  [extra struct] */
struct tagSPPHRASERULE{ constWCHAR* pszName; ULONGulId; ULONGulFirstElement; ULONGulCountOfElements; constSPPHRASERULE* pNextSibling; constSPPHRASERULE* pFirstChild; floatSREngineConfidence; signedcharConfidence;};

/* Confidence  [extra struct] */
struct SPPHRASEPROPERTY{
  const WCHAR* pszName;
  ULONG ulId;
  const WCHAR* pszValue;
  VARIANT vValue;
  ULONG ulFirstElement;
  ULONG ulCountOfElements;
  const SPPHRASEPROPERTY* pNextSibling;
  const SPPHRASEPROPERTY* pFirstChild;
  char SREngineConfidence;
  char Confidence;
};

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
HRESULT AddElements( ULONG cElements, const SPPHRASEELEMENT* pElement );
HRESULT AddEvents( const SPEVENT* pEventArray, ULONG ulCount );
HRESULT AddLexicon( ISpLexicon* pAddLexicon, DWORD dwFlags );
HRESULT AddReplacements( ULONG cReplacements, const SPPHRASEREPLACEMENT* pReplacements );
HRESULT AppendTranscript( const WCHAR* pszTranscript );
HRESULT CreateKey( const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey );
HRESULT CreateRecoContext( ISpRecoContext** ppNewContext );
HRESULT DeleteKey( const WCHAR* pszSubKeyName );
HRESULT DeleteValue( const WCHAR* pszValueName );
HRESULT DeserializeResult( const SPSERIALIZEDRESULT* pSerializedResult, ISpRecoResult** ppResult );
HRESULT Discard( DWORD dwValueTypes );
HRESULT EmulateRecognition( ISpPhrase* pPhrase );
HRESULT EnumKeys( ULONG Index, WCHAR** ppszSubKeyName );
HRESULT EnumTokens( const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, IEnumSpObjectTokens** ppEnum );
HRESULT EnumValues( ULONG Index, WCHAR** ppszValueName );
HANDLE EventHandle(void);
HRESULT GetAlertBoundary( SPEVENTENUM* peBoundary );
HRESULT GetAltInfo( ISpPhrase** ppParent, ULONG* pulStartElementInParent, ULONG* pcElementsInParent, ULONG* pcElementsInAlt );
HRESULT GetAlternates( ULONG ulStartElement, ULONG cElements, ULONG ulRequestCount, ISpPhraseAlt** ppPhrases, ULONG* pcPhrasesReturned );
HRESULT GetAudio( ULONG ulStartElement, ULONG cElements, ISpStreamFormat** ppStream );
HRESULT GetBaseStream( ISpStreamFormat** ppStream );
HRESULT GetBufferInfo( SPAUDIOBUFFERINFO* pBuffInfo );
HRESULT GetBufferNotifySize( ULONG* pcbSize );
HRESULT GetContextState( SPCONTEXTSTATE* peContextState );
HRESULT GetDWORD( const WCHAR* pszKeyName, DWORD* pdwValue );
HRESULT GetDataKey( SPDATAKEYLOCATION spdkl, ISpDataKey** ppDataKey );
HRESULT GetDefaultTokenId( const WCHAR** ppszCoMemTokenId );
HRESULT GetDeviceId( UINT* puDeviceId );
HRESULT GetEvents( ULONG ulCount, SPEVENT* pEventArray, ULONG* pulFetched );
HRESULT GetGeneration( DWORD* pdwGeneration );
HRESULT GetGenerationChange( DWORD dwFlags, DWORD* pdwGeneration, SPWORDLIST* pWordList );
HRESULT GetGrammarState( SPGRAMMARSTATE* peGrammarState );
HRESULT GetId( WCHAR** ppszCoMemCategoryId );
HRESULT GetInputObjectToken( ISpObjectToken** ppToken );
HRESULT GetInputStream( ISpStreamFormat** ppStream );
HRESULT GetLineId( UINT* puLineId );
HRESULT GetMMHandle( void** pHandle );
HRESULT GetMaxAlternates( ULONG* pcMaxAlternates );
HANDLE GetNotifyEventHandle(void);
HRESULT GetOutputObjectToken( ISpObjectToken** ppObjectToken );
HRESULT GetOutputStream( ISpStreamFormat** ppStream );
HRESULT GetPhrase( SPPHRASE** ppCoMemPhrase );
HRESULT GetRecoContext( ISpRecoContext** ppRecoCtxt );
HRESULT GetRecoProfile( ISpObjectToken** ppToken );
HRESULT GetRecoState( SPRECOSTATE* pState );
HRESULT GetRecognizer( ISpRecognizer** ppRecognizer );
HRESULT GetResultTimes( SPRECORESULTTIMES* pTimes );
HRESULT GetSerializedPhrase( SPSERIALIZEDPHRASE** ppCoMemPhrase );
HRESULT GetStringValue( const WCHAR* pszValueName, WCHAR** ppszValue );
HRESULT GetSyncSpeakTimeout( ULONG* pmsTimeout );
HRESULT GetText( ULONG ulStart, ULONG ulCount, BOOL fUseTextReplacements, WCHAR** ppszCoMemText, BYTE* pbDisplayAttributes );
HRESULT GetTranscript( WCHAR** ppszTranscript );
HRESULT GetVoice( ISpVoice** ppVoice );
HRESULT GetWords( DWORD dwFlags, DWORD* pdwGeneration, DWORD* pdwCookie, SPWORDLIST* pWordList );
HRESULT InitFromDataKey( const WCHAR* pszCategoryId, const WCHAR* pszTokenId, ISpDataKey* pDataKey );
HRESULT InitFromPhrase( const SPPHRASE* pSrcPhrase );
HRESULT InitFromSerializedPhrase( const SPSERIALIZEDPHRASE* pPhrase );
HRESULT InitSpNotifyCallback( ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam );
HRESULT InitWin32Event( HANDLE hEvent, BOOL fCloseHandleOnRelease );
HRESULT InitWindowMessage( HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam );
HRESULT IsPronounceable( const WCHAR* pszWord, SPWORDPRONOUNCEABLE* pfPronounceable );
HRESULT IsSharedInstance(void);
HRESULT LoadCmdFromFile( const WCHAR* pszFileName, SPLOADOPTIONS Options );
HRESULT LoadCmdFromMemory( const SPBINARYGRAMMAR* pBinaryData, SPLOADOPTIONS Options );
HRESULT LoadCmdFromResource( HMODULE hModule, const WCHAR* pszResourceName, const WCHAR* pszResourceType, WORD wLanguage, SPLOADOPTIONS Options );
HRESULT LoadDictation( const WCHAR* pszTopicName, SPLOADOPTIONS Options );
HRESULT MatchesAttributes( const WCHAR* pszAttributes, BOOL* pfMatches );
HRESULT NotifyCallback( WPARAM wParam, LPARAM lParam );
HRESULT OpenKey( const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey );
HRESULT ResetSeekPosition(void);
HRESULT SaveCmd( IStream* pSaveStream, WCHAR** ppCoMemErrorText );
HRESULT Serialize( SPSERIALIZEDRESULT** ppCoMemSerializedResult );
HRESULT SetAdaptationData( const WCHAR* pAdaptationData, const ULONG cch );
HRESULT SetAlertBoundary( SPEVENTENUM eBoundary );
HRESULT SetBaseStream( ISpStreamFormat* pStream, BOOL fSetFormatToBaseStreamFormat, BOOL fWriteToBaseStream );
HRESULT SetBufferInfo( const SPAUDIOBUFFERINFO* pBuffInfo );
HRESULT SetBufferNotifySize( ULONG cbSize );
HRESULT SetContextState( SPCONTEXTSTATE eContextState );
HRESULT SetDWORD( const WCHAR* pszKeyName DWORD dwValue );
HRESULT SetDefaultTokenId( const WCHAR* pszTokenId );
HRESULT SetDeviceId( UINT uDeviceId );
HRESULT SetDictationState( SPRULESTATE NewState );
HRESULT SetGrammarState( SPGRAMMARSTATE eGrammarState );
HRESULT SetId( const WCHAR* pszCategoryId, BOOL fCreateIfNotExist );
HRESULT SetKey( HKEY hkey, BOOL fReadOnly );
HRESULT SetLineId( UINT uLineId );
HRESULT SetMaxAlternates( ULONG cAlternates );
HRESULT SetNotifyCallbackInterface( ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam );
HRESULT SetNotifySink( ISpNotifySink* pNotifySink );
HRESULT SetNotifyWin32Event(void);
HRESULT SetNotifyWindowMessage( HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam );
HRESULT SetObjectToken( ISpObjectToken* pToken );
HRESULT SetRecoProfile( ISpObjectToken* pToken );
HRESULT SetRecoState( SPRECOSTATE NewState );
HRESULT SetRecognizer( ISpObjectToken* pEngineToken );
HRESULT SetRuleIdState( ULONG ulRuleId, SPRULESTATE NewState );
HRESULT SetRuleState( const WCHAR* pszName, void* pReserved, SPRULESTATE NewState );
HRESULT SetStringValue( const WCHAR* pszValueName, const WCHAR* pszValue );
HRESULT SetSyncSpeakTimeout( ULONG msTimeout );
HRESULT SetTextSelection( const SPTEXTSELECTIONINFO* pInfo );
HRESULT SetVoice( ISpVoice* pVoice, BOOL fAllowFormatChanges );
HRESULT SetWordSequenceData( const WCHAR* pText, ULONG cchText, const SPTEXTSELECTIONINFO* pInfo );
HRESULT SpeakAudio( ULONG ulStartElement, ULONG cElements, DWORD dwFlags, ULONG* pulStreamNumber );
HANDLE SpeakCompleteEvent(void);
HRESULT SpeakStream( IStream* pStream, DWORD dwFlags, ULONG* pulStreamNumber );
HRESULT UnloadDictation(void);
HRESULT WaitUntilDone( ULONG msTimeout );

#endif /* _SAPI_ */
