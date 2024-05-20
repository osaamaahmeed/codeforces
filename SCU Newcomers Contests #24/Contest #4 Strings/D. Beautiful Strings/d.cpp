#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s1,s2; cin >> s1 >> s2;
  string biggest = max(s1.size(), s2.size()) == s1.size() ? s1 : s2;
  string lowest = biggest == s1 ? s2 : s1;
  for (int i = 0; i < biggest.size(); i++) {
    for (int j = 0; j < lowest.size(); j++) {
      if (biggest[i] == lowest[j]) {
        cout << "Yes";
        return 0;
      }
    }
  }
  cout << "No";
}