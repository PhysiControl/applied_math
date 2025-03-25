#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  if (n <= 1) {
    cout << "choose n bigger than 1";
    return -1;
  }
  int l = n - 1;
  int ar[l - 1];
  int b;

  for (int i = 0; i < l; i++) {
    cin >> b;

    for (int c = 0; c <= i; c++) {
      if (ar[c] != b){
        ar[i] = b;
        break;
      }
      else if (ar[c] == b) {
        ar[i] = 0;
        cout << "already typed in, choose another variable!";
        --i;
        break;
      }
    }
    cout << ar[i] << " ";
  }

  return 0;
}
