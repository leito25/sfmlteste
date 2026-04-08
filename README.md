# SFML 3 Hello World

A simple SFML 3 application demonstrating the basics of creating a window and drawing shapes using the new SFML 3 API.

## Features

- Creates an 800x600 window
- Draws a green circle on a black background
- Demonstrates SFML 3's new type-safe event handling with `std::optional`

## Prerequisites

- **macOS** (tested on Apple Silicon)
- **CMake** 3.16 or higher
- **SFML 3** installed via Homebrew
- **C++17** compatible compiler

## Installation

### Install Dependencies (macOS)

Run the installation script to install Homebrew (if not already installed), CMake, and SFML:

```bash
chmod +x installSFML.sh
./installSFML.sh
```

Or install manually:

```bash
brew install cmake
brew install sfml
```

## Building and Running

Use the provided `run.sh` script to build and run the application:

### Debug Build

```bash
./run.sh debug
```

### Release Build

```bash
./run.sh release
```

### Manual Build

```bash
mkdir -p build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
./sfml3-app
```

## Project Structure

```
.
├── CMakeLists.txt    # CMake build configuration
├── main.cpp          # Main application source
├── run.sh            # Build and run script
├── installSFML.sh    # Dependency installation script
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
