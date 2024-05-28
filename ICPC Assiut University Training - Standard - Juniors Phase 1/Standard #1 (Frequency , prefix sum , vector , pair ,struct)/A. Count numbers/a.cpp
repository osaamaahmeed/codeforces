#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n,q; cin >> n >> q;
  vector <int> vec;
  while (q--) {
    int z,x; cin >> z >> x;
    if (z == 1) vec.push_back(x);
    else if (z == 2) cout << count(vec.begin(), vec.end(), x) << endl;
  }
}