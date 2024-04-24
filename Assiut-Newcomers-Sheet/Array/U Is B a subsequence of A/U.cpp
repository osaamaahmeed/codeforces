#include <iostream>
using namespace std;

int main () {
  int n,m; cin >> n >>m ;
  int arrA[n], arrB[m];
  for (int i = 0; i < n; i++) cin >> arrA[i];
  for (int i = 0; i < m; i++) cin >> arrB[i];
  
  int j = 0;
  for (int i = 0; i < n; i++)
  {
    if (arrA[i] == arrB[j]) j++;
  }
  if (j == m) cout << "YES";
  else cout << "NO";
}