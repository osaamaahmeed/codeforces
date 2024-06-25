#include <bits/stdc++.h>
using namespace std;
#define ll long long

string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  char c; string s; cin >> c >> s;
  string res;
  if (c == 'R') {
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < keyboard.size(); j++) {
        if (s[i] == keyboard[j]) {res+=keyboard[j-1]; break;}
      }
    }
  } else {
    for (int i = 0; i < s.size(); i++) {
      for (int j = 0; j < keyboard.size(); j++) {
        if (s[i] == keyboard[j]) {res+=keyboard[j+1]; break;}
      }
    }
  }
  cout << res;
}