#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,k; cin >> n >> k;
  string s; cin >> s;
  for (int i = 'a'; i <= 'z'; i++) {
    if (k == 0) break;
    for (int j = 0; j < s.size(); j++) {
      if (s[j] == char(i)) {
        k--;
        s[j] = ' ';
      }
      if (k == 0) break;
    }
  }
  for (int i = 0; i < s.size(); i++) if (s[i] != ' ') cout << s[i];
}

/* Resolving the problem        => time limit */
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int n,k; cin >> n >> k;
//   string s; cin >> s;
//   int freq[123] = {0};
//   for (int i = 0; i < n; i++) freq[s[i]]++;
//   // for (int i = 0; i < 123; i++) if (freq[i] > 0) cout << char(i) << " " << freq[i] << endl;
//   int firstIndex = 97;
//   while (true) {
//     if (k == 0) break;
//     if (freq[firstIndex] > 0) {
//       for (int i = 0; i < n; i++) {
//         if (s[i] == char(firstIndex)) {k--; s[i] = ' '; break;}
//       }
//       freq[firstIndex]--;
//     } else firstIndex++;
    
//   }
//   for (int i = 0; i < n; i++) if (s[i] != ' ') cout << s[i];
// }