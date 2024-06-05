#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  char arr[n];
  int size = n%2 == 1 ? n/2 : (n/2)-1;
  arr[size] = s[0];
  int leftIndex = size - 1;
  int rightIndex = size + 1;
  bool even = n%2;
  for (int i = 1; i < s.size(); i++) {
    if (i % 2 == even) {arr[leftIndex] = s[i]; leftIndex--;}
    else {arr[rightIndex] = s[i]; rightIndex++;}
  }

  for (char i : arr) cout << i;
}