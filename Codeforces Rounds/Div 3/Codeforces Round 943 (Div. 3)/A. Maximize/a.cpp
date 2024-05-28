#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int x; cin >> x;
    int maxNum = 0;
    int y = 0;
    for (int i = 1; i < x; i++) {
      if (gcd(x,i)) {maxNum = gcd(x,i); y=i;}
    }
    cout << y << endl;
  }
}