#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  // ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  double problems = 26;
  double solved;
  cout << "How much solved ?\n";
  cin >> solved;
  int res = (solved/problems) * 100;
  cout << "You Solved: " << res << "%";
}