# SFML 3 Hello World

A simple SFML 3 application demonstrating the basics of creating a window and drawing shapes using the new SFML 3 API.

## Features

- Creates an 800x600 window
- Draws a green circle on a black background
- Demonstrates SFML 3's new type-safe event handling with `std::optional`

## Prerequisites

- **macOS** (tested on Apple Silicon)
- **CMake** 3.16 or higher
- **C++17** compatible compiler

## Getting SFML

This project vendors SFML as a Git submodule under `external/SFML`.

### Clone with submodules (recommended)

```bash
git clone --recurse-submodules https://github.com/<your-user>/sfmlteste.git
cd sfmlteste
```

### If you already cloned without submodules

From the repository root, initialize and update the SFML submodule:

```bash
git submodule update --init --recursive
```

### Adding SFML as a submodule (for your own fork/new repo)

From the root of your repository:

```bash
git submodule add https://github.com/SFML/SFML.git external/SFML
git submodule update --init --recursive
```

This will place the SFML source in `external/SFML` and record it in `.gitmodules` so other developers can fetch it with `--recurse-submodules`.

## Installation

### Install build tools

Make sure you have CMake and a C++17-compatible compiler installed on your system.

- **macOS**: `brew install cmake`
- **Linux** (Debian/Ubuntu): `sudo apt-get install cmake g++`
- **Windows**: Install CMake and a compiler (e.g. MSVC via Visual Studio or MinGW).

## Building and Running

Use CMake directly to configure and build the project. From the repository root:

### Debug build

```bash
mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```

### Release build

```bash
mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

### Run the example

From inside the `build` directory after a successful build:

```bash
./sfml3-app   # or `sfml3-app.exe` on Windows
```

## Project Structure

```
.
├── CMakeLists.txt    # CMake build configuration
├── main.cpp          # Main application source
├── external/
│   └── SFML/         # SFML Git submodule
├── build/            # Build output directory (generated)
└── README.md         # This file
```

## SFML 3 Changes

This project uses SFML 3, which introduces several API changes from SFML 2:

- **VideoMode**: Now takes `sf::Vector2u` directly: `sf::VideoMode({800, 600})`
- **Event Handling**: Uses `std::optional<sf::Event>` with type-safe checks via `.is<T>()`
- **Vector Initialization**: Encourages brace initialization: `circle.setPosition({300.f, 200.f})`

## License

This project is provided as-is for educational purposes.
