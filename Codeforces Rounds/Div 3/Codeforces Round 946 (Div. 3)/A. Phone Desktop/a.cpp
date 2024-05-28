#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--) {
    int x,y; cin >> x >> y;
    int screen = 15;
    int counter = 0;
    int a = 1,b = 4;
    int temp = y;
    while (temp > 0) {
      counter++;
      temp-=2;
    }
    while ((counter*screen) < ((a*x) + (b*y))) {
      counter++;
    }
    cout << counter << endl;
  }
}