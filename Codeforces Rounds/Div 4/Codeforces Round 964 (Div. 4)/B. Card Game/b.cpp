#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int a1,a2,b1,b2; cin >> a1 >> a2 >> b1 >> b2;
    int res = 0;
    int r1 = 0,r2 = 0;
    if (a1 > b1) r1++;
    else if (a1 < b1) r2++;
    if (a2 > b2) r1++;
    else if (a2 < b2) r2++;
    if (r1 > r2) res += 2;
    r1=0,r2=0;
    if (a1 > b2) r1++;
    else if (a1 < b2) r2++;
    if (a2 > b1) r1++;
    else if (a2 < b1) r2++;
    if (r1 > r2) res += 2;
    cout << res << endl;
  }
}