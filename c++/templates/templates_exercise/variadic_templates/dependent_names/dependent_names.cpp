#include <print>
template <class T> int fn(bool param, int a) {
  if (param) {
    T::member *a;
     return sizeof(a);
  }
  return 0;
}
struct S1 {
  static const int member = 5;
};
struct S2 {
  using member = int;
};
int main() { std::println("{}/{}", fn<S1>(true, 1), fn<S2>(true, 1)); }

template <class C, class T> class SearchAlgorithm {
  void find(const C &container, const T &value) { /* do linear search */ }
};
template <class T> class SearchAlgorithm<std::vector<T>, T> {
  void find(const std::vector<T> &container, const T &value) {
            /* do binary search */}
};
