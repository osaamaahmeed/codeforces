#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  string s; cin >> s;
  if (n < s.size()) {
    for (int i = 0; i < n; i++) {
      cout << s[i];
    }
  cout << "...";
  } else {
    cout << s;
  }
}
