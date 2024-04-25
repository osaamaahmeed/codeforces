#include <bits\stdc++.h>
using namespace std;

int main () {
  int n,q; cin >> n >> q;
  long long arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  for (int i = 1; i < n; i++) arr[i] += arr[i-1];

  while (q--) {
    int l,r; cin >> l >> r;
    long long sum = 0;
    if (l == 1) {
      cout << arr[r-1] << endl; 
      continue;
    } else {
      sum = arr[r-1] - arr[l-2];
      cout << sum << endl;
    }
  }
}