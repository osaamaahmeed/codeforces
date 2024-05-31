#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int xSum = 0, ySum = 0, zSum = 0;
  while (n--) {
    int x,y,z; cin >> x >> y >> z;
    xSum += x;
    ySum += y;
    zSum += z;
  }
  if (xSum || ySum || zSum) cout << "NO";
  else cout << "YES";
}