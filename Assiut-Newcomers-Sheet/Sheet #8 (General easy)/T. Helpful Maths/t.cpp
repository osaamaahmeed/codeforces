#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  string s; cin >> s;
  string numbers;
  for (int i = 0; i < s.size(); i++) if (s[i] != '+') numbers+=s[i];
  sort(numbers.begin(), numbers.end());
  for (int i = 0; i < numbers.size(); i++) {cout << numbers[i]; if (i != numbers.size()-1 && numbers.size() > 1) cout << "+";}
}