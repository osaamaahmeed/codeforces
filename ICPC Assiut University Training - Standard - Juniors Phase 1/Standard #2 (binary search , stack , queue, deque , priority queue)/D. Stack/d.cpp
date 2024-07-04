#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int q; cin >> q;
  stack<ll>st;
  while (q--) {
    string s; cin >> s;
    if (s=="push") {ll x; cin >> x; st.push(x);}
    else if (s=="top") cout << st.top() << endl;
    else if (s=="pop") st.pop();
  }
}