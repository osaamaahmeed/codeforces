#include <bits\stdc++.h>
using namespace std;
#define ll long long

// int countDecimal (int n) {
//   int counter = 0;
//   for (int i = 0; i <= n; i++)
//   {
//     int num = i;
//     while (num > 0)
//     {
//       if (num % 10 == 7) counter++;
//       num /= 10;
//     }
//   }
//   return counter;
// }

// int counterOctal (int n) {
//   int counter = 0;
//   for (int i = 0; i <= n; i++)
//   {
//     int num = i;
//     while (num > 0) {
//       if (num % 8 == 7) counter++;
//       num /= 8;
//     }
//   }
//   return counter;
// }

// ll count (ll n) {
//   ll counter = 0;
//   for (ll i = 1; i <= n; i++)
//   {
//     ll num = i;
//     while (num > 0)
//     {
//       if (num % 10 == 7 || num % 8 == 7) counter++;
//       num /= 10;
//     }
//   }
//   return counter;
// }

ll count(ll n) {
    ll counter = 0;
    for (ll i = 1; i <= n; i++) {
        ll num = i;
        bool foundSeven = false;
        while (num > 0) {
            if (num % 10 == 7) {
                foundSeven = true;
                break;
            }
            num /= 10;
        }
        if (foundSeven) {
            counter++;
            continue; // Skip counting octal representation if decimal has 7
        }
        num = i;
        while (num > 0) {
            if (num % 8 == 7) {
                counter++;
                break;
            }
            num /= 8;
        }
    }
    return counter;
}

int main () {
  ll n; cin >> n;
  ll result = count(n);
  cout << n - result;
}

// int q; cin >> q;
  // while (q--) {
  //   char c; cin >> c;
  //   int num; cin >> num;
  //   vector <int> v;
  //   if (c == '>') v.push_back(num);
    
  // }