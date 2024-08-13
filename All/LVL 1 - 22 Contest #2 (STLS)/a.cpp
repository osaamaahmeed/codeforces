// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define endl "\n"

// // string lS (string s) {
// //   string res;
// //   for (int i = 1; i < s.size(); i++) {
// //     res.push_back(s[i]);
// //   }
// //   // res += s[0];
// //   res.push_back(s[0]);
// //   return res;
// // }

// // string rS (string s) {
// //   string res;
// //   for (int i = 0; i < s.size()-1; i++) {
// //     res.push_back (s[i]);
// //   }
// //   res.push_back(s[s.size()-1]);
// //   return res;
// // }

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int t; cin >> t;
//   while (t--) {
//     string s; cin >> s;
//     int n; cin >> n;
//     string q; cin >> q;
//     for (int i = 0; i < q.size(); i++) {
//           string res;
//       if (q[i] == 'L') {
//         for (int j = 1; j < s.size(); j++) {
//             res.push_back(s[j]);
//         }
//         res.push_back(s[0]);
//         s = res;
//       } else if (q[i] == 'R'){
//           for (int j = 0; j < s.size()-1; j++) {
//             res.push_back (s[j]);
//           }
//           res.push_back(s[s.size()-1]);
//           s = res;
//       }
//     }
//     cout << s << endl;
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    int n; cin >> n;
    string q; cin >> q;
    for (int i = 0; i < n; i++) {
      if (q[i] == 'L') {
        char temp = s[0];
        s = s.substr(1, s.size()-1);
        s += temp;
      } else if (q[i] == 'R') {
        char temp = s[s.size()-1];
        s = temp + s.substr(0, s.size()-1);
      }
    }
    cout << s << endl;
  }
}