/* Addrstor.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 0 constants, 21 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _ADDRSTOR_
#define _ADDRSTOR_


/* ==================================================================
 * functions and callbacks
 * ================================================================ */

#if defined(_WIN32_WCE) && ((_WIN32_WCE < 200)) /* CE 1.0..199 */

/* AddAddressCard  [function; ce-only; CE 1.0..199] */
BOOL AddAddressCard(AddressCard *pac, PEGOID *poidCard, int *pindex);

/* CloseAddressBook  [function; ce-only; CE 1.0..199] */
void CloseAddressBook( );

/* CreateAddressBook  [function; ce-only; CE 1.0..199] */
BOOL CreateAddressBook(HHPRTAG *rghhProps, int numProps);

/* DeleteAddressCard  [function; ce-only; CE 1.0..199] */
BOOL DeleteAddressCard(PEGOID oidCard);

/* FindFirstEntry  [function; ce-only; CE 1.0..199] */
CEOID FindFirstEntry (TCHAR *szFind, HHPRTAG hhProp, int *pindex, DWORD dwFlags);

/* FreeAddressCard  [function; ce-only; CE 1.0..199] */
void FreeAddressCard(AddressCard *pac);

/* GetAddressCardIndex  [function; ce-only; CE 1.0..199] */
int GetAddressCardIndex(PEGOID oidCard);

/* GetAddressCardOid  [function; ce-only; CE 1.0..199] */
PEGOID GetAddressCardOid(int nCard);

/* GetAddressCardProperties  [function; ce-only; CE 1.0..199] */
BOOL GetAddressCardProperties(PEGOID oidCard, AddressCard *pac, int numRequestedProps, HHPRTAG *rghhProp);

/* GetColumnProperties  [function; ce-only; CE 1.0..199] */
BOOL GetColumnProperties(HHPRTAG *propList, int * pColumns);

/* GetMatchingEntry  [function; ce-only; CE 1.0..199] */
BOOL GetMatchingEntry(TCHAR *szMatch, int *pBufSize, TCHAR *szField, PEGOID *poidMatch, HHPRTAG *phhMatch);

/* GetNumberOfAddressCards  [function; ce-only; CE 1.0..199] */
int GetNumberOfAddressCards(void);

/* GetPropertyDataStruct  [function; ce-only; CE 1.0..199] */
int GetPropertyDataStruct(int fFlag, ULONG uValue, PropertyDataStruct *ppds);

/* GetSortOrder  [function; ce-only; CE 1.0..199] */
HHPRTAG GetSortOrder(BOOL fDatabaseSort);

/* ModifyAddressCard  [function; ce-only; CE 1.0..199] */
BOOL ModifyAddressCard(AddressCard *pac, PEGOID oidCard, int *pindex);

/* OpenAddressBook  [function; ce-only; CE 1.0..199] */
BOOL OpenAddressBook(HWND hwnd, HHPRTAG hhProp);

/* OpenAddressCard  [function; ce-only; CE 1.0..199] */
BOOL OpenAddressCard(PEGOID oidCard, AddressCard *pac, ULONG uFlags);

/* RecountCards  [function; ce-only; CE 1.0..199] */
void RecountCards();

/* SetColumnProperties  [function; ce-only; CE 1.0..199] */
BOOL SetColumnProperties(HHPRTAG *propList, int nColumns);

/* SetMask  [function; ce-only; CE 1.0..199] */
void SetMask(AddressCard *pac, HHPRTAG hhProp);

/* SetSortOrder  [function; ce-only; CE 1.0..199] */
BOOL SetSortOrder(HHPRTAG hhProp);
#endif /* _WIN32_WCE */

#endif /* _ADDRSTOR_ */
