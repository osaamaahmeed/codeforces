#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  char c; cin >> c;
  string res;
  for (int i = 0; i < 12; i++)
  {
    char x; cin >> x;
    string color; cin >> color;
    if (c == x) res = color;
  }
  cout << res;
}