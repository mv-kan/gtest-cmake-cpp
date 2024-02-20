#include <iostream>
#include "mult.h"
#include "mymodule/fib.h"

int main() {
    std::cout << "Hello, this is myproject" << std::endl;
    // std::cout << mult<int>(3, 4) << std::endl;
    std::cout << mymodule::fib(30) << std::endl;
    return 0;
}