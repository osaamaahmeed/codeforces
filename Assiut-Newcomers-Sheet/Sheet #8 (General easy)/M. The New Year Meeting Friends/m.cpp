#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  // ios_base::sync_with_stdio(0);
  // cin.tie(0);
  // cout.tie(0);
  ll x1,x2,x3; cin >> x1 >> x2 >> x3;
  ll point = (x1+x2+x3) / 3;
  ll res = abs(x1 - point) + abs(x2 - point) + abs(x3 - point);
  cout << res;
}