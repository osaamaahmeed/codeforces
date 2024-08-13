#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bool flag1 = 0;
  for (int i = n-1; i >= 0; i--) {
    if (flag1) {flag1 = !flag1; continue;}
    else {
      cout << arr[i] << " ";
    }
    flag1 = !flag1;
  }
  bool flag2;
  if (n % 2 == 1) flag2 = 0;
  else flag2 = 1;
  
  for (int i = 0; i < n; i++) {
    if (flag2) {
      cout << arr[i] << " ";
      flag2 = !flag2;
    } else {
      flag2 = !flag2;
      continue;
    }
  }
}