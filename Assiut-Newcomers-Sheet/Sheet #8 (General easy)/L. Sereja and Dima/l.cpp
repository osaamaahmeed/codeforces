#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int x = 0,y = 0;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  int frontIndex = 0, backIndex = n-1;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {if (arr[frontIndex] > arr[backIndex]) {x +=arr[frontIndex]; frontIndex++;} else {x += arr[backIndex]; backIndex--;}}
    else {if (arr[frontIndex] > arr[backIndex]) {y +=arr[frontIndex]; frontIndex++;} else {y += arr[backIndex]; backIndex--;}}
  }
  cout << x << " " << y;
}