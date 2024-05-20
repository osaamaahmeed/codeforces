#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int a,b,c; cin >> a >> b >> c;
  if (a == b && c == 0) cout << "Islam";
  else if (a == b && c == 1) cout << "Hamza";
  else if (a > b) cout << "Hamza";
  else cout << "Islam";
}