#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int x,y; cin >> x >> y;
  double res = sqrt(pow(x,2)+pow(y,2));
  if (floor(res) != res) cout << "NO";
  else cout << "YES";
}