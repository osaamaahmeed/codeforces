#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n,m; cin >> n >> m;
  int arrA[n]; int arrB[m];
  for (int i = 0; i < n; i++) cin >> arrA[n];
  for (int i = 0; i < m; i++) cin >> arrB[m];
  
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (arrB[i] != arrA[j]) {cout << "NO"; return 0;}
      else break;
    }
  }
  cout << "YES";
}