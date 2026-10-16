/* cs.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 26 declarations, 6 outlines, 0 base types, 0 extra macros, 20 extra decls
 */
#ifndef _CS_
#define _CS_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* CSIDENTIFIER  [struct; ce-only] */

/* CSPROPERTY  [struct; ce-only] */

/* CSPROPERTY_BOUNDS_LONGLONG  [struct; ce-only] */

/* CSPROPERTY_STEPPING_LONGLONG  [struct; ce-only] */

/* CSSTREAM_HEADER  [struct; ce-only] */

/* CSTIME  [struct; ce-only] */

/* DEFINE_CSPROPERTY_ITEM  [macro; ce-only] */
#define DEFINE_CSPROPERTY_ITEM(PropertyId, GetHandler,\
 MinProperty, MinData,\
 SetHandler, Values,\
 RelationsCount, Relations,\
 SupportHandler, SerializedSize)\
{\
 PropertyId, (BOOL)GetHandler,\
 MinProperty, MinData,\
 (BOOL)SetHandler, (PCSPROPERTY_VALUES)Values,\
 RelationsCount, (PCSPROPERTY)Relations,\
 NULL, 0\
}

/* DEFINE_CSPROPERTY_SET  [macro; ce-only] */
#define DEFINE_CSPROPERTY_SET(Set,\
 PropertiesCount,\
 PropertyItem,\
 FastIoCount,\
 FastIoTable)\
{\
 Set,\
 PropertiesCount,\
 PropertyItem,\
 FastIoCount,\
 FastIoTable\
}

/* DEFINE_CSPROPERTY_SET_TABLE  [macro; ce-only] */
#define DEFINE_CSPROPERTY_SET_TABLE(tablename) \
 const CSPROPERTY_SET tablename[] =

/* DEFINE_CSPROPERTY_TABLE  [macro; ce-only] */
#define DEFINE_CSPROPERTY_TABLE(tablename)\
 const CSPROPERTY_ITEM tablename[] =

#endif /* _CS_ */
