#!/usr/bin/env python3
"""Assign extra declarations to appropriate headers.

This script analyzes extra declarations and assigns them to headers based on:
1. Source page analysis (page-to-header mapping from entities)
2. Name pattern heuristics
3. Declaration type and content

Output: knowledge/kb/declarations-by-header/
"""

import json
import os
import re
from collections import defaultdict
from pathlib import Path
import gzip

# Load extra declarations
extra_declarations = []
with open('knowledge/kb/extra-declarations.jsonl', 'r') as f:
    for line in f:
        extra_declarations.append(json.loads(line))

print(f"Loaded {len(extra_declarations)} extra declarations")

# Load entities to map source pages to headers
entities = []
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

# Assign declarations to headers
header_declarations = defaultdict(list)
unassigned = []

for decl in extra_declarations:
    source = decl.get('source', '')
    name = decl.get('name', '')
    decl_type = decl.get('type', '')
    
    # Try to find headers from source page
    headers = page_to_headers.get(source, set())
    
    # If no headers from page, try heuristics based on name
    if not headers:
        # Common patterns for functions
        if name.startswith(('Create', 'Open', 'Close', 'Delete', 'Get', 'Set', 'Read', 'Write')):
            if 'File' in name or 'Dir' in name or 'Path' in name:
                headers = {'winbase.h'}
            elif 'Reg' in name or 'Registry' in name:
                headers = {'winreg.h'}
            elif 'Process' in name or 'Thread' in name:
                headers = {'winbase.h'}
            elif 'Window' in name or 'Wnd' in name:
                headers = {'winuser.h'}
            elif 'Msg' in name or 'Message' in name:
                headers = {'winuser.h'}
            elif 'DC' in name or 'Draw' in name or 'Paint' in name:
                headers = {'wingdi.h'}
            elif 'Font' in name or 'Text' in name:
                headers = {'wingdi.h'}
            elif 'Bitmap' in name or 'Image' in name:
                headers = {'wingdi.h'}
            elif 'Pen' in name or 'Brush' in name:
                headers = {'wingdi.h'}
            elif 'Menu' in name:
                headers = {'winuser.h'}
            elif 'Dialog' in name or 'Dlg' in name:
                headers = {'winuser.h'}
            elif 'Button' in name or 'Btn' in name:
                headers = {'winuser.h'}
            elif 'Edit' in name:
                headers = {'winuser.h'}
            elif 'List' in name:
                headers = {'winuser.h'}
            elif 'Combo' in name:
                headers = {'winuser.h'}
            elif 'Scroll' in name:
                headers = {'winuser.h'}
            elif 'Timer' in name:
                headers = {'winuser.h'}
            elif 'Clipboard' in name:
                headers = {'winuser.h'}
            elif 'Cursor' in name or 'Icon' in name:
                headers = {'winuser.h'}
            elif 'Keyboard' in name or 'Key' in name:
                headers = {'winuser.h'}
            elif 'Mouse' in name:
                headers = {'winuser.h'}
            elif 'Socket' in name or 'Sock' in name:
                headers = {'winsock2.h'}
            elif 'Service' in name:
                headers = {'winsvc.h'}
            elif 'Memory' in name or 'Mem' in name or 'Heap' in name:
                headers = {'winbase.h'}
            elif 'Library' in name or 'Lib' in name or 'Module' in name:
                headers = {'winbase.h'}
            elif 'Event' in name or 'Mutex' in name or 'Semaphore' in name:
                headers = {'winbase.h'}
            elif 'CriticalSection' in name:
                headers = {'winbase.h'}
        
        # Common patterns for structures
        elif decl_type == 'struct':
            if name.endswith('INFO') or name.endswith('DATA'):
                headers = {'winbase.h'}
            elif 'WINDOW' in name or 'WND' in name:
                headers = {'winuser.h'}
            elif 'MSG' in name or 'MESSAGE' in name:
                headers = {'winuser.h'}
            elif 'DRAW' in name or 'PAINT' in name:
                headers = {'wingdi.h'}
            elif 'FONT' in name or 'TEXT' in name:
                headers = {'wingdi.h'}
            elif 'BITMAP' in name or 'IMAGE' in name:
                headers = {'wingdi.h'}
            elif 'MENU' in name:
                headers = {'winuser.h'}
            elif 'DIALOG' in name or 'DLG' in name:
                headers = {'winuser.h'}
        
        # Common patterns for enums
        elif decl_type == 'enum':
            if 'COLOR' in name:
                headers = {'winuser.h'}
            elif 'STYLE' in name:
                headers = {'winuser.h'}
            elif 'FLAG' in name:
                headers = {'winbase.h'}
            elif 'ERROR' in name:
                headers = {'winerror.h'}
    
    if headers:
        for header in headers:
            header_declarations[header.lower()].append(decl)
    else:
        unassigned.append(decl)

print(f"\nAssignment results:")
print(f"  Assigned to headers: {len(extra_declarations) - len(unassigned)}")
print(f"  Unassigned: {len(unassigned)}")
print(f"  Headers with declarations: {len(header_declarations)}")

# Write assigned declarations by header
output_dir = Path('knowledge/kb/declarations-by-header')
output_dir.mkdir(exist_ok=True)

for header, decls in sorted(header_declarations.items()):
    # Sanitize header name for filesystem
    safe_header = re.sub(r'[<>:"/\\|?*]', '_', header)
    output_file = output_dir / f"{safe_header}.declarations.json"
    # Deduplicate by name and type
    seen = set()
    unique_decls = []
    for d in decls:
        key = (d["type"], d["name"])
        if key not in seen:
            seen.add(key)
            unique_decls.append(d)
    with open(output_file, 'w') as f:
        json.dump(unique_decls, f, indent=2, ensure_ascii=False)

# Write unassigned declarations
with open(output_dir / '_unassigned.declarations.json', 'w') as f:
    json.dump(unassigned, f, indent=2, ensure_ascii=False)

print(f"\nWrote declarations to {output_dir}/")
print(f"Top headers by declaration count:")
for header, decls in sorted(header_declarations.items(), key=lambda x: -len(x[1]))[:20]:
    print(f"  {header}: {len(decls)}")
