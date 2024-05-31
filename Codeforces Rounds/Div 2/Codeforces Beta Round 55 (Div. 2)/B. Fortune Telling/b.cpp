#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll n; cin >> n;
  if (n == 1) {
    ll x; cin >> x;
    x % 2 == 1 ? cout << x : cout << 0;
  }
  if (n > 1) {
    ll smallOdd = 999;
    ll temp = n;
    ll sum = 0;
    while (temp--) {
      ll x; cin >> x;
      if (x % 2 == 1 && x < smallOdd) smallOdd = x;
      sum += x;
    }
    if (sum % 2 == 1) cout << sum;
    else cout << sum-smallOdd;
  }
}