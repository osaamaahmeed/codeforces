#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m,q; cin >> n >> m >> q;
  ll arr[n][m];
  for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> arr[i][j];
  while (q--) {
    ll ans = 0;
    int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    pair<int,int>p1 = {x1,y1},p2 = {x2,y2};
    for (int i = p1.first-1; i < p2.first-1; i++) {
      for (int j = p1.second-1; j < p2.second-1; j++) {
        ans += arr[i][j];
      }
    }
  cout << ans << endl;
  }
}

// 1  2  3  4  5  0
// 5  3  2  2  9  0
// 2  4  8  5  11 0
// 10 12 4  9  4  0
// 1  1  1  1  1  0
// 0  0  0  0  0  0

// (1,1) => (5,5) = 110
// (3,4) => (5,4) = 15
// 5 
// 9 
// 1 
// (1,2) => (1,2) = 2
// 2
// (1,3) => (3,5) = 49
// 3  4  5
// 2  2  9
// 8  5  11