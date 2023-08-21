cmake_minimum_required(VERSION 3.14)

set(
        Tests
        MondrianBlocksTests
)

set(
        Test_Sources
        blockTest.cpp
        templateTest.cpp
        fieldTest.cpp
)

add_executable(
        ${Tests}
        ${Test_Sources}
)

target_link_libraries(
        ${Tests}
        PUBLIC
        GTest::gtest_main
        ${PROJECT_NAME}
)

add_test(
        NAME ${Tests}
        COMMAND ${Tests}
)