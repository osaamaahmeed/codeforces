#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  int arr[n*2];
  for (int i  = 0; i < (n*2); i++) cin >> arr[i];
  int onTable = 1;
  for (int i = 0; i < n; i++) {
    if (*(arr+i) != *(arr+1+i)) onTable = max(onTable, onTable+1);
    else {if(onTable > 1) onTable--;}
    // cout << onTable << endl;
  }
  cout << onTable;
}