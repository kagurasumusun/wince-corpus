/* Kato.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 8 extra decls
 */
#ifndef _KATO_
#define _KATO_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x500 && _WIN32_WCE < 0x700)) /* CE 5.0..699 */

/* KatoDebug  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoDebug(
 BOOL fEnabled,
 DWORD dwMaxLogVerbosity,
 DWORD dwMaxCommentVerbosity,
 DWORD dwMaxLevel
);

/* KatoGetServer  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoGetServer(
 LPTSTR szServer,
 INT nCount
);

/* KatoSetServer  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoSetServer(
 LPCTSTR szServer
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
INT BeginLevel(  DWORD dwLevelID,  LPCTSTR szFormat );
BOOL Comment( DWORD dwVerbosity, LPCTSTR szFormat );
INT EndLevel( LPCTSTR szFormat );
DWORD GetCurrentLevel ();
DWORD GetItemData (void);
INT GetVerbosityCount( DWORD dwVerbosity,  DWORD dwLevel  );
BOOL SendSystemData( DWORD dwSystemID, LPCVOID lpcvBuffer, DWORD dwSize );
BOOL SetItemData( DWORD dwItemData );

#endif /* _KATO_ */
