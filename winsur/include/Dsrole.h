/* Dsrole.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 4 constants, 3 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _DSROLE_
#define _DSROLE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define DSROLE_PRIMARY_DOMAIN_GUID_PRESENT 0x01000000
#define DSROLE_PRIMARY_DS_MIXED_MODE 0x00000002
#define DSROLE_PRIMARY_DS_RUNNING 0x00000001
#define DSROLE_UPGRADE_IN_PROGRESS 0x00000004

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* DSROLE_PRIMARY_DOMAIN_INFO_BASIC  [struct; shared; CE 5.0..599] */
typedef struct _DSROLE_PRIMARY_DOMAIN_INFO_BASIC { 
 DSROLE_MACHINE_ROLE MachineRole; 
 ULONG Flags; 
 LPWSTR DomainNameFlat; 
 LPWSTR DomainNameDns; 
 LPWSTR DomainForestName; 
 GUID DomainGuid; 
} DSROLE_PRIMARY_DOMAIN_INFO_BASIC, *PDSROLE_PRIMARY_DOMAIN_INFO_BASIC;
#endif /* _WIN32_WCE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* DsRoleFreeMemory  [function; shared; CE 5.0..599; Netapi32.lib] */
void DsRoleFreeMemory( 
 PVOID Buffer 
);

/* DsRoleGetPrimaryDomainInformation  [function; shared; CE 5.0..599; Netapi32.lib] */
DWORD DsRoleGetPrimaryDomainInformation( 
 LPCWSTR lpServer, 
 DSROLE_PRIMARY_DOMAIN_INFO_LEVEL InfoLevel, 
 PBYTE* Buffer 
);
#endif /* _WIN32_WCE */

#endif /* _DSROLE_ */
