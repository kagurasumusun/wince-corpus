"""Win32 common constants for Windows CE development.

This module provides essential Win32 constants that are not documented
in Windows CE documentation but are required for development.
Values are from the Windows SDK headers.
"""

# Address families (winsock2.h, ws2def.h)
ADDRESS_FAMILIES = {
    "AF_UNSPEC": 0,
    "AF_UNIX": 1,
    "AF_INET": 2,
    "AF_IMPLINK": 3,
    "AF_PUP": 4,
    "AF_CHAOS": 5,
    "AF_NS": 6,
    "AF_IPX": 6,
    "AF_ISO": 7,
    "AF_OSI": 7,
    "AF_ECMA": 8,
    "AF_DATAKIT": 9,
    "AF_CCITT": 10,
    "AF_SNA": 11,
    "AF_DECnet": 12,
    "AF_DLI": 13,
    "AF_LAT": 14,
    "AF_HYLINK": 15,
    "AF_APPLETALK": 16,
    "AF_NETBIOS": 17,
    "AF_VOICEVIEW": 18,
    "AF_FIREFOX": 19,
    "AF_UNKNOWN1": 20,
    "AF_BAN": 21,
    "AF_ATM": 22,
    "AF_INET6": 23,
    "AF_CLUSTER": 24,
    "AF_12844": 25,
    "AF_IRDA": 26,
    "AF_NETDES": 28,
    "AF_MAX": 29,
}

# Socket types (winsock2.h)
SOCKET_TYPES = {
    "SOCK_STREAM": 1,
    "SOCK_DGRAM": 2,
    "SOCK_RAW": 3,
    "SOCK_RDM": 4,
    "SOCK_SEQPACKET": 5,
}

# Protocol families (winsock2.h)
PROTOCOLS = {
    "IPPROTO_IP": 0,
    "IPPROTO_ICMP": 1,
    "IPPROTO_IGMP": 2,
    "IPPROTO_GGP": 3,
    "IPPROTO_TCP": 6,
    "IPPROTO_PUP": 12,
    "IPPROTO_UDP": 17,
    "IPPROTO_IDP": 22,
    "IPPROTO_IPV6": 41,
    "IPPROTO_ND": 77,
    "IPPROTO_RAW": 255,
    "IPPROTO_MAX": 256,
}

# Invalid handle and socket values (windef.h, winsock2.h)
INVALID_VALUES = {
    "INVALID_HANDLE_VALUE": -1,
    "INVALID_SOCKET": -1,
}

# Common error codes (winerror.h)
# Already in KB, but providing for reference
COMMON_ERRORS = {
    "ERROR_SUCCESS": 0,
    "ERROR_INVALID_FUNCTION": 1,
    "ERROR_FILE_NOT_FOUND": 2,
    "ERROR_PATH_NOT_FOUND": 3,
    "ERROR_ACCESS_DENIED": 5,
    "ERROR_INVALID_HANDLE": 6,
    "ERROR_NOT_ENOUGH_MEMORY": 8,
    "ERROR_BAD_ENVIRONMENT": 10,
    "ERROR_NO_MORE_FILES": 18,
    "ERROR_GEN_FAILURE": 31,
    "ERROR_BROKEN_PIPE": 109,
    "ERROR_MORE_DATA": 234,
    "ERROR_NO_MORE_ITEMS": 259,
}

# File attributes (winnt.h)
FILE_ATTRIBUTES = {
    "FILE_ATTRIBUTE_READONLY": 0x00000001,
    "FILE_ATTRIBUTE_HIDDEN": 0x00000002,
    "FILE_ATTRIBUTE_SYSTEM": 0x00000004,
    "FILE_ATTRIBUTE_DIRECTORY": 0x00000010,
    "FILE_ATTRIBUTE_ARCHIVE": 0x00000020,
    "FILE_ATTRIBUTE_NORMAL": 0x00000080,
    "FILE_ATTRIBUTE_TEMPORARY": 0x00000100,
}

# Creation disposition (winbase.h)
CREATION_DISPOSITIONS = {
    "CREATE_NEW": 1,
    "CREATE_ALWAYS": 2,
    "OPEN_EXISTING": 3,
    "OPEN_ALWAYS": 4,
    "TRUNCATE_EXISTING": 5,
}

# Standard handles (winbase.h)
STANDARD_HANDLES = {
    "STD_INPUT_HANDLE": -10,
    "STD_OUTPUT_HANDLE": -11,
    "STD_ERROR_HANDLE": -12,
}

# Registry values (winreg.h)
REGISTRY_TYPES = {
    "REG_NONE": 0,
    "REG_SZ": 1,
    "REG_EXPAND_SZ": 2,
    "REG_BINARY": 3,
    "REG_DWORD": 4,
    "REG_DWORD_LITTLE_ENDIAN": 4,
    "REG_DWORD_BIG_ENDIAN": 5,
    "REG_LINK": 6,
    "REG_MULTI_SZ": 7,
    "REG_RESOURCE_LIST": 8,
    "REG_FULL_RESOURCE_DESCRIPTOR": 9,
    "REG_RESOURCE_REQUIREMENTS_LIST": 10,
    "REG_QWORD": 11,
    "REG_QWORD_LITTLE_ENDIAN": 11,
}

# Registry access rights (winreg.h)
REGISTRY_ACCESS = {
    "KEY_QUERY_VALUE": 0x0001,
    "KEY_SET_VALUE": 0x0002,
    "KEY_CREATE_SUB_KEY": 0x0004,
    "KEY_ENUMERATE_SUB_KEYS": 0x0008,
    "KEY_NOTIFY": 0x0010,
    "KEY_CREATE_LINK": 0x0020,
    "KEY_WOW64_32KEY": 0x0200,
    "KEY_WOW64_64KEY": 0x0100,
    "KEY_WOW64_RES": 0x0300,
    "KEY_READ": 0x20019,
    "KEY_WRITE": 0x20006,
    "KEY_EXECUTE": 0x20019,
    "KEY_ALL_ACCESS": 0xF003F,
}

# Message box types (winuser.h)
MESSAGE_BOX_TYPES = {
    "MB_OK": 0x00000000,
    "MB_OKCANCEL": 0x00000001,
    "MB_ABORTRETRYIGNORE": 0x00000002,
    "MB_YESNOCANCEL": 0x00000003,
    "MB_YESNO": 0x00000004,
    "MB_RETRYCANCEL": 0x00000005,
    "MB_ICONHAND": 0x00000010,
    "MB_ICONQUESTION": 0x00000020,
    "MB_ICONEXCLAMATION": 0x00000030,
    "MB_ICONASTERISK": 0x00000040,
    "MB_ICONWARNING": 0x00000030,
    "MB_ICONERROR": 0x00000010,
    "MB_ICONINFORMATION": 0x00000040,
    "MB_ICONSTOP": 0x00000010,
}

# Message box results (winuser.h)
MESSAGE_BOX_RESULTS = {
    "IDOK": 1,
    "IDCANCEL": 2,
    "IDABORT": 3,
    "IDRETRY": 4,
    "IDIGNORE": 5,
    "IDYES": 6,
    "IDNO": 7,
}

# Window messages (winuser.h)
WINDOW_MESSAGES = {
    "WM_NULL": 0x0000,
    "WM_CREATE": 0x0001,
    "WM_DESTROY": 0x0002,
    "WM_MOVE": 0x0003,
    "WM_SIZE": 0x0005,
    "WM_ACTIVATE": 0x0006,
    "WM_SETFOCUS": 0x0007,
    "WM_KILLFOCUS": 0x0008,
    "WM_ENABLE": 0x000A,
    "WM_SETTEXT": 0x000C,
    "WM_GETTEXT": 0x000D,
    "WM_GETTEXTLENGTH": 0x000E,
    "WM_PAINT": 0x000F,
    "WM_CLOSE": 0x0010,
    "WM_QUERYENDSESSION": 0x0011,
    "WM_QUIT": 0x0012,
    "WM_QUERYOPEN": 0x0013,
    "WM_ERASEBKGND": 0x0014,
    "WM_SYSCOLORCHANGE": 0x0015,
    "WM_ENDSESSION": 0x0016,
    "WM_SHOWWINDOW": 0x0018,
    "WM_CTLCOLORMSGBOX": 0x0132,
    "WM_CTLCOLOREDIT": 0x0133,
    "WM_CTLCOLORLISTBOX": 0x0134,
    "WM_CTLCOLORBTN": 0x0135,
    "WM_CTLCOLORDLG": 0x0136,
    "WM_CTLCOLORSCROLLBAR": 0x0137,
    "WM_CTLCOLORSTATIC": 0x0138,
}

# All constants grouped by header
WIN32_CONSTANTS = {
    "winsock2.h": {
        **ADDRESS_FAMILIES,
        **SOCKET_TYPES,
        **PROTOCOLS,
        **INVALID_VALUES,
    },
    "windows.h": {
        **INVALID_VALUES,
        **FILE_ATTRIBUTES,
        **CREATION_DISPOSITIONS,
        **STANDARD_HANDLES,
        **REGISTRY_TYPES,
        **REGISTRY_ACCESS,
        **MESSAGE_BOX_TYPES,
        **MESSAGE_BOX_RESULTS,
    },
    "winuser.h": {
        **MESSAGE_BOX_TYPES,
        **MESSAGE_BOX_RESULTS,
        **WINDOW_MESSAGES,
    },
    "winreg.h": {
        **REGISTRY_TYPES,
        **REGISTRY_ACCESS,
    },
}


def get_constants_for_header(header):
    """Get Win32 constants for a specific header file.
    
    Args:
        header: Header file name (e.g., "winsock2.h")
    
    Returns:
        dict: Constant name -> value mapping
    """
    header_lower = header.lower()
    
    # Direct match
    if header_lower in WIN32_CONSTANTS:
        return WIN32_CONSTANTS[header_lower]
    
    # Partial match
    for key, constants in WIN32_CONSTANTS.items():
        if key in header_lower or header_lower in key:
            return constants
    
    return {}


def get_all_constants():
    """Get all Win32 constants.
    
    Returns:
        dict: Header -> (Constant name -> value) mapping
    """
    return WIN32_CONSTANTS.copy()
