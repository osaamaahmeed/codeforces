#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll n,b,d; cin >> n >> b >> d;
  ll times = 0;
  ll totalSize = 0;
  while (n--) {
    ll a; cin >> a;
    if (a <= b) totalSize+=a;
    if (totalSize > d) {times++; totalSize = 0;}
  }
  cout << times;
}