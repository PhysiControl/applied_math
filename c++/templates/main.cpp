#include <print>
#include <array>
#include <cstddef>
#include <string>
#include <cmath> // For abs()
#include "A.h"

// Forward declarations
class A; // Incomplete type

// Template class definitions
template <class T1, class T2 = unsigned, unsigned N = 4u>
class Foo {
    // Class implementation
};

// Specializations of Foo
Foo<A, int, 32u> foo1;
Foo<long, A*, 12> foo2; // 12 converted implicitly to unsigned
Foo<char> foo3;
Foo<Foo<char>**, long&> foo4;

// Struct Foo with template members
struct FooStruct {
    template <class T>
    using ArrayType = std::array<T, 42>;

    template <class T>
    std::size_t getSize() {
        return sizeof(T);
    }
};

// Function to demonstrate FooStruct usage
int f() {
    FooStruct::ArrayType<int> intArray;
    FooStruct foo;
    return foo.getSize<FooStruct::ArrayType<int>>();
}

// Template class A
template <class T>
struct A {
    T value;
    A(T value);
    template <class R>
    R convert();
};

// Implementation of A's constructor
template <class T>
A<T>::A(T value) : value(value) {}

// Implementation of A's convert method
template <class T>
template <class R>
R A<T>::convert() {
    return static_cast<R>(value);
}

// Template function for comparison
template <typename T>
bool cmp(const T& a, const T& b) {
    return a < b;
}

// Overloaded cmp for int
bool cmp(int a, int b) {
    return std::abs(a) < std::abs(b);
}

// Template function foo
template <typename T1, typename T2, typename T3>
void foo(T2 a, T2 c, T3 b, int d) {
    // Function implementation
}

// Template function for swapping
template <class T>
void swap(T& a, T& b) {
    T tmp = std::move(a);
    a = std::move(b);
    b = std::move(tmp);
}

// Main function
int main(int argc, char** argv) {
    std::println("{}", cmp(3, 10)); // true
    std::println("{}", cmp(4, 5));  // false
    std::println("{}", cmp(std::string("abc"), std::string("ABC"))); // false

    foo<void*, int>(42, "Huu", 'a', 99);

    std::println("{}", cmp(3, 6));        // true: overloaded normal function
    std::println("{}", cmp(3, 3.4));      // false: overloaded normal function (cast)
    std::println("{}", cmp<int>(3, 3.4)); // false: template function

    return 0;
}