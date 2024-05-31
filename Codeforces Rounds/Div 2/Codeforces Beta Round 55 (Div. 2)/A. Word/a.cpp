#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  int n = s.size();
  int upper = 0;
  for (int i = 0; i < n; i++) {
    if (s[i] > 64 && s[i] < 91) upper++;
  }
  if (upper > s.size()/2) {
    for (int i = 0; i < n; i++) {
      if (!(s[i] > 64 && s[i] < 91)) {
        cout << char(s[i]-32);
      } else {
        cout << s[i];
      }
    }
  } else {
    for (int i = 0; i < n; i++) {
      if ((s[i] > 64 && s[i] < 91)) {
        cout << char(s[i]+32);
      } else {
        cout << s[i];
      }
    }
  }
}