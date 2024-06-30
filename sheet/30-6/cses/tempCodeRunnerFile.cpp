#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int temp = n;
  int res = 1;
  vector<pair<int,int>> p;
  while (temp--) {
    ll a,b; cin >> a >> b;
    p[n-temp].first = a;
    p[n-temp].second = b;
  }
  sort(p.begin(), p.end());
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (p[i].second == p[j].first) res++;
    }
  }
  cout << res;
}