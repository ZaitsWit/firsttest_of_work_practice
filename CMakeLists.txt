cmake_minimum_required(VERSION 3.14)
project(DataStructureTests)

set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

include_directories(include)

add_library(data_structures
        src/queue.cpp
        src/heap.cpp
        src/binary_tree.cpp
)

enable_testing()

add_executable(firsttest
        tests/queue_test.cpp
        tests/heap_test.cpp
        tests/binary_tree_test.cpp
)

target_link_libraries(firsttest
        data_structures
        gtest_main
)

include(GoogleTest)
gtest_discover_tests(firsttest)