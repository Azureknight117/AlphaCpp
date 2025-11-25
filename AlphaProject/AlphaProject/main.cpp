#include <iostream>
#include "StringInput.h"
#include "Integer.h"
#include "Testing.h"
#include <string>

template <typename T>
T Max(T x, T y)
{
    return (x > y) ? x : y;
}

int main() {
    std::cout << Max(15, 7) << std::endl;
    std::cout << Max(3.14, 6.28) << std::endl;
    std::cout << Max(std::string("apple"), std::string("banana")) << std::endl;
    return 0;
}

