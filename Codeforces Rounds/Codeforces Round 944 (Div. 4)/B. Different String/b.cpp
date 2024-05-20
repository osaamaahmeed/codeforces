#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    string r = s;
    int temp = 0;
    bool same = true;
    for (int i = 0; i < s.size()-1; i++) {
      if (s[i] != s[i+1]) {same = false; break;}
    }
    if (s.size() == 1 || same) {cout << "NO\n"; continue;}
    else if (s.size() > 1) {
      while (temp < s.size()) {
        if (s[temp] != s[s.size()-1]) {
        swap(r[temp], r[r.size()-1]);
        break;
      } else temp++;
      }
      if (s == r) {cout << "NO\n"; continue;}
      else {cout << "YES\n" << r << endl; continue;}
    } else {cout << "YES\n"; continue;}
  }
}