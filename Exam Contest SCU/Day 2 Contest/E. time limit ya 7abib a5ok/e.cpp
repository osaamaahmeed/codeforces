#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    string s;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      char x; cin >> x;
      if (x != '.') s+=x;
    }
  }
  cout << s << endl;
  }
}