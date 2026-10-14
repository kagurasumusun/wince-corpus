"""exec-wrapper so external dry-run scripts can call internals ModuleNotFoundError-free."""
import runpy, sys as _s
_s.argv = ["build-kb.py", "--help"]
_d = runpy.run_path("tools/build-kb.py", run_name="build_kb_run")
globals().update({k: v for k, v in _d.items() if not k.startswith("__")})
