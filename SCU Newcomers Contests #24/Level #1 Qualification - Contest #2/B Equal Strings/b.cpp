#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s,t; cin >> s >> t;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i] == '?' || t[i] == '?') continue;
    if (s[i] != t[i]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}