#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    for (int i = 0; i < n; i++)
    {
      int maxNum = arr[i];
      for (int j = i+1; j < n; j++)
      {
        maxNum = max(maxNum, arr[j]);
        cout << maxNum << " ";
      }
    }
    cout << endl;
  }
}