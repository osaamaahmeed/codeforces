#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  ll counter = 0;
  for (int i = 0; i < s.size(); i++) if (s[i] == '4' || s[i] == '7') counter++;
  counter == 7 || counter == 4 ? cout << "YES" : cout << "NO";
}