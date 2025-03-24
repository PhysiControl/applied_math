#include <iostream>
#include <type_traits>

template <typename T>
void checkType() {
    if (std::is_integral<T>::value) {
        std::cout << "T is an integer type\n";
    } else {
        std::cout << "T is not an integer type\n";
    }
}

int main() {
    checkType<int>();  // Output: T is an integer type
    checkType<double>(); // Output: T is not an integer types
}