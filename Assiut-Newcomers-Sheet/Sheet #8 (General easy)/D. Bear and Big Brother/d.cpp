#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll a,b; cin >> a >> b;
  int years = 0;
  while (a <= b) {
    a *= 3;
    b *= 2;
    years++;
  }
  cout << years;
}