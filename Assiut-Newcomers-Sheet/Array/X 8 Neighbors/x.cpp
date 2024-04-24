#include <bits\stdc++.h>
using namespace std;

int main () {
  int n,m; cin >>n >> m;
  char arr[n][m];
  for (int i = 0; i < n; i++) for (int j = 0; j < m; j++) cin >> arr[i][j];
  int x,y; cin >> x >> y;

  for (int i = x-2; i <= x; i++)
  {
    if (i < 0) continue; 
    for (int j = y-2; j <= y; j++)
    {
      if (j == y-1 || j < 0) continue;
      if(arr[i][j] != 'x') {
        cout << "no"; return 0;
      }
    }
  }
  cout << "yes";
}