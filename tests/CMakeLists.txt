set(CMAKE_CXX_FLAGS_DEBUG "-g -Werror")

set(TESTS_TARGET
    myproject_tests
)

set(TESTS_SOURCES
    ./fib.cpp
    ./mult.cpp
)

add_executable(${TESTS_TARGET} ${TESTS_SOURCES})

target_link_libraries(${TESTS_TARGET} PUBLIC gtest gtest_main ${PROJECT_TARGET_LIB})