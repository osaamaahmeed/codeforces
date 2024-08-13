#include <bits/stdc++.h>
using namespace std;
#define ll long long

int myFunc (int temp) {
  int counter = 0;
  while (temp%2==0) {temp /= 2; counter++;}
  while (temp%3==0) {temp /= 3; counter++;}
  if (temp == 1) return counter;
  else return -1;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  if (m % n != 0) {
    cout << -1;
    return 0;
  } else if (n == m) {
    cout << 0;
    return 0;
  }
  int temp = m/n;
  if (myFunc(temp) != -1) cout << myFunc(temp);
  else cout << -1;
  
}