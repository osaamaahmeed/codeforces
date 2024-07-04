#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,q; cin >> n >> q;
  string s; cin >> s;
  while (q--) {
    string sq; cin >> sq;
    if (sq=="pop_back" && !s.empty()) s.pop_back();
    else if (sq=="front") cout << s.front() << endl;
    else if (sq=="back") cout << s.back() << endl;
    else if (sq=="sort") {int l,r; cin >> l >> r; sort(s.begin()+min(l,r)-1, s.begin()+max(l,r));}
    else if (sq=="reverse") {int l,r; cin >> l >> r; reverse(s.begin()+min(l,r)-1, s.begin()+max(l,r));}
    else if (sq=="print") {int x; cin >> x; cout << s[x-1] << endl;}
    else if (sq=="substr") {int l,r; cin >> l >> r; cout << s.substr(min(l,r)-1, max(l,r)-min(l,r)+1) << endl;}
    else if (sq=="push_back") {char x; cin >> x; s.push_back(x);}
  }
}