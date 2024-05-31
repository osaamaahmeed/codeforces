#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n];
  int amazing = 0;
  for (int i = 0; i < n; i++) cin >> arr[i];
    int maxScore = arr[0];
    int minScore = arr[0];
  for (int i = 1; i < n; i++) {
    if (maxScore < arr[i]) {maxScore = arr[i];  amazing++;}
    if (arr[i] < minScore) {minScore = arr[i]; amazing++;}
  }
  cout << amazing;
}