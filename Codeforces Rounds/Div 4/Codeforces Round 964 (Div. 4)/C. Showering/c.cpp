#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n,s,m; cin >> n >> s >> m;
    vector<pair<int,int>>vp(n);
    for (int i = 0; i < n; i++) {
      int a,b; cin >> a >> b;
      vp[i].first = a;
      vp[i].second = b;
    }
    sort(vp.begin(), vp.end());
    if (vp[0].first >= s) {
      cout << "YES\n";
    } else if (10 - vp[n-1].second >= s) {
      cout << "YES\n";
    } else {
      bool rn = 1;
      for (int i = 0; i < n-1; i++) {
        if (vp[i+1].first - vp[i].second >= s) {
          cout << "YES\n";
          rn = 0;
          break;
        }
      }
      if (rn) cout << "NO\n";
    }
  }
}