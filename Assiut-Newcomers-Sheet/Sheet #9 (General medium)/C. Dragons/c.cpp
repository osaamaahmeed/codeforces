#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll s,n; cin >> s >> n;
  ll dragon[n];
  ll y[n];
  for (ll i = 0; i < n; i++) cin >> dragon[i];
  for (ll i = 0; i < n; i++) cin >> y[i];
  for (ll i = 0; i < n; i++) {
    if (dragon[i] < s) s+=y[i];
    else {cout << "NO\n"; return 0;}
  }
  cout << "YES\n";
}