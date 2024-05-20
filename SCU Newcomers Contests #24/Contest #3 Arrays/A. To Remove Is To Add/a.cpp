#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    ll arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    ll sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    cout << sum << endl;
  }
}