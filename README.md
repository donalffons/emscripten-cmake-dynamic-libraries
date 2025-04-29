# Emscripten / CMake Dynamic Libraries Demo

This project demonstrates how to create and link dynamic libraries using CMake.

## Build Instructions

```bash
mkdir build
cd build
emcmake cmake ..
emmake make
```

Output
```
[100%] Linking CXX executable Main.js
em++: error: ../B/libB.so: shared library dependency not found in library path: `libA.so`. (library path: ['/home/user/.cache/emscripten/sysroot/lib/wasm32-emscripten/pic', '/usr/lib/emscripten/src/lib']
make[2]: *** [Main/CMakeFiles/Main.dir/build.make:105: Main/Main.js] Error 1
make[1]: *** [CMakeFiles/Makefile2:217: Main/CMakeFiles/Main.dir/all] Error 2
make: *** [Makefile:91: all] Error 2
emmake: error: 'make' failed (returned 2)
```
