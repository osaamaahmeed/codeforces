#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  char arr[n][m];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      arr[i][j] = '.';
    }
  }
  for (int i = 0; i < n; i+=2) {
    for (int j = 0; j < m; j++) {
      arr[i][j] = '#';
    }
  }
  int temp = 1;
  bool last = true;
  while (temp < n) {
    if (last) {arr[temp][m-1] = '#'; temp+=2; last = 0;}
    else if (last == 0) {arr[temp][0] = '#'; temp+=2; last = 1;}
  }


  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << arr[i][j];
    }
    cout << endl;
  }
}