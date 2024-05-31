#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  if (s.find("0000000") || s.find("1111111")) cout << "YES";
  else cout << "NO";
}