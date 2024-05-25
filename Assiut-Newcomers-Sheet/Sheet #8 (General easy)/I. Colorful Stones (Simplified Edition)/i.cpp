#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s,t; cin >> s >> t;
  int pos = 0;
  for (int i = 0; i < t.size(); i++) {
    if (t[i] == s[pos]) pos++;
  }
  cout << pos+1;
}