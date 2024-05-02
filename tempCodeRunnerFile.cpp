#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n,k,a; cin >> n >> k >> a;
  double res = (n*k)/a;
  string temp = to_string(res);
  for (int i = 0; i < temp.size(); i++) {
    if (temp[i]=='.') {
      cout << "double";
      return 0;
    }
  }
  cout << res << endl;
  if (res <= 2147483647) cout << "int";
  else cout << "long long";
}