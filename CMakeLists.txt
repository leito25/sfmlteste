cmake_minimum_required(VERSION 3.16)

project(sfml3-app LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(/opt/homebrew/include)
link_directories(/opt/homebrew/lib)

add_executable(sfml3-app main.cpp)

target_link_libraries(sfml3-app
    PRIVATE
        sfml-graphics
        sfml-window
        sfml-system
)
