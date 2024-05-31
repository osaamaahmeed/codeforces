#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  string res;
  while (s.find("WUB") != s.npos) {
    s.replace(s.find("WUB"), 3, " ");
  }
  for (int i = 0; i < s.size()-1; i++) {
    if (s[i] == ' ' && s[i+1] == ' ') s.erase(s.begin()+i);
  }
  while (s[0] == ' ') {
    s.erase(s.begin());
    s.shrink_to_fit();
  }
  cout << s;
}