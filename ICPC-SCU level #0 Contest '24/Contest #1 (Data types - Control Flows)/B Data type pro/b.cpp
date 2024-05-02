#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n,x; cin >> n >> x;
  if (x <= n) cout << x;
  else cout << x % (n+1);
}