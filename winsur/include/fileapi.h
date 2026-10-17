/* fileapi.h -- Windows CE unified surface
 *
 * ONE tree for every CE generation.  Version differences use
 * #if defined(_WIN32_WCE) && (_WIN32_WCE >= NNN) branches.
 * Win32-shared entries are marked 'win32-ref'.
 * Generated from wince-docs-corpus knowledge/ by
 * tools/gen-include-def.py --unified.
 * 34 constants, 0 declarations, 0 outlines, 0 base types, 0 extra macros, 0 extra decls
 */
#ifndef _FILEAPI_
#define _FILEAPI_


/* ==================================================================
 * constants (one evidence comment per #define; the
 * #if of a batch covers every #define in it; values
 * that differ per generation pool into #if/#elif
 * chains with the evidence after the #endif)
 * ================================================================ */
#define CREATE_ALWAYS 2
#define CREATE_NEW 1
#define FILE_ATTRIBUTE_COMPRESSED 0x800
#define FILE_ATTRIBUTE_DEVICE 0x40
#define FILE_ATTRIBUTE_DIRECTORY 0x10
#define FILE_ATTRIBUTE_ENCRYPTED 0x4000
#define FILE_ATTRIBUTE_REPARSE_POINT 0x400
#define FILE_ATTRIBUTE_SPARSE_FILE 0x200
#define FILE_FLAG_BACKUP_SEMANTICS 0x02000000
#define FILE_FLAG_DELETE_ON_CLOSE 0x04000000
#define FILE_FLAG_NO_BUFFERING 0x20000000
#define FILE_FLAG_OPEN_NO_RECALL 0x00100000
#define FILE_FLAG_OPEN_REPARSE_POINT 0x00200000
#define FILE_FLAG_OVERLAPPED 0x40000000
#define FILE_FLAG_POSIX_SEMANTICS 0x01000000
#define FILE_FLAG_RANDOM_ACCESS 0x10000000
#define FILE_FLAG_SEQUENTIAL_SCAN 0x08000000
#define FILE_FLAG_SESSION_AWARE 0x00800000
#define FILE_FLAG_WRITE_THROUGH 0x80000000
#define FILE_NOTIFY_CHANGE_ATTRIBUTES 0x00000004
#define FILE_NOTIFY_CHANGE_DIR_NAME 0x00000002
#define FILE_NOTIFY_CHANGE_FILE_NAME 0x00000001
#define FILE_NOTIFY_CHANGE_LAST_WRITE 0x00000010
#define FILE_NOTIFY_CHANGE_SECURITY 0x00000100
#define FILE_NOTIFY_CHANGE_SIZE 0x00000008
#define FILE_SHARE_DELETE 0x00000004
#define FILE_SHARE_READ 0x00000001
#define FILE_SHARE_WRITE 0x00000002
#define FIND_FIRST_EX_CASE_SENSITIVE 1
#define FIND_FIRST_EX_LARGE_FETCH 2
#define FIND_FIRST_EX_ON_DISK_ENTRIES_ONLY 4
#define OPEN_ALWAYS 4
#define OPEN_EXISTING 3
#define TRUNCATE_EXISTING 5

#endif /* _FILEAPI_ */
