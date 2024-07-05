#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct fg {
  string name;
  int a,m,s,e, total;
};

bool sortByTotal (fg a, fg b) {
  if (a.total != b.total) return a.total > b.total;
  else return a.name < b.name;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  vector<fg> v(n);
  for (int i = 0; i < n; i++) {cin >> v[i].name >> v[i].a >> v[i].m >> v[i].s >> v[i].e; v[i].total = v[i].a+v[i].e+v[i].m+v[i].s;}
  sort(v.begin(), v.end(), sortByTotal);
  // cout << "=======\n";
  for (fg i : v) cout << i.name << " " << i.total << " " << i.a << " " << i.m << " " << i.s << " " << i.e << endl;
}