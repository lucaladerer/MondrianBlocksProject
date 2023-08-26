cmake_minimum_required(VERSION 3.8)

set(This MondrianBlocks_LL_KL)

project(${This} C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_POSITION_INDEPENDEND_CODE ON)

enable_testing()

add_subdirectory(lib/googletest)

set(Headers
    src/blocks.hpp
    src/field.hpp
    src/game.hpp
    src/menu.hpp
    src/rules.hpp
    src/stats.hpp
    src/template.hpp
    src/win.hpp
)

set(Sources
    src/blocks.cpp
    src/field.cpp
    src/game.cpp
    src/main.cpp
    src/menu.cpp
    src/rules.cpp
    src/stats.cpp
    src/template.cpp
    src/win.cpp
)

add_library(${This} STATIC ${Sources} ${Headers})

add_subdirectory(test)

add_executable(${This}_app
    src/main.cpp
    src/blocks.cpp
    src/field.cpp
    src/game.cpp
    src/menu.cpp
    src/rules.cpp
    src/stats.cpp
    src/template.cpp
    src/win.cpp)