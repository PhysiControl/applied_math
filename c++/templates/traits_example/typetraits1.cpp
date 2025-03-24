#include <iostream>
#include <type_traits>

template <class T1, class T2>
struct is_same { static constexpr bool value = false; };

template<typename T>
struct is_my_integer {
    static constexpr bool value = false;
};

// Specialization for int
template<>
struct is_my_integer<int> {
    static constexpr bool value = true;
};
template<typename T>
void checkType(const T& val) {
    if constexpr (is_my_integer<T>::value) {
        std::cout << "Type is int! Value = " << val << "\n";
    } else {
        std::cout << "Type is NOT int. Value = " << val << "\n";
    }
}
 // standard trait: if constexpr (std::is_integral<T>::value)

int main() {
    int a = 5;
    double b = 3.14;
    std::string c = "hello";

    checkType(a); // ✔️ is_my_integer<int>::value => true
    checkType(b); // ❌ is_my_integer<double>::value => false
    checkType(c); // ❌ is_my_integer<std::string>::value => false

    return 0;
}
