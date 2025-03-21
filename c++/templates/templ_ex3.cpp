#include <print>

template <typename T>
    bool cmp(const T &a, const T &b){
        return a<b;
    }

template <typename T1, typename T2, typename T3>
    void foo(T2 a, T2 c, T3 b, int d) {...}


    template <typename T>
        bool cmp(T a, T b) {
            return a<b;
        }
        
        bool cmp(int a, int b) {
            return abs(a)<abs(b);
        }


int main(int argc, char** argv){
std::println(cmp(3,10));
std::println(cmp(4,5));
std::println(cmp(string("abc"), string("ABC")));
foo<void*,int>(42, "Huu", 'a', 99);
    cmp(3, 6);          // true:  überladene normale Funktion
    cmp(3, 3.4);        // FALSE: überladene normale Funktion (Cast)
    cmp<int>(3, 3.4);   // FALSE: Template


}