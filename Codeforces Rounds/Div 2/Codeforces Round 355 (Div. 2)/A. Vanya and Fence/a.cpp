#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,h; cin >> n >> h;
  int width = 0;
  while (n--) {
    int a; cin >> a;
    if (a <= h) width++;
    else if (a > h) width+=2;
  }
  cout << width;
}