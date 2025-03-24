#include <print>
template <class T> int foo(T) {return 1;}
template <> int foo<int*>(int*){return 2;}
int bar(const int& x){return foo(&x);}
int main(){
    std::println("{}", bar(10));
}