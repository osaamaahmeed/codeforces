#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve (int index, int arr[], int n) {
  int left = INT_MIN,right = INT_MIN;
  int res;
  if (index == 0) {
    left = 0;
    for (int i = index+1; i < n; i++) {
      right = max(right , arr[i]);
    }
    res = abs(left - right);
  }
  else if (index == n-1) {
    right = 0;
    for (int i = 0; i < index-1; i++) {
      left = max(left , arr[i]);
    }
    res = abs(left - right);
  } else {
    for (int i = 0; i < index; i++) {
      left = max(left , arr[i]);
    }
    for (int i = index+1; i < n; i++) {
      right = max(right , arr[i]);
    }
    res = abs(left-right);
  }
  return res;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
  int index = 0;
  int res = INT_MAX;
  while (index < n) {
    res = min(res, solve(index, arr, n));
    index++;
  }
  cout << res;
}