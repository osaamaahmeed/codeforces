// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void huh (vector<int>fac, int n) {
//   if (n == 2) {fac.push_back(2); return;}
//   for (int i = 3; i <= sqrt(n); i++) {
//     if (n%i == 0) continue;
//     else fac.push_back(i);
//   }
// }

// int main () {
//   // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
//   int t; cin >> t;
//   while (t--) {
//     int a,b; cin >> a >> b;
//     vector <int> afac;
//     vector <int> bfac;
//     huh(afac, a);
//     huh(bfac, b);
//     int maxN = max(a,b);
//     int minN = min(a,b);
//     bool work = true;
//     for (int i = 0; i < minN; i++) {
//       if (work == 0) break;
//       for (int j = 0; j < maxN; j++) {
//         if (minN == a) {
//           if (afac[i] == bfac[j]) {cout << "YES\n"; work = false;}
//         } else if (minN == b) {
//           if (bfac[i] == afac[j]) {cout << "YES\n"; work = 0;}
//         }
//       }
//     }
//     if (work == 1) cout << "NO\n";
//   }
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void prime_factors(int n, set<int>& fac) {
    while (n % 2 == 0) {
        fac.insert(2);
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            fac.insert(i);
            n /= i;
        }
    }
    if (n > 2) {
        fac.insert(n);
    }
}

int main () {
    // ios_base::sync_with_stdio(0); 
    // cin.tie(0); 
    // cout.tie(0);

    int t; 
    cin >> t;
    while (t--) {
        int a, b; 
        cin >> a >> b;
        
        set<int> afac;
        set<int> bfac;
        
        prime_factors(a, afac);
        prime_factors(b, bfac);
        
        bool common_ancestor = false;
        for (int factor : afac) {
            if (bfac.find(factor) != bfac.end()) {
                common_ancestor = true;
                break;
            }
        }
        
        if (common_ancestor) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
