/* cccommon.idl -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 2 constants, 6 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _CCCOMMON_IDL_
#define _CCCOMMON_IDL_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define FileCustomAction_COM 0x0001
#define FileCustomAction_None 0x0000

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FileInfo  [struct; ce-only; CE 5.0..699; coredll.lib] */
#endif /* _WIN32_WCE */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* FileCustomAction  [enum; ce-only; CE 5.0..699] */
typedef enum tagFileCustomAction{
 FileCustomAction_None = 0x0000,
 FileCustomAction_COM = 0x0001,
} FileAction;

/* FileVerifyInfo  [struct; ce-only; CE 5.0..699] */
typedef struct tagFileVerifyInfo{
 FileVerifyVersion m_AssemblyVersion;
 FileVerifyVersion m_Win32Version;
 BSTR m_Culture;
 BYTE m_PublicKeyToken[PUBLIC_KEY_TOKEN_LENGTH];
 DWORD m_Flags;
} FileVerifyInfo;

/* FileVerifyReference  [struct; ce-only; CE 5.0..699] */
typedef struct tagFileVerifyReference{
 BSTR m_Name;
 BSTR m_SourcePath;
 FileVerifyInfo m_Info;
} FileVerifyReference;

/* FileVerifyResult  [struct; ce-only; CE 5.0..699] */
typedef struct tagFileVerifyResult{
 DWORD m_Version;
 FileVerifyInfo _Info;
} FileVerifyResult;

/* FileVerifyVersion  [struct; ce-only; CE 5.0..699] */
typedef struct tagFileVerifyVersion{
 DWORD m_Major;
 DWORD m_Minor;
 DWORD m_Build;
 DWORD m_Revision;
} FileVerifyVersion;

/* SystemInfo  [struct; ce-only; CE 5.0..699] */
typedef struct tagPlatformInfo{
 DWORD m_OSMajor;
 DWORD m_OSMinor;
 DWORD m_BuildNo;
 DWORD m_ProcessorArchitecture;
 DWORD m_InstructionSet;
} SystemInfo;
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum tagFileCustomAction{ FileCustomAction_None = 0x0000, FileCustomAction_COM = 0x0001,} FileAction;

#endif /* _CCCOMMON_IDL_ */
