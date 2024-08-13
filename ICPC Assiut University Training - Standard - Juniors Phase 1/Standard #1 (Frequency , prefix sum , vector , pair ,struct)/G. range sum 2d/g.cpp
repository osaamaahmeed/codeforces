#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m,q; cin >> n >> m >> q;
  vector<vector<ll>>v(n+1, vector<ll>(m+1, 0));

  // vector<vector<int>>pre(n+1, vector<int>(m+1, 0));
  for (int i = 1; i <= n; i++) for (int j = 1; j <= m; j++) cin >> v[i][j];

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      v[i][j] += v[i][j-1];
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      v[i][j] += v[i-1][j];
    }
  }

  while (q--) {
    int x1,x2,y1,y2; cin >> x1 >> y1 >> x2 >> y2;
    cout << v[x2][y2] + v[x1-1][y1-1] - v[x1-1][y2] - v[x2][y1-1] << endl;
  }
}