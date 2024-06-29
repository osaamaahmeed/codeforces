#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  sort(arr,arr+n);
  int removelarge = arr[n-2] - arr[0];
  int removesmall = arr[n-1] - arr[1];
  int res = min(removelarge,removesmall);
  cout << res;
}