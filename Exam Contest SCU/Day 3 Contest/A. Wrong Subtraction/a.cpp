#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll n; cin >> n;
  int k; cin >> k;
  while (k--) {
    if (n%10 != 0) {
      n--;
    } else if (n%10 == 0) {
      n/=10;
    }
  }
  cout << n;
}