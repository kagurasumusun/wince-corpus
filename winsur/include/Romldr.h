/* Romldr.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 1 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _ROMLDR_
#define _ROMLDR_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* XIPCHAIN_ENTRY  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* ROMHDR  [struct; ce-only] */
typedef struct ROMHDR {
 ULONG dllfirst;
 ULONG dlllast;
 ULONG physfirst;
 ULONG physlast;
 ULONG nummods;
 ULONG ulRAMStart;
 ULONG ulRAMFree;
 ULONG ulRAMEnd;
 ULONG ulCopyEntries;
 ULONG ulCopyOffset;
 ULONG ulProfileLen;
 ULONG ulProfileOffset;
 ULONG numfiles;
 ULONG ulKernelFlags;
 ULONG ulFSRamPercent;
 ULONG ulDrivglobStart;
 ULONG ulDrivglobLen;
 USHORT usCPUType;
 USHORT usMiscFlags;
 PVOID pExtensions;
 ULONG ulTrackingStart;
 ULONG ulTrackingLen;
} ROMHDR;
typedef ROMHDR *PROMHDR, *LPROMHDR;

/* OEMRomChain  [struct; ce-only] */
typedef struct ROMChain_t{
 struct ROMChain_t* pNext;
 ROMHDR* pTOC;
} ROMChain_t, OEMRomChain;
typedef OEMRomChain *POEMRomChain, *LPOEMRomChain;

#endif /* _ROMLDR_ */
