#include <bits/stdc++.h>
using namespace std;
#define ll long long


void myFunc (int n, ll arr[]) {
if (n == -1) return;
if (n % 2 == 0) cout << arr[n] << " ";
myFunc(n-1, arr);
}

int main () {
  int n; cin >> n;
  int index = 0;
  ll arr[n]; 
  for (int i = 0; i < n; i++) cin >> arr[i];
  myFunc(n-1, arr);
}