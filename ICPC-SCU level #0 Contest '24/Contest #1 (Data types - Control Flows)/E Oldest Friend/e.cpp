#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int x; cin >> x;
  int a,b,c; cin >> a >> b >> c;
  int ans = 0;
  if (a < x) ans = max(ans, a);
  if (b < x) ans = max(ans, b);
  if (c < x) ans = max(ans, c);

  if (ans == a) cout << "Mazen";
  else if (ans == b) cout << "Islam";
  else if (ans == c) cout << "Hamza";
  else cout << "Mahmoud is the youngest one.";
}