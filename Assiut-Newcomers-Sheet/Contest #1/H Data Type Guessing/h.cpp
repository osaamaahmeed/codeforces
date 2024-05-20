#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  double n,k,a; cin >> n >> k >> a;
  if (n < a || k < a) {
    cout << "double";
  } else if ((n*k)/a <= 2147483647) {
    cout << "int--";
  } else {
    cout << "int";
  }
}