#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  if (s[0] < 64 || s[0] > 91) {cout << "No"; return 0;}
  for (int i = 1; i < s.size(); i++) {
    if (s[i] > 64 && s[i] < 91) {cout << "No"; return 0;}
  }
  cout << "Yes";
}