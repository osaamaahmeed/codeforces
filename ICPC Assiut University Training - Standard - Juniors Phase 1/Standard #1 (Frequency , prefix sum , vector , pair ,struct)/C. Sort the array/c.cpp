#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  int n; cin >> n;
  vector <int> vec;
  for (int i = 0; i < n; i++) {int temp; cin >> temp; vec.push_back(temp);}
  sort(vec.begin(), vec.end());
  for (int i : vec) cout << i << " ";
}