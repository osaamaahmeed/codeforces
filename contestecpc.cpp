#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  if (n/m >= 150) cout << "VERY HAPPY";
  else if (n/m < 150 && n/m >= 100) cout << "HAPPY";
  else if (n/m < 100) cout << "SAD";
}