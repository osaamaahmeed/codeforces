#include <bits/stdc++.h>
using namespace std;
#define ll long long

void myFunc (int n) {
  if (n == 0) return;
  myFunc(n-1);
  cout << n << endl;
}

int main () {
  int n; cin >> n;
  myFunc(n);
}