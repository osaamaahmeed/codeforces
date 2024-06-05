#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m,q; cin >> n >> m >> q;
  char arr[n][m];
  for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) arr[i][j] = '.';
  while (q--) {
    int r1,c1,r2,c2; cin >> r1 >> c1 >> r2 >> c2;
    char c; cin >> c;
    for (int i = r1-1; i <= r2-1; i++) {
      for (int j = c1-1; j <= c2-1; j++) {
        arr[i][j] = c;
      }
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j];
    }
    cout << endl;
  }
}