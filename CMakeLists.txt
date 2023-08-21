cmake_minimum_required(VERSION 3.14)
project(MondrianBlocksProject)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(MondrianBlocksProject
        field.cpp
        field.hpp
        main.cpp
        menu.hpp
        menu.cpp
        rules.cpp
        rules.hpp
        stats.cpp
        stats.hpp
        template.cpp
        template.hpp
        win.cpp
        win.hpp
        blocks.cpp
        blocks.hpp
)