#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,t; cin >> n >> t;
  string s; cin >> s;
  for (int i = 0; i < t; i++) {
    if (s[i] == 'B' && s[i+1] == 'G') {
      swap(s[i], s[i+1]);
    }
  }
  cout << s;
}