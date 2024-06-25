#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  int sumOfAll = 0, coins = 1, firstSum = 0;
  for (int i = 0; i < n; i++) sumOfAll+=arr[i];
  sort(arr,arr+n);
  reverse(arr,arr+n);
  for (int i = 0; i < n; i++) {
    firstSum += arr[i];
    if (firstSum > sumOfAll/2) {break;}
    else coins++;
  }
  cout << coins;
}