#include <bits/stdc++.h>
using namespace std;
#define ll long long

int myFunc (int n, int arr[]) {
  if (n == 0) return arr[0];
  return 
}

int main () {
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << myFunc(n-1, arr);
}