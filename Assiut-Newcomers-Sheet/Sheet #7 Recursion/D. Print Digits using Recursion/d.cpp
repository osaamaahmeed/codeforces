#include <bits/stdc++.h>
using namespace std;
#define ll long long

void myFunc (string s) {
  for (int i = 0; i < s.size(); i++) cout << s[i] << " ";
}

int main () {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    myFunc(s);
    cout << endl;
  }
}