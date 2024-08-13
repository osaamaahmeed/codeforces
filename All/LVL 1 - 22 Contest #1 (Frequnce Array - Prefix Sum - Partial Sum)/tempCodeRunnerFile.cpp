#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  ll x;
  ll sum1 = 0,sum2 = 0;
  int index = 0;
  while (n--) {
    cin >> x;
    if (index % 2 == 0) sum1+=x;
    else sum2+=x;
    index++;
  }
  cout << max(sum1,sum2);
}