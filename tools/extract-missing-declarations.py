#!/usr/bin/env python3
"""Extract missing declarations from corpus pages.

This script scans CE corpus pages for declarations that the main parser
may have missed, including:
- Function prototypes
- Structure definitions
- Enum definitions
- Typedef declarations
- Callback definitions

Output: knowledge/kb/extra-declarations.jsonl
"""

import gzip
import json
import os
import re
import sys
from pathlib import Path

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CORPUS = os.path.join(ROOT, "corpus")
KB = os.path.join(ROOT, "knowledge", "kb")

# Directories to scan for CE-specific pages
CE_DIRS = [
    os.path.join(CORPUS, "chm"),
    os.path.join(CORPUS, "learn"),
    os.path.join(CORPUS, "msdn-library"),
]

# Patterns for different declaration types
FUNCTION_PATTERN = re.compile(
    r'(?:(?:WINAPI|STDAPI|HRESULT|BOOL|DWORD|HANDLE|void|int|LONG|UINT|LPVOID|LPCWSTR|LPWSTR)\s+)'
    r'([A-Za-z_]\w*)\s*\([^)]*\)\s*;',
    re.MULTILINE
)

STRUCT_PATTERN = re.compile(
    r'typedef\s+struct\s+(?:\w+\s+)?(\w+)\s*\{[^}]+\}\s*(\w+)?\s*;',
    re.MULTILINE | re.DOTALL
)

ENUM_PATTERN = re.compile(
    r'typedef\s+enum\s+(?:\w+\s+)?(\w+)\s*\{[^}]+\}\s*(\w+)?\s*;',
    re.MULTILINE | re.DOTALL
)

TYPEDEF_PATTERN = re.compile(
    r'typedef\s+[^;]+?(\w+)\s*;',
    re.MULTILINE
)

CALLBACK_PATTERN = re.compile(
    r'typedef\s+(?:WINAPI|CALLBACK|__stdcall)\s+\w+\s+\(\*\s*(\w+)\s*\)\s*\([^)]*\)\s*;',
    re.MULTILINE
)


def scan_file(filepath):
    """Scan a file for declarations."""
    declarations = []
    try:
        with open(filepath, 'r', encoding='utf-8', errors='replace') as f:
            content = f.read()
    except:
        return declarations
    
    # Skip non-CE pages
    rel_path = os.path.relpath(filepath, ROOT)
    if 'win32/' in rel_path or 'dotnet/' in rel_path:
        return declarations
    
    # Clean HTML tags from content before pattern matching
    import re as _re
    clean_content = _re.sub(r'<[^>]+>', '', content)
    clean_content = clean_content.replace('&lt;', '<').replace('&gt;', '>')
    clean_content = clean_content.replace('&amp;', '&').replace('&quot;', '"')
    clean_content = _re.sub(r'\s+', ' ', clean_content)
    
    # Find function prototypes
    for match in FUNCTION_PATTERN.finditer(clean_content):
        name = match.group(1)
        full_decl = match.group(0)
        declarations.append({
            "type": "function",
            "name": name,
            "declaration": full_decl,
            "source": rel_path,
        })
    
    # Find structure definitions
    for match in STRUCT_PATTERN.finditer(clean_content):
        struct_name = match.group(1)
        typedef_name = match.group(2) or struct_name
        full_decl = match.group(0)
        declarations.append({
            "type": "struct",
            "name": typedef_name,
            "declaration": full_decl,
            "source": rel_path,
        })
    
    # Find enum definitions
    for match in ENUM_PATTERN.finditer(clean_content):
        enum_name = match.group(1)
        typedef_name = match.group(2) or enum_name
        full_decl = match.group(0)
        declarations.append({
            "type": "enum",
            "name": typedef_name,
            "declaration": full_decl,
            "source": rel_path,
        })
    
    # Find typedef declarations (excluding struct/enum which are already captured)
    for match in TYPEDEF_PATTERN.finditer(clean_content):
        name = match.group(1)
        full_decl = match.group(0)
        # Skip if it's a struct or enum typedef
        if 'struct' in full_decl or 'enum' in full_decl:
            continue
        declarations.append({
            "type": "typedef",
            "name": name,
            "declaration": full_decl,
            "source": rel_path,
        })
    
    # Find callback definitions
    for match in CALLBACK_PATTERN.finditer(clean_content):
        name = match.group(1)
        full_decl = match.group(0)
        declarations.append({
            "type": "callback",
            "name": name,
            "declaration": full_decl,
            "source": rel_path,
        })
    
    return declarations


def main():
    """Scan CE corpus for declarations."""
    all_declarations = []
    files_scanned = 0
    
    for ce_dir in CE_DIRS:
        if not os.path.exists(ce_dir):
            continue
        for root, dirs, files in os.walk(ce_dir):
            for fname in files:
                if not (fname.endswith('.html') or fname.endswith('.md')):
                    continue
                filepath = os.path.join(root, fname)
                decls = scan_file(filepath)
                all_declarations.extend(decls)
                files_scanned += 1
    
    print(f"Scanned {files_scanned} files")
    print(f"Found {len(all_declarations)} declarations")
    
    # Deduplicate by name and type
    seen = set()
    unique_declarations = []
    for d in all_declarations:
        key = (d["type"], d["name"])
        if key not in seen:
            seen.add(key)
            unique_declarations.append(d)
    
    print(f"Unique declarations: {len(unique_declarations)}")
    
    # Count by type
    from collections import Counter
    type_counts = Counter(d["type"] for d in unique_declarations)
    print("\nBy type:")
    for decl_type, count in type_counts.most_common():
        print(f"  {decl_type}: {count}")
    
    # Write to JSONL
    output_path = os.path.join(KB, "extra-declarations.jsonl")
    with open(output_path, 'w', encoding='utf-8') as f:
        for d in sorted(unique_declarations, key=lambda x: (x["type"], x["name"])):
            f.write(json.dumps(d, ensure_ascii=False) + '\n')
    
    print(f"\nWrote to {output_path}")
    return 0


if __name__ == "__main__":
    sys.exit(main())
