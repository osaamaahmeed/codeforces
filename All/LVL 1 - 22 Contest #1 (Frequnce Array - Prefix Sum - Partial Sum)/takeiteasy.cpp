#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    ll even=0,odd=0;
    while (n--) {
      ll x;
      cin >> x;
      if (x % 2 == 0) even++;
      else odd++;
    }
    
    if (even == odd && even%2==0) {
      cout << even/2 << endl;
    } else if (even > odd && even % 2 == 0) {
      cout << even/2 << endl;
    } else if (odd > even && odd % 2 == 0) {
      cout << odd/2 << endl;
    } else {
      cout << -1 << endl;
    }
  }
}