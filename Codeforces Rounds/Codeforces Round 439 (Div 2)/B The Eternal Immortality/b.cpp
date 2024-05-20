#include <bits\stdc++.h>
using namespace std;
#define ll long long

int main () {
  ll a,b; cin >> a >> b;
  ll num = b-a;
  ll sum = 1;
  if (num > 2) {
    for (int i = 1; i <= num; i++)
  {
    sum *= i;
  }
  }
  
  else {
    while(num > 0) {
    sum *= b;
    b--;
    num--;
  }
  }
  
  cout << sum%10;
}