# mingw-w64 cross-check (REVIEW ONLY) -- commit 63ebe6cdb3ec

Reference material: pinned mingw-w64 headers in `sources/mingw-w64/` (licence investigation and usage rules in its PROVENANCE.md).  These reports compare the CE-documented surface (`winsur/constants.tsv`) against that reference.  **Nothing here feeds any generator; a listed name is a lead, not a value to adopt.**

## licence classes of include/ files (re-counted by this tool)

- gpl: 3
- lgpl: 297
- public-domain: 868
- total-files: 1810
- zpl-explicit: 9
- zpl-implicit: 633

## counts

- reference `#define` rows parsed (PD+ZPL files): 140948
- distinct reference names: 127755
- CE-documented constant names: 6158
- names in both: 2425
  - agree: 1257
  - unparseable-either-side: 1148
  - mixed (multi-valued): 20

## reference names absent from the CE surface
- rows in the full lead list (`mingw-w64-not-in-ce.tsv`): 125,330
- excluded as toolchain artefacts: 17,506 compiler-internal (`__...`), 333 include guards
- **candidate cross-check leads: 107,491**

Top families (prefix before first underscore):

- 'DISPID': 6571
- 'ERROR': 2974
- 'STATUS': 1711
- 'SQL': 1651
- 'IID': 1596
- 'MM': 1579
- 'NS': 1232
- 'REGSTR': 1050
- 'D': 1044
- 'IAsyncOperation': 1023
- 'IVectorView': 1008
- 'CERT': 912
- 'OID': 878
- 'E': 833
- 'IIterator': 828

## DISPID spotlight: 6,572 `DISPID_*` names in the reference are undocumented in the CE corpus

The CE corpus documents the MSHTML event handlers themselves but never their dispatch ids (`mshtmdid.h` in the generated surface is declarations-only).  First 40 reference rows (full list in `mingw-w64-not-in-ce.tsv`):

- `DISPIDMASK` = `(0xffff)` (tapi3if.h:740, public-domain)
- `DISPID_1D` = `(DISPID_TEXTSITE + 1000)` (mshtmdid.h:203, zpl-implicit)
- `DISPID_2D` = `DISPID_NORMAL_FIRST` (mshtmdid.h:221, zpl-implicit)
- `DISPID_AAHEADER` = `(DISPID_A_FIRST+257)` (mshtmdid.h:1008, zpl-implicit)
- `DISPID_ABORT` = `10` (scrptids.h:15, public-domain)
- `DISPID_ABOUTBOX` = `(-552)` (olectl.h:344, zpl-implicit)
- `DISPID_ABSOLUTEDROPMODE` = `18` (dhtmldid.h:25, public-domain)
- `DISPID_ACCELERATOR` = `(-543)` (olectl.h:335, zpl-implicit)
- `DISPID_ACC_CHILD` = `(-5002)` (oleacc.h:295, zpl-implicit)
- `DISPID_ACC_CHILDCOUNT` = `(-5001)` (oleacc.h:293, zpl-implicit)
- `DISPID_ACC_DEFAULTACTION` = `(-5013)` (oleacc.h:317, zpl-implicit)
- `DISPID_ACC_DESCRIPTION` = `(-5005)` (oleacc.h:301, zpl-implicit)
- `DISPID_ACC_DODEFAULTACTION` = `(-5018)` (oleacc.h:327, zpl-implicit)
- `DISPID_ACC_FOCUS` = `(-5011)` (oleacc.h:313, zpl-implicit)
- `DISPID_ACC_HELP` = `(-5008)` (oleacc.h:307, zpl-implicit)
- `DISPID_ACC_HELPTOPIC` = `(-5009)` (oleacc.h:309, zpl-implicit)
- `DISPID_ACC_HITTEST` = `(-5017)` (oleacc.h:325, zpl-implicit)
- `DISPID_ACC_KEYBOARDSHORTCUT` = `(-5010)` (oleacc.h:311, zpl-implicit)
- `DISPID_ACC_LOCATION` = `(-5015)` (oleacc.h:321, zpl-implicit)
- `DISPID_ACC_NAME` = `(-5003)` (oleacc.h:297, zpl-implicit)
- `DISPID_ACC_NAVIGATE` = `(-5016)` (oleacc.h:323, zpl-implicit)
- `DISPID_ACC_PARENT` = `(-5000)` (oleacc.h:291, zpl-implicit)
- `DISPID_ACC_ROLE` = `(-5006)` (oleacc.h:303, zpl-implicit)
- `DISPID_ACC_SELECT` = `(-5014)` (oleacc.h:319, zpl-implicit)
- `DISPID_ACC_SELECTION` = `(-5012)` (oleacc.h:315, zpl-implicit)
- `DISPID_ACC_STATE` = `(-5007)` (oleacc.h:305, zpl-implicit)
- `DISPID_ACC_VALUE` = `(-5004)` (oleacc.h:299, zpl-implicit)
- `DISPID_ACTIVATEACTIVEXCONTROLS` = `8` (dhtmldid.h:16, public-domain)
- `DISPID_ACTIVATEAPPLETS` = `7` (dhtmldid.h:15, public-domain)
- `DISPID_ACTIVATEDTCS` = `9` (dhtmldid.h:17, public-domain)
- `DISPID_ACTIVEX_EXPANDO_BASE` = `DISPID_XOBJ_EXPANDO` (mshtmdid.h:26, zpl-implicit)
- `DISPID_ACTIVEX_EXPANDO_MAX` = `(DISPID_ACTIVEX_EXPANDO_BASE + 999)` (mshtmdid.h:27, zpl-implicit)
- `DISPID_ADDITEM` = `(-553)` (olectl.h:345, zpl-implicit)
- `DISPID_ADVISEDATASRCCHANGEEVENT` = `(-3901)` (mshtmdid.h:72, zpl-implicit)
- `DISPID_AMBIENT_APPEARANCE` = `(-716)` (olectl.h:379, zpl-implicit)
- `DISPID_AMBIENT_AUTOCLIP` = `(-715)` (olectl.h:378, zpl-implicit)
- `DISPID_AMBIENT_BACKCOLOR` = `(-701)` (olectl.h:364, zpl-implicit)
- `DISPID_AMBIENT_CHARSET` = `(-727)` (idispids.h:14, public-domain)
- `DISPID_AMBIENT_CODEPAGE` = `(-725)` (idispids.h:13, public-domain)
- `DISPID_AMBIENT_DISPLAYASDEFAULT` = `(-713)` (olectl.h:376, zpl-implicit)
