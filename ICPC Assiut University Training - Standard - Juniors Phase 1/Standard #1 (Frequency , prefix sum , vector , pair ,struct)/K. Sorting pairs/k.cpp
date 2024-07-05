#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool sortByName (pair<string, int>a, pair<string,int>b) {return a.first < b.first;}

bool sortBySalary (pair<string,int>a, pair<string,int>b) {
  if (a.second != b.second) return a.second > b.second;
  else return sortByName(a,b);
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  vector<pair<string,int>> v(n);
  for (int i = 0; i < n; i++) cin >> v[i].first >> v[i].second;
  sort(v.begin(), v.end(), sortBySalary);
  for (auto i : v) cout << i.first << " " << i.second << endl;
}