#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i <n; i++) cin >> arr[i];
    int res[n-2];
    int index = 0;
    for (int i = 1; i < n; i++) {
      res[i] = gcd(arr[i-1], arr[i]);
    }
    for (int i : res) cout << i << " ";
  }
}