#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll n; cin >> n;
  if (4 % n == 0) cout << 6;
  else if (n % 4 == 1) cout << 2;
  else if (n % 4 == 2) cout << 4;
  else cout << 8;
}