#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  ll n,q; cin >> n >> q;
  vector <ll> vec;
  for (int i = 0; i < n; i++) {int x; cin >> x; vec.push_back(x);}
  while (q--) {
    ll l,r,val; cin >> l >> r >> val;
    l--; r--;
    for (int i = l; i <= r; i++) vec[i] += val;
  }
  for (int i : vec) cout << i << " ";
}