#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n; cin >> n;
  ll arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  ll sum = 0;
  for (int i = 0; i < n; i++) sum += (arr[i]*(i+1));
  cout << sum; 
}