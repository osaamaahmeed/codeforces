#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s; cin >> s;
  string r;
  for (int i = 0; i < s.size(); i++) {
    if (r.find(s[i]) == r.npos) r += s[i]; 
  }
  sort(r.begin(), r.end());
  int oc[r.size()];
  for (int i = 0; i < r.size(); i++) oc[i] = count(s.begin(), s.end(), r[i]);
  for (int i = 0; i < r.size(); i++) cout << r[i] << " " << oc[i] << endl;
}