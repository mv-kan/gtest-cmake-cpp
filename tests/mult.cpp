#include <gtest/gtest.h>
#include "../src/mult.h"

TEST(mult, DoubleMultiplication) {
    double a{3}, b{4}, c{12};

    ASSERT_EQ(c, mult(a, b)) << "[type=double] mult(a, b) has to be equal 12! (a=3, b=4)";
}


TEST(mult, IntMultiplication) {
    int a{3}, b{4}, c{12};

    ASSERT_EQ(c, mult(a, b)) << "[type=int] mult(a, b) has to be equal 12! (a=3, b=4)";
}