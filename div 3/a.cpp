#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int x; cin >> x;
    int res = 0;
    int y = 0;
    for (int i = 1; i < x; i++)
    {
      if (gcd(x,i)!=1){
        res = max(res, (gcd(x,i)+i));
        // if (res == gcd(x,i)+i) y = i;
        y = i;
      } else {
        y = i;
      }
    }
    cout << y << endl;
  }
}