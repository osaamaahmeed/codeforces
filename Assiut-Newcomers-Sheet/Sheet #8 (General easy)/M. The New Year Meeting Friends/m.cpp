#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int x1,x2,x3; cin >> x1 >> x2 >> x3;
  int arr[3] = {x1,x2,x3};
  sort(arr,arr+3);
  int res = (arr[1] - arr[0]) + (arr[2] - arr[1]);
  cout << res;
}