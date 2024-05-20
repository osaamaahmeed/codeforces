#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    double s,d; cin >> s >> d;
    if (d > s) {cout << "Impossible\n"; continue;}
    else if (d == 0) {cout << s/2 << " " << s/2 << endl; continue;}
    else {
      double a = (s+d) / 2;
      double b = s - a;
      cout << a << " " << b << endl;
    }
  }
}