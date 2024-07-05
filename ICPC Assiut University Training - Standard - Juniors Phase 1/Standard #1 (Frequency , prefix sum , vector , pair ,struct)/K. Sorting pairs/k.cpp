#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  vector<pair<string,int>>vp;
  while (n--) {
    string s; cin >> s;
    ll x; cin >> x;
    vp.push_back({s,x});
  }
  
  for (auto i : vp) cout << i.first << " " << i.second << endl;
}