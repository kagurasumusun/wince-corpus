/* shlobj_core.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 16 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _SHLOBJ_CORE_
#define _SHLOBJ_CORE_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BIF_BROWSEFILEJUNCTIONS 0x00010000
#define BIF_BROWSEFORCOMPUTER 0x00001000
#define BIF_BROWSEFORPRINTER 0x00002000
#define BIF_BROWSEINCLUDEFILES 0x00004000
#define BIF_BROWSEINCLUDEURLS 0x00000080
#define BIF_DONTGOBELOWDOMAIN 0x00000002
#define BIF_EDITBOX 0x00000010
#define BIF_NEWDIALOGSTYLE 0x00000040
#define BIF_NONEWFOLDERBUTTON 0x00000200
#define BIF_NOTRANSLATETARGETS 0x00000400
#define BIF_RETURNFSANCESTORS 0x00000008
#define BIF_RETURNONLYFSDIRS 0x00000001
#define BIF_SHAREABLE 0x00008000
#define BIF_STATUSTEXT 0x00000004
#define BIF_UAHINT 0x00000100
#define BIF_VALIDATE 0x00000020

#endif /* _SHLOBJ_CORE_ */
