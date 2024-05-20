#include <bits/stdc++.h>
using namespace std;
#define ll long long

void myFunc (ll n) {
  if (n == 0) return;
  myFunc(n/2);
  cout << n % 2;
}

int main () {
  int t; cin >> t;
  while (t--) {
    ll n; cin >> n;
    myFunc(n);
    cout << endl;
  }
}