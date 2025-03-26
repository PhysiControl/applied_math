#include <iostream>
#include <vector>
using namespace std;

int main(){
array<int,2> arr{1,2};
auto it = arr.begin();
assert(*it==1);
++it; 
assert(*it==2);
assert(it == arr.end()); // not dereferancable !

for(auto it = arr.begin(); end = arr.end(); it != end; ++it ){
printf("%d", *it);
}


return 0;
}
