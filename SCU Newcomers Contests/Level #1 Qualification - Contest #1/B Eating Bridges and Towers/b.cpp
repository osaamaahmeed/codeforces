#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll pc, pbt; cin >> pc >> pbt;
  ll res = pbt / pow(10, 18);
  if (pc < res) cout << "Eating Chicken for Iftar";
  else cout << "Eating Bridges and Towers for Iftar";
}