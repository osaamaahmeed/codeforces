#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  int arr[m];
  for (int i = 0; i < m; i++) cin >> arr[i];
  sort(arr,arr+m);
  reverse(arr,arr+m);
  int minDiff = INT_MAX;
  for (int i = 0; i <= m-n; i++) {
    int maxNum = *max_element(arr+i,arr+n+i);
    int minNum = *min_element(arr+i,arr+n+i);
    // cout << "before: " << minDiff << endl;
    // cout << maxNum << " " << minNum << endl;
    minDiff = min(minDiff,maxNum-minNum);
    // cout << "after: " << minDiff << endl;
  }
  cout << minDiff;
}