* `vcpkg install --triplet x64-windows-static-md`
* `meson setup builds/debug --pkg-config-path $(pwd)/vcpkg_installed/x64-windows-static-md/debug/lib/pkgconfig`
* `meson compile -C builds/debug`
