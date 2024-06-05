#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool prime (int n) {
  if (n <= 1) return 0;
  else if (n == 2) return 1;
  else {
    for (int i = 2; i < n; i++) if (n % i == 0) return 0;
  }
  return 1;
}

int nextPrime (int n) {
  int nextNumber = n+1;
  for (int i = 2; i < nextNumber; i++) {
    if (nextNumber % i == 0) nextNumber++;
    else {if(prime(nextNumber)) {break;} else nextNumber++;}
  }
  return nextNumber;
}

int main () {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  int n,m; cin >> n >> m;
  // cout << nextPrime(n) << endl;
  if (nextPrime(n) == m && !(prime(m) == 0 || prime(n == 0) || prime(nextPrime(n)) == 0)) cout << "YES";
  else cout << "NO";
}