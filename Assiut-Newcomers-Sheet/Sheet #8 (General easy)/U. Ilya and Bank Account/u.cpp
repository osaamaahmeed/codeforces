#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  if (s[0] != '-') cout << s;
  else {
    int lastIndex = s.size()-1;
    if (s[lastIndex] > s[lastIndex-1]) s.erase(lastIndex,1);
    else s.erase(lastIndex-1,1);
    if (stoi(s) >= 0) {s.erase(0, 1); cout << s;}
    else cout << s;
  }
  // cout << s;
}