#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n,m; cin >> n >> m;
  // char snake[n][m];
  // for (int i = 0; i < n; i++){ for(int j = 0; j < m; j++) {snake[i][j] = '.';}}
  
  // for (int i = 0; i < n; i+=2){
  //   for (int j = 0; j < m; j++) {
  //     snake[i][j] = '#';
  //   }
  // }
  // for (int i = 0; i < n; i++) {
  //   for (int j = 0; j <= m; j++) {
  //     cout << snake[i][j];
  //   }
  //   cout << endl;
  // }
  string s[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      s[i][j] = '.';
    }
  }
  int temp = 1;
  bool rf = true;
  for (int i = 0; i < n; i++) {
    if (i == temp) {
      if (rf) {
        s[i][m-1] = '#';
        rf = false;
      } else {
        s[i][0] = '#';
        rf = true;
      }
      temp += 2;
      continue;
    }
    for (int j = 0; j < m; j++) {
      s[i][j] = '#';
    }
  }
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << s[i][j];
    }
    cout << endl;
  }
}