#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  string s; cin >> s;
  int size = s.size();
  int indexF = 0, indexB = s.size()-1;
  if (size % 2 == 0) {

  } else if (size % 2 == 1) {
    for (int i = 0; i < size; i++)  {
      if (s[i] == '?') {
        if (i )
      }
    }
    
  } else {
    cout << "-1";
  }
}