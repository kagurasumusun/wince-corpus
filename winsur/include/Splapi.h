/* Splapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 14 constants, 15 declarations, 0 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _SPLAPI_
#define _SPLAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 3.0..399 */
#define SPL_LIMIT_ADD 35
#define SPL_LIMIT_ADD_DOUBLE_CONSONANT 14
#define SPL_LIMIT_ADD_DOUBLE_VOWEL 16
#define SPL_LIMIT_CAPITAL 1
#define SPL_LIMIT_DROP 31
#define SPL_LIMIT_DROP_DOUBLE_CONSONANT 14
#define SPL_LIMIT_DROP_DOUBLE_VOWEL 16
#define SPL_LIMIT_NONE 0
#define SPL_LIMIT_SUBSTITUTE 43
#define SPL_LIMIT_SUBSTITUTE_CONSONANT 41
#define SPL_LIMIT_SUBSTITUTE_VOWEL 21
#define SPL_LIMIT_TRANSPOSE 19
#define SPL_LIMIT_TRANSPOSE_CONSONANT 18
#define SPL_LIMIT_TRANSPOSE_VOWEL 15
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* SPLBUFFER  [struct; ce-only; CE 2.11..2.12, 3.0..499] */
typedef struct tagSPLBUFFER{
 const WCHAR* pwszIn;
 WCHAR* pwszOut;
 SPLSUGGEST aspl[8];
 DWORD iwcIn;
 DWORD cwcIn;
 DWORD dwMode;
 DWORD cwcOut;
 DWORD cwcUsed;
 DWORD dwErr;
 DWORD iwcErr;
 DWORD cwcErr;
 DWORD cspl;
} 
SPLBUFFER, *PSPLBUFFER;

/* SPLSUGGEST  [struct, function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplSuggest( 
 HSPL hspl, 
 SPLBUFFER* psb 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 500)) /* CE 2.11..2.12, 3.0..499 */

/* SplAddUserDict  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplAddUserDict( 
 HSPL hspl, 
 int nID, 
 const WCHAR* pwszAdd,
 const WCHAR* pwszChange
);

/* SplCheck  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplCheck( 
 HSPL hspl, 
 SPLBUFFER* psb 
);

/* SplClrUserDict  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplClrUserDict( 
 HSPL hspl, 
 int nID 
);

/* SplEnumUserDict  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplEnumUserDict( 
 HSPL hspl, 
 int nID, 
 DWORD nIndex, 
 SPLBUFFER* psb 
);

/* SplInit  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplInit( 
 HSPL* phspl, 
 int clex, 
 WCHAR** ppwsz 
);

/* SplLimitGet  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplLimitGet( 
 HSPL hspl, 
 DWORD* pdw 
);

/* SplLimitSet  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplLimitSet( 
 HSPL hspl, 
 DWORD dw 
);

/* SplOptionGet  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplOptionGet( 
 HSPL hspl, 
 DWORD* pdw 
);

/* SplOptionSet  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplOptionSet( 
 HSPL hspl, 
 DWORD dw 
);

/* SplQuit  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplQuit( 
 HSPL hspl 
);

/* SplRemUserDict  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplRemUserDict( 
 HSPL hspl, 
 int nID, 
 const WCHAR* pwsz 
);

/* SplReplace  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplReplace( 
 HSPL hspl, 
 SPLBUFFER* psb 
);

/* SplSizeUserDict  [function; ce-only; CE 2.11..2.12, 3.0..499; Splusa.lib, splusa.lib] */
int SplSizeUserDict( 
 HSPL hspl, 
 int nID, 
 DWORD* pdw 
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct tagSPLBUFFER{
  const WCHAR* pwszIn;
  WCHAR* pwszOut;
  SPLSUGGEST aspl[8];
  DWORD iwcIn;
  DWORD cwcIn;
  DWORD dwMode;
  DWORD cwcOut;
  DWORD cwcUsed;
  DWORD dwErr;
  DWORD iwcErr;
  DWORD cwcErr;
  DWORD cspl;
}
SPLBUFFER, *PSPLBUFFER;
typedef struct tagSPLSUGGEST{
  WCHAR* pwsz;
  DWORD nScore;
}
SPLSUGGEST, *PSPLSUGGEST;

/* function */
int SplSuggest( HSPL hspl, SPLBUFFER * psb );

#endif /* _SPLAPI_ */
