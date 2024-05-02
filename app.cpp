#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n,k,a; cin >> n >> k >> a;
  double res = (n*k)/a;
  string temp = to_string(res);
  if (temp.find('.') != temp.npos) {
    cout << "double"; return 0;
  }
  cout << res << endl;
  if (res <= 2147483647) cout << "int";
  else cout << "long long";
}