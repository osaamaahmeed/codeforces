#include <bits\stdc++.h>
using namespace std;
#define ll long long

bool prime (ll n) {
  if (n == 2) return 1;
  if (n % 2 == 0) return 0;
  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0) return 0;
  }
  return 1;
}

int main () {
  ll n; cin >> n;
  vector <ll> vec;
  for (int i = 2; i <= n; i++)
  {
    if (prime(i)) vec.push_back(i);
  }

  ll number = n;
  ll index = 0;
  int x = 0;
  bool first = true;
  int temp = 1;
  while (number > 1) {
    if (number % vec[index] == 0) {
      x++;
      number /= vec[index];
    } else {
      temp *= (pow(vec[index], x));
      if (x > 0) {
        cout << "(" << vec[index] << "^" << x << ")";
        if(number > 1) cout << "*";
      }
      index++;
      x = 0;
      first = false;
    }
  }
    if (vec[index] == n/temp) cout << "(" << n/temp << "^1)";
    else cout << "(" << vec[index] << "^" << x << ")";
}