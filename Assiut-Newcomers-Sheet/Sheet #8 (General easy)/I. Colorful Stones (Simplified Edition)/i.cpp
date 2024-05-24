#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s,t; cin >> s >> t;
  int size = t.size();
  int pos = 0;
  for (int i = 0; i < size; i++) {
    for (int j = pos; j < size; j++) {
      if (t[i] == s[j]) {pos++; break;}
    }
  }
  cout << pos+1;
}