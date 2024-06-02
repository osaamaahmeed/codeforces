#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int police = 0, crimes = 0;
  while (n--) {
    int x; cin >> x;
    if (x > 0) police+=x;
    else if (x == -1) {
      if (police > 0) police--;
      else crimes++;
    }
  }
  cout << crimes;
}