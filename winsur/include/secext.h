/* secext.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _SECEXT_
#define _SECEXT_


/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* enum */
typedef enum {NameUnknown = 0,NameFullyQualifiedDN = 1,NameSamCompatible = 2,NameDisplay = 3,NameUniqueId = 6,NameCanonical = 7,NameUserPrincipal = 8,NameCanonicalEx = 9,NameServicePrincipal = 10,NameWindowsCeLocal = 0x80000001} EXTENDED_NAME_FORMAT, *PEXTENDED_NAME_FORMAT;

#endif /* _SECEXT_ */
