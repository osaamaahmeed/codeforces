#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  float a,b; cin >> a >> b;
  cout << "floor " << a << " / " << b << " = " << floor(a/b) << endl;
  cout << "ceil " << a << " / " << b << " = " << ceil(a/b) << endl;
  cout << "round " << a << " / " << b << " = " << round(a/b);
}