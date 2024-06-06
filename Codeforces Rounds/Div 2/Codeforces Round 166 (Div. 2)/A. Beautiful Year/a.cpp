#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  int temp = stoi(s);
    temp++;
    s = to_string(temp);
    while (count(s.begin(), s.end(), s[0]) > 1 || count(s.begin(), s.end(), s[1]) > 1 || count(s.begin(), s.end(), s[2]) > 1 || count(s.begin(), s.end(), s[3]) > 1) {
      int temp = stoi(s);
      temp++;
      s = to_string(temp);
    } 
    cout << s;
}