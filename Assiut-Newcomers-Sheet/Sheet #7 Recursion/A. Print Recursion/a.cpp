#include <bits/stdc++.h>
using namespace std;
#define ll long long

void myFunc (int n) {
  if (n == 0) return;
  cout << "I love Recursion\n";
  myFunc(n-1);
}

int main () {
  int n; cin >> n;
  myFunc(n);
}