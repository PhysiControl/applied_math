#include <iostream>

template <typename T>
struct Allocator {
    void allocate(T value) {
        std::cout << "Allocating general type\n";
    }
};

template <>
struct Allocator<int> { // Specialization for int
    void allocate(int value) {
        std::cout << "Optimized allocation for int\n";
    }
};

int main() {
    Allocator<double> alloc1;
    Allocator<int> alloc2;

    alloc1.allocate(3.14); // General case
    alloc2.allocate(42);   // Specialized case
}
