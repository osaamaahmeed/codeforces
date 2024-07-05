#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin >> n >> q;
  vector<ll> a(n); for (int i = 0; i < n; i++) cin >> a[i];
  while (q--) {
    string s; cin >> s;
    if (s=="pop_back" && !a.empty()) a.pop_back();
    else if (s=="front") cout << a.front() << endl;
    else if (s=="back") cout << a.back() << endl;
    else if (s=="sort") {ll l,r; cin >> l >> r; sort(a.begin()+min(l,r)-1, a.begin()+max(l,r));}
    else if (s=="reverse") {ll l,r; cin >> l >> r; reverse(a.begin()+min(l,r)-1, a.begin()+max(l,r));}
    else if (s=="print") {ll x; cin >> x; cout << a[x-1] << endl;}
    else if (s=="push_back") {ll x; cin >> x; a.push_back(x);}
  }
}