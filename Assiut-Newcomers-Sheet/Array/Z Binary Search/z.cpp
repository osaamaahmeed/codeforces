#include <bits\stdc++.h>
using namespace std;

int binary_search (int arr[], int l, int r, int key) {
  while (l <= r) {
    int m = (r + l) / 2;
    if (arr[m] == key) return m;
    else if (arr[m] < key) l = m+1;
    else r = m-1;
  }
  return -1;
}

int main () {
  int n,q;
  cin >> n >> q;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr, arr+n);
  while (q--) {
    int x; cin >> x;
    int result = binary_search(arr, 0, n-1, x);
    if (result == -1) cout << "not found" << endl;
    else cout << "found"<< endl;
  }
  
}