#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int t; cin >> t;
  while(t--) {
    int n,m; cin >> n >> m;
    string a,b;
    cin >> a >> b;
    int counter = 0;
    int index = 0;
    for (int i = 0; i < min(n,m); i++)
    {
      if (a[i] == b[index]) {counter++; index++;}
    }
    cout << counter << endl;
  }
}