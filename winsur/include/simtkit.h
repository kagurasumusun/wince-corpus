/* simtkit.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 22 declarations, 2 outlines, 0 base types, 0 extra macros, 24 extra decls
 */
#ifndef _SIMTKIT_
#define _SIMTKIT_


/* ==================================================================
 * macros -- the macro/#define blocks the pages print (verbatim)
 * ================================================================ */

/* SIMLANGUAGE  [struct; ce-only] */

/* SIMLOCALINFO  [struct; ce-only] */

/* ==================================================================
 * extra declarations -- corpus pages the main
 * parser did not turn into an entity declaration
 * ================================================================ */

/* struct */
typedef struct simcall_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwRedialDuration;
  DWORD dwAddressType;
  DWORD dwNumPlan;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwAddressSize;
  DWORD dwAddressOffset;
  DWORD dwSubAddrSize;
  DWORD dwSubAddrOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMCALL, FAR *LPSIMCALL;
typedef struct simclosechannel_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwChannelId;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMCLOSECHANNEL, FAR *LPSIMCLOSECHANNEL;
typedef struct simeventlist_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwEventsSize;
  DWORD dwEventsOffset;
} SIMEVENTLIST, FAR *LPSIMEVENTLIST;
typedef struct simfilereference_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFileSize;
  DWORD dwFileOffset;
} SIMFILEREFERENCE, FAR *LPSIMFILEREFERENCE;
typedef struct simlanguage_tag {
  DWORD cbSize;
  DWORD dwParams;
  TCHAR lpszLanguage[MAXLEN_LANGUAGE];
} SIMLANGUAGE, FAR *LPSIMLANGUAGE;
typedef struct simlaunchbrowser_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwBrowserId;
  DWORD dwURLSize;
  DWORD dwURLOffset;
  DWORD dwBearerSize;
  DWORD dwBearerOffset;
  DWORD dwGatewaySize;
  DWORD dwGatewayOffset;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwProvisionFileCount;
  DWORD dwProvisionFileSize;
  DWORD dwProvisionFileOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMLAUNCHBROWSER, FAR *LPSIMLAUNCHBROWSER;
typedef struct simlocalinfo_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwLAC;
  DWORD dwCellId;
  TCHAR lpszNumName[MAXLEN_OPERATOR_NUMERIC];
  TCHAR lpszIMEI[MAXLEN_IMEI];
  BYTE rgbNMR[MAXLEN_NMR];
  BYTE rgbBCCH[MAXLEN_BCCH * MAXNUM_BCCH];
  DWORD dwNumBCCH;
} SIMLOCALINFO, *LPSIMLOCALINFO;
typedef struct simmenu_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwDefaultItem;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwMenuItemCount;
  DWORD dwMenuItemSize;
  DWORD dwMenuItemOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMMENU, FAR *LPSIMMENU;
typedef struct simmenuitem_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwIdentifier;
  DWORD dwFlags;
  DWORD dwNextAction;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMMENUITEM, FAR *LPSIMMENUITEM;
typedef struct simopenchannel_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwBearerDescType;
  DWORD dwBufferSize;
  DWORD dwAddressType;
  DWORD dwNumPlan;
  DWORD dwDuration1;
  DWORD dwDuration2;
  DWORD dwLocalAddrType;
  DWORD dwDestAddrType;
  DWORD dwProtocolType;
  DWORD dwPortNum;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwBearerDescSize;
  DWORD dwBearerDescOffset;
  DWORD dwAddressSize;
  DWORD dwAddressOffset;
  DWORD dwSubAddressSize;
  DWORD dwSubAddressOffset;
  DWORD dwLocalAddrSize;
  DWORD dwLocalAddrOffset;
  DWORD dwDestAddrSize;
  DWORD dwDestAddrOffset;
  DWORD dwLoginSize;
  DWORD dwLoginOffset;
  DWORD dwPasswordSize;
  DWORD dwPasswordOffset;
  DWORD dwAccessNameSize;
  DWORD dwAccessNameOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMOPENCHANNEL, FAR *LPSIMOPENCHANNEL;
typedef struct simreceivedata_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwChannelId;
  DWORD dwChannelDataLength;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMRECEIVEDATA, FAR *LPSIMRECEIVEDATA;
typedef struct simrunatcmd_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwCmdSize;
  DWORD dwCmdOffset;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMRUNATCMD, FAR *LPSIMRUNATCMD;
typedef struct simsenddata_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwChannelId;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwChannelDataSize;
  DWORD dwChannelDataOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMSENDDATA, FAR *LPSIMSENDDATA;
typedef struct simsenddtmf_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwDTMFSize;
  DWORD dwDTMFOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMSENDDTMF, FAR *LPSIMSENDDTMF;
typedef struct simsms_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwAddressType;
  DWORD dwNumPlan;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwAddressSize;
  DWORD dwAddressOffset;
  DWORD dwTPDUSize;
  DWORD dwTPDUOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMSMS, FAR *LPSIMSMS;
typedef struct simtext_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwFlags;
  DWORD dwMinResponse;
  DWORD dwMaxResponse;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwDefaultTextSize;
  DWORD dwDefaultTextOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMTEXT, FAR *LPSIMTEXT;
typedef struct simtkitrspclosechannel_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwChannelId;
} SIMTKITRSPCLOSECHANNEL, FAR *LPSIMTKITRSPCLOSECHANNEL;
typedef struct simtkitrspitem_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwId;
} SIMTKITRSPITEM, *LPSIMTKITRSPITEM;
typedef struct simtkitrsppollinterval_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwUnit;
  DWORD dwInterval;
} SIMTKITRSPPOLLINTERVAL, FAR *LPSIMTKITRSPPOLLINTERVAL;
typedef struct simtkitrspreceivedata_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwChannelId;
  DWORD dwDataSize;
  DWORD dwDataOffset;
} SIMTKITRSPRECEIVEDATA, FAR *LPSIMTKITRSPRECEIVEDATA;
typedef struct simtkitrspsenddata_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwChannelId;
  DWORD dwDataLength;
} SIMTKITRSPSENDDATA, FAR *LPSIMTKITRSPSENDDATA;
typedef struct simtkitrsptext_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwDCS;
  DWORD dwYesNo;
  DWORD dwTextOffset;
  DWORD dwTextSize;
} SIMTKITRSPTEXT, FAR *LPSIMTKITRSPTEXT;
typedef struct simtone_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwTone;
  DWORD dwDuration;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMTONE, FAR *LPSIMTONE;
typedef struct simussd_tag {
  DWORD cbSize;
  DWORD dwParams;
  DWORD dwAddressType;
  DWORD dwNumPlan;
  DWORD dwUSSDSize;
  DWORD dwUSSDOffset;
  DWORD dwTextSize;
  DWORD dwTextOffset;
  DWORD dwIconIdentifier;
  DWORD dwIconQualifier;
} SIMUSSD, FAR *LPSIMUSSD;

#endif /* _SIMTKIT_ */
