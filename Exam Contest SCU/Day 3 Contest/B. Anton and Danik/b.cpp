#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  if (count(s.begin(), s.end(), 'A') > count(s.begin(), s.end(), 'D')) {
    cout << "Anton";
  } else if (count(s.begin(), s.end(), 'A') < count(s.begin(), s.end(), 'D')) {
    cout << "Danik";
  } else cout << "Friendship";
}