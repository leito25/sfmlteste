cmake_minimum_required(VERSION 3.16)

project(sfml3-app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# SFML build options for faster compilation
set(SFML_BUILD_AUDIO OFF CACHE BOOL "Build SFML audio module" FORCE)
set(SFML_BUILD_NETWORK OFF CACHE BOOL "Build SFML network module" FORCE)
set(SFML_BUILD_EXAMPLES OFF CACHE BOOL "Build SFML examples" FORCE)
set(SFML_BUILD_DOC OFF CACHE BOOL "Build SFML documentation" FORCE)
set(SFML_ENABLE_PCH ON CACHE BOOL "Enable precompiled headers" FORCE)
set(CMAKE_BUILD_TYPE "Release" CACHE STRING "Build type" FORCE)

# Add SFML as a subdirectory (git submodule in external/SFML)
add_subdirectory(external/SFML)

add_executable(sfml3-app src/main.cpp)

target_link_libraries(sfml3-app
    PRIVATE
        sfml-graphics
        sfml-window
        sfml-system
)
