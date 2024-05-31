#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int arr[n];
    bool square = true;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n-1; i++) {
      if (arr[i] == 0 || arr[i+1] == 0) continue;
      if (arr[i] != arr[i+1]) {square = false; break;}
    }
    square ? cout << "SQUARE\n" : cout << "TRIANGLE\n";
  }
}