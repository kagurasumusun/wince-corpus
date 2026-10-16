# Toolchain surface — what may be compiled and linked

`winsur/include/*.h` and `winsur/link/*.def` are for building **Windows CE
applications and drivers** (compiler + linker).  Two kinds of fact are mixed,
and they are not the same licence.

## 1. Quoted from Windows CE documentation (`knowledge/`)

Header/library/DLL names, prototypes, and **numbers a CE page printed**.
Each fact names its page.  Those pages are mostly **not** licensed for
redistribution (Learn terms, CE 3.0 internal-reference notice, CHM/MVB with
no permission statement).  See `docs/LICENSING.md`.  Using them for your
own CE development matches the internal/personal-use wording; publishing
the generated tree is not the same thing.

## 2. Gap-fill from CeGCC w32api (public domain)

When a CE page **names** a constant but prints no number, the generator may
take the `#define` from the pinned CeGCC `w32api` headers.

| | |
|--|--|
| What | CeGCC `w32api` module, classic mingw.org Win32 API **adapted for CE** |
| Not | Microsoft SDK headers; not Wine; not ReactOS; not mingw-w64 |
| Acquisition | `https://codeload.github.com/MaxKellermann/w32api/tar.gz/8e64b608fc9c4d81e206e920ecc977d941577bef` (2026-10-14) |
| Pin | commit `8e64b608fc9c4d81e206e920ecc977d941577bef` |
| Bytes | `sources/w32api-cegcc/w32api-cegcc-8e64b608fc9c4d81e206e920ecc977d941577bef-src.tar.gz` |
| Licence | `sources/w32api-cegcc/PUBLIC-DOMAIN-README.w32api.txt`: “THIS SOFTWARE IS NOT COPYRIGHTED… offered for use in the public domain. You may use, modify or distribute it freely.” |
| Provenance | `sources/w32api-cegcc/PROVENANCE.md` |
| Not copied | `winsock.h` / `winsock2.h` / `ws2tcpip.h` (UCB/DEC copyright); `gl.h` / `glext.h` / `glu.h` (Mesa / SGI) |
| Never overlaid | `MAX_PATH` (CE pages print **128**); C type names (`BOOL`, `DWORD`, `HANDLE`, …) |

A CE-printed number always wins.  A w32api number is only used for a hole.

## How to include

```c
#include "Windows.h"   /* umbrella: WinDef, WinNT, winerror, Winbase, Winuser, Wingdi, … */
```

Link with `link/coredll.def` (and the other module `.def` files you actually import).
