#include <unordered_map>

template <typename R, typename... Args>
R reduceSum(const Args&...args){
    return(args + ...);
}
int main(){
    return reduceSum<int>(1, 2, 3, 4); //returns 10
}
