#include <print>
#include <utility>
struct A {int a;};
int r(A&) {return 1;}
int r(A&&) {return 2;}

template <class T = void> int foo(T%% t) { return r(t); }
int main(){
    A a{12};
    std::println("{}/{}", foo(A{12}), foo(a));
    return 0;
}
// compile error