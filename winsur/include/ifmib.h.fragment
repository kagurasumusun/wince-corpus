/* ifmib.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 2 extra decls
 */
#ifndef _IFMIB_
#define _IFMIB_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct _MIB_IFROW {WCHAR wszName[MAX_INTERFACE_NAME_LEN];DWORD dwIndex;DWORD dwType;DWORD dwMtu;DWORD dwSpeed;DWORD dwPhysAddrLen;BYTE bPhysAddr[MAXLEN_PHYSADDR];DWORD dwAdminStatus;DWORD dwOperStatus;DWORD dwLastChange;DWORD dwInOctets;DWORD dwInUcastPkts;DWORD dwInNUcastPkts;DWORD dwInDiscards;DWORD dwInErrors;DWORD dwInUnknownProtos;DWORD dwOutOctets;DWORD dwOutUcastPkts;DWORD dwOutNUcastPkts;DWORD dwOutDiscards;DWORD dwOutErrors;DWORD dwOutQLen;DWORD dwDescrLen;BYTE bDescr[MAXLEN_IFDESCR];} MIB_IFROW, *PMIB_IFROW;
typedef struct _MIB_IFTABLE {DWORD dwNumEntries; MIB_IFROWtable[ANY_SIZE];} MIB_IFTABLE,*PMIB_IFTABLE;

#endif /* _IFMIB_ */
