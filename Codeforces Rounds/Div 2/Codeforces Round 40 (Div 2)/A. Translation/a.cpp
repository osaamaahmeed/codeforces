#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s,t; cin >> s >> t;
  string temp;
  for (int i = s.size()-1; i > -1; i--) temp += s[i];
  // cout << temp << endl;
  if (temp == t) cout << "YES";
  else cout << "NO";

}