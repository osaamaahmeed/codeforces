#include <bits/stdc++.h>
using namespace std;
#define ll long long

int freq[200] = {0};
int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s1,s2;
  getline(cin, s1);
  getline(cin, s2);
  for (int i = 0; i < s1.size(); i++) {
    freq[s1[i]]++;
  }
  for (int i = 0; i < s2.size(); i++) {
    if (freq[s2[i]] == 0 && s2[i] != ' ') {cout << "NO"; return 0;}
    else freq[s2[i]]--;
  }
  cout << "YES";
}