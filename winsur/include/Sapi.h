/* Sapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 54 constants, 62 declarations, 10 outlines, 0 base types, 0 extra macros, 141 extra decls
 */
#ifndef _SAPI_
#define _SAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define SP_VISEME_0 0
#define SPAF_ALL 0x0F
#define SPAF_CONSUME_LEADING_SPACES 0x08
#define SPAF_ONE_TRAILING_SPACE 0x02
#define SPAF_TWO_TRAILING_SPACES 0x04
#define SPAO_NONE 0
#define SPBO_NONE 0
#define SPBO_PAUSE 1
#define SPCS_DISABLED 0
#define SPCS_ENABLED 1
#define SPDF_ALL 0x000000FF
#define SPDF_ALTERNATES 0x00000080
#define SPDF_AUDIO 0x00000040
#define SPDF_DISPLAYTEXT 0x00000008
#define SPDF_LEXICALFORM 0x00000010
#define SPDF_PRONUNCIATION 0x00000020
#define SPDF_PROPERTY 0x00000001
#define SPDF_REPLACEMENT 0x00000002
#define SPDF_RULE 0x00000004
#define SPDKL_CurrentConfig 5
#define SPDKL_CurrentUser 1
#define SPDKL_DefaultLocation 0
#define SPDKL_LocalMachine 2
#define SPESF_NONE 0
#define SPET_LPARAM_IS_UNDEFINED 0
#define SPF_DEFAULT 0
#define SPGS_DISABLED 1
#define SPGS_ENABLED 0
#define SPGS_EXCLUSIVE 3
#define SPINTERFERENCE_NONE 0
#define SPLO_DYNAMIC 1
#define SPLO_STATIC 0
#define SPMAX_RATE 10
#define SPMAX_VOLUME 100
#define SPMIN_RATE -10
#define SPMIN_VOLUME 0
#define SPPR_ALL_ELEMENTS -1
#define SPPS_Function 0x4000
#define SPPS_Interjection 0x5000
#define SPPS_Modifier 0x3000
#define SPPS_NotOverriden -1
#define SPPS_Noun 0x1000
#define SPPS_Unknown 0
#define SPPS_Verb 0x2000
#define SPRS_ACTIVE 1
#define SPRS_ACTIVE_WITH_AUTO_PAUSE 3
#define SPRS_INACTIVE 0
#define SPSF_Default -1
#define SPSF_NoAssignedFormat 0
#define SPVA_Speak 0
#define SPVPRI_NORMAL 0
#define SPWP_KNOWN_WORD_PRONOUNCEABLE 2
#define SPWP_UNKNOWN_WORD_PRONOUNCEABLE 1
#define SPWP_UNKNOWN_WORD_UNPRONOUNCEABLE 0

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

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* SPFEI  [function; ce-only; CE 4.0..699] */
SPFEI(
 void* SPEI_ord
);
#endif /* _WIN32_WCE */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* ISpGrammarBuilder  [function; ce-only; CE 5.0..599; heuristic-prefix] */
// HRESULT checking code omitted. 
SPSTATEHANDLE hStateTravel; 
hr = pGrammarBuilder->GetRule(L"Travel", 
 0, 
 SPRAF_TopLevel | SPRAF_Active, 
 TRUE, 
 &hStateTravel); 
// Approach 1: List all possible phrases. 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, NULL, 
 L"fly to Seattle", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, NULL, 
 L"fly to New York", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, NULL, 
 L"fly to Washington DC", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, NULL, 
 L"drive to Washington DC", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, NULL, 
 L"drive to New York", 
 L" ", SPWT_LEXICAL, 1, NULL); 
// This is the most intuitive approach, and it does not 
// sacrifice efficiency because the grammar builder will 
// merge shared subphrases when possible. 
// Approach 2: Construct the directed-graph using intermediate states. 
SPSTATEHANDLE hStateTravel1; 
hr = pGrammarBuilder->CreateNewState(hStateTravel, &hStateTravel1); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, hStateTravel1, 
 L"fly to", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, hStateTravel1, 
 L"drive to", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel, hStateTravel1, 
 L"take train to", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel1, NULL, 
 L"Seattle", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel1, NULL, 
 L"New York", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateTravel1, NULL, 
 L"Washington DC", 
 L" ", SPWT_LEXICAL, 1, NULL); 
// This approach gives you more control of the grammar layout, and can be 
// easier to implement when you have some combinations. 
// Approach 3: Using subrules. 
SPSTATEHANDLE hStateMethod; 
SPSTATEHANDLE hStateDest; 
hr = pGrammarBuilder->GetRule(L"Method", 0, 0, TRUE, &hStateMethod); 
hr = pGrammarBuilder->GetRule(L"Dest", 0, SPRAF_Dynamic, TRUE, &hStateDest); 
// Dynamic rules can be modified after commit and reload. 
SPSTATEHANDLE hStateTravel2; 
hr = pGrammarBuilder->CreateNewState(hStateTravel, &hStateTravel2); 
hr = pGrammarBuilder->AddRuleTransition(hStateTravel, hStateTravel2, 
 hStateMethod, 1, NULL); 
hr = pGrammarBuilder->AddRuleTransition(hStateTravel2, NULL, 
 hStateDest, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateMethod, NULL, 
 L"fly to", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateMethod, NULL, 
 L"drive to", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateMethod, NULL, 
 L"take train to", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateDest, NULL, 
 L"Seattle", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateDest, NULL, 
 L"New York", 
 L" ", SPWT_LEXICAL, 1, NULL); 
hr = pGrammarBuilder->AddWordTransition(hStateDest, NULL, 
 L"Washington DC", 
 L" ", SPWT_LEXICAL, 1, NULL); 
// This approach lets you structure the grammars and is useful 
// when building large grammars. 
// Must commit before using the grammar. 
hr = pGrammarBuilder->Commit(0);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum SPEVENTENUM{ SPEI_UNDEFINED = 0, };
typedef enum SPRECOEVENTFLAGS{ SPREF_AutoPause = (1 << 0) SPREF_Emulated = (1 << 1) } SPRECOECOEVENTFLAGS;
typedef enum SPWAVEFORMATTYPE{ SPWF_INPUT, SPWF_SRENGINE } SPSTREAMFORMATTYPE;

/* struct */
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
struct SPPHRASEPROPERTY{ constWCHAR* pszName; ULONGulId; constWCHAR* pszValue; VARIANTvValue; ULONGulFirstElement; ULONGulCountOfElements; constSPPHRASEPROPERTY* pNextSibling; constSPPHRASEPROPERTY* pFirstChild; charSREngineConfidence; charConfidence;};
struct tagSPPHRASERULE{ constWCHAR* pszName; ULONGulId; ULONGulFirstElement; ULONGulCountOfElements; constSPPHRASERULE* pNextSibling; constSPPHRASERULE* pFirstChild; floatSREngineConfidence; signedcharConfidence;};

/* function */
HRESULT AddElements( ULONG cElements, const SPPHRASEELEMENT* pElement );
HRESULT AddEvents( const SPEVENT* pEventArray, ULONG ulCount );
HRESULT AddLexicon( ISpLexicon* pAddLexicon, DWORD dwFlags );
HRESULT AddPronunciation( const WCHAR* pszWord, LANGID LangID, SPPARTOFSPEECH ePartOfSpeech, const SPPHONEID* pszPronunciation );
HRESULT AddProperties( const SPPHRASEPROPERTYHANDLE hParent, const SPPHRASEPROPERTY* pProperty, SPPHRASEPROPERTYHANDLE* phNewProperty );
HRESULT AddReplacements( ULONG cReplacements, const SPPHRASEREPLACEMENT* pReplacements );
HRESULT AddResource( SPSTATEHANDLE hRuleState, const WCHAR* pszResourceName, const WCHAR* pszResourceValue );
HRESULT AddRuleTransition( SPSTATEHANDLE hFromState, SPSTATEHANDLE hToState, SPSTATEHANDLE hRule, float Weight, const SPPROPERTYINFO* pPropInfo );
HRESULT AddRules( const SPPHRASERULEHANDLE hParent, const SPPHRASERULE* pRule, SPPHRASERULEHANDLE* phNewRule );
HRESULT AddWordTransition( SPSTATEHANDLE hFromState, SPSTATEHANDLE hToState, const WCHAR* psz, const WCHAR* pszSeperators, SPGRAMMARWORDTYPE eWordType, float Weight, const SPPROPERTYINFO* pPropInfo );
HRESULT AppendTranscript( const WCHAR* pszTranscript );
HRESULT ClearRule( SPSTATEHANDLE hState );
HRESULT CreateKey( const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey );
HRESULT CreateNewState( SPSTATEHANDLE hState, SPSTATEHANDLE* phState );
HRESULT CreateRecoContext( ISpRecoContext** ppNewContext );
HRESULT DeleteKey( const WCHAR* pszSubKeyName );
HRESULT DeleteValue( const WCHAR* pszValueName );
HRESULT DeserializeResult( const SPSERIALIZEDRESULT* pSerializedResult, ISpRecoResult** ppResult );
HRESULT Discard( DWORD dwValueTypes );
HRESULT DisplayUI( HWND hwndParent, const WCHAR* pszTitle, const WCHAR pszTypeOfUI, void* pvExtraData, ULONG cbExtraData, IUnknown* punkObject );
HRESULT EmulateRecognition( ISpPhrase* pPhrase );
HRESULT EnumKeys( ULONG Index, WCHAR** ppszSubKeyName );
HRESULT EnumTokens( const WCHAR* pszReqAttribs, const WCHAR* pszOptAttribs, IEnumSpObjectTokens** ppEnum );
HRESULT EnumValues( ULONG Index, WCHAR** ppszValueName );
HANDLE EventHandle(void);
HRESULT GetAlertBoundary( SPEVENTENUM* peBoundary );
HRESULT GetAltInfo( ISpPhrase** ppParent, ULONG* pulStartElementInParent, ULONG* pcElementsInParent, ULONG* pcElementsInAlt );
HRESULT GetAlternates( ULONG ulStartElement, ULONG cElements, ULONG ulRequestCount, ISpPhraseAlt** ppPhrases, ULONG* pcPhrasesReturned );
HRESULT GetAudio( ULONG ulStartElement, ULONG cElements, ISpStreamFormat** ppStream );
HRESULT GetAudioOptions( SPAUDIOOPTIONS* Options, GUID* pAudioFormatId, WAVEFORMATEX** ppCoMemWFE );
HRESULT GetBaseStream( ISpStreamFormat** ppStream );
HRESULT GetBufferInfo( SPAUDIOBUFFERINFO* pBuffInfo );
HRESULT GetBufferNotifySize( ULONG* pcbSize );
HRESULT GetContextState( SPCONTEXTSTATE* peContextState );
HRESULT GetDWORD( const WCHAR* pszKeyName, DWORD* pdwValue );
HRESULT GetDataKey( SPDATAKEYLOCATION spdkl, ISpDataKey** ppDataKey );
HRESULT GetDefaultFormat( GUID* pFormatId, WAVEFORMATEX** ppCoMemWaveFormatEx );
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
HRESULT GetPronunciations( const WCHAR* pszWord, LANGID LangID, DWORD dwFlags, SPWORDPRONUNCIATIONLIST* pWordPronunciationList );
HRESULT GetRecoContext( ISpRecoContext** ppRecoCtxt );
HRESULT GetRecoProfile( ISpObjectToken** ppToken );
HRESULT GetRecoState( SPRECOSTATE* pState );
HRESULT GetRecognizer( ISpRecognizer** ppRecognizer );
HRESULT GetResultTimes( SPRECORESULTTIMES* pTimes );
HRESULT GetRule( const WCHAR* pszRuleName, DWORD dwRuleId, DWORD dwAttributes, BOOL fCreateIfNotExist, SPSTATEHANDLE* phInitialState );
HRESULT GetSerializedPhrase( SPSERIALIZEDPHRASE** ppCoMemPhrase );
HRESULT GetStorageFileName( REFCLSID clsidCaller, const WCHAR* pszValueName, const WCHAR* pszFileNameSpecifier, ULONG nFolder, WCHAR** ppszFilePath );
HRESULT GetStringValue( const WCHAR* pszValueName, WCHAR** ppszValue );
HRESULT GetSyncSpeakTimeout( ULONG* pmsTimeout );
HRESULT GetText( ULONG ulStart, ULONG ulCount, BOOL fUseTextReplacements, WCHAR** ppszCoMemText, BYTE* pbDisplayAttributes );
HRESULT GetTranscript( WCHAR** ppszTranscript );
HRESULT GetVoice( ISpVoice** ppVoice );
HRESULT GetWords( DWORD dwFlags, DWORD* pdwGeneration, DWORD* pdwCookie, SPWORDLIST* pWordList );
HRESULT IdToPhone( const SPPHONEID* pId, WCHAR* pszPhone );
HRESULT InitCallback( SPNOTIFYCALLBACK* pfnCallback, WPARAM wParam, LPARAM lParam );
HRESULT InitFromDataKey( const WCHAR* pszCategoryId, const WCHAR* pszTokenId, ISpDataKey* pDataKey );
HRESULT InitFromPhrase( const SPPHRASE* pSrcPhrase );
HRESULT InitFromSerializedPhrase( const SPSERIALIZEDPHRASE* pPhrase );
HRESULT InitSpNotifyCallback( ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam );
HRESULT InitWin32Event( HANDLE hEvent, BOOL fCloseHandleOnRelease );
HRESULT InitWindowMessage( HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam );
HRESULT IsPronounceable( const WCHAR* pszWord, SPWORDPRONOUNCEABLE* pfPronounceable );
HRESULT IsSharedInstance(void);
HRESULT IsUISupported( const WCHAR* pszTypeOfUI, void* pvExtraData, ULONG cbExtraData, IUnknown* punkObject, BOOL* pfSupported );
HRESULT LoadCmdFromFile( const WCHAR* pszFileName, SPLOADOPTIONS Options );
HRESULT LoadCmdFromMemory( const SPBINARYGRAMMAR* pBinaryData, SPLOADOPTIONS Options );
HRESULT LoadCmdFromProprietaryGrammar( REFGUID rguidParam, const WCHAR* pszStringParam, const void* pvDataParam, ULONG cbDataSize, SPLOADOPTIONS Options );
HRESULT LoadCmdFromResource( HMODULE hModule, const WCHAR* pszResourceName, const WCHAR* pszResourceType, WORD wLanguage, SPLOADOPTIONS Options );
HRESULT LoadDictation( const WCHAR* pszTopicName, SPLOADOPTIONS Options );
HRESULT MatchesAttributes( const WCHAR* pszAttributes, BOOL* pfMatches );
HRESULT NotifyCallback( WPARAM wParam, LPARAM lParam );
HRESULT OpenKey( const WCHAR* pszSubKeyName, ISpDataKey** ppSubKey );
HRESULT PhoneToId( const WCHAR* pszPhone, SPPHONEID* pId );
HRESULT RemovePronunciation( const WCHAR* pszWord, LANGID LangID, SPPARTOFSPEECH ePartOfSpeech, void* pvReserved );
HRESULT RemoveStorageFileName( REFCLSID clsidCaller, const WCHAR* pszKeyName, BOOL fDeleteFile );
HRESULT ResetGrammar( LANGID NewLanguage );
HRESULT ResetSeekPosition(void);
HRESULT SaveCmd( IStream* pSaveStream, WCHAR** ppCoMemErrorText );
HRESULT ScaleAudio( const GUID* pAudioFormatId, const WAVEFORMATEX* pWaveFormatEx );
HRESULT Serialize( SPSERIALIZEDRESULT** ppCoMemSerializedResult );
HRESULT SetAdaptationData( const WCHAR* pAdaptationData, const ULONG cch );
HRESULT SetAlertBoundary( SPEVENTENUM eBoundary );
HRESULT SetAudioOptions( SPAUDIOOPTIONS Options, const GUID* pAudioFormatId, const WAVEFORMATEX* pWaveFormatEx );
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
HRESULT SetInput( IUnknown* pUnkInput, BOOL fAllowFormatChanges );
HRESULT SetKey( HKEY hkey, BOOL fReadOnly );
HRESULT SetLineId( UINT uLineId );
HRESULT SetMaxAlternates( ULONG cAlternates );
HRESULT SetNotifyCallbackFunction( SPNOTIFYCALLBACK* pfnCallback, WPARAM wParam, LPARAM lParam );
HRESULT SetNotifyCallbackInterface( ISpNotifyCallback* pSpCallback, WPARAM wParam, LPARAM lParam );
HRESULT SetNotifySink( ISpNotifySink* pNotifySink );
HRESULT SetNotifyWin32Event(void);
HRESULT SetNotifyWindowMessage( HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam );
HRESULT SetObject( REFGUID guidServiceId, IUnknown* pUnkObject );
HRESULT SetObjectToken( ISpObjectToken* pToken );
HRESULT SetOutput( IUnknown* pUnkOutput, BOOL fAllowFormatChanges );
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
