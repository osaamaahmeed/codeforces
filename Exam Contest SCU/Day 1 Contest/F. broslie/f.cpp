#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  string s;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 1) s+="I love";
    else if (i % 2 == 0) s+="I hate";
    if (i != n-1) s+=" that ";
  }
  s+=" it";
  cout << s;
}