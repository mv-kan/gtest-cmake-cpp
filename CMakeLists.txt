cmake_minimum_required(VERSION 3.22)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g -Werror")

set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

set(PROJECT_TARGET
    myproject
)

set(PROJECT_TARGET_LIB
    myproject_shared
)

set(PROJECT_SOURCES
    ./src/main.cpp
    ./src/mymodule/fib.cpp
)

project(${PROJECT_TARGET})

add_library(${PROJECT_TARGET_LIB} STATIC ${PROJECT_SOURCES})

add_executable(${PROJECT_TARGET} ${PROJECT_SOURCES})

target_link_libraries(${PROJECT_TARGET} ${PROJECT_TARGET_LIB})

target_compile_options(${PROJECT_TARGET} PRIVATE "-fanalyzer;-Wanalyzer-too-complex")
target_compile_features(${PROJECT_TARGET} PRIVATE cxx_std_20)
target_compile_features(${PROJECT_TARGET_LIB} PRIVATE cxx_std_20)

# GTEST
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/5df0241ea4880e5a846775d3efc8b873f7b36c31.zip
)

FetchContent_MakeAvailable(googletest)

add_subdirectory(tests)
