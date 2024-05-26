#include <bits/stdc++.h>
using namespace std;
#define ll long long

// int fib (int n) {
//   if (n == 1) return 0;
//   if (n == 2) return 1;
//   return fib(n-2) + fib(n-1);
// }

// bool prime (int n) {
//   if (n <= 1) return 0;
//   if (n == 2) return 1;
//   if (n % 2 == 0) return 0;
//   for (int i = 3; i <= sqrt(n); i++) {
//     if (n % i == 0) return 0;
//   }
//   return 1;
// }

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t; cin >> t;
  int n;
  bool arr[51] = {0,0,0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0};
  while (t--) {
    cin >> n;
    // if (prime(fib(n))) cout << "prime\n";
    // else cout << "not prime\n";
    if (arr[n] == 1) cout << "prime\n";
    else cout << "not prime\n";
  }
}