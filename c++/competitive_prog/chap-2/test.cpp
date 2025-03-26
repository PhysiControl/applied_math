#include <iostream>
#include <vector>
#include <algorithm>

#define F first
#define S second
#define PB push_back
#define MP make_pair

#define REP(i,a,b) for (int i = a; i <= b; i++)

using namespace std;

int main(){
ios::sync_with_stdio(0);
cin.tie(0);

typedef long long ll; 
ll c = 12345678;
printf("lld\n", c);

typedef vector<int> vi; 
typedef pair<int,int> pi; 

vector<pi> v;
int x1 = 5, y1 = 10;
// Adding a pair (y1, x1) to the vector v using push_back and make_pair
v.push_back(make_pair(y1, x1));
// OR : 
v.PB(MP(y1, x1));

REP(i,1,10){
    printf("Searching for: %d\n", i);
}

long long x = 10; 
long long n = 20; 
long long m = 3; 

for (int i = 1; i<=n; i++ ){
    x = (x*i) %m;
    printf("%lld \n", x);
} 

long double d = x%m;
if (x<0) x += m; 

printf("%.9LF\n",d);

x = 0.3*3+0.1;
printf("%.20lld\n", x);
double a = x; 
double b = x; 

if (abs(a-b) < 1e-9){
    // a and b are equal
    printf("%f\n", abs(a-b));

}

return 0; 

}