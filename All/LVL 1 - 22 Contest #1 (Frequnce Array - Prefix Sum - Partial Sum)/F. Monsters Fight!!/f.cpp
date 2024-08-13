#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,f; cin >> n >> f;
  vector<int> v(n);
  for (int i = 0; i < n; i++) cin >> v[i];
  for (int i = 1; i < n; i++) v[i] += v[i-1];
  vector<int> points(n+2, 0);
  
  while (f--) {
    int l1,r1,l2,r2; cin >> l1 >> r1 >> l2 >> r2;
    int team1 = (l1 == 1 ? v[r1-1] : v[r1-1] - v[l1-2]);
    int team2 = (l2 == 1 ? v[r2-1] : v[r2-1] - v[l2-2]);
    if (team1 > team2) {
      points[l1-1]++;
      if (r1 < n) points[r1]--;
    } else {
      points[l2-1]++;
      if (r2 < n) points[r2]--;
    }
    // cout << team1 << " " << team2 << endl;
  }
  for (int i = 1; i <= n; i++) points[i] += points[i-1];
  for (int i = 0; i < n; i++) cout << points[i] << " ";
}