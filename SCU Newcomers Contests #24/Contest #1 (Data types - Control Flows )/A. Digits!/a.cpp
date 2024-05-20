#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll n; cin >> n;
  int size = 0;
  while (n) {size++; n/=10;}
  cout << size;
}