#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  ll result = 0;
  for (int i = 2; i < n; i++)
  {
    for (int j = 1; j < i-1; j++)
    {
      result += arr[i-2] - arr[j-1];
    }
  }
  cout << result;
}