#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int counter = 0;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
        if (arr[j] > arr[j-1]) {
          cout << arr[j-1] << " " << arr[j] << endl;
          counter++;
        } else break;
      }
      
    }
    cout << counter+n << endl;
  }
}