#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll arr[4];
  for (int i = 0; i < 4; i++) cin >> arr[i];
  sort(arr,arr+4);
  int counter = 0;
  for (int i = 1; i < 4; i++) {
    if (arr[i] == arr[i-1]) counter++;
  }
  cout << counter;
}