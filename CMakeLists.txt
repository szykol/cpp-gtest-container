cmake_minimum_required(VERSION 3.5)

project(Lib)

enable_testing()

add_subdirectory(googletest)

file(GLOB SRC
    "src/*.h"
    "src/*.cpp"
)

add_library(Lib STATIC ${SRC})

add_subdirectory(test)