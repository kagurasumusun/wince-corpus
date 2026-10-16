/* Afxadv.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _AFXADV_
#define _AFXADV_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210)) /* CE 2.0..209 */

/* CRecentFileList::Add  [function; ce-only; CE 2.0..209] */
virtual void Add( LPCTSTR lpszPathName );

/* CRecentFileList::CRecentFileList  [function; ce-only; CE 2.0..209] */
CRecentFileList( UINT nStart, LPCTSTR lpszSection, LPCTSTR lpszEntryFormat, int nSize, int nMaxDispLen = AFX_ABBREV_FILENAME_LEN );

/* CRecentFileList::GetDisplayName  [function; ce-only; CE 2.0..209] */
BOOL GetDisplayName( CString& strName, int nIndex, LPCTSTR lpszCurDir, int nCurDir, BOOL bAtLeastName = TRUE) const;

/* CRecentFileList::GetSize  [function; ce-only; CE 2.0..209] */
int GetSize( ) const;

/* CRecentFileList::ReadList  [function; ce-only; CE 2.0..209] */
virtual void ReadList( );

/* CRecentFileList::Remove  [function; ce-only; CE 2.0..209] */
virtual void Remove( int nIndex );

/* CRecentFileList::UpdateMenu  [function; ce-only; CE 2.0..209] */
virtual void UpdateMenu( CCmdUI* pCmdUI );

/* CRecentFileList::WriteList  [function; ce-only; CE 2.0..209] */
virtual void WriteList( );
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CRecentFileList( UINT nStart, LPCTSTR lpszSection, LPCTSTR lpszEntryFormat, int nSize, int nMaxDispLen = AFX_ABBREV_FILENAME_LEN );

#endif /* _AFXADV_ */
