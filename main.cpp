#include "is_same.hpp"
#include <iostream>

int main() {
    std::cout << std::boolalpha;
    std::cout << "is_same<int, int>: " << is_same<int, int>::value << '\n';
    std::cout << "is_same<int, float>: " << is_same<int, float>::value << '\n';

    return 0;
}