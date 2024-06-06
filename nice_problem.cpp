#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int arr[5];
  for (int i = 0; i < 5; i++) cin >> arr[i];
  sort(arr,arr+5);
  for (int i = 0; arr[i] < 0; i++) {
    int temp = 0;
    int index = 4;
    while (arr[index] > 0 && arr[index] < abs(arr[i])) {
      index--
    }
    // for (int j = 4; arr[j] > 0; j--) {
    //   if (arr[j] > abs(arr[i])) continue;
    //   int temp = 0;
      
    // }
  }
  cout << "no substes with sum 0";
}