cmake_minimum_required(VERSION 3.5)

file(GLOB TEST_SRC
    "*.h"
    "*.cpp"
)

add_executable(Tests ${TEST_SRC})

target_link_libraries(Tests PUBLIC gtest_main Lib)

add_test(NAME Tests COMMAND Tests)
