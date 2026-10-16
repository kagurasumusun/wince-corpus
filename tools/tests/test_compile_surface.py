"""gcc -fsyntax-only of a tiny CE app and driver against winsur/include."""

import os
import shutil
import subprocess
import tempfile
import unittest

ROOT = os.path.dirname(os.path.dirname(os.path.dirname(
    os.path.abspath(__file__))))
INCLUDE = os.path.join(ROOT, "winsur", "include")

APP = r'''
#define _WIN32_WCE 0x500
#include "Windows.h"
int WINAPI WinMain(HINSTANCE h, HINSTANCE p, LPWSTR cmd, int show) {
    MSG m;
    RECT r;
    PAINTSTRUCT ps;
    HANDLE f = CreateFile(TEXT("x"), GENERIC_READ, 0, NULL,
                          OPEN_EXISTING, 0, NULL);
    DWORD n = 0;
    ReadFile(f, &n, sizeof n, &n, NULL);
    WriteFile(f, &n, sizeof n, &n, NULL);
    GetMessage(&m, NULL, 0, 0);
    PeekMessage(&m, NULL, 0, 0, 0);
    BeginPaint(NULL, &ps);
    EndPaint(NULL, &ps);
    MessageBox(NULL, TEXT("hi"), TEXT("t"), 0);
    GetLastError();
    InitializeCriticalSection(NULL);
    Sleep(0);
    LoadLibrary(TEXT("x"));
    CreateProcess(NULL, TEXT("x"), NULL, NULL, FALSE, 0, NULL, NULL, NULL, NULL);
    FindFirstFile(TEXT("x"), NULL);
    SetTimer(NULL, 1, 0, NULL);
    CreateFontIndirect(NULL);
    return 0;
}
'''

DRV = r'''
#define _WIN32_WCE 0x500
#include "Windows.h"
#include "CEDDK.h"
BOOL APIENTRY DllMain(HANDLE h, DWORD reason, LPVOID reserved) {
    PHYSICAL_ADDRESS a;
    a.QuadPart = 0;
    MmMapIoSpace(a, 0, FALSE);
    MmUnmapIoSpace(NULL, 0);
    HalGetBusData(0, 0, 0, NULL, 0);
    READ_PORT_UCHAR(NULL);
    WRITE_PORT_UCHAR(NULL, 0);
    return TRUE;
}
'''


@unittest.skipUnless(shutil.which("gcc"), "gcc not installed")
@unittest.skipUnless(os.path.isdir(INCLUDE), "winsur/include not generated")
class CompileSurfaceTests(unittest.TestCase):
    def _cc(self, source):
        with tempfile.NamedTemporaryFile("w", suffix=".c", delete=False) as fh:
            fh.write(source)
            path = fh.name
        try:
            r = subprocess.run(
                ["gcc", "-fsyntax-only", "-std=c11", "-w",
                 "-Werror=implicit-function-declaration",
                 "-I", INCLUDE, "-D_WIN32_WCE=0x500", path],
                capture_output=True, text=True)
            self.assertEqual(r.returncode, 0, r.stderr)
        finally:
            os.unlink(path)

    def test_app(self):
        self._cc(APP)

    def test_driver(self):
        self._cc(DRV)


if __name__ == "__main__":
    unittest.main()
