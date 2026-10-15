#!/usr/bin/env python3
"""Assign extra defines to appropriate headers based on source pages and content."""

import csv
import json
import os
import re
from collections import defaultdict
from pathlib import Path

# Load extra defines
extra_defines = []
with open('knowledge/kb/extra-defines.tsv', 'r') as f:
    reader = csv.DictReader(f, delimiter='\t')
    for row in reader:
        extra_defines.append(row)

print(f"Loaded {len(extra_defines)} extra defines")

# Load entities to map source pages to headers
entities = []
with open('knowledge/kb/entities.jsonl.gz', 'rt') as f:
    import gzip
    for line in gzip.open('knowledge/kb/entities.jsonl.gz', 'rt'):
        entities.append(json.loads(line))

# Build mapping: source page -> headers
page_to_headers = defaultdict(set)
for entity in entities:
    headers = entity.get('headers', [])
    if headers:
        for page in entity.get('ce_pages', []) + entity.get('win32_pages', []):
            for header in headers:
                page_to_headers[page].add(header)

# Load requirements for additional header mapping
requirements = []
import gzip
for line in gzip.open('knowledge/kb/requirements.jsonl.gz', 'rt'):
    requirements.append(json.loads(line))

# Build mapping: page -> headers from requirements
for req in requirements:
    if req.get('field') == 'header':
        page = req.get('source', {}).get('path', '')
        header = req.get('value', '')
        if page and header:
            page_to_headers[page].add(header)

print(f"Built page-to-header mapping for {len(page_to_headers)} pages")

# Assign defines to headers
header_defines = defaultdict(list)
unassigned = []

for define in extra_defines:
    source = define.get('source', '')
    name = define.get('name', '')
    
    # Try to find headers from source page
    headers = page_to_headers.get(source, set())
    
    # If no headers from page, try heuristics based on name
    if not headers:
        # Common patterns
        if name.startswith('WM_'):
            headers = {'winuser.h'}
        elif name.startswith(('WS_', 'WS_EX_')):
            headers = {'winuser.h'}
        elif name.startswith(('BS_', 'BN_')):
            headers = {'winuser.h'}
        elif name.startswith(('ES_', 'EN_')):
            headers = {'winuser.h'}
        elif name.startswith(('SS_', 'STM_')):
            headers = {'winuser.h'}
        elif name.startswith(('LBS_', 'LBN_')):
            headers = {'winuser.h'}
        elif name.startswith(('CBS_', 'CBN_')):
            headers = {'winuser.h'}
        elif name.startswith(('TVM_', 'TVN_', 'TVS_')):
            headers = {'commctrl.h'}
        elif name.startswith(('LVM_', 'LVN_', 'LVS_')):
            headers = {'commctrl.h'}
        elif name.startswith(('TCM_', 'TCN_', 'TCS_')):
            headers = {'commctrl.h'}
        elif name.startswith(('SBT_', 'SB_')):
            headers = {'commctrl.h'}
        elif name.startswith(('TB_', 'TBN_', 'TBS_')):
            headers = {'commctrl.h'}
        elif name.startswith('ERROR_'):
            headers = {'winerror.h'}
        elif name.startswith(('FILE_', 'GENERIC_', 'CREATE_', 'OPEN_')):
            headers = {'winbase.h'}
        elif name.startswith(('MEM_', 'PAGE_', 'SEC_')):
            headers = {'winbase.h'}
        elif name.startswith(('GMEM_', 'LMEM_')):
            headers = {'winbase.h'}
        elif name.startswith(('PROCESS_', 'THREAD_')):
            headers = {'winbase.h'}
        elif name.startswith(('REG_', 'HKEY_')):
            headers = {'winreg.h'}
        elif name.startswith(('SERVICE_', 'SC_')):
            headers = {'winsvc.h'}
        elif name.startswith(('SOCKET_', 'SO_', 'SOL_', 'IPPROTO_', 'AF_')):
            headers = {'winsock2.h'}
        elif name.startswith(('WSA', 'Wsa')):
            headers = {'winsock2.h'}
        elif name.startswith(('GDI_', 'GDIP_')):
            headers = {'gdiplus.h'}
        elif name.startswith(('SRCCOPY', 'SRCAND', 'SRCINVERT', 'PATCOPY')):
            headers = {'wingdi.h'}
        elif name.startswith(('PS_', 'HS_', 'BS_SOLID', 'NULL_BRUSH')):
            headers = {'wingdi.h'}
        elif name.startswith(('TA_', 'VTA_')):
            headers = {'wingdi.h'}
        elif name.startswith(('SPI_', 'SPIF_')):
            headers = {'winuser.h'}
        elif name.startswith(('SM_', 'SMTO_')):
            headers = {'winuser.h'}
        elif name.startswith(('SW_', 'SWP_')):
            headers = {'winuser.h'}
        elif name.startswith(('MB_', 'MBOK', 'MBCANCEL')):
            headers = {'winuser.h'}
        elif name.startswith(('IDC_', 'IDI_', 'IDOK', 'IDCANCEL', 'IDYES', 'IDNO')):
            headers = {'winuser.h'}
        elif name.startswith(('VK_', 'VK_L', 'VK_R')):
            headers = {'winuser.h'}
        elif name.startswith(('COLOR_', 'CLR_')):
            headers = {'winuser.h'}
        elif name.startswith(('CS_', 'CSIDL_')):
            headers = {'winuser.h'}
        elif name.startswith(('DT_', 'DTM_')):
            headers = {'winuser.h'}
        elif name.startswith(('EM_', 'EC_')):
            headers = {'winuser.h'}
        elif name.startswith(('LB_', 'CB_')):
            headers = {'winuser.h'}
        elif name.startswith(('STM_', 'STM_')):
            headers = {'winuser.h'}
        elif name.startswith(('BM_', 'BN_')):
            headers = {'winuser.h'}
        elif name.startswith(('DM_', 'DC_')):
            headers = {'wingdi.h'}
        elif name.startswith(('RASTERCAPS', 'CURVECAPS', 'LINECAPS')):
            headers = {'wingdi.h'}
        elif name.startswith(('BI_', 'DIB_')):
            headers = {'wingdi.h'}
        elif name.startswith(('FW_', 'LF_')):
            headers = {'wingdi.h'}
        elif name.startswith(('OUT_', 'CLIP_')):
            headers = {'wingdi.h'}
        elif name.startswith(('OBJ_', 'OBJ_BRUSH', 'OBJ_PEN')):
            headers = {'wingdi.h'}
        elif name.startswith(('STILLIMAGE', 'STI_')):
            headers = {'sti.h'}
        elif name.startswith(('BTH_', 'BT_')):
            headers = {'bthdef.h', 'bt_api.h'}
        elif name.startswith(('NDR_', 'RPC_')):
            headers = {'rpc.h'}
        elif name.startswith(('CE_', 'Ce')):
            headers = {'ceconfig.h', 'winbase.h'}
        elif name.startswith(('SH_', 'SHGet', 'SHSet')):
            headers = {'shlobj.h', 'aygshell.h'}
        elif name.startswith(('SIP', 'Sip')):
            headers = {'sipapi.h'}
        elif name.startswith(('IMM_', 'Imm')):
            headers = {'imm.h'}
    
    if headers:
        for header in headers:
            header_defines[header.lower()].append(define)
    else:
        unassigned.append(define)

print(f"\nAssignment results:")
print(f"  Assigned to headers: {len(extra_defines) - len(unassigned)}")
print(f"  Unassigned: {len(unassigned)}")
print(f"  Headers with defines: {len(header_defines)}")

# Write assigned defines by header
output_dir = Path('knowledge/kb/defines-by-header')
output_dir.mkdir(exist_ok=True)

for header, defines in sorted(header_defines.items()):
    output_file = output_dir / f"{header}.defines.json"
    with open(output_file, 'w') as f:
        json.dump(defines, f, indent=2)

# Write unassigned defines
with open(output_dir / '_unassigned.defines.json', 'w') as f:
    json.dump(unassigned, f, indent=2)

print(f"\nWrote defines to {output_dir}/")
print(f"Top headers by define count:")
for header, defines in sorted(header_defines.items(), key=lambda x: -len(x[1]))[:20]:
    print(f"  {header}: {len(defines)}")
