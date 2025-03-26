#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; 

int a, b; 
string x;
string s;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

freopen("scratch.txt", "r", stdin);
freopen("output.txt", "w", stdout);

printf("printf and scanf work faster than cin/cout, but are more complicated to use");
printf("input a, b");
scanf("%d %d", &a, &b);
printf("%d\n", a);
printf("%d\n", b);

printf("getline s cin");
getline(cin, s);
printf("%s\n", s.c_str());

while(cin>>x){

}

    long long x = 1233456789123456789LL;
    int a = 12314;
    long long b = (long long)a*a; //b = -123123312 , as still int

    __int128_t c = (__int128_t)a*a;

cin >> a >> b >> x;
printf("first input a, then b, then string x");
cout << a << " " << b << " " << x << "\n"; //  faster than endl !
return 0;
}