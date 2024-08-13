#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin >> n >> q;
  string st; cin >> st;
  while (q--) {
    int s,e; cin >> s >> e;
    // vector<char>v;
    // int numL = count(v.begin(), v.end(), 'L');
    // int numR = count(v.begin(), v.end(), 'R');
    int num = 0;
    for (int i = s-1; i <= e-1; i++) {
      if (st[i] == 'L') num++;
      else num--;
    }
    if (numL > numR) {
      cout <<  "Left\n";
    } else if (numR > numL) {
      cout << "Right\n";
    } else cout << "Center\n";
  }
}