/* XamlRuntime.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 125 constants, 65 declarations, 0 outlines, 0 base types, 0 extra macros, 519 extra decls
 */
#ifndef _XAMLRUNTIME_
#define _XAMLRUNTIME_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define VTYPE_BOOL 3
#define VTYPE_BSTR 7
#define VTYPE_COLOR 5
#define VTYPE_CORNER_RADIUS 13
#define VTYPE_FLOAT 1
#define VTYPE_GRIDLENGTH 12
#define VTYPE_INT 2
#define VTYPE_NONE 0
#define VTYPE_OBJECT 14
#define VTYPE_POINT 8
#define VTYPE_READONLY_STRING 6
#define VTYPE_RECT 9
#define VTYPE_SIZE 11
#define VTYPE_THICKNESS 10
#define VTYPE_UINT 4
#define XRAlignmentX_Center 1
#define XRAlignmentX_Left 0
#define XRAlignmentX_Right 2
#define XRAlignmentY_Bottom 2
#define XRAlignmentY_Center 1
#define XRAlignmentY_Top 0
#define XRBrushMappingMode_Absolute 0
#define XRBrushMappingMode_RelativeToBoundingBox 1
#define XRClickMode_Release 0
#define XRClockState_Active 0
#define XRClockState_Filling 1
#define XRClockState_Stopped 2
#define XRColorInterpolationMode_ScRgbLinearInterpolation 0
#define XRColorInterpolationMode_SRgbLinearInterpolation 1
#define XRCursor_Arrow 1
#define XRCursor_Default 0
#define XRCursor_Eraser 6
#define XRCursor_Hand 2
#define XRCursor_IBeam 4
#define XRCursor_None 9
#define XRCursor_SizeNS 7
#define XRCursor_SizeWE 8
#define XRCursor_Stylus 5
#define XRCursor_Wait 3
#define XRFillBehavior_HoldEnd 0
#define XRFillBehavior_Stop 1
#define XRFillRule_EvenOdd 0
#define XRFillRule_Nonzero 1
#define XRFontStretch_Condensed 3
#define XRFontStretch_Expanded 7
#define XRFontStretch_ExtraCondensed 2
#define XRFontStretch_ExtraExpanded 8
#define XRFontStretch_Medium 5
#define XRFontStretch_Normal 5
#define XRFontStretch_SemiCondensed 4
#define XRFontStretch_SemiExpanded 6
#define XRFontStretch_UltraCondensed 1
#define XRFontStretch_UltraExpanded 9
#define XRFontStyle_Italic 2
#define XRFontStyle_Normal 0
#define XRFontStyle_Oblique 1
#define XRFontWeight_Black 900
#define XRFontWeight_Bold 700
#define XRFontWeight_ExtraBlack 950
#define XRFontWeight_ExtraBold 800
#define XRFontWeight_ExtraLight 200
#define XRFontWeight_Light 300
#define XRFontWeight_Medium 500
#define XRFontWeight_Normal 400
#define XRFontWeight_SemiBold 600
#define XRFontWeight_Thin 100
#define XRGradientSpreadMethod_Pad 0
#define XRGradientSpreadMethod_Reflect 1
#define XRGradientSpreadMethod_Repeat 2
#define XRGridUnitType_Auto 0
#define XRGridUnitType_Pixel 1
#define XRGridUnitType_Star 2
#define XRHorizontalAlignment_Center 1
#define XRHorizontalAlignment_Left 0
#define XRHorizontalAlignment_Right 2
#define XRHorizontalAlignment_Stretch 3
#define XRKeyboardNavigationMode_Cycle 1
#define XRKeyboardNavigationMode_Local 0
#define XRKeyboardNavigationMode_Once 2
#define XRLineStackingStrategy_BlockLineHeight 1
#define XRLineStackingStrategy_MaxHeight 0
#define XROrientation_Horizontal 1
#define XROrientation_Vertical 0
#define XRPenLineCap_Flat 0
#define XRPenLineCap_Round 2
#define XRPenLineCap_Square 1
#define XRPenLineCap_Triangle 3
#define XRPenLineJoin_Bevel 1
#define XRPenLineJoin_Miter 0
#define XRPenLineJoin_Round 2
#define XRS_STRING 0
#define XRScrollBarVisibility_Disabled 0
#define XRScrollEventType_EndScroll 8
#define XRScrollEventType_First 6
#define XRScrollEventType_LargeDecrement 2
#define XRScrollEventType_LargeIncrement 3
#define XRScrollEventType_Last 7
#define XRScrollEventType_SmallDecrement 0
#define XRScrollEventType_SmallIncrement 1
#define XRScrollEventType_ThumbPosition 4
#define XRScrollEventType_ThumbTrack 5
#define XRStretch_Fill 1
#define XRStretch_None 0
#define XRStretch_Uniform 2
#define XRStretch_UniformToFill 3
#define XRStyleSimulations_BoldItalicSimulation 3
#define XRStyleSimulations_BoldSimulation 1
#define XRStyleSimulations_ItalicSimulation 2
#define XRStyleSimulations_None 0
#define XRSweepDirection_Clockwise 1
#define XRSweepDirection_Counterclockwise 0
#define XRTextAlignment_Center 0
#define XRTextAlignment_Left 1
#define XRTextAlignment_Right 2
#define XRTextDecorationType_None 0
#define XRTextDecorationType_Underline 1
#define XRTextWrapping_NoWrap 1
#define XRTextWrapping_Wrap 2
#define XRThreeState_Unchecked 0
#define XRVerticalAlignment_Bottom 2
#define XRVerticalAlignment_Center 1
#define XRVerticalAlignment_Stretch 3
#define XRVerticalAlignment_Top 0
#define XRVisibility_Collapsed 1
#define XRVisibility_Visible 0

/* ==================================================================
 * types -- structures, enumerations and typedefs; the member
 * outlines marked DERIVED below document a structure whose
 * declaration body no page prints
 * ================================================================ */

/* XRAlignmentX  [enum; ce-only] */
enum XRAlignmentX{
 XRAlignmentX_Left=0,
 XRAlignmentX_Center=1,
 XRAlignmentX_Right=2
};

/* XRAlignmentY  [enum; ce-only] */
enum XRAlignmentY{
 XRAlignmentY_Top=0,
 XRAlignmentY_Center=1,
 XRAlignmentY_Bottom=2
};

/* XRBrushMappingMode  [enum; ce-only] */
enum XRBrushMappingMode
{
 XRBrushMappingMode_Absolute=0,
 XRBrushMappingMode_RelativeToBoundingBox=1
};

/* XRClickMode  [enum; ce-only] */
enum XRClickMode{
 XRClickMode_Release = 0, 
 XRClickMode_Press, 
 XRClickMode_Hover,
};

/* XRClockState  [enum; ce-only] */
enum XRClockState
{
 XRClockState_Active=0,
 XRClockState_Filling=1,
 XRClockState_Stopped=2
};

/* XRColorInterpolationMode  [enum; ce-only] */
enum XRColorInterpolationMode{
 XRColorInterpolationMode_ScRgbLinearInterpolation=0,
 XRColorInterpolationMode_SRgbLinearInterpolation=1
};

/* XRCornerRadius  [struct; ce-only] */
struct XRCornerRadius{
 float TopLeft;
 float TopRight;
 float BottomRight;
 float BottomLeft;
};

/* XRCursor  [enum; ce-only] */
enum XRCursor
{
 XRCursor_Default = 0,
 XRCursor_Arrow = 1,
 XRCursor_Hand = 2,
 XRCursor_Wait = 3,
 XRCursor_IBeam = 4,
 XRCursor_Stylus = 5,
 XRCursor_Eraser = 6,
 XRCursor_SizeNS = 7,
 XRCursor_SizeWE = 8,
 XRCursor_None = 9
};

/* XRDragCompletedEventArgs  [struct; ce-only] */
struct XRDragCompletedEventArgs : XRRoutedEventArgs{
 double HorizontalChange;
 double VerticalChange;
 bool Cancelled;
};

/* XRDragDeltaEventArgs  [struct; ce-only] */
struct XRDragDeltaEventArgs : XRRoutedEventArgs{
 double HorizontalDelta;
 double VeriticalDelta;
};

/* XRDragStartedEventArgs  [struct; ce-only] */
struct XRDragStartedEventArgs : XRRoutedEventArgs{
 double VerticalOffset;
 double HorizontalOffset;
};

/* XRDuration  [struct; ce-only] */
struct XRDuration{
 enum _DurationType{
 DurationType_Automatic,
 DurationType_TimeSpan,
 DurationType_Forever
 };
 XRTimeSpan TimeSpan;
 _DurationType DurationType;
};

/* XREventArgs  [struct; ce-only] */
struct XREventArgs{
 UINT Size;
};

/* XRFillBehavior  [enum; ce-only] */
enum XRFillBehavior{
 XRFillBehavior_HoldEnd=0,
 XRFillBehavior_Stop=1
};

/* XRFillRule  [enum; ce-only] */
enum XRFillRule
{
 XRFillRule_EvenOdd=0,
 XRFillRule_Nonzero=1
};

/* XRFontStretch  [enum; ce-only] */
enum XRFontStretch{
 XRFontStretch_UltraCondensed=1,
 XRFontStretch_ExtraCondensed=2,
 XRFontStretch_Condensed=3,
 XRFontStretch_SemiCondensed=4,
 XRFontStretch_Normal=5,
 XRFontStretch_Medium=5,
 XRFontStretch_SemiExpanded=6,
 XRFontStretch_Expanded=7,
 XRFontStretch_ExtraExpanded=8,
 XRFontStretch_UltraExpanded=9
};

/* XRFontStyle  [enum; ce-only] */
enum XRFontStyle{
 XRFontStyle_Normal=0,
 XRFontStyle_Oblique=1,
 XRFontStyle_Italic=2
};

/* XRFontWeight  [enum; ce-only] */
enum XRFontWeight{
 XRFontWeight_Thin=100,
 XRFontWeight_ExtraLight=200,
 XRFontWeight_Light=300,
 XRFontWeight_Normal=400,
 XRFontWeight_Medium=500,
 XRFontWeight_SemiBold=600,
 XRFontWeight_Bold=700,
 XRFontWeight_ExtraBold=800,
 XRFontWeight_Black=900,
 XRFontWeight_ExtraBlack=950
};

/* XRGradientSpreadMethod  [enum; ce-only] */
enum XRGradientSpreadMethod{
 XRGradientSpreadMethod_Pad=0,
 XRGradientSpreadMethod_Reflect=1,
 XRGradientSpreadMethod_Repeat=2
};

/* XRGridLength  [struct; ce-only] */
struct XRGridLength{
 float UnitValue;
 XRGridUnitType UnitType;
};

/* XRGridUnitType  [enum; ce-only] */
enum XRGridUnitType{
 XRGridUnitType_Auto=0,
 XRGridUnitType_Pixel=1,
 XRGridUnitType_Star=2
};

/* XRHorizontalAlignment  [enum; ce-only] */
enum XRHorizontalAlignment{
 XRHorizontalAlignment_Left=0,
 XRHorizontalAlignment_Center=1,
 XRHorizontalAlignment_Right=2,
 XRHorizontalAlignment_Stretch=3
};

/* XRKeyboardNavigationMode  [enum; ce-only] */
enum XRKeyboardNavigationMode{
 XRKeyboardNavigationMode_Local=0,
 XRKeyboardNavigationMode_Cycle=1,
 XRKeyboardNavigationMode_Once=2
};

/* XRKeyEventArgs  [struct; ce-only] */
struct XRKeyEventArgs : XRRoutedEventArgs{
 BOOL Handled;
 UINT PlatformKeyCode;
};

/* XRKeyTime  [struct; ce-only] */
struct XRKeyTime : public XRTimeSpan
{
};

/* XRLineStackingStrategy  [enum; ce-only] */
enum XRLineStackingStrategy{
 XRLineStackingStrategy_MaxHeight=0,
 XRLineStackingStrategy_BlockLineHeight=1
};

/* XRMouseButtonEventArgs  [struct; ce-only] */
struct XRMouseButtonEventArgs : XRMouseEventArgs{
 BOOL Handled;
};

/* XRMouseEventArgs  [struct; ce-only] */
struct XRMouseEventArgs : XRRoutedEventArgs{
 XRPoint Position;
 IXRStylusInfo *pStylusInfo;
 IXRStylusPointCollection *pStylusPoints;
};

/* XROrientation  [enum; ce-only] */
enum XROrientation{
 XROrientation_Vertical=0,
 XROrientation_Horizontal=1
};

/* XRPenLineCap  [enum; ce-only] */
enum XRPenLineCap{
 XRPenLineCap_Flat=0,
 XRPenLineCap_Square=1,
 XRPenLineCap_Round=2,
 XRPenLineCap_Triangle=3
};

/* XRPenLineJoin  [enum; ce-only] */
enum XRPenLineJoin{
 XRPenLineJoin_Miter=0,
 XRPenLineJoin_Bevel=1,
 XRPenLineJoin_Round=2
};

/* XRPoint  [struct; ce-only] */
struct XRPoint{
 float x;
 float y;
};

/* XRRect  [struct; ce-only] */
struct XRRect{
 float left;
 float top;
 float right;
 float bottom;
};

/* XRRepeatBehavior  [struct; ce-only] */
struct XRRepeatBehavior{
 enum RepeatBehaviorType{
 RepeatBehaviorType_IterationCount,
 RepeatBehaviorType_RepeatDuration,
 RepeatBehaviorType_Forever
 };
 float IterationCount;
 XRTimeSpan RepeatDuration;
 RepeatBehaviorType BehaviorType;
};

/* XRRoutedEventArgs  [struct; ce-only] */
struct XRRoutedEventArgs : XREventArgs{
 IXRDependencyObject *pSource;
};

/* XRScrollBarVisibility  [enum; ce-only] */
enum XRScrollBarVisibility
{
 XRScrollBarVisibility_Disabled = 0,
 XRScrollBarVisibility_Auto,
 XRScrollBarVisibility_Hidden,
 XRScrollBarVisibility_Visible
};

/* XRScrollChangedEventArgs  [struct; ce-only] */
struct XRScrollChangedEventArgs : XRRoutedEventArgs
{
 float XOffset;
 float YOffset;
};

/* XRScrollEventArgs  [struct; ce-only] */
struct XRScrollEventArgs : XRRoutedEventArgs
{
 float NewValue;
 XRScrollEventType ScrollEventType;
};

/* XRScrollEventType  [enum; ce-only] */
enum XRScrollEventType{
 XRScrollEventType_EndScroll = 8,
 XRScrollEventType_First = 6,
 XRScrollEventType_LargeDecrement = 2,
 XRScrollEventType_LargeIncrement = 3,
 XRScrollEventType_Last = 7,
 XRScrollEventType_SmallDecrement = 0,
 XRScrollEventType_SmallIncrement = 1,
 XRScrollEventType_ThumbPosition = 4,
 XRScrollEventType_ThumbTrack = 5
};

/* XRSize  [struct; ce-only] */
struct XRSize{
 float cx;
 float cy;
};

/* XRSizeChangedEventArgs  [struct; ce-only] */
struct XRSizeChangedEventArgs : XRRoutedEventArgs
{
 XRSize PreviousSize;
 XRSize NewSize;
};

/* XRStretch  [enum; ce-only] */
enum XRStretch{
 XRStretch_None=0,
 XRStretch_Fill=1,
 XRStretch_Uniform=2,
 XRStretch_UniformToFill=3
};

/* XRStyleSimulations  [enum; ce-only] */
enum XRStyleSimulations{
 XRStyleSimulations_None=0,
 XRStyleSimulations_BoldSimulation=1,
 XRStyleSimulations_ItalicSimulation=2,
 XRStyleSimulations_BoldItalicSimulation=3
};

/* XRSweepDirection  [enum; ce-only] */
enum XRSweepDirection
{
 XRSweepDirection_Counterclockwise=0,
 XRSweepDirection_Clockwise=1
};

/* XRTextAlignment  [enum; ce-only] */
enum XRTextAlignment{
 XRTextAlignment_Center=0,
 XRTextAlignment_Left=1,
 XRTextAlignment_Right=2
};

/* XRTextChangedEventArgs  [struct; ce-only] */
struct XRTextChangedEventArgs : XRRoutedEventArgs{
};

/* XRTextDecorationType  [enum; ce-only] */
enum XRTextDecorationType{
 XRTextDecorationType_None=0,
 XRTextDecorationType_Underline=1
};

/* XRTextWrapping  [enum; ce-only] */
enum XRTextWrapping{
 XRTextWrapping_NoWrap = 1,
 XRTextWrapping_Wrap = 2
};

/* XRThickness  [struct; ce-only] */
struct XRThickness{
 float Left;
 float Top;
 float Right;
 float Bottom;
};

/* XRThreeState  [enum; ce-only] */
enum XRThreeState
{
 XRThreeState_Unchecked = 0,
 XRThreeState_Checked,
 XRThreeState_Indeterminate
};

/* XRTimeSpan  [struct; ce-only] */
struct XRTimeSpan
{
 XRTimeSpan(){};
 XRTimeSpan(__int64 TotalTicks)
 XRTimeSpan(int Days, int Hours, int Minutes, int Seconds, 
 int Milliseconds)
 static const int MinutesPerDay = 3600;
 static const int HoursPerDay = 24;
 static const int MinutesPerHour = 60;
 static const int MillisecondPerSecond = 1000;
 __int64 TotalSeconds()
 __int64 TotalMinutes()
 __int64 TotalHours()
 __int64 TotalMilliseconds()
 static __int64 FromSeconds(double Value)
 static __int64 Interval(double Value, int scale)
 __int64 Ticks;
 static const __int64 TicksPerDay = 864000000000;
 static const __int64 TicksPerHour = 36000000000;
 static const __int64 TicksPerMinute = 600000000;
 static const __int64 TicksPerSecond = 10000000;
 static const __int64 TicksPerMillisecond = 10000;
};

/* XRVerticalAlignment  [enum; ce-only] */
enum XRVerticalAlignment{
 XRVerticalAlignment_Top=0,
 XRVerticalAlignment_Center=1,
 XRVerticalAlignment_Bottom=2,
 XRVerticalAlignment_Stretch=3
};

/* XRVisibility  [enum; ce-only] */
enum XRVisibility{
 XRVisibility_Visible = 0,
 XRVisibility_Collapsed = 1
};

/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 600 && _WIN32_WCE < 700)) /* CE 6.0..699 */

/* FreeXRValue  [function; ce-only; CE 6.0..699] */
void WINAPI FreeXRValue(
 XRValue* pValue
);

/* GetXRApplicationInstance  [function; ce-only; CE 6.0..699] */
HRESULT WINAPI GetXRApplicationInstance(
 IXRApplication** ppApplication
);

/* XamlRuntimeInitialize  [function; ce-only; CE 6.0..699] */
BOOL WINAPI XamlRuntimeInitialize();

/* XamlRuntimeUninitialize  [function; ce-only; CE 6.0..699] */
BOOL WINAPI XamlRuntimeUninitialize();

/* XR_HOOKPROC  [function; ce-only; CE 6.0..699] */
BOOL CALLBACK HostHookProc(
 VOID* pv,
 HWND hwnd,
 UINT Msg,
 WPARAM wParam,
 LPARAM lParam,
 LRESULT* pRetVal
);
#endif /* _WIN32_WCE */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* typedef */
typedef HRESULT (CALLBACK *PFN_CREATE_CONTROL)( IXRDependencyObject *pExistingAXDO, IXRDependencyObject** pNewAXDO );
typedef void (CALLBACK* PFN_PROPERTY_CHANGE)( IXRDependencyObject* pControl,  XRValue* pOldValue,  XRValue* pNewValue );
typedef HRESULT (CALLBACK* PFN_TYPE_CONVERTER)( XRValue *pValIn,  XRValue *pValOut );

/* enum */
enum XRClickMode{
  XRClickMode_Release = 0,
  XRClickMode_Press,
  XRClickMode_Hover,
};
enum XRScrollBarVisibility
{
  XRScrollBarVisibility_Disabled = 0,
  XRScrollBarVisibility_Auto,
  XRScrollBarVisibility_Hidden,
  XRScrollBarVisibility_Visible
};
enum XRThreeState
{
  XRThreeState_Unchecked = 0,
  XRThreeState_Checked,
  XRThreeState_Indeterminate
};

/* struct */
struct XRRepeatBehavior{
  enum RepeatBehaviorType{
    RepeatBehaviorType_IterationCount,
    RepeatBehaviorType_RepeatDuration,
    RepeatBehaviorType_Forever
  };
  float IterationCount;
  XRTimeSpan RepeatDuration;
  RepeatBehaviorType BehaviorType;
};
struct XRThickness{
  float Left;
  float Top;
  float Right;
  float Bottom;
};
struct XRCornerRadius{
  float TopLeft;
  float TopRight;
  float BottomRight;
  float BottomLeft;
};
struct XRDragCompletedEventArgs : XRRoutedEventArgs{
  double HorizontalChange;
  double VerticalChange;
  bool Cancelled;
};
struct XRDuration{
  enum _DurationType{
    DurationType_Automatic,
    DurationType_TimeSpan,
    DurationType_Forever
  };
  XRTimeSpan TimeSpan;
  _DurationType DurationType;
};
struct XRMouseButtonEventArgs : XRMouseEventArgs{ BOOL Handled; };
struct XRDragStartedEventArgs : XRRoutedEventArgs{ double VerticalOffset; double HorizontalOffset; };
struct XRSizeChangedEventArgs : XRRoutedEventArgs
{
  XRSize PreviousSize;
  XRSize NewSize;
};
struct XRWindowCreateParams{
  DWORD Style;
  DWORD ExStyle;
  const WCHAR *pTitle;
  UINT Left;
  UINT Top;
  UINT Width;
  UINT Height;
  XR_HOOKPROC pHookProc;
  VOID *pvUserParam;
  bool AllowsMultipleThreadAccess;
  HWND ParentWindow;
};
struct XRKeyEventArgs : XRRoutedEventArgs{ BOOL Handled; UINT PlatformKeyCode; };
struct XRScrollEventArgs : XRRoutedEventArgs
{
  float NewValue;
  XRScrollEventType ScrollEventType;
};
struct XRTimeSpan
{
  XRTimeSpan(){};
  XRTimeSpan(__int64 TotalTicks)
  XRTimeSpan(int Days, int Hours, int Minutes, int Seconds,
  int Milliseconds)
  static const int MinutesPerDay = 3600;
  static const int HoursPerDay = 24;
  static const int MinutesPerHour = 60;
  static const int MillisecondPerSecond = 1000;
  __int64 TotalSeconds()
  __int64 TotalMinutes()
  __int64 TotalHours()
  __int64 TotalMilliseconds()
  static __int64 FromSeconds(double Value)
  static __int64 Interval(double Value, int scale)
  __int64 Ticks;
  static const __int64 TicksPerDay = 864000000000;
  static const __int64 TicksPerHour = 36000000000;
  static const __int64 TicksPerMinute = 600000000;
  static const __int64 TicksPerSecond = 10000000;
  static const __int64 TicksPerMillisecond = 10000;
};
struct XRGridLength{ float UnitValue; XRGridUnitType UnitType; };
struct XRDragDeltaEventArgs : XRRoutedEventArgs{ double HorizontalDelta; double VeriticalDelta; };
struct XRScrollChangedEventArgs : XRRoutedEventArgs
{
  float XOffset;
  float YOffset;
};
struct XRRect{
  float left;
  float top;
  float right;
  float bottom;
};
struct XRSize{ float cx; float cy; };
struct XRRoutedEventArgs : XREventArgs{ IXRDependencyObject *pSource; };
struct XRMouseEventArgs : XRRoutedEventArgs{
  XRPoint Position;
  IXRStylusInfo *pStylusInfo;
  IXRStylusPointCollection *pStylusPoints;
};

/* function */
void ChangeAnimationDuration(IXRStoryboard* pColorStoryboard);
BOOL CALLBACK HostHookProc( VOID* pv, HWND hwnd, UINT Msg, WPARAM wParam, LPARAM lParam, LRESULT* pRetVal );

#endif /* _XAMLRUNTIME_ */
