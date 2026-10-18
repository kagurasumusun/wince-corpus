/* Afx.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 1 declarations, 1 outlines, 0 base types, 0 extra macros, 17 extra decls
 */
#ifndef _AFX_
#define _AFX_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CRuntimeClass  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* CFileStatus  [struct; ce-only] */
#ifdef __cplusplus
struct CFileStatus
{
CTime m_ctime;
CTime m_mtime;
CTime m_atime;
LONG m_size;
BYTE m_attribute;
TCHAR m_szFullName[_MAX_PATH];
};
#endif /* __cplusplus */

/* _MAX_PATH  [extra struct] */
#ifdef __cplusplus
struct CFileStatus
{
 CTime m_ctime;
 CTime m_mtime;
 CTime m_atime;
 LONG m_size;
 BYTE m_attribute;
 TCHAR m_szFullName[_MAX_PATH];
};
#endif /* __cplusplus */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
static int PASCAL ErrnoToException(int nErrno);
void GrowFile(DWORD dwNewLen);
void MakeLower();
void MakeReverse();
void MakeUpper();
BYTE * Memcpy(BYTE* lpMemTarget, BYTE* lpMemSource, UINT nBytes);
static int PASCAL OsErrorToException(LONG lOsError);
#ifdef __cplusplus
void SerializeClass(const CRuntimeClass* pRuntimeClass);
#endif /* __cplusplus */
void SetDepth(int nNewDepth);
#ifdef __cplusplus
void SetLoadParams(UINT nGrowBy = 1024);
#endif /* __cplusplus */
void SetObjectSchema(UINT nSchema);
#ifdef __cplusplus
void SetStoreParams(UINT nHashSize = 2053, UINT nBlockSize = 128);
#endif /* __cplusplus */
static void PASCAL ThrowErrno(int nErrno);
void TrimLeft();
void TrimRight();
#ifdef __cplusplus
void WriteClass(const CRuntimeClass* pClassRef);
#endif /* __cplusplus */

#endif /* _AFX_ */
