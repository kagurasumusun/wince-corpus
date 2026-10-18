/* Atlbase.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2 declarations, 10 outlines, 0 base types, 0 extra macros, 22 extra decls
 */
#ifndef _ATLBASE_
#define _ATLBASE_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CComModule::UpdateRegistryFromResourceD  [struct; ce-only] */

/* CComModule::UpdateRegistryFromResourceS  [struct; ce-only] */

/* CComMultiThreadModel::AutoCriticalSection  [typedef; ce-only] */

/* CComMultiThreadModel::CriticalSection  [typedef; ce-only] */

/* CComMultiThreadModel::ThreadModelNoCS  [typedef; ce-only] */

/* CComMultiThreadModelNoCS::AutoCriticalSection  [typedef; ce-only] */

/* CComMultiThreadModelNoCS::CriticalSection  [typedef; ce-only] */

/* CComMultiThreadModelNoCS::ThreadModelNoCS  [typedef; ce-only] */

/* CComSingleThreadModel::AutoCriticalSection  [typedef; ce-only] */

/* CComSingleThreadModel::CriticalSection  [typedef; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
#ifdef __cplusplus
void Append(const CComBSTR& bstrSrc);
#endif /* __cplusplus */
#ifdef __cplusplus
void CComAutoCriticalSection();
#endif /* __cplusplus */
#ifdef __cplusplus
ULONG CComPtr(VOID);
#endif /* __cplusplus */
#ifdef __cplusplus
ULONG CComQIPtr(VOID);
#endif /* __cplusplus */
static ULONG Decrement(LPLONG p);
LONG DeleteSubKey(LPCTSTR lpszSubKey);
void Empty();
LONG GetLockCount();
HINSTANCE GetModuleInstance();
HINSTANCE GetResourceInstance();
HINSTANCE GetTypeLibInstance();
static ULONG Increment(LPLONG p);
#ifdef __cplusplus
LONG QueryValue(DWORD& dwValue, LPCTSTR lpszValueName);
#endif /* __cplusplus */
LONG RecurseDeleteKey(LPCTSTR lpszKey);
HRESULT RevokeClassObjects();
LONG SetValue(DWORD dwValue, LPCTSTR lpszValueName);
void Term();

#endif /* _ATLBASE_ */
