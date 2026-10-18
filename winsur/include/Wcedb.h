/* Wcedb.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 26 extra decls
 */
#ifndef _WCEDB_
#define _WCEDB_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
#ifdef __cplusplus
BOOL AddProp(CCeDBProp* pProp);
#endif /* __cplusplus */
#ifdef __cplusplus
BOOL AddProps(CCeDBProp* pPropArray, int nNumProps);
#endif /* __cplusplus */
#ifdef __cplusplus
BOOL AddRecord(CCeDBRecord* pRecord);
#endif /* __cplusplus */
void DeleteAllProps();
BOOL DeleteCurrRecord();
void DeleteProp(WORD wPropIdent);
static BOOL Exists(LPCWSTR szName);
CEOID SeekFirst();
#ifdef __cplusplus
CEOID SeekFirstEqual(CCeDBProp& Prop);
#endif /* __cplusplus */
CEOID SeekNext();
#ifdef __cplusplus
CEOID SeekNextEqual(CCeDBProp& Prop);
#endif /* __cplusplus */
CEOID SeekPrev();
CEOID SeekToRecord(CEOID CeOID);
#ifdef __cplusplus
CEOID SeekValueGreater(CCeDBProp& Prop);
#endif /* __cplusplus */
#ifdef __cplusplus
CEOID SeekValueSmaller(CCeDBProp& Prop);
#endif /* __cplusplus */
void SetFiletime(FILETIME filetime);
BOOL SetIdent(DWORD dwIdent);
BOOL SetLastModified(FILETIME ftLastModified);
void SetLong(long lVal);
void SetShort(short iVal);
void SetSortFlags(WORD wSortFlags);
#ifdef __cplusplus
BOOL SetSortProps(int nSize, const CCeDBProp *pSortProps);
#endif /* __cplusplus */
#ifdef __cplusplus
void SetString(LPWSTR lpwstr, UINT nMode = Copy);
#endif /* __cplusplus */
void SetULong(ULONG ulVal);
void SetUShort(USHORT uiVal);

#endif /* _WCEDB_ */
