#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  bool print = false;
  if (s.size() < 7) cout << "NO";
  else {
    for (int i = 0; i < s.size(); i++) {
      bool flag = true;
      for (int j = i+1; j < i+7; j++) {
        if (s[i] != s[j]) {
          flag = false;
          break;
        }
      }
      if (flag) {print = true; break;}
    }
    print ? cout << "YES" : cout << "NO";
  }
}