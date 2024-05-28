#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  // ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  ll n,q; cin >> n >> q;
  vector <ll> vec;
  for (int i = 0; i < n; i++) {int x; cin >> x; i > 0 ? vec.push_back(x + vec.at(i-1)) : vec.push_back(x);}
  // for (int i : vec) cout << i << " ";
  // cout << endl;
  while (q--) {
    ll l,r; cin >> l >> r;
    l--; r--;
    // cout << r;
    if (l == 0) cout << vec[r] << endl;
    else cout << vec.at(r) - vec.at(l-1) << endl;
  }
}