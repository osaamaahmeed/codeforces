#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,k; cin >> n >> k;
  int res = 0;
  while (n--) {
    string s; cin >> s;
    int counter = 0;
    for (int i = 0; i <= k; i++) {
      if (s.find(to_string(i)) != s.npos) counter++;
    }
    if (counter == k+1) res++;
  }
  cout << res;
}