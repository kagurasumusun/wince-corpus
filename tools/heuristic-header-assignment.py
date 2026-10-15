#!/usr/bin/env python3
"""Heuristic header assignment for entities without headers.

This script analyzes entities that have CE pages but no header assignment,
and assigns them to headers based on name patterns and library requirements.

Output: Updates knowledge/kb/entities.jsonl.gz with heuristic headers
"""

import gzip
import json
import os
import re
from collections import defaultdict, Counter

# Load entities
entities = []
for line in gzip.open('knowledge/kb/entities.jsonl.gz', 'rt'):
    entities.append(json.loads(line))

print(f"Loaded {len(entities)} entities")

# Load requirements to get library->header mappings
requirements = []
for line in gzip.open('knowledge/kb/requirements.jsonl.gz', 'rt'):
    requirements.append(json.loads(line))

# Build library->header mapping from entities that have both
lib_to_headers = defaultdict(set)
for entity in entities:
    if entity.get('headers') and (entity.get('libraries') or entity.get('dlls')):
        libs = entity.get('libraries', []) + entity.get('dlls', [])
        for lib in libs:
            lib_name = lib.lower().replace('.lib', '').replace('.dll', '')
            for header in entity['headers']:
                lib_to_headers[lib_name].add(header)

print(f"Built library->header mapping for {len(lib_to_headers)} libraries")

# Name pattern -> header mapping
NAME_PATTERNS = {
    # Audio/ACM
    r'^ACM': 'msacm.h',
    r'^AAM_': 'aam.h',
    r'^AMGet': 'amgeterr.h',
    r'^AM_': 'amaudio.h',
    
    # Bluetooth
    r'^Bth': 'bthapi.h',
    r'^BT_': 'bt_api.h',
    r'^BTH_': 'bthdef.h',
    
    # Camera/Image
    r'^Camera': 'camera.h',
    r'^IMG_': 'imgutil.h',
    
    # DirectShow
    r'^DS_': 'dshow.h',
    r'^IAM': 'dshow.h',
    r'^ICreate': 'dshow.h',
    r'^IBase': 'dshow.h',
    r'^IMedia': 'dshow.h',
    r'^IFilter': 'dshow.h',
    r'^IGraph': 'dshow.h',
    
    # Direct3D Mobile
    r'^D3DM': 'd3dm.h',
    r'^IDirect3DMobile': 'd3dm.h',
    
    # DVD
    r'^DVD': 'dvdata.h',
    r'^IDvd': 'dvdata.h',
    
    # IRDA
    r'^IR_': 'irda.h',
    r'^IrDA': 'irda.h',
    
    # Message Queue
    r'^MQ': 'mq.h',
    r'^IMSMQ': 'mq.h',
    
    # NDIS
    r'^Ndis': 'ndis.h',
    r'^NDIS_': 'ndis.h',
    
    # OLE/COM
    r'^Co': 'objbase.h',
    r'^IUnknown': 'unknwn.h',
    r'^IDispatch': 'oaidl.h',
    r'^IStream': 'objidl.h',
    r'^IStorage': 'objidl.h',
    r'^IPersist': 'objidl.h',
    r'^IMalloc': 'objidl.h',
    r'^IEnum': 'objidl.h',
    r'^IClass': 'objidl.h',
    r'^IMoniker': 'objidl.h',
    r'^IBind': 'objidl.h',
    r'^IAdvise': 'objidl.h',
    r'^IData': 'objidl.h',
    r'^IOle': 'oleidl.h',
    r'^Ole': 'ole2.h',
    r'^CLSID_': 'objbase.h',
    r'^IID_': 'objbase.h',
    r'^LIBID_': 'objbase.h',
    
    # RAPI
    r'^Ce': 'rapi.h',
    r'^RAPI': 'rapi.h',
    
    # RTC
    r'^RTC': 'rtccore.h',
    r'^ITRTC': 'rtccore.h',
    
    # SAPI
    r'^SAPI': 'sapi.h',
    r'^ISp': 'sapi.h',
    r'^SP': 'sapi.h',
    
    # SMS
    r'^Sms': 'sms.h',
    r'^SMS_': 'sms.h',
    
    # Socket
    r'^WSA': 'winsock2.h',
    r'^SOCKET_': 'winsock2.h',
    r'^SO_': 'winsock2.h',
    r'^SOL_': 'winsock2.h',
    r'^IPPROTO_': 'winsock2.h',
    r'^AF_': 'winsock2.h',
    
    # TAPI
    r'^TAPI': 'tapi.h',
    r'^line': 'tapi.h',
    r'^phone': 'tapi.h',
    
    # URL Moniker
    r'^URL': 'urlmon.h',
    r'^IUri': 'urlmon.h',
    r'^IBindStatusCallback': 'urlmon.h',
    
    # WIA
    r'^WIA': 'wia.h',
    r'^IWia': 'wia.h',
    
    # WinInet
    r'^Internet': 'wininet.h',
    r'^Http': 'wininet.h',
    r'^Ftp': 'wininet.h',
    r'^Gopher': 'wininet.h',
    
    # XML
    r'^IXML': 'msxml2.h',
    r'^DOM': 'msxml2.h',
    r'^SAX': 'msxml2.h',
}

# Assign headers heuristically
assigned_count = 0
pattern_counts = Counter()

for entity in entities:
    if entity.get('headers'):
        continue  # Already has headers
    if not entity.get('ce_pages'):
        continue  # No CE pages
    
    name = entity['name']
    assigned_headers = set()
    
    # Try name patterns
    for pattern, header in NAME_PATTERNS.items():
        if re.match(pattern, name):
            assigned_headers.add(header)
            pattern_counts[pattern] += 1
            break
    
    # Try library-based assignment
    if not assigned_headers:
        libs = entity.get('libraries', []) + entity.get('dlls', [])
        for lib in libs:
            lib_name = lib.lower().replace('.lib', '').replace('.dll', '')
            if lib_name in lib_to_headers:
                # Use the most common header for this library
                headers = lib_to_headers[lib_name]
                if len(headers) == 1:
                    assigned_headers.update(headers)
                    pattern_counts['library:' + lib_name] += 1
                    break
    
    # Assign if found
    if assigned_headers:
        entity['headers'] = sorted(assigned_headers)
        entity['header_source'] = 'heuristic'
        assigned_count += 1

print(f"\nAssigned headers to {assigned_count} entities")
print(f"Remaining without headers: {len([e for e in entities if not e.get('headers') and e.get('ce_pages')])}")

print("\nTop patterns used:")
for pattern, count in pattern_counts.most_common(20):
    print(f"  {pattern:40s} {count}")

# Write updated entities
print("\nWriting updated entities.jsonl.gz...")
with gzip.open('knowledge/kb/entities.jsonl.gz', 'wt') as f:
    for entity in entities:
        f.write(json.dumps(entity, ensure_ascii=False) + '\n')

print("Done!")
