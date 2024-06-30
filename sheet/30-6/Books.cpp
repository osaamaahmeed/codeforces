#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; ll t; cin >> n >> t;
  int arr[n]; for (int i = 0; i < n; i++) cin >> arr[i];
  ll res = 0; int counter = 0;
  ll j = 0;
  for (int i = 0; i < n; i++) {
    res += arr[i];
    if (res <= t) {
      counter++;
    } else {
      res -= arr[j];
      j++;
    }
  }
  cout << counter;
}

// i don't fully understand the solution + I don't understand why without the = it get wrong answer !