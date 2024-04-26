#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--)
  {
    string s; cin >> s;
    int n = atoi(&s[s.size()-1]);
    if (n % 2 == 0) cout << "Good\n";
    else cout << "Evil\n";
  }
}