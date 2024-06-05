#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n];
  for (int i = 0 ; i < n; i++) cin >> arr[i];
  if (*max_element(arr,arr+n) != 3) {cout << 0; return 0;}
  int teams = min(count(arr,arr+n,1), min(count(arr,arr+n,2), count(arr,arr+n,3)));
  cout << teams << endl;
  while (teams--) {
    int temp[3];
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < n; j++) {
        if (arr[j] == i+1) {
          temp[i] = j+1;
          arr[j] = 0;
          break;
        }
      }
    }
    for (int i : temp) cout << i << " ";
    cout << endl;
  }
  // for (int i = 0; i < n; i++) {
  //   int temp[3];
  //   for (int j = 0; j < 3; j++) {
  //     if (arr[i] == j+1) {
  //       temp[j] = i+1;
  //       arr[i] = 0;
  //       break;
  //     }
  //   }
  //   for (int j : temp) cout << i << " ";
  // }
}