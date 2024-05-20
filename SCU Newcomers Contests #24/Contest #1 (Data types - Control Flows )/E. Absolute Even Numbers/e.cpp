#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool func (ll n) {
  // if (n <= 2) return true;
  for (int i = 3; i <= n; i+=2) {
    if (n % i == 0) return true;
  }
  return false;
}

int main () {
  ll n; cin >> n;
  if (n % 2 == 1 || func(n)) {cout << "NO"; return 0;}
  else cout << "YES";
}