#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  ll arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  ll x = arr[0];
  for (int i = 1; i < n; i++) {
    x = x ^ arr[i];
  }
  cout << x;
}