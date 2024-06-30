#include <bits/stdc++.h>
using namespace std;
#define ll long long

int freq[1000000] = {0};
int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
  int suffix[n] = {0};
  for (int i = n-1; i >= 0; i--) {
    freq[arr[i]]++;
    if (freq[arr[i]] == 1) suffix[i] = 1;
  }
  for (int i = n-2; i >= 0; i--) {
    suffix[i]+=suffix[i+1];
  }
  // for (int i = 0; i < n; i++) cout << suffix[i] << " ";
  while (m--) {
    int x; cin >> x;
    cout << suffix[x-1] << "\n";
  }
}