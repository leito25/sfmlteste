cmake_minimum_required(VERSION 3.16)

project(sfml3-app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add SFML as a subdirectory (git submodule in external/SFML)
add_subdirectory(external/SFML)

add_executable(sfml3-app src/main.cpp)

target_link_libraries(sfml3-app
    PRIVATE
        sfml-graphics
        sfml-window
        sfml-system
)
