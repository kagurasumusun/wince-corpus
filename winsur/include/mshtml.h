/* mshtml.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 78 constants, 23 declarations, 0 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _MSHTML_
#define _MSHTML_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define BEHAVIORLAYOUTINFO_FULLDELEGATION 1
#define BEHAVIORLAYOUTINFO_MAPSIZE 4
#define BEHAVIORLAYOUTINFO_MODIFYNATURAL 2
#define BEHAVIORLAYOUTMODE_FINAL_PERCENT 0x8000
#define BEHAVIORLAYOUTMODE_MAXWIDTH 0x0004
#define BEHAVIORLAYOUTMODE_MEDIA_RESOLUTION 0x4000
#define BEHAVIORLAYOUTMODE_MINWIDTH 0x0002
#define BEHAVIORLAYOUTMODE_NATURAL 0x0001
#define CARET_DIRECTION_BACKWARD 2
#define CARET_DIRECTION_FORWARD 3
#define CARET_DIRECTION_INDETERMINATE 0
#define CARET_DIRECTION_SAME 1
#define COORD_SYSTEM_CONTAINER 2
#define COORD_SYSTEM_CONTENT 3
#define COORD_SYSTEM_FRAME 4
#define COORD_SYSTEM_GLOBAL 0
#define COORD_SYSTEM_PARENT 1
#define DISPLAY_BREAK_Block 0x1
#define DISPLAY_BREAK_Break 0x2
#define DISPLAY_BREAK_None 0x0
#define DISPLAY_GRAVITY_NextLine 2
#define DISPLAY_GRAVITY_PreviousLine 1
#define DISPLAY_MOVEUNIT_BottomOfWindow 6
#define DISPLAY_MOVEUNIT_CurrentLineEnd 4
#define DISPLAY_MOVEUNIT_CurrentLineStart 3
#define DISPLAY_MOVEUNIT_NextLine 2
#define DISPLAY_MOVEUNIT_PreviousLine 1
#define DISPLAY_MOVEUNIT_TopOfWindow 5
#define ELEMENT_CORNER_BOTTOM 3
#define ELEMENT_CORNER_BOTTOMLEFT 7
#define ELEMENT_CORNER_BOTTOMRIGHT 8
#define ELEMENT_CORNER_LEFT 2
#define ELEMENT_CORNER_NONE 0
#define ELEMENT_CORNER_RIGHT 4
#define ELEMENT_CORNER_TOP 1
#define ELEMENT_CORNER_TOPLEFT 5
#define ELEMENT_CORNER_TOPRIGHT 6
#define ELEMENTDESCRIPTOR_FLAGS_Max 2147483647
#define ELEMENTDESCRIPTORFLAGS_LITERAL 1
#define ELEMENTDESCRIPTORFLAGS_NESTED_LITERAL 2
#define ELEMENTNAMESPACEFLAGS_ALLOWANYTAG 0x1
#define ELEMENTNAMESPACEFLAGS_QUERYFORUNKNOWNTAGS 0x2
#define HT_OPT_AllowAfterEOL 1
#define HT_RESULTS_Glyph 1
#define HTMLPAINT_DRAW_UPDATEREGION 0x000001
#define HTMLPAINT_DRAW_USE_XFORM 0x000002
#define HTMLPAINT_DRAWINFO_UPDATEREGION 0x000002
#define HTMLPAINT_DRAWINFO_VIEWPORT 0x000001
#define HTMLPAINT_DRAWINFO_XFORM 0x000004
#define HTMLPAINT_EVENT_SETCURSOR 0x0002
#define HTMLPAINT_EVENT_TARGET 0x0001
#define HTMLPAINT_ZORDER_ABOVE_CONTENT 7
#define HTMLPAINT_ZORDER_ABOVE_FLOW 6
#define HTMLPAINT_ZORDER_BELOW_CONTENT 4
#define HTMLPAINT_ZORDER_BELOW_FLOW 5
#define HTMLPAINT_ZORDER_NONE 0
#define HTMLPAINT_ZORDER_REPLACE_ALL 1
#define HTMLPAINT_ZORDER_REPLACE_BACKGROUND 3
#define HTMLPAINT_ZORDER_REPLACE_CONTENT 2
#define HTMLPAINT_ZORDER_WINDOW_TOP 8
#define HTMLPAINTER_3DSURFACE 0x000200
#define HTMLPAINTER_ALPHA 0x000004
#define HTMLPAINTER_COMPLEX 0x000008
#define HTMLPAINTER_HITTEST 0x000020
#define HTMLPAINTER_NOBAND 0x000400
#define HTMLPAINTER_NODC 0x001000
#define HTMLPAINTER_NOPHYSICALCLIP 0x002000
#define HTMLPAINTER_NOSAVEDC 0x004000
#define HTMLPAINTER_OPAQUE 0x000001
#define HTMLPAINTER_OVERLAY 0x000010
#define HTMLPAINTER_SUPPORTS_XFORM 0x008000
#define HTMLPAINTER_SURFACE 0x000100
#define HTMLPAINTER_TRANSPARENT 0x000002
#define SAVE_SEGMENTS_NoIE4SelectionCompat 1
#define SELECTION_TYPE_Caret 1
#define SELECTION_TYPE_Control 3
#define SELECTION_TYPE_None 0
#define SELECTION_TYPE_Text 2

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* DISPLAY_BREAK  [enum; ce-only] */
typedef enum _DISPLAY_BREAK { 
 DISPLAY_BREAK_None = 0x0, 
 DISPLAY_BREAK_Block = 0x1, 
 DISPLAY_BREAK_Break = 0x2 
} DISPLAY_BREAK;

/* DISPLAY_GRAVITY  [enum; ce-only] */
typedef enum _DISPLAY_GRAVITY { 
 DISPLAY_GRAVITY_PreviousLine = 1, 
 DISPLAY_GRAVITY_NextLine = 2 
} DISPLAY_GRAVITY;

/* DISPLAY_MOVEUNIT  [enum; ce-only] */
typedef enum _DISPLAY_MOVEUNIT { 
 DISPLAY_MOVEUNIT_PreviousLine = 1, 
 DISPLAY_MOVEUNIT_NextLine = 2, 
 DISPLAY_MOVEUNIT_CurrentLineStart = 3, 
 DISPLAY_MOVEUNIT_CurrentLineEnd = 4, 
 DISPLAY_MOVEUNIT_TopOfWindow = 5, 
 DISPLAY_MOVEUNIT_BottomOfWindow = 6 
} DISPLAY_MOVEUNIT;

/* HT_OPTIONS  [enum; ce-only] */
typedef enum _HT_OPTIONS { 
 HT_OPT_AllowAfterEOL = 1 
} HT_OPTIONS;

/* HT_RESULTS  [enum; ce-only] */
typedef enum _HT_RESULTS { 
 HT_RESULTS_Glyph = 1 
} HT_RESULTS;

/* HTML_PAINT_XFORM  [struct; ce-only] */
typedef struct _HTML_PAINT_XFORM { 
 FLOAT eM11; 
 FLOAT eM12; 
 FLOAT eM21; 
 FLOAT eM22; 
 FLOAT eDx; 
 FLOAT eDy; 
} HTML_PAINT_XFORM;

/* LINE_DIRECTION  [enum; ce-only] */
typedef enum _LINE_DIRECTION { 
 LINE_DIRECTION_RightToLeft = 1, 
 LINE_DIRECTION_LeftToRight = 2 
} LINE_DIRECTION;

/* SAVE_SEGMENTS_FLAGS  [enum; ce-only] */
typedef enum _SAVE_SEGMENTS_FLAGS { 
 SAVE_SEGMENTS_NoIE4SelectionCompat = 1 
} SAVE_SEGMENTS_FLAGS;

/* SELECTION_TYPE  [enum; ce-only] */
typedef enum _SELECTION_TYPE { 
 SELECTION_TYPE_None = 0, 
 SELECTION_TYPE_Caret = 1, 
 SELECTION_TYPE_Text = 2, 
 SELECTION_TYPE_Control = 3 
} SELECTION_TYPE;

/* HTML_PAINT_DRAW_INFO  [struct; ce-only] */
typedef struct _HTML_PAINT_DRAW_INFO { 
 RECT rcViewport; 
 HRGN hrgnUpdate; 
 HTML_PAINT_XFORM xform; 
} HTML_PAINT_DRAW_INFO;

#endif /* _MSHTML_ */
