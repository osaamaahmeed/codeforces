#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int a = stoi(s) % 10;
    int b = stoi(s) / 10;
    cout << a + b << endl;
  }
}