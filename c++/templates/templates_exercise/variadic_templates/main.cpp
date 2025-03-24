#include <print>
void printElements(){
} //recursion end

template <typename Head, typename... Tail>
void printElements(const Head& head, const Tail&... tail){
    std::print("{}", head);
if (sizeof...(tail)>0) // number of elements in Tail
std::print(", ");
printElements(tail...);
}

int main(){
    // Output: "1, 2, 3, 3.14, hello, 4"
    printElements(1, 2, 3.0, 3.14, "hello", 4);
    std::println();
}

