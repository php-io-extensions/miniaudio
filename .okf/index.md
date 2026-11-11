---
okf_version: "0.2"
---

# ext-miniaudio

1:1 PHP bindings of miniaudio 0.11.26 (vendored, unchanged). Version 0.11.0. Linux, macOS. PHP 8.4 NTS + ZTS.

# API

* [Bindings](api/bindings.md) — 924 functions, 193 classes, 4 interfaces, 391 constants; what is not bound and why; every translation.

# Architecture

* [Generator](architecture/generator.md) — clang AST to api.json to stubs and C; parameter roles; tools/bindings.php decisions.
* [Handles and ownership](architecture/handles.md) — C structs held in place, init/uninit, dependents, borrowed views, live fields, request end, fork.
* [Callbacks](architecture/callbacks.md) — Per-thread queue, deadlines, interrupt serving, helper threads, contexts and subs, every callback family.

# Runbooks

* [Build, install, test](runbooks/build.md) — Mac NTS/ZTS, scratch builds, regenerate, the Pi.
