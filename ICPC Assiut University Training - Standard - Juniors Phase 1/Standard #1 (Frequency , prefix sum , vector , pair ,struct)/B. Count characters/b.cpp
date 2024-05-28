#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  string r;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] > 100 && s[i] < 133 ) s[i] += 32;
    if (r.find(s[i]) == r.npos) r += s[i];
  }
  for (int i = 0; i < s.size(); i++) {
    
  }
}