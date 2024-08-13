#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    ll arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    cout << arr[n-1] * arr[n-2] << endl;
  }
}