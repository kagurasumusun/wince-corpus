/* mshtmdid.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 2688 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _MSHTMDID_
#define _MSHTMDID_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE >= 500 && _WIN32_WCE < 600)) /* CE 5.0..599 */

/* HTMLAnchorEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLAnchorEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLAnchorEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( VOID);

/* HTMLAnchorEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLAnchorEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLAnchorEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLAnchorEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLAnchorEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLAnchorEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLAnchorEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLAnchorEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLAnchorEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLAnchorEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLAnchorEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLAnchorEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLAnchorEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLAnchorEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLAnchorEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLAnchorEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLAnchorEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLAnchorEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLAnchorEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLAnchorEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLAnchorEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLAnchorEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLAnchorEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLAnchorEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLAnchorEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLAnchorEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLAnchorEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLAnchorEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLAnchorEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLAnchorEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLAnchorEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLAnchorEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLAnchorEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLAnchorEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLAnchorEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLAnchorEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLAnchorEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLAnchorEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLAnchorEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLAnchorEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLAnchorEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLAnchorEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAnchorEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLAnchorEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLAnchorEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLAnchorEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLAnchorEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLAnchorEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLAnchorEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLAnchorEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLAnchorEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLAnchorEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLAnchorEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLAnchorEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLAnchorEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLAnchorEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLAnchorEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLAreaEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLAreaEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLAreaEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLAreaEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLAreaEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLAreaEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLAreaEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLAreaEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLAreaEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLAreaEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLAreaEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLAreaEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLAreaEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLAreaEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLAreaEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLAreaEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLAreaEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLAreaEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLAreaEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLAreaEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLAreaEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLAreaEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLAreaEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLAreaEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLAreaEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLAreaEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLAreaEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLAreaEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLAreaEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLAreaEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLAreaEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLAreaEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLAreaEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLAreaEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLAreaEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLAreaEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLAreaEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLAreaEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLAreaEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLAreaEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLAreaEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLAreaEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLAreaEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLAreaEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLAreaEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLAreaEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLAreaEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLAreaEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLAreaEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLAreaEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLAreaEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLAreaEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLAreaEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLAreaEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLAreaEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLAreaEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLAreaEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLAreaEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLAreaEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLButtonElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLButtonElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLButtonElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLButtonElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLButtonElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLButtonElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLButtonElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLButtonElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLButtonElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLButtonElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLButtonElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLButtonElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLButtonElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLButtonElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLButtonElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLButtonElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLButtonElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLButtonElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLButtonElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLButtonElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLButtonElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLButtonElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLButtonElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLButtonElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLButtonElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLButtonElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLButtonElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLButtonElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLButtonElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLButtonElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLButtonElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLButtonElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLButtonElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLButtonElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLButtonElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLButtonElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLButtonElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLButtonElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLButtonElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLButtonElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLButtonElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLButtonElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLButtonElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLButtonElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLButtonElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLButtonElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLButtonElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLButtonElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLButtonElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLButtonElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLButtonElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLButtonElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLButtonElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLButtonElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLButtonElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLButtonElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLButtonElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLButtonElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLButtonElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLControlElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLControlElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLControlElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLControlElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLControlElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLControlElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLControlElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLControlElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLControlElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLControlElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLControlElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLControlElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLControlElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLControlElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLControlElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLControlElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLControlElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLControlElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLControlElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLControlElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLControlElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLControlElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLControlElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLControlElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLControlElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLControlElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLControlElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLControlElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLControlElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLControlElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLControlElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLControlElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLControlElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLControlElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLControlElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLControlElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLControlElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLControlElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLControlElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLControlElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLControlElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLControlElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLControlElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLControlElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLControlElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLControlElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLControlElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLControlElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLControlElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLControlElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLControlElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLControlElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLControlElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLControlElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLControlElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLControlElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLControlElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLControlElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLControlElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLDocumentEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( VOID);

/* HTMLDocumentEvents2::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( VOID);

/* HTMLDocumentEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( VOID);

/* HTMLDocumentEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onselectionchange  [function; ce-only; CE 5.0..599] */
void onselectionchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents2::onstop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onstop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLDocumentEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLDocumentEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLDocumentEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLDocumentEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLDocumentEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLDocumentEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLDocumentEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLDocumentEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLDocumentEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLDocumentEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLDocumentEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLDocumentEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLDocumentEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLDocumentEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLDocumentEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLDocumentEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLDocumentEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLDocumentEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLDocumentEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLDocumentEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLDocumentEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLDocumentEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLDocumentEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLDocumentEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLDocumentEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLDocumentEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLDocumentEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLDocumentEvents::onselectionchange  [function; ce-only; CE 5.0..599] */
void onselectionchange( VOID);

/* HTMLDocumentEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLDocumentEvents::onstop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onstop( VOID);

/* HTMLElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLFormElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onreset  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onreset( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents2::onsubmit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onsubmit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLFormElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLFormElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLFormElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLFormElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLFormElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLFormElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLFormElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLFormElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLFormElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLFormElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLFormElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLFormElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLFormElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLFormElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLFormElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLFormElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLFormElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLFormElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLFormElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLFormElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLFormElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLFormElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLFormElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLFormElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLFormElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLFormElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLFormElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLFormElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLFormElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLFormElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLFormElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLFormElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLFormElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLFormElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLFormElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLFormElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLFormElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLFormElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLFormElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLFormElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLFormElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLFormElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLFormElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFormElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLFormElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLFormElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLFormElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLFormElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLFormElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLFormElementEvents::onreset  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onreset( VOID);

/* HTMLFormElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLFormElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLFormElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLFormElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLFormElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLFormElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLFormElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLFormElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLFormElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLFormElementEvents::onsubmit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onsubmit( VOID);

/* HTMLFrameSiteEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLFrameSiteEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLFrameSiteEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( VOID);

/* HTMLFrameSiteEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLFrameSiteEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLFrameSiteEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLFrameSiteEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLFrameSiteEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLFrameSiteEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLFrameSiteEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLFrameSiteEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLFrameSiteEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLFrameSiteEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLFrameSiteEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLFrameSiteEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLFrameSiteEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLFrameSiteEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLFrameSiteEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLFrameSiteEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLFrameSiteEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLFrameSiteEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLFrameSiteEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLFrameSiteEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLFrameSiteEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLFrameSiteEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLFrameSiteEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLFrameSiteEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLFrameSiteEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLFrameSiteEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLFrameSiteEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLFrameSiteEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLFrameSiteEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( VOID);

/* HTMLFrameSiteEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( VOID);

/* HTMLFrameSiteEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLFrameSiteEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLFrameSiteEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLFrameSiteEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLFrameSiteEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLFrameSiteEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLFrameSiteEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLFrameSiteEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLFrameSiteEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLFrameSiteEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLFrameSiteEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLFrameSiteEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLFrameSiteEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLFrameSiteEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLFrameSiteEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLFrameSiteEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLFrameSiteEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLFrameSiteEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLFrameSiteEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLFrameSiteEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLFrameSiteEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLFrameSiteEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLFrameSiteEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLFrameSiteEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLFrameSiteEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLFrameSiteEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLFrameSiteEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLFrameSiteEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLFrameSiteEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLFrameSiteEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLImgEvents2::onabort  [function; ce-only; CE 5.0..599] */
void onabort( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents::onabort  [function; ce-only; CE 5.0..599] */
void onabort( VOID);

/* HTMLImgEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLImgEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLImgEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLImgEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLImgEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLImgEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLImgEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLImgEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLImgEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLImgEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLImgEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLImgEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLImgEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLImgEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLImgEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLImgEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLImgEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLImgEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLImgEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLImgEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLImgEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLImgEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLImgEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLImgEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLImgEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLImgEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLImgEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLImgEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLImgEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLImgEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLImgEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLImgEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLImgEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLImgEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLImgEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLImgEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLImgEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLImgEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLImgEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLImgEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLImgEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLImgEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLImgEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLImgEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLImgEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLImgEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLImgEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLImgEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLImgEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLImgEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLImgEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLImgEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLImgEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLImgEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLImgEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLImgEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLImgEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLImgEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLImgEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLImgEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLImgEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLInputFileElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onchange  [function; ce-only; CE 5.0..599] */
void onchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onselect  [function; ce-only; CE 5.0..599] */
void onselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLInputFileElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLInputFileElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLInputFileElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLInputFileElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLInputFileElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLInputFileElementEvents::onchange  [function; ce-only; CE 5.0..599] */
void onchange( VOID);

/* HTMLInputFileElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLInputFileElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLInputFileElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLInputFileElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLInputFileElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLInputFileElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLInputFileElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLInputFileElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLInputFileElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLInputFileElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLInputFileElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLInputFileElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLInputFileElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLInputFileElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLInputFileElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLInputFileElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLInputFileElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLInputFileElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLInputFileElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLInputFileElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLInputFileElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLInputFileElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLInputFileElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLInputFileElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputFileElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLInputFileElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLInputFileElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLInputFileElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLInputFileElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLInputFileElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLInputFileElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLInputFileElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLInputFileElementEvents::onselect  [function; ce-only; CE 5.0..599] */
void onselect( VOID);

/* HTMLInputFileElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLInputImageEvents2::onabort  [function; ce-only; CE 5.0..599] */
void onabort( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents::onabort  [function; ce-only; CE 5.0..599] */
void onabort( VOID);

/* HTMLInputImageEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLInputImageEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLInputImageEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLInputImageEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLInputImageEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLInputImageEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLInputImageEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLInputImageEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLInputImageEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLInputImageEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLInputImageEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLInputImageEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLInputImageEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLInputImageEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLInputImageEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLInputImageEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLInputImageEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLInputImageEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLInputImageEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLInputImageEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLInputImageEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLInputImageEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLInputImageEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLInputImageEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLInputImageEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLInputImageEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLInputImageEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLInputImageEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLInputImageEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLInputImageEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLInputImageEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLInputImageEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputImageEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLInputImageEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLInputImageEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLInputImageEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLInputImageEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLInputImageEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLInputImageEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLInputImageEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLInputImageEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLInputTextElementEvents2::onabort  [function; ce-only; CE 5.0..599] */
void onabort( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onchange  [function; ce-only; CE 5.0..599] */
void onchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onselect  [function; ce-only; CE 5.0..599] */
void onselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents::onabort  [function; ce-only; CE 5.0..599] */
void onabort( VOID);

/* HTMLInputTextElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLInputTextElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLInputTextElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLInputTextElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLInputTextElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLInputTextElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLInputTextElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLInputTextElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLInputTextElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLInputTextElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLInputTextElementEvents::onchange  [function; ce-only; CE 5.0..599] */
void onchange( VOID);

/* HTMLInputTextElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLInputTextElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLInputTextElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLInputTextElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLInputTextElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLInputTextElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLInputTextElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLInputTextElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLInputTextElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLInputTextElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLInputTextElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLInputTextElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLInputTextElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLInputTextElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLInputTextElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLInputTextElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLInputTextElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLInputTextElementEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLInputTextElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLInputTextElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLInputTextElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLInputTextElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLInputTextElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLInputTextElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLInputTextElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLInputTextElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLInputTextElementEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLInputTextElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLInputTextElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLInputTextElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLInputTextElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLInputTextElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLInputTextElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLInputTextElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLInputTextElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLInputTextElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLInputTextElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLInputTextElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLInputTextElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLInputTextElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLInputTextElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLInputTextElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLInputTextElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLInputTextElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLInputTextElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLInputTextElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLInputTextElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLInputTextElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLInputTextElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLInputTextElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLInputTextElementEvents::onselect  [function; ce-only; CE 5.0..599] */
void onselect( VOID);

/* HTMLInputTextElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLLabelEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLLabelEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLLabelEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLLabelEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLLabelEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLLabelEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLLabelEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLLabelEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLLabelEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLLabelEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLLabelEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLLabelEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLLabelEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLLabelEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLLabelEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLLabelEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLLabelEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLLabelEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLLabelEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLLabelEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLLabelEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLLabelEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLLabelEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLLabelEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLLabelEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLLabelEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLLabelEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLLabelEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLLabelEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLLabelEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLLabelEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLLabelEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLLabelEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLLabelEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLLabelEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLLabelEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLLabelEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLLabelEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLLabelEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLLabelEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLLabelEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLLabelEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLLabelEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLLabelEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLabelEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLLabelEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLLabelEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLLabelEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLLabelEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLLabelEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLLabelEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLLabelEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLLabelEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLLabelEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLLabelEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLLabelEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLLabelEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLLabelEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLLabelEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLLinkElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLLinkElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLLinkElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLLinkElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLLinkElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLLinkElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLLinkElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLLinkElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLLinkElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLLinkElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLLinkElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLLinkElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLLinkElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLLinkElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLLinkElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLLinkElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLLinkElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLLinkElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLLinkElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLLinkElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLLinkElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLLinkElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLLinkElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLLinkElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLLinkElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLLinkElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLLinkElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLLinkElementEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLLinkElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLLinkElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLLinkElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLLinkElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLLinkElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLLinkElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLLinkElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLLinkElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLLinkElementEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLLinkElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLLinkElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLLinkElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLLinkElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLLinkElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLLinkElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLLinkElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLLinkElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLLinkElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLLinkElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLLinkElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLLinkElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLLinkElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLLinkElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLLinkElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLLinkElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLLinkElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLLinkElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLLinkElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLLinkElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLLinkElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLLinkElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLLinkElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLLinkElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLMapEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLMapEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLMapEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLMapEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLMapEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLMapEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLMapEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLMapEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLMapEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLMapEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLMapEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLMapEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLMapEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLMapEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLMapEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLMapEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLMapEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLMapEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLMapEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLMapEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLMapEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLMapEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLMapEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLMapEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLMapEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLMapEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLMapEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLMapEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLMapEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLMapEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLMapEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLMapEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLMapEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLMapEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLMapEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLMapEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLMapEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLMapEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLMapEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLMapEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLMapEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLMapEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLMapEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLMapEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMapEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLMapEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLMapEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLMapEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLMapEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLMapEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLMapEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLMapEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLMapEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLMapEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLMapEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLMapEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLMapEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLMapEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLMapEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLMarqueeElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onbounce  [function; ce-only; CE 5.0..599] */
void onbounce( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onfinish  [function; ce-only; CE 5.0..599] */
void onfinish( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents2::onstart  [function; ce-only; CE 5.0..599] */
void onstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLMarqueeElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLMarqueeElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLMarqueeElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLMarqueeElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLMarqueeElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLMarqueeElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLMarqueeElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLMarqueeElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLMarqueeElementEvents::onbounce  [function; ce-only; CE 5.0..599] */
void onbounce( VOID);

/* HTMLMarqueeElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLMarqueeElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLMarqueeElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLMarqueeElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLMarqueeElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLMarqueeElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLMarqueeElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLMarqueeElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLMarqueeElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLMarqueeElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLMarqueeElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLMarqueeElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLMarqueeElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLMarqueeElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLMarqueeElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLMarqueeElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLMarqueeElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLMarqueeElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLMarqueeElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLMarqueeElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLMarqueeElementEvents::onfinish  [function; ce-only; CE 5.0..599] */
void onfinish( VOID);

/* HTMLMarqueeElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLMarqueeElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLMarqueeElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLMarqueeElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLMarqueeElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLMarqueeElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLMarqueeElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLMarqueeElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLMarqueeElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLMarqueeElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLMarqueeElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLMarqueeElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLMarqueeElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLMarqueeElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLMarqueeElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLMarqueeElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLMarqueeElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLMarqueeElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLMarqueeElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLMarqueeElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLMarqueeElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLMarqueeElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLMarqueeElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLMarqueeElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLMarqueeElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLMarqueeElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLMarqueeElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLMarqueeElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLMarqueeElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLMarqueeElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLMarqueeElementEvents::onstart  [function; ce-only; CE 5.0..599] */
void onstart( VOID);

/* HTMLNamespaceEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLObjectElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLObjectElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLObjectElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLObjectElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLObjectElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLObjectElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLObjectElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLObjectElementEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLObjectElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLObjectElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLObjectElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLObjectElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLObjectElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLObjectElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLOptionButtonElementEvents2::onabort  [function; ce-only; CE 5.0..599] */
void onabort( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onchange  [function; ce-only; CE 5.0..599] */
void onchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onselect  [function; ce-only; CE 5.0..599] */
void onselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents::onabort  [function; ce-only; CE 5.0..599] */
void onabort( VOID);

/* HTMLOptionButtonElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLOptionButtonElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLOptionButtonElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLOptionButtonElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLOptionButtonElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLOptionButtonElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLOptionButtonElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLOptionButtonElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLOptionButtonElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLOptionButtonElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLOptionButtonElementEvents::onchange  [function; ce-only; CE 5.0..599] */
void onchange( VOID);

/* HTMLOptionButtonElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLOptionButtonElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLOptionButtonElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLOptionButtonElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLOptionButtonElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLOptionButtonElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLOptionButtonElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLOptionButtonElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLOptionButtonElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLOptionButtonElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLOptionButtonElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLOptionButtonElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLOptionButtonElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLOptionButtonElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLOptionButtonElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLOptionButtonElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLOptionButtonElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLOptionButtonElementEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLOptionButtonElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLOptionButtonElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLOptionButtonElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLOptionButtonElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLOptionButtonElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLOptionButtonElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLOptionButtonElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLOptionButtonElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLOptionButtonElementEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLOptionButtonElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLOptionButtonElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLOptionButtonElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLOptionButtonElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLOptionButtonElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLOptionButtonElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLOptionButtonElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLOptionButtonElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLOptionButtonElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLOptionButtonElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLOptionButtonElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLOptionButtonElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLOptionButtonElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLOptionButtonElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLOptionButtonElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLOptionButtonElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLOptionButtonElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLOptionButtonElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLOptionButtonElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLOptionButtonElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLOptionButtonElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLOptionButtonElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLOptionButtonElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLOptionButtonElementEvents::onselect  [function; ce-only; CE 5.0..599] */
void onselect( VOID);

/* HTMLOptionButtonElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLScriptEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLScriptEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLScriptEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLScriptEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLScriptEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLScriptEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLScriptEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLScriptEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLScriptEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLScriptEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLScriptEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLScriptEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLScriptEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLScriptEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLScriptEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLScriptEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLScriptEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLScriptEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLScriptEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLScriptEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLScriptEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLScriptEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLScriptEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLScriptEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLScriptEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLScriptEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLScriptEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLScriptEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLScriptEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLScriptEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLScriptEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLScriptEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLScriptEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLScriptEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLScriptEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLScriptEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLScriptEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLScriptEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLScriptEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLScriptEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLScriptEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLScriptEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLScriptEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLScriptEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLScriptEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLScriptEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLScriptEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLScriptEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLScriptEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLScriptEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLScriptEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLScriptEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLScriptEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLScriptEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLScriptEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLScriptEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLScriptEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLScriptEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLScriptEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLScriptEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLSelectElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onchange  [function; ce-only; CE 5.0..599] */
void onchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLSelectElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLSelectElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLSelectElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLSelectElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLSelectElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLSelectElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLSelectElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLSelectElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLSelectElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLSelectElementEvents::onchange  [function; ce-only; CE 5.0..599] */
void onchange( VOID);

/* HTMLSelectElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLSelectElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLSelectElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLSelectElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLSelectElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLSelectElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLSelectElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLSelectElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLSelectElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLSelectElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLSelectElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLSelectElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLSelectElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLSelectElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLSelectElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLSelectElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLSelectElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLSelectElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLSelectElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLSelectElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLSelectElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLSelectElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLSelectElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLSelectElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLSelectElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLSelectElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLSelectElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLSelectElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLSelectElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLSelectElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLSelectElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLSelectElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLSelectElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLSelectElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLSelectElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLSelectElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLSelectElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLSelectElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLSelectElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLSelectElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLSelectElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLSelectElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLSelectElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLSelectElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLSelectElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLSelectElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLSelectElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLSelectElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLSelectElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLStyleElementEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLStyleElementEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLStyleElementEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLStyleElementEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLStyleElementEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLStyleElementEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLStyleElementEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLStyleElementEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLStyleElementEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLStyleElementEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLStyleElementEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLStyleElementEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLStyleElementEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLStyleElementEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLStyleElementEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLStyleElementEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLStyleElementEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLStyleElementEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLStyleElementEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLStyleElementEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLStyleElementEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLStyleElementEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLStyleElementEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLStyleElementEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLStyleElementEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLStyleElementEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLStyleElementEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLStyleElementEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLStyleElementEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLStyleElementEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLStyleElementEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLStyleElementEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLStyleElementEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLStyleElementEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLStyleElementEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLStyleElementEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLStyleElementEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLStyleElementEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLStyleElementEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLStyleElementEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLStyleElementEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLStyleElementEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLStyleElementEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLStyleElementEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLStyleElementEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLStyleElementEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLStyleElementEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLStyleElementEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLStyleElementEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLStyleElementEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLStyleElementEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLStyleElementEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLStyleElementEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLStyleElementEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLStyleElementEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLStyleElementEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLStyleElementEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLStyleElementEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLStyleElementEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLStyleElementEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLStyleElementEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLTableEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLTableEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLTableEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLTableEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLTableEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLTableEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLTableEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLTableEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLTableEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLTableEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLTableEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLTableEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLTableEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLTableEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLTableEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLTableEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLTableEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLTableEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLTableEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLTableEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLTableEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLTableEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLTableEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLTableEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLTableEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLTableEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLTableEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLTableEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLTableEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLTableEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLTableEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLTableEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLTableEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLTableEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLTableEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLTableEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLTableEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLTableEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLTableEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLTableEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLTableEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLTableEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLTableEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLTableEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTableEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLTableEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLTableEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLTableEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLTableEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLTableEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLTableEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLTableEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLTableEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLTableEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLTableEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLTableEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLTableEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLTableEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLTableEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLTextContainerEvents2::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onchange  [function; ce-only; CE 5.0..599] */
void onchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmove  [function; ce-only; CE 5.0..599] */
void onmove( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onselect  [function; ce-only; CE 5.0..599] */
void onselect( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents2::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents::onactivate  [function; ce-only; CE 5.0..599] */
void onactivate( VOID);

/* HTMLTextContainerEvents::onafterupdate  [function; ce-only; CE 5.0..599] */
void onafterupdate( VOID);

/* HTMLTextContainerEvents::onbeforeactivate  [function; ce-only; CE 5.0..599] */
void onbeforeactivate( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents::onbeforecopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecopy( VOID);

/* HTMLTextContainerEvents::onbeforecut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforecut( VOID);

/* HTMLTextContainerEvents::onbeforedeactivate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforedeactivate( VOID);

/* HTMLTextContainerEvents::onbeforeeditfocus  [function; ce-only; CE 5.0..599] */
void onbeforeeditfocus( VOID);

/* HTMLTextContainerEvents::onbeforepaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforepaste( VOID);

/* HTMLTextContainerEvents::onbeforeupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onbeforeupdate( VOID);

/* HTMLTextContainerEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLTextContainerEvents::oncellchange  [function; ce-only; CE 5.0..599] */
void oncellchange( VOID);

/* HTMLTextContainerEvents::onchange  [function; ce-only; CE 5.0..599] */
void onchange( VOID);

/* HTMLTextContainerEvents::onclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onclick( VOID);

/* HTMLTextContainerEvents::oncontextmenu  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontextmenu( VOID);

/* HTMLTextContainerEvents::oncontrolselect  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncontrolselect( VOID);

/* HTMLTextContainerEvents::oncopy  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncopy( VOID);

/* HTMLTextContainerEvents::oncut  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL oncut( VOID);

/* HTMLTextContainerEvents::ondataavailable  [function; ce-only; CE 5.0..599] */
void ondataavailable( VOID);

/* HTMLTextContainerEvents::ondatasetchanged  [function; ce-only; CE 5.0..599] */
void ondatasetchanged( VOID);

/* HTMLTextContainerEvents::ondatasetcomplete  [function; ce-only; CE 5.0..599] */
void ondatasetcomplete( VOID);

/* HTMLTextContainerEvents::ondblclick  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondblclick( VOID);

/* HTMLTextContainerEvents::ondeactivate  [function; ce-only; CE 5.0..599] */
void ondeactivate( VOID);

/* HTMLTextContainerEvents::ondrag  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrag( VOID);

/* HTMLTextContainerEvents::ondragend  [function; ce-only; CE 5.0..599] */
void ondragend( VOID);

/* HTMLTextContainerEvents::ondragenter  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragenter( VOID);

/* HTMLTextContainerEvents::ondragleave  [function; ce-only; CE 5.0..599] */
void ondragleave( VOID);

/* HTMLTextContainerEvents::ondragover  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragover( VOID);

/* HTMLTextContainerEvents::ondragstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondragstart( VOID);

/* HTMLTextContainerEvents::ondrop  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL ondrop( VOID);

/* HTMLTextContainerEvents::onerrorupdate  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onerrorupdate( VOID);

/* HTMLTextContainerEvents::onfilterchange  [function; ce-only; CE 5.0..599] */
void onfilterchange( VOID);

/* HTMLTextContainerEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLTextContainerEvents::onfocusin  [function; ce-only; CE 5.0..599] */
void onfocusin( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents::onfocusout  [function; ce-only; CE 5.0..599] */
void onfocusout( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLTextContainerEvents::onkeydown  [function; ce-only; CE 5.0..599] */
void onkeydown( VOID);

/* HTMLTextContainerEvents::onkeypress  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onkeypress( VOID);

/* HTMLTextContainerEvents::onkeyup  [function; ce-only; CE 5.0..599] */
void onkeyup( VOID);

/* HTMLTextContainerEvents::onlayoutcomplete  [function; ce-only; CE 5.0..599] */
void onlayoutcomplete( VOID);

/* HTMLTextContainerEvents::onlosecapture  [function; ce-only; CE 5.0..599] */
void onlosecapture( VOID);

/* HTMLTextContainerEvents::onmousedown  [function; ce-only; CE 5.0..599] */
void onmousedown( VOID);

/* HTMLTextContainerEvents::onmouseenter  [function; ce-only; CE 5.0..599] */
void onmouseenter( VOID);

/* HTMLTextContainerEvents::onmouseleave  [function; ce-only; CE 5.0..599] */
void onmouseleave( VOID);

/* HTMLTextContainerEvents::onmousemove  [function; ce-only; CE 5.0..599] */
void onmousemove( VOID);

/* HTMLTextContainerEvents::onmouseout  [function; ce-only; CE 5.0..599] */
void onmouseout( VOID);

/* HTMLTextContainerEvents::onmouseover  [function; ce-only; CE 5.0..599] */
void onmouseover( VOID);

/* HTMLTextContainerEvents::onmouseup  [function; ce-only; CE 5.0..599] */
void onmouseup( VOID);

/* HTMLTextContainerEvents::onmousewheel  [function; ce-only; CE 5.0..599] */
void onmousewheel( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLTextContainerEvents::onmove  [function; ce-only; CE 5.0..599] */
void onmove( VOID);

/* HTMLTextContainerEvents::onmoveend  [function; ce-only; CE 5.0..599] */
void onmoveend( VOID);

/* HTMLTextContainerEvents::onmovestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onmovestart( VOID);

/* HTMLTextContainerEvents::onpaste  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onpaste( VOID);

/* HTMLTextContainerEvents::onpropertychange  [function; ce-only; CE 5.0..599] */
void onpropertychange( VOID);

/* HTMLTextContainerEvents::onreadystatechange  [function; ce-only; CE 5.0..599] */
void onreadystatechange( VOID);

/* HTMLTextContainerEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLTextContainerEvents::onresizeend  [function; ce-only; CE 5.0..599] */
void onresizeend( VOID);

/* HTMLTextContainerEvents::onresizestart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onresizestart( VOID);

/* HTMLTextContainerEvents::onrowenter  [function; ce-only; CE 5.0..599] */
void onrowenter( VOID);

/* HTMLTextContainerEvents::onrowexit  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onrowexit( VOID);

/* HTMLTextContainerEvents::onrowsdelete  [function; ce-only; CE 5.0..599] */
void onrowsdelete( VOID);

/* HTMLTextContainerEvents::onrowsinserted  [function; ce-only; CE 5.0..599] */
void onrowsinserted( VOID);

/* HTMLTextContainerEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLTextContainerEvents::onselect  [function; ce-only; CE 5.0..599] */
void onselect( VOID);

/* HTMLTextContainerEvents::onselectstart  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onselectstart( VOID);

/* HTMLWindowEvents2::onafterprint  [function; ce-only; CE 5.0..599] */
void onafterprint( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onbeforeprint  [function; ce-only; CE 5.0..599] */
void onbeforeprint( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onbeforeunload  [function; ce-only; CE 5.0..599] */
void onbeforeunload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onblur  [function; ce-only; CE 5.0..599] */
void onblur( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onerror  [function; ce-only; CE 5.0..599] */
void onerror( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onload  [function; ce-only; CE 5.0..599] */
void onload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onresize  [function; ce-only; CE 5.0..599] */
void onresize( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents2::onunload  [function; ce-only; CE 5.0..599] */
void onunload( 
 IHTMLEventObj *pEvtObj 
);

/* HTMLWindowEvents::onafterprint  [function; ce-only; CE 5.0..599] */
void onafterprint( VOID);

/* HTMLWindowEvents::onbeforeprint  [function; ce-only; CE 5.0..599] */
void onbeforeprint( VOID);

/* HTMLWindowEvents::onbeforeunload  [function; ce-only; CE 5.0..599] */
void onbeforeunload( VOID);

/* HTMLWindowEvents::onblur  [function; ce-only; CE 5.0..599] */
void onblur( VOID);

/* HTMLWindowEvents::onerror  [function; ce-only; CE 5.0..599] */
void onerror( VOID);

/* HTMLWindowEvents::onfocus  [function; ce-only; CE 5.0..599] */
void onfocus( VOID);

/* HTMLWindowEvents::onhelp  [function; ce-only; CE 5.0..599] */
VARIANT_BOOL onhelp( VOID);

/* HTMLWindowEvents::onload  [function; ce-only; CE 5.0..599] */
void onload( VOID);

/* HTMLWindowEvents::onresize  [function; ce-only; CE 5.0..599] */
void onresize( VOID);

/* HTMLWindowEvents::onscroll  [function; ce-only; CE 5.0..599] */
void onscroll( VOID);

/* HTMLWindowEvents::onunload  [function; ce-only; CE 5.0..599] */
void onunload( VOID);
#endif /* _WIN32_WCE */

#endif /* _MSHTMDID_ */
