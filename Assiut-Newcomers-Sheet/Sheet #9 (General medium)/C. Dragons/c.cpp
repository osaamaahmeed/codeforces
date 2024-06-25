#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll s,n; cin >> s  >> n;
  vector<pair<ll,ll>> vp;
  for (ll i = 0; i < n; i++) {
    ll x,y; cin >> x >> y;
    vp.push_back({x,y});
  }
  sort(vp.begin(),vp.end());
  // if (s < vp[0].first) cout << "NO";
    for (ll i = 0; i < n; i++) {
      if (s > vp[i].first) s+= vp[i].second;
      else {cout << "NO"; return 0;}
    }
    cout << "YES";
}