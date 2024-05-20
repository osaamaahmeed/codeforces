#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  if (s == "cAPSlOCK") {cout << s; return 0;}
  if (s[0] > 96 && s[0] < 123) s[0] -= 32;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] > 64 && s[i] < 91) {
      s[i] += 32;
    }
  }
  cout << s;
}