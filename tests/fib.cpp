#include <gtest/gtest.h>
#include "../src/mymodule/fib.h"

TEST(fib, FibCase1) {
    int x{10};
    int answ{55};
    int fibansw{mymodule::fib(x)};
    char msg[255];
    sprintf(msg, "fib(x) is not correct! fib(x)=%d, x=%d, answ=%d", fibansw, x, answ);
    ASSERT_EQ(answ, fibansw) << msg;
}


TEST(fib, FibCase2) {
    int x{1};
    int answ{1};
    int fibansw{mymodule::fib(x)};
    char msg[255];
    sprintf(msg, "fib(x) is not correct! fib(x)=%d, x=%d, answ=%d", fibansw, x, answ);
    ASSERT_EQ(answ, fibansw) << msg;
}


TEST(fib, FibCase3) {
    int x{0};
    int answ{0};
    int fibansw{mymodule::fib(x)};
    char msg[255];
    sprintf(msg, "fib(x) is not correct! fib(x)=%d, x=%d, answ=%d", fibansw, x, answ);
    ASSERT_EQ(answ, fibansw) << msg;
}

TEST(fib, FibCase4) {
    int x{30};
    int answ{832040};
    int fibansw{mymodule::fib(x)};
    char msg[255];
    sprintf(msg, "fib(x) is not correct! fib(x)=%d, x=%d, answ=%d", fibansw, x, answ);
    ASSERT_EQ(answ, fibansw) << msg;
}