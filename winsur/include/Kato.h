/* Kato.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 19 declarations, 0 outlines, 0 base types, 0 extra macros, 14 extra decls
 */
#ifndef _KATO_
#define _KATO_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 700)) /* CE 5.0..699 */

/* KatoBeginLevel  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
INT KatoBeginLevel(
 HKATO hKato,
 DWORD dwLevelID,
 LPCTSTR szFormat
);

/* KatoCallback  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL CALLBACK KatoCallback(
 KATOCALLBACKSTRUCT lpkcbs
);

/* KatoComment  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoComment(
 HKATO hKato,
 DWORD dwVerbosity,
 LPCTSTR szFormat
);

/* KatoCreate  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
HKATO KatoCreate(
 LPCTSTR szName
);

/* KatoDebug  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoDebug(
 BOOL fEnabled,
 DWORD dwMaxLogVerbosity,
 DWORD dwMaxCommentVerbosity,
 DWORD dwMaxLevel
);

/* KatoDestroy  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoDestroy(
 HKATO hKato
);

/* KatoEndLevel  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
INT KatoEndLevel(
 HKATO hKato,
 LPCTSTR szFormat
);

/* KatoFlush  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoFlush(
 KATO_FLUSH_TYPE flushType
);

/* KatoGetCurrentLevel  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
DWORD KatoGetCurrentLevel(
 HKATO hKato
);

/* KatoGetDefaultObject  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
HKATO KatoGetDefaultObject (void);

/* KatoGetItemData  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
DWORD KatoGetItemData(
 HKATO hKato
);

/* KatoGetServer  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoGetServer(
 LPTSTR szServer,
 INT nCount
);

/* KatoGetVerbosityCount  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
INT KatoGetVerbosityCount(
 HKATO hKato,
 DWORD dwVerbosity,
 DWORD dwLevel
);

/* KatoLog  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoLog(
 HKATO hKato,
 DWORD dwVerbosity,
 LPCTSTR szFormat
);

/* KatoSendSystemData  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoSendSystemData(
 HKATO hKato,
 DWORD dwSystemID,
 LPCVOID lpcvBuffer,
 DWORD dwSize
);

/* KatoSetCallback  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoSetCallback(
 LPKATOCALLBACK lpCallback,
 LPARAM lParam
);

/* KatoSetItemData  [function; ce-only; CE 5.0..699; Kato.lib, kato.lib] */
BOOL KatoSetItemData(
 HKATO hKato,
 DWORD dwItemData
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

/* struct */
typedef struct _KATOCALLBACKSTRUCT {LPARAMlParam;HKATOhKato;DWORDdwThreadID;DWORDdwTickCount;DWORDdwLevel;DWORDdwLevelID;DWORDdwVerbosity;LPCTSTRszLog;} KATOCALLBACKSTRUCT, *LPKATOCALLBACKSTRUCT;

/* function */
INT BeginLevel(  DWORD dwLevelID,  LPCTSTR szFormat );
INT BeginLevelV( DWORD dwLevelID,  LPCTSTR szFormat,  va_list pArgs  );
CKato( LPCTSTR szName  );
BOOL Comment( DWORD dwVerbosity, LPCTSTR szFormat );
BOOL CommentV( DWORD dwVerbosity, LPCTSTR szFormat, va_list pArgs );
INT EndLevel( LPCTSTR szFormat );
INT EndLevelV( LPCTSTR szFormat,  va_list pArgs  );
DWORD GetCurrentLevel ();
DWORD GetItemData (void);
INT GetVerbosityCount( DWORD dwVerbosity,  DWORD dwLevel  );
BOOL LogV( DWORD dwVerbosity, LPCTSTR szFormat, va_list pArgs );
BOOL SendSystemData( DWORD dwSystemID, LPCVOID lpcvBuffer, DWORD dwSize );
BOOL SetItemData( DWORD dwItemData );

#endif /* _KATO_ */
