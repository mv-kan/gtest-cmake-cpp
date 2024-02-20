#include "fib.h"

namespace mymodule
{
    int fib(int x) noexcept {
        int a = 0, b = 1;
        int tmp;
        for (int i = 0; i < x; ++i) { 
            tmp = a + b;
            b = a;
            a = tmp;
        }

        return a;
    }
} // namespace mymodule