#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  int res = 0;
  while (n--) {
    int p,q;  cin >> p >> q;
    if (p == q) continue;
    if (p < q && p+2 <= q) res++;
  }
  cout << res;
}