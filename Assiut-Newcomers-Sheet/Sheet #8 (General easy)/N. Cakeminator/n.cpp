#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  string arr[n];
  int res = 0;
  bool s[n][m];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    for (int j = 0; j < m; j++) s[i][j] = 0;
  }
  for (int i = 0; i < n; i++) {
    bool has = false;
    for (int j = 0; j < m; j++) {
      if (arr[i][j] == 'S') {has = true; break;}
    }
    if (!has) {
      for (int j = 0; j < m; j++) {
        res++;
        s[i][j] = 1;
      }
    }
  }
  for (int i = 0; i < m; i++) {
    bool has = false;
    for (int j = 0; j < n; j++) {
      if (arr[j][i] == 'S') {has = true; break;}
    }
    if (!has) {
      for (int j = 0; j < n; j++) {
        if (!s[j][i]) {
          res++;
          s[j][i] = 1;
        }
      }
    } 
  }
  // for (int i = 0; i < n; i++) {
  //   for (int j : s[i]) cout << j;
  //   cout << endl;
  // }
  cout << res;
}