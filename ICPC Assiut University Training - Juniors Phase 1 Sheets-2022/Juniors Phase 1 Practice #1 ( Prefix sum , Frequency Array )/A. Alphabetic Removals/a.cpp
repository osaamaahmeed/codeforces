#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,k; cin >> n >> k;
  string s; cin >> s;
  int arr[26];
  fill(arr,arr+26, 0);
  for (int i = 0; i < n; i++) {
    arr[s[i] - 97]++;
  }
  int index = 0;
  while (k--) {
    if (arr[index] != 0) {
      for (int i = 0; i < arr[index]; i++) {
        if (k == 0) break;
        for (int j = 0; j < n; j++) {
          if (s[j] == 97 + index) {
            s.erase(index);
          }
        }
        arr[index]--;
      }
    } else index++;
  }
  cout << s;
}