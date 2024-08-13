#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

void solve (ll x) {
  int counter = 0;
  int start = 2;
  string s;
  while (start != x) {
    if (x % 2 == 0) {x/=2; counter++; s.push_back('2');}
    else {x--; counter++; s.push_back('1');}
  }
  cout << counter << endl;
  for (int i = s.size()-1; i >= 0; i--) cout << s[i];
  cout << endl;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    ll x; cin >> x;
    solve(x);
  }
}