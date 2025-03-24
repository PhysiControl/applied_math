#include <iostream>
#include <concepts>    // Required for constraints
#include <type_traits> // Optional, for extra checks
#include "my_template_header.hpp"

template <typename T>
void print(T val) {
    std::cout << val << std::endl;
}




template <typename T>
void boo() {
    // Implementation
}

// Explicit instantiation for `int`
template void boo<int>();




int main() {
    print(5); // Template instantiated with int
    print(3.14); // Template instantiated with double
    foo(5);  // Instantiates foo<int>
    foo(3.14);  // Instantiates foo<double>
}


