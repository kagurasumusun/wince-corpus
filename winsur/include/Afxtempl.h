/* Afxtempl.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 16 extra decls
 */
#ifndef _AFXTEMPL_
#define _AFXTEMPL_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
CMap( int nBlockSize = 10 );
TYPE& ElementAt( int nIndex );
void FreeExtra( );
void InitHashTable( UINT hashSize );
POSITION InsertAfter( POSITION position, ARG_TYPE newElement );
POSITION InsertBefore( POSITION position, ARG_TYPE newElement );
BOOL RemoveKey( ARG_KEY key );
void SetAt( int nIndex, ARG_TYPE newElement );
void SetAtGrow( int nIndex, ARG_TYPE newElement ); throw( CMemoryException );

#endif /* _AFXTEMPL_ */
