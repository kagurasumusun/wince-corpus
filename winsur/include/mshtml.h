/* mshtml.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 23 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MSHTML_
#define _MSHTML_


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
