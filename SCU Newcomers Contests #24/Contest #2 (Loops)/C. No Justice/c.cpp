#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int tasks; cin >> tasks;
  ll a = 0,b = 0,c = 0;
  while(tasks--) {
    char c; cin >> c;
    if (c == 'A') a++;
    else if (c == 'B') b++;
    else if (c == 'C') c++;
  }
  ll mostTasks = max(a,max(b,c));
  if (mostTasks == a) cout << "A";
  else if (mostTasks == b) cout << "B";
  else if (mostTasks == c) cout << "C";
}