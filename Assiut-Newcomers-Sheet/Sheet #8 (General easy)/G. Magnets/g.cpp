#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  string all;
  int res = 1;
  while (n--) {
    string s; cin >> s;
    all += s;
  }
  for (int i = 0; i < all.size()-2; i+=2) {
    if (all[i] != all[i+2]) res++;
  }
  cout << res;
}