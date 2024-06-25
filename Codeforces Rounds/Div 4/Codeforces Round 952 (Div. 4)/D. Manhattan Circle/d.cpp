// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   ll t; cin >> t;
//   while (t--) {
//     ll n,m; cin >> n >> m;
//     string arr[n];
//     for (ll i = 0; i < n; i++) cin >> arr[i];
//     ll indexOfMax = 0;
//     ll counter = 0;
//     ll newCounter = 0;
//     for (ll i = 0; i < n; i++) {
//       if (arr[i].find('#') == arr[i].npos) continue;
//       for (ll j = 0; j < m; j++) {
//         if (arr[i][j] == '#') newCounter++;
//       }
//       if (newCounter != 0) cout << newCounter << endl;
//       if (newCounter > counter) {counter = newCounter; newCounter = 0; indexOfMax = max(indexOfMax, i);}
//     }
//     ll middleCounter = 0;
//     for (ll i = 0; i < m; i++) {
//       if (arr[indexOfMax][i] == '#') middleCounter++;
//     }
//     middleCounter /= 2;
//     middleCounter += arr[indexOfMax].find('#');
//     // cout << indexOfMax+1 << " " << middleCounter+1 << endl;
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n, m; cin >> n >> m;
    string arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int topx = 0,topy = 0,bottomx = 0,bottomy = 0;
    for (int i = 0; i < n; i++) {
        topx = min (topx, i);
        bottomx = max(bottomx, i);
      for (int j = 0; j < m; j++) {
        if (arr[i][j] == '#') {
          topy = min(topy, j);
          bottomy = max(bottomy, j);
        }
      }
    }
    if (topx == bottomx) {
      cout << topx+1 << " " << topy
    } 
  }
}