#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string x,y; cin >> x >> y;
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  if (x != y && x.substr(y)) cout << -1;
  else cout << x;
}