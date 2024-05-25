#include <bits/stdc++.h>
using namespace std;
#define ll long long

int luckyNumbers[14] = {4 , 7, 44, 77, 444, 777, 47, 74, 447, 474, 477, 744, 747, 774};

bool luckyNum (int n) {
  string num = to_string(n);
  for (int i = 0; i < num.size(); i++) {
    if (num[i] != '4' || num[i] != '7') return 0;
  }
  return 1;
}

bool almost (int n, int arr[]) {
  for (int i = 0; i < 14; i++) {
    if (n % arr[i] == 0) return 1;
  }
  return 0;
}

int main () {
  int n; cin >> n;
  // cout << luckyNum(n) << " " << almost(n, luckyNumbers);
  luckyNum(n) || almost(n, luckyNumbers) ? cout << "Yes" : cout << "No"; 
}