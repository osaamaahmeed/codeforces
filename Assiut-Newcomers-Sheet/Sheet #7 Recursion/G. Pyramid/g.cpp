#include <bits/stdc++.h>
using namespace std;
#define ll long long

// void myFunc (int n) {
//   if (n == 0) return;
//   myFunc(n-1);
//   if (n > 1) {
//     cout << "\n*";
//     myFunc(n-1);
//   }
// }

int main () {
  int n; cin >> n;
  // myFunc(n);
  while (n) {
    cout << "*\n";
    n--;
    if (n > 1) {
      for (int i = 0; i < n; i++) {
        cout << "*";
      }
    }
  }
}