// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long

// // void myFunc (int n, ll arr[]) {
// //   bool run = false;
// //   for (int i = 0; i < n-1; i++) {
// //     if (arr[i] != arr[i+1]) {run = true; break;}
// //   }
// //   if (run) {
// //     string s;
// //   int temp = 0;
// //   s += 'R';
// //   ll rangeR = arr[temp];
// //   ll rangeB = arr[n-1] - arr[temp+1];
// //   while (temp < n-1) {
// //     rangeR = arr[temp];
// //     rangeB = arr[n-1] - arr[temp+1];
// //     if (rangeR != rangeB) {
// //       for (int i = temp+1; i < n; i++) s+="B";
// //       break;
// //     } else if (rangeR == rangeB) {temp++; s+='R';}
// //   }
// //   if (temp == n-1) {cout << "NO\n"; return;}
// //   else {cout << "YES\n" << s << endl; return;}
// //   } else {cout << "NO\n"; return;}
// // }

// // int main () {
// //   // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// //   int t; cin >> t;
// //   while (t--) {
// //     int n; cin >> n;
// //     ll arr[n];
// //     for (int i = 0; i < n; i++) cin >> arr[i];
// //     myFunc(n, arr);
// //   }
// // }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// void myFunc(int n, ll arr[]) {
//     // Check if all elements are the same
//     bool all_same = true;
//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[0]) {
//             all_same = false;
//             break;
//         }
//     }
    
//     if (all_same) {
//         cout << "NO\n";
//         return;
//     }
    
//     // Try to find a valid coloring
//     for (int i = 1; i < n; i++) {
//         if (arr[i] != arr[0] && arr[i] != arr[n-1]) {
//             cout << "YES\n";
//             for (int j = 0; j < i; j++) {
//                 cout << "R";
//             }
//             for (int j = i; j < n; j++) {
//                 cout << "B";
//             }
//             cout << "\n";
//             return;
//         }
//     }
    
//     cout << "YES\nR";
//     for (int i = 1; i < n; i++) {
//         cout << "B";
//     }
//     cout << "\n";
// }

// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         ll arr[n];
//         for (int i = 0; i < n; i++) {
//             cin >> arr[i];
//         }
//         myFunc(n, arr);
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long

void myFunc(int n, ll arr[]) {
    if (arr[0] == arr[n-1]) {
        // All elements are the same
        cout << "NO\n";
        return;
    }
    // Try to color the first two elements differently
    string s(n, 'B');
    s[0] = 'R';

    // Check if this initial coloring works
    if (arr[0] != arr[1] || arr[1] != arr[n-1]) {
        cout << "YES\n" << s << endl;
        return;
    }

    // Otherwise, try to color the first element blue and the rest red
    s[0] = 'B';
    s[1] = 'R';

    // Check if this coloring works
    if (arr[0] != arr[1] || arr[1] != arr[n-1]) {
        cout << "YES\n" << s << endl;
        return;
    }

    // Check for more complex scenarios
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0] && arr[i] != arr[n-1]) {
            // Found an element that can be colored to make valid ranges
            s[i] = 'R';
            cout << "YES\n" << s << endl;
            return;
        }
    }

    // If no valid coloring found
    cout << "NO\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        myFunc(n, arr);
    }
    return 0;
}
