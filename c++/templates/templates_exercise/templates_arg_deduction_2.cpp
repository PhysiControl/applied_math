#include <print>
template <class T> size_t f(T* x) { return sizeof(*x); }
int main() {
    std::println("{}", f(nullptr));
    return 0;
    }
    