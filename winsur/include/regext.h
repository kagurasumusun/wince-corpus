/* regext.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 3 declarations, 1 outlines, 0 base types, 0 extra macros, 3 extra decls
 */
#ifndef _REGEXT_
#define _REGEXT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* RegistryNotifyCallback  [function, typedef; ce-only; aygshell.lib] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* REG_COMPARISONTYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_TAGREG_COMPARISONTYPE
#define __WINCE_DEFINED_TAGREG_COMPARISONTYPE
#ifndef __WINCE_DEFINED_REG_COMPARISONTYPE
#define __WINCE_DEFINED_REG_COMPARISONTYPE
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
#endif /* __WINCE_DEFINED_REG_COMPARISONTYPE */
#endif /* __WINCE_DEFINED_TAGREG_COMPARISONTYPE */
#ifndef __WINCE_DEFINED_PREG_COMPARISONTYPE
#define __WINCE_DEFINED_PREG_COMPARISONTYPE
typedef REG_COMPARISONTYPE *PREG_COMPARISONTYPE, *LPREG_COMPARISONTYPE;
#endif /* __WINCE_DEFINED_PREG_COMPARISONTYPE */

/* NOTIFICATIONCONDITION  [struct; ce-only] */
#ifndef __WINCE_DEFINED_TAGNOTIFICATIONCONDITION
#define __WINCE_DEFINED_TAGNOTIFICATIONCONDITION
#ifndef __WINCE_DEFINED_NOTIFICATIONCONDITION
#define __WINCE_DEFINED_NOTIFICATIONCONDITION
typedef struct tagNOTIFICATIONCONDITION {
 REG_COMPARISONTYPE ctComparisonType;
 DWORD dwMask;
 union TargetValue {
 LPCTSTR psz;
 DWORD dw;
 };
} NOTIFICATIONCONDITION;
#endif /* __WINCE_DEFINED_NOTIFICATIONCONDITION */
#endif /* __WINCE_DEFINED_TAGNOTIFICATIONCONDITION */
#ifndef __WINCE_DEFINED_PNOTIFICATIONCONDITION
#define __WINCE_DEFINED_PNOTIFICATIONCONDITION
typedef NOTIFICATIONCONDITION *PNOTIFICATIONCONDITION, *LPNOTIFICATIONCONDITION;
#endif /* __WINCE_DEFINED_PNOTIFICATIONCONDITION */

#endif /* _REGEXT_ */
