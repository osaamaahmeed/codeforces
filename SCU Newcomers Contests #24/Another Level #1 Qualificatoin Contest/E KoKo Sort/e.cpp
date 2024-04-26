#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  int n; cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) cin >> arr[i];
  vector<int> vec;
  vec.push_back(arr[0]);
  int index = 0;
  for (int i = 1; i < n; i++)
  {
    if (vec.at(index) <= arr[i]) {vec.push_back(arr[i]); index++;}
  }
  for (int i : vec) {
    cout << i << " ";
  }
}