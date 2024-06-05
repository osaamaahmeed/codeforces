#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  string problems = "ABCDEFG";
  while (t--) {
    int n,m; cin >> n >> m;
    string s; cin >> s;
    int counter = 0;
    while (m--) {
      // int index = 0;
    for (int i = 0; i < problems.size(); i++) {
      if (s.find(problems[i]) != s.npos) s[s.find(problems[i])] = 'z';
      else counter++; 
    }
    }
    cout << counter << endl;
  }
}