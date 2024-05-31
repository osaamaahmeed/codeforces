#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n; cin >> n;
  // int res = 0;
  int arr[n]; 
  for (int i = 0; i < n; i++) cin >> arr[i];
  for (int i = 0; i < n; i++) {
    if (arr[i] > 0) {
      int temp = arr[i];
      int nextIndex = i+1;
      while (temp--) {
        arr[nextIndex] = 0;
        nextIndex++;
      }
    }
  }
  int res = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] == -1) res++;
  }
  cout << res;
}