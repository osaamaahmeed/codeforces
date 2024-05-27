#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int x,y; cin >> x >> y;
    int screen = 15;
    int counter = 1;
    int a = 1,b = 4;
    while ((a*x) + (b*y) > screen) {
      screen += 15;
      counter++;
    }
    cout << counter << endl;
  }
}