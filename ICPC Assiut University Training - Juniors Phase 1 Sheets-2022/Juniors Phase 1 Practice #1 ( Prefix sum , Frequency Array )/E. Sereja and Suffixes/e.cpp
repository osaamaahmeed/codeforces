#include <bits/stdc++.h>
using namespace std;
#define ll long long

// int freq[1000000] = {0};
int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
  // for (int i = 0; i < n; i++) freq[arr[i]]++;
  // for (int i = 0; i < m; i++) {
  //   int x; cin >> x;
  //   int index = x-1;
  //   for (int j = 0; j < n; j++) {
  //     if ()
  //   }
  // }
  while (m--) {
    int x; cin >> x;
    int index = x-1;
    int ans = 0;
    vector <int> vec;
    for (int i = index; i < n; i++) {
      if (find(vec.begin(), vec.end(), arr[i]) == vec.end()) {vec.push_back(arr[i]); ans++;}
    }
    cout << ans << endl;
  }
}