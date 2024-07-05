#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  int q; cin >> q;
  int n = s.size();
  vector <ll> v(n); fill(v.begin(), v.end(), 0);
  for (int i = 0; i < n; i++) {
    if (s[i] == 'a') v[i]+=1;
  }
  for (int i = 1; i < n; i++) v[i] += v[i-1];
  // for (ll i : v) cout << i << " ";
  // cout << endl;
  while (q--) {
    int l, r; cin >> l >> r;
    if (l == 1) cout << v[r-1] << endl;
    else cout << v[r-1] - v[l-2] << endl;
  }
}