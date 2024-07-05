#include <bits/stdc++.h>
using namespace std;
#define ll long long

int freq[101] = {0};

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,k; cin >> n >> k;
  int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
  for (int i = 0; i < n; i++) freq[arr[i]]++;
  vector<pair<int,int>>v;
  int index = 0;
  int team = k;
  while (k) {
    if (freq[index] < 1) index++;
    if (index > 100) {break;}
    if (freq[index] >= 1) {
      freq[index] = 0;
      int idx = 0;
      for (int i = 0; i < n; i++) {if (arr[i] == index)idx=i;}
      v.push_back({index, idx});
      k--;
      index = 0;
    }
  }
  v.shrink_to_fit();
  if (v.size() == team) {cout << "YES\n"; for (int i = 0; i < team; i++) cout << v[i].second+1 << " ";}
  else cout << "NO";
}