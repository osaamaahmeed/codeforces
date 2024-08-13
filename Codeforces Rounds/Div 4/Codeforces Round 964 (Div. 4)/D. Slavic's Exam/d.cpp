#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    string s,t; cin >> s >> t;
    int n = s.size(), m = t.size();
    if (n > m) {
      if (count(s.begin(), s.end(), '?') == n) {
        cout << "YES\n";
        int temp = 0;
        for (int i = (n/2)-1; i < n; i++) {
          if (temp == m) break;
          s[i] = t[temp];
          temp++;
        }
        replace(s.begin(), s.end(), '?', 'a');
        cout << s << endl;
      } else if (count(s.begin(), s.end(), '?') < m) {
        cout << "NO\n";
      } else {
        replace(s.begin(), s.end(), '?', 'a');
        cout << "YES\n" << s << endl;
      }
    } else if (n == m) {
      cout << "YES\n" << t << endl;
    } else if (count(s.begin(), s.end(), '?') == 0) {
      cout << "NO\n";
    }
  }
}