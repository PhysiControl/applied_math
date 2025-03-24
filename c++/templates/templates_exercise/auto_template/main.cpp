#include <print>
#include <unordered_map>

void foo();
const int **foo();
struct A {
  const A &foo() { return *this; }
};

void bar() {
  auto f1 = foo();
  const auto f2 = foo();
  auto **f3 = foo(); // ALL BAD

  const auto **f4 = foo(); // GOOD

  A a;
  auto a1 = a.foo();        // BAD
  const auto &a2 = a.foo(); // GOOD
}

int main() {
  std::unordered_map<int, const char *> intToStringMap;
  std::unordered_map<int, const char *>::iterator it1 = intToStringMap.begin();  // noone wants to read this
  auto it2 = intToStringMap.begin(); // much better
}