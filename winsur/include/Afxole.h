/* Afxole.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _AFXOLE_
#define _AFXOLE_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* COleStreamFile::CreateMemoryStream  [function; ce-only; CE 2.0..209] */
BOOL CreateMemoryStream( CFileException* pError = NULL );

/* COleStreamFile::CreateStream  [function; ce-only; CE 2.0..209] */
BOOL CreateStream( LPSTORAGE lpStorage, LPCTSTR lpszName, DWORD nOpenFlags = modeReadWrite|shareExclusive|modeCreate, CFileException* pError = NULL );

/* COleStreamFile::OpenStream  [function; ce-only; CE 2.0..209] */
BOOL OpenStream( LPSTORAGE lpStorage, LPCTSTR lpszName, DWORD nOpenFlags = modeReadWrite|shareExclusive, CFileException* pError = NULL );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL CreateMemoryStream( CFileException* pError = NULL );

#endif /* _AFXOLE_ */
