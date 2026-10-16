/* Sapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 54 constants, 252 declarations, 10 outlines, 0 base types, 0 extra macros, 141 extra decls
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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* SPAUDIOSTATUS  [struct; ce-only; CE 4.0..699] */

/* SPEVENT  [struct; ce-only; CE 4.0..699] */

/* SPEVENTSOURCEINFO  [struct; ce-only; CE 4.0..699] */

/* SPPARSEINFO  [struct; ce-only; CE 4.0..699] */

/* SPPHRASE  [struct; ce-only; CE 4.0..699] */

/* SPRECOGNIZERSTATUS  [struct; ce-only; CE 4.0..699] */

/* SPRECORESULTINFO  [struct; ce-only; CE 4.0..699] */

/* SPRECORESULTTIMES  [struct; ce-only; CE 4.0..699] */

/* SPSERIALIZEDEVENT  [struct; ce-only; CE 4.0..699] */

/* SPSERIALIZEDEVENT64  [struct; ce-only; CE 4.0..699] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* SPAUDIOBUFFERINFO  [struct; ce-only; CE 4.0..699] */
typedef struct SPAUDIOBUFFERINFO{
 ULONG ulMsMinNotification;
 ULONG ulMsBufferSize;
 ULONG ulMsEventBias;
} SPAUDIOBUFFERINFO;

/* SPAUDIOOPTIONS  [enum; ce-only; CE 4.0..699] */
typedef enum SPAUDIOOPTIONS{
 SPAO_NONE = 0,
 SPAO_RETAIN_AUDIO = (1 << 0)
} SPAUDIOOPTIONS;

/* SPAUDIOSTATE  [enum; ce-only; CE 4.0..699] */
typedef enum _SPAUDIOSTATE{
 SPAS_CLOSED,
 SPAS_STOP,
 SPAS_PAUSE,
 SPAS_RUN
} SPAUDIOSTATE;

/* SPBINARYGRAMMAR  [struct; ce-only; CE 4.0..699] */
typedef struct SPBINARYGRAMMAR{
 ULONG ulTotalSerializedSize;
} SPBINARYGRAMMAR;

/* SPBOOKMARKOPTIONS  [enum; ce-only; CE 4.0..699] */
typedef enum SPBOOKMARKOPTIONS{
 SPBO_NONE = 0,
 SPBO_PAUSE = 1
} SPBOOKMARKOPTIONS;

/* SPCONTEXTSTATE  [enum; ce-only; CE 4.0..699] */
typedef enum SPCONTEXTSTATE{
 SPCS_DISABLED = 0,
 SPCS_ENABLED = 1
} SPCONTEXTSTATE;

/* SPDATAKEYLOCATION  [enum; ce-only; CE 4.0..699] */
typedef enum SPDATAKEYLOCATION{
 SPDKL_DefaultLocation = 0,
 SPDKL_CurrentUser = 1,
 SPDKL_LocalMachine = 2,
 SPDKL_CurrentConfig = 5
} SPDATAKEYLOCATION;

/* SPDISPLAYATTRIBUTES  [enum; ce-only; CE 4.0..699] */
typedef enum tagSPDISPLYATTRIBUTES{
 SPAF_ONE_TRAILING_SPACE = 0x02,
 SPAF_TWO_TRAILING_SPACES = 0x04,
 SPAF_CONSUME_LEADING_SPACES = 0x08,
 SPAF_ALL = 0x0F 
} SPDISPLAYATTRIBUTES;

/* SPEAKFLAGS  [enum; ce-only; CE 4.0..699] */
typedef enum SPEAKFLAGS{
 // SpVoice flags
 SPF_DEFAULT = 0,
 SPF_ASYNC = (1L << 0),
 SPF_PURGEBEFORESPEAK = (1L << 1),
 SPF_IS_FILENAME = (1L << 2),
 SPF_IS_XML = (1L << 3),
 SPF_IS_NOT_XML = (1L << 4),
 SPF_PERSIST_XML = (1L << 5),
 // Normalizer flags
 SPF_NLP_SPEAK_PUNC = (1L << 6),
 // Masks
 SPF_NLP_MASK = (SPF_NLP_SPEAK_PUNC),
 SPF_VOICE_MASK = (SPF_ASYNC|SPF_PURGEBEFORESPEAK|SPF_IS_FILENAME|
 SPF_IS_XML|SPF_IS_NOT_XML|SPF_NLP_MASK|SPF_PERSIST_XML),
 SPF_UNUSED_FLAGS = ~(SPF_VOICE_MASK)
} SPEAKFLAGS;

/* SPENDSRSTREAMFLAGS  [enum; ce-only; CE 4.0..699] */
typedef enum SPENDSRSTREAMFLAGS{
 SPESF_NONE = 0,
 SPESF_STREAM_RELEASED = (1 << 0)
} SPENDSRSTREAMFLAGS;

/* SPEVENTLPARAMTYPE  [enum; ce-only; CE 4.0..699] */
typedef enum SPEVENTLPARAMTYPE{
 SPET_LPARAM_IS_UNDEFINED = 0,
 SPET_LPARAM_IS_TOKEN,
 SPET_LPARAM_IS_OBJECT,
 SPET_LPARAM_IS_POINTER,
 SPET_LPARAM_IS_STRING
} SPEVENTLPARAMTYPE;

/* SPFILEMODE  [enum; ce-only; CE 4.0..699] */
typedef enum SPFILEMODE{
 SPFM_OPEN_READONLY,
 SPFM_OPEN_READWRITE,
 SPFM_CREATE,
 SPFM_CREATE_ALWAYS,
 SPFM_NUM_MODES
} SPFILEMODE;

/* SPGRAMMARSTATE  [enum; ce-only; CE 4.0..699] */
typedef enum SPGRAMMARSTATE{
 SPGS_ENABLED = 0,
 SPGS_DISABLED = 1,
 SPGS_EXCLUSIVE = 3
} SPGRAMMARSTATE;

/* SPGRAMMARWORDTYPE  [enum; ce-only; CE 4.0..699] */
typedef enum SPGRAMMARWORDTYPE{
 SPWT_DISPLAY,
 SPWT_LEXICAL,
 SPWT_PRONUNCIATION
} SPGRAMMARWORDTYPE;

/* SPINTERFERENCE  [enum; ce-only; CE 4.0..699] */
typedef enum SPINTERFERENCE{
 SPINTERFERENCE_NONE = 0,
 SPINTERFERENCE_NOISE,
 SPINTERFERENCE_NOSIGNAL,
 SPINTERFERENCE_TOOLOUD,
 SPINTERFERENCE_TOOQUIET,
 SPINTERFERENCE_TOOFAST,
 SPINTERFERENCE_TOOSLOW
} SPINTERFERENCE;

/* SPLEXICONTYPE  [enum; ce-only; CE 4.0..699] */
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

/* SPLOADOPTIONS  [enum; ce-only; CE 4.0..699] */
typedef enum SPLOADOPTIONS{
 SPLO_STATIC = 0,
 SPLO_DYNAMIC = 1
} SPLOADOPTIONS;

/* SPPARTOFSPEECH  [enum; ce-only; CE 4.0..699] */
typedef enum SPPARTOFSPEECH{
 //--- SAPI5 public POS category values (bits 28-31)
 SPPS_NotOverriden = -1,
 SPPS_Unknown = 0,
 SPPS_Noun = 0x1000,
 SPPS_Verb = 0x2000,
 SPPS_Modifier = 0x3000,
 SPPS_Function = 0x4000,
 SPPS_Interjection = 0x5000
} SPPARTOFSPEECH;

/* SPPATHENTRY  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPPATHENTRY{
 union {
 SPTRANSITIONID hTransition;
 SPPHRASEELEMENT elem;
 };
} SPPATHENTRY;

/* SPPHRASEALT  [struct; ce-only; CE 4.0..699] */
typedef struct tagSPPHRASEALT{
 ISpPhraseBuilder* pPhrase;
 ULONG ulStartElementInParent;
 ULONG cElementsInParent;
 ULONG cElementsInAlternate;
 void* pvAltExtra;
 ULONG cbAltExtra;
} SPPHRASEALT;

/* SPPHRASEALTREQUEST  [struct; ce-only; CE 4.0..699] */
typedef struct tagSPPHRASEALTREQUEST{
 ULONG ulStartElement;
 ULONG cElements;
 ULONG ulRequestAltCount;
 void* pvResultExtra;
 ULONG cbResultExtra;
 ISpPhrase* pPhrase;
 ISpRecoContext* pRecoContext;
} SPPHRASEALTREQUEST;

/* SPPHRASEELEMENT  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPPHRASEELEMENT{
 ULONG ulAudioTimeOffset;
 ULONG ulAudioSizeTime;
 ULONG ulAudioStreamOffset;
 ULONG ulAudioSizeBytes;
 ULONG ulRetainedStreamOffset;
 ULONG ulRetainedSizeBytes;
 const WCHAR* pszDisplayText;
 const WCHAR* pszLexicalForm;
 const SPPHONEID* pszPronunciation;
 BYTE bDisplayAttributes;
 char RequiredConfidence;
 char ActualConfidence;
 BYTE Reserved;
 float SREngineConfidence;
} SPPHRASEELEMENT;

/* SPPHRASEPROPERTY  [struct; ce-only; CE 4.0..699] */
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

/* SPPHRASEREPLACEMENT  [struct; ce-only; CE 4.0..699] */
typedef struct tagSPPHRASEREPLACEMENT{
 BYTE bDisplayAttributes;
 const WCHAR* pszReplacementText;
 ULONG ulFirstElement;
 ULONG ulCountOfElements;
} SPPHRASEREPLACEMENT;

/* SPPHRASERNG  [enum; ce-only; CE 4.0..699] */
typedef enum SPPHRASERNG{
 SPPR_ALL_ELEMENTS = -1
} SPPHRASERNG;

/* SPPHRASERULE  [struct; ce-only; CE 4.0..699] */
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

/* SPPROPERTYINFO  [struct; ce-only; CE 4.0..699] */
typedef struct tagSPPROPERTYINFO{
 const WCHAR* pszName;
 ULONG ulId;
 const WCHAR* pszValue;
 VARIANT vValue;
} SPPROPERTYINFO;

/* SPRECOCONTEXTSTATUS  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPRECOCONTEXTSTATUS{
 SPINTERFERENCE eInterference;
 WCHAR szRequestTypeOfUI[255];
 DWORD dwReserved1;
 DWORD dwReserved2;
} SPRECOCONTEXTSTATUS;

/* SPRECOEVENTFLAGS  [enum; ce-only; CE 4.0..699] */
typedef enum SPRECOEVENTFLAGS{
 SPREF_AutoPause = (1 << 0)
 SPREF_Emulated = (1 << 1)
} SPRECOECOEVENTFLAGS;

/* SPRECOSTATE  [enum; ce-only; CE 4.0..699] */
typedef enum SPRECOSTATE{
 SPRST_INACTIVE,
 SPRST_ACTIVE,
 SPRST_ACTIVE_ALWAYS,
 SPRST_INACTIVE_WITH_PURGE,
 SPRST_NUM_STATES
} SPRECOSTATE;

/* SPRULEENTRY  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPRULEENTRY{
 SPRULEHANDLE hRule;
 SPSTATEHANDLE hInitialState;
 DWORD Attributes;
 void* pvClientContext;
 void* pvClientGrammarContext;
} SPRULEENTRY;

/* SPRULESTATE  [enum; ce-only; CE 4.0..699] */
typedef enum SPRULESTATE{
 SPRS_INACTIVE = 0,
 SPRS_ACTIVE = 1,
 SPRS_ACTIVE_WITH_AUTO_PAUSE = 3
} SPRULESTATE;

/* SPRUNSTATE  [enum; ce-only; CE 4.0..699] */
typedef enum SPRUNSTATE{
 SPRS_DONE = (1L << 0),
 SPRS_IS_SPEAKING = (1L << 1) 
} SPRUNSTATE;

/* SPSERIALIZEDPHRASE  [struct; ce-only; CE 4.0..699] */
typedef struct tagSPSERIALIZEDPHRASE{
 ULONG ulSerializedSize;
} SPSERIALIZEDPHRASE;

/* SPSERIALIZEDRESULT  [struct; ce-only; CE 4.0..699] */
typedef struct SPSERIALIZEDRESULT{
 ULONG ulSerializedSize;
} SPSERIALIZEDRESULT;

/* SPSTATEINFO  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPSTATEINFO{
 ULONG cAllocatedEntries;
 SPTRANSITIONENTRY* pTransitions;
 ULONG cEpsilons;
 ULONG cRules;
 ULONG cWords;
 ULONG cSpecialTransitions;
} SPSTATEINFO;

/* SPSTREAMFORMAT  [enum; ce-only; CE 4.0..699] */
typedef enum SPSTREAMFORMAT{
 SPSF_Default = -1,
 SPSF_NoAssignedFormat = 0,
 SPSF_Text,
 SPSF_NonStandardFormat,
 SPSF_ExtendedAudioFormat,
 // Standard PCM wave formats
 SPSF_8kHz8BitMono,
 SPSF_8kHz8BitStereo,
 SPSF_8kHz16BitMono,
 SPSF_8kHz16BitStereo,
 SPSF_11kHz8BitMono,
 SPSF_11kHz8BitStereo,
 SPSF_11kHz16BitMono,
 SPSF_11kHz16BitStereo,
 SPSF_12kHz8BitMono,
 SPSF_12kHz8BitStereo,
 SPSF_12kHz16BitMono,
 SPSF_12kHz16BitStereo,
 SPSF_16kHz8BitMono,
 SPSF_16kHz8BitStereo,
 SPSF_16kHz16BitMono,
 SPSF_16kHz16BitStereo,
 SPSF_22kHz8BitMono,
 SPSF_22kHz8BitStereo,
 SPSF_22kHz16BitMono,
 SPSF_22kHz16BitStereo,
 SPSF_24kHz8BitMono,
 SPSF_24kHz8BitStereo,
 SPSF_24kHz16BitMono,
 SPSF_24kHz16BitStereo,
 SPSF_32kHz8BitMono,
 SPSF_32kHz8BitStereo,
 SPSF_32kHz16BitMono,
 SPSF_32kHz16BitStereo,
 SPSF_44kHz8BitMono,
 SPSF_44kHz8BitStereo,
 SPSF_44kHz16BitMono,
 SPSF_44kHz16BitStereo,
 SPSF_48kHz8BitMono,
 SPSF_48kHz8BitStereo,
 SPSF_48kHz16BitMono,
 SPSF_48kHz16BitStereo,
 // TrueSpeech format
 SPSF_TrueSpeech_8kHz1BitMono,
 // A-Law formats
 SPSF_CCITT_ALaw_8kHzMono,
 SPSF_CCITT_ALaw_8kHzStereo,
 SPSF_CCITT_ALaw_11kHzMono,
 SPSF_CCITT_ALaw_11kHzStereo,
 SPSF_CCITT_ALaw_22kHzMono,
 SPSF_CCITT_ALaw_22kHzStereo,
 SPSF_CCITT_ALaw_44kHzMono,
 SPSF_CCITT_ALaw_44kHzStereo,
 // u-Law formats
 SPSF_CCITT_uLaw_8kHzMono,
 SPSF_CCITT_uLaw_8kHzStereo,
 SPSF_CCITT_uLaw_11kHzMono,
 SPSF_CCITT_uLaw_11kHzStereo,
 SPSF_CCITT_uLaw_22kHzMono,
 SPSF_CCITT_uLaw_22kHzStereo,
 SPSF_CCITT_uLaw_44kHzMono,
 SPSF_CCITT_uLaw_44kHzStereo,
 // ADPCM formats
 SPSF_ADPCM_8kHzMono,
 SPSF_ADPCM_8kHzStereo,
 SPSF_ADPCM_11kHzMono,
 SPSF_ADPCM_11kHzStereo,
 SPSF_ADPCM_22kHzMono,
 SPSF_ADPCM_22kHzStereo,
 SPSF_ADPCM_44kHzMono,
 SPSF_ADPCM_44kHzStereo,
 // GSM 6.10 formats
 SPSF_GSM610_8kHzMono,
 SPSF_GSM610_11kHzMono,
 SPSF_GSM610_22kHzMono,
 SPSF_GSM610_44kHzMono,
 SPSF_NUM_FORMATS
} SPSTREAMFORMAT;

/* SPTEXTSELECTIONINFO  [struct; ce-only; CE 4.0..699] */
typedef struct tagSPTEXTSELECTIONINFO{
 ULONG ulStartActiveOffset;
 ULONG cchActiveChars;
 ULONG ulStartSelection;
 ULONG cchSelection;
} SPTEXTSELECTIONINFO;

/* SPTMTHREADINFO  [struct; ce-only; CE 4.0..699] */
typedef struct SPTMTHREADINFO{
 long lPoolSize;
 long lPriority;
 ULONG ulConcurrencyLimit;
 ULONG ulMaxQuickAllocThreads;
} SPTMTHREADINFO;

/* SPTRANSITIONENTRY  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPTRANSITIONENTRY{
 SPTRANSITIONID ID;
 SPSTATEHANDLE hNextState;
 BYTE Type;
 char RequiredConfidence;
 struct
 {
 DWORD fHasProperty;
 };
 float Weight;
 union
 {
 struct
 {
 SPSTATEHANDLE hRuleInitialState;
 SPRULEHANDLE hRule;
 void* pvClientRuleContext;
 };
 struct
 {
 SPWORDHANDLE hWord;
 void* pvClientWordContext;
 };
 struct
 {
 void* pvGrammarCookie;
 };
 };
} SPTRANSITIONENTRY;

/* SPTRANSITIONPROPERTY  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPTRANSITIONPROPERTY{
 const WCHAR* pszName;
 ULONG ulId;
 const WCHAR* pszValue;
 VARIANT vValue;
} SPTRANSITIONPROPERTY;

/* SPVACTIONS  [enum; ce-only; CE 4.0..699] */
typedef enum SPVACTIONS{
 SPVA_Speak = 0,
 SPVA_Silence,
 SPVA_Pronounce,
 SPVA_Bookmark,
 SPVA_SpellOut,
 SPVA_Section,
 SPVA_ParseUnknownTag
} SPVACTIONS;

/* SPVALUETYPE  [enum; ce-only; CE 4.0..699] */
typedef enum SPVALUETYPE{
 SPDF_PROPERTY = 0x00000001,
 SPDF_REPLACEMENT = 0x00000002,
 SPDF_RULE = 0x00000004,
 SPDF_DISPLAYTEXT = 0x00000008,
 SPDF_LEXICALFORM = 0x00000010,
 SPDF_PRONUNCIATION = 0x00000020,
 SPDF_AUDIO = 0x00000040,
 SPDF_ALTERNATES = 0x00000080,
 SPDF_ALL = 0x000000FF
} SPVALUETYPE;

/* SPVCONTEXT  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPVCONTEXT{
 LPCWSTR pCategory;
 LPCWSTR pBefore;
 LPCWSTR pAfter;
} SPVCONTEXT;

/* SPVFEATURE  [enum; ce-only; CE 4.0..699] */
typedef enum SPVFEATURE{
 SPVFEATURE_STRESSED = (1L << 0),
 SPVFEATURE_EMPHASIS = (1L << 1)
} SPVFEATURE;

/* SPVISEMES  [enum; ce-only; CE 4.0..699] */
typedef enum SPVISEMES{
 // English examples
 //------------------
 SP_VISEME_0 = 0,
 SP_VISEME_1,
 SP_VISEME_2,
 SP_VISEME_3,
 SP_VISEME_4,
 SP_VISEME_5,
 SP_VISEME_6,
 SP_VISEME_7,
 SP_VISEME_8,
 SP_VISEME_9,
 SP_VISEME_10,
 SP_VISEME_11,
 SP_VISEME_12,
 SP_VISEME_13,
 SP_VISEME_14,
 SP_VISEME_15,
 SP_VISEME_16,
 SP_VISEME_17,
 SP_VISEME_18,
 SP_VISEME_19,
 SP_VISEME_20,
 SP_VISEME_21
} SPVISEMES;

/* SPVLIMITS  [enum; ce-only; CE 4.0..699] */
typedef enum SPVLIMITS{
 SPMIN_VOLUME = 0,
 SPMAX_VOLUME = 100,
 SPMIN_RATE = -10,
 SPMAX_RATE = 10
} SPVLIMITS;

/* SPVOICESTATUS  [struct; ce-only; CE 4.0..699] */
typedef struct SPVOICESTATUS{
 ULONG ulCurrentStream;
 ULONG ulLastStreamQueued;
 HRESULT hrLastResult;
 DWORD dwRunningState;
 ULONG ulInputWordPos;
 ULONG ulInputWordLen;
 ULONG ulInputSentPos;
 ULONG ulInputSentLen;
 LONG lBookmarkId;
 SPPHONEID PhonemeId;
 SPVISEMES VisemeId;
 DWORD dwReserved1;
 DWORD dwReserved2;
} SPVOICESTATUS;

/* SPVPITCH  [struct; ce-only; CE 4.0..699] */
typedef struct SPVPITCH{
 long MiddleAdj;
 long RangeAdj;
} SPVPITCH;

/* SPVPRIORITY  [enum; ce-only; CE 4.0..699] */
typedef enum SPVPRIORITY{
 SPVPRI_NORMAL = 0,
 SPVPRI_ALERT = (1L << 0),
 SPVPRI_OVER = (1L << 1)
} SPVPRIORITY;

/* SPVSTATE  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPVSTATE{
 SPVACTIONS eAction;
 LANGID LangID;
 WORD wReserved;
 long EmphAdj;
 long RateAdj;
 ULONG Volume;
 SPVPITCH PitchAdj;
 ULONG SilenceMSecs;
 SPPHONEID* pPhoneIds;
 SPPARTOFSPEECH ePartOfSpeech;
 SPVCONTEXT Context;
} SPVSTATE;

/* SPVTEXTFRAG  [struct; ce-only; CE 4.0..699] */
typedef struct SPVTEXTFRAG{
 struct SPVTEXTFRAG* pNext;
 SPVSTATE State;
 LPCWSTR pTextStart;
 ULONG ulTextLen;
 ULONG ulTextSrcOffset;
} SPVTEXTFRAG;

/* SPWAVEFORMATTYPE  [enum; ce-only; CE 4.0..699] */
typedef enum SPWAVEFORMATTYPE{
 SPWF_INPUT,
 SPWF_SRENGINE
} SPSTREAMFORMATTYPE;

/* SPWORD  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPWORD{
 struct SPWORD* pNextWord;
 LANGID LangID;
 WORD wReserved;
 SPWORDTYPE eWordType;
 WCHAR* pszWord;
 SPWORDPRONUNCIATION* pFirstWordPronunciation;
} SPWORD;

/* SPWORDENTRY  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPWORDENTRY{
 SPWORDHANDLE hWord;
 LANGID LangID;
 const WCHAR* pszDisplayText;
 const WCHAR* pszLexicalForm;
 SPPHONEID* aPhoneId;
 void* pvClientContext;
} SPWORDENTRY;

/* SPWORDLIST  [struct; ce-only; CE 4.0..699] */
typedef struct SPWORDLIST{
 ULONG ulSize;
 BYTE* pvBuffer;
 SPWORD* pFirstWord;
} SPWORDLIST;

/* SPWORDPRONOUNCEABLE  [enum; ce-only; CE 4.0..699] */
typedef enum SPWORDPRONOUNCEABLE{
 SPWP_UNKNOWN_WORD_UNPRONOUNCEABLE = 0,
 SPWP_UNKNOWN_WORD_PRONOUNCEABLE = 1,
 SPWP_KNOWN_WORD_PRONOUNCEABLE = 2
} SPWORDPRONOUNCEABLE;

/* SPWORDPRONUNCIATION  [struct; ce-only; CE 4.0..699] */
typedef [restricted] struct SPWORDPRONUNCIATION{
 struct SPWORDPRONUNCIATION* pNextWordPronunciation;
 SPLEXICONTYPE eLexiconType;
 LANGID LangID;
 WORD wReserved;
 SPPARTOFSPEECH ePartOfSpeech;
 SPPHONEID szPronunciation[1];
} SPWORDPRONUNCIATION;

/* SPWORDPRONUNCIATIONLIST  [struct; ce-only; CE 4.0..699] */
typedef struct SPWORDPRONUNCIATIONLIST{
 ULONG ulSize;
 BYTE* pvBuffer;
 SPWORDPRONUNCIATION* pFirstWordPronunciation;
} SPWORDPRONUNCIATIONLIST;

/* SPWORDTYPE  [enum; ce-only; CE 4.0..699] */
typedef enum SPWORDTYPE{
 eWORDTYPE_ADDED = (1L << 0),
 eWORDTYPE_DELETED = (1L << 1)
} SPWORDTYPE;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 400 && _WIN32_WCE < 700)) /* CE 4.0..699 */

/* ISpNotifyCallback::NotifyCallback  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT NotifyCallback(
 WPARAM wParam,
 LPARAM lParam
);

/* ISpNotifySink::Notify  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Notify(void);

/* ISpNotifySource::GetNotifyEventHandle  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HANDLE GetNotifyEventHandle(void);

/* ISpNotifySource::SetNotifyCallbackFunction  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetNotifyCallbackFunction(
 SPNOTIFYCALLBACK* pfnCallback,
 WPARAM wParam, 
 LPARAM lParam
);

/* ISpNotifySource::SetNotifyCallbackInterface  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetNotifyCallbackInterface(
 ISpNotifyCallback* pSpCallback, 
 WPARAM wParam, 
 LPARAM lParam
);

/* ISpNotifySource::SetNotifySink  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetNotifySink(
 ISpNotifySink* pNotifySink
);

/* ISpNotifySource::SetNotifyWin32Event  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetNotifyWin32Event(void);

/* ISpNotifySource::SetNotifyWindowMessage  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetNotifyWindowMessage(
 HWND hWnd, 
 UINT Msg, 
 WPARAM wParam, 
 LPARAM lParam
);

/* ISpNotifySource::WaitForNotifyEvent  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT WaitForNotifyEvent(
 DWORD dwMilliseconds
);

/* ISpNotifyTranslator::GetEventHandle  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HANDLE GetEventHandle(void);

/* ISpNotifyTranslator::InitCallback  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT InitCallback(
 SPNOTIFYCALLBACK* pfnCallback,
 WPARAM wParam, 
 LPARAM lParam
);

/* ISpNotifyTranslator::InitSpNotifyCallback  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT InitSpNotifyCallback(
 ISpNotifyCallback* pSpCallback,
 WPARAM wParam,
 LPARAM lParam
);

/* ISpNotifyTranslator::InitWin32Event  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT InitWin32Event(
 HANDLE hEvent,
 BOOL fCloseHandleOnRelease
);

/* ISpNotifyTranslator::InitWindowMessage  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT InitWindowMessage(
 HWND hWnd,
 UINT Msg,
 WPARAM wParam,
 LPARAM lParam
);

/* ISpNotifyTranslator::Wait  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Wait(
 DWORD dwMilliseconds
);

/* ISpObjectToken::CreateInstance  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT CreateInstance(
 IUnknown* pUnkOuter,
 DWORD dwClsContext,
 REFIID riid,
 void** ppvObject
);

/* ISpObjectToken::DisplayUI  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
[local] HRESULT DisplayUI(
 HWND hwndParent,
 const WCHAR* pszTitle,
 const WCHAR pszTypeOfUI,
 void* pvExtraData,
 ULONG cbExtraData,
 IUnknown* punkObject
);

/* ISpObjectToken::GetCategory  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetCategory(
 ISpObjectTokenCategory** ppTokenCategory
);

/* ISpObjectToken::GetId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetId(
 WCHAR** ppszCoMemTokenId
);

/* ISpObjectToken::GetStorageFileName  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetStorageFileName(
 REFCLSID clsidCaller,
 const WCHAR* pszValueName,
 const WCHAR* pszFileNameSpecifier,
 ULONG nFolder,
 WCHAR** ppszFilePath
);

/* ISpObjectToken::IsUISupported  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
[local] HRESULT IsUISupported(
 const WCHAR* pszTypeOfUI,
 void* pvExtraData,
 ULONG cbExtraData,
 IUnknown* punkObject,
 BOOL* pfSupported
);

/* ISpObjectToken::MatchesAttributes  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT MatchesAttributes(
 const WCHAR* pszAttributes, 
 BOOL* pfMatches
);

/* ISpObjectToken::Remove  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Remove(
 const CLSID* pclsidCaller
);

/* ISpObjectToken::RemoveStorageFileName  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT RemoveStorageFileName(
 REFCLSID clsidCaller,
 const WCHAR* pszKeyName,
 BOOL fDeleteFile
);

/* ISpObjectToken::SetId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetId(
 const WCHAR* pszCategoryId,
 const WCHAR* pszTokenId,
 BOOL fCreateIfNotExist
);

/* ISpObjectTokenCategory::EnumTokens  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT EnumTokens(
 const WCHAR* pszReqAttribs,
 const WCHAR* pszOptAttribs,
 IEnumSpObjectTokens** ppEnum
);

/* ISpObjectTokenCategory::GetDataKey  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetDataKey(
 SPDATAKEYLOCATION spdkl,
 ISpDataKey** ppDataKey
);

/* ISpObjectTokenCategory::GetDefaultTokenId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetDefaultTokenId(
 const WCHAR** ppszCoMemTokenId
);

/* ISpObjectTokenCategory::GetId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetId(
 WCHAR** ppszCoMemCategoryId
);

/* ISpObjectTokenCategory::SetDefaultTokenId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetDefaultTokenId(
 const WCHAR* pszTokenId
);

/* ISpObjectTokenCategory::SetId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetId(
 const WCHAR* pszCategoryId,
 BOOL fCreateIfNotExist
);

/* ISpObjectTokenInit::InitFromDataKey  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT InitFromDataKey(
 const WCHAR* pszCategoryId,
 const WCHAR* pszTokenId,
 ISpDataKey* pDataKey
);

/* ISpObjectWithToken::GetObjectToken  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetObjectToken(
 ISpObjectToken** ppToken
);

/* ISpObjectWithToken::SetObjectToken  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetObjectToken(
 ISpObjectToken* pToken
);

/* ISpPhoneConverter::IdToPhone  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT IdToPhone(
 const SPPHONEID* pId,
 WCHAR* pszPhone
);

/* ISpPhoneConverter::PhoneToId  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT PhoneToId(
 const WCHAR* pszPhone,
 SPPHONEID* pId
);

/* ISpPhrase::Discard  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Discard(
 DWORD dwValueTypes
);

/* ISpPhrase::GetPhrase  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetPhrase(
 SPPHRASE** ppCoMemPhrase
);

/* ISpPhrase::GetSerializedPhrase  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetSerializedPhrase(
 SPSERIALIZEDPHRASE** ppCoMemPhrase
);

/* ISpPhrase::GetText  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetText(
 ULONG ulStart,
 ULONG ulCount,
 BOOL fUseTextReplacements,
 WCHAR** ppszCoMemText,
 BYTE* pbDisplayAttributes
);

/* ISpPhraseAlt::Commit  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Commit(void);

/* ISpPhraseAlt::GetAltInfo  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetAltInfo(
 ISpPhrase** ppParent,
 ULONG* pulStartElementInParent,
 ULONG* pcElementsInParent,
 ULONG* pcElementsInAlt
);

/* ISpPhraseBuilder::AddElements  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddElements(
 ULONG cElements,
 const SPPHRASEELEMENT* pElement
);

/* ISpPhraseBuilder::AddProperties  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddProperties(
 const SPPHRASEPROPERTYHANDLE hParent,
 const SPPHRASEPROPERTY* pProperty,
 SPPHRASEPROPERTYHANDLE* phNewProperty
);

/* ISpPhraseBuilder::AddReplacements  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddReplacements(
 ULONG cReplacements,
 const SPPHRASEREPLACEMENT* pReplacements
);

/* ISpPhraseBuilder::AddRules  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddRules(
 const SPPHRASERULEHANDLE hParent,
 const SPPHRASERULE* pRule,
 SPPHRASERULEHANDLE* phNewRule
);

/* ISpPhraseBuilder::InitFromPhrase  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT InitFromPhrase(
 const SPPHRASE* pSrcPhrase
);

/* ISpPhraseBuilder::InitFromSerializedPhrase  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT InitFromSerializedPhrase(
 const SPSERIALIZEDPHRASE* pPhrase
);

/* ISpRecoContext::DeserializeResult  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT DeserializeResult(
 const SPSERIALIZEDRESULT* pSerializedResult,
 ISpRecoResult** ppResult
);

/* ISpRecoContext::GetAudioOptions  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetAudioOptions(
 SPAUDIOOPTIONS* Options,
 GUID* pAudioFormatId,
 WAVEFORMATEX** ppCoMemWFE
);

/* ISpRecoContext::GetContextState  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetContextState(
 SPCONTEXTSTATE* peContextState
);

/* ISpRecoContext::GetMaxAlternates  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetMaxAlternates(
 ULONG* pcMaxAlternates
);

/* ISpRecoContext::GetRecognizer  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRecognizer(
 ISpRecognizer** ppRecognizer
);

/* ISpRecoContext::GetStatus  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetStatus(
 SPRECOCONTEXTSTATUS* pStatus
);

/* ISpRecoContext::GetVoice  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetVoice(
 ISpVoice** ppVoice
);

/* ISpRecoContext::Pause  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Pause(
 DWORD dwFlags
);

/* ISpRecoContext::Resume  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Resume(
 DWORD dwReserved
);

/* ISpRecoContext::SetAdaptationData  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetAdaptationData(
 const WCHAR* pAdaptationData,
 const ULONG cch
);

/* ISpRecoContext::SetAudioOptions  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetAudioOptions(
 SPAUDIOOPTIONS Options,
 const GUID* pAudioFormatId,
 const WAVEFORMATEX* pWaveFormatEx
);

/* ISpRecoContext::SetContextState  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetContextState(
 SPCONTEXTSTATE eContextState
);

/* ISpRecoContext::SetMaxAlternates  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetMaxAlternates(
 ULONG cAlternates
);

/* ISpRecoContext::SetVoice  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetVoice(
 ISpVoice* pVoice,
 BOOL fAllowFormatChanges
);

/* ISpRecognizer::CreateRecoContext  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT CreateRecoContext(
 ISpRecoContext** ppNewContext
);

/* ISpRecognizer::DisplayUI  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
[local] HRESULT DisplayUI(
 HWND hwndParent,
 const WCHAR* pszTitle,
 const WCHAR* pszTypeOfUI,
 void* pvExtraData,
 ULONG cbExtraData
);

/* ISpRecognizer::EmulateRecognition  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT EmulateRecognition(
 ISpPhrase* pPhrase
);

/* ISpRecognizer::GetFormat  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetFormat(
 SPSTREAMFORMATTYPE WaveFormatType,
 GUID* pFormatId,
 WAVEFORMATEX** ppCoMemWFEX
);

/* ISpRecognizer::GetInputObjectToken  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetInputObjectToken(
 ISpObjectToken** ppToken
);

/* ISpRecognizer::GetInputStream  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetInputStream(
 ISpStreamFormat** ppStream
);

/* ISpRecognizer::GetRecognizer  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRecognizer(
 ISpObjectToken** ppEngineToken
);

/* ISpRecognizer::GetRecoProfile  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRecoProfile(
 ISpObjectToken** ppToken
);

/* ISpRecognizer::GetRecoState  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRecoState(
 SPRECOSTATE* pState
);

/* ISpRecognizer::GetStatus  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetStatus(
 SPRECOGNIZERSTATUS* pStatus
);

/* ISpRecognizer::IsSharedInstance  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT IsSharedInstance(void);

/* ISpRecognizer::IsUISupported  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
[local] HRESULT IsUISupported(
 const WCHAR* pszTypeOfUI,
 void* pvExtraData,
 ULONG cbExtraData,
 BOOL* pfSupported
);

/* ISpStream::SetBaseStream  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetBaseStream(
 IStream* pStream,
 REFGUID rguidFormat,
 const WAVEFORMATEX* pWaveFormatEx
);

/* ISpTranscript::AppendTranscript  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AppendTranscript(
 const WCHAR* pszTranscript
);

/* ISpTranscript::GetTranscript  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetTranscript(
 WCHAR** ppszTranscript
);

/* ISpVoice::DisplayUI  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
[local] HRESULT DisplayUI(
 HWND hwndParent,
 const WCHAR* pszTitle,
 const WCHAR* pszTypeOfUI,
 void* pvExtraData,
 ULONG cbExtraData
);

/* ISpVoice::GetAlertBoundary  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetAlertBoundary( 
 SPEVENTENUM* peBoundary
);

/* ISpVoice::GetOutputObjectToken  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetOutputObjectToken(
 ISpObjectToken** ppObjectToken
);

/* ISpVoice::GetOutputStream  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetOutputStream(
 ISpStreamFormat** ppStream
);

/* ISpVoice::GetPriority  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetPriority(
 SPVPRIORITY* pePriority
);

/* ISpVoice::GetRate  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRate(
 long* pRateAdjust
);

/* ISpVoice::GetStatus  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetStatus(
 SPVOICESTATUS* pStatus,
 WCHAR** ppszLastBookmark
);

/* ISpVoice::GetSyncSpeakTimeout  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetSyncSpeakTimeout(
 ULONG* pmsTimeout
);

/* ISpVoice::GetVoice  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetVoice(
 ISpObjectToken** ppToken
);

/* ISpVoice::GetVolume  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetVolume(
 USHORT* pusVolume
);

/* ISpVoice::IsUISupported  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
[local] HRESULT IsUISupported(
 const WCHAR* pszTypeOfUI,
 void* pvExtraData,
 ULONG cbExtraData,
 BOOL* pfSupported
);

/* ISpVoice::Pause  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Pause(void);

/* ISpVoice::Resume  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Resume(void);

/* ISpVoice::SetAlertBoundary  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetAlertBoundary(
 SPEVENTENUM eBoundary
);

/* ISpVoice::SetOutput  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetOutput(
 IUnknown* pUnkOutput,
 BOOL fAllowFormatChanges
);

/* ISpVoice::SetPriority  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetPriority(
 SPVPRIORITY ePriority
);

/* ISpVoice::SetRate  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetRate(
 long RateAdjust
);

/* ISpVoice::SetSyncSpeakTimeout  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetSyncSpeakTimeout(
 ULONG msTimeout
);

/* ISpVoice::SetVoice  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetVoice(
 ISpObjectToken* pToken
);

/* ISpVoice::SetVolume  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetVolume(
 USHORT usVolume
);

/* ISpVoice::Skip  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Skip(
 WCHAR* pItemType,
 long lNumItems,
 ULONG* pulNumSkipped
);

/* ISpVoice::Speak  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Speak(
 const WCHAR* pwcs,
 DWORD dwFlags,
 ULONG* pulStreamNumber
);

/* ISpVoice::SpeakCompleteEvent  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
[local] HANDLE SpeakCompleteEvent(void);

/* ISpVoice::SpeakStream  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SpeakStream(
 IStream* pStream,
 DWORD dwFlags,
 ULONG* pulStreamNumber
);

/* ISpVoice::WaitUntilDone  [function; ce-only; CE 4.0..699; Sapilib.lib, sapilib.lib] */
HRESULT WaitUntilDone(
 ULONG msTimeout
);

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

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* IEnumSpObjectTokens::Clone  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Clone(
 IEnumSpObjectTokens** ppEnum
);

/* IEnumSpObjectTokens::GetCount  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetCount(
 ULONG* pulCount
);

/* IEnumSpObjectTokens::Item  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Item(
 ULONG Index, 
 ISpObjectToken** ppToken
);

/* IEnumSpObjectTokens::Next  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Next(
 ULONG celt,
 ISpObjectToken** pelt,
 ULONG* pceltFetched
);

/* IEnumSpObjectTokens::Reset  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Reset(void);

/* IEnumSpObjectTokens::Skip  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Skip(
 ULONG celt
);

/* ISpAudio::EventHandle  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HANDLE EventHandle(void);

/* ISpAudio::GetBufferInfo  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetBufferInfo(
 SPAUDIOBUFFERINFO* pBuffInfo
);

/* ISpAudio::GetBufferNotifySize  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetBufferNotifySize(
 ULONG* pcbSize
);

/* ISpAudio::GetDefaultFormat  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetDefaultFormat(
 GUID* pFormatId,
 WAVEFORMATEX** ppCoMemWaveFormatEx
);

/* ISpAudio::GetStatus  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetStatus(
 SPAUDIOSTATUS* pStatus
);

/* ISpAudio::SetBufferInfo  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetBufferInfo(
 const SPAUDIOBUFFERINFO* pBuffInfo
);

/* ISpAudio::SetBufferNotifySize  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetBufferNotifySize(
 ULONG cbSize
);

/* ISpAudio::SetFormat  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetFormat(
 REFGUID rguidFmtId,
 const WAVEFORMATEX* pWaveFormatEx
);

/* ISpContainerLexicon::AddLexicon  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddLexicon(
 ISpLexicon* pAddLexicon,
 DWORD dwFlags
);

/* ISpDataKey::CreateKey  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT CreateKey(
 const WCHAR* pszSubKeyName, 
 ISpDataKey** ppSubKey
);

/* ISpDataKey::DeleteKey  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT DeleteKey(
 const WCHAR* pszSubKeyName
);

/* ISpDataKey::DeleteValue  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT DeleteValue(
 const WCHAR* pszValueName
);

/* ISpDataKey::EnumKeys  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT EnumKeys(
 ULONG Index, 
 WCHAR** ppszSubKeyName
);

/* ISpDataKey::EnumValues  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT EnumValues(
 ULONG Index, 
 WCHAR** ppszValueName
);

/* ISpDataKey::GetData  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetData(
 const WCHAR* pszValueName, 
 ULONG* pcbData, 
 BYTE* pData
);

/* ISpDataKey::GetDWORD  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetDWORD(
 const WCHAR* pszKeyName,
 DWORD* pdwValue
);

/* ISpDataKey::GetStringValue  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetStringValue(
 const WCHAR* pszValueName, 
 WCHAR** ppszValue
);

/* ISpDataKey::OpenKey  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT OpenKey(
 const WCHAR* pszSubKeyName, 
 ISpDataKey** ppSubKey
);

/* ISpDataKey::SetData  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetData(
 const WCHAR* pszValueName, 
 ULONG cbData, 
 const BYTE* pData
);

/* ISpDataKey::SetDWORD  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetDWORD(
 const WCHAR* pszKeyName
 DWORD dwValue
);

/* ISpDataKey::SetStringValue  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetStringValue(
 const WCHAR* pszValueName, 
 const WCHAR* pszValue
);

/* ISpEventSink::AddEvents  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddEvents(
 const SPEVENT* pEventArray, 
 ULONG ulCount
);

/* ISpEventSource::GetEvents  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetEvents(
 ULONG ulCount, 
 SPEVENT* pEventArray,
 ULONG* pulFetched
);

/* ISpEventSource::GetInfo  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetInfo(
 SPEVENTSOURCEINFO* pInfo
);

/* ISpGrammarBuilder::AddResource  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddResource(
 SPSTATEHANDLE hRuleState,
 const WCHAR* pszResourceName,
 const WCHAR* pszResourceValue
);

/* ISpGrammarBuilder::AddRuleTransition  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddRuleTransition(
 SPSTATEHANDLE hFromState,
 SPSTATEHANDLE hToState,
 SPSTATEHANDLE hRule,
 float Weight,
 const SPPROPERTYINFO* pPropInfo
);

/* ISpGrammarBuilder::AddWordTransition  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddWordTransition(
 SPSTATEHANDLE hFromState,
 SPSTATEHANDLE hToState,
 const WCHAR* psz,
 const WCHAR* pszSeperators,
 SPGRAMMARWORDTYPE eWordType,
 float Weight,
 const SPPROPERTYINFO* pPropInfo
);

/* ISpGrammarBuilder::ClearRule  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT ClearRule(
 SPSTATEHANDLE hState
);

/* ISpGrammarBuilder::Commit  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Commit(
 DWORD dwReserved
);

/* ISpGrammarBuilder::CreateNewState  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT CreateNewState(
 SPSTATEHANDLE hState,
 SPSTATEHANDLE* phState
);

/* ISpGrammarBuilder::GetRule  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRule(
 const WCHAR* pszRuleName,
 DWORD dwRuleId,
 DWORD dwAttributes,
 BOOL fCreateIfNotExist,
 SPSTATEHANDLE* phInitialState
);

/* ISpGrammarBuilder::ResetGrammar  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT ResetGrammar(
 LANGID NewLanguage
);

/* ISpLexicon::AddPronunciation  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT AddPronunciation(
 const WCHAR* pszWord,
 LANGID LangID,
 SPPARTOFSPEECH ePartOfSpeech,
 const SPPHONEID* pszPronunciation
);

/* ISpLexicon::GetGeneration  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetGeneration(
 DWORD* pdwGeneration
);

/* ISpLexicon::GetGenerationChange  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetGenerationChange(
 DWORD dwFlags,
 DWORD* pdwGeneration,
 SPWORDLIST* pWordList
);

/* ISpLexicon::GetPronunciations  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetPronunciations(
 const WCHAR* pszWord,
 LANGID LangID,
 DWORD dwFlags,
 SPWORDPRONUNCIATIONLIST* pWordPronunciationList
);

/* ISpLexicon::GetWords  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetWords(
 DWORD dwFlags,
 DWORD* pdwGeneration,
 DWORD* pdwCookie,
 SPWORDLIST* pWordList
);

/* ISpLexicon::RemovePronunciation  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT RemovePronunciation(
 const WCHAR* pszWord,
 LANGID LangID,
 SPPARTOFSPEECH ePartOfSpeech,
 void* pvReserved
);

/* ISpMMSysAudio::GetDeviceId  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetDeviceId(
 UINT* puDeviceId
);

/* ISpMMSysAudio::GetLineId  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetLineId(
 UINT* puLineId
);

/* ISpMMSysAudio::GetMMHandle  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetMMHandle(
 void** pHandle
);

/* ISpMMSysAudio::Read  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Read(
 void* pv, 
 ULONG cb,
 ULONG* pcbRead
);

/* ISpMMSysAudio::SetDeviceId  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetDeviceId( 
 UINT uDeviceId
);

/* ISpMMSysAudio::SetLineId  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetLineId( 
 UINT uLineId
);

/* ISpMMSysAudio::Write  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Write( 
 const void* pv, 
 ULONG cb,
 ULONG* pcbWritten
);

/* ISpRecognizer::SetInput  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetInput(
 IUnknown* pUnkInput,
 BOOL fAllowFormatChanges
);

/* ISpRecognizer::SetRecognizer  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetRecognizer(
 ISpObjectToken* pEngineToken
);

/* ISpRecognizer::SetRecoProfile  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetRecoProfile(
 ISpObjectToken* pToken
);

/* ISpRecognizer::SetRecoState  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetRecoState(
 SPRECOSTATE NewState
);

/* ISpRecoGrammar::GetGrammarState  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetGrammarState(
 SPGRAMMARSTATE* peGrammarState
);

/* ISpRecoGrammar::GetRecoContext  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRecoContext(
 ISpRecoContext** ppRecoCtxt
);

/* ISpRecoGrammar::IsPronounceable  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT IsPronounceable(
 const WCHAR* pszWord,
 SPWORDPRONOUNCEABLE* pfPronounceable
);

/* ISpRecoGrammar::LoadCmdFromFile  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT LoadCmdFromFile(
 const WCHAR* pszFileName,
 SPLOADOPTIONS Options
);

/* ISpRecoGrammar::LoadCmdFromMemory  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT LoadCmdFromMemory(
 const SPBINARYGRAMMAR* pBinaryData,
 SPLOADOPTIONS Options
);

/* ISpRecoGrammar::LoadCmdFromProprietaryGrammar  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT LoadCmdFromProprietaryGrammar(
 REFGUID rguidParam,
 const WCHAR* pszStringParam,
 const void* pvDataParam,
 ULONG cbDataSize,
 SPLOADOPTIONS Options
);

/* ISpRecoGrammar::LoadCmdFromResource  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT LoadCmdFromResource(
 HMODULE hModule,
 const WCHAR* pszResourceName,
 const WCHAR* pszResourceType,
 WORD wLanguage,
 SPLOADOPTIONS Options
);

/* ISpRecoGrammar::LoadDictation  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT LoadDictation(
 const WCHAR* pszTopicName,
 SPLOADOPTIONS Options
);

/* ISpRecoGrammar::SaveCmd  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SaveCmd(
 IStream* pSaveStream,
 WCHAR** ppCoMemErrorText
);

/* ISpRecoGrammar::SetDictationState  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetDictationState(
 SPRULESTATE NewState
);

/* ISpRecoGrammar::SetGrammarState  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetGrammarState(
 SPGRAMMARSTATE eGrammarState
);

/* ISpRecoGrammar::SetRuleIdState  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetRuleIdState(
 ULONG ulRuleId,
 SPRULESTATE NewState
);

/* ISpRecoGrammar::SetRuleState  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetRuleState(
 const WCHAR* pszName,
 void* pReserved,
 SPRULESTATE NewState
);

/* ISpRecoGrammar::SetTextSelection  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetTextSelection(
 const SPTEXTSELECTIONINFO* pInfo
);

/* ISpRecoGrammar::SetWordSequenceData  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetWordSequenceData(
 const WCHAR* pText,
 ULONG cchText,
 const SPTEXTSELECTIONINFO* pInfo
);

/* ISpRecoGrammar::UnloadDictation  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT UnloadDictation(void);

/* ISpRecoResult::GetAlternates  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetAlternates(
 ULONG ulStartElement,
 ULONG cElements,
 ULONG ulRequestCount,
 ISpPhraseAlt** ppPhrases,
 ULONG* pcPhrasesReturned
);

/* ISpRecoResult::GetAudio  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetAudio(
 ULONG ulStartElement,
 ULONG cElements,
 ISpStreamFormat** ppStream
);

/* ISpRecoResult::GetRecoContext  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetRecoContext(
 ISpRecoContext** ppRecoContext
);

/* ISpRecoResult::GetResultTimes  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetResultTimes(
 SPRECORESULTTIMES* pTimes
);

/* ISpRecoResult::ScaleAudio  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT ScaleAudio(
 const GUID* pAudioFormatId,
 const WAVEFORMATEX* pWaveFormatEx
);

/* ISpRecoResult::Serialize  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Serialize(
 SPSERIALIZEDRESULT** ppCoMemSerializedResult
);

/* ISpRecoResult::SpeakAudio  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SpeakAudio(
 ULONG ulStartElement,
 ULONG cElements,
 DWORD dwFlags, 
 ULONG* pulStreamNumber
);

/* ISpRegDataKey::SetKey  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetKey(
 HKEY hkey, 
 BOOL fReadOnly
);

/* ISpResourceManager::GetObject  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetObject(
 REFGUID guidServiceId,
 REFCLSID ObjectCLSID,
 REFIID ObjectIID,
 BOOL fReleaseWhenNoRefs,
 void** ppObject
);

/* ISpResourceManager::SetObject  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetObject(
 REFGUID guidServiceId,
 IUnknown* pUnkObject
);

/* ISpStream::Close  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT Close(void);

/* ISpStream::GetBaseStream  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetBaseStream(
 IStream** ppStream
);

/* ISpStreamFormat::GetFormat  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetFormat(
 GUID* pguidFormatId,
 WAVEFORMATEX** ppCoMemWaveFormatEx
);

/* ISpStreamFormatConverter::GetBaseStream  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT GetBaseStream(
 ISpStreamFormat** ppStream
);

/* ISpStreamFormatConverter::ResetSeekPosition  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT ResetSeekPosition(void);

/* ISpStreamFormatConverter::SetBaseStream  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetBaseStream(
 ISpStreamFormat* pStream,
 BOOL fSetFormatToBaseStreamFormat,
 BOOL fWriteToBaseStream
);

/* ISpStreamFormatConverter::SetFormat  [function; ce-only; CE 5.0..699; Sapilib.lib, sapilib.lib] */
HRESULT SetFormat(
 REFGUID rguidFormatIdOfConvertedStream,
 const WAVEFORMATEX* pWaveFormatExOfConvertedStream
);
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
