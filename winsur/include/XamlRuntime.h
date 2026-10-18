/* XamlRuntime.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 11 constants, 4 declarations, 59 outlines, 0 base types, 0 extra macros, 1 extra decls
 */
#ifndef _XAMLRUNTIME_
#define _XAMLRUNTIME_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define XRFontStretch_Condensed 0x3
#define XRFontStretch_Expanded 0x7
#define XRFontStretch_ExtraCondensed 0x2
#define XRFontStretch_ExtraExpanded 0x8
#define XRFontStretch_Medium 0x5
#define XRFontStretch_Normal 0x5
#define XRFontStretch_SemiCondensed 0x4
#define XRFontStretch_SemiExpanded 0x6
#define XRFontStretch_UltraCondensed 0x1
#define XRFontStretch_UltraExpanded 0x9
#define XRS_STRING 0

/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* PFN_CREATE_CONTROL  [typedef; ce-only] */

/* PFN_PROPERTY_CHANGE  [typedef; ce-only] */

/* PFN_TYPE_CONVERTER  [typedef; ce-only] */

/* XRAlignmentX  [enum; ce-only] */

/* XRAlignmentY  [enum; ce-only] */

/* XRBrushMappingMode  [enum; ce-only] */

/* XRClickMode  [enum; ce-only] */

/* XRClockState  [enum; ce-only] */

/* XRColorInterpolationMode  [enum; ce-only] */

/* XRCornerRadius  [struct; ce-only] */

/* XRCursor  [enum; ce-only] */

/* XRDependencyPropertyMetaData  [struct; ce-only] */

/* XRDragCompletedEventArgs  [struct; ce-only] */

/* XRDragDeltaEventArgs  [struct; ce-only] */

/* XRDragStartedEventArgs  [struct; ce-only] */

/* XRDuration  [struct; ce-only] */

/* XREventArgs  [struct; ce-only] */

/* XRFillBehavior  [enum; ce-only] */

/* XRFillRule  [enum; ce-only] */

/* XRFontStretch  [enum; ce-only] */

/* XRFontStyle  [enum; ce-only] */

/* XRFontWeight  [enum; ce-only] */

/* XRGradientSpreadMethod  [enum; ce-only] */

/* XRGridLength  [struct; ce-only] */

/* XRGridUnitType  [enum; ce-only] */

/* XRHorizontalAlignment  [enum; ce-only] */

/* XRKeyboardNavigationMode  [enum; ce-only] */

/* XRKeyEventArgs  [struct; ce-only] */

/* XRKeyTime  [struct; ce-only] */

/* XRLineStackingStrategy  [enum; ce-only] */

/* XRMouseButtonEventArgs  [struct; ce-only] */

/* XRMouseEventArgs  [struct; ce-only] */

/* XROrientation  [enum; ce-only] */

/* XRPenLineCap  [enum; ce-only] */

/* XRPenLineJoin  [enum; ce-only] */

/* XRPoint  [struct; ce-only] */

/* XRRect  [struct; ce-only] */

/* XRRepeatBehavior  [struct; ce-only] */

/* XRRoutedEventArgs  [struct; ce-only] */

/* XRScrollBarVisibility  [enum; ce-only] */

/* XRScrollChangedEventArgs  [struct; ce-only] */

/* XRScrollEventArgs  [struct; ce-only] */

/* XRScrollEventType  [enum; ce-only] */

/* XRSize  [struct; ce-only] */

/* XRSizeChangedEventArgs  [struct; ce-only] */

/* XRStretch  [enum; ce-only] */

/* XRStyleSimulations  [enum; ce-only] */

/* XRSweepDirection  [enum; ce-only] */

/* XRTextAlignment  [enum; ce-only] */

/* XRTextChangedEventArgs  [struct; ce-only] */

/* XRTextDecorationType  [enum; ce-only] */

/* XRTextWrapping  [enum; ce-only] */

/* XRThickness  [struct; ce-only] */

/* XRThreeState  [enum; ce-only] */

/* XRTimeSpan  [struct; ce-only] */

/* XRVerticalAlignment  [enum; ce-only] */

/* XRVisibility  [enum; ce-only] */

/* XRWindowCreateParams  [struct; ce-only] */

/* XRXamlSource  [struct; ce-only] */

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* VALUE_TYPE  [enum; ce-only] */
#ifndef __WINCE_DEFINED_VALUE_TYPE
#define __WINCE_DEFINED_VALUE_TYPE
enum VALUE_TYPE
{
 VTYPE_NONE = 0,
 VTYPE_FLOAT = 1,
 VTYPE_INT = 2,
 VTYPE_BOOL = 3,
 VTYPE_UINT = 4,
 VTYPE_COLOR = 5,
 VTYPE_READONLY_STRING = 6,
 VTYPE_BSTR = 7,
 VTYPE_POINT = 8,
 VTYPE_RECT = 9,
 VTYPE_THICKNESS = 10,
 VTYPE_SIZE = 11,
 VTYPE_GRIDLENGTH = 12,
 VTYPE_CORNER_RADIUS = 13,
 VTYPE_OBJECT = 14
};
#endif /* __WINCE_DEFINED_VALUE_TYPE */

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 0x600 && _WIN32_WCE < 0x700)) /* CE 6.0..699 */

/* XamlRuntimeInitialize  [function; ce-only; CE 6.0..699] */
BOOL WINAPI XamlRuntimeInitialize();

/* XamlRuntimeUninitialize  [function; ce-only; CE 6.0..699] */
BOOL WINAPI XamlRuntimeUninitialize();

/* XR_HOOKPROC  [function; ce-only; CE 6.0..699] */
BOOL CALLBACK HostHookProc(VOID* pv,
 HWND hwnd,
 UINT Msg,
 WPARAM wParam,
 LPARAM lParam,
 LRESULT* pRetVal);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* function */
BOOL CALLBACK HostHookProc(VOID* pv, HWND hwnd, UINT Msg, WPARAM wParam, LPARAM lParam, LRESULT* pRetVal);

#endif /* _XAMLRUNTIME_ */
