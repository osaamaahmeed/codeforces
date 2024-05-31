#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  string s; cin >> s;
  char arr[5] = {'h', 'e', 'l', 'l', 'o'};
  int index =  0;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == arr[index]) {
      // cout << s[i] << endl;
      index++;
    }
  }
  if (index == 5) cout << "YES";
  else cout << "NO";
  // if (find(s.begin(), s.end(), "hello"))
}