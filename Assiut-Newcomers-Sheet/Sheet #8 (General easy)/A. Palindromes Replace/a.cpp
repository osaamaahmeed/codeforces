#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  string original = s;
  // if (find(s.begin(), s.end(), '?') == s.end()) {cout << s; return 0;}
  // for (int i = 0; i < s.size(); i++) {
  //   if ()
  // }
  reverse(s.begin(), s.end());
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '?') s[i] = original[i];
  }
  cout << s;
}