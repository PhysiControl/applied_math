#include <print>
template <class T> size_t f(T* x) {return sizeof(*x); }
int main(){
    int* x = nullptr;
std::println("{}", f(x));
return 0;
}

// output is 4
