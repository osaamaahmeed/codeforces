#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  while (n--) {
    ll x; cin >> x;
    ll res = (x*(x+1)) / 2;
    cout << res << endl;
  }
}