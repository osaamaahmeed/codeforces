// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string S;
//     cin >> S;

//     int n = S.size();
//     bool possible = true;

//     for (int i = 0; i < n / 2; ++i) {
//         if (S[i] == '?' && S[n - i - 1] == '?') {
//             S[i] = S[n - i - 1] = 'a';
//         } else if (S[i] == '?' && S[n - i - 1] != '?') {
//             S[i] = S[n - i - 1];
//         } else if (S[i] != '?' && S[n - i - 1] == '?') {
//             S[n - i - 1] = S[i];
//         } else if (S[i] != S[n - i - 1]) {
//             possible = false;
//             break;
//         }
//     }

//     if (n % 2 == 1 && S[n / 2] == '?') {
//         S[n / 2] = 'a';
//     }

//     if (!possible) {
//         cout << "-1" << endl;
//     } else {
//         cout << S << endl;
//     }

//   return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool pali (string s) {
  string temp = s;
  reverse(temp.begin(), temp.end());
  return temp == s;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  if (count(s.begin(), s.end(), '?') == s.size()) {for(int i = 0; i < s.size(); i++) s[i] = 'a'; cout << s; return 0;}

  string x = s;
  reverse(x.begin(), x.end());
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '?' && x[i] != '?') {
      s[i] = x[i];
    }
  }
  if (s[0] == s[s.size()-1] && find(s.begin(), s.end(), '?') != s.end()) {
    for (int i = 1; i < s.size()-1; i++) s[i] = 'a';
  }
  // cout << s << endl;
  pali(s) ? cout << s : cout << -1;
}