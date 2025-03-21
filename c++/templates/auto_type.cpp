#include <unordered_map>

const int** foo();
struct A {
const A& foo() { return *this; }
};
void bar() {
auto f1 = foo(); // BAD: auto is const int**
const auto f2 = foo(); // BAD: auto is const int**, f2 is const
auto** f3 = foo(); // BAD: auto is const int
const auto** f4 = foo(); // GOOD: auto is int
A a;
auto a1 = a.foo(); // BAD: auto is const A, copy
const auto& a2 = a.foo(); // GOOD: auto is A, no copy
}


int main(){
    std::unordered_map<int, const char*> intToStringMap;
std::unordered_map<int, const char*>::iterator it1 =
intToStringMap.begin(); // noone wants to read this
auto it2 = intToStringMap.begin(); // much better
}
