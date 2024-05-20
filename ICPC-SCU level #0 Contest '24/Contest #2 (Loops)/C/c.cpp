#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  double  temp = n;
  while (n--) {
    ll x; cin >> x;
    if (n+1 == ceil(temp/2)) {cout << x; break;}
  }
}