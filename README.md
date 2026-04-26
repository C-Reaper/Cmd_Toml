# Project README

## Overview
This project is a C-based application that demonstrates how to parse and manipulate configuration files using the TOML format. It includes features such as reading and writing configuration settings, modifying data within the configuration, and executing basic operations based on these configurations.

## Features
- Reading and parsing TOML configuration files.
- Modifying configuration values.
- Executing operations based on configuration settings (e.g., enabling/disabling TLS).

## Project Structure
### Prerequisites
- C/C++ Compiler and Debugger (GCC, Clang)
- Make utility
- Standard development tools

## Build & Run
### Linux
To build the project for Linux:
```sh
cd <Project>
make -f Makefile.linux all
```

To run the executable:
```sh
./build/Main
```

### Windows
To build the project for Windows:
```sh
cd <Project>
make -f Makefile.windows all
```

To run the executable:
```sh
.\build\Main.exe
```

### Wine (Linux Cross-Compile for Windows)
To build the project using Wine on Linux:
```sh
cd <Project>
make -f Makefile.wine all
```

To run the executable:
```sh
WINEPREFIX=~/wine64 WINEARCH=win64 wine ./build/Main.exe
```

### WebAssembly (Emscripten)
To build the project for WebAssembly:
```sh
cd <Project>
make -f Makefile.web all
```

To run the executable in a web browser using Emscripten's `wasmtime`:
```sh
wasmtime ./build/Main.wasm
```

---

**Note:** The provided configuration file (`code/Main.toml`) demonstrates various settings that can be parsed and manipulated by the application, including server settings, database configurations, logging details, user and product data, and more.