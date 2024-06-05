// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int t; cin >> t;
//   while (t--) {
//     int n,f,k; cin >> n >> f >> k;
//     int arr[n];
//     for (int i = 0; i < n; i++) cin >> arr[i];
//     int fav = arr[f-1];
//     sort(arr,arr+n);
//     reverse(arr,arr+n);
//     int temp = count(arr, arr+n, fav);
//     if (arr[k-1] == fav) {
//       if (temp == 1) cout << "YES\n";
//       else if (*max_element(arr,arr+n) == fav && arr[temp-1] == fav && temp == k) 
//       cout << "YES\n";
//       else cout << "MAYBE\n";
//     } else if (arr[k-1] < fav) cout << "YES\n";
//     else if (arr[k-1] > fav) cout << "NO\n";
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int t; cin >> t;
  while (t--) {
    int n,f,k; cin >> n >> f >> k;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    int fav = arr[f-1];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    int c = count(arr,arr+n, fav);
    int cg = 0;
    for (int i = 0; i < n; i++) if (arr[i] > fav) cg++;
    if (cg >= k) cout << "NO\n";
    else if (c + cg <= k) cout << "YES\n";
    else cout << "MAYBE\n";
  }
}