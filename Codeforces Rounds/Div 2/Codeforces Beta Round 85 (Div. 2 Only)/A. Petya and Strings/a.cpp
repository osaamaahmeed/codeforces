#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s,t; cin >> s >> t;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] > 64 && s[i] < 91) s[i] += 32;
    if (t[i] > 64 && t[i] < 91) t[i] += 32;
  }
  if (s < t) cout << "-1";
  else if (s > t) cout << "1";
  else if (s == t) cout << "0"; 
}