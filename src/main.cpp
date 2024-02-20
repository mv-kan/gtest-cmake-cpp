#include <iostream>
#include "mult.h"
#include "mymodule/fib.h"
#include <stdlib.h>

// // should raise a warning from compiler
// void somefn() {
//     int*a{static_cast<int*>(malloc(sizeof(int)))};
//     int*b{static_cast<int*>(malloc(sizeof(int)))};
//     if (a != nullptr && b != nullptr) {
//         std::cout << mult(*a, *b) << std::endl;
//     }
// }

int main() {
    std::cout << "Hello, this is myproject" << std::endl;
    std::cout << mymodule::fib(30) << std::endl;
    return 0;
}