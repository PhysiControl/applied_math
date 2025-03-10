#include <print>

template <class T> class Foo {
T value;
public:
static unsigned count;
Foo() { count++; }
};
template <class T> unsigned Foo<T>::count = 0;
int main() {
Foo<int> foo1; Foo<long> foo2; Foo<Foo<int>> foo3;
std::println("{}/{}", Foo<int>::count, Foo<long>::count);
return 0;
}

// Answer is 2/1