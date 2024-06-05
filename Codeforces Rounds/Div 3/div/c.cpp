// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// bool solve() {
//     int n; cin >> n;
//     int original[n];
//     int after[n];
//     for (int i = 0; i < n; i++) cin >> original[i];
//     for (int i = 0; i < n; i++) cin >> after[i];
//     int m; cin >> m;
//     int arr[m];
//     for (int i = 0; i < m; i++) cin >> arr[m];
//     for (int i = 0; i < n; i++) {
//       bool flag = 1;
//       if (original[i] != after[i]) {
//         for (int j = 0; j < m; j++) {
//           if (arr[j] != after[i]) {flag = false; break;}
//         }
//         if (!flag) return
//       }
//     }
//     return 1;
//   }

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int t; cin >> t;
//   while (t--) {
//     solve() ? cout << "YES\n" : cout << "NO\n";
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    int original[n];
    int after[n];
    for (int i = 0; i < n; i++) cin >> original[i];
    for (int i = 0; i < n; i++) cin >> after[i];
    int m; cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++) cin >> arr[m];
    
}