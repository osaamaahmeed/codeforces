#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while (t--)
  {
    int n; cin >> n;
    ll ones = 0, twos = 0;
    for (int i = 0; i < n; i++)
    {
      ll x; cin >> x;
        if (x % 2 == 0) {
          twos += x / 2;
        } else {
          ones++;
          twos += (x+1) /2;
        }
    }
    cout << ones << " " << twos << endl;
  }
  
}