#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  while (n--) {
    int a = 0,b = 0;
    string s; cin >> s;
    for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'A') a++;
      else if (s[i] == 'B') b++;
    }
    a > b ? cout << "A\n" : cout << "B\n";
  }
}