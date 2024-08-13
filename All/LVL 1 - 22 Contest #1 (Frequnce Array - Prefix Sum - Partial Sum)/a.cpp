#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll check (ll num) {
  ll res = 0;
  while (num) {
    res += num % 10;
    num /= 10;
  }
  return res;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    ll n; cin >> n;
    ll check1 = check(n),check2 = check(pow(n,2));
    if (check1 == check2) cout << "Yes\n";
    else cout << "No\n";
  }
}