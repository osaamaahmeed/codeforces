#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n,m; cin >> n >> m;
  int arr1[n], arr2[m];
  for (int i = 0; i <n; i++) cin >> arr1[i];
  for (int i = 0; i < m; i++) cin >> arr2[i];
  ll sum1 = 0,sum2 = 0;
  for (int i = 0; i < n; i++) sum1+=arr1[i];
  for (int i = 0; i < m; i++) sum2+=arr2[i];
  // cout << sum1 << endl << sum2 << endl;
  if (sum1 == sum2) cout << "Yes";
  else cout << "No";
}