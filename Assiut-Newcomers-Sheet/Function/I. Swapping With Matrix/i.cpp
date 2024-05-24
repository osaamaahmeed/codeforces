#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int s = 500;
void mySwab (int size, int x, int y, int arr[s][s]) {
    arr[size][size];
    for(int i=0;i<size;i++)
        swap(arr[x-1][i],arr[y-1][i]);
    for(int i=0;i<size;i++)
        swap(arr[i][x-1],arr[i][y-1]);
}

int main () {
  int n,x,y; cin >> n >> x >> y;
  int arr[s][s];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  mySwab(n, x, y, arr);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}