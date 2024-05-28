#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);
  // cout.tie(0);
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int t; cin >> t;
  int n;
  while (t--) {
    cin >> n;
    ll x;
    ll sum = 0;
    for (int i = 0; i < n; i++) {cin >> x; sum+=x;}
    cout << sum << endl;
  }
}