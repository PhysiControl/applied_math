#include <print>
using namespace std;

template <typename T> 
T maximum(T a, T b) { return (a > b) ? a : b; }

template <typename A1, typename A2>
class Pair{
  public: 
  A1 first;
  A2 second;
Pair(A1, A2) : first(a), second(b) {}
void print() {
  cout << "First: " << first << ", Second: " << second << endl;
  
}

}

int main(int argv, char **argc) {
  println("program to determine the max of two values");
  println("maximum of 3, 5.0: {}", maximum(3.0, 5.0));
}