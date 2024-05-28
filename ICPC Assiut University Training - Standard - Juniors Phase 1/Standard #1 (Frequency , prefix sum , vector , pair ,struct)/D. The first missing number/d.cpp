#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n,m; cin >> n >> m;
  vector <int> vec;
  for (int i = 0; i < n; i++) {int x; cin >> x; vec.push_back(x);}
  for (int i = -m; i <= m; i++) {
    if (find(vec.begin(), vec.end(), i) == vec.end()) {
      cout << i;
      return 0;
    }
  }
}