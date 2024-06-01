// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// bool lucky (int n) {
//   while (n > 0) {
//     if (n%10 != 7 || n%10 != 4) return 0;
//     else n/=10;
//   }
//   return 1;
// }

// bool almost (int n) {
//   if (n /4 == 0 || n / 7 == 0) return 1;
//   return 0;
// }

// int main () {
//   ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int n; cin >> n;
//   lucky(n) || almost(n) ? cout << "YES" : cout << "NO";
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int luckyNumbers[14] = {4 , 7, 44, 77, 444, 777, 47, 74, 447, 474, 477, 744, 747, 774};
 
bool luckyNum (int n) {
  string num = to_string(n);
  for (int i = 0; i < num.size(); i++) {
    if (num[i] != '4' || num[i] != '7') return 0;
  }
  return 1;
}
 
bool almost (int n, int arr[]) {
  for (int i = 0; i < 14; i++) {
    if (n % arr[i] == 0) return 1;
  }
  return 0;
}
 
int main () {
  int n; cin >> n;
  // cout << luckyNum(n) << " " << almost(n, luckyNumbers);
  luckyNum(n) || almost(n, luckyNumbers) ? cout << "YES" : cout << "NO"; 
}