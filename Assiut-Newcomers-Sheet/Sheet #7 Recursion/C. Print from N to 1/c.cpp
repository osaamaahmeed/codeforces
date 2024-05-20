#include <bits/stdc++.h>
using namespace std;
#define ll long long

void myFunc (int n) {
  if (n == 0) return;
  cout << n;
  if (n > 1) cout << " ";
  myFunc(n-1);
}

int main () {
  int n; cin >> n;
  myFunc(n);
}