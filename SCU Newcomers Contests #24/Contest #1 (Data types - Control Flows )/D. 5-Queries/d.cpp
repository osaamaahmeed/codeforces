#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n; cin >> n;
  int q = 5;
  while (q--) {
    char c; cin >> c;
    int x; cin >> x;
    if (c == '+') n+=x;
    else if (c == '-') n-=x;
    else if (c == '*') n*=x;
  }
  cout << n;
}