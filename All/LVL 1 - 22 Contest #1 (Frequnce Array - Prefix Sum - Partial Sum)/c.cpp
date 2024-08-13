#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    // ll freq[10000000000] = {0};
    map <ll, ll> m;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x;
        m[x]++;
      }
    ll sum = 0;
    for (auto i:m )
    {
      if(i.second==2)sum++;
      else if(i.second>2)sum+=((i.second*(i.second-1))/2);

    }
    cout << sum << endl;
  }
}