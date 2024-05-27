#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  // char vowels[2] = {'a', 'e'};
  // char cons[3] = {'b', 'c', 'd'};
  while (t--) {
    int n; cin >> n;
    string s; cin >> s;
    string temp, res;
    // for (int i = 0; i < n; i++) {
      // if (s[i] == vowels[0] || s[i] == vowels[1]) temp+='v';
      // else if (s[i] == cons[0] || s[i] == cons[1] || s[i] == cons [2]) temp += 'c';
    // }
    // cout << temp << endl;
    for (int i = n-1; i >= 0; i--) {
      if (temp[i] == 'c' && temp[i-1] == 'v' && temp[i-2] == 'c') {
        // cout << s[i] << s[i-1] << s[i-2] << '.';
        res += s[i];
        res += s[i-1];
        res += s[i-2];
        res+= '.';
        i -= 2;
      } else if (temp[i] == 'c' && temp[i-1] == 'v') {
        // cout << s[i] << s[i-1] << '.';
        res += s[i];
        res += s[i-1];
        // i -= 1;
      }
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
  }
}