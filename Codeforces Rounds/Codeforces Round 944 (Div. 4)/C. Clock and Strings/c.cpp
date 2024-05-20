#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int a,b,c,d; cin >> a >> b >> c >> d;
    string temp;
    for (int i = 1; i <= 12; i++) {
      if (i == a || i == b) temp += 'a';
      if (i == c || i == d) temp += 'b';
    }
    if (temp == "abab" || temp == "baba") cout << "Yes\n";
    else cout << "No\n";
  }
}