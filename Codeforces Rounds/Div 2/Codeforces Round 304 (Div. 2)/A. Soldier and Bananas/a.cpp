#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int k,w; ll n; cin >> k >> n >> w;
  ll price = 0;
  for (int i = 1; i <= w; i++) {
    price += (k*i);
  }
  if (price > n) cout << abs(n - price);
  else cout << 0;
}