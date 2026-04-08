#!/bin/sh

MODE="$1"

if [ -z "$MODE" ]; then
  echo "Usage: ./run.sh [debug|release]"
  exit 1
fi

case "$MODE" in
  debug)
    BUILD_TYPE="Debug"
    ;;
  release)
    BUILD_TYPE="Release"
    ;;
  *)
    echo "Invalid mode: $MODE"
    echo "Usage: ./run.sh [debug|release]"
    exit 1
    ;;
esac

if ! command -v cmake >/dev/null 2>&1; then
  echo "Error: cmake is not installed or not available in PATH."
  exit 1
fi

BUILD_DIR="build/$MODE"

cmake -S . -B "$BUILD_DIR" -DCMAKE_BUILD_TYPE="$BUILD_TYPE" &&
cmake --build "$BUILD_DIR" &&
"./$BUILD_DIR/sfml3-app"
