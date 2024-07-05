#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin >> n >> q;
  ll arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
  ll pre[n+1] = {0};
  while (q--) {
    int l,r; cin >> l >> r; ll val; cin >> val;
    pre[l-1] += val;
    pre[r] -= val;
  }
  for (int i = 1; i < n; i++) pre[i] += pre[i-1];
  for (int i = 0; i < n; i++) cout << pre[i] + arr[i] << " ";
}
  // 1  2  3  4  5  6
  // 0  0  0  0  0  0 
  // 1 2 => 1
  // 1  0  -1 0  0  0
  // 3 5 => 3
  // 1  0  2  0  0  -3
  // 1 5 => 2
  // 3  0  2  0  0  -8
  // 3  3  5  5  5  
  // 1  0  1  0  1
  // 4  3  6  5  6