cmake_minimum_required(VERSION 3.8)

set(This MondrianBlocksTest)

set(Sources
    blockTest.cpp
    fieldTest.cpp
    gameTest.cpp
    menuTest.cpp
    rulesTest.cpp
    templateTest.cpp
    winTest.cpp)

add_executable(${This} ${Sources})

target_link_libraries(${This} PUBLIC
    gtest_main
    MondrianBlocks_LL_KL
)

add_test(
    NAME ${This}
    COMMAND ${This}
)