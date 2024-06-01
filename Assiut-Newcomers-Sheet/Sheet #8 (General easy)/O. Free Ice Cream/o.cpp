#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; 
  cin >> n;
  ll x; cin >> x;
  int kids = 0;
  while (n--) {
    char c; ll d;
    cin >> c >> d;
    if (c == '+') x+=d;
    else if (c == '-') if (x < d) kids++; else x-=d;
  }
  cout << x << " " << kids;
}