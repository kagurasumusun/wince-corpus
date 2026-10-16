/* regext.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 16 declarations, 0 outlines, 0 base types, 0 extra macros, 4 extra decls
 */
#ifndef _REGEXT_
#define _REGEXT_


/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* REG_COMPARISONTYPE  [enum; ce-only] */
typedef enum tagREG_COMPARISONTYPE { 
 REG_CT_ANYCHANGE,
 REG_CT_EQUAL,
 REG_CT_NOT_EQUAL,
 REG_CT_GREATER,
 REG_CT_GREATER_OR_EQUAL,
 REG_CT_LESS,
 REG_CT_LESS_OR_EQUAL,
 REG_CT_CONTAINS,
 REG_CT_STARTS_WITH,
 REG_CT_ENDS_WITH
} REG_COMPARISONTYPE;
typedef REG_COMPARISONTYPE *PREG_COMPARISONTYPE, *LPREG_COMPARISONTYPE;

/* NOTIFICATIONCONDITION  [struct; ce-only] */
typedef struct tagNOTIFICATIONCONDITION {
 REG_COMPARISONTYPE ctComparisonType;
 DWORD dwMask;
 union TargetValue {
 LPCTSTR psz;
 DWORD dw; 
 };
} NOTIFICATIONCONDITION;
typedef NOTIFICATIONCONDITION *PNOTIFICATIONCONDITION, *LPNOTIFICATIONCONDITION;

/* cbData  [extra typedef] */
typedef void REGISTRYNOTIFYCALLBACK( HREGNOTIFY hNotify, DWORD dwUserData, const PBYTE pData, const UINT cbData );

#endif /* _REGEXT_ */
