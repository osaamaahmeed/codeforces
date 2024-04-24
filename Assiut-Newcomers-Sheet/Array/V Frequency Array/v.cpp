#include <iostream>
using namespace std;

int main () {
  int n,m;
  cin >> n >> m;
  int arr[m+1];
  fill(arr, arr+m+1, 0);

  for (int i = 0; i < n; i++)
  {
    int x; cin >> x;
    arr[x]++;
  }

  for (int i = 1; i <= m; i++)  cout << arr[i] << endl;
}