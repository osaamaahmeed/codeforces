#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    string r;
    for (int i = 0; i < n; i++) {
      if (r.find(s[i]) == r.npos) r += s[i];
    }
    sort(r.begin(), r.end());
    string res;
    int rSize = r.size()-1;
    for (int i = 0; i < n; i++) {
      int index = r.find(s[i]);
      int reverseIndex = rSize-index;
      // cout << index << " " << reverseIndex << endl;
      res += r[reverseIndex];
    }
    cout << res << endl;
  }
}