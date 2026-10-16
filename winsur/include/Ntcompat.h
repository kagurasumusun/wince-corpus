/* Ntcompat.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 8 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _NTCOMPAT_
#define _NTCOMPAT_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 200 && _WIN32_WCE < 210) || (_WIN32_WCE >= 211 && _WIN32_WCE < 213) || (_WIN32_WCE >= 300 && _WIN32_WCE < 400)) /* CE 2.0..209, 2.11..2.12, 3.0..399 */

/* InitializeListHead  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID InitializeListHead( 
IN PLIST_ENTRY ListHead );

/* InsertHeadList  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID InsertHeadList( 
IN PLIST_ENTRY ListHead, 
IN PLIST_ENTRY Entry );

/* InsertTailList  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID InsertTailList( 
IN PLIST_ENTRY ListHead, 
IN PLIST_ENTRY Entry );

/* PopEntryList  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
PSINGLE_LIST_ENTRY PopEntryList( 
IN PSINGLE_LIST_ENTRY ListHead );

/* PushEntryList  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID PushEntryList( 
IN PSINGLE_LIST_ENTRY ListHead, 
IN PSINGLE_LIST_ENTRY Entry );

/* RemoveEntryList  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
VOID RemoveEntryList( 
IN PLIST_ENTRY Entry );

/* RemoveHeadList  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
PLIST_ENTRY RemoveHeadList( 
IN PLIST_ENTRY ListHead );

/* RemoveTailList  [function; ce-only; CE 2.0..209, 2.11..2.12, 3.0..399] */
PLIST_ENTRY RemoveTailList( 
IN PLIST_ENTRY ListHead );
#endif /* _WIN32_WCE */

#endif /* _NTCOMPAT_ */
