#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  while(n--) {
    int a,b; cin >> a >> b;
    ll res = 0;
    while (a--) res += 2;
    while (b--) res += 1;
    res % 2 == 1 ? cout << "yes\n" : cout << "no\n";
  }
}