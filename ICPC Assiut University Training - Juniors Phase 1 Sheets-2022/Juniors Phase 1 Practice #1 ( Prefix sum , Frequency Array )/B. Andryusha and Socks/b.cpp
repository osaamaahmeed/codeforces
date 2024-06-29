#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n*2];
  int freq[n*2] = {0};
  for (int i = 0; i < n*2; i++) {cin >> arr[i]; freq[arr[i]]++;}
  int maxSize = INT_MIN;
  int counter = 0;
  for (int i = 0; i < n*2; i++) {
    if (freq[arr[i]] > 1) {counter++; freq[arr[i]]--;}
    else counter--;
    maxSize = max(maxSize, counter);
  }
  cout << maxSize;
}

// 3
// 2 1 1 3 2 3
