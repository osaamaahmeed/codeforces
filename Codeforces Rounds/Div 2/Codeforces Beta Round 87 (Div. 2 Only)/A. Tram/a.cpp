#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int cap = 0;
  int temp = 0;
  for (int i = 0; i < n; i++) {
    int a,b; cin >> a >> b;
    if (i != n-1) temp -= a;
    temp += b;
    cap = max(temp, cap);
  }
  cout << cap;
}