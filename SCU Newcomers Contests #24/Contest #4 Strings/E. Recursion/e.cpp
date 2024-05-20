#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string n; ll k; cin >> n >> k;
  while (k--) {
    string temp = n;
    sort(n.begin(), n.end());
    sort (temp.rbegin(), temp.rend());
    ll g = stoi(temp),h = stoi(n),f = g-h;
    if (f == 0) {cout << "0"; return 0;}
    n = to_string(f);
  }
  cout << n;
}