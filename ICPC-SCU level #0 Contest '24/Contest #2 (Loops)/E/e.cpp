#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll t; cin >> t;
  while (t--) {
    ll n,r; cin >> n >> r;
    if (n == r) {cout << "1"; continue;}
    ll up = 1, down1 = 1, down2 = 1;
    for (int i = 1; i <= n; i++)
            up *= i;
        for (int i = 1; i <= r; i++)
            down1 *= i;
        for (int i = 1; i <= (n - r); i++)
            down2 *= i;

    ll res = up/(down1*down2);
    ll number = 0;
    while (res) {
      number++;
      res /= 10;
    }
    cout << number << endl;
  }
}